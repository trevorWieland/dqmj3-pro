# Explicit source include directories

Public source units may declare an ordered `includeDirectories` list. Every directory must exist inside the reviewed source trees and must not be linked. The compiler receives those directories as individual `-I` arguments. The source file or including header's own directory is searched first, followed by the declared list. The complete resolved transitive header set must still equal the unit's explicit `headers` list.

This supports unchanged reconstructed headers shared by multiple source families. It adds no system-header fallback or general machine search path. Missing directories, directories outside reviewed source trees, missing headers, dependency escapes and unlisted resolved headers reject the configuration. Units with no include-directory list retain their local-header behavior.

The [Clang command-line reference](https://clang.llvm.org/docs/ClangCommandLineReference.html) documents the `-I` search option. The implementation resolves and pins the selected files before compilation, and the compilation manifest records the exact arguments and header hashes.
