# Metadata boundary successor

This disjoint v2 preserves the frozen v1 transport and all81 original owner pins. Game C, headers and qualified helpers are copied without text changes. The successor closes v1's missing metadata observation: Python stat/lstat did not reliably emit the open/dlopen audit events v1 watched.

The gate wraps os.stat, os.lstat, os.listdir, os.scandir and Path.resolve, and replaces the corresponding native functions used by CPython's bootstrap importer. Directory audit events are checked too. It authorizes the lexical requested path before canonical resolution, then checks the resolved target as well. Only resolver-internal ancestor traversal for an already authorized requested path is exempt from recursive interception. This is a scoped Python verification boundary, not an OS sandbox against arbitrary native code.

Historical work metadata requires an exact pinned file path. A pinned file does not authorize listing its parent directory. No retained replay directory or intake-root directory exemption exists. Current exclusive output paths are owned by the run. Unresolved descriptor/dir_fd metadata accesses fail closed. Attempted accesses remain recorded after a caller catches ValueError, including failed/missing-path probes. Successful transport requires no caught or uncaught boundary attempts.

Unchanged helpers discover their project root by probing AGENTS.md. The adapter supplies an exact copied owned marker inside the current output, pins the real marker input and generated copy, then explicitly restores each selected module's actual repository ROOT through bindings. It preloads the declared public runtime/kernel graph before invoking the unchanged loader install, preventing optional import searches from scanning its historical SDK path. Neither fix reads old private sources or changes helper bytes.

The first two metadata preflights are preserved: an unnecessary filesystem resolution of the known intake base was rejected, and an optional third-party readline import attempted to list the historical SDK directory. The third positive preflight passed before the additional lexical-first/pinned-marker tightening. No rejected attempt is reset or relabeled successful.

Real subprocess regressions exercise stat, lstat, listdir, scandir, Path.stat, missing Path.exists, CPython's native stat alias, and the distinction between allowed exact-file metadata and forbidden parent enumeration. Source-only original construction/read, original-write rejection, noncanonical originals, stale pyc, path/hash/fixture-role tamper and source-only test selection remain covered.

Reproduction uses the unchanged entry interface with new exclusive outputs. The full, source-only and tiny-own-input copy scopes are repeated; primary206 and composed246 instruction-address counts stay separate. No source credit or whole-owner claim is created by this transport correction.
