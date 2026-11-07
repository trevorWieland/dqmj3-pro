import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.nio.file.Files;
import java.nio.file.Path;

public class native_wave013_nfa_survey extends GhidraScript {
    public void run() throws Exception {
        DecompInterface tool = new DecompInterface();
        tool.openProgram(currentProgram);
        StringBuilder result = new StringBuilder();
        for (long address : new long[] {0x4c0488L, 0x4c04f0L, 0x4c10f4L, 0x4c2e84L, 0x4c3028L, 0x4c3070L, 0x4c33dcL, 0x4c35b0L, 0x4c360cL, 0x4c3834L, 0x4c387cL, 0x4c389cL, 0x75573cL, 0x755750L, 0x755768L, 0x755780L, 0x755818L}) {
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
