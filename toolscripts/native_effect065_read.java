import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.charset.StandardCharsets;

public class native_effect065_read extends GhidraScript {
    public void run() throws Exception {
        String[] args=getScriptArgs();
        DecompInterface decompiler=new DecompInterface();
        decompiler.openProgram(currentProgram);
        StringBuilder output=new StringBuilder();
        for(int index=1;index<args.length;index++) {
            Function function=getFunctionAt(toAddr(Long.parseUnsignedLong(args[index],16)));
            if(function==null) throw new IllegalArgumentException("Missing exact function "+args[index]);
            DecompileResults result=decompiler.decompileFunction(function,30,monitor);
            if(!result.decompileCompleted()) throw new IllegalStateException(result.getErrorMessage());
            output.append("FUNCTION "+function.getEntryPoint()+" "+function.getBody()+"\n");
            output.append(result.getDecompiledFunction().getC()+"\n");
        }
        decompiler.dispose();
        Files.writeString(Path.of(args[0]),output.toString(),StandardCharsets.UTF_8);
    }
}
