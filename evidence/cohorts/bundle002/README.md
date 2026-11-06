# Native source cohort 002

This proposal adds 89 disjoint functions and 956 instruction bytes to the accepted 267-function parent. Its cumulative source-linked module contains 356 functions and 4,164 instruction bytes. It earns no new source credit until its committed source passes an isolated clean replay and the coordinator publishes acceptance.

The additions are 58 setters with captured record-pointer returns, 26 direct field getters, three caller-qualified constants and two VM count/slot helpers. The three nonmatching stateful VM drafts, three indirect-only setters and the superseded void setter interfaces remain excluded. No original retained bytes, original script source, pools or initialized data receive credit.

The coordinator independently recompiles source, validates complete Ghidra boundaries, decodes original ARM calls and conditional tail branches and Thumb BLX interworking, checks actual-return semantic negative controls, and genuinely links all admitted C sections with original gap scaffolding. The complete linked module must equal the measured owner image; the scaffolding has zero source credit.

The VM count domain initializes 0 <= base <= top <= 255, with subtraction fitting signed 32 bits. The slot domain uses one 256-element object array and an interior stack pointer at element 32; tested indices -16 through 127 produce elements within that array. These tests do not establish complete VM admission, capacity or reference-graph invariants. Host pointer stride must use sizeof(VmObject).

Setter tests compare the original captured record-pointer result and full memory effects. Portable pointer-layout tests also rebuild the 257 prior getters and these 58 setters as actual Windows code and Android ARM64 components. Android device, whole-game, source-only executable and source-only container proofs remain separate.

Reproduce the full proposal through run_checks.py from a fresh committed snapshot. publish_native_bundle002.py requires the isolated replay receipt, all named source/control/platform stages, immutable parent acceptance, committed C hashes, disjoint intervals and exact cumulative and delta counts. It refuses an older foundation-only receipt or a changed parent ledger.
