# Entry-store separation: the loop is reachable, the cursor copy is not

**Result this records.** The entry store before the successor walk is not what
armcc merges. Written as a *separately selected walk cursor*, armcc 4.1 b1454
keeps the entry store out of the loop and emits the original four-instruction
top-tested walk exactly. What it will not emit is the cursor's pre-branch
initialization: the original has `mov r0,r2` before the `cmp` and `mov r1,r0` at
the else entry, and armcc rematerialises the cursor's false operand from the
node register inside the else block instead. The best measured state is
**320 bytes exact, 20 differing words** (previous best: 320 bytes, 22 words),
with the original's loop instruction for instruction. Nothing is byte-exact, so
nothing is credited.

## The function

`fn_007654a4` is the range-erase fast path over a pooled red-black tree. The
walk that matters is at `0x0076554c`-`0x00765584`; the original:

```
0076554c  ldr  r0,[r6]        ; last->node
00765550  ldr  r2,[r4]        ; node = first->node
00765554  cmp  r2,r0
00765558  beq  ret            ; first->node == last->node
0076555c  ldr  r1,[r2,#0xc]   ; p = node->right
00765560  mov  r0,r2          ; cursor = node        <- missing in every compile
00765564  cmp  r1,#0
00765568  movne r0,r1         ; cursor = p
0076556c  strne r1,[r4]       ; ENTRY STORE: first->node = p
00765570  beq  else
00765574  ldr  r0,[r0,#8]     ; loop: cursor = cursor->left
00765578  cmp  r0,#0
0076557c  strne r0,[r4]       ; first->node = cursor
00765580  bne  00765574
00765584  b    join
```

## What the entry store is

