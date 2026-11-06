# Static executable scope

The progress target is the initialized ARM text region declared by each measured owner's main NCCH program: 7,042,136 bytes for base-content0 and 7,051,280 bytes for update-content0. The ExHeader fields and complete decompressed image hashes establish these finite boundaries. Text page padding, separately mapped initialized rodata/data, and BSS are excluded. A text-region extent can contain literal pools, tables and alignment; it is not an instruction-only byte count.

The static corpus contract also reconciles recognized auxiliary executable formats against the recursive container inspection. It includes the actual CIA content tables, ExeFS file tables, supported XBB/SARC/gzip members, structural program candidates and hash-identical aliases. Both measured builds contain exactly one ExeFS `.code` entry, in content zero. The other NCCH content supplies resources with no ExeFS executable. No additional structurally qualifying CRO/CRS-layout, ELF32 or embedded NCCH ARM image was found in the inspected corpus. The known archive layouts have no remaining decoder failures. A newly qualifying module or unresolved known archive decoder causes this check to fail, rather than silently keeping the old scope.

Nine base marker occurrences are reconciled explicitly. Six CRR0 markers are registration-data candidates, which do not establish ARM executable images. Two CRS0 marker candidates fail their declared program extents, and one DSP1 marker candidate fails its count/size structure. The actual DSP firmware and PICA programs are recorded separately: both builds contain 43,748 DSP program bytes; base has 46 recognized GPU code images containing 52,476 bytes, and update has 30 containing 33,012 bytes. They are not added to ARM text progress.

The opaque leaf count is a parser-coverage statistic, not a count of unknown executables. It includes 4,578 base and 21 update BCH payloads whose section and command framing is already qualified. Remaining custom resources, sound, models, tables, scripts and archive members do not become invented ARM modules merely because arbitrary bytes could theoretically be interpreted as instructions. The contract covers declared and structurally recognized static programs; it does not claim universal semantic classification of every resource or absence of deliberately hidden code.

## Loader evidence

Both measured ExHeaders permit the `ldr:ro` service. Permission does not establish that a game uses the service or ships additional modules. The main images contain no ordinary `ldr:ro`, `ldr:`, `.cro`, `.crr`, `.crs`, `LoadCRO` or `nn::ro` literals. This absence is supporting evidence, rather than proof about dynamically constructed names.

The new checker structurally identifies the real service-handle acquisition path in each native image. It verifies the thread-local IPC buffer at offset 0x80, request header 0x50100, service-name words, length/flags and the SendSyncRequest SVC. It then verifies the validating API wrapper and enumerates its direct ARM callers. The update has 19 such call sites, plus the one wrapper-to-IPC tail branch. The linked srv port and ConnectToPort SVC are separately observed. Some service names arrive through parameters or objects, so this bounded structural investigation is not a complete name-dataflow proof or runtime execution trace. It establishes a real SDK service path without inventing an unobserved RO module.

Primary implementation references are [CTRTool's ExHeader structures](https://github.com/3DSGuy/Project_CTR/blob/master/ctrtool/deps/libnintendo-n3ds/include/ntd/n3ds/exheader.h), [libctru's service-handle request](https://github.com/devkitPro/libctru/blob/master/libctru/source/srv.c), and [Azahar's separate CRR registration and CRO loading handlers](https://github.com/azahar-emu/azahar/blob/master/src/core/hle/service/ldr_ro/ldr_ro.cpp). The checker reads measured files and records addresses, extents and hashes; it does not publish their executable bytes.

## Reproduce

Run with the pinned Python dependencies and owner inputs already materialized:

```powershell
& .\tools\python\Scripts\python.exe toolscripts/executable_scope.py --refresh-container-scan
& .\tools\python\Scripts\python.exe -m unittest discover -s tests -p test_executable_scope.py -v
```

The fresh option rereads both measured CIAs through the existing structural recursive auditor and requires its complete output to equal the frozen corpus evidence. Fresh intermediate files remain under ignored work/executable-scope/. The default verifies the existing evidence producers and consumed metadata, the native image hashes/layouts, every payload/alias accounting entry, recognized-candidate dispositions and linked service structures. The public result is evidence/lanes/executable-scope/scope.json, containing metadata and hashes only.

staticMainImageScopeComplete means this finite declared-text contract is closed. It does not grant source credit, prove function boundaries, classify every text byte semantically, establish runtime update precedence, or claim a source-only game. Function ownership and literal/data regions are reconciled independently when constructing objdiff units.
