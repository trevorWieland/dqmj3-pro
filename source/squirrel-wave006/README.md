# Squirrel Execute reconstruction, wave006

This lane reconstructs the measured VM dispatcher at `0x0018d65c` as typed C.
It is an active partial checkpoint. It grants zero source, matching, or whole-root
credit. A count of exercised dispatch entries is not a byte, function, or game
coverage percentage. The complete root, all generator paths, and the game remain
unfinished.

The canonical root consists of eight instruction ranges containing 13,184 bytes
and 628 classified data bytes. The frozen wave005 milestone binds their complete
span to SHA256 `43947b25ecbc4575beb3bb68229fa4dab0e6d726466c34c1b6cde5184f02cc62`.
The original module is checked against the canonical seeded census. The original
61-entry pointer dispatch and seven-entry bitwise dispatch are diagnostic evidence;
the C implementation dispatches through enums and ordinary source control flow.
No original executable table or executable bytes are embedded in this source.

The current path supports scalar and literal loads, moves, captured values, root
loads, truth/branch operations, equality, numeric comparisons, numeric arithmetic,
bitwise operations, native calls, ordinary script calls and tail calls, returns,
variable argument capture/pop, trap push/pop, caught throws, and non-generator
exception unwinding. A loop computes an array length, calls the original measured
native array registration through recovered CallNative, and returns a real array.
StartCall, Return and PopVarargs are source dependencies rather than original-helper
fallbacks. Frozen wave004 CallNative and wave003/wave002 array code remain unchanged.

Direct array bytecode now constructs an empty array and reserves capacity separately
from its size, appends stack or literal values, grows storage, and retains copied
references across reallocation. Cases include nested arrays and a self-reference.
Variable-argument indexing includes its empty/type/bounds errors and measured float
conversion edge cases. Allocator-boundary observations compare live reference
counts and frame state. A compiled wrong append that retains too late genuinely
returns with the same final heap but fails that observation; checking only the
eventual array value would miss the lifetime regression. Failed array allocation
reaches the measured terminal assertion and cannot enter normal-return counts.

Closure bytecode now constructs script closures from child prototypes, captures
local values, enclosing captured values and named values from a table environment,
preserves retained prototype ownership,
and captures default argument values. Constructed closures execute through recovered
StartCall and Return and can return captured values into a source array. Normal
final-owner release now unlinks closures, destroys default and captured vectors in
the measured order, releases retained values and prototypes, and frees storage.
Its original destructor entry is a separately documented vtable seed rather than
a promoted frozen-census boundary. Missing named-outer errors, closure allocation failure,
prototype finalization, and broader GC/weak-environment lifetimes remain pending.
The admitted prototype retains an external owner; no prototype finalizer is claimed.
Diagnostic deallocation preserves freed bytes for comparison, while the native
host uses real `free`. Final closure release is exercised before Execute returns.

Array indexed loads and constant-key loads now preserve numeric index conversion
and transparent weak references. Prepared-call opcodes retrieve a real native
closure from a source array, preserve the receiver, and invoke the recovered array
builtin through source CallNative. Lookup failure formatting, default delegates,
and class/instance lookup remain unsupported; array/table success paths do
not imply complete polymorphic Get or complete prepared-call handling.

The names correspond to original table slots and actually visited original handler
addresses in the report. Several named entries still have unsupported subpaths.
String/metamethod arithmetic, floating remainder, general object/string comparison,
class/metamethod/generator calls, generator cleanup and resume/yield, entry modes 1
and 3, and remaining object/container opcodes prevent whole-root completeness.
Unsupported source paths stop with a separate diagnostic and receive no normal
return or original-equivalence claim.

## ABI and source boundaries

Instructions have eight bytes: signed argument1 at offset0, opcode at4, then byte
arguments0/2/3 at5/6/7. The measured VM prefix ends at168 bytes on ARM32. Additional
portable variable-argument storage is a host adapter, not an assertion about the
size of the original VM. Function-prototype instruction storage is a flexible
array at offset96. Trap records are16 bytes on ARM32. Tagged values and frame
strides are measured ARM32 views; native host views use real64-bit pointers and
16-byte tagged objects.

The original Execute entry requires enabled VFP and the admitted zero FPSCR
control context. Its incoming stack-base word is stored through `s16`, preserving
raw bits. This differs from frozen generic Call's use of `s16` for `raiseerror`.
The oracle checks SP, R4–R11, D8–D15, stack guards and the FPSCR control mask.
Floating exception-status equality is not claimed. Both original and source flags
are recorded per case, including any differences. The recovered path and declared
services do not read exception-status bits; additional callers observing them need
separate qualification. Arithmetic
source uses defined unsigned wrapping; integer division includes the measured
`INT_MIN / -1` result. Shift counts preserve the measured VM behavior for counts
outside0–31 without relying on undefined C shifts. Same-type float equality uses
raw value identity, including signed zero and NaN payloads; it is not replaced by
ordinary C floating equality.

