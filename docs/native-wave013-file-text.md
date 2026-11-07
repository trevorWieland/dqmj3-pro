The file-text sub-batch closes two complete source functions: the 616-byte UTF16 transform at 0x004c446c and the 72-byte at-sign predicate at 0x004c4420. Their 24 pool bytes, full original ranges/callers, genuine candidate objects and relocations are recorded in `evidence/lanes/wave013-native/file/text/packet.json`. Neither function is an exact-match candidate. This worker grants no admission or source credit. The 492-byte file frontend remains a separate body.

The transform follows the measured game stages: remove ASCII/U+3000 spaces, fold fullwidth Latin letters/digits, convert the selected hiragana interval to katakana, enlarge twelve selected small kana, and handle halfwidth single/voiced/semivoiced forms. Punctuation, extension kana and other code units retain the measured behavior. The predicate recognizes ASCII and fullwidth at sign, stops at NUL and obeys its signed maximum. The normalizer has a void API: its measured caller ignores incidental R0 contents.

All 96 mapping entries are reproducible from the pinned [Unicode 17.0 character database](https://www.unicode.org/Public/17.0.0/ucd/UnicodeData.txt), SHA-256 `2e1efc1dcb59c575eedf5ccae60f95229f706ee6d031835247d843c11d96470c`. All 58 single halfwidth entries match public narrow decompositions. The 21 voiced and 5 semivoiced entries are selected canonical compositions; the twelve small-kana mappings derive from public character names. Unicode's [normalization specification](https://www.unicode.org/reports/tr15/) distinguishes compatibility decomposition/composition. This game does not apply a generic NFC/NFKC algorithm: its small-kana enlargement and space removal are separate rules, and four additional Unicode-valid voiced combinations remain separate base-plus-mark sequences. No historical game Unicode version is inferred.

The source header is generated from public data and explicit measured selection rules, then compared privately against every original table entry. No extracted original table payload is published or credited. A public clone can regenerate/check it without original inputs:

```
tools/python/Scripts/python.exe toolscripts/native_wave013_file_unicode.py --public-only --emit
```

Omit `--public-only` for the private complete-table comparison. The proof records all table hashes, addresses, counts, source URL and effective generator. Preliminary attempts are preserved: unrestricted public compositions exceeded the measured table, and a visual reading of three entries was corrected by complete byte comparison before any source behavior proof.

Every one of 65,536 u16 values passes both functions against original ARM, compiled-source ARM and actual Windows 64: 131,072 single-code-unit queries. Another 1,310 mixed/pair/capacity fixtures and 64 flag/return combinations pass. All 172 original instructions are reached. Nine normally returning wrong-source controls fail semantic comparison, including an extra Unicode composition the game does not support and an unchanged-string mutation that zeros a previously untouched byte after NUL. The full 1,024-byte output region, untouched tail, input bytes, guards, ABI registers/SP and executable/read/write bounds are checked. Actual source output is never patched and no private pointer masks are needed.

The exhaustive claim is only the finite single-u16 domain. Arbitrary strings/overlaps, malformed buffers, concurrency and MMIO are not qualified. Separate bounded arrays and capacities are used; a zero-capacity bounded fixture preserves the original unsigned guard quirk without promising a safe general zero-capacity API. No universal or whole-memory equivalence is claimed.

The 16-field ARM/Windows ABI probe checks the separately measured 48-byte target/64-byte native file view and typed stream callback layout. The full owning class and IO behavior are not established by this sub-batch. The component has no mutable globals and needs no owner-derived Unicode table service. Android API 29 linking uses 16-KiB load alignment; device execution and native game builds are not claimed.

Reproduce the sealed behavior proof and 16 tests:

```
tools/python/Scripts/python.exe toolscripts/native_wave013_file_text.py
tools/python/Scripts/python.exe toolscripts/native_wave013_file_text_verify.py
```

The two-function 688-byte functional proposal uses the existing schema, with medium confidence and explicit bounded limits. No shared registry, inventory denominator, CI or acceptance ledger is edited by this worker. Original images and private table bytes/disassembly remain under ignored paths.
