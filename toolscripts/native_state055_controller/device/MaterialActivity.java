package org.dqm.controllerprobe055;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.widget.TextView;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.nio.ByteBuffer;
import org.json.JSONArray;
import org.json.JSONObject;

public final class MaterialActivity extends Activity {
    static { System.loadLibrary("controller055"); System.loadLibrary("dqm_controllerprobe055"); }
    private static native long[] addresses();
    private static native int[] layout();
    private static native ByteBuffer memory(int index);
    private static native int boot(byte[] seed, int capacity, boolean provider, int[] headers);
    private static native int advance(int flags, int mask, int[] changes, boolean clear);
    private TextView view;
    private byte[] read(String name) throws Exception {
        if (name.contains("/") || name.contains("..")) throw new IllegalArgumentException("invalid fixture filename");
        File file = new File(getFilesDir(), name);
        byte[] bytes = new byte[(int)file.length()];
        try (FileInputStream input = new FileInputStream(file)) {
            int at = 0;
            while (at < bytes.length) {
                int count = input.read(bytes, at, bytes.length - at);
                if (count < 0) throw new IllegalStateException("short fixture");
                at += count;
            }
        }
        return bytes;
    }
    private void save(String name, byte[] bytes) throws Exception {
        try (FileOutputStream output = new FileOutputStream(new File(getFilesDir(), name))) { output.write(bytes); }
    }
    private JSONObject snapshot(String name) throws Exception {
        JSONObject result = new JSONObject();
        long[] values = addresses();
        result.put("name", name);
        result.put("addresses", new JSONArray(values));
        result.put("layout", new JSONArray(layout()));
        JSONArray regions = new JSONArray();
        for (int index = 0; index < values[15]; ++index) {
            if (index == 1) continue;
            ByteBuffer buffer = memory(index).duplicate();
            buffer.position(0);
            byte[] bytes = new byte[buffer.capacity()];
            buffer.get(bytes);
            save(name + "-region-" + index + ".bin", bytes);
            regions.put(index);
        }
        result.put("regions", regions);
        return result;
    }
    private void execute(Intent intent) {
        JSONObject report = new JSONObject();
        try {
            if (!"run".equals(intent.getStringExtra("mode"))) {
                report.put("addresses", new JSONArray(addresses()));
                report.put("layout", new JSONArray(layout()));
                report.put("status", "waiting-for-declared-controller-fixtures");
                save("ready.json", report.toString().getBytes("UTF-8"));
                view.setText("Native controller probe ready");
                return;
            }
            JSONObject input = new JSONObject(new String(read("cases.json"), "UTF-8"));
            if (input.getLong("arenaAddress") != addresses()[0]) throw new IllegalStateException("process changed before fixture initialization");
            JSONArray cases = input.getJSONArray("cases");
            JSONArray results = new JSONArray();
            for (int index = 0; index < cases.length(); ++index) {
                JSONObject item = cases.getJSONObject(index);
                JSONObject result = new JSONObject();
                String prefix = "case-" + index;
                int[] headers = new int[189];
                JSONArray h = item.getJSONArray("headers");
                for (int i = 0; i < headers.length; ++i) headers[i] = (int)h.getLong(i);
                int status = boot(read(item.getString("seed")), item.getInt("capacity"), item.getBoolean("provider"), headers);
                if (status != 0) throw new IllegalStateException("fixture initialization rejected: " + status);
                result.put("cold", snapshot(prefix + "-cold"));
                JSONArray calls = item.getJSONArray("calls");
                JSONArray rows = new JSONArray();
                for (int step = 0; step < calls.length(); ++step) {
                    JSONObject call = calls.getJSONObject(step);
                    JSONArray changes = call.getJSONArray("changes");
                    int[] words = new int[changes.length()];
                    for (int i = 0; i < words.length; ++i) words[i] = (int)changes.getLong(i);
                    int returned = advance((int)call.getLong("flags"), (int)call.getLong("mask"), words, call.getBoolean("clear"));
                    JSONObject row = snapshot(prefix + "-step-" + step);
                    row.put("status", returned);
                    if (returned != 0) throw new IllegalStateException("native controller guard failed: " + returned);
                    rows.put(row);
                }
                result.put("steps", rows);
                results.put(result);
            }
            report.put("status", "native-controller-corpus-completed");
            report.put("cases", results);
            view.setText("Native controller corpus completed");
        } catch (Throwable error) {
            try { report.put("status", "failed"); report.put("error", error.toString()); } catch (Exception ignored) { }
            view.setText("Controller probe failed: " + error);
        }
        try { save("report.json", report.toString().getBytes("UTF-8")); } catch (Exception ignored) { }
    }
    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        view = new TextView(this);
        setContentView(view);
        execute(getIntent());
    }
    @Override public void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        setIntent(intent);
        execute(intent);
    }
}
