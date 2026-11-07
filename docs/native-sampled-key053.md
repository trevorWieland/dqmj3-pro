# Sampled-key segment preparation 053

This lane measures nine complete ARM function bodies in the update main image:
eight table-selected key-record routines and their shared floating-point floor
helper. Their canonical instruction ranges total 11,000 bytes. The initialized
text denominator does not change. The original eight-entry pointer table is at
`0x89a8b4..0x89a8d4`; its selector and actual game reachability remain unqualified.
An animation-library identity has not been established.

The routines prepare a reusable segment description. They retain a key pointer,
choose adjacent records, handle hold/repeat/mirror boundaries, and write segment
bounds, a value, a tangent and two polynomial coefficients. They do not directly
evaluate the resulting polynomial. Eight record representations share one
readable source implementation, including explicit little-endian decoding of
packed times, values and signed slopes. Original table bytes are not compiled
into the source implementation.

## Storage and calling convention

Measured entry state supplies the input pointer in `r0`, result pointer in `r1`
and position in `s0`. The ARM source declares the corresponding VFP calling
convention. The source API returns `void` and exposes the measured memory result;
an original register-return contract has not been established from a caller.

The target input is 36 bytes; native 64-bit storage is 40 bytes. The final field
is an actual key pointer at offset 32. The target result is 32 bytes; native
storage is 40 bytes. It contains an actual cached key pointer, a signed period
and six floats. Native pointer widening moves the period and floats; it does not
encode native addresses in target-sized integers. Unknown input bytes remain
explicit and are preserved.

The original cached pointer may initially be null or identify a valid record in
the same immutable key array. Search direction and repeat parity affect which
adjacent record is cached. Both scalar fields and independently based pointer
identities must agree. Original input/key data and caller guards remain unchanged.

## Floating-point contract

Compilation uses ordinary IEEE single-precision operations with contraction
disabled. The source preserves measured operation ordering, including different
addition order in packed-time and float-time representations. Reverse traversal
negates the same two physical tangent fields selected in forward traversal;
it does not exchange them. An initial source draft that exchanged them produced
a genuine returning differential failure, retained privately before correction.

Unsigned float conversion explicitly saturates before a C integer cast. This
avoids undefined negative-to-unsigned conversion while preserving the original
VFP conversion used before negative-position boundary handling. Period and
pointer calculations retain a bounded initialized-data contract.

The floor helper preserves signed zero and returns unchanged large values,
infinities and NaN payloads. Its value result is qualified separately from
floating-point status. Original accumulated exception flags, signaling-NaN
exceptions, alternate rounding modes, flush-to-zero modes and universal
floating-point-environment equivalence are outside this packet's claim.

## Boundaries

The measured claim records every complete discontiguous instruction range,
scalar literal word, direct branch/call and the original table identity. Original
execution admits only the selected body and shared helper, checks ARM mode and
four-byte instruction width, and rejects reads/writes outside declared pools,
immutable caller inputs, output and stack. Authored ARM and AArch64 execution
maps only newly compiled source sections and uses ELF mapping symbols to exclude
literal data from executable addresses. Native Windows executes the real DLL
with pointers above 32 bits and independent guard/padding observations.

Valid segment fixtures provide initialized, strictly increasing records beginning
at zero and ending at the declared positive duration, coherent scale/inverse
duration metadata, valid cached-pointer ownership and bounded repeat counts.
Reverse packed-time searches additionally require the converted query tick to
be strictly above the first encoded tick. A positive mirrored residual smaller
than one time quantum can violate that precondition: retained original-only
triage shows the original searching below the key allocation. Inconsistent
rounded range/inverse-duration metadata can produce a similar original failure.
Those inputs earn no equivalence claim; the observers reject the read.
Zero-count arrays, malformed/unordered records, arbitrary pointer aliases,
unbounded conversion/period overflow and a complete caller lifetime contract
remain outside scope. AArch64 execution and Android PIC compilation do not imply
Android OS/device or a complete native game build.

Only synthetic key streams and metadata/hashes may be public. The original
executable, private disassembly and derived original payloads stay under private
input/work paths. This lane grants no matching, source or SDK credit; coordinator
review and an independent replay are required.
