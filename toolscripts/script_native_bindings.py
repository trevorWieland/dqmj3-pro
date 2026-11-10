"""Recover the Squirrel-to-native binding table from the game executable.

Every game native exposed to Squirrel is registered by a short straight-line
block inside one of the script-registration functions.  The block builds two
addresses and calls one shared registrar:

    ldr  r2, [pc, #pool]       ; r2 = native function address (word at `pool`)
    add  r1, pc, #imm8, #rot   ; r1 = address of the NUL-terminated native name
    mov  r0, r4                ; r0 = script system (the registrar loads the VM)
    bl   <registrar>           ; register(vm, name, fn)

The name is materialised pc-relatively, so the string address is never stored as
a pointer anywhere in the image, while the function address sits in a literal
pool word next to it.  Decoding both operands out of the block therefore recovers
the binding exactly, with the block address as the evidence.

Four block forms occur and all are decoded here:

  A  direct        `ldr r2,[pc,#p]; add r1,pc,#n; mov r0,r4; bl registrar`
  B  tail          the last registration of a function ends in `b registrar`
  C  hoisted       the last block of a fragment keeps its load at the fragment
                   entry: `ldr r2,[pc,#p]; b <block>` ... pool ... `<block>: add r1,...`
  D  continuation  the block branches to a shared continuation that performs the
                   registrar call for every tail block of that function

Output: a name table (identifier, native address, mode, confidence, evidence).
Nothing extracted from the image is written; only identifiers, addresses and the
registration block addresses that already exist in the committed table.

Usage:
    python toolscripts/script_native_bindings.py --code-bin generated/update-content0/code.bin
    python toolscripts/script_native_bindings.py --code-bin ... --explain Wait_
"""

from __future__ import annotations

import argparse
import hashlib
import json
import struct
import sys
from dataclasses import dataclass
from pathlib import Path

# Virtual address of the first byte of the executable image.  Every address in
# the census, in the committed table and in the game's pointer pools uses this
# link address, so file_offset = address - IMAGE_BASE.
IMAGE_BASE = 0x00100000

# End of the initialised text/rodata image: native name strings and their
# pointer words live below this, everything above is data/BSS-like.
TEXT_LIMIT = 0x007BC000

# How many instructions back to look for the function-pointer pool load.
POOL_LOOKBACK_INSNS = 8

REPO_ROOT = Path(__file__).resolve().parent.parent


@dataclass
class Binding:
    """One recovered native registration."""

    name: str
    function: int
    site: int
    form: str
    name_address: int


@dataclass
class Image:
    """Read-only view of the extracted executable image."""

    data: bytes
    _branch_index: dict[int, int] | None = None

    def u32(self, address: int) -> int:
        return struct.unpack_from("<I", self.data, address - IMAGE_BASE)[0]

    def contains(self, address: int) -> bool:
        return IMAGE_BASE <= address < IMAGE_BASE + len(self.data)

    def c_string(self, address: int, limit: int = 96) -> str | None:
        """Return the printable NUL-terminated string at `address`, if any."""
        if not self.contains(address):
            return None
        start = address - IMAGE_BASE
        end = self.data.find(b"\x00", start, min(start + limit, len(self.data)))
        if end < 0:
            return None
        raw = self.data[start:end]
        if not raw or any(byte < 0x20 or byte > 0x7E for byte in raw):
            return None
        return raw.decode("ascii")

    def is_code_pointer(self, value: int) -> bool:
        """A registered native must point inside the executable's text."""
        return IMAGE_BASE <= value < TEXT_LIMIT and value % 4 == 0

    def native_name_at(self, address: int) -> str | None:
        """Game natives are plain identifiers ending in '_'."""
        name = self.c_string(address)
        if not name or not 2 < len(name) < 48 or not name.endswith("_"):
            return None
        if not all(char.isalnum() or char == "_" for char in name):
            return None
        return name

    def branch_index(self) -> dict[int, int]:
        """Map `b` destination -> branch instruction address (built once)."""
        if self._branch_index is None:
            index: dict[int, int] = {}
            for offset in range(0, len(self.data) - 4, 4):
                word = struct.unpack_from("<I", self.data, offset)[0]
                if (word & 0xFF000000) == 0xEA000000:
                    index.setdefault(branch_target(offset + IMAGE_BASE, word), offset + IMAGE_BASE)
            self._branch_index = index
        return self._branch_index


def rotate_right(value: int, amount: int) -> int:
    """ARM data-processing immediate rotation helper."""
    amount %= 32
    return ((value >> amount) | (value << (32 - amount))) & 0xFFFFFFFF


