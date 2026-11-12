# Clone families: one body, many addresses (wave085)

**Result this records.** Nineteen functions, **1,336 bytes**, newly credited
byte exact from **two reconstructed bodies**. Each family is the same machine
code at several addresses because the original build instantiated one C++
template per element type, and the instantiation's body does not depend on the
element type. One body reconstructed, four to fifteen credits.

| family | members | size | bytes | source |
|---|---:|---:|---:|---|
| owned-range destroy | 4 | 184 | 736 | `src/native/wave085-clones/owned_ranges_destroy.c` |
| owned-object release | 15 | 40 | 600 | `src/native/wave085-clones/owned_object_release.c` |

The bodies were reconstructed from the disassembly of one member each and
measured with the project's own scorer (`toolscripts/permute.py`), which agrees
with the objdiff report on every configured function. The siblings were then
measured one by one, not assumed: all 4 and all 15 are byte exact. A
`permute --scan` of the whole tree before and after the change reports
2,852 → 2,871 credited functions with **nothing lost**.

## How an instantiation is written

A cloned body is not compiled once and linked at several addresses. It is
compiled once per address, because each address holds a real function symbol
that must be byte identical to the original at that address. The shipped
families spell that as a macro whose parameter is the function's own name:

```c
#define OWNED_OBJECT_RELEASE(name)                    \
    void *name(void *handle) { ... }

OWNED_OBJECT_RELEASE(fn_0079ecac)
OWNED_OBJECT_RELEASE(fn_0079ed1c)
...
```

A macro rather than one body plus wrappers, because a wrapper can be measured
to inline to the same bytes only while the body never calls itself, and the
clone families in this image include recursive bodies. The macro is also the
honest spelling: the original mechanism *was* one body instantiated per type.

Where an instantiation calls *another* cloned body, that callee differs per
address too. The container's range-erase at 0x007654a4 calls the erase body at
0x00764e48 and the release body at 0x007655e4; the next instantiation at
0x00766050 calls 0x007659f4 and 0x00766190. The relative layout is identical in
each cluster, which is exactly why the bytes are identical, and a macro that
takes both callee names as parameters is the spelling that can express it.

## The bodies

**Owned-range destroy** (`fn_003bfd60` and three siblings, 184 bytes). Two
half-open ranges of object pointers are walked by the same loop, which calls
virtual slot 6 (the destructor), re-reads the slot, calls slot 1 (the
deallocator) when a pointer remains, and clears the slot. The range at 0xb4/0xb8
is walked before the one at 0xa8/0xac, which is the original's order, and the
zero constant is hoisted once for the whole function.

**Owned-object release** (`fn_0079ecac` and fourteen siblings, 40 bytes). Load
the owned pointer from the handle; if it is non-null, call the object's second
virtual slot with the object and return the handle unchanged.

## Measured negatives

These families were attempted and **not** credited; they are recorded with
their numbers so the next lane starts from the measurement.

* **Red-black-tree erase, 12 × 1,628 bytes (19,536 bytes), the largest group.**
  A pass of the body in `work/clone/draft-pooled_tree_erase.c` compiled to
  1,564 bytes with 5 of 407 instructions identical in place. The algorithm is
  the one the existing typed-tree packet (`docs/native-tree-erase033.md`) proves
  behaviourally, so the gap is code shape, not comprehension: the original keeps
  the erased node's successor in r12, materialises the constants 0 and 1 into
  r6/r7 for the whole body, and rematerialises the erased node with a reload
  after the successor walk. Reproducing 407 instructions of armcc register
  allocation from a 400-line C body needs a shape search bigger than the
  permutation operators cover.
* **Range erase, 6 × 320 bytes (1,920 bytes).** 95 instructions against 80.
  The entry and the whole-tree fast path match instruction for instruction (41
  of 41); the whole difference is the erase loop, where armcc rotates and peels
  the loop the original does not.
* **Checked-iterator step, 9 × 176 bytes (1,584 bytes).** 148 bytes against
  176: armcc coalesces the four adjacent state stores into one `stm` and
  if-converts the dispatch where the original keeps them separate.
* **Already credited.** The 60-byte subtree release at 22 addresses (1,320
  bytes) is a real family, and the corpus draft in `src/native/draft001/`
  already reproduces it byte for byte. A named reconstruction of it exists in
  `work/clone/kept-pooled_tree_clear.c` and measures exact at all 22 addresses,
  but shipping it would replace credited source without moving a number, so it
  was not shipped.

## The measurement that changes the plan

The family scan has to hash a function **together with the literal pool that
follows it**, because the split's symbol extent covers instructions only. A
function that loads constants PC-relatively carries those words immediately
after its extent, where the split attributes them to the next symbol. Grouping
on the extent alone reports families that are not byte identical: an initializer
that writes a different global in each copy groups with the instructions equal
and the pool words different.

That single correction removes the three largest apparent families in the image:

| apparent family | members | bytes | why it is not a family |
|---|---:|---:|---|
| 80 bytes | 522 | 41,760 | pool words differ per member |
| 292 bytes | 74 | 21,608 | pool words differ per member |
| 68 bytes | 311 | 21,148 | pool words differ per member |

With the pool included, the whole census reports 94 groups of two or more
functions, 274 functions, 82,208 bytes — against 200,192 bytes without it. The
difference is not a scan tweak; it is the difference between work that can pay
and work that cannot. Only pool-free bodies can be credited from one
reconstruction.

After this change the remaining population is 123 groups, 341 functions,
80,432 bytes, led by the seven families at 512 bytes or more (56,208 bytes) and
the 320-byte range erase (1,920) and 176-byte iterator step (1,584).

## Reproduce

```
python -I toolscripts/clone_families.py --minimum 32 --json work/clone/groups.json
python -I toolscripts/permute.py --scan --json work/clone/scan.jsonl
python -I toolscripts/clone_families.py --minimum 32 --scan work/clone/scan.jsonl
python -I toolscripts/permute.py --source src/native/wave085-clones/owned_object_release.c --function fn_0079ecac
```

`clone_families.py` reports every group and what one body is worth; `--scan`
drops the functions the configured source already credits, so that run is the
remaining work. Measuring one *family* needs one compile and a call per member;
`permute.py --source … --function …` does that for a single member, and
`permute.scan_unit` scores a whole unit in one compile.
