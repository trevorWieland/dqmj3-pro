import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressRange;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonArray;
import com.google.gson.JsonObject;
import java.math.BigInteger;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.HexFormat;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class InventoryWave001 extends GhidraScript {
    private String digest(byte[] bytes) throws Exception {
        return HexFormat.of().formatHex(MessageDigest.getInstance("SHA-256").digest(bytes));
    }

    private long word(ByteBuffer data, int offset) {
        return Integer.toUnsignedLong(data.getInt(offset));
    }

    private List<Map<String, Object>> ranges(AddressSet set) {
        List<Map<String, Object>> result = new ArrayList<>();
        for (AddressRange range : set.getAddressRanges()) {
            Map<String, Object> row = new LinkedHashMap<>();
            row.put("start", range.getMinAddress().getOffset());
            row.put("endExclusive", range.getMaxAddress().getOffset() + 1);
            row.put("bytes", range.getLength());
            result.add(row);
        }
        return result;
    }

    private void prepare(String[] args) throws Exception {
        byte[] original = Files.readAllBytes(Path.of(args[3]));
        ByteBuffer header = ByteBuffer.wrap(Files.readAllBytes(Path.of(args[2]))).order(ByteOrder.LITTLE_ENDIAN);
        Memory memory = currentProgram.getMemory();
        byte[] imported = new byte[original.length];
        long base = word(header, 0x10);
        if (memory.getBytes(toAddr(base), imported) != imported.length || !digest(imported).equals(digest(original))) {
            throw new IllegalStateException("Imported image hash mismatch");
        }
        String[] names = {".text", ".rodata", ".data"};
        long cursor = base;
        for (int index = 0; index < 3; index++) {
            int pos = 0x10 + index * 0x10;
            long address = word(header, pos);
            long pages = word(header, pos + 4);
            long initialized = word(header, pos + 8);
            if (address != cursor || initialized > pages * 4096) {
                throw new IllegalStateException("Noncontiguous or invalid ExHeader layout");
            }
            MemoryBlock block = memory.getBlock(toAddr(address));
            if (index > 0) {
                memory.split(block, toAddr(address));
                block = memory.getBlock(toAddr(address));
            }
            block.setName(names[index]);
            block.setRead(true);
            block.setWrite(index == 2);
            block.setExecute(index == 0);
            cursor += pages * 4096;
        }
        long bss = word(header, 0x30) + word(header, 0x38);
        memory.split(memory.getBlock(toAddr(bss)), toAddr(bss));
        memory.removeBlock(memory.getBlock(toAddr(bss)), monitor);
        MemoryBlock uninitialized = memory.createUninitializedBlock(".bss", toAddr(bss), word(header, 0x3c), false);
        uninitialized.setRead(true);
        uninitialized.setWrite(true);
        uninitialized.setExecute(false);
        JsonObject inventory = new Gson().fromJson(Files.readString(Path.of(args[4])), JsonObject.class);
        Register thumb = currentProgram.getRegister("TMode");
        int seeded = 0;
        for (var item : inventory.getAsJsonArray("functionSeeds")) {
            JsonObject row = item.getAsJsonObject();
            Address entry = toAddr(row.get("address").getAsLong());
            boolean isThumb = row.get("mode").getAsString().equals("Thumb");
            currentProgram.getProgramContext().setValue(thumb, entry, entry, isThumb ? BigInteger.ONE : BigInteger.ZERO);
            DisassembleCommand command = new DisassembleCommand(entry, null, true);
            command.applyTo(currentProgram, monitor);
            if (getFunctionAt(entry) == null && getInstructionAt(entry) != null) {
                createFunction(entry, null);
                seeded++;
            }
        }
        currentProgram.getSymbolTable().addExternalEntryPoint(toAddr(base));
        println("INVENTORY_WAVE001_SEEDS " + seeded);
    }

    private void export(String[] args) throws Exception {
        Path output = Path.of(args[1]);
        Files.createDirectories(output);
        ByteBuffer header = ByteBuffer.wrap(Files.readAllBytes(Path.of(args[2]))).order(ByteOrder.LITTLE_ENDIAN);
        long base = word(header, 0x10);
        long textBytes = word(header, 0x18);
        AddressSet initializedText = new AddressSet(toAddr(base), toAddr(base + textBytes - 1));
        AddressSet covered = new AddressSet();
        Register thumb = currentProgram.getRegister("TMode");
        List<Map<String, Object>> functions = new ArrayList<>();
        for (Function function : currentProgram.getFunctionManager().getFunctions(true)) {
            monitor.checkCancelled();
            Address entry = function.getEntryPoint();
            AddressSet body = new AddressSet(function.getBody());
            AddressSet inText = body.intersect(initializedText);
            if (inText.isEmpty()) {
                continue;
            }
            covered.add(inText);
            Map<String, Object> row = new LinkedHashMap<>();
            row.put("address", entry.getOffset());
            BigInteger mode = currentProgram.getProgramContext().getValue(thumb, entry, false);
            row.put("mode", BigInteger.ONE.equals(mode) ? "Thumb" : "ARM");
            row.put("ranges", ranges(body));
            row.put("textBodyBytes", inText.getNumAddresses());
            row.put("isThunk", function.isThunk());
            List<Long> calls = new ArrayList<>();
            for (Function target : function.getCalledFunctions(monitor)) {
                calls.add(target.getEntryPoint().getOffset());
            }
            calls.sort(Long::compare);
            row.put("calledFunctionAddresses", calls);
            row.put("acceptedSourceBytes", 0);
            row.put("boundaryStatus", "Ghidra-analysis-candidate-not-manual-closure");
            functions.add(row);
        }
        AddressSet uncovered = initializedText.subtract(covered);
        Map<String, Object> report = new LinkedHashMap<>();
        report.put("ghidraVersion", getGhidraVersion());
        report.put("language", currentProgram.getLanguageID().toString());
        report.put("compilerSpec", currentProgram.getCompilerSpec().getCompilerSpecID().toString());
        report.put("codeSha256", digest(Files.readAllBytes(Path.of(args[3]))));
        report.put("exheaderSha256", digest(Files.readAllBytes(Path.of(args[2]))));
        report.put("seedInventorySha256", digest(Files.readAllBytes(Path.of(args[4]))));
        report.put("functionCount", functions.size());
        report.put("functionBodyUnionBytes", covered.getNumAddresses());
        report.put("initializedTextGrossBytes", textBytes);
        report.put("functions", functions);
        report.put("uncoveredRanges", ranges(uncovered));
        report.put("uncoveredBytes", uncovered.getNumAddresses());
        report.put("denominatorComplete", false);
        report.put("acceptedSourceBytes", 0);
        report.put("limits", List.of("Analyzer function boundaries and modes remain fallible", "Function ranges may include pools/data", "Uncovered ranges mix literal pools, padding, missed functions and unsupported code", "Indirect calls and custom loaders remain unresolved"));
        Files.writeString(output.resolve("ghidra-functions.json"), new GsonBuilder().setPrettyPrinting().create().toJson(report) + "\n");
        println("INVENTORY_WAVE001_FUNCTIONS " + functions.size() + " BODY_UNION_BYTES " + covered.getNumAddresses());
    }

    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 5) {
            throw new IllegalArgumentException("Expected prepare/export output exheader code nativeInventory");
        }
        if (args[0].equals("prepare")) {
            prepare(args);
        } else if (args[0].equals("export")) {
            export(args);
        } else {
            throw new IllegalArgumentException("Unknown mode");
        }
    }
}