def branch_target(address: int, word: int) -> int:
    """Resolve an A32 B/BL word sitting at `address`."""
    offset = word & 0xFFFFFF
    if offset & 0x800000:
        offset -= 0x1000000
    return (address + 8 + offset * 4) & 0xFFFFFFFF


def is_pool_load(word: int) -> bool:
    """A32 `ldr Rd, [pc, #+imm12]`."""
    return (word & 0xFFFF0000) == 0xE59F0000


def is_pc_relative_add(word: int) -> bool:
    """A32 `add Rd, pc, #imm12`."""
    return (word & 0xFFFF0000) == 0xE28F0000


def is_register_move(word: int) -> bool:
    """A32 `mov Rd, Rm` (the `mov r0, r4` that loads the script-system argument)."""
    return (word & 0xFFFFF000) == 0xE1A00000 and (word & 0xF) != 15


def pool_load_value(image: Image, address: int):
    """Value loaded by the pool load at `address`, if it is a code pointer."""
    word = image.u32(address)
    if not is_pool_load(word):
        return None
    slot = address + 8 + (word & 0xFFF)
    if not image.contains(slot + 4):
        return None
    value = image.u32(slot)
    return value if image.is_code_pointer(value) else None


def pool_load_before(image: Image, site: int, window: int = POOL_LOOKBACK_INSNS):
    """Return (load_address, loaded_value) for the nearest preceding pool load."""
    for step in range(4, window * 4 + 1, 4):
        address = site - step
        if address < IMAGE_BASE or (address - IMAGE_BASE) % 4:
            continue
        if not is_pool_load(image.u32(address)):
            continue
        value = pool_load_value(image, address)
        if value is not None:
            return address, value
    return None


def branch_after(image: Image, site: int, window: int = 4):
    """Return (branch_address, target, kind) for the next A32 B/BL at/after site."""
    for step in range(0, window * 4 + 1, 4):
        address = site + step
        if address < IMAGE_BASE or (address - IMAGE_BASE) % 4:
            continue
        word = image.u32(address)
        if (word & 0xFF000000) not in (0xEB000000, 0xEA000000):
            continue
        kind = "bl" if (word >> 24) == 0xEB else "b"
        return address, branch_target(address, word), kind
    return None


def calls_registrar(image: Image, address: int, registrar: int) -> bool:
    """True when `address` starts a registrar call, directly or after the argument move.

    Shared continuations come in two shapes: `bl registrar` when the caller
    already set r0, and `mov r0, r4; bl registrar` when it did not.
    """
    for step in (0, 4):
        target = address + step
        if target < IMAGE_BASE or (target - IMAGE_BASE) % 4 or not image.contains(target):
            return False
        word = image.u32(target)
        if (word & 0xFF000000) == 0xEB000000:
            return branch_target(target, word) == registrar
        if step == 0 and not is_register_move(word):
            return False
    return False


def hoisted_load(image: Image, site: int):
    """Form C: `ldr r2,[pc,#p]; b <site>` immediately before the fragment pool."""
    jump = image.branch_index().get(site)
    if jump is None or jump - 4 < IMAGE_BASE:
        return None
    load = jump - 4
    value = pool_load_value(image, load)
    if value is None:
        return None
    return load, value


def decode_blocks(image: Image) -> list[tuple[str, int, int, int, int, str, str]]:
    """Yield (name, function, site, target, name_address, kind, form) per block.

    `form` is "A"/"B" when the function pointer came from a pool load inside the
    block and "C" when it was hoisted to the fragment entry.
    """
    blocks = []
    for offset in range(0, len(image.data) - 4, 4):
        site = offset + IMAGE_BASE
        word = image.u32(site)
        if not is_pc_relative_add(word):
            continue
        name_address = (site + 8 + rotate_right(word & 0xFF, ((word >> 8) & 0xF) * 2)) & 0xFFFFFFFF
        name = image.native_name_at(name_address)
        if name is None:
            continue
        # A registration block always reaches the registrar within a couple of
        # instructions after the name load (the argument move may sit either
        # side of it).  Requiring both the call and a valid function pointer
        # rejects unrelated `add` instructions that happen to land on a name.
        branch = branch_after(image, site + 4, window=2)
        if branch is None:
            continue
        load = pool_load_before(image, site, window=4)
        if load is not None:
            blocks.append((name, load[1], site, branch[1], name_address, branch[2], "A"))
            continue
        hoisted = hoisted_load(image, site)
        if hoisted is not None:
            blocks.append((name, hoisted[1], site, branch[1], name_address, branch[2], "C"))
    return blocks


