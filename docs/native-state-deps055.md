# Controller dependencies 055

This successor relocates unchanged frozen family-v2 writer/reserve C and resource-v3 pointer-provider C into `src/native/wave055/controller-deps-v1`. The relocation receipt pins every exact byte copy. All earlier private and public stages remain unchanged.

The proposed production mapping is `0x6f9544` → `state_reserve055` (92 instruction bytes), `0x166900` → `state_write_fixed055` (396), and `0x7292d0` → `state_resource_lookup055` (44). Sixteen literal-pool bytes are excluded. These are proposals for independent review; this packet grants no source, inventory or matching credit. The complete 14,600-byte caller is outside this stage.

`helpers055.c` also preserves the older `state_lookup055` definition. That token-only first-U32 view is retained solely to replay the historical 152-case diagnostic corpus. It is not the production resource-pointer provider, is not the canonical source-link proposal, and receives no additional credit. The production getter uses opaque `StateResource055` pointers, a named pointer-table container and actual pointer entry nodes. The source never substitutes a truncated host address for a target token. The concrete resource completion in `fixture055.c` is a diagnostic consumer fixture, not a complete production resource owner or lifetime implementation.

The reserve function writes only zero/header words and advances over untouched payload holes. The fixed writer uses bounded blocks of at most 128 words, a fixed header base and no 0x80000000 flag. Both preserve strict capacity comparisons and the measured mixed raw-R0 observations. The admitted writer counts are 0 through 4096, with properly aligned, physically backed U32 arrays, checked pointer arithmetic and source/output alias behavior as tested. Original global construction, allocation ownership, hardware addresses and arbitrary invalid memory are not qualified. The original optimized-copy branch is excluded by an independently checked finite clamp/carry invariant; no external memcpy behavior is supplied or claimed.

The 152-case writer/token corpus and 51-case actual-pointer/consumer corpus run original ARM, authored ARM, real Windows x64 and high-address AArch64 CPU models. Writer arenas are compared completely; native pointer layouts are checked independently, not asserted byte-equal to target layouts. The real pointer corpus executes hash-bound original caller loads from resource fields at target +0x808, +0x818 and +0x81c and separately compiled typed native consumers. Only the complete getter is proposed; caller fragments receive no credit.

The Windows fixed-writer success result is the actual address of its DLL's declared global pair. The raw address, module load base and pair RVA remain in every observation. The source-copy comparison substitutes a symbolic pair plus stable RVA only in a post-execution comparison view, after checking each raw result equals its actual declared pair address. No executed heap, object, register, code or literal is altered. Universal raw-report identity is not claimed. The earlier failed raw-address comparison is preserved in the private frozen family-v2 packet.

The pointer-truncation negative is deliberately identical on ARM32 and rejected on both 64-bit backends. The other returning controls must fail on all three authored backends. This is not physical Android, operating-system, GPU, engine or game execution; the AArch64 products are CPU-model objects. No claim is made about global initialization or the complete controller family.

Reproduce from the repository root, using project-local dependencies and the owner's verified original image:

```powershell
$env:PYTHONPATH='toolscripts'
tools/python/Scripts/python.exe toolscripts/native_state_deps055_packet.py
tools/python/Scripts/python.exe toolscripts/native_state_deps055_packet.py --verify
tools/python/Scripts/python.exe -m unittest discover -s tests -p 'test_native_state_deps055_*.py' -v
```

The producer runs a nine-configuration public C preflight, both complete corpora, eight normally returning controls (24 executions, 23 rejections and one expected ARM32 identity), and two tiny C/header-only source copies. It copies neither repository, tools nor original inputs. All private raw diagnostics remain under `work/native-state055-deps-public/v1`; public evidence contains hashes, bounded synthetic observations and metadata only. Effective package/interface/native-library tool identities remain separate.
