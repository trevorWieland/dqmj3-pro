# Small clone families: two bodies measured, nothing credited

**Result this records.** Two of the ten target families were reconstructed by
hand and **neither is byte-exact**. `fn_007654a4` (6 x 320 bytes) reaches the
exact 320-byte extent with 22 of its 80 words differing, all inside the
successor walk; `fn_00767a60` (2 x 312 bytes) compiles to 304 bytes with 36 of
78 words differing. Both drafts are reproduced at the end of this document,
because the negative is the measurement: at the pinned profile the last two
instructions are chosen by the compiler, not by the source. Nothing here is
credited, so nothing was shipped under `src/`.

## What is left, measured on this commit

Measured with the project's own tools on `main` at `e702b62`:
`clone_families.py --minimum 8 --scan work/clone/scan-after.jsonl`.

| population | families | functions | bytes |
|---|---:|---:|---:|
| all remaining groups | 123 | 341 | 80,432 |
| pool-free only | 86 | 266 | 71,336 |
| the ten target groups | 10 | 31 | 9,184 |

Nine of the ten target groups are pool-free (8,224 bytes); the 480 x 2 group
carries a four-byte pool and is not convertible from one body. This is the
population the two drafts below were taken from.

## The method used

1. Read the complete original disassembly of one member from
   `work/corpus/functions/`.
2. Write a C body with the same operations, the same statement order and the
   same stores, as a macro whose parameter is the function name.
3. Score it with the project's own measurement:
   `work/permute/score_all.py` (a thin wrapper over `permute.py`) compiles the
   unit once and places every member at its original address.
4. Diff structurally with a register-insensitive alignment, and change one
   statement at a time.
5. A family is credited only when every member is byte exact.

A score is about 0.2 s, so the iteration cost is low; the cost is in the shapes
that no spelling reaches.

## Family 1: 6 x 320 bytes, range erase (`fn_007654a4`)

The body is a half-open range erase over a pooled red-black tree. A range that
covers the whole tree takes the fast path that recycles every node without
rebalancing; otherwise the loop advances the caller's iterator to the node's
successor and erases the node.

Starting from the draft the earlier lane left (`work/clone/
draft-pooled_tree_erase_range.c`, 348 bytes, 95 instructions), four shape facts
moved it to the exact original extent and nothing more:

* **`for (;;) { if (first->node == last->node) break; ... }` instead of
  `while (first->node != last->node)`.** armcc 4.1 b1454 rotates every `while`
  form of the outer loop (a duplicated header plus a peeled first iteration,
  five instructions and a different register map). The infinite loop with a
  `break` at the top is compiled as the original's single top-tested header.
  This alone took 348 -> 320 bytes.
