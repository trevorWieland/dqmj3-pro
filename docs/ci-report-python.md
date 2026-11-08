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
