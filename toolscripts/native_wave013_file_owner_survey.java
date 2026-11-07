import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.nio.file.Files;
import java.nio.file.Path;

public class native_wave013_file_owner_survey extends GhidraScript {
    public void run() throws Exception {
        DecompInterface tool = new DecompInterface();
        tool.openProgram(currentProgram);
        StringBuilder result = new StringBuilder();
        for (long address : new long[] {0x4c3e08L,0x4c3e74L,0x4c4068L,0x4c42fcL,0x4c4358L,0x4c43a8L,0x4c46e8L}) {
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
