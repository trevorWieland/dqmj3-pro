import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import com.google.gson.GsonBuilder;
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

public class NativeLeafSurvey extends GhidraScript {
    private String digest(byte[] bytes) throws Exception {
        return HexFormat.of().formatHex(MessageDigest.getInstance("SHA-256").digest(bytes));
    }

    private long word(ByteBuffer data, int offset) {
        return Integer.toUnsignedLong(data.getInt(offset));
    }

    private void decode(long start, long end) throws Exception {
        Address address = toAddr(start);
        AddressSet bounds = new AddressSet(address, toAddr(end));
        Register thumb = currentProgram.getRegister("TMode");
        currentProgram.getProgramContext().setValue(thumb, address, toAddr(end), BigInteger.ZERO);
        DisassembleCommand command = new DisassembleCommand(address, bounds, true);
        if (!command.applyTo(currentProgram, monitor)) {
            throw new IllegalStateException("Disassembly failed: " + command.getStatusMsg());
        }
    }

    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 3) {
            throw new IllegalArgumentException("Expected private output, exheader and code paths");
        }
        Path output = Path.of(args[0]);
        Files.createDirectories(output);
        byte[] exheader = Files.readAllBytes(Path.of(args[1]));
        byte[] original = Files.readAllBytes(Path.of(args[2]));
        ByteBuffer header = ByteBuffer.wrap(exheader).order(ByteOrder.LITTLE_ENDIAN);
        Memory memory = currentProgram.getMemory();
        long base = word(header, 0x10);
        byte[] imported = new byte[original.length];
        if (memory.getBytes(toAddr(base), imported) != imported.length ||
                !digest(imported).equals(digest(original))) {
            throw new IllegalStateException("Imported memory differs from original code file");
        }
        List<Map<String, Object>> segments = new ArrayList<>();
        long cursor = base;
        String[] names = {".text", ".rodata", ".data"};
        for (int index = 0; index < 3; index++) {
            int offset = 0x10 + index * 0x10;
            long address = word(header, offset);
            long pages = word(header, offset + 4);
            long initialized = word(header, offset + 8);
            if (address != cursor) {
                throw new IllegalStateException("Noncontiguous ExHeader needs a different loader");
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
            Map<String, Object> row = new LinkedHashMap<>();
            row.put("name", names[index]);
            row.put("address", address);
            row.put("pageBytes", pages * 4096);
            row.put("initializedBytes", initialized);
            segments.add(row);
            cursor += pages * 4096;
        }
        long bss = word(header, 0x30) + word(header, 0x38);
        long bssSize = word(header, 0x3c);
        MemoryBlock data = memory.getBlock(toAddr(bss));
        memory.split(data, toAddr(bss));
        memory.removeBlock(memory.getBlock(toAddr(bss)), monitor);
        MemoryBlock bssBlock = memory.createUninitializedBlock(".bss", toAddr(bss), bssSize, false);
        bssBlock.setRead(true);
        bssBlock.setWrite(true);
        bssBlock.setExecute(false);
        long leaf = 0x69180c;
        long caller = 0x1f9dd8;
        decode(leaf, leaf + 63);
        Function function = createFunction(toAddr(leaf), "candidate_u32_range_1_10");
        if (function == null) {
            throw new IllegalStateException("Function creation failed");
        }
        decode(caller - 20, caller + 36);
        List<Map<String, Object>> instructions = new ArrayList<>();
        for (Instruction instruction : currentProgram.getListing().getInstructions(function.getBody(), true)) {
            Map<String, Object> row = new LinkedHashMap<>();
            row.put("address", instruction.getAddress().getOffset());
            row.put("text", instruction.toString());
            row.put("flowType", instruction.getFlowType().toString());
            instructions.add(row);
        }
        List<Map<String, Object>> references = new ArrayList<>();
        for (Reference reference : currentProgram.getReferenceManager().getReferencesFrom(toAddr(caller))) {
            Map<String, Object> row = new LinkedHashMap<>();
            row.put("from", reference.getFromAddress().getOffset());
            row.put("to", reference.getToAddress().getOffset());
            row.put("type", reference.getReferenceType().toString());
            references.add(row);
        }
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        DecompileResults result = decompiler.decompileFunction(function, 30, monitor);
        if (result.decompileCompleted()) {
            Files.writeString(output.resolve("leaf-decompiler.c.txt"), result.getDecompiledFunction().getC());
        }
        Map<String, Object> report = new LinkedHashMap<>();
        report.put("ghidraVersion", getGhidraVersion());
        report.put("language", currentProgram.getLanguageID().toString());
        report.put("compilerSpec", currentProgram.getCompilerSpec().getCompilerSpecID().toString());
        report.put("codeSha256", digest(original));
        report.put("importedMemoryMatchesCodeFile", true);
        report.put("exheaderSha256", digest(exheader));
        report.put("segments", segments);
        report.put("bssAddress", bss);
        report.put("bssBytes", bssSize);
        report.put("functionEntry", function.getEntryPoint().getOffset());
        report.put("functionBodyMin", function.getBody().getMinAddress().getOffset());
        report.put("functionBodyMax", function.getBody().getMaxAddress().getOffset());
        report.put("functionBodyBytes", function.getBody().getNumAddresses());
        report.put("instructions", instructions);
        report.put("callerReferences", references);
        report.put("decompileCompleted", result.decompileCompleted());
        report.put("decompileError", result.getErrorMessage());
        report.put("status", "diagnostic boundary evidence; no source acceptance");
        decompiler.dispose();
        Files.writeString(output.resolve("ghidra-result.private.json"),
            new GsonBuilder().setPrettyPrinting().create().toJson(report) + "\n");
        println("Native leaf survey: body=" + function.getBody().getNumAddresses() +
            " decompiled=" + result.decompileCompleted());
    }
}
