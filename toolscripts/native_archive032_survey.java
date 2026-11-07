import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.TreeSet;

public class native_archive032_survey extends GhidraScript {
    public void run() throws Exception {
        StringBuilder result = new StringBuilder();
        TreeSet<Long> addresses = new TreeSet<>();
        for (int index = 1; index < getScriptArgs().length; ++index) {
            long value = Long.decode(getScriptArgs()[index]);
            var target = toAddr(value);
            var container = getFunctionContaining(target);
            if (container != null) addresses.add(container.getEntryPoint().getOffset());
            result.append("TARGET ").append(target).append(" FUNCTION ").append(container).append("\n");
            var references = getReferencesTo(target);
            for (var reference : references) {
                var function = getFunctionContaining(reference.getFromAddress());
                result.append("REFERENCE ").append(reference).append(" OWNER ").append(function).append("\n");

            }
        }
        DecompInterface tool = new DecompInterface();
        tool.openProgram(currentProgram);
        for (long address : addresses) {
            var function = getFunctionAt(toAddr(address));
            result.append("ADDRESS ").append(Long.toHexString(address)).append(" BODY ").append(function.getBody()).append("\n");
            result.append("CALLERS ").append(function.getCallingFunctions(monitor)).append("\n");
            result.append("CALLEES ").append(function.getCalledFunctions(monitor)).append("\n");
            var decompiled = tool.decompileFunction(function, 90, monitor);
            result.append("STATUS ").append(decompiled.decompileCompleted()).append("\n");
            if (decompiled.decompileCompleted()) result.append(decompiled.getDecompiledFunction().getC());
            else result.append(decompiled.getErrorMessage());
            result.append("\n");
        }
        Files.writeString(Path.of(getScriptArgs()[0]), result.toString());
        tool.dispose();
    }
}
