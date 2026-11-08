package org.dqm.queueprobe067;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.zip.GZIPOutputStream;
import org.json.JSONArray;
import org.json.JSONObject;

public final class QueueActivity extends Activity {
    static { System.loadLibrary("dqm_queueprobe067"); }
    private static native int boot(byte[] input);
    private static native long enqueue();
    private static native int step();
    private static native int ready(long task);
    private static native void release(long task);
    private static native void pushOpaque();
    private static native void clear();
    private static native int destroy();
    private static native int[] layout();
    private static native long[] addresses();
    private static native ByteBuffer memory(int index);
    private int snapshotIndex;
    private JSONArray snapshots;

    private void save(String name, byte[] bytes) throws Exception {
        try (FileOutputStream output = new FileOutputStream(new File(getFilesDir(), name))) { output.write(bytes); }
    }

    private void snapshot(String caseName) throws Exception {
        JSONObject record = new JSONObject();
        String prefix = caseName + "-" + snapshotIndex++;
        record.put("prefix", prefix);
        record.put("addresses", new JSONArray(addresses()));
        record.put("layout", new JSONArray(layout()));
        for (int region = 0; region < 4; ++region) {
            ByteBuffer buffer = memory(region).duplicate();
            buffer.position(0);
            byte[] bytes = new byte[buffer.capacity()];
            buffer.get(bytes);
            try (GZIPOutputStream output = new GZIPOutputStream(new FileOutputStream(new File(getFilesDir(), prefix + "-region-" + region + ".gz")))) {
                output.write(bytes);
            }
        }
        snapshots.put(record);
    }

    private JSONObject executeCase(String name, byte[] input) throws Exception {
        if (boot(input) != 0) throw new IllegalStateException("source boot failed");
        snapshots = new JSONArray();
        snapshotIndex = 0;
        snapshot(name);
        ArrayList<Long> tasks = new ArrayList<>();
        int count = name.equals("single") ? 1 : name.equals("pending-shutdown") || name.equals("reuse") ? 3 : 0;
        for (int index = 0; index < count; ++index) {
            long task = enqueue();
            if (task <= 0xffffffffL || ready(task) != 0) throw new IllegalStateException("async ownership/ready failed");
            tasks.add(task);
        }
        if (name.equals("opaque-growth")) {
            pushOpaque();
            snapshot(name);
            clear();
        }
        snapshot(name);
        if (step() != 0) throw new IllegalStateException("worker yield failed");
        if (!tasks.isEmpty()) {
            if (ready(tasks.get(0)) != 1) throw new IllegalStateException("first completion failed");
            for (int index = 1; index < tasks.size(); ++index)
                if (ready(tasks.get(index)) != 0) throw new IllegalStateException("worker reordered FIFO");
            release(tasks.remove(0));
        }
        snapshot(name);
        if (name.equals("reuse")) {
            tasks.add(enqueue());
            snapshot(name);
            for (long task : tasks) {
                if (step() != 0 || ready(task) != 1) throw new IllegalStateException("reused queue completion failed");
                release(task);
                snapshot(name);
            }
        }
        if (destroy() != 0) throw new IllegalStateException("real pthread join/close failed");
        JSONObject result = new JSONObject();
        result.put("case", name);
        result.put("snapshots", snapshots);
        snapshots = new JSONArray();
        snapshot(name + "-final");
        result.put("final", snapshots.getJSONObject(0));
        return result;
    }

    private void execute() {
        JSONObject report = new JSONObject();
        try {
            byte[] input = new byte[2048];
            try (InputStream stream = getAssets().open("queue-fixture.bin")) {
                int at = 0;
                while (at < input.length) {
                    int count = stream.read(input, at, input.length - at);
                    if (count < 0) throw new IllegalStateException("synthetic fixture truncated");
                    at += count;
                }
                if (stream.read() != -1) throw new IllegalStateException("unexpected fixture tail");
            }
            JSONArray cases = new JSONArray();
            for (String name : new String[]{"idle", "single", "pending-shutdown", "reuse", "opaque-growth"}) {
                cases.put(executeCase(name, input));
                report.put("cases", cases);
                save("progress.json", report.toString().getBytes("UTF-8"));
            }
            report.put("status", "actual-Android-pthread-queue-component-completed");
            report.put("wholeGameQualified", false);
        } catch (Throwable error) {
            try { report.put("status", "failed"); report.put("error", error.toString()); } catch (Exception ignored) { }
        }
        try { save("report.json", report.toString().getBytes("UTF-8")); } catch (Exception ignored) { }
    }

    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        TextView view = new TextView(this);
        view.setText("Native file queue component diagnostic");
        setContentView(view);
        new Thread(this::execute, "queue067-observer").start();
    }
}