It is the loop's first-iteration store peeled out: the same lvalue
(`first->node`, the iterator's only field), the same value the loop would store
if it ran one step earlier (`node->right`), predicated on the same `p != 0` test
that guards the loop. It is not a sentinel write and not a different field: the
field, the base register and the predicate are identical to the loop's store.
The only thing that makes it a separate instruction is that it happens *before*
the cursor is advanced.

The `1836 x 9` family (`fn_0076c1f0` et al.) has the identical walk with a
different selected value:

```
0076c29c  ldr  r1,[r8,#0xc]   ; p = node->right
0076c2a0  cmp  r1,#0
0076c2a4  ldreq r0,[r8,#4]    ; if (!p) cursor = node->parent
0076c2a8  movne r0,r1         ; else cursor = p
0076c2ac  strne r1,[r2]       ; entry store
0076c2b0  beq  else
```

There the cursor's false operand is a *load*, so armcc materialises it as a
predicated `ldreq` and the entry keeps its sixth instruction naturally. The
320-byte family's false operand is a register value (`node`), and that is the
whole difference: `node` is still live in its own register at the branch, so
armcc rematerialises the cursor there instead of copying it.

## Which shapes merge the entry store

The obvious spelling merges it into the loop head:

```c
p = node->right;
if (p) {
    first->node = p;
    while (p) { p = p->left; if (p) first->node = p; }
} else { ... }
```

Measured on `fn_007654a4`: **304 bytes, 43 differing words**, walk compiled as
`str; ldr; cmp; bne` (store at head, ROT). armcc rotates the store because the
stored value and the loop cursor are the same variable, so the entry store is
just the loop's head store. `do { ... } while (p)`, `for (;;) { ... if (!p)
break; ... }`, the condition-assignment `while ((p = p->left) != 0)` and the
shared-variable `q = node; if (p) q = p;` forms all merge the same way (304 or
320 bytes, store at the head, one peeled or rotated variant each).

The compile that reaches the original loop shape is the profile note's:

```c
p = node->right;
while (p) { p = p->left; if (p) first->node = p; }
```

That has no entry store; adding one in the same block re-merges it. So the merge
is a property of the *store*, not the loop.

## Which shapes keep it separate

A ternary-selected cursor does. The entry store writes `p`; the loop walks a
different variable whose value the compiler cannot prove equal to `p` at the
branch:

```c
p = node->right;
Node *q = p ? p : node;
if (p) {
    first->node = p;
    while (q) { q = q->left; if (q) first->node = q; }
} else { ... q used as the upward-walk start ... }
```

Compiled walk:

```
b8  ldr  r1,[r2,#0xc]        ; p
bc  cmp  r1,#0
c0  movne r0,r1              ; q = p
c4  strne r1,[r4]            ; entry store, separate and predicated
c8  beq  else
cc  ldr  r0,[r0,#8]          ; the ORIGINAL loop
d0  cmp  r0,#0
d4  strne r0,[r4]
d8  bne  cc
```

Measured: **312 bytes, 40 differing words**. The loop matches the original
exactly and the entry store is where it belongs; the function is two
instructions short because the `mov r0,r2` of the entry and the `mov r1,r0` at
the else entry are absent.

A second ternary spelling, with the select inside the then block
(`Node *q = node; if (p) { q = p ? p : node; ... }`), measures the same:
312 bytes, 40 words.

## The residual: the cursor copy

The original's two missing instructions are both copies of the cursor. armcc
substitutes `node`'s register for the cursor on the else path, which is legal
because `q == node` there, and that removes both copies. Three measured
consequences:

| shape | code | words | walk |
|---|---:|---:|---|
| naive store inside guard | 304 | 43 | store at head (ROT) |
| ternary cursor (`q = p ? p : node`) | 312 | 40 | original loop |
| ternary cursor + two early iterator saves | 320 | 20-21 | original loop, entry store separate |
| previous lane's draft (`while ((p = p->left) != 0)`) | 320 | 22 | peeled, store at head |

Only memory traffic forces the copies back. Writing the two iterator saves the
erase call makes (`erased.node = node; victim.node = node;`) before the walk
makes armcc keep `node` in a register across the branch and materialise the
cursor eagerly; the walk then compiles to the original sequence with the entry
store separate. It costs two stack stores (`str r2,[sp]`, `str r2,[sp,#4]`) in
place of the original's two `mov`s, and those stores are exactly the remaining
difference. The measured body is 320 bytes with 20 differing words after one
additional statement swap in the fast-path recycle loop:

```
b8  str  r2,[sp]          vs  ldr  r1,[r2,#0xc]
bc  str  r2,[sp,#4]       vs  mov  r0,r2
c0  ldr  r3,[r2,#0xc]     vs  cmp  r1,#0
c4  cmp  r3,#0            vs  movne r0,r1
c8  movne r1,r3           vs  strne r1,[r4]
cc  strne r3,[r4]         vs  beq  else
d0  beq  else             vs  ldr  r0,[r0,#8]
d4  ldr  r1,[r1,#8]       vs  cmp  r0,#0
d8  cmp  r1,#0            vs  strne r0,[r4]
dc  strne r1,[r4]         vs  bne  loop
e0  bne  d4               vs  b     join
e4  b    join             vs  mov  r1,r0
```

Everything after the two extra stores is instruction-for-instruction the
original's walk. The other differing words are register naming in the fast path
(`ldr r1,[r2]` vs `ldr r2,[r2]`, the recycle loop's `r0/r1` pair) and two `cmp`
operand orders in the else.

## The compiler axis, measured again

The loop-rotation profile closed the build/flag axis on the naive spelling. This
lane re-measured the *ternary* spelling on all fourteen armcc builds in
`work/compiler-tools/armcc/` (4.0 b771/b821/b865/b902, 4.1
b561/b713/b791/b844/b894/b921/b1049/b1440/b1454, 5.04 b82) with
`--cpu=MPCore --apcs=/interwork --c99 -O3 -Otime --gnu --split_sections`:

| builds | entry sequence | walk |
|---|---|---|
| 4.1 b713-b1454 (10) | `ldr; cmp; movne; strne; beq` (5) | original |
| 4.0 b771-b902, 4.1 b561 (5) | store-at-head (`mov; str; ldr; cmp; bne`) | rotated |
| 5.04 b82 | different register map (`cmp r0,ip; strne ip,[r5]`) | rotated |

The 4.1 b713-b1454 group all produce the five-instruction entry and the exact
original loop; none materialises the cursor's false arm. The older builds do not
keep the entry store out of the loop at all. The entry axis is closed by the
same result as the loop axis: the shape is reachable in C, the sixth
instruction is a compiler decision, and the ten builds that reach the shape all
make the same decision.

## Class census, re-measured

An exhaustive scan of the 26,990 exported origins for the exact
`ldr rX,[rX,#0x8]; cmp rX,#0x0; strne rX,[rY]; bne <ldr>` shape finds
**31 functions / 44,160 bytes**, not 41 / 50,228:

| bytes | members | total |
|---:|---:|---:|
| 1,836 | 9 | 16,524 |
| 1,948 | 3 | 5,844 |
| 1,900 | 2 | 3,800 |
| 1,884 | 2 | 3,768 |
| 1,880 | 2 | 3,760 |
| 1,848 | 2 | 3,696 |
| 1,920 | 1 | 1,920 |
| 320 | 6 | 1,920 |
| 1,908 | 1 | 1,908 |
| 340 | 3 | 1,020 |
| **31** | | **44,160** |

The profile note's `76 x 2` group and eight of its singletons are not this
shape: every hit in the corpus uses `[p,#0x8]`, and no 76-byte function
contains the four-instruction walk. Those ten are either a related walk
(`[p,#0x4]`, or a `strne` with a different predicate) or a looser census match.
The count to keep open is 31 / 44,160 for the exact shape.

## Verdict

* The entry store is not a merger problem once the cursor is a separate
  selected variable: armcc keeps it out of the loop and reproduces the original
  `ldr; cmp; strne; bne` exactly. The class's loop shape is solved.
* The last two instructions are the walk cursor's initialization, and armcc
  will not emit them. Its if-conversion materialises only the true operand of
  the select (`movne cursor,p`, whose value the loop guard proves) and
  rematerialises the false operand (`cursor = node`) inside the else block,
  where `node` is still live. Any source shape that makes `node` unavailable
  there forces the copies back, but only by adding two real stack stores
  elsewhere; the net state is 320 bytes and 20 words, not 0.
* The ten builds that reach the shape (4.1 b713-b1454) all make the same
  decision, and the five older builds never keep the store out of the loop.
  Per the loop-profile note's standard, this is a compiler-selected
  instruction, not a source spelling, and the family stays uncredited at
  **0 bytes** until a compiler or profile that materialises an if-converted
  phi's false arm on the branch is found.

## Reproduce

`toolscripts/permute.py` scores one placed function:

```
python -I toolscripts/permute.py --source src/native/loopwalk/tree_range_erase_probe.c \
  --function fn_007654a4
```

The lane's probe unit and shape scripts were disposable (`work/`); the two
bodies below are the measured states. A body is credited only when every member
of the family is exact, so none of this is under `src/native/`.

## Draft 1: best measured (320 bytes, 20 words, original loop)

The `erased.node`/`victim.node` saves are what make armcc keep the cursor's
false operand in a register; they are equivalent to the late `victim.node = node`
the original performs (the callee overwrites `erased`), but they cost two stack
stores where the original has two register copies.

```c
typedef struct Node Node;
struct Node {
    unsigned char black;
    unsigned char reserved[3];
    Node *parent;
    Node *left;
    Node *right;
};
typedef struct Store Store;
struct Store {
    unsigned int reserved0;
    Node *free;
    unsigned int reserved8;
    unsigned int reservedc;
    Node *head;
    unsigned int count;
};
typedef struct Iterator Iterator;
struct Iterator { Node *node; };

void fn_00764e48(Iterator *, Store *, const Iterator *);
void fn_007655e4(Store *, Node *);

void fn_007654a4(Iterator *result, Store *store, Iterator *first, const Iterator *last)
{
    Node *node;
    Node *p;
    Iterator erased;
    Iterator victim;
    result->node = store->head;
    if (first->node == store->head->left && last->node == store->head &&
        store->count != 0) {
        node = store->head->parent;
        while (node) {
            Node *next;
            fn_007655e4(store, node->right);
            node->right = store->free;
            next = node->left;
            store->free = node;
            node = next;
        }
        store->head->left = store->head;
        store->head->parent = 0;
        store->head->right = store->head;
        store->count = 0;
        result->node = store->head;
        return;
    }
    for (;;) {
        if (first->node == last->node)
            break;
        node = first->node;
        erased.node = node;
        victim.node = node;
        p = node->right;
        {
            Node *q = p ? p : node;
            if (p) {
                first->node = p;
                while (q) {
                    q = q->left;
                    if (q) first->node = q;
                }
            } else {
                Node *parent = node->parent;
                while (q == parent->right) {
                    q = parent;
                    first->node = q;
                    parent = parent->parent;
                }
                if (first->node->right != parent)
                    first->node = parent;
            }
        }
        victim.node = node;
        fn_00764e48(&erased, store, &victim);
        result->node = erased.node;
    }
}
```

## Draft 2: clean ternary cursor (312 bytes, 40 words, original loop)

No extra memory traffic, so the entry is five instructions and the two copies
are absent; the loop is the original.

```c
void fn_007654a4(Iterator *result, Store *store, Iterator *first, const Iterator *last)
{
    Node *node;
    Node *p;
    Iterator erased;
    Iterator victim;
    result->node = store->head;
    if (first->node == store->head->left && last->node == store->head &&
        store->count != 0) {
        node = store->head->parent;
        while (node) {
            Node *next;
            fn_007655e4(store, node->right);
            next = node->left;
            node->right = store->free;
            store->free = node;
            node = next;
        }
        store->head->left = store->head;
        store->head->parent = 0;
        store->head->right = store->head;
        store->count = 0;
        result->node = store->head;
        return;
    }
    for (;;) {
        if (first->node == last->node)
            break;
        node = first->node;
        p = node->right;
        {
            Node *q = node;
            if (p)
                q = p ? p : node;
            if (p) {
                first->node = p;
                while (q) {
                    q = q->left;
                    if (q) first->node = q;
                }
            } else {
                Node *parent = node->parent;
                while (q == parent->right) {
                    q = parent;
                    first->node = q;
                    parent = parent->parent;
                }
                if (first->node->right != parent)
                    first->node = parent;
            }
        }
        victim.node = node;
        fn_00764e48(&erased, store, &victim);
        result->node = erased.node;
    }
}
```
