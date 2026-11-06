# Pokebw2 practices for understanding a matching reconstruction

Research snapshot: 2026-11-06, pinned repository commit [`0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f`](https://github.com/fuddlesworth/pokebw2/commit/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f), committed at 20:19:28 UTC. Issue and PR discussions were read separately as mutable public records; their timestamps and observation completion time are recorded in the companion evidence. This is a read-only process study. No repository code, symbol database, game payload, or tooling was imported, and no remote comment or issue was created.

The useful lesson is to make semantic understanding an independently reviewed body of evidence. Pokebw2's README reports byte-identical rebuilds of both supported ROMs, while its naming workflow continues investigating functions, fields, parameters, states and constants. The naming work does not become unnecessary when machine code matches. Its native PC port remains a long-term goal. These are the project's statements; this study did not acquire its ROMs or independently reproduce those builds. [README](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/README.md), [naming workflow](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/.agents/skills/name-symbols/SKILL.md).

## Observed workflow

**A claim identifies a bounded piece of work.** Contribution guidance separates reconstruction issues from naming issues, asks contributors to check existing claims, and requires useful partial-progress handoffs. Issue 650 demonstrates the lifecycle concretely: a contributor claimed one parameter and its declaration, linked the resulting PR, released that claim, and explicitly left the rest open. Later another contributor claimed a larger module audit. The public record also distinguishes incidental edits to shared names from owning the whole affected module. [Contribution guidance](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/CONTRIBUTING.md), [claim](https://github.com/fuddlesworth/pokebw2/issues/650#issuecomment-6693687781), [release](https://github.com/fuddlesworth/pokebw2/issues/650#issuecomment-6694124075), [shared-name notice](https://github.com/fuddlesworth/pokebw2/issues/650#issuecomment-6632079527).

**The queue measures opportunities to investigate.** The naming report lists address-based symbols, unknown fields, placeholder identifiers and numeric cases/comparisons. It excludes comments/string literals and uses build-map information to exclude anonymous compiler objects. Its own documentation treats numeric comparisons and cases as leads: coordinates and counters can properly remain numbers. Shared headers receive shared ownership rather than being counted as independent module work. A reduced count therefore describes edits, not a percentage of behavior understood. [Report implementation](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/tools/decomp/naming_report.py).

**Names need usage evidence and scope.** The naming skill asks investigators to follow callers, callees, tables, strings and every access through the relevant type. Shared fields need consistent declarations and accessors. Unsupported roles retain unknown/offset labels; explicit enum values and unchanged storage types protect representation. Original embedded strings and script bytes need special care during identifier changes. This supports a distinction between a justified descriptive name and a recovered historical name. [Naming workflow](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/.agents/skills/name-symbols/SKILL.md).

**Layout and provenance remain explicit.** The structure investigator gathers access offsets, widths, signedness, array strides, allocation size and ownership before proposing a type. Organization guidance keeps symbol provenance and version mappings, preserves source ordering evidence, and warns against merging types merely because their layouts look alike. Same-offset fields in unrelated DQM partial views must retain separate identities until object ownership is established. [Structure investigator](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/.claude/agents/struct-recovery.md), [organization guidance](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/docs/code-organization.md).

**Review separates observation from inference.** The game reviewer requires concrete references, labels an untraced causal explanation as a hypothesis, identifies a check that would resolve it, and states what was unverifiable. Reviewers read their whole assigned partition and search across the repository for affected uses. This is a documented expectation, not evidence that every merged name received an independent proof. [Reviewer guidance](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/.claude/agents/review/pbw-game-reviewer.md).

## Concrete recent examples

| Public record | What it demonstrates | Limit of the evidence |
| --- | --- | --- |
| [PR 811](https://github.com/fuddlesworth/pokebw2/pull/811), merged November 6 | A small parameter rename is justified through caller/callee usage. The changed-file API shows an owner header and source definition, totaling three added and three removed lines. The author reports both ROMs matching and all-source warning checks. | The description supplies semantic reasoning and claimed verification; this study did not execute it. |
| [PR 808](https://github.com/fuddlesworth/pokebw2/pull/808), merged November 4 | Prepared investigation sheets support parallel work across modules. The description identifies weak inferred names for closer review, resolves four conflicting field names, and defers fields covered by another contributor's active claim. | A large accepted naming batch still contains explicitly inferential claims. |
| [PR 809](https://github.com/fuddlesworth/pokebw2/pull/809), merged November 4 | Of 50 investigated overlays, 20 received partial changes and 30 received none. The author leaves them open and calls out weaker state/field interpretations for review, while reporting matching ROMs and 3,584 warning-free compilations. | Passing compilation and byte checks do not establish completion of semantic investigation. |
| [PR 796](https://github.com/fuddlesworth/pokebw2/pull/796), merged October 30 | Remaining address-named functions are classified: 801 veneers and five real functions lacking a supportable name. Other leftovers include fields owned elsewhere, unused/write-only fields and unresolved values. Verification includes unchanged strings and per-commit ROM matches. | The raw unresolved-name count, 806, substantially overstates remaining substantive function-naming work. |
| [PR 793](https://github.com/fuddlesworth/pokebw2/pull/793), merged October 30 | Address-named data are separated into compiler literals, interior aliases, function-local statics and actual file-level objects. Shared values needing one cross-module enum are deferred. | Automatically assigning semantic names to every apparent data symbol would create misleading work and ownership. |

## Checks to carry into DQMJ3Pro

Pokebw2 applies names through a tool that updates source and version mappings, with a persisted name list anchored to primary module/address identity. Its guidance combines full rebuilt ROM hashes, compilation of all available source, and review of affected scripts and strings. The address remains an anchor even when a readable name changes. [Rename tool](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/tools/decomp/rename_symbol.py), [contribution guidance](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/CONTRIBUTING.md), [organization guidance](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/docs/code-organization.md).

There are important limits to each check. Pokebw2's decompilation documentation explains that a partial C file may compile while the ROM still links original content. Its object probe can mask relocation fields, and an omitted function is absent from the comparison. Consequently, a passing ROM hash or a partial object match cannot independently prove source coverage, complete function emission, or correct call targets. DQM's complete-object, real-link, call/relocation closure and independent replay requirements should remain intact. [Probe and partial-file guidance](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/docs/decompiling.md).

A DQM rename admission should therefore retain the canonical program/module/address/mode identity and accepted packet references, then verify the complete emitted function set, original instruction/pool spans, relocations and linked spans. Compare affected data and script artifacts too: assertions can stringify expressions, and source filenames or identifiers may be embedded data. Run the existing bounded behavior/model cases after source edits, recording their domains and failures. A semantic-only documentation alias can precede a source rename when the role remains uncertain. This is a proposed DQM workflow, not an assertion that Pokebw2 performs our packet checks.

## Suggested semantic record and task loop

Keep these independently reviewable dimensions alongside the existing source ledger:

| Dimension | Proposed contents |
| --- | --- |
| Stable identity | Input/build/program/module, canonical address and mode, field-owner identity plus offset/width where applicable. |
| Source proof | Existing accepted packet/commit, exact object/link status, declared dependencies and behavior domain. |
| Semantic claim | Descriptive alias, concise operational meaning, units, ownership/lifetime, valid input range and return meaning. |
| Confidence/provenance | Historical name with original evidence; descriptive role with observed support; supported inference; hypothesis; unresolved. Record public upstream references separately. |
| Evidence and counterevidence | Reproducible address/caller/access/table references, independent observations, alternative interpretations and explicit unresolved cases. |
| Review/ownership | Claim owner, affected shared types and files, reviewer, checked revision, release/handoff and named follow-up test. |

A public upstream counterpart supports a semantic investigation; it does not by itself recover this game's historical identifier. Record the machine effect and the proposed gameplay meaning separately when only the effect is established.

A practical loop is:

1. Claim one family or owned type and enumerate every affected declaration and use.
2. Preserve the canonical identifiers; collect layout/effect facts before proposing names.
3. State the strongest supported meaning and list competing explanations. Record unknowns explicitly.
4. Review cross-module owners, strings, script encodings and target/host layout consequences before editing.
5. Make a small change, rerun the relevant source/link/behavior checks, and review what was actually emitted.
6. Publish a handoff with its evidence and remaining work. Report accepted source, semantic claims and platform execution separately.

The porting notes add a useful review lens: pointer/handle representation, callback lifetimes, completion boundaries, fixed-point units and platform-thread assumptions can remain unresolved despite matching target code. DQM's Windows/Android work should attach these contracts to the semantic record and its host fixtures instead of treating a readable field name as a portable API. [Porting notes](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/docs/porting-notes.md).

The repository declares GPLv3. This research adapts practices and records citations; it reuses no implementation or symbol database. Any later proposal to copy tooling or other material needs its own provenance/license review. Our public/open-toolchain policy, original-input publication ban and source-credit rules continue to govern DQM. [Repository license](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/LICENSE).

Companion evidence records the pinned document blob identities, discussion timestamps, PR revisions and read-only scope. It preserves public metadata and this study's observations, without retaining external game source.

