import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.util.HexFormat;

public class native_wave013_overlay extends GhidraScript {
    public void run() throws Exception {
        DecompInterface tool = new DecompInterface();
        tool.openProgram(currentProgram);
        long[] roots = new long[] {0x100b58L, 0x4beed0L, 0x4bef10L, 0x4bef50L, 0x4befa0L, 0x4bf248L, 0x4bf378L, 0x4bf3a4L, 0x4bf3d0L, 0x4bf3fcL, 0x4bf490L, 0x4bf4bcL, 0x4bf4e8L, 0x4bf514L, 0x4bf540L, 0x4bf56cL, 0x4bf5d8L, 0x4bf604L, 0x4bf630L, 0x4bf65cL, 0x4bf688L, 0x4bf71cL, 0x4bf748L, 0x4bf774L, 0x4bf7a0L, 0x4bf7c4L, 0x4bf7f0L, 0x4bf814L, 0x4bf874L, 0x4bf8b4L, 0x4bf8f4L, 0x4bf974L, 0x4bf9e0L, 0x4bfc08L, 0x4bfc48L, 0x4bfc88L, 0x4bfcbcL, 0x4bfda4L, 0x4bfde4L, 0x4bfe24L, 0x4bfe8cL, 0x4c0dacL, 0x4c116cL, 0x4c117cL, 0x4c13f8L, 0x4c14a8L, 0x4c1510L, 0x4c15d4L, 0x4c15e4L, 0x4c15ecL, 0x4c1658L, 0x4c1660L, 0x4c1674L, 0x4c16dcL, 0x4c1970L, 0x4c1a9cL, 0x4c1b08L, 0x4c1b10L, 0x4c1ba0L, 0x4c1c5cL, 0x4c2c80L, 0x4c33dcL, 0x4c35b0L, 0x6d4080L};
        java.util.Arrays.sort(roots);
        for (int rootIndex = roots.length - 1; rootIndex >= 0; --rootIndex) {
            long address = roots[rootIndex];
            if (getFunctionAt(toAddr(address)) == null) {
                disassemble(toAddr(address));
                createFunction(toAddr(address), "Wave013_" + Long.toHexString(address));
            }
        }
        StringBuilder result = new StringBuilder();
        StringBuilder metadata = new StringBuilder("[\n");
        boolean first = true;
        for (long address : roots) {
            var function = getFunctionAt(toAddr(address));
            if (function == null) {
                disassemble(toAddr(address));
                function = createFunction(toAddr(address), "Wave013_" + Long.toHexString(address));
            }
            if (function == null) {
                result.append("ADDRESS ").append(Long.toHexString(address)).append("\nNO_FUNCTION\n");
                continue;
            }
            if (!first) metadata.append(",\n");
            first = false;
            var thumb = currentProgram.getProgramContext().getValue(currentProgram.getRegister("TMode"), toAddr(address), false);
            String mode = thumb != null && thumb.signum() != 0 ? "Thumb" : "ARM";
            metadata.append("{\"address\":").append(address).append(",\"mode\":\"").append(mode);
            metadata.append("\",\"language\":\"").append(currentProgram.getLanguageID());
            metadata.append("\",\"compilerSpec\":\"").append(currentProgram.getCompilerSpec().getCompilerSpecID());
            metadata.append("\",\"ranges\":[");
            var ranges = function.getBody().getAddressRanges();
            boolean rangeFirst = true;
            while (ranges.hasNext()) {
                var range = ranges.next();
                if (!rangeFirst) metadata.append(",");
                rangeFirst = false;
                metadata.append("{\"start\":").append(range.getMinAddress().getOffset());
                metadata.append(",\"endExclusive\":").append(range.getMaxAddress().getOffset() + 1);
                byte[] bytes = new byte[(int)range.getLength()];
                if (currentProgram.getMemory().getBytes(range.getMinAddress(), bytes) != bytes.length)
                    throw new IllegalStateException("Incomplete function memory read");
                String hash = HexFormat.of().formatHex(MessageDigest.getInstance("SHA-256").digest(bytes));
                metadata.append(",\"bytes\":").append(range.getLength());
                metadata.append(",\"ghidraMemorySha256\":\"").append(hash).append("\"}");
            }
            metadata.append("]}");
            var decompiled = tool.decompileFunction(function, 60, monitor);
            result.append("ADDRESS ").append(Long.toHexString(address)).append("\n");
            result.append("STATUS ").append(decompiled.decompileCompleted()).append("\n");
            if (decompiled.decompileCompleted())
                result.append(decompiled.getDecompiledFunction().getC());
            else
                result.append(decompiled.getErrorMessage());
            result.append("\n");
        }
        Files.writeString(Path.of(getScriptArgs()[0]), result.toString());
        metadata.append("\n]\n");
        Files.writeString(Path.of(getScriptArgs()[1]), metadata.toString());
        tool.dispose();
    }
}
