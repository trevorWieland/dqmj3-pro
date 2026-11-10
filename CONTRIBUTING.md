# Contributing

This is the development repository for the DQMJ3 Professional reconstruction. Source, build tools, research, naming investigations and derived validation records belong here. Supply your own original inputs; ROMs, CIAs, extracted original payloads, retained-original hybrid binaries, private keys and saves do not belong in the public tree or public CI artifacts.

The initial native source target is the measured update module. Base and update have separate program IDs and executable hashes. Current acceptance is 412 functions and 5,128 instruction bytes; the conservative main-text denominator is 7,051,280 bytes; historical function-boundary review, overall whole-game source percentage and native game builds remain incomplete. recovery.json and immutable cohort acceptance receipts are authoritative.

## Work and review

Claim a bounded function family, type or subsystem before changing it. Use complete program/module/address/mode identities and exclusive output paths. Read related findings and active claims. A worker prepares a packet; one coordinator reviews integration and grants source credit. Keep partial handoffs explicit about what passed, what remains unknown and which process is still running.

Find the relevant reconstruction or naming issue and read its comments before starting; open a bounded issue if none exists. Comment with the files, function family or address range you claim, then recheck for a concurrent claim. A claim stays active until its author releases it or the issue closes. Coordinate with an existing claimant before touching shared types or overlapping ranges. Release a claim when leaving work unfinished.

After each published change, comment on the issue with the commit or pull request, exact scope, checks performed, evidence paths and remaining work. A partial handoff leaves the issue open. Close it only when every acceptance item has evidence and the coordinator has reviewed any requested source credit. Name unresolved cases and follow-up work explicitly. Reconstruction and semantic naming can have separate issues for the same family.

Use ordinary readable C/C++ for logic. Instruction/register state machines, embedded executable blobs, binary/object/relocation patching and compiler-output generation earn no reconstructed-source credit. Evidence of original assembly or unavoidable platform operations is required for low-level assembly. Name functions and variables for what they do, and document the code where it lives — the reader is holding the source, not a document beside it. Keep files at most 500 physical lines. Verified unchanged third-party source retains its own notices and formatting.

Use explicit source lists. Historical void setters, nonmatching drafts, fixtures and public reference code have distinct roles. A source file compiling or a hybrid image matching does not establish that every function was reconstructed or linked from that source. Preserve exact object spans, actual linked spans, call/data/relocation closure, original/source behavior, return sentinels and semantic wrong-source controls. An exception or instruction-budget stop is not a successful negative semantic comparison.

## Checks

The source-only CI compiles every active native C unit for the original ARM32 target and Windows/Android host targets without receiving original game inputs. This checks source consistency and warnings; it does not prove matching or a complete game.

The private-input verification pipeline is run with the pinned local tools and original CIA copies. run_checks.py performs intake, independent extraction, source packet production, genuine module linking, component execution, diagnostics, research checks and tests. validate_clean_checkout.py repeats a committed snapshot in a new owned work directory with separately materialized inputs and dependencies. Preserve failed receipts, effective tool identities and domains. Never report a skipped module or missing artifact as complete.

## Understanding and names

Follow docs/semantic-understanding.md. Preserve canonical identities when proposing function, parameter, local, field, type, state or constant names. Investigate callers, callees, ownership, lifecycle, strings, tables and script bindings. Keep unknown offset names when evidence is insufficient. Naming counts are leads, and deliberate veneer/duplicate names may remain.

config/semantic-names.json records supported proposals and explicit uncertainties. toolscripts/semantic_report.py checks provenance and consistency. A source rename needs an updated mapping, all affected declarations/accesses, complete byte/link checks and relevant behavior/data checks. Embedded assertion strings, file names and original script bytes must remain stable. Source matching and semantic confidence are separate review tracks.

## Publication and CI

Publish actual implementation changes with their documentation and evidence. Audit the committed tree and reachable history with toolscripts/publication_audit.py before pushing. Public/fork compilation uses no private inputs or credentials. A trusted private-input job follows the public-source/private-original pattern studied in pokebw2; upload narrowly selected sanitized reports, never build directories containing original content. Do not expose private inputs through logs, caches or artifacts.

ByteMatch reads objdiff reports; it is not a build verifier. Keep complete flags tied to genuinely linked source and keep any reporting denominator explicit. An acceptance-only subset must not masquerade as whole-game progress. The 95-percent validated-source objective, matching metrics, functional candidates, original scripts, host components and full-game execution remain distinct.

Keep commits focused on one coherent change. State the behavior, evidence and remaining limitations. Do not modify the neighboring DQMJ2 or Monster Fieldnotes projects. Joker1 remake experiments are a separate future track and must not silently change original J3 mechanics.
