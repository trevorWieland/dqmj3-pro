import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressRange;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
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
import java.util.TreeMap;

public class NativeInventoryDetail extends GhidraScript {
    private String digest(byte[] data) throws Exception {
        return HexFormat.of().formatHex(MessageDigest.getInstance("SHA-256").digest(data));
    }

    private void save(Path path, Object value) throws Exception {
        Files.createDirectories(path.getParent());
        Files.writeString(path, new GsonBuilder().setPrettyPrinting().create().toJson(value) + "\n");
    }

    private long word(ByteBuffer data, int offset) {
        return Integer.toUnsignedLong(data.getInt(offset));
    }

    private List<Map<String, Object>> ranges(AddressSet set) {
        List<Map<String, Object>> result = new ArrayList<>();
        for (AddressRange range : set.getAddressRanges()) {
            result.add(Map.of("start", range.getMinAddress().getOffset(), "endExclusive", range.getMaxAddress().getOffset() + 1, "bytes", range.getLength()));
        }
        return result;
    }

    private String mode(Address entry) {
        BigInteger value = currentProgram.getProgramContext().getValue(currentProgram.getRegister("TMode"), entry, false);
        return value == null ? "unknown" : value.equals(BigInteger.ONE) ? "Thumb" : value.equals(BigInteger.ZERO) ? "ARM" : "unsupported:" + value;
    }

