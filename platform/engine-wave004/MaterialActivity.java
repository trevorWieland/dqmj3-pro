package org.dqm.materials;

import android.app.Activity;
import android.app.Presentation;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.hardware.display.DisplayManager;
import android.net.Uri;
import android.os.Bundle;
import android.util.AtomicFile;
import android.view.Choreographer;
import android.view.Display;
import android.view.InputDevice;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public final class MaterialActivity extends Activity implements DisplayManager.DisplayListener, Choreographer.FrameCallback {
    private static native void reset();
    private static native void resumeEngine(boolean active);
    private static native void surface(int role, int token, boolean ready);
    private static native int request();
    private static native int claim();
    private static native int complete(int handle, byte[] bytes);
    private static native int sceneStat(int view, int field);
    private static native int state(int field);
    private static native int rect(int role, int view, int width, int height, int field);
    private static native void button(int which, boolean down);
    private static native void axis(int x, int y);
    private static native int touch(int role, int width, int height, int x, int y, boolean down);
    private static native int step(int elapsed);
    private static native int[] pixels(int view);
    static { System.loadLibrary("dqm_materials"); }
    private static final ExecutorService FILES = Executors.newSingleThreadExecutor();
    private static int nextToken = 1;
    private final Bitmap[] frames = new Bitmap[2];
    private DisplayManager displays;
    private MapSurface primary;
    private Bottom bottom;
    private TextView status;
    private Uri pending;
    private boolean active, destroyed, scheduled;
    private long previous;
    private int revision;

    @Override public void onCreate(Bundle saved) {
        super.onCreate(saved);
        reset();
        displays = (DisplayManager)getSystemService(Context.DISPLAY_SERVICE);
        displays.registerDisplayListener(this, null);
        LinearLayout layout = new LinearLayout(this);
        layout.setOrientation(LinearLayout.VERTICAL);
        Button load = new Button(this);
        load.setText("Import extracted NaviMap archive");
        load.setOnClickListener(v -> {
            Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
            intent.addCategory(Intent.CATEGORY_OPENABLE);
            intent.setType("*/*");
            startActivityForResult(intent, 4);
        });
        status = new TextView(this);
        status.setText("Measured map mirrored across two views for platform integration. No upper game scene or gameplay.");
        primary = new MapSurface(this, 0);
        layout.addView(load); layout.addView(status);
        layout.addView(primary, new LinearLayout.LayoutParams(-1, 0, 1));
        setContentView(layout);
    }

    @Override protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == 4 && resultCode == RESULT_OK && data != null) {
            pending = data.getData();
            if (active && pending != null) { Uri selected = pending; pending = null; ++revision; read(selected); }
        }
    }

    @Override public void onResume() {
        super.onResume();
        active = true; ++revision; previous = 0; resumeEngine(true);
        if (pending != null || sceneStat(0, 14) == 0) { Uri selected = pending; pending = null; read(selected); }
        updateDisplays(); schedule();
    }

    @Override public void onPause() {
        active = false; ++revision; resumeEngine(false);
        Choreographer.getInstance().removeFrameCallback(this); scheduled = false; previous = 0;
        closeBottom();
        super.onPause();
    }

    @Override public void onDestroy() {
        destroyed = true; ++revision;
        Choreographer.getInstance().removeFrameCallback(this);
        displays.unregisterDisplayListener(this); closeBottom(); primary.close();
        super.onDestroy();
    }

    @Override public void onConfigurationChanged(Configuration configuration) { super.onConfigurationChanged(configuration); updateDisplays(); }

    private void read(Uri uri) {
        final int token = revision, handle = request();
        if (handle <= 0 || claim() != handle) return;
        File cache = new File(getFilesDir(), "navimap.arc");
        FILES.execute(() -> {
            byte[] bytes = null;
            try (InputStream input = uri == null ? new AtomicFile(cache).openRead() : getContentResolver().openInputStream(uri)) {
                if (input == null) throw new IOException("Missing document stream");
                ByteArrayOutputStream output = new ByteArrayOutputStream();
                byte[] block = new byte[8192];
                int size;
                while ((size = input.read(block)) != -1) {
                    if (output.size() + size > 8388608) throw new IOException("Archive bound");
                    output.write(block, 0, size);
                }
                bytes = output.toByteArray();
            } catch (IOException | SecurityException ignored) { bytes = null; }
            final byte[] data = bytes;
            runOnUiThread(() -> {
                if (destroyed || !active || token != revision) { complete(handle, null); return; }
                if (complete(handle, data) != 1) {
                    status.setText(uri == null ? "Import your extracted NaviMap archive." : "Import rejected. Both previous views remain.");
                    return;
                }
                for (int view = 0; view < 2; ++view) frames[view] = Bitmap.createBitmap(pixels(view), 320, 240, Bitmap.Config.ARGB_8888);
                status.setText(sceneStat(0, 7) + "/" + sceneStat(0, 5) + " picture materials handled. Static map mirrored for dual-view integration.");
                if (uri != null) FILES.execute(() -> {
                    AtomicFile storage = new AtomicFile(cache);
                    FileOutputStream output = null;
                    try { output = storage.startWrite(); output.write(data); storage.finishWrite(output); }
                    catch (IOException error) {
                        storage.failWrite(output);
                        runOnUiThread(() -> { if (!destroyed && active && token == revision) status.setText("Map loaded. Reimport may be needed after restart."); });
                    }
                });
                primary.render();
                if (bottom != null && bottom.view != null) bottom.view.render();
            });
        });
    }

    private void schedule() {
        if (active && primary.ready && !scheduled) { scheduled = true; Choreographer.getInstance().postFrameCallback(this); }
    }
    @Override public void doFrame(long now) {
        scheduled = false;
        if (!active || !primary.ready) return;
        if (previous != 0) step((int)Math.min(133328, Math.max(0, (now - previous) / 1000)));
        previous = now; primary.render();
        if (bottom != null && bottom.view != null) bottom.view.render();
        schedule();
    }
    private void closeBottom() { Bottom old = bottom; bottom = null; if (old != null) { if (old.view != null) old.view.close(); old.dismiss(); } }
    private void updateDisplays() {
        if (!active) return;
        Display main = primary.getDisplay();
        if (main == null) main = getWindow().getDecorView().getDisplay();
        if (main == null) return;
        Display chosen = null;
        for (Display display : displays.getDisplays(DisplayManager.DISPLAY_CATEGORY_PRESENTATION)) {
            if (display.isValid() && display.getDisplayId() != main.getDisplayId()) { chosen = display; break; }
        }
        if (bottom != null && chosen != null && bottom.getDisplay().getDisplayId() == chosen.getDisplayId()) return;
        closeBottom();
        if (chosen != null) try { bottom = new Bottom(this, chosen); bottom.show(); } catch (RuntimeException error) { closeBottom(); }
    }
    @Override public void onDisplayAdded(int id) { updateDisplays(); }
    @Override public void onDisplayRemoved(int id) { updateDisplays(); }
    @Override public void onDisplayChanged(int id) { updateDisplays(); }

    @Override public boolean dispatchKeyEvent(KeyEvent event) {
        int code = event.getKeyCode();
        int which = code == KeyEvent.KEYCODE_DPAD_UP ? 8 : code == KeyEvent.KEYCODE_DPAD_DOWN ? 9 :
                    code == KeyEvent.KEYCODE_DPAD_LEFT ? 10 : code == KeyEvent.KEYCODE_DPAD_RIGHT ? 11 :
                    code == KeyEvent.KEYCODE_BUTTON_A ? 0 : code == KeyEvent.KEYCODE_BUTTON_B ? 1 :
                    code == KeyEvent.KEYCODE_BUTTON_X ? 2 : code == KeyEvent.KEYCODE_BUTTON_Y ? 3 :
                    code == KeyEvent.KEYCODE_BUTTON_START ? 4 : code == KeyEvent.KEYCODE_BUTTON_SELECT ? 5 : -1;
        if (which < 0) return super.dispatchKeyEvent(event);
        if (event.getAction() == KeyEvent.ACTION_DOWN || event.getAction() == KeyEvent.ACTION_UP) button(which, event.getAction() == KeyEvent.ACTION_DOWN);
        return true;
    }
    @Override public boolean onGenericMotionEvent(MotionEvent event) {
        if ((event.getSource() & InputDevice.SOURCE_JOYSTICK) == InputDevice.SOURCE_JOYSTICK && event.getActionMasked() == MotionEvent.ACTION_MOVE) {
            axis((int)(event.getAxisValue(MotionEvent.AXIS_X) * 32767), (int)(event.getAxisValue(MotionEvent.AXIS_Y) * 32767)); return true;
        }
        return super.onGenericMotionEvent(event);
    }

    private final class Bottom extends Presentation {
        MapSurface view;
        Bottom(Context context, Display display) { super(context, display); }
        @Override public void onCreate(Bundle state) {
            super.onCreate(state); getWindow().addFlags(WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE);
            view = new MapSurface(getContext(), 1); setContentView(view);
        }
        @Override public void onStop() { if (view != null) view.close(); super.onStop(); }
    }
    private final class MapSurface extends SurfaceView implements SurfaceHolder.Callback {
        final int role, token = nextToken++;
        final Paint paint = new Paint();
        boolean ready;
        int pointer = -1;
        MapSurface(Context context, int role) { super(context); this.role = role; getHolder().addCallback(this); paint.setFilterBitmap(false); }
        @Override public void surfaceCreated(SurfaceHolder holder) { ready = true; surface(role, token, true); if (role == 0) updateDisplays(); schedule(); render(); }
        @Override public void surfaceChanged(SurfaceHolder holder, int format, int width, int height) { ready = width > 0 && height > 0; surface(role, token, ready); previous = 0; schedule(); render(); }
        @Override public void surfaceDestroyed(SurfaceHolder holder) { close(); }
        void close() {
            ready = false; surface(role, token, false); pointer = -1;
            if (role == 0) { Choreographer.getInstance().removeFrameCallback(MaterialActivity.this); scheduled = false; previous = 0; }
        }
        void render() {
            if (!ready || !getHolder().getSurface().isValid()) return;
            Canvas canvas = null;
            try {
                canvas = getHolder().lockCanvas();
                if (canvas == null) return;
                canvas.drawColor(Color.rgb(32, 36, 44));
                for (int view = 0; view < 2; ++view) {
                    int x = rect(role, view, getWidth(), getHeight(), 0), y = rect(role, view, getWidth(), getHeight(), 1);
                    int w = rect(role, view, getWidth(), getHeight(), 2), h = rect(role, view, getWidth(), getHeight(), 3);
                    if (w > 0 && h > 0 && frames[view] != null) canvas.drawBitmap(frames[view], null, new Rect(x, y, x + w, y + h), paint);
                }
            } catch (RuntimeException ignored) {
            } finally { if (canvas != null) try { getHolder().unlockCanvasAndPost(canvas); } catch (RuntimeException ignored) {} }
        }
        @Override public boolean onTouchEvent(MotionEvent event) {
            int action = event.getActionMasked();
            if (action == MotionEvent.ACTION_DOWN) pointer = event.getPointerId(0);
            int index = pointer < 0 ? -1 : event.findPointerIndex(pointer);
            if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_CANCEL ||
                action == MotionEvent.ACTION_POINTER_UP && event.getPointerId(event.getActionIndex()) == pointer) {
                touch(role, getWidth(), getHeight(), 0, 0, false); pointer = -1; return true;
            }
            if (index >= 0) touch(role, getWidth(), getHeight(), (int)event.getX(index), (int)event.getY(index), true);
            return true;
        }
    }
}
