# Resource header observation successor

The immutable resource CPU v1 graph observer retains each complete resource
header in `resourceRawHex`, but its logical comparison does not inspect the two
unknown header bytes or extra native header ABI padding. Its primitive observer
does check primitive padding. This distinction narrows the wording in the v1
guide; the source kernels, v1 source, artifacts and observations are unchanged.

The separate `effect065_resource_header_review.py` verifier binds the measured
60-byte target and 112-byte native resource layouts, then checks all remaining
unwritten header bytes against each fixture's independently known fresh pattern.
The target offsets are 50..51. Native offsets are 20..23, 76..79 and 94..95. Existing
typed fields remain the responsibility of the frozen logical observer.

All 156 retained construction/finalization header observations pass. A new
ordinary-C wrong-source control writes `unknown_32[0]`. It returns normally on
ARM, actual Windows and high AArch64, retains equality under the old logical
projection, and is rejected by the separate header verifier. Five regressions
check every unobserved byte, ABI drift and separation from typed pointer fields.

No runtime source defect was found or repaired. No frozen v1 file, report or
artifact was rewritten. This adds bounded header evidence; it does not establish
whole-memory equivalence, further constructor paths, factory/replacement,
GPU execution or a working native game.

```powershell
tools/python/Scripts/python.exe toolscripts/effect065_resource_header_review.py work/native-effect065/resource/sealing-v1 work/native-effect065/resource/header-review-fresh
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_effect065_resource_header_review.py
```
