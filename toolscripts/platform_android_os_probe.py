PROBE = r'''
package org.dqm.osvalidation;
import android.app.Activity;
import android.app.Instrumentation;
import android.app.Presentation;
import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Bundle;
import android.os.ParcelFileDescriptor;
import android.os.Handler;
import android.os.Looper;
import android.system.Os;
import android.system.OsConstants;
import android.view.SurfaceView;
import android.view.PixelCopy;
import android.widget.TextView;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.BufferedReader;
import java.io.FileReader;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.security.MessageDigest;
import java.util.TreeSet;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import org.json.JSONArray;
import org.json.JSONObject;

public final class Probe extends Instrumentation {
    Activity activity;
    Class<?> target;
    boolean requireAsIs;
    final JSONObject report = new JSONObject();
    final JSONArray phases = new JSONArray();
    interface Action { void run() throws Exception; }
    void ui(Action action) {
        final Throwable[] failure = new Throwable[1];
        runOnMainSync(() -> { try { action.run(); } catch (Throwable error) { failure[0] = error; } });
        if (failure[0] != null) throw new RuntimeException(failure[0]);
    }
    Object field(Object object, String name) throws Exception {
        Field value = object.getClass().getDeclaredField(name);
        value.setAccessible(true); return value.get(object);
    }
    Object nativeValue(String name, int... values) throws Exception {
        Class<?>[] types = new Class<?>[values.length]; Object[] args = new Object[values.length];
        for (int i = 0; i < values.length; ++i) { types[i] = int.class; args[i] = values[i]; }
        Method method = target.getDeclaredMethod(name, types); method.setAccessible(true);
        return method.invoke(null, args);
    }
    String hash(byte[] bytes) throws Exception {
        byte[] digest = MessageDigest.getInstance("SHA-256").digest(bytes); StringBuilder value = new StringBuilder();
        for (byte item : digest) value.append(String.format("%02x", item & 255)); return value.toString();
    }
    String frame(int view) throws Exception {
        int[] pixels = (int[])nativeValue("pixels", view); byte[] bytes = new byte[pixels.length * 4];
        for (int i = 0; i < pixels.length; ++i) {
            bytes[i * 4] = (byte)(pixels[i] >> 16); bytes[i * 4 + 1] = (byte)(pixels[i] >> 8);
            bytes[i * 4 + 2] = (byte)pixels[i]; bytes[i * 4 + 3] = (byte)(pixels[i] >> 24);
        }
        return hash(bytes);
    }
    void shell(String command) throws Exception {
        ParcelFileDescriptor descriptor = getUiAutomation().executeShellCommand(command);
        try (FileInputStream input = new FileInputStream(descriptor.getFileDescriptor())) {
            byte[] buffer = new byte[4096]; while (input.read(buffer) != -1) {}
        } finally { descriptor.close(); }
    }
    boolean secondary() throws Exception {
        Object bottom = field(activity, "bottom");
        return bottom != null && ((Presentation)bottom).isShowing() && field(bottom, "view") != null &&
            (Boolean)field(field(bottom, "view"), "ready");
    }
    void await(String condition) throws Exception {
        for (int i = 0; i < 400; ++i) {
            boolean[] done = new boolean[1];
            ui(() -> {
                if (condition.equals("loaded")) done[0] = (Integer)nativeValue("sceneStat", 0, 14) > 0 &&
                    ((Bitmap[])field(activity, "frames"))[0] != null;
                if (condition.equals("secondary")) done[0] = secondary();
                if (condition.equals("removed")) done[0] = field(activity, "bottom") == null;
                if (condition.equals("paused")) done[0] = !(Boolean)field(activity, "active");
                if (condition.equals("resumed")) done[0] = (Boolean)field(activity, "active");
                if (condition.equals("rejected")) done[0] = ((TextView)field(activity, "status")).getText().toString().contains("Import your extracted");
                if (condition.equals("primary")) done[0] = (Boolean)field(field(activity, "primary"), "ready");
            });
            if (done[0]) return; Thread.sleep(100);
        }
        throw new IllegalStateException("Timed out: " + condition);
    }
    void snapshot(String phase) throws Exception {
        ui(() -> {
            JSONObject value = new JSONObject(); JSONArray states = new JSONArray(), stats = new JSONArray();
            for (int i = 0; i < 15; ++i) { states.put(nativeValue("state", i)); stats.put(nativeValue("sceneStat", 0, i)); }
            value.put("phase", phase).put("active", field(activity, "active")).put("state", states).put("stats", stats)
                .put("frame0", frame(0)).put("frame1", frame(1)).put("secondaryReady", secondary());
            Object bottom = field(activity, "bottom");
            if (bottom != null) value.put("secondaryDisplayId", ((Presentation)bottom).getDisplay().getDisplayId());
            phases.put(value);
        });
    }
    void screenshot() throws Exception {
        Thread.sleep(800);
        Bitmap image = getUiAutomation().takeScreenshot();
        if (image == null) throw new IllegalStateException("OS screenshot unavailable");
        try (FileOutputStream stream = new FileOutputStream(new File(getTargetContext().getFilesDir(), "os-primary.png"))) {
            image.compress(Bitmap.CompressFormat.PNG, 100, stream);
        }
        ui(() -> {
            SurfaceView surface = (SurfaceView)field(activity, "primary"); int[] origin = new int[2]; surface.getLocationOnScreen(origin);
            int x = (Integer)nativeValue("rect", 0, 0, surface.getWidth(), surface.getHeight(), 0);
            int y = (Integer)nativeValue("rect", 0, 0, surface.getWidth(), surface.getHeight(), 1);
            int width = (Integer)nativeValue("rect", 0, 0, surface.getWidth(), surface.getHeight(), 2);
            int height = (Integer)nativeValue("rect", 0, 0, surface.getWidth(), surface.getHeight(), 3);
            int[] pixels = (int[])nativeValue("pixels", 0); int equal = 0, count = 0;
            for (int row = 1; row < 10; ++row) for (int column = 1; column < 10; ++column) {
                int screenX = origin[0] + x + column * width / 10, screenY = origin[1] + y + row * height / 10;
                int sourceX = (int)((screenX + .5 - origin[0] - x) * 320 / width);
                int sourceY = (int)((screenY + .5 - origin[1] - y) * 240 / height);
                ++count; if ((image.getPixel(screenX, screenY) & 0xffffff) == (pixels[sourceY * 320 + sourceX] & 0xffffff)) ++equal;
            }
            report.put("actualOsSurfaceSamples", count).put("actualOsSurfaceSamplesEqual", equal)
                .put("screenshotWidth", image.getWidth()).put("screenshotHeight", image.getHeight())
                .put("surfaceX", origin[0]).put("surfaceY", origin[1]).put("surfaceWidth", surface.getWidth()).put("surfaceHeight", surface.getHeight())
                .put("mapX", x).put("mapY", y).put("mapWidth", width).put("mapHeight", height);
        });
    }
    void secondaryPixels() throws Exception {
        final Bitmap[] image = new Bitmap[1]; final SurfaceView[] surface = new SurfaceView[1];
        CountDownLatch done = new CountDownLatch(1); final int[] status = {-1};
        ui(() -> {
            surface[0] = (SurfaceView)field(field(activity, "bottom"), "view");
            image[0] = Bitmap.createBitmap(surface[0].getWidth(), surface[0].getHeight(), Bitmap.Config.ARGB_8888);
            PixelCopy.request(surface[0], image[0], result -> { status[0] = result; done.countDown(); }, new Handler(Looper.getMainLooper()));
        });
        if (!done.await(10, TimeUnit.SECONDS) || status[0] != PixelCopy.SUCCESS) throw new IllegalStateException("Secondary OS surface copy failed");
        ui(() -> {
            int width = surface[0].getWidth(), height = surface[0].getHeight();
            int x = (Integer)nativeValue("rect", 1, 1, width, height, 0), y = (Integer)nativeValue("rect", 1, 1, width, height, 1);
            int w = (Integer)nativeValue("rect", 1, 1, width, height, 2), h = (Integer)nativeValue("rect", 1, 1, width, height, 3);
            int[] pixels = (int[])nativeValue("pixels", 1); int equal = 0, count = 0;
            for (int row = 1; row < 10; ++row) for (int column = 1; column < 10; ++column) {
                int px = x + column * w / 10, py = y + row * h / 10;
                int sx = (int)((px + .5 - x) * 320 / w), sy = (int)((py + .5 - y) * 240 / h);
                ++count; if ((image[0].getPixel(px, py) & 0xffffff) == (pixels[sy * 320 + sx] & 0xffffff)) ++equal;
            }
            report.put("secondaryOsSurfaceSamples", count).put("secondaryOsSurfaceSamplesEqual", equal);
            if (requireAsIs && equal != count) throw new IllegalStateException("Successor secondary OS surface differs");
        });
    }
    @Override public void onCreate(Bundle args) { super.onCreate(args); requireAsIs = args != null && "true".equals(args.getString("requireAsIs")); start(); }
    @Override public void onStart() {
        Bundle result = new Bundle();
        try {
            report.put("pageSize", Os.sysconf(OsConstants._SC_PAGESIZE)).put("supportedAbis", new JSONArray(android.os.Build.SUPPORTED_ABIS));
            TreeSet<String> pages = new TreeSet<>();
            try (BufferedReader input = new BufferedReader(new FileReader("/proc/self/smaps"))) {
                String line; while ((line = input.readLine()) != null) if (line.startsWith("KernelPageSize:")) pages.add(line.substring(15).trim());
            }
            report.put("kernelPageSizes", new JSONArray(pages)).put("pid", android.os.Process.myPid());
            target = getTargetContext().getClassLoader().loadClass("org.dqm.projected.MaterialActivity");
            Intent intent = new Intent().setClassName(getTargetContext(), target.getName()).addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
            activity = startActivitySync(intent); await("loaded"); snapshot("loaded"); screenshot();
            report.put("asIsSurfaceSamplesEqual", report.getInt("actualOsSurfaceSamplesEqual"))
                .put("asIsSurfaceSamples", report.getInt("actualOsSurfaceSamples")).put("asIsRequired", requireAsIs);
            if (requireAsIs && report.getInt("asIsSurfaceSamplesEqual") != report.getInt("asIsSurfaceSamples"))
                throw new IllegalStateException("Successor as-is primary OS surface differs");
            if (report.getInt("actualOsSurfaceSamplesEqual") != report.getInt("actualOsSurfaceSamples")) {
                report.put("diagnosticSurfaceFormatOverride", "RGBA_8888 requested only by instrumentation; frozen activity unchanged");
                ui(() -> ((SurfaceView)field(activity, "primary")).getHolder().setFormat(android.graphics.PixelFormat.RGBA_8888));
                Thread.sleep(1000); await("primary"); screenshot(); snapshot("rgba-diagnostic");
                if (report.getInt("actualOsSurfaceSamplesEqual") != report.getInt("actualOsSurfaceSamples"))
                    throw new IllegalStateException("Explicit RGBA OS surface differs from native frame samples");
            }
            shell("settings put global overlay_display_devices 640x480/160"); await("secondary"); Thread.sleep(800); snapshot("secondary"); secondaryPixels();
            shell("input keyevent KEYCODE_HOME"); await("paused"); snapshot("paused"); Thread.sleep(300); snapshot("paused-stable");
            shell("am start -W -n org.dqm.projected.diagnostic/org.dqm.projected.MaterialActivity");
            await("resumed"); await("secondary"); snapshot("resumed");
            shell("settings delete global overlay_display_devices"); await("removed"); snapshot("secondary-removed");
            File cache = new File(getTargetContext().getFilesDir(), "navimap.arc"); byte[] original = new byte[(int)cache.length()];
            try (FileInputStream input = new FileInputStream(cache)) { int position = 0, amount;
                while (position < original.length && (amount = input.read(original, position, original.length - position)) > 0) position += amount;
                if (position != original.length) throw new IllegalStateException("Incomplete cached asset read"); }
            report.put("cachedArchiveSha256", hash(original));
            try (FileOutputStream output = new FileOutputStream(cache)) { output.write(new byte[]{1, 2, 3, 4}); }
            ui(() -> { Method method = target.getDeclaredMethod("read", Uri.class); method.setAccessible(true); method.invoke(activity, (Object)null); });
            await("rejected"); snapshot("bad-cache-rejected");
            try (FileOutputStream output = new FileOutputStream(cache)) { output.write(original); }
            ui(() -> activity.finish()); Thread.sleep(600); activity = startActivitySync(intent); await("loaded"); snapshot("cold-cache-reloaded");
            JSONArray mappings = new JSONArray();
            try (BufferedReader input = new BufferedReader(new FileReader("/proc/self/maps"))) {
                String line; while ((line = input.readLine()) != null) if (line.contains("libndk_translation") || line.contains("libdqm_projected")) mappings.put(line);
            }
            report.put("nativeMappings", mappings).put("nativeLibraryDir", getTargetContext().getApplicationInfo().nativeLibraryDir);
            report.put("status", "completed").put("phases", phases);
            result.putString("status", "completed");
        } catch (Throwable error) {
            try { report.put("status", "failed").put("error", android.util.Log.getStackTraceString(error)).put("phases", phases); }
            catch (Exception ignored) {}
            result.putString("error", android.util.Log.getStackTraceString(error));
        } finally {
            try (FileOutputStream stream = new FileOutputStream(new File(getTargetContext().getFilesDir(), "os-report.json"))) {
                stream.write(report.toString(2).getBytes("UTF-8"));
            } catch (Exception ignored) {}
            try { shell("settings delete global overlay_display_devices"); } catch (Exception ignored) {}
            finish(report.optString("status").equals("completed") ? Activity.RESULT_OK : Activity.RESULT_CANCELED, result);
        }
    }
}
'''
