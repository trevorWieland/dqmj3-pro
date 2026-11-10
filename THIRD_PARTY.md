# Third-party material

Project-authored reconstruction code, tooling and documentation use GPL-3.0-only. Original game inputs are not supplied or licensed by this repository. Unchanged third-party files retain their original copyright and license notices.

| Material | Location | Provenance and notices |
| --- | --- | --- |
| Public Squirrel2.2.5 release | source/squirrel-wave001/upstream | The 80-file import is pinned by upstream-manifest.json. Its historical zlib-style COPYRIGHT notice is preserved; modern Squirrel's license is not substituted. |
| ARM Compiler 4.1 build 1454 (armcc) | fetched at build time to tools/armcc-4.1-b1454, never committed | Proprietary ARM software, redistributed by the decomp.me compilers project at the pinned archive URL in tools.lock.json. The repository stores only the URL, size, SHA256 and member digests; no compiler file is tracked. Operators may use it only where entitled to use ARM Compiler. The report job materializes it; `python build.py --compiler-profile clang-21` builds without it. |
| Public JNI/LLVM headers and NDK notices | platform/app-shell/third-party-native-includes.zip | Unchanged public tooling headers, pinned by the app-shell tool manifest. The bundle includes the original notices. |
| GNU General Public License text | LICENSE | Unmodified standard GNU GPL version3 license text. |

Downloaded compiler, SDK, JDK, solver, objdiff, CTRTool and Python distributions remain outside the source repository under tools/. Their installers and lock files identify exact upstream releases and hashes; their own upstream terms apply. Research references to ByteMatch and pokebw2 are attributed in the relevant documents. Their implementation and symbol databases have not been copied into the game reconstruction.
