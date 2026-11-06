# ByteMatch integration review, 2026-11-06

Use hosted ByteMatch with the actual public reconstruction development repository. Publish the reconstructed source, tooling, documentation and audited history; a separate reporting repository would not meet the owner's intent. Keep original inputs, hybrid images and retained-gap objects private. Public source compilation can proceed now. Hold only the progress-report upload until its native scope and denominator are honest.

The accepted snapshot examined here is bundle001 plus bundle002: **356 functions / 4,164 instruction bytes**, update content0 module SHA256 `d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126`. This is a count of coordinator-accepted source spans. It is not an overall game percentage. Interpreted scripts, imported public Squirrel source, research drafts, component runners and diagnostic applications add no credit to this snapshot.

## Primary source snapshot

Implementation findings refer to [ByteMatch commit 37153b5d1b30531d4410d5a595592080962ce883](https://github.com/Veradictus/ByteMatch/tree/37153b5d1b30531d4410d5a595592080962ce883), downloaded through TLS from the maintainer's GitHub archive. Archive SHA256 is `62a027e357baafacafb8759f9dcd9a26acfb77661fe2ab777033b8aad1ee07a1`. The deployed site's exact revision is unconfirmed. The exact supplied [setup prompt](https://bytematch.dev/docs/setup-prompt) was unavailable through this worker's web fetch, so its complete [pinned primary document](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/docs/setup-prompt.md) was read; the coordinator also opened the deployed page.

Objdiff is the actual local CLI **3.8.3**, report schema **2**, with source pinned to [9aeec9cbab1a056ade7dc1f1625aacc41b0f8511](https://github.com/encounter/objdiff/tree/9aeec9cbab1a056ade7dc1f1625aacc41b0f8511). Software and report versions are different numbers.

## Setup-prompt requirements applied

| Requirement | Actual state and preparation |
| --- | --- |
| Inspect before editing | Local builds and objdiff exist; no project generator/objdiff.json or report workflow existed at inspection. Root owns publication and shared integration. |
| Update generator | New integration must generate hierarchical units; no hand-maintained output or decompiled-source edits were introduced. |
| Reference/source paths | Original references stay private; base objects must come from genuine C/C++ compilation. Hybrid images cannot establish source completion. |
| Source links | Existing repo-relative paths and symbol names work: actual ByteMatch lexer found 356/356 accepted definitions. No address comments needed. |
| Unit completion/categories | Complete only after full source-link proof; do not mark hybrid modules complete. Categories remain optional. |
| Per-version reports | Exact report.json path, successful default-branch run and VERSION_report artifact; normal artifact delivery needs no project upload token. |
| Functional progress/badge | Omit functional.json for bounded research. Add a real scoped badge after qualified ingestion and real owner/repo registration. |
| Verification | Real CLI/parser/protobuf/source-link probes passed locally. Hosted ingestion and its source API check remain unexecuted. |

Registration still uses the owner's normal site sign-in and Manage flow. The guide is not a reason to fabricate missing prerequisites or modify game code.

## The denominator issue is measured

Two genuine ARM32 ELFs were built with Clang/LLD: one 12-byte authored C function plus 64 unsymbolized executable-section padding bytes. The padding deliberately differs between the target and base ELF. Both .text sections are 76 bytes; 64 bytes differ. Real objdiff nevertheless emits `total_code=12`, `matched_code=12`, one function and 100 percent matching. Even its section fuzzy percentage is 100. This is a synthetic tooling diagnostic, with no original game input and zero recovered-source credit.

The reason is concrete: [report_object](https://github.com/encounter/objdiff/blob/9aeec9cbab1a056ade7dc1f1625aacc41b0f8511/objdiff-cli/src/cmd/report.rs) counts executable code from eligible nonzero symbols, skipping hidden/ignored/section symbols. It serializes section size separately. It also increments the function counter for each counted code symbol, not only a proved function boundary. Unnamed gaps disappear from the code denominator; inventing gap symbols would introduce artificial function counts.

Therefore merely wrapping the full update .text in an ELF does not produce a qualified full-text denominator. A gross-text byte baseline can be defined as a conservative, explicitly scoped research metric including unclassified instructions/pools/padding, without locking the eventual native inventory. But translating that metric into ByteMatch's stock code/function counters needs a reviewed generator/display contract. It is not the normal objdiff result and must not be presented as overall game coverage. The [project details UI](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/src/components/project-view.tsx) always shows numeric function totals; it has no unknown-function-denominator display.

An accepted-subset report would show 4,164/4,164 and 100 percent. It is useful only as a clearly labelled parser/source-link fixture. It is deliberately outside the upload overlay. Likewise, a full binary link containing original gaps may match the original image but cannot turn those gaps into recovered-source credit.

## Format and architecture

The [schema](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/src/report/proto/report.proto) contains counters, percentages, unit/function/section names, source paths, categories and optional addresses. It has no machine-byte or disassembly payload field. JSON uint64 values may be strings. ByteMatch's [parser](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/src/report/parse.ts) supports earlier migrations, snake/camel case and protobuf, but rejects future schema versions.

The actual parser probe also established that null/missing counts become zero, provided version 2 percentages are preserved, and unknown JSON properties are discarded only after receipt. Its [arithmetic](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/src/report/measures.ts) recalculates zero-total ratios as 100 percent. Parser acceptance is not validation of honest totals. Do not encode unknown as zero or accept arbitrary extra export fields.

[3DS is an explicit site platform label](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/src/lib/platforms.ts). Objdiff's [ARM backend](https://github.com/encounter/objdiff/blob/9aeec9cbab1a056ade7dc1f1625aacc41b0f8511/objdiff-core/src/arch/arm.rs) consumes ELF32 ARM/Thumb objects and ARM attributes, including the relevant v6 variants. Raw CIA/NCCH/.3ds containers are not report inputs. Original address/mode/pool normalization remains a private build responsibility. Neither the site label nor object comparison proves a 3DS emulator, playable port or historical compiler identity.

## Hosted registration and data flow

The pinned [registration action](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/src/app/manage/actions.ts) requires a signed-in user with repository admin permissions and rejects private repositories. It stores the public GitHub project and default branch, then queues CI/history backfill. Direct upload does not bypass that public-repository registration rule. The owner's authenticated GH CLI account does not itself create a ByteMatch web session.

The normal route is a successful default-branch build plus an artifact named VERSION_report. The [artifact reader](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/src/github/artifacts.ts) downloads ZIPs through a server installation token or operator fallback token. It downloads the whole artifact, so upload the exact report.json file, not its directory. The pinned [ingest filter](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/src/ingest/github.ts) excludes unsuccessful/non-default-branch and PR runs; docs recommend default-branch pushes. No ByteMatch secret is needed in that workflow.

The [optional GitHub App](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/docs/github-app.md) adds webhook delivery and permissions including Actions read and PR write. Automatic PR comments default to enabled in the [database schema](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/src/db/schema.ts). Disable them before report ingestion; this project has no authorization to message other people. App installation is not needed merely to prepare source/report files.

The [API alternative](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/docs/api.md) accepts raw JSON/protobuf, gzip or ZIP with a per-project bearer token plus version and commit metadata. Tokens are created through Manage, shown once and stored hashed. This supports a local/private build publishing only its derived report to the registered public project. It is optional; do not place a token in source or logs. Use the actual public commit that contains the referenced source, rather than a now-inaccessible pre-publication receipt revision.

The [source fetcher](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/src/lib/source-fetch.ts) obtains source at the report commit using raw GitHub URLs and API fallbacks, and caches source content. Full source files can be retrieved, not merely one excerpt. Reports/history and normalized compressed report blobs are persisted. Only publishing an audited real development tree, and only uploading the strict report file, satisfies the original-file restriction. Schema design alone cannot prevent bytes hidden in arbitrary strings or extra ZIP members.

## CI fit with pokebw2

The [pinned pokebw2 workflow](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/.github/workflows/build.yml) builds the actual reconstruction, checks rebuilt modules/ROM hashes, obtains originals from a separate private repository via a read-only deploy key, compiles fork PRs without those secrets, and uploads only each version's report.json. Its [configure generator](https://github.com/fuddlesworth/pokebw2/blob/0b7e534233e443f4ef1a59a45d3fd4cc94b79a6f/configure.py) owns objdiff/report generation. Borrow those separations, not its compiler assumptions or completion postprocessor.

Here the architecture worker owns the real secret-free compile.yml/bootstrap for active ARM32/Windows64/Android64 C sources. Those compile checks should run for public/fork work and remain honest component-build checks. This lane does not duplicate them.

Original-based verification needs a reviewed input manifest/materializer and a portable tool bootstrap or qualified owner-controlled runner. Current run_checks.py includes archive intake/extraction and the measured owner tool profile; its 1,797-file CPython environment is not automatically a fresh Actions environment. Under the present no-original-upload policy, prefer original inputs staying outside the checkout on an owner-controlled verifier. Adopting pokebw2's private-original-repository storage would itself upload originals and is not part of this preparation.

A trusted verification job must bind its public commit and source hashes, capture raw logs privately, and emit only an audited report. No originals, hybrid/gap objects, raw failure logs, saves or assets may enter artifacts or caches. Do not run fork or pull_request_target code on that input-bearing runner. Root owns the actual workflow and any normal account/credential setup. The staged workflow-plan.json explicitly lists missing prerequisites and is not advertised as a working job.

## Local preparation and checks

The integration overlay is in work/bytematch-research/ci-overlay. It is for the actual repository, not a new source-less project. Its progress JSON carries null unknown denominators and the accepted 356/4,164 snapshot. The standard-library verifier checks receipt hashes, chain membership, exact C/header source hashes, unique intervals and schema fields without reading game input. Ten tests pass, including changed source/receipt, injected payload, duplicate/subset, path traversal, invented denominator/completion and upload-readiness rejection.

The unchanged ByteMatch parser was executed locally using Node 24.22.1's TypeScript transformation and the exact official protobufjs 8.8.1 standalone bundle. Registry SHA512 integrity was verified. JSON/protobuf round-trip, future-version rejection, percentage/null behavior and all 356 C source links passed. This is a parser/lexer probe, not a running ByteMatch server, hosted ingestion or universal source parser proof. Earlier Windows --import URL and bundle-path launch errors are preserved as diagnostic attempts.

Reproduction from the development checkout:

    tools/python/Scripts/python.exe work/bytematch-research/prepare_progress.py
    tools/python/Scripts/python.exe work/bytematch-research/test_progress.py -v
    tools/python/Scripts/python.exe work/bytematch-research/measure_denominator.py

The initial synthetic CLI commands are captured in work/bytematch-research/objdiff-format-probe/receipts.json. Parser launch uses the recorded Node runtime with --import ./parser-loader.mjs ./parser-probe.mjs from work/bytematch-research. The upload-readiness flag intentionally rejects this snapshot. No server, account, upload, remote, publication or shared pipeline was changed by this lane.

## Recommended completion order

1. Publish the actual audited source/tool/docs/history repository and enable the real public compile checks. Preserve exact source bytes: the current .gitattributes -text policy protects mixed LF/CRLF source receipt hashes.
2. Register that public repository through the normal ByteMatch owner-admin flow, and disable automatic PR comments. Confirm whether registration is enabled on the deployed service. Do not upload the accepted-only fixture.
3. Complete the private verifier/bootstrap and review a native report scope/generator. Keep unknown function totals unknown outside ByteMatch until a truthful stock report or explicitly reviewed code-only contract exists. A prospective update-content0-text-d4e29300 version must mean exactly that module/scope, not the whole game.
4. Run real original/source verification, generate the report, validate its allowed fields/counters and upload exactly report.json as VERSION_report from a successful default-branch build; alternatively use the normal Manage-created token from a local verified build.
5. After ingestion, compare server counters and run the pinned scripts/check-source-links.py for the actual owner/repo/version. Add the live scoped badge only then.

## Hosting, cost and remaining uncertainty

Self-hosting is possible: the [deployment guide](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/docs/self-hosting.md) uses Node24+, pinned Yarn, PostgreSQL15+ and separate web/worker processes; its container setup uses PostgreSQL17. It needs database credentials, encryption/OAuth/App/webhook secrets where enabled, TLS/proxy configuration, migrations, backups, worker monitoring, GitHub API capacity and report retention management. Redis is not a required service. Local self-hosting is not automatically air-gapped because normal registration/source fetching remains GitHub-oriented. It is unnecessary operating burden for this project unless hosted requirements become unsuitable.

The [package license](https://github.com/Veradictus/ByteMatch/blob/37153b5d1b30531d4410d5a595592080962ce883/package.json) declares GPL-3.0-only; the imported objdiff protocol has its own MIT notice. Checked primary docs/source do not establish a hosted price, SLA or complete service terms, so no zero-cost hosting promise is made. GitHub currently makes standard hosted-runner compute free for public repositories, but larger runners and storage allowances require separate attention. [GitHub Actions billing](https://docs.github.com/en/billing/concepts/product-billing/github-actions)

Remaining gates are exact deployed behavior/registration availability, the actual public owner/repo/default branch and first report commit, the private verifier bootstrap, a truthful native denominator/function contract, hosted ingestion and hosted source-link confirmation. None prevent publishing the actual reconstruction work. This research grants zero new recovered-source credit.
