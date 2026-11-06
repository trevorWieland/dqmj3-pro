import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.pcode.PcodeOp;
import ghidra.program.model.pcode.Varnode;
import com.google.gson.GsonBuilder;
import java.math.BigInteger;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.HexFormat;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class FormalAuditWave002 extends GhidraScript {
    private Map<String, String> context(long address) {
        Map<String, String> result = new LinkedHashMap<>();
        for (Register register : currentProgram.getProgramContext().getRegisters()) {
            BigInteger value = currentProgram.getProgramContext().getValue(register, toAddr(address), false);
            result.put(register.getName(), value == null ? "unknown" : value.toString());
        }
        return result;
    }

    private Map<String, Object> varnode(Varnode node) {
        Map<String, Object> result = new LinkedHashMap<>();
        result.put("space", node.getAddress().getAddressSpace().getName());
        result.put("offset", Long.toUnsignedString(node.getOffset()));
        result.put("size", node.getSize());
        if (node.isRegister()) {
            Register register = currentProgram.getRegister(node.getAddress(), node.getSize());
            result.put("registerName", register == null ? "unknown" : register.getName());
        }
        return result;
    }

    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 3) {
            throw new IllegalArgumentException("Expected outputDirectory entryAddress completeBodyBytes");
        }
        long entry = Long.decode(args[1]);
        int bytes = Integer.parseInt(args[2]);
        if (currentProgram.getListing().getNumInstructions() != 0) {
            throw new IllegalStateException("Fresh raw import required");
        }
        List<String> explicitContext = List.of("TMode", "LRset", "REToverride", "CALLoverride", "TEEMode", "itmode");
        for (String name : explicitContext) {
            Register register = currentProgram.getRegister(name);
            if (register == null) {
                throw new IllegalStateException("Required context register absent: " + name);
            }
            currentProgram.getProgramContext().setValue(register, toAddr(entry), toAddr(entry + bytes - 1), BigInteger.ZERO);
        }
        DisassembleCommand command = new DisassembleCommand(toAddr(entry), null, true);
        if (!command.applyTo(currentProgram, monitor)) {
            throw new IllegalStateException("Complete body disassembly failed: " + command.getStatusMsg());
        }
        List<Map<String, Object>> rows = new ArrayList<>();
        long cursor = entry;
        while (cursor < entry + bytes) {
            Instruction instruction = getInstructionAt(toAddr(cursor));
            if (instruction == null || instruction.getLength() != 4) {
                throw new IllegalStateException("Missing contiguous A32 instruction");
            }
            Map<String, Object> row = new LinkedHashMap<>();
            row.put("address", cursor);
            row.put("bytes", instruction.getLength());
            row.put("mnemonic", instruction.getMnemonicString());
            row.put("display", instruction.toString());
            row.put("flowType", instruction.getFlowType().toString());
            row.put("context", context(cursor));
            List<Map<String, Object>> operations = new ArrayList<>();
            int index = 0;
            for (PcodeOp operation : instruction.getPcode()) {
                Map<String, Object> op = new LinkedHashMap<>();
                op.put("index", index++);
                op.put("opcode", operation.getOpcode());
                op.put("mnemonic", operation.getMnemonic());
                if (operation.getOutput() != null) {
                    op.put("output", varnode(operation.getOutput()));
                }
                List<Map<String, Object>> inputs = new ArrayList<>();
                for (Varnode input : operation.getInputs()) {
                    inputs.add(varnode(input));
                }
                op.put("inputs", inputs);
                if (operation.getOpcode() == PcodeOp.CALLOTHER) {
                    op.put("useropName", currentProgram.getLanguage().getUserDefinedOpName((int) operation.getInput(0).getOffset()));
                }
                operations.add(op);
            }
            row.put("operations", operations);
            rows.add(row);
            cursor += instruction.getLength();
        }
        if (cursor != entry + bytes) {
            throw new IllegalStateException("Body extent not closed");
        }
        byte[] body = new byte[bytes];
        if (currentProgram.getMemory().getBytes(toAddr(entry), body) != bytes) {
            throw new IllegalStateException("Mapped body incomplete");
        }
        List<Map<String, Object>> registers = new ArrayList<>();
        for (Register register : currentProgram.getLanguage().getRegisters()) {
            if (register.getAddress().getAddressSpace().isRegisterSpace()) {
                registers.add(Map.of("name", register.getName(), "offset", Long.toUnsignedString(register.getAddress().getOffset()),
                    "size", register.getMinimumByteSize(), "bitLength", register.getBitLength()));
            }
        }
        Map<String, Object> report = new LinkedHashMap<>();
        report.put("ghidraVersion", getGhidraVersion());
        report.put("language", currentProgram.getLanguageID().toString());
        report.put("compilerSpec", currentProgram.getCompilerSpec().getCompilerSpecID().toString());
        report.put("programName", currentProgram.getName());
        report.put("bodyAddress", entry);
        report.put("bodyBytes", bytes);
        report.put("bodySha256", HexFormat.of().formatHex(MessageDigest.getInstance("SHA-256").digest(body)));
        report.put("entryContext", "ARM TMode=0; raw instruction P-code, no decompiler simplification");
        report.put("effectiveEntryContext", context(entry));
        report.put("explicitZeroContextFields", explicitContext);
        report.put("instructions", rows);
        report.put("registers", registers);
        report.put("sourceCredit", 0);
        Path output = Path.of(args[0]).resolve(currentProgram.getName() + ".pcode.json");
        Files.createDirectories(output.getParent());
        Files.writeString(output, new GsonBuilder().setPrettyPrinting().create().toJson(report) + "\n");
        println("FORMAL_AUDIT_WAVE002_EXPORT_SUCCESS " + currentProgram.getName() + " " + rows.size());
    }
}
