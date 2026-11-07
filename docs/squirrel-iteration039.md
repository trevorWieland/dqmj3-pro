# Execute039 iteration development

Wave 039 is a frozen, bounded partial successor to Execute031. The measured FOREACH opcode 51 fragment at 0x18ff9c calls the complete controller 0x1975b0 (1,300 instruction bytes). POSTFOREACH opcode 52 at 0x190014 requires a genuine generator and remains excluded. Nongenerator FOREACH steps return jump 1 to skip the POSTFOREACH instruction; an exhausted iterator returns the supplied exit displacement. No whole-Execute or whole-controller credit is granted.

The measured dependent bodies are byte-string Next 0x1a1eec (200 bytes), table Next 0x1a8604 (300 bytes), class Next 0x1a178c (280 bytes), and cursor conversion 0x1a2b2c (40 bytes). Cursor conversion is reused from already-qualified 030 with zero duplicate credit. String iteration uses signed 8-bit bytes. Arrays compare the cursor against size unsigned, while string/table/class valid cursor storage is nonnegative and in bounds. Invalid cursor types and negative storage accesses remain unsupported until measured explicitly.

The original scalar key/cursor operations release the old owner before publishing the integer. Table iteration caches its selected node through key-owner release and reads the value afterward. Array iteration reloads its values pointer after key release. Weak values unwrap through the actual 014 representation except when table Next's raw flag is nonzero. These read and release orders require explicit original/source and normally returning negative controls in the qualified corpus.

The typed 039 Get bridge replaces only original 198578's direct instance success branch for actual SqClassInstance030. Both target views place values at 44, but native partial SqLookupInstanceStorage020 uses 80 and full SqClassInstance030 uses 88. Delegate is target 24/native 48 and class is target 28/native 56 before this divergence. Descriptor bit 0x02000000 selects instance values at low 24-bit index; otherwise it selects class members44.primary. The unchanged opaque instance fallback performs virtual method lookup without treating the full instance as the old partial view. Frozen 020/023 remain qualified only for their declared native partial-storage domain; no retrospective full-native-instance claim or duplicate 198578 bytes are granted.

The first genuine bytecode loops create arrays/tables from source and use an actual 015 interned string. Reference mode executes the unchanged original Execute, FOREACH controller, cursor and Next bodies; source mode maps only compiled authored code. Native callbacks inside the loops expose key/value/cursor state through actual 022 calls. All 398 sets pass original ARM, source ARM, a real Windows executable and a high-address Android-target AArch64 model: 1,592 comparisons. This includes all 314 frozen 031 programs; their complete source arenas and structured prefixes are identical to a fresh 031 build. Seven deliberately wrong compiled implementations return normally and fail independent models on all three compiled targets. Two retain the exact normal-source final ARM arena but fail ordered key-release/publication observations. Nine fresh and nine copied-tree tests pass. The complete primary/copied reports and all three binaries are byte-identical. Raw original inactive native-frame bytes remain separately recorded; every other arena byte is compared. This is not universal machine-state equality.

Generator/debug/GC paths, malformed bytecode, unsupported cursor/object graphs, unrestricted reentrant mutation, allocation failure and whole-game/physical-device execution remain excluded. All 028/031/035 and 030/034 provider files remain frozen. Independent Root review of 034 is pending.


The packet observes 1,036 of 3,296 original Execute instruction locations. The FOREACH controller visits 186/325 locations, string Next 31/50, table Next 61/75 and class Next 50/70. These visits grant no whole-function or recovered-byte credit. Source 039 does not consume 035/038 or claim their domains. The completed class/instance cases use actual 030 construction and 034 member definition, actual 022 native invocation and the explicit typed 039 Get bridge; old partial providers remain unchanged.

Reproduce from local immutable originals:

```text
tools/python/Scripts/python.exe toolscripts/squirrel_iteration039.py --output work/squirrel-iteration039/qualified398
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_squirrel_iteration039.py -v
tools/python/Scripts/python.exe toolscripts/squirrel_iteration039_replay.py --report work/squirrel-iteration039/qualified398/report.json --copy-root work/squirrel-iteration039/replay398-copy
```

The replay destination must be new. The identical primary/copied private report SHA256 is `457c06cf367d8a0e03ebc89d24d6658b75991a3d85025beb3b24e368b55b64af`; public metadata begins at `evidence/lanes/squirrel-iteration039/ready.json`. All original images, disassembly and raw reports stay private. This worker grants no source or matching admission.
