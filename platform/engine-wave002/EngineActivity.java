package org.dqm.engine;

import android.app.Activity;
import android.app.Presentation;
import android.content.Context;
import android.content.res.Configuration;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.hardware.display.DisplayManager;
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
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileInputStream;
import java.io.InputStream;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public final class EngineActivity extends Activity implements DisplayManager.DisplayListener, Choreographer.FrameCallback {
    private static native void reset();
    private static native void resumeEngine(boolean active);
    private static native void surface(int role, int token, boolean ready);
    private static native int step(int elapsedUs);
    private static native int snapshot(int field);
    private static native void button(int which, boolean down);
    private static native void axis(int x, int y);
    private static native int touch(int role, int width, int height, int x, int y, boolean down);
    private static native int rect(int role, int view, int width, int height, int field);
    private static native int request(String path);
    private static native int claim();
    private static native String path(int handle);
    private static native int complete(int handle, byte[] data);
    private static native byte[] checkpoint();
    private static native boolean restore(byte[] data);
    private static native int layoutCount();
    private static native int layoutSize(int dimension);
    private static native int layoutValue(int pane, int field);
    static { System.loadLibrary("dqm_engine"); }
    private static int nextToken = 1;
    private final ExecutorService resources = Executors.newSingleThreadExecutor();
    private DisplayManager displays;
    private EngineSurface primary;
    private Bottom bottom;
    private AtomicFile save;
    private byte[] restored;
    private boolean active;
    private boolean scheduled;
    private boolean destroyed;
    private long previousFrame;

    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        reset();
        save = new AtomicFile(new File(getFilesDir(), "engine-component.save"));
        try { restored = save.readFully(); } catch (Exception ignored) { restored = null; }
        if (state != null && state.containsKey("checkpoint")) restored = state.getByteArray("checkpoint");
        displays = (DisplayManager)getSystemService(Context.DISPLAY_SERVICE);
        displays.registerDisplayListener(this, null);
        primary = new EngineSurface(this, 0);
        setContentView(primary);
    }

    @Override public void onResume() {
        super.onResume();
        active = true;
        previousFrame = 0;
        resumeEngine(true);
        if (snapshot(3) == 0 && snapshot(4) == 0) request(new File(getFilesDir(), "measured-layout.bflyt").isFile() ? "layouts/measured.bflyt" : "scenes/example.dat");
        pumpAssets();
        updateDisplays();
        schedule();
    }

    private void persist() {
        byte[] data = checkpoint();
        if (data == null) return;
        FileOutputStream output = null;
        try {
            output = save.startWrite();
            output.write(data);
            save.finishWrite(output);
        } catch (Exception error) { if (output != null) save.failWrite(output); }
    }

    @Override public void onPause() {
        active = false;
        resumeEngine(false);
        Choreographer.getInstance().removeFrameCallback(this);
        scheduled = false;
        persist();
        closeBottom();
        super.onPause();
    }

    @Override public void onSaveInstanceState(Bundle state) {
        byte[] data = checkpoint();
        if (data != null) state.putByteArray("checkpoint", data);
        super.onSaveInstanceState(state);
    }

    @Override public void onDestroy() {
        destroyed = true;
        resources.shutdownNow();
        Choreographer.getInstance().removeFrameCallback(this);
        if (displays != null) displays.unregisterDisplayListener(this);
        closeBottom();
        if (primary != null) primary.close();
        super.onDestroy();
    }

    @Override public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        updateDisplays();
    }

    private void pumpAssets() {
        int next;
        while ((next = claim()) > 0) {
            final int handle = next;
            final String name = path(handle);
            resources.submit(() -> {
                byte[] data = null;
                try (InputStream input = name.equals("layouts/measured.bflyt") ? new FileInputStream(new File(getFilesDir(), "measured-layout.bflyt")) : getAssets().open(name);
                     ByteArrayOutputStream output = new ByteArrayOutputStream()) {
                    byte[] block = new byte[1024];
                    int count;
                    while ((count = input.read(block)) >= 0) {
                        if (output.size() + count > 65536 || Thread.currentThread().isInterrupted()) throw new java.io.IOException("Resource bound");
                        output.write(block, 0, count);
                    }
                    data = output.toByteArray();
                } catch (Exception ignored) { data = null; }
                final byte[] result = data;
                runOnUiThread(() -> {
                    if (destroyed) return;
                    if (complete(handle, result) == 1 && restored != null) { restore(restored); restored = null; }
                    if (primary != null) primary.render();
                });
            });
        }
    }

    private void schedule() {
        if (active && primary != null && primary.ready && !scheduled) {
            scheduled = true;
            Choreographer.getInstance().postFrameCallback(this);
        }
    }

    @Override public void doFrame(long now) {
        scheduled = false;
        if (!active || !primary.ready) return;
        if (previousFrame != 0) step((int)Math.min(133328, Math.max(0, (now - previousFrame) / 1000)));
        previousFrame = now;
        primary.render();
        if (bottom != null && bottom.view != null) bottom.view.render();
        schedule();
    }

    private void closeBottom() {
        Bottom old = bottom;
        bottom = null;
        if (old != null) { if (old.view != null) old.view.close(); old.dismiss(); }
    }

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
        if (chosen != null) {
            try { bottom = new Bottom(this, chosen); bottom.show(); }
            catch (RuntimeException error) { closeBottom(); }
        }
    }

    @Override public void onDisplayAdded(int id) { updateDisplays(); }
    @Override public void onDisplayRemoved(int id) { updateDisplays(); }
    @Override public void onDisplayChanged(int id) { updateDisplays(); }

    private final class Bottom extends Presentation {
        EngineSurface view;
        Bottom(Context context, Display display) { super(context, display); }
        @Override public void onCreate(Bundle state) {
            super.onCreate(state);
            getWindow().addFlags(WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE);
            view = new EngineSurface(getContext(), 1);
            setContentView(view);
        }
        @Override public void onStop() { if (view != null) view.close(); super.onStop(); }
    }

    private final class EngineSurface extends SurfaceView implements SurfaceHolder.Callback {
        final int role;
        final int token = nextToken++;
        final Paint paint = new Paint(Paint.ANTI_ALIAS_FLAG);
        int pointer = -1;
        boolean ready;
        EngineSurface(Context context, int role) { super(context); this.role = role; getHolder().addCallback(this); }
        @Override public void surfaceCreated(SurfaceHolder holder) { ready = true; surface(role, token, true); if (role == 0) updateDisplays(); schedule(); }
        @Override public void surfaceChanged(SurfaceHolder holder, int format, int width, int height) {
            ready = width > 0 && height > 0;
            surface(role, token, ready);
            previousFrame = 0;
            schedule();
        }
        @Override public void surfaceDestroyed(SurfaceHolder holder) { close(); }
        void close() {
            ready = false;
            surface(role, token, false);
            touch(role, 0, 0, 0, 0, false);
            pointer = -1;
            if (role == 0) { Choreographer.getInstance().removeFrameCallback(EngineActivity.this); scheduled = false; previousFrame = 0; }
        }
        void render() {
            if (!ready || !getHolder().getSurface().isValid()) return;
            Canvas canvas = null;
            try {
                canvas = getHolder().lockCanvas();
                if (canvas == null) return;
                canvas.drawColor(Color.rgb(12, 15, 23));
                for (int view = 0; view < 2; ++view) {
                    int x = rect(role, view, getWidth(), getHeight(), 0);
                    int y = rect(role, view, getWidth(), getHeight(), 1);
                    int w = rect(role, view, getWidth(), getHeight(), 2);
                    int h = rect(role, view, getWidth(), getHeight(), 3);
                    if (w <= 0 || h <= 0) continue;
                    paint.setColor(view == 0 ? Color.rgb(24, 58, 74) : Color.rgb(56, 35, 75));
                    canvas.drawRect(x, y, x + w, y + h, paint);
                    paint.setColor(Color.rgb(220, 190, 90));
                    if (snapshot(3) == 2) {
                        canvas.save();
                        canvas.clipRect(x, y, x + w, y + h);
                        float sx = w / (layoutSize(0) * 1000f), sy = h / (layoutSize(1) * 1000f);
                        for (int pane = 0; pane < layoutCount(); ++pane) {
                            if (layoutValue(pane, 9) == 0) continue;
                            for (int edge = 0; edge < 4; ++edge) {
                                int next = (edge + 1) % 4;
                                canvas.drawLine(x + layoutValue(pane, edge * 2) * sx, y + layoutValue(pane, edge * 2 + 1) * sy,
                                                x + layoutValue(pane, next * 2) * sx, y + layoutValue(pane, next * 2 + 1) * sy, paint);
                            }
                        }
                        canvas.restore();
                    } else {
                        float px = x + snapshot(1) * w / 400f, py = y + snapshot(2) * h / 240f;
                        canvas.drawCircle(px, py, Math.max(5, w / 40f), paint);
                    }
                    paint.setColor(Color.WHITE);
                    paint.setTextSize(Math.max(14, w / 25f));
                    canvas.drawText(snapshot(3) == 2 ? "Measured layout wireframe" : view == 0 ? "Portable scene services" : "Touch map", x + 8, y + h / 7f, paint);
                    canvas.drawText("ticks " + snapshot(0) + " resource " + snapshot(3) + " error " + snapshot(9), x + 8, y + h - 12, paint);
                }
            } catch (RuntimeException error) { close(); }
            finally { if (canvas != null) try { getHolder().unlockCanvasAndPost(canvas); } catch (RuntimeException ignored) { close(); } }
        }
        @Override public boolean onTouchEvent(MotionEvent event) {
            int action = event.getActionMasked();
            if (action == MotionEvent.ACTION_DOWN) pointer = event.getPointerId(0);
            if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_CANCEL ||
                (action == MotionEvent.ACTION_POINTER_UP && event.getPointerId(event.getActionIndex()) == pointer)) {
                pointer = -1;
                touch(role, getWidth(), getHeight(), 0, 0, false);
                return true;
            }
            int index = pointer < 0 ? -1 : event.findPointerIndex(pointer);
            return ready && index >= 0 && touch(role, getWidth(), getHeight(), (int)event.getX(index), (int)event.getY(index), true) != 0;
        }
    }

    private int mappedKey(int key) {
        switch (key) {
        case KeyEvent.KEYCODE_BUTTON_A: return 0;
        case KeyEvent.KEYCODE_BUTTON_B: return 1;
        case KeyEvent.KEYCODE_BUTTON_X: return 2;
        case KeyEvent.KEYCODE_BUTTON_Y: return 3;
        case KeyEvent.KEYCODE_BUTTON_L1: return 4;
        case KeyEvent.KEYCODE_BUTTON_R1: return 5;
        case KeyEvent.KEYCODE_BUTTON_START: return 6;
        case KeyEvent.KEYCODE_BUTTON_SELECT: return 7;
        case KeyEvent.KEYCODE_DPAD_UP: return 8;
        case KeyEvent.KEYCODE_DPAD_DOWN: return 9;
        case KeyEvent.KEYCODE_DPAD_LEFT: return 10;
        case KeyEvent.KEYCODE_DPAD_RIGHT: return 11;
        default: return -1;
        }
    }
    @Override public boolean dispatchKeyEvent(KeyEvent event) {
        int key = mappedKey(event.getKeyCode());
        if (key >= 0 && (event.getAction() == KeyEvent.ACTION_DOWN || event.getAction() == KeyEvent.ACTION_UP)) {
            button(key, event.getAction() == KeyEvent.ACTION_DOWN); return true;
        }
        return super.dispatchKeyEvent(event);
    }
    private int normalizedAxis(MotionEvent event, int id) {
        InputDevice device = event.getDevice();
        InputDevice.MotionRange range = device == null ? null : device.getMotionRange(id, event.getSource());
        float value = event.getAxisValue(id), flat = range == null ? 0.15f : range.getFlat();
        return Math.abs(value) <= flat ? 0 : (int)(Math.max(-1, Math.min(1, value)) * 32767);
    }
    @Override public boolean onGenericMotionEvent(MotionEvent event) {
        if ((event.getSource() & InputDevice.SOURCE_JOYSTICK) == InputDevice.SOURCE_JOYSTICK) {
            axis(normalizedAxis(event, MotionEvent.AXIS_X), normalizedAxis(event, MotionEvent.AXIS_Y)); return true;
        }
        return super.onGenericMotionEvent(event);
    }
}
