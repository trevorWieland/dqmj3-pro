# Squirrel native registration in DQMJ3 Professional

Script identifiers such as `Wait_` are C functions registered into the Squirrel root table at startup; the generated binding table is `config/script-natives.json`.

## Registration block

Each native is registered by one straight-line ARM block in a module's script-init function. Both addresses are built in the block itself, so no descriptor is ever referenced as a whole:

```asm
ldr  r2, [pc, #pool]       ; r2 = native function address (word stored at pool)
add  r1, pc, #imm8, #rot   ; r1 = address of the NUL-terminated native name
mov  r0, r4                ; r0 = script system; the registrar loads the VM from it
bl   0x00143de8            ; register(vm, name, fn)
```

`0x00143de8` forwards to `0x00154184`, which pushes the root table, pushes the name, wraps the function pointer in a closure with zero free variables, inserts it under the key at index `-3`, and restores the stack. Its callees `0x00173d14`, `0x00158128`, `0x00176fc8` and `0x00166f0c` match `sq_pushroottable`, `sq_pushstring`, `sq_newclosure` and `sq_newslot` by argument shape and by the public Squirrel 2.2.5 API; the image is stripped, so that naming is inferred rather than symbolized.

## Literal-pool record layout

```text
+0  u32   native function address (4-byte aligned, inside .text)
+4  char  identifier, NUL terminated, zero padded to the next 4-byte boundary
```

Records are packed, so a registration module appears as a run whose next record starts at `align4(previous_name_end)`. Eighteen runs exist in two clusters, `0x0011d494-0x001209e4` (scratch/AI) and `0x001ec954-0x001f0348` (field), holding 657 registrations for 628 distinct identifiers. Every target is an ARM function: the checked ones open with `push {..., lr}` and read their argument through the `sq_getinteger`-style helper at `0x00157f58`.

The table's evidence field is `<form>@<block address>`: A is a pool load, name load and `bl 0x00143de8`; B the same but tail-calling; C a hoisted `ldr r2, =fn; b <block>` at the fragment entry; D a branch to a shared continuation doing `mov r0, r4; bl`.

## Reading one binding by hand

```powershell
# decode the block: name address, function, form, block address, raw bytes
.\tools\python\Scripts\python.exe toolscripts\script_native_bindings.py `
    --code-bin generated\update-content0\code.bin --explain Wait_
# disassemble it (VA = file offset + 0x100000, so slice at VA - 0x100000)
.\tools\python\Scripts\python.exe -c "from capstone import *;b=open('generated/update-content0/code.bin','rb').read();md=Cs(CS_ARCH_ARM,CS_MODE_ARM|CS_MODE_LITTLE_ENDIAN);[print(f'{i.address:08x} {i.mnemonic:6s} {i.op_str}') for i in md.disasm(b[0x1d1b8:0x1d1e4],0x11d1b8)]"
# check the committed table against this image (exits 1 on any drift)
.\tools\python\Scripts\python.exe toolscripts\script_native_bindings.py `
    --code-bin generated\update-content0\code.bin --verify config\script-natives.json
```

Confirm that the `add` immediate resolves to the identifier's string, that the pool word holds a code address, and that the branch reaches `0x00143de8` directly or through a continuation. The function word also sits at `name_address - 4` for 648 of the 657 registrations; the nine exceptions are form C, where the load is hoisted to the fragment entry.

## Limits

An identifier registered twice (26 of them, e.g. `SetMotion_`) has two implementations; later registrations overwrite earlier ones in the shared root table, so the table keeps the higher block address, lists the other under `alsoRegistered`, and marks the row `medium` because which init runs last is not proven statically. Rows whose target is not a census function boundary are also `medium`: the block proves the address, the census does not confirm the entry. The twenty unbound identifiers and the reason for each are in the table's `unbound` array.
