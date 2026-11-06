package org.dqm.diagnostics;

import android.app.Activity;
import android.app.Presentation;
import android.content.Context;
import android.content.res.Configuration;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.hardware.display.DisplayManager;
import android.os.Bundle;
import android.view.Choreographer;
import android.view.Display;
import android.view.InputDevice;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.WindowManager;

public final class ShellActivity extends Activity implements DisplayManager.DisplayListener, Choreographer.FrameCallback {
    private static native void nativeReset();
    private static native void nativeResume(boolean active);
    private static native void nativeSurface(int role, int token, boolean ready);
    private static native void nativeTick(int owner);
    private static native int nativeSnapshot(int field);
    private static native void nativeRestore(int ticks);
    private static native void nativeButton(int button, boolean down);
    private static native void nativeAxis(int x, int y);
    private static native int nativeSmoke();
    private static native long nativeTouch(int role, int x, int y, int width, int height);
    private static native int nativeRect(int role, int view, int width, int height, int component);
    static { System.loadLibrary("dqm_diagnostic"); nativeReset(); }
    private static int nextToken = 1;
    private DiagnosticSurface primary;
    private BottomPresentation bottom;
    private DisplayManager displays;
    private boolean resumed;
    private boolean scheduled;

    @Override public void onCreate(Bundle saved) {
        super.onCreate(saved);
        int ticks = saved == null ? getPreferences(MODE_PRIVATE).getInt("ticks", 0) : saved.getInt("ticks", 0);
        nativeRestore(ticks);
        displays = (DisplayManager)getSystemService(Context.DISPLAY_SERVICE);
        displays.registerDisplayListener(this, null);
        primary = new DiagnosticSurface(this, 0);
        primary.setFitsSystemWindows(true);
        setContentView(primary);
    }

    @Override public void onResume() {
        super.onResume();
        resumed = true;
        nativeResume(true);
        refreshDisplays();
        schedule();
    }

    @Override public void onPause() {
        resumed = false;
        nativeResume(false);
        Choreographer.getInstance().removeFrameCallback(this);
        scheduled = false;
        getPreferences(MODE_PRIVATE).edit().putInt("ticks", nativeSnapshot(0)).apply();
        closeBottom();
        super.onPause();
    }

    @Override public void onDestroy() {
        Choreographer.getInstance().removeFrameCallback(this);
        if (displays != null) displays.unregisterDisplayListener(this);
        if (primary != null) primary.close();
        closeBottom();
        super.onDestroy();
    }

    @Override public void onSaveInstanceState(Bundle saved) {
        saved.putInt("ticks", nativeSnapshot(0));
        super.onSaveInstanceState(saved);
    }

    @Override public void onConfigurationChanged(Configuration config) {
        super.onConfigurationChanged(config);
        refreshDisplays();
        primary.render();
    }

    private void schedule() {
        if (resumed && primary != null && primary.ready && !scheduled) {
            scheduled = true;
            Choreographer.getInstance().postFrameCallback(this);
        }
    }

    @Override public void doFrame(long frameTimeNanos) {
        scheduled = false;
        if (!resumed || !primary.ready) return;
        nativeTick(0);
        primary.render();
        if (bottom != null && bottom.surface != null) bottom.surface.render();
        schedule();
    }

    private void closeBottom() {
        BottomPresentation old = bottom;
        bottom = null;
        if (old != null) {
            if (old.surface != null) old.surface.close();
            old.dismiss();
        }
        if (primary != null) primary.render();
    }

    private void refreshDisplays() {
        if (!resumed || displays == null) return;
        Display main = primary.getDisplay();
        if (main == null) main = getWindowManager().getDefaultDisplay();
        Display chosen = null;
        for (Display display : displays.getDisplays(DisplayManager.DISPLAY_CATEGORY_PRESENTATION)) {
            if (display.isValid() && display.getDisplayId() != main.getDisplayId()) { chosen = display; break; }
        }
        if (bottom != null && chosen != null && bottom.getDisplay().getDisplayId() == chosen.getDisplayId()) return;
        closeBottom();
        if (chosen != null) {
            try {
                BottomPresentation candidate = new BottomPresentation(this, chosen);
                bottom = candidate;
                candidate.show();
            } catch (RuntimeException error) {
                closeBottom();
            }
        }
    }

    @Override public void onDisplayAdded(int id) { refreshDisplays(); }
    @Override public void onDisplayRemoved(int id) { refreshDisplays(); }
    @Override public void onDisplayChanged(int id) { refreshDisplays(); }

    private final class BottomPresentation extends Presentation {
        DiagnosticSurface surface;
        BottomPresentation(Context context, Display display) { super(context, display); }
        @Override public void onCreate(Bundle saved) {
            super.onCreate(saved);
            getWindow().addFlags(WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE);
            surface = new DiagnosticSurface(getContext(), 1);
            setContentView(surface);
        }
        @Override public void onStop() {
            if (surface != null) surface.close();
            super.onStop();
        }
    }