The [AAPCS32 VFP rules](https://github.com/ARM-software/abi-aa/blob/main/aapcs32/aapcs32.rst#6121vfp-register-usage-conventions)
distinguish cumulative status flags from control fields. The report checks named
exception-control, rounding, flush, length, stride and default-format masks
separately. The canonical census names two direct callers, `0x0017ffac` and
`0x00743584`; neither defined body accesses FPSCR. A bounded instruction scan of
the admitted original dependency ranges distinguishes comparison-condition reads
from full status reads. Compiled observational services and modeled allocator/error
services do not inspect exception-status flags. Unknown indirect or transitive
callers are not covered by this audit. Neither this ABI check nor semantic heap
agreement implies universal machine-state equality.

The original global constructor prefix `[0x006ff69c,0x006ff728)` initializes five
scalar globals used by Execute. Running this prefix is an explicit initialization
precondition; it is neither a complete recovered initializer nor an actual-return
case. Globals are checked unchanged after original and source execution.

Memory fixtures own valid objects, call frames, stacks, traps and vectors. Sizes,
capacities, register/literal/branch indices and arithmetic extents are bounded by
the fixture. Reallocation succeeds, size arithmetic does not overflow, storage is
valid for the declared capacity, fill values do not alias relocated storage, and
release observers do not reenter the VM. These are the explicit domain of the
reused frozen vector routines. Allocator failure is not silently admitted through
null pointer arithmetic. Factory allocation failure is a separate earlier lane.

Allocator, formatted-error/string construction, native observational debug/error
handlers and release observers are explicit fixture services. Error services record
the measured format and type-name arguments; they do not reconstruct the game's
string allocator or user error-handler execution. The array/native callee path is
actual source. User callbacks that inspect the four indeterminate native-frame
words are outside this fixture service contract.

Original CallNative copies four inactive fields from dead stack storage. The oracle
captures those16 input bytes before callee entry and binds them only to the raw
original-memory model. Portable C initializes them to zero. The source full-heap
model and original/source semantic comparison are independent of that witness.
Only instruction/literal/target/root words in those native frames are excluded
from semantic comparison. The report discloses raw whole-heap differences and
rejects every difference outside that scope. Whole raw-memory equality is not
claimed. Handlers are checked for reads of the excluded fields.

The type-name helper is separately executed against the original for17 type IDs
and three unknown IDs across three high-byte flag patterns. Its shared-tail scope
does not create a new function-count claim. The canonical prototype tag is
`0x08002000`. Frozen wave005 used `0x08000400` in a fixture prototype type field
which its tested path never inspected; only its value pointer was used. This lane
corrects its own fixtures and leaves frozen005 unchanged. That is a fixture-field
qualification, not broader validation of the old prototype metadata.

Table bytecode constructs measured44-byte tables and20-byte nodes, inserts and
replaces slots, resolves collisions, relocates displaced nodes and grows/reinserts
storage. Set bytecode updates existing array/table values and copies its result in
the measured order, including retained reference replacement and floating index
conversion. Integer, Boolean, floating and existing reference keys/values are checked
against actual original execution. Named closure captures use this source lookup
and execute in a child script. Windows x64 runs the same typed table path with real
host allocation. Normal final-owner table release unlinks the chain, destroys keys
before values, frees node storage, resets weak-base state and frees the table.
Nested closures used as a table key and value execute real source destruction.
Reversing that order returns with an identical final heap but different service
ordering, which the check rejects. The shared44-byte base-destructor fragment
at `0x00233bd8` is already owned by frozen census entry `0x001cdcc4`; its reuse does
not create a new function or whole-owner claim. Marked/weak finalization,
null keys, delegated new-slot/metamethod cases, allocation failure and complete string/pointer key
lifetimes remain unqualified. A compiled broken collision link must actually
return and fail the independent full-heap model.

Local compound assignment, prefix increment and postfix increment preserve signed
eight-bit increments, wrapping integer arithmetic, floating values and the measured
result/publication ordering. Existence tests perform raw array/table lookup without
converting a missing key into a script error. These paths execute in original/source
ARM comparisons and a native Windows program. A genuine unsigned-increment source
mutation must return and diverge. Numeric subpaths share the earlier arithmetic
service boundary; string and metamethod arithmetic remain unfinished.

Delegate bytecode sets and clears table delegates with retained ownership, rejects
self/cyclic chains and reports measured invalid-self/invalid-delegate errors.
Existing delegated Get/Set and raw Exists calls recurse through real source while
retaining each temporary receiver. Finalization releases delegate chains before
unlinking the current table. These paths include script-error returns and native
Windows execution. An entry-mode error preserves the incoming callable in the VM
temporary and its retained reference; normal successful Return replaces that
temporary with the result. The host fixture checks these different measured
states separately. Default delegates, missing non-raw lookup formatting and table
metamethod behavior remain unfinished.

Array/table Foreach executes source iteration, skips the following compiler slot,
advances retained key/value/iterator outputs and branches to its measured exit.
Cases include empty containers, collisions, closure keys, weak array values and a
loop computing a sum. Windows runs that same source loop. A compiled wrong advance
skips an element, genuinely returns and fails the independent model. The admitted
iterator starts as null or a valid nonnegative integer. Negative table positions,
other iterator types and string/class/generator iterators remain unqualified.
Reaching PostForeach on a non-generator invokes an original assertion; no no-op
implementation or ordinary-return credit is supplied for that path. Created
arrays in the earlier checkpoint remain live at Return; the successor integration
below qualifies their final-owner lifetime dependency separately.

Table Delete retains its removed value, clears key before value, decrements the
live-node count and rehashes/shrinks through source. Repeated removals exercise
collisions and storage shrinkage; a removed closure survives as the returned
value. Invalid scalar receivers take the measured script-error return. A compiled
missing-count decrement genuinely returns and fails. Missing-key stringification,
delegate delete metamethods and instance/userdata Delete remain unqualified.

Generator entry now allocates the measured120-byte object, retains its closure,
snapshots the call frame, moves stack values into source storage, copies reversed
variable arguments and returns a suspended generator through the actual Execute
entry path. No script instruction executes during this initial freeze. Original
and source compare the entire final owned heap without new exclusions, including
the saved frame, retained callable temporary and reference counts. Constructor
frame fields that the original leaves indeterminate are initialized in portable C;
the initial Yield overwrites all saved-frame fields before any admitted observer
uses them. Raw constructor-frame observers before that overwrite are outside the
declared service contract. Generator traps/state errors remain unfinished; the
later lifetime integration below qualifies final-owner destruction. A wrong source snapshot that omits its
first slot must genuinely return and fail. Windows runs this same source creation
and freeze path; it keeps the returned generator live.

Generator calls now create and freeze child frames from source, resume their saved
instruction stream, execute script operations and yield actual values back to
their caller. Cases cover repeated resumes, defaults, variable arguments, null and
reference yields, debug hooks and nested allocation; Windows executes the same
source path. The original Resume clears saved slot zero on every copied-stack
iteration. This measured retention behavior is preserved. Changing it to clear
each current slot returns with identical final heap bytes but different live
reference counts at nested allocation, which the observer rejects. Generator
completion/kill, traps, state errors and entry modes1/3 remain
unqualified; returned arrays keep these suspended generators live.

The successor consumes frozen SQArray007 after coordinator review, pinning its
ready packet and source. Real array identities now call the compiled destructor,
vector cleanup, unlink and disposal path. VM programs return scalars after creating
arrays and destroy nested arrays in original/source and native Windows execution.
Generic fake input references retain a separate observer vtable and are never cast
to arrays. The earlier oracle's release-slot substitution on the real array
identity is removed; original execution now uses its actual finalizer and source
execution uses the compiled frozen vtable. No original executable code, object or
relocation is copied into the source path. Frozen007 remains unchanged and receives
no duplicate interval credit from this integration. Disposal is the explicit
fixture/host ownership service, not recovered allocator logic.

The next successor consumes frozen SQGenerator008 after coordinator review and
uses `SqGenerator008` as the single shared generator type, retaining target layout
assertions. Original execution keeps its actual destructor and release bodies;
source execution links the unchanged frozen production source and typed vtable.
Programs dispose of suspended and resumed generators, including reverse-vararg
and saved-stack storage, then return a scalar. Both the complete owned heap and
ordered disposal observations must agree. Windows executes this path with real
host allocation. A compiled skipped destructor must actually return and fail.
This integration adds no duplicate lifetime interval credit, weak/marked observer
domain, generator Kill or complete Execute claim. Fake generic references retain
their separate observer identity. Frozen008 is unchanged.

## Replay and interpretation

Run `toolscripts/squirrel_source_wave006.py --publish` using the repository Python,
Clang and LLD. Outputs must stay under ignored `work/squirrel-source-wave006/`.
The copied replay also pins and copies both bundled Clang runtime DLLs; copying
only the executable pair does not produce a runnable Windows compiler.
`python -m unittest tests.test_squirrel_source_wave006` exercises representative
original/source cases, module tampering, input escapes, genuine compiled negative
controls and source faults. Failed exploratory logs remain private in the work
directory. Public reports contain source, tool and module hashes, counts, metadata
and diagnostic traces rather than original executable bytes or disassembly.

The Windows x64 executable runs typed source directly. Android arm64 objects are
compiled translation units; no Android device, AYN Thor execution, or whole-game
build is claimed. The bytecode programs are authored test inputs, not newly
reconstructed shipped-script source. A copied local replay is separate from an
independent committed-source replay and from admission to the production ledger.
