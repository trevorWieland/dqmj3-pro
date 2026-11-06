import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressRange;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonObject;
import java.math.BigInteger;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.HexFormat;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class BoundarySurvey extends GhidraScript {
    private String digest(byte[] data) throws Exception {
        return HexFormat.of().formatHex(MessageDigest.getInstance("SHA-256").digest(data));
    }

    public void run() throws Exception {
        String[] args = getScriptArgs();
        Path claimPath = Path.of(args[0]);
        Path codePath = Path.of(args[1]);
        Path output = Path.of(args[2]);
        byte[] original = Files.readAllBytes(codePath);
        JsonObject claim = new Gson().fromJson(Files.readString(claimPath), JsonObject.class);
        if (!digest(original).equals(claim.get("moduleSha256").getAsString())) {
            throw new IllegalStateException("Canonical code hash mismatch");
        }
        byte[] imported = new byte[original.length];
        if (currentProgram.getMemory().getBytes(toAddr(0x100000), imported) != original.length ||
                !digest(imported).equals(digest(original))) {
            throw new IllegalStateException("Imported bytes mismatch");
        }
        Register thumb = currentProgram.getRegister("TMode");
        List<Map<String, Object>> rows = new ArrayList<>();
        for (var item : claim.getAsJsonArray("intervals")) {
            JsonObject row = item.getAsJsonObject();
            long address = row.get("address").getAsLong();
            Address entry = toAddr(address);
            currentProgram.getProgramContext().setValue(thumb, entry, entry, BigInteger.ZERO);
            if (!new DisassembleCommand(entry, new AddressSet(entry, toAddr(address + 7)), true).applyTo(currentProgram, monitor)) {
                throw new IllegalStateException("Entry disassembly failed");
            }
            Function function = createFunction(entry, null);
            if (function == null || function.getBody().getNumAddresses() != 8 ||
                    function.getBody().getMinAddress().getOffset() != address ||
                    function.getBody().getMaxAddress().getOffset() != address + 7) {
                throw new IllegalStateException("Complete function body differs from claimed extent");
            }
            List<Map<String, Object>> ranges = new ArrayList<>();
            for (AddressRange range : function.getBody().getAddressRanges()) {
                ranges.add(Map.of("start", range.getMinAddress().getOffset(),
                                  "endExclusive", range.getMaxAddress().getOffset() + 1, "bytes", range.getLength()));
            }
            JsonObject caller = row.getAsJsonArray("callerCandidates").get(0).getAsJsonObject();
            long site = caller.get("callsite").getAsLong();
            if (getInstructionAt(toAddr(site)) == null) {
                new DisassembleCommand(toAddr(site), new AddressSet(toAddr(site), toAddr(site + 3)), true).applyTo(currentProgram, monitor);
            }
            Instruction call = getInstructionAt(toAddr(site));
            boolean transfer = false;
            for (Address target : call.getFlows()) {
                transfer |= target.equals(entry);
            }
            if (!transfer || (!call.getFlowType().isCall() && !call.getFlowType().isJump())) {
                throw new IllegalStateException("Independent caller flow mismatch");
            }
            Map<String, Object> result = new LinkedHashMap<>();
            result.put("address", address);
            result.put("mode", "ARM");
            result.put("ranges", ranges);
            result.put("instructionCount", 2);
            result.put("callerFunction", caller.get("callerFunction").getAsLong());
            result.put("callsite", site);
            result.put("callerFlowType", call.getFlowType().toString());
            result.put("callerFlowTarget", address);
            rows.add(result);
        }
        Map<String, Object> report = new LinkedHashMap<>();
        report.put("ghidraVersion", getGhidraVersion());
        report.put("language", currentProgram.getLanguageID().toString());
        report.put("claimSha256", digest(Files.readAllBytes(claimPath)));
        report.put("codeSha256", digest(original));
        report.put("functions", rows);
        report.put("scope", "Fresh independent two-instruction function bodies and native caller transfers; no whole-program completeness claim");
        Files.createDirectories(output.getParent());
        Files.writeString(output, new GsonBuilder().setPrettyPrinting().create().toJson(report) + "\n");
        println("WAVE004_COMPLETE_BOUNDARIES " + rows.size());
    }
}