* **The walk's store is the whole body.** `while (p->left) { p = p->left;
  first->node = p; }` and every other form that stores through the iterator are
  rotated into a store-at-head loop. The original's loop is
  `ldr r0,[r0,#8]; cmp r0,#0; strne r0,[r4]; bne` - a top-tested loop whose
  single store armcc if-converts. armcc produces that shape only from
  `while (p) { p = p->left; if (p) first->node = p; }` with **no** preceding
  store in the same basic block.
* **A do-while form is rotated as well.** `do { p = p->left; if (!p) break;
  first->node = p; } while (1)` compiles to `str; ldr; cmp; bne` (store at the
  head), one instruction shorter than the original, because armcc merges the
  preceding entry store into the loop.
* **The entry stub is if-converted in the original and branched in every C
  spelling tried.** The original computes `p = node->right ? node->right : node`
  speculatively (`mov r0,r2; movne r0,r1`), predicates the entry store
  (`strne r1,[r4]`) and then branches to the else path. armcc 4.1 b1454 emits
  `cmp; beq else; str` for every if/else, conditional-operator and
  separate-guard spelling tried (about 40 variants), so the entry stub costs
  the original 6 instructions and the compiler's form 3-4.

The draft at the end of this document is the best state reached: **320 bytes
exact, 22 of 80 words differing**. The structural difference is confined to the
successor walk (13 instructions of the loop); the fast path, the erase call and
the epilogue match instruction for instruction up to register choice.

## Family 2: 2 x 312 bytes, range erase (`fn_00767a60`)

The same algorithm with a *natural* walk shape: `do { first->node = p;
p = p->left; } while (p != 0)` is exactly what the compiler produces, so this
family was expected to close. It did not:

| measure | original | draft |
|---|---:|---:|
| instructions | 78 | 76 |
| code bytes | 312 | 304 |
| differing words | - | 36 |

The whole difference is two instructions missing plus register naming:

* the original **hoists a copy of `node` before the branch** (`ldr r0,[r2,#0xc];
  cpy r1,r2; cmp r0,#0`) because the else path's walk variable starts from it;
  armcc sinks that copy into the else path and then uses `node` directly, so
  the copy disappears;
* the original **reloads `first->node` before the final `first->node->right`
  check** (`ldr r1,[r4]; ldr r1,[r1,#0xc]`); armcc forwards the value it stored
  in the walk loop and emits one instruction instead of two.

Both are optimisation decisions no C spelling in the search reversed: the walk
loop was written six ways (while, do-while, for, store-at-head, conditional
store, shared-variable), the initialisation three ways, and the final check in
both operand orders. Every variant lands on 304 or 308 bytes. The draft is
reproduced below as the 304-byte state.

## What this says about the profile

The pinned compiler is `armcc 4.1 b1454 -O3 -Otime`. In these two bodies the
compiler's loop rotation, if-conversion and copy sinking decide three to four
instructions that the source cannot address: the same C statements compile to a
different loop header when the surrounding block changes, and a value that the
original keeps in two registers is coalesced into one. This is the same wall the
draft-repair loop measured on small functions (`docs/2026-11-12-draft-repair-
loop.md`: 0.41 % by function, 4,183 compiles per match), now at 300-byte bodies
that were reconstructed by hand rather than by permutation.

## Census quality: 1,348 of the 80,432 bytes are not functions

A family was classified a fragment when none of the instructions inside its
extent is a return (`bx lr`, `pop {..., pc}`, `ldm {..., pc}`). Twenty-five of
the 123 remaining families (**1,348 bytes**, 1.7 %) contain none:

| example | size x members | bytes | what it is |
|---|---|---:|---|
| `fn_00154ac0` | 8 x 18 | 144 | `mov r0,r1; mov r0,r0` - padding/thunk |
| `fn_001088e0` | 40 x 4 | 160 | 40-byte extent ending at `mov r0,#0`, falling into the next symbol |
| `fn_001458cc` | 52 x 3 | 156 | see below |
| `fn_005ea348` | 12 x 5 | 60 | getter chain ending in `mov r0,r0` |

Those cannot be credited from C and should be removed from the family pool.

One more family looked convertible but is not: `fn_001458cc` (52 x 3) was
grouped with a zero-byte pool window because the next split symbol is only 52
bytes away, but its first instruction loads a PC-relative literal that lives
*inside that following symbol*. The three members load `0x00002001`,
`0x00002001` and `0x00002002`, so the bodies are not byte identical. The
pool-window bound (`min(window, room - size)`) under-hashes every family whose
literal pool is closer than the window; the scan should follow the pooled words
the body actually references rather than a fixed window.

## Cost

| family | bytes if credited | wall time | result |
|---|---:|---:|---|
| 6 x 320 | 1,920 | about 1 h 15 min | extent exact, 22 words differ |
| 2 x 312 | 624 | about 40 min | 2 instructions short, 36 words differ |
| census triage (10 families) | 9,184 | about 20 min | all ten measured |
| **total** | **2,544** | **about 2 h 15 min** | **0 credited** |

**Measured bytes per hour: 0.** The two drafts are not close in the sense that
matters: an exact extent with a 13-instruction region of different code is not
one edit from shipping, and two missing instructions are still two instructions
of register allocation that the source cannot express. Reporting 1,920 + 624 as
"nearly credited" would be false.

## Verdict on the remaining 66-80 KB

The small pool-free families are not cheap credit. Two bodies chosen because
they were the largest per-family total and the smallest complete one both
stopped on compiler-selected instructions, at about an hour each. The
transcription cost is real but bounded; the *last* 2-4 instructions are not
reachable with this compiler profile, so a family of N members is worth 0 until
the last instruction lands, and the expected value per hour is well below the
draft-repair loop's 4,183-compiles-per-match path.

What would change the verdict, in order of leverage:

1. **A compiler profile without loop rotation.** The 320-byte family is one
   profile flag away from being finishable: every difference in its loop is a
   rotation the original does not have. armcc 4.1 exposes no such flag; a
   different measured compiler build would have to be pinned and justified.
2. **Profile the families against that compiler before writing any body.** The
   312-byte family's natural C compiles to 304 bytes under b1454 and would
   probably be exact under the compiler that produced the original.
3. **Fix the census first.** Remove the 1,348 bytes of non-functions and make
   the pool hash follow the words each body references; then the pool is the
   ~70 KB of genuine bodies, and the per-family cost is the number above.

Until then this lane recommends against a third hand reconstruction on the same
profile. The remaining bytes are not a budget problem; they are a compiler
choice the pinned profile does not make.

## Reproduce

```
python -I toolscripts/clone_families.py --minimum 8 --scan work/clone/scan-after.jsonl
```

To measure a draft, write it from the listing below to a file under `src/`, add
it to `config/build-units.json` as a unit with no headers, and score one member:

```
python -I toolscripts/permute.py --source <path>/tree_erase_range.c --function fn_007654a4
python -I toolscripts/permute.py --source <path>/tree_erase_range_312.c --function fn_00767a60
```

`permute.py` prints `code` (the compiled extent), `words` (the differing words)
and `first` (the first differing byte). A family is credited only when `exact`
is true for every member; none of the drafts below is.

The scorer needs `generated/update-content0/code.bin` and `exheader.bin` from a
build of the owner's image. Nothing here reads `inputs/` or writes outside
`work/`.

## Draft 1: 6 x 320 range erase (not credited, 320 bytes exact, 22 words differ)

```c
typedef struct RangeNode RangeNode;
struct RangeNode {
    unsigned char black;        /* 0x00: 1 black, 0 red */
    unsigned char reserved[3];  /* 0x01 */
    RangeNode *parent;          /* 0x04 */
    RangeNode *left;            /* 0x08 */
    RangeNode *right;           /* 0x0c */
};

typedef struct RangeStore RangeStore;
struct RangeStore {
    unsigned int reserved0;     /* 0x00 */
    RangeNode *free;            /* 0x04: recycled nodes, threaded by right */
    unsigned int reserved8;     /* 0x08 */
    unsigned int reservedc;     /* 0x0c */
    RangeNode *head;            /* 0x10: header; parent is the root */
    unsigned int count;         /* 0x14: live nodes */
};

typedef struct RangeIterator RangeIterator;
struct RangeIterator { RangeNode *node; };

void fn_00764e48(RangeIterator *, RangeStore *, const RangeIterator *);
void fn_007659f4(RangeIterator *, RangeStore *, const RangeIterator *);
void fn_007661cc(RangeIterator *, RangeStore *, const RangeIterator *);
void fn_0076f5a0(RangeIterator *, RangeStore *, const RangeIterator *);
void fn_0077b3e4(RangeIterator *, RangeStore *, const RangeIterator *);
void fn_0077d2a0(RangeIterator *, RangeStore *, const RangeIterator *);
void fn_007655e4(RangeStore *, RangeNode *);
void fn_00766190(RangeStore *, RangeNode *);
void fn_00766968(RangeStore *, RangeNode *);
void fn_0076fd3c(RangeStore *, RangeNode *);
void fn_0077bb80(RangeStore *, RangeNode *);
void fn_0077da3c(RangeStore *, RangeNode *);

#define POOLED_TREE_ERASE_RANGE(name, erase_one, clear_subtree)              \
    void name(RangeIterator *result, RangeStore *store, RangeIterator *first,\
              const RangeIterator *last)                                     \
    {                                                                        \
        RangeNode *node;                                                     \
        result->node = store->head;                                          \
        if (first->node == store->head->left && last->node == store->head && \
            store->count != 0) {                                             \
            node = store->head->parent;                                      \
            while (node) {                                                   \
                RangeNode *next;                                             \
                clear_subtree(store, node->right);                           \
                next = node->left;                                           \
                node->right = store->free;                                   \
                store->free = node;                                          \
                node = next;                                                 \
            }                                                                \
            store->head->left = store->head;                                 \
            store->head->parent = 0;                                         \
            store->head->right = store->head;                                \
            store->count = 0;                                                \
            result->node = store->head;                                      \
            return;                                                          \
        }                                                                    \
        for (;;) {                                                           \
            RangeIterator erased;                                            \
            RangeIterator victim;                                            \
            RangeNode *p;                                                    \
            if (first->node == last->node)                                   \
                break;                                                       \
            node = first->node;                                              \
            p = node->right;                                                 \
            if (p != 0) {                                                    \
                first->node = p;                                             \
                while ((p = p->left) != 0)                                   \
                    first->node = p;                                         \
            } else {                                                         \
                RangeNode *walk = node;                                      \
                RangeNode *parent = node->parent;                            \
                while (walk == parent->right) {                              \
                    walk = parent;                                           \
                    first->node = walk;                                      \
                    parent = parent->parent;                                 \
                }                                                            \
                if (first->node->right != parent)                            \
                    first->node = parent;                                    \
            }                                                                \
            victim.node = node;                                              \
            erase_one(&erased, store, &victim);                              \
            result->node = erased.node;                                      \
        }                                                                    \
    }

POOLED_TREE_ERASE_RANGE(fn_007654a4, fn_00764e48, fn_007655e4)
POOLED_TREE_ERASE_RANGE(fn_00766050, fn_007659f4, fn_00766190)
POOLED_TREE_ERASE_RANGE(fn_00766828, fn_007661cc, fn_00766968)
POOLED_TREE_ERASE_RANGE(fn_0076fbfc, fn_0076f5a0, fn_0076fd3c)
POOLED_TREE_ERASE_RANGE(fn_0077ba40, fn_0077b3e4, fn_0077bb80)
POOLED_TREE_ERASE_RANGE(fn_0077d8fc, fn_0077d2a0, fn_0077da3c)
```

## Draft 2: 2 x 312 range erase (not credited, 304/312, 36 words differ)

```c
/* Same RangeNode/RangeStore/RangeIterator types as draft 1. */
void fn_00767400(RangeIterator *, RangeStore *, const RangeIterator *);
void fn_007689d8(RangeIterator *, RangeStore *, const RangeIterator *);
void fn_00767b98(RangeStore *, RangeNode *);
void fn_00769170(RangeStore *, RangeNode *);

#define POOLED_TREE_ERASE_RANGE_312(name, erase_one, clear_subtree)          \
    void name(RangeIterator *result, RangeStore *store, RangeIterator *first,\
              const RangeIterator *last)                                     \
    {                                                                        \
        RangeNode *node;                                                     \
        result->node = store->head;                                          \
        if (first->node == store->head->left && last->node == store->head && \
            store->count != 0) {                                             \
            node = store->head->parent;                                      \
            while (node) {                                                   \
                RangeNode *next;                                             \
                clear_subtree(store, node->right);                           \
                next = node->left;                                           \
                node->right = store->free;                                   \
                store->free = node;                                          \
                node = next;                                                 \
            }                                                                \
            store->head->left = store->head;                                 \
            store->head->parent = 0;                                         \
            store->head->right = store->head;                                \
            store->count = 0;                                                \
            result->node = store->head;                                      \
            return;                                                          \
        }                                                                    \
        for (;;) {                                                           \
            RangeIterator erased;                                            \
            RangeIterator victim;                                            \
            RangeNode *p;                                                    \
            RangeNode *walk;                                                 \
            if (first->node == last->node)                                   \
                break;                                                       \
            node = first->node;                                              \
            walk = node;                                                     \
            p = node->right;                                                 \
            if (p != 0) {                                                    \
                do {                                                         \
                    first->node = p;                                         \
                    p = p->left;                                             \
                } while (p != 0);                                            \
            } else {                                                         \
                RangeNode *parent = node->parent;                            \
                while (walk == parent->right) {                              \
                    walk = parent;                                           \
                    first->node = walk;                                      \
                    parent = parent->parent;                                 \
                }                                                            \
                if (first->node->right != parent)                            \
                    first->node = parent;                                    \
            }                                                                \
            victim.node = node;                                              \
            erase_one(&erased, store, &victim);                              \
            result->node = erased.node;                                      \
        }                                                                    \
    }

POOLED_TREE_ERASE_RANGE_312(fn_00767a60, fn_00767400, fn_00767b98)
POOLED_TREE_ERASE_RANGE_312(fn_00769038, fn_007689d8, fn_00769170)
```
