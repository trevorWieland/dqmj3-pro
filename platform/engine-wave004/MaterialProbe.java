import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.charset.StandardCharsets;

public final class MaterialProbe extends GhidraScript {
    @Override public void run() throws Exception {
        String[] args = getScriptArgs();
        Path output = Path.of(args[0]).toAbsolutePath().normalize();
        Files.createDirectories(output);
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        for (int i = 1; i < args.length; ++i) {
            Address entry = toAddr(Long.decode(args[i]));
            disassemble(entry);
            Function function = getFunctionAt(entry);
            if (function == null) function = createFunction(entry, "material_research_" + entry.toString());
            if (function == null) throw new IllegalStateException("Function creation failed at " + entry);
            DecompileResults result = decompiler.decompileFunction(function, 30, monitor);
            String content = result.decompileCompleted() && result.getDecompiledFunction() != null ? result.getDecompiledFunction().getC() : result.getErrorMessage();
            Files.writeString(output.resolve(entry.toString() + ".c"), content, StandardCharsets.UTF_8);
            StringBuilder calls = new StringBuilder();
            for (Function target : function.getCalledFunctions(monitor)) calls.append(target.getEntryPoint().toString()).append(" ").append(target.getName()).append("\n");
            Files.writeString(output.resolve(entry.toString() + ".calls.txt"), calls.toString(), StandardCharsets.UTF_8);
        }
        decompiler.dispose();
    }
}
