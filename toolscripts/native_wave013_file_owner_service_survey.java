import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.nio.file.Files;
import java.nio.file.Path;

public class native_wave013_file_owner_service_survey extends GhidraScript {
    public void run() throws Exception {
        DecompInterface tool = new DecompInterface();
        tool.openProgram(currentProgram);
        StringBuilder result = new StringBuilder();
        for (long address : new long[] {0x14e0a8L,0x15e1b0L,0x44d810L,0x1233c4L,0x17750cL,0x45434cL,0x45438cL,0x14e494L,0x15e590L,0x14e774L,0x124ffcL}) {
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
