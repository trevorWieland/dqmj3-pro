# Independent composition review

The clean replay at `5d394c8` passed 111 tests and 1,323 public source compilations. Its four component binaries are byte-identical to the frozen ARM32, Windows x64, AArch64 CPU-model and Android builds. Its complete cold reference trace and typed-graph files are also byte-identical. The only three packet comparison variants are layout-probe JSON files whose compiler command paths differ between checkouts.

The coordinator verified 14 cold cases across four execution paths, seven steps on the same VM across four paths, and 13 normally returning control executions rejected by their observers. Startup uses the recovered factory and shared-state initialization. A separate copy of 171 source inputs, totaling 485,466 bytes, rebuilt the same four binaries and passed 42 source executions while restricting outside project reads to the shared tool installation.

The independently rebuilt Android library has the same SHA-256 as the component tested on the physical Thor: `f904557e2f91ccac65790eb79d388b389c36da23dcc7826490016e4c1ed78c5d`. The hardware receipt records 21 native program executions. It does not claim instruction-level memory-read tracing on hardware.

Full original post-call graph equality remains false because explicitly retained inactive-frame residuals differ. The bounded reuse trace shows no reads of those fields before reinitialization in its measured sequence. VM destruction, arbitrary callbacks, allocation failure, the complete interpreter, whole-memory equivalence and native game builds remain unqualified. This review grants no additional exact-match or overall source-coverage credit.

The first clean replay at `c430af2` reproduced the component but failed a compilation-contract test whose explicit Windows-only fixture list omitted the published wave047 fixture. The corrected list passed the clean `5d394c8` replay; both receipts are retained.

Coordinator evidence is in `evidence/verification/compose057-coordinator-5d394c8.json`; its producer is `evidence/verification/producers/review-compose057-replay.py`. Both GitHub CI jobs passed at `5d394c8`, ByteMatch ingested that commit, all 358 registered C source paths resolved to their expected files, and the unmodified official source checker reported no problems in its 42-function sample.
