import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.nio.file.Files;
import java.nio.file.Path;

public class native_wave013_file_owner_dependency_survey extends GhidraScript {
    public void run() throws Exception {
        DecompInterface tool = new DecompInterface();
        tool.openProgram(currentProgram);
        StringBuilder result = new StringBuilder();
        for (long address : new long[] {0x44f54cL,0x44f5b4L,0x44c79cL,0x44ce40L,0x453b34L,0x454388L,0x6d40e4L,0x16e9e0L,0x2feef8L,0x14d6ccL,0x146594L,0x15cf8cL,0x101a50L,0x143b48L}) {
            var function = getFunctionAt(toAddr(address));
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
        tool.dispose();
    }
}
