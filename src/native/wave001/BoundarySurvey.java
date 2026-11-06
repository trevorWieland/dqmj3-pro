import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.Reference;
import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonArray;
import com.google.gson.JsonObject;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.HexFormat;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class BoundarySurvey extends GhidraScript {
    private String digest(byte[] bytes) throws Exception {
        return HexFormat.of().formatHex(MessageDigest.getInstance("SHA-256").digest(bytes));
    }

    private void decode(long start, long end) throws Exception {
        Address address = toAddr(start);
        AddressSet bounds = new AddressSet(address, toAddr(end));
        DisassembleCommand command = new DisassembleCommand(address, bounds, true);
        if (!command.applyTo(currentProgram, monitor)) {
            throw new IllegalStateException("Disassembly failed: " + command.getStatusMsg());
        }
    }

    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 3) {
            throw new IllegalArgumentException("Expected private output, target manifest and original code");
        }
        Path output = Path.of(args[0]);
        Files.createDirectories(output);
        byte[] original = Files.readAllBytes(Path.of(args[2]));
        byte[] imported = new byte[original.length];
        if (currentProgram.getMemory().getBytes(toAddr(0x100000), imported) != imported.length ||
                !digest(imported).equals(digest(original)) ||
                !digest(original).equals("d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126")) {
            throw new IllegalStateException("Original or imported module identity mismatch");
        }
        JsonArray targets = new Gson().fromJson(Files.readString(Path.of(args[1])), JsonArray.class);
        List<Map<String, Object>> rows = new ArrayList<>();
        for (int index = 0; index < targets.size(); index++) {
            JsonObject target = targets.get(index).getAsJsonObject();
            long address = target.get("address").getAsLong();
            long expected = target.get("bytes").getAsLong();
            long caller = target.get("caller").getAsLong();
            decode(address, address + expected + 31);
            Function function = createFunction(toAddr(address), "fn_" + String.format("%08x", address));
            if (function == null) {
                throw new IllegalStateException("Function creation failed");
            }
            if (function.getBody().getNumAddresses() != expected ||
                    function.getBody().getMinAddress().getOffset() != address ||
                    function.getBody().getMaxAddress().getOffset() != address + expected - 1) {
                throw new IllegalStateException("Boundary disagreement at " + Long.toHexString(address));
            }
            decode(caller, caller + 16);
            boolean matchedCaller = false;
            for (Reference reference : currentProgram.getReferenceManager().getReferencesFrom(toAddr(caller))) {
                if (reference.getToAddress().getOffset() == address && reference.getReferenceType().isCall()) {
                    matchedCaller = true;
                }
            }
            if (!matchedCaller) {
                throw new IllegalStateException("Caller target disagrees at " + Long.toHexString(caller));
            }
            List<String> instructions = new ArrayList<>();
            for (Instruction instruction : currentProgram.getListing().getInstructions(function.getBody(), true)) {
                instructions.add(instruction.getAddress() + " " + instruction.toString());
            }
            Map<String, Object> row = new LinkedHashMap<>();
            row.put("address", address);
            row.put("bodyBytes", function.getBody().getNumAddresses());
            row.put("bodyMin", function.getBody().getMinAddress().getOffset());
            row.put("bodyMax", function.getBody().getMaxAddress().getOffset());
            row.put("caller", caller);
            row.put("callerReferenceConfirmed", matchedCaller);
            row.put("instructions", instructions);
            rows.add(row);
        }
        Map<String, Object> report = new LinkedHashMap<>();
        report.put("ghidraVersion", getGhidraVersion());
        report.put("language", currentProgram.getLanguageID().toString());
        report.put("codeSha256", digest(original));
        report.put("importedMemoryMatchesCodeFile", true);
        report.put("manifestSha256", digest(Files.readAllBytes(Path.of(args[1]))));
        report.put("functions", rows);
        report.put("status", "bounded ARM boundary and direct caller evidence; no historical compiler claim");
        Files.writeString(output.resolve("boundary.private.json"),
            new GsonBuilder().setPrettyPrinting().create().toJson(report) + "\n");
        println("Boundary survey confirmed " + rows.size() + " functions");
    }
}
