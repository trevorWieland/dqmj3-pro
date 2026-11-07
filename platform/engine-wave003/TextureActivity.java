package org.dqm.textures;

import android.app.Activity;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.net.Uri;
import android.os.Bundle;
import android.util.AtomicFile;
import android.view.View;
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

public final class TextureActivity extends Activity {
    private static final ExecutorService OWNER = Executors.newSingleThreadExecutor();
    static { System.loadLibrary("dqm_textures"); }
    private static native boolean loadArchive(byte[] data);
    private static native int[] framePixels();
    private static native int sceneStat(int field);
    private TextureView view;
    private TextView status;
    private volatile long generation;
    private boolean active;
    private Uri pending;
    private Bitmap bitmap;

    @Override public void onCreate(Bundle saved) {
        super.onCreate(saved);
        LinearLayout layout = new LinearLayout(this);
        layout.setOrientation(LinearLayout.VERTICAL);
        Button button = new Button(this);
        button.setText("Import extracted NaviMap archive");
        button.setOnClickListener(v -> {
            Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
            intent.addCategory(Intent.CATEGORY_OPENABLE);
            intent.setType("*/*");
            startActivityForResult(intent, 3);
        });
        status = new TextView(this);
        status.setText("Owner asset required. Textured layout component; animation, fonts and advanced materials are pending.");
        view = new TextureView();
        layout.addView(button);
        layout.addView(status);
        layout.addView(view, new LinearLayout.LayoutParams(-1, 0, 1));
        setContentView(layout);
    }

    @Override protected void onActivityResult(int request, int result, Intent data) {
        super.onActivityResult(request, result, data);
        if (request == 3 && result == RESULT_OK && data != null) pending = data.getData();
    }

    @Override public void onResume() {
        super.onResume();
        active = true;
        ++generation;
        if (pending != null || bitmap == null) {
            Uri uri = pending;
            pending = null;
            request(uri);
        }
    }

    @Override public void onPause() {
        active = false;
        ++generation;
        super.onPause();
    }

    private void request(Uri uri) {
        long token = generation;
        File file = new File(getFilesDir(), "navimap.arc");
        OWNER.execute(() -> {
            Bitmap image = null;
            String message;
            try {
                byte[] bytes;
                try (InputStream input = uri == null ? new AtomicFile(file).openRead() : getContentResolver().openInputStream(uri)) {
                    if (input == null) throw new IOException("Missing document stream");
                    ByteArrayOutputStream output = new ByteArrayOutputStream();
                    byte[] block = new byte[8192];
                    int length, total = 0;
                    while ((length = input.read(block)) != -1) {
                        total += length;
                        if (total > 8388608) throw new IOException("Archive exceeds component bound");
                        output.write(block, 0, length);
                    }
                    bytes = output.toByteArray();
                }
                if (!loadArchive(bytes)) throw new IOException("Unsupported or malformed archive");
                image = Bitmap.createBitmap(framePixels(), 320, 240, Bitmap.Config.ARGB_8888);
                message = "Textured pictures: " + sceneStat(7) + "/" + sceneStat(5) + ". " + sceneStat(2) + " texture dependencies loaded. Component preview.";
                if (uri != null) {
                    AtomicFile storage = new AtomicFile(file);
                    FileOutputStream output = null;
                    try { output = storage.startWrite(); output.write(bytes); storage.finishWrite(output); }
                    catch (IOException error) { storage.failWrite(output); throw error; }
                }
            } catch (IOException | IllegalArgumentException | SecurityException error) {
                image = null;
                message = uri == null ? "Import your extracted NaviMap archive to view the measured textured subset." : "Archive rejected. Previous displayed scene retained.";
            }
            Bitmap completed = image;
            String completedMessage = message;
            runOnUiThread(() -> {
                if (!active || token != generation || isDestroyed()) return;
                if (completed != null) bitmap = completed;
                status.setText(completedMessage);
                view.invalidate();
            });
        });
    }

    private final class TextureView extends View {
        private final Paint paint = new Paint();
        TextureView() { super(TextureActivity.this); paint.setFilterBitmap(false); }
        @Override protected void onDraw(Canvas canvas) {
            canvas.drawColor(Color.rgb(32, 36, 44));
            if (bitmap == null) return;
            int width = getWidth(), height = width * 240 / 320;
            if (height > getHeight()) { height = getHeight(); width = height * 320 / 240; }
            int x = (getWidth() - width) / 2, y = (getHeight() - height) / 2;
            canvas.drawBitmap(bitmap, null, new Rect(x, y, x + width, y + height), paint);
        }
    }
}