def find_registrations(image: Image) -> tuple[list[Binding], int | None]:
    """Decode every registration block and keep the ones that reach the registrar."""
    raw = decode_blocks(image)
    # The registrar is the destination most blocks call directly; every other
    # destination must be a continuation whose first instructions are that call.
    tally: dict[int, int] = {}
    for _, _, _, target, _, kind, _ in raw:
        if kind == "bl":
            tally[target] = tally.get(target, 0) + 1
    if not tally:
        return [], None
    registrar = max(tally, key=tally.get)

    bindings: list[Binding] = []
    for name, function, site, target, name_address, kind, form in raw:
        if target == registrar:
            form = "B" if (form in "AB" and kind == "b") else form
        elif calls_registrar(image, target, registrar):
            form = "D"
        else:
            continue
        bindings.append(Binding(name, function, site, form, name_address))
    return bindings, registrar


def load_census_modes(path: Path | None) -> dict[int, str]:
    """Map function entry address -> instruction mode from the native census."""
    if path is None or not path.is_file():
        return {}
    census = json.loads(path.read_text(encoding="utf-8"))
    return {entry["address"]: entry["mode"] for entry in census["functions"]}


def load_queue(path: Path | None) -> tuple[dict[str, dict], list[dict]]:
    """Load the script-interface queue: named entries by identifier, plus hashes.

    Entries the inventory could not name are returned separately; they still
    carry call-site counts but cannot be matched to a binding by name.
    """
    if path is None or not path.is_file():
        return {}, []
    queue = json.loads(path.read_text(encoding="utf-8"))
    named = {entry["name"]: entry for entry in queue if entry.get("name")}
    unnamed = [entry for entry in queue if not entry.get("name")]
    return named, unnamed


# Identifiers that are called by scripts but are not game natives, with the
# reason each one cannot be bound.  These are curated facts about the script
# layer: Squirrel classes defined in .nut source, Squirrel base-library
# functions, and two names that appear in no string in either executable image.
KNOWN_NON_NATIVE = {
    "Vec3": "native class instance (sq_createinstance) with only x/y/z data members; no root-table function",
    "cMonsterInfo": "script class defined in BattleCommon.nut",
    "cTargetMonsterInfo": "script class defined in BattleCommon.nut",
    "cFullPartyInfo": "script class defined in BattleCommon.nut",
    "cAllyFlagPartyInfo": "script class defined in BattleCommon.nut",
    "cActionInfo": "script class defined in BattleCommon.nut",
    "cEmptyInfo": "script class defined in BattleCommon.nut",
    "print": "Squirrel base-library function (sqstdlib), not registered by the game",
    "array": "Squirrel base-library function (sqstdlib), not registered by the game",
    "append": "Squirrel base-library function (sqstdlib), not registered by the game",
    "len": "Squirrel base-library function (sqstdlib), not registered by the game",
    "RePlaySE_": "name occurs in no string of either image; the scripts call ReplaySE_",
    "GetRideAttackMemberMonster_": "name occurs in no string of either image",
}


def build_table(
    image: Image,
    census_modes: dict[int, str],
    queue: dict[str, dict],
    unnamed: list[dict] | None = None,
) -> dict:
    """Assemble the committed table document from the decoded registrations."""
    bindings, registrar = find_registrations(image)
    by_name: dict[str, list[Binding]] = {}
    for binding in bindings:
        by_name.setdefault(binding.name, []).append(binding)

    # Call-site counts are keyed by identifier hash in the inventory, so an
    # unnamed queue entry is attached to the binding whose name hashes to it.
    by_hash = {entry["sha256"]: entry for entry in (unnamed or [])}

    rows = []
    for name, found in sorted(by_name.items(), key=lambda item: min(b.site for b in item[1])):
        # The same identifier can be registered by more than one module init.
        # When the repeated registrations agree on the function the binding is
        # unambiguous.  When they disagree, later registrations overwrite earlier
        # ones in the shared root table, so the highest block address is treated
        # as effective and the others are kept visible.
        found.sort(key=lambda binding: binding.site)
        primary = found[-1]
        distinct = {binding.function for binding in found}
        # A Thumb entry point is stored with bit 0 set; keep the address clean and
        # record the mode separately.
        entry_address = primary.function & ~1
        mode = "Thumb" if primary.function % 2 else census_modes.get(primary.function, "ARM")
        confirmed = primary.function in census_modes
        row = {
            "identifier": name,
            "address": f"0x{entry_address:08x}",
            "mode": mode,
            "confidence": "high" if confirmed and len(distinct) == 1 else "medium",
            "evidence": f"{primary.form}@0x{primary.site:08x}",
        }
        if len(distinct) > 1:
            row["alsoRegistered"] = [
                {"address": f"0x{b.function:08x}", "evidence": f"{b.form}@0x{b.site:08x}"}
                for b in found[:-1]
                if b.function != primary.function
            ]
        entry = queue.get(name) or by_hash.get(hashlib.sha256(name.encode()).hexdigest())
        if entry:
            row["callSites"] = entry["callSites"]
            row["scriptCount"] = entry["scriptCount"]
        rows.append(row)

    unbound = []
    if queue:
        bound = set(by_name)
        for name, entry in sorted(queue.items()):
            if name in bound:
                continue
            unbound.append(
                {
                    "identifier": name,
                    "callSites": entry["callSites"],
                    "reason": KNOWN_NON_NATIVE.get(name, "not a registered native in this image"),
                }
            )
        for entry in sorted(unnamed or [], key=lambda item: -item["callSites"]):
            # An unnamed queue entry is resolved when its identifier hash matches
            # a registered name; only the leftovers are genuinely unbound.
            if entry["sha256"] in {hashlib.sha256(n.encode()).hexdigest() for n in by_name}:
                continue
            unbound.append(
                {
                    "sha256": entry["sha256"],
                    "callSites": entry["callSites"],
                    "reason": "identifier not nameable: occurs in no string of either image",
                }
            )

    return {
        "schemaVersion": 1,
        "version": "update-content0",
        "moduleSha256": hashlib.sha256(image.data).hexdigest(),
        "registrar": f"0x{registrar:08x}" if registrar else None,
        "method": (
            "Registration blocks in the script init functions build the native name "
            "pc-relatively and the native address from a literal pool, then call one "
            "shared registrar. Form codes: A=bl registrar, B=b registrar (tail), "
            "C=hoisted ldr + b to the block, D=branch to a shared continuation. "
            "Evidence is <form>@<block address>."
        ),
        "bindings": rows,
        "unbound": unbound,
    }