    private void prepare(String[] args) throws Exception {
        Path receipt = Path.of(args[1]).resolve("preparation.json");
        Map<String, Object> report = new LinkedHashMap<>();
        List<String> phases = new ArrayList<>();
        List<Map<String, Object>> conflicts = new ArrayList<>();
        report.put("preparationSucceeded", false);
        report.put("phaseOrder", phases);
        report.put("conflicts", conflicts);
        try {
            byte[] original = Files.readAllBytes(Path.of(args[3]));
            byte[] headerBytes = Files.readAllBytes(Path.of(args[2]));
            byte[] seedsBytes = Files.readAllBytes(Path.of(args[4]));
            report.put("codeSha256", digest(original));
            report.put("exheaderSha256", digest(headerBytes));
            report.put("seedManifestSha256", digest(seedsBytes));
            report.put("initialInstructionCount", currentProgram.getListing().getNumInstructions());
            report.put("initialFunctionCount", currentProgram.getFunctionManager().getFunctionCount());
            if (currentProgram.getListing().getNumInstructions() != 0 || currentProgram.getFunctionManager().getFunctionCount() != 0) {
                throw new IllegalStateException("Fresh raw program with zero existing instructions/functions required");
            }
            ByteBuffer header = ByteBuffer.wrap(headerBytes).order(ByteOrder.LITTLE_ENDIAN);
            long base = word(header, 0x10);
            Memory memory = currentProgram.getMemory();
            byte[] imported = new byte[original.length];
            if (memory.getBytes(toAddr(base), imported) != original.length || !digest(imported).equals(digest(original))) {
                throw new IllegalStateException("Complete imported image hash mismatch");
            }
            phases.add("raw-import-verified");
            TreeMap<Long, String> seeds = new TreeMap<>();
            JsonObject manifest = new Gson().fromJson(new String(seedsBytes, java.nio.charset.StandardCharsets.UTF_8), JsonObject.class);
            long textEnd = base + word(header, 0x18);
            for (var item : manifest.getAsJsonArray("functionSeeds")) {
                JsonObject row = item.getAsJsonObject();
                long address = row.get("address").getAsLong();
                String wanted = row.get("mode").getAsString();
                if ((!wanted.equals("ARM") && !wanted.equals("Thumb")) || address < base || address >= textEnd || address % (wanted.equals("ARM") ? 4 : 2) != 0) {
                    throw new IllegalStateException("Invalid seed address/mode/alignment");
                }
                String prior = seeds.putIfAbsent(address, wanted);
                if (prior != null && !prior.equals(wanted)) {
                    conflicts.add(Map.of("address", address, "firstMode", prior, "secondMode", wanted));
                }
            }
            if (!conflicts.isEmpty()) {
                throw new IllegalStateException("Conflicting duplicate ARM/Thumb seed modes");
            }
            String[] names = {".text", ".rodata", ".data"};
            long cursor = base;
            for (int index = 0; index < 3; index++) {
                int pos = 0x10 + index * 0x10;
                long address = word(header, pos), pages = word(header, pos + 4), initialized = word(header, pos + 8);
                if (address != cursor || initialized > pages * 4096) {
                    throw new IllegalStateException("Invalid or noncontiguous ExHeader layout");
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
            if (cursor != base + original.length) {
                throw new IllegalStateException("ExHeader page extent differs from complete raw image");
            }
            long bss = word(header, 0x30) + word(header, 0x38);
            for (long offset = bss - base; offset < original.length; offset++) {
                if (original[(int) offset] != 0) {
                    throw new IllegalStateException("Nonzero data padding would be discarded by BSS mapping");
                }
            }
            memory.split(memory.getBlock(toAddr(bss)), toAddr(bss));
            memory.removeBlock(memory.getBlock(toAddr(bss)), monitor);
            MemoryBlock block = memory.createUninitializedBlock(".bss", toAddr(bss), word(header, 0x3c), false);
            block.setRead(true);
            block.setWrite(true);
            block.setExecute(false);
            phases.add("segment-permissions-and-bss-mapped");
            Register thumb = currentProgram.getRegister("TMode");
            for (var seed : seeds.entrySet()) {
                Address entry = toAddr(seed.getKey());
                currentProgram.getProgramContext().setValue(thumb, entry, entry, seed.getValue().equals("Thumb") ? BigInteger.ONE : BigInteger.ZERO);
            }
            report.put("contextsInstalled", seeds.size());
            phases.add("all-seed-contexts-installed");
            for (var seed : seeds.entrySet()) {
                if (!mode(toAddr(seed.getKey())).equals(seed.getValue())) {
                    throw new IllegalStateException("Seed context verification failed before disassembly");
                }
            }
            report.put("instructionCountWhenAllContextsVerified", currentProgram.getListing().getNumInstructions());
            if (currentProgram.getListing().getNumInstructions() != 0) {
                throw new IllegalStateException("Disassembly occurred before every context was installed");
            }
            report.put("allContextsInstalledBeforeAnyDisassembly", true);
            phases.add("all-seed-contexts-verified-with-zero-instructions");
            List<Map<String, Object>> outcomes = new ArrayList<>();
            int instructionEntries = 0, functionEntries = 0;
            for (var seed : seeds.entrySet()) {
                monitor.checkCancelled();
                Address entry = toAddr(seed.getKey());
                Map<String, Object> outcome = new LinkedHashMap<>();
                outcome.put("address", seed.getKey());
                outcome.put("requestedMode", seed.getValue());
                DisassembleCommand command = new DisassembleCommand(entry, null, true);
                outcome.put("disassembleCommandResult", command.applyTo(currentProgram, monitor));
                outcome.put("disassembleCommandStatus", command.getStatusMsg());
                if (getInstructionAt(entry) != null) {
                    instructionEntries++;
                    if (getFunctionAt(entry) == null) {
                        try {
                            createFunction(entry, null);
                        } catch (Exception failure) {
                            outcome.put("functionCreationFailure", failure.toString());
                        }
                    }
                }
                outcome.put("instructionAtEntry", getInstructionAt(entry) != null);
                outcome.put("functionAtEntry", getFunctionAt(entry) != null);
                if (getFunctionAt(entry) != null) {
                    functionEntries++;
                }
                outcome.put("actualModeAfterDisassembly", mode(entry));
                if (!mode(entry).equals(seed.getValue())) {
                    conflicts.add(Map.of("address", seed.getKey(), "requestedMode", seed.getValue(), "observedMode", mode(entry)));
                }
                outcomes.add(outcome);
            }
            report.put("seedOutcomes", outcomes);
            report.put("seedCount", seeds.size());
            report.put("seedInstructionEntries", instructionEntries);
            report.put("seedFunctionEntries", functionEntries);
            report.put("allSeedsDisassembled", instructionEntries == seeds.size());
            report.put("allSeedFunctionsCreated", functionEntries == seeds.size());
            phases.add("seed-disassembly-and-function-attempts-complete");
            if (!conflicts.isEmpty()) {
                throw new IllegalStateException("Seed modes changed incompatibly during preparation");
            }
            currentProgram.getSymbolTable().addExternalEntryPoint(toAddr(base));
            report.put("preparationSucceeded", true);
            report.put("scope", "Every seed context installed and verified before disassembly; discovery failures remain explicit analysis candidates");
            phases.add("preparation-complete");
            save(receipt, report);
            println("NATIVE_INVENTORY_DETAIL_PREPARATION_SUCCESS " + seeds.size());
        } catch (Exception failure) {
            report.put("preparationFailure", failure.toString());
            save(receipt, report);
            throw failure;
        }
    }

    private void export(String[] args) throws Exception {
        Path output = Path.of(args[1]);
        JsonObject preparation = new Gson().fromJson(Files.readString(output.resolve("preparation.json")), JsonObject.class);
        if (!preparation.get("preparationSucceeded").getAsBoolean() || !preparation.get("allContextsInstalledBeforeAnyDisassembly").getAsBoolean()) {
            throw new IllegalStateException("Explicit successful preparation receipt required before export");
        }
        ByteBuffer header = ByteBuffer.wrap(Files.readAllBytes(Path.of(args[2]))).order(ByteOrder.LITTLE_ENDIAN);
        long base = word(header, 0x10), textBytes = word(header, 0x18);
        AddressSet text = new AddressSet(toAddr(base), toAddr(base + textBytes - 1));
        AddressSet covered = new AddressSet(), instructions = new AddressSet(), definedData = new AddressSet();
        List<Map<String, Object>> functions = new ArrayList<>();
        for (Function function : currentProgram.getFunctionManager().getFunctions(true)) {
            monitor.checkCancelled();
            Address entry = function.getEntryPoint();
            AddressSet body = new AddressSet(function.getBody()), inText = body.intersect(text);
            if (inText.isEmpty()) {
                continue;
            }
            covered.add(inText);
            Map<String, Object> row = new LinkedHashMap<>();
            row.put("address", entry.getOffset());
            row.put("mode", mode(entry));
            row.put("ranges", ranges(body));
            row.put("textBodyBytes", inText.getNumAddresses());
            row.put("bodyBytesOutsideInitializedText", body.getNumAddresses() - inText.getNumAddresses());
            row.put("entryInstructionDefined", getInstructionAt(entry) != null);
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
        long instructionCount = 0, dataCount = 0;
        for (Instruction instruction : currentProgram.getListing().getInstructions(text, true)) {
            instructions.add(instruction.getMinAddress(), instruction.getMaxAddress());
            instructionCount++;
        }
        for (var data : currentProgram.getListing().getDefinedData(text, true)) {
            definedData.add(data.getMinAddress(), data.getMaxAddress());
            dataCount++;
        }
        instructions = instructions.intersect(text);
        definedData = definedData.intersect(text);
        Map<String, Object> report = new LinkedHashMap<>();
        report.put("schemaVersion", 2);
        report.put("ghidraVersion", getGhidraVersion());
        report.put("language", currentProgram.getLanguageID().toString());
        report.put("compilerSpec", currentProgram.getCompilerSpec().getCompilerSpecID().toString());
        report.put("codeSha256", digest(Files.readAllBytes(Path.of(args[3]))));
        report.put("exheaderSha256", digest(Files.readAllBytes(Path.of(args[2]))));
        report.put("seedManifestSha256", digest(Files.readAllBytes(Path.of(args[4]))));
        report.put("preparationSha256", digest(Files.readAllBytes(output.resolve("preparation.json"))));
        report.put("functionCount", functions.size());
        report.put("functionBodyUnionBytes", covered.getNumAddresses());
        report.put("initializedTextStart", base);
        report.put("initializedTextGrossBytes", textBytes);
        report.put("functions", functions);
        report.put("uncoveredRanges", ranges(text.subtract(covered)));
        report.put("uncoveredBytes", text.subtract(covered).getNumAddresses());
        report.put("instructionCount", instructionCount);
        report.put("instructionUnionBytes", instructions.getNumAddresses());
        report.put("instructionRanges", ranges(instructions));
        report.put("definedDataCount", dataCount);
        report.put("definedDataUnionBytes", definedData.getNumAddresses());
        report.put("definedDataRanges", ranges(definedData));
        report.put("unclassifiedTextRanges", ranges(text.subtract(instructions.union(definedData))));
        report.put("unclassifiedTextBytes", text.subtract(instructions.union(definedData)).getNumAddresses());
        report.put("denominatorComplete", false);
        report.put("acceptedSourceBytes", 0);
        report.put("limits", List.of("Modes and boundaries remain analyzer hypotheses", "Function bodies can include pools/data and noncontiguous ranges", "Unclassified/uncovered bytes mix missed code, padding and data", "Indirect targets, custom loading and external executable inventory remain unresolved"));
        save(output.resolve("ghidra-functions.json"), report);
        println("NATIVE_INVENTORY_DETAIL_EXPORT_SUCCESS " + functions.size() + " " + covered.getNumAddresses());
    }

    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 5) {
            throw new IllegalArgumentException("Expected prepare/export output exheader code seedManifest");
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
