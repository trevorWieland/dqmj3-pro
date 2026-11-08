# Project-local CI report Python

Trusted reporting still uses Python 3.13.5 and the unchanged frozen report wheels.
Repeated GitHub release download HTTP504 failures occurred before project code
ran. The workflow now uses cached bootstrap Python 3.12 only to verify/extract the
CPython project's fixed NuGet 3.13.5 package. Reporting and its dependency
environment run with the extracted 3.13.5 interpreter.

`config/report-python-runtime.json` pins the package URL, byte count, SHA256,
SHA512, member count, executable and interpreter DLL identities. The bootstrap
checks every selected runtime file against the verified archive, rejects unsafe
paths/case collisions/symlinks, and verifies version and 64-bit architecture. It
installs only under the repository's `tools/`, preserving its license files;
no system Python, registry or global PATH is changed.

The independent component proof interpreters retain their separately measured
profiles. This distribution is a reporting-runtime profile, with no source or
game-progress credit. Local qualification created a fresh venv, installed the
four pinned report wheels offline and generated the 507-function companion.
The original output-boundary test failure is preserved in private work records.

Reproduce with `python -I -S toolscripts/bootstrap_report_python.py`; add
`--verify` for read-only verification of an existing local runtime/cache.

The [CPython Windows documentation](https://docs.python.org/3.13/using/windows.html#the-nuget-org-packages)
describes these packages for build/CI use. The fixed package is the CPython-owned
[Python 3.13.5 NuGet release](https://www.nuget.org/packages/python/3.13.5).

The first CI run with this runtime passed its installation and integrity checks, then encountered HTTP 504 responses from the separate objdiff release-download endpoint. The report bootstrap now requests the same upstream asset through GitHub's official binary asset API. `config/report-objdiff-asset.json` must agree with the canonical URL, size and SHA-256 in the existing tool lock. It selects asset 657354510 with an unauthenticated octet-stream request. All 7,164,416 bytes match the existing SHA-256 `dd12dfb5e9e94a7f6c949a37e1815963cf2cffe4c87b4999b7ebc8c15b398a1f`; the tool version, executable and lock remain unchanged. An API metadata JSON response fails the checksum check. No token or new secret is required.