def explain(image: Image, name: str) -> int:
    """Print every registration block for one identifier (hand-verification aid)."""
    bindings, registrar = find_registrations(image)
    found = [b for b in bindings if b.name == name]
    if not found:
        print(f"{name}: no registration block found")
        return 1
    for binding in found:
        print(
            f"{name}: name@0x{binding.name_address:08x} function=0x{binding.function:08x} "
            f"form={binding.form} block=0x{binding.site:08x} registrar=0x{registrar:08x}"
        )
        start = binding.site - IMAGE_BASE - 16
        window = image.data[start : start + 32]
        print("  bytes:", " ".join(f"{byte:02x}" for byte in window))
    return 0


def verify(table: dict, path: Path) -> int:
    """Compare a regenerated table with a committed one and report drift.

    Two extractions of the same image must agree on every identifier's address;
    a mismatch means the tool or the committed rows are wrong, so it is an error
    rather than a note.
    """
    existing = json.loads(path.read_text(encoding="utf-8"))
    old = {row["identifier"]: row["address"] for row in existing.get("bindings", [])}
    new = {row["identifier"]: row["address"] for row in table["bindings"]}
    changed = sorted(name for name in old.keys() & new.keys() if old[name] != new[name])
    added = sorted(new.keys() - old.keys())
    removed = sorted(old.keys() - new.keys())
    print(f"{path}: committed {len(old)}, regenerated {len(new)}")
    for label, names in (("changed", changed), ("only-committed", removed), ("only-regenerated", added)):
        if names:
            print(f"  {label}: {len(names)} ({', '.join(names[:8])}{'...' if len(names) > 8 else ''})")
    if changed or added or removed:
        return 1
    print("  bindings match")
    return 0


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter
    )
    parser.add_argument("--code-bin", required=True, type=Path, help="extracted ExeFS code image")
    parser.add_argument("--out", type=Path, default=REPO_ROOT / "config" / "script-natives.json")
    parser.add_argument(
        "--census",
        type=Path,
        default=REPO_ROOT / "evidence/lanes/native-inventory-completion/seeded/update-census.json",
        help="native census used to confirm the instruction mode of each target",
    )
    parser.add_argument(
        "--queue",
        type=Path,
        default=REPO_ROOT / "work" / "script-bind" / "queue.json",
        help="optional script-interface queue supplying call-site counts",
    )
    parser.add_argument("--explain", metavar="NAME", help="print one binding and exit")
    parser.add_argument("--verify", type=Path, help="compare against a committed table instead of writing")
    args = parser.parse_args(argv)

    image = Image(args.code_bin.read_bytes())
    if args.explain:
        return explain(image, args.explain)

    table = build_table(
        image,
        load_census_modes(args.census),
        *load_queue(args.queue),
    )
    if args.verify:
        return verify(table, args.verify)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(table, indent=1) + "\n", encoding="utf-8")
    high = sum(1 for row in table["bindings"] if row["confidence"] == "high")
    print(f"wrote {args.out}: {len(table['bindings'])} bindings ({high} high confidence)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
