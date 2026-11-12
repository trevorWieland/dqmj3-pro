# DQMJ3 Professional reconstruction

[![Progress](https://bytematch.dev/trevorWieland/dqmj3-pro.svg)](https://bytematch.dev/trevorWieland/dqmj3-pro)

A reconstruction of Dragon Quest Monsters Joker 3 Professional for the Nintendo 3DS, from the owner's measured base and update images. Started 6 November 2026.

## The objective

Turn this repository into a complete re-creation of the game: all 26,990 functions present as ordinary readable C, compiled with the identified original toolchain and linked into an image byte-identical to the original, with **zero bytes retained from the original executable**, buildable end to end by anyone who owns a copy of the game by running one command.

Byte-identity is not a score to chase. It is the test that proves the reconstruction is the game rather than a plausible imitation, so it is the sole arbiter of credit and nothing else is permitted to move a number.

A function that reproduces its bytes but is named `fn_004c0388` with unnamed parameters is half done, and the missing half is the half people need. Every function carries a name describing what it does, parameters named for what they are, and documentation in place — not in a document beside it that goes stale the moment the code moves. The same standard applies upward: the scripting ABI, the engine's public surface, the parameter-table schemas and the game's mechanics are documented where the code lives, so reading the repository teaches the game rather than merely exhibiting it.

The work is shaped so four different people can each get what they came for. A **modder** needs the parameter tables and message archives to round-trip byte-identically, and a way to prove an edit was surgical. A **romhacker** needs the engine and the event, flag, script and save systems legible enough to rewrite. A **porter** needs every platform service to arrive through a named boundary rather than scattered across twenty-six thousand functions, because that decision cannot be retrofitted. Someone **rebuilding the game on another engine** needs the behaviour and the content, not this C, which is why mechanics documentation is generated from reconstructed code rather than imagined. None of these is a byproduct of finishing the decompilation; each changes what gets reconstructed first.

## Current state

`build.py` is the measurement and the only source of these figures. Run it against your own image to reproduce them.

| | |
|---|---|
| Byte-identical functions | **2,832 of 26,990** |
| Byte-identical instructions | **112,572 of 7,051,280** (1.60%) |
| Retained from the original | **24,099 functions, 6,915,916 text bytes** (8,229,192 bytes including data and BSS) |
| Linked image | byte-identical for the functions it places; 59 functions differ |

The reconstruction is not complete. Every retained byte is a visible debt.

Anyone who declines to fetch a proprietary compiler can select the open toolchain with `--compiler-profile clang-21` and reproduce a smaller figure.

## Build it from your own image

```powershell
python setup_tools.py                             # pinned public tools
python toolscripts/bootstrap_public_compiler.py   # pinned Clang 21 and ld.lld
python toolscripts/armcc_bootstrap.py             # pinned original compiler (proprietary, not committed)
tools/python/Scripts/python.exe setup_tools.py --verify          # confirm the build toolchain
tools/python/Scripts/python.exe -I build.py --image "C:\path\to\DQMJ3P_Update.cia"
```

`--verify` checks the toolchain the game build needs. Two optional groups are skipped by default because no build requires them: the Android host-target toolchain (`--host`, needed only for `run_checks.py`) and Ghidra (`--research`, needed only for re-deriving the split from scratch).

`build.py` refuses any image whose SHA-256 does not match the pinned identity, extracts it, compiles `src`, carves each function out of the original, compares bytes, links the complete image at the original addresses and prints compiled-from-source bytes against retained bytes. `complete: YES` requires zero retained bytes and a byte-identical image, and nothing weaker will produce it.

## What is usable today

- **Parameter tables and messages.** `toolscripts/game_data.py` decodes, edits and re-encodes 80 parameter files covering 53 table families and all 84 message archives with a byte-identical round trip, including the indexed AI-action container and the battle-script name-slot tables, and reports what references any given row. The tables are loose files under `data/Parameter/`, so a rebuilt table is already the format the loader reads.
- **The scripting layer.** 628 native bindings are named and mapped to their addresses in `config/script-natives.json`, with the ABI, stack indexing and error protocol documented in [docs/script-api-native-reconstruction.md](docs/script-api-native-reconstruction.md).
- **The engine's public surface.** Shared constants, the message window, motion, event flags, audio, effects and input services are documented where their code lives.

## How work happens

Work proceeds as parallel lanes, each in its own isolated worktree owning a disjoint family of functions, with the build as the only oracle: a lane may claim nothing it cannot show compiling to the exact original bytes, so throughput rises without the bar moving. Scope is set by measured capacity rather than an arbitrary cap — batches grow while the first-pass green rate holds and shrink when repair rounds multiply.

Every change lands through a pull request that a verifier reproduces independently: compile, link the whole image, and diff the per-function credit set so nothing is silently gained or lost. Published progress is emitted by the build from the user's own inputs, never from a hand-maintained artifact.

Failures are diagnosed at instruction level and turned into general rules, because those rules are the real product of a hard day and the next lane inherits them instead of rediscovering them. So far: literal pools belong to functions rather than translation units; a constant the original loaded from a shared address must be declared as an extern at that address, never inlined; a call must resolve to an absolute address before it can be compared.

## Inputs

The owner archive `dqmj3pro.7z` has SHA-256 `8af8156afc1c69c3c3ad90cdd57a204417e27cef07b6b6958270b3c1c128bd7d` and contains a base CIA plus update CIA.

| Input | Title ID | Raw title version | Decompressed code SHA-256 |
|---|---|---:|---|
| Base | `00040000001acb00` | 0 | `a9cbe1be5e860d6a3d72ceb7f2fba680169276ebf6d50f30586d589af3a89554` |
| Update | `0004000e001acb00` | 3136 | `d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126` |

The update image is the native target; the base executable remains a separate reference. Original archives, executable images, shipped assets, keys and saves are not published. You supply your own copy; the repository supplies the source and the build.

## Repository layout

| | |
|---|---|
| `src/native/` | recovered native C, compiled and measured |
| `config/symbols.txt` | the split: address, mode and size of every function |
| `config/script-natives.json` | script identifier to native address bindings |
| `config/script-constants.json` | shared constants declared at their image addresses |
| `build.py` | the build and the measurement |
| `toolscripts/` | build, splitting, comparison and data tooling |
| `docs/` | engine, scripting ABI, data formats and build documentation |

See [CONTRIBUTING.md](CONTRIBUTING.md) before changing anything.