    private final class DiagnosticSurface extends SurfaceView implements SurfaceHolder.Callback {
        final int role;
        final int token = nextToken++;
        boolean ready;
        final Paint paint = new Paint(Paint.ANTI_ALIAS_FLAG);
        DiagnosticSurface(Context context, int role) {
            super(context);
            this.role = role;
            getHolder().addCallback(this);
            setFocusable(role == 0);
        }
        @Override public void surfaceCreated(SurfaceHolder holder) {
            ready = true;
            nativeSurface(role, token, true);
            render();
            schedule();
        }
        @Override public void surfaceChanged(SurfaceHolder holder, int format, int width, int height) {
            ready = width > 0 && height > 0;
            nativeSurface(role, token, ready);
            render();
            schedule();
        }
        @Override public void surfaceDestroyed(SurfaceHolder holder) { close(); }
        void close() {
            ready = false;
            nativeSurface(role, token, false);
            if (role == 0) {
                Choreographer.getInstance().removeFrameCallback(ShellActivity.this);
                scheduled = false;
            }
        }
        void render() {
            if (!ready || !getHolder().getSurface().isValid()) return;
            Canvas canvas = null;
            try {
                canvas = getHolder().lockCanvas();
                if (canvas == null) return;
                canvas.drawColor(Color.rgb(15, 17, 25));
                for (int view = 0; view < 2; ++view) {
                    int x = nativeRect(role, view, getWidth(), getHeight(), 0);
                    int y = nativeRect(role, view, getWidth(), getHeight(), 1);
                    int w = nativeRect(role, view, getWidth(), getHeight(), 2);
                    int h = nativeRect(role, view, getWidth(), getHeight(), 3);
                    if (w <= 0 || h <= 0) continue;
                    paint.setColor(view == 0 ? Color.rgb(28, 75, 110) : Color.rgb(65, 35, 82));
                    canvas.drawRect(x, y, x + w, y + h, paint);
                    paint.setColor(Color.WHITE);
                    float size = Math.max(12, Math.min(w / 27f, h / 10f));
                    paint.setTextSize(size);
                    String[] lines = {
                        view == 0 ? "TOP - DIAGNOSTIC, NOT THE GAME" : "BOTTOM - SHARED STATE",
                        "Single-owner ticks: " + Integer.toUnsignedString(nativeSnapshot(0)),
                        "Recovered C smoke: " + nativeSmoke(),
                        "Buttons: " + nativeSnapshot(1) + " axes " + nativeSnapshot(2) + ", " + nativeSnapshot(3),
                        "Last touch view " + nativeSnapshot(4) + " @ " + nativeSnapshot(5) + "," + nativeSnapshot(6),
                        "Surface mask: " + nativeSnapshot(7)
                    };
                    for (int i = 0; i < lines.length; ++i) canvas.drawText(lines[i], x + size / 2, y + size * (i + 1.5f), paint);
                }
            } catch (RuntimeException error) {
                close();
            } finally {
                if (canvas != null) {
                    try { getHolder().unlockCanvasAndPost(canvas); } catch (RuntimeException ignored) { close(); }
                }
            }
        }
        @Override public boolean onTouchEvent(MotionEvent event) {
            if (!ready) return false;
            if (event.getActionMasked() == MotionEvent.ACTION_DOWN || event.getActionMasked() == MotionEvent.ACTION_MOVE) {
                return nativeTouch(role, (int)event.getX(), (int)event.getY(), getWidth(), getHeight()) >= 0;
            }
            return true;
        }
    }

    private int button(int key) {
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
        int mapped = button(event.getKeyCode());
        if (mapped >= 0 && (event.getAction() == KeyEvent.ACTION_DOWN || event.getAction() == KeyEvent.ACTION_UP)) {
            nativeButton(mapped, event.getAction() == KeyEvent.ACTION_DOWN);
            return true;
        }
        return super.dispatchKeyEvent(event);
    }

    private int axis(MotionEvent event, int which) {
        float value = event.getAxisValue(which);
        InputDevice device = event.getDevice();
        InputDevice.MotionRange range = device == null ? null : device.getMotionRange(which, event.getSource());
        float flat = range == null ? 0.15f : range.getFlat();
        return Math.abs(value) <= flat ? 0 : (int)(Math.max(-1, Math.min(1, value)) * 32767);
    }

    @Override public boolean onGenericMotionEvent(MotionEvent event) {
        if ((event.getSource() & InputDevice.SOURCE_JOYSTICK) == InputDevice.SOURCE_JOYSTICK) {
            nativeAxis(axis(event, MotionEvent.AXIS_X), axis(event, MotionEvent.AXIS_Y));
            return true;
        }
        return super.onGenericMotionEvent(event);
    }
}
