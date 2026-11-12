# Game-data toolchain

`toolscripts/game_data.py` turns the parameter tables and message archives that
the game's loader reads into editable JSON, encodes them back, and proves the
round trip byte for byte against the user's own extraction. This document is the
durable knowledge behind it: the file formats as measured, which tables are
characterised and which are not, the reference query, the repack situation, and
a worked example with its exact bytes.

Nothing here is game data. Inputs come from the user's extraction; outputs go
where the user points them. `generated/`, `work/` and `inputs/` stay untracked.

## 1. The data containers

### `.tp` and `.tb` — a magic and a record array

```
offset 0   4 bytes   magic, ASCII (e.g. "MONP", "KINP", "FIRP")
offset 4   N * S     N records of S bytes each, no padding, no per-record header
```

Records are fixed-stride structs with fields at constant offsets. There is no
count field: the record count is `(filesize - 4) / stride`. For a schema that
declares `candidates="divisors"` the resolver tries **every divisor of the body
from the largest field end up to 1024 bytes**, not only a hand-written list, and
accepts a stride only when the witnesses leave exactly one survivor. That is what
turned "several divisors satisfy the structural witness" from a blocker into a
closed question: an ambiguity now raises instead of silently choosing.

The 4-byte magic is the only container header. The same magic appears in the
base and update contents, sometimes with a different record count and
occasionally a different stride (`FeatParam` is 80 bytes / 512 rows in the base
content and 72 bytes / 532 rows in the update).

Two families do not use the flat shape and have their own codecs in
`toolscripts/gamedata/containers.py`.

### The indexed AI container — `AIAction.tp`, `RaceAIAction.tp`

```
offset 0        u32 entryCount
offset 4        u32 dataOffset        == 8 + 4 * entryCount
offset 8        entryCount * (u16 offset, u16 length)   -- in u16 words
dataOffset      u16 poolA[poolWords]
                u16 poolB[poolWords]
```

The entries name one range in each of two equal-length pools of u16 words. Ranges
may be shared: many entries point at the same script. In every measured file the
positive ranges tile the pool exactly and `poolWords` is the maximum
`offset + length`; that equality is the witness that makes the header a
measurement rather than a coincidence. The words are operation data whose meaning
is not established, so the document exposes them as u16 values and never calls
them opcodes or operands.

Measured: `AIAction` has 636 entries and 5352 words per pool in the base content,
642 and 5516 in the update; `RaceAIAction` has 18 entries and 201 words.

### The named battle-script container — the three `BattleScript*` tables

```
offset 0        u32 slotCount
offset 4        u32 dataOffset        == 8 + 32 * slotCount
offset 8        slotCount * char[32]  -- zero-padded ASCII name slots
dataOffset      fixed-stride records
```

The slot count is independent of the record count. The record stride is the one
declared candidate that makes the u16 at +0 equal the row number in every record:

| table | slots base/update | stride | records base/update |
| --- | --- | --- | --- |
| `BattleScriptActionParam` | 360 / 361 | 64 | 1024 / 1024 |
| `BattleScriptFeatParam` | 42 / 42 | 40 | 532 / 532 |
| `BattleScriptItemParam` | 28 / 28 | 40 | 512 / 512 |

The name slots are effect identifiers (`EF030_10_TENSION01`, `EF120_01_HOIMI`).
They are not decoration: the battle scripts use the same strings verbatim, so the
cross-reference is reproducible (section 3).

### `.mes` — an entry table and a payload

```
offset 0        u32 count
offset 4        count * (u32 flags, u32 byteOffset)      -- the entry table
offset 4+8*count payload
```

The entry table ends exactly where the first payload byte begins; the decoder
checks that for every archive. An offset of zero means the entry has no payload.

The payload is **not always text**. Some archives are pure UTF-16LE
NUL-terminated strings (`AreaMessage.mes`), some are pure records (the tail of
`MonsterKindMessage.mes` is a run of `0x2d`), and some mix both
(`ItemHelpMessage.mes` interleaves strings with 12-byte records such as
`"IH0418" 00 00 <u32>`). The `flags` word distinguishes those cases in the
game's loader, but that mapping is not established here, so the decoder decides
by evidence: an entry is a string when a terminated UTF-16LE run starts at its
offset and ends no later than the next entry. Every other entry is _opaque_: its
offset is carried through untouched and its bytes live inside a recorded gap.

Entry order is arbitrary. Strings are stored in ascending offset order and every
offset is recomputed on encode, so editing one string only moves the bytes after
it. When a string changes length, opaque entry offsets are translated through the
gap they live in; if an opaque offset cannot be placed the encode refuses.

This is also why the evidence command scans the payload as a byte stream rather
than pretending it can name the owning entry: the mixed archives place a four-byte
control word before some strings, so the entry offset is not always the string
offset.

## 2. Which tables round-trip, and how firmly

A stride is accepted only when exactly one candidate satisfies every declared
witness. Witnesses are structural or cross-file facts that the true record size
must satisfy:

| witness | meaning |
| --- | --- |
| `index_at` | the integer at a fixed offset equals the row number (u8/u16/u32) |
| `keys_unique_sorted` / `keys_unique` | the u16 at +0 is unique, optionally ascending |
| `keys_contiguous_at` | a key column at a fixed offset runs over an unbroken range |
| `text_names` | every record's name field is empty, full width, or terminated text |
| `fixed_text` | every record's fixed-width field is printable ASCII |
| `zero_tail` | the last bytes of every record are zero |
| `columns_nondecreasing` | each declared column never decreases down the table |
| `row_count_in` | the candidate yields a row count measured in another table |
| `column_constant` / `value_domain` | a column is constant, or stays in a small measured set |
| `at_least_rows` | the candidate yields at least this many records |

`certain` means a witness corroborates the boundary. `declared` means the stride
rests on exact divisibility (and, where noted, on the same stride being shared by
the base and update files) with no discriminating witness; the records are still
preserved verbatim and the round trip is still exact, but the boundary should be
treated as provisional.

Measured on the owner's extraction: **80 table files covering 53 distinct tables,
80/80 byte-identical**, plus **84/84 message archives byte-identical**. The
registry has 53 schemas; `verify --explain` is the authoritative per-file list
because it prints the actual stride, row count and confidence.

| table | stride | rows (base/update) | confidence | witness |
| --- | --- | --- | --- | --- |
| MonsterParam | 72 | 3067/3090 | certain | 3067 distinct keys, ascending |
| KindParam | 120 | 1024 | certain | 1024/1024 name fields decode |
| ItemParam | 64 | 1024/1149 | certain | names decode; 128 divides the base but not the update |
| FeatParam | 80 / 72 | 512/532 | certain | index at +0 equals row in both contents |
| ShopItemParam | 82 | 1100 | certain | 1100/1100 rows numbered 0..n-1 |
| MonsterGrowthTable | 68 | 120 | certain | 16 columns never decrease, tails zero |
| AccessoryParam | 32 | 177 | certain | 177 keys spanning 177 values |
| EffectParam | 72 | 925/926 | certain | 925 distinct keys |
| ActionParam | 96 | 692 | certain | 692/692 rows numbered 0..n-1 |
| KindConfigParam | 84/88 | 1024 | certain | 1024/1024 model names decode |
| StateBasicParam | 60 | 101 | certain | 101/101 rows numbered 0..n-1 |
| FusionMonsterParam | 6 | 1024 | certain | 1024/1024 rows numbered 0..n-1 |
| FieldMapParam | 180 | 160 | declared | 90 also fits; 180 declared |
| MonsterPartyTable | 44 | 262/265 | declared | divisibility of both contents |
| SkillParam | 80 | 512/621 | declared | divisibility of both contents |
| SpecialSkillParam | 26 | 511 | declared | divisibility only |
| AIActionBase | 28 | 1024 | declared | divisibility only |
| RaceKindConfigParam | 32 | 1024 | declared | divisibility only |
| GimmickTypeTable | 9 | 75 | certain | 75/75 fixed text fields printable |
| StealthBoxTable | 4 | 5 | certain | 5 keys spanning 5 values |
| RaSearchParam | 18 | 27 | certain | 27/27 fixed text fields printable |
| ArrangeItemTable | 316 | 180 | certain | 180/180 names decode; only divisor that does |
| CustomArrangeItemTable | 294 | 101 | certain | 101/101 rows numbered 0..n-1 |
| DiscCodeParameter | 18 | 256 | certain | 256/256 rows numbered 0..n-1 |
| FixationArrangeItemTable | 28 | 507 | declared | 14, 28, 42, 84, 182, 364 all fit |
| DiscMonsterParameter | 64 | 1023 | declared | 192 also divides the body |
| AIAction | indexed | 636/642 | certain | entry ranges tile two equal pools |
| RaceAIAction | indexed | 18 | certain | same header, 201 words per pool |
| BattleScriptActionParam | 64 | 1024 | certain | u16@0 equals row; 360/361 name slots |
| BattleScriptFeatParam | 40 | 532 | certain | u16@0 equals row; 42 name slots |
| BattleScriptItemParam | 40 | 512 | certain | u16@0 equals row; 28 name slots |
| DarkLoadRevengeParty | 20 | 10 | certain | u32@0 equals row |
| DarkLoadRevengeSkill | 8 | 149 | certain | u32@0 equals row |
| Partner | 8 | 6 | certain | u32@0 equals row |
| PartnerFeat | 32 | 7 | certain | u32@0 equals row |
| PartnerRoundEndFeat | 8 | 14 | certain | u16@0 equals row |
| PartnerAfterActionFeat | 4 | 2 | certain | u16@0 equals row |
| LocationParam | 4 | 243 | certain | u8 at +3 equals row |
| DiscTrophyParameter | 8 | 255 | certain | u8@0 equals row+1 |
| TakeOverDataKind | 4 | 1023 | certain | u16@0 equals row+1 |
| TakeOverDataSkill | 4 | 512 | certain | u16@0 equals row |
| GrandprixCpu | 44 | 7 | certain | cp932 name at +0 in every record |
| LibraryMonsterParam | 9 | 1024 | certain | 7-byte map name + two flags; 1024 rows |
| DiscAreaParameter | 16 | 255 | certain | 6-byte map name at +4; 0xffff at +2 |
| LibrarySkillParam | 6 | 621 | certain | 621 rows = SkillParam's update count |
| BattlePowerParam | 4 | 636/642 | certain | row count = AIAction's entry count |
| StateHappenParam | 12/16 | 101 | certain | 101 rows = StateBasicParam's count |
| StateReleaseParam | 12/16 | 101 | certain | 101 rows = StateBasicParam's count |
| LibraryFeatParam | 1 | 512/532 | certain | one byte per feat, 0..4 |
| EvolutionSkillParam | 2 | 512/621 | certain | one u16 per skill |
| CrackPlaceDarkLordTable | 8 | 11 | certain | keys contiguous 133..143 at +2 |
| ExchangeItemTbl | 12 | 40 | certain | three zero padding words; 40 rows |
| MonsterExpTable | 68 | 100 | declared | 68, 136, 272, 340, 680 all fit |

### Named fields per table

Everything a field does not cover is emitted as `unknown` ranges and preserved
verbatim, so a table with no fields still round-trips exactly. Fields that are
established:

* `MonsterParam`: `key` u16@0, `kind` u16@2.
* `KindParam`: `name` sjis[32]@0, `base_stat_0..5` u16@36..46.
* `ItemParam`: `name` sjis[16]@0, `item_id` u16@60.
* Row-numbered tables: `index`/`key` at the measured offset; the rest are
  `value_00`, `value_01`, ... positional columns or `unknown` bytes.
* `KindConfigParam`: `model_name` ascii[8]@2. `FieldMapParam`: `map_name`
  ascii[6]@0. `GimmickTypeTable`: `gimmick_name` ascii[8]@0, `value` u8@8.
* `DiscAreaParameter`: `area` u16@0, `map_name` ascii[6]@4, `variant` u16@10.
* `LibraryMonsterParam`: `name` ascii[7]@0, two unnamed flag bytes.
* `GrandprixCpu`: `name` sjis[16]@0 plus fourteen positional u16 columns.
* `BattleScript*`: `names` (32-byte slots) plus records whose u16@0 is the row.

Naming is positional and deliberately silent about meaning. The six u16 columns
at KindParam +36..47 are `base_stat_0..5` because they are six small stats in
fixed positions, not because it is known which one is attack. `value_00..15` in
MonsterGrowthTable is likewise positional.

### Not characterised — 28 distinct families, 41 files

These are reported by `verify` as uncharacterised rather than decoded at a
guessed record size. The registry (`tables.UNCHARACTERISED`) carries the full
measured reason; the groups are:

* **Every divisor still fits.** `AITarget`, `AITargetCondition`, `AIChange`,
  `AIFusion`, `AIRide`, `Coupling4Param`, `CouplingKindParam`,
  `CouplingKindLineageParam`, `CouplingCourtRankParam`, `MonsterColorChange`,
  `MonsterSkillPointTable`, `RaceMapParam`, `RaceRankParam`, `RaceGatherTargetParam`,
  `RaceAIBase`, `TolerParam`.
* **Byte array with no internal boundary.** `AIActionCondition`,
  `LibraryActParam`, `ReplaceActSkillParam`.
* **Too small to corroborate a boundary.** `HorizontalCaveTbl`,
  `RideParamTbl`, `CrackPlaceEffectTable`, `DiscItemMonsterParameter`.
* **Repeated sub-records, no key or index column.** `CrackPlaceTable`,
  `CrackPlaceMasterPartyTable`, `FusionCandidateParam`,
  `ColorChangePatternColorTbl`, `ColorChangeSelectColorTbl`.

## 3. Cross-reference evidence

`game_data.py evidence` scans two independent corpora and reports, per text
field, how many distinct values occur there:

* every message archive payload, decoded as UTF-16LE and split on NUL;
* every Squirrel `.nut` script, decoded as cp932.

Measured on the owner's extraction:

| table | field | non-empty | unique | in messages | in scripts |
| --- | --- | --- | --- | --- | --- |
| KindParam | name | 619 | 619 | 557 | 140 |
| BattleScriptActionParam | names | 359 | 359 | 0 | 48 |
| BattleScriptFeatParam | names | 41 | 41 | 0 | 9 |
| BattleScriptItemParam | names | 27 | 27 | 0 | 9 |
| DiscAreaParameter | map_name | 24 | 12 | 0 | 12 |

This is corroboration, not a naming oracle: a name absent from both corpora may
simply be stored only in its table. The point is that 557 of the 619 KindParam
species names occur verbatim in the message data and every battle-script name
set overlaps the scripts, so the text fields are not a decoder artefact.

## 4. The reference query

`game_data.py refs --table NAME --row N` answers "what else points at this row,
and what does this row point at". It reports only edges the schemas declare: a
field whose schema names the identifier space it points into (`refers_to`) plus
the table that owns that space (`identifier`). There is no fingerprinting and no
guesswork, so an edge that is missing from the output is an edge nobody has
proven yet, not an edge that does not exist.

Output sections:

* `identifiers` — the values this row is addressed by.
* `references` — rows in other tables whose reference field equals one of them.
* `outbound` — rows this row points at through its own reference fields.
* `sharedIndex` — tables with the same row count whose records are **proven** to
  number themselves. Row *n* of such a table describes the same slot as row *n*.
* `countPeers` — every table with the same record count, with `rowNumbered`
  saying whether the alignment is proven or merely equal. It is a checklist, not
  a declared pointer.
* `identifierSpaces` — every identifier space the registry declares and the table
  that owns it, so a modder can see what `refs` is able to answer.
* `skippedTables` — tables the toolchain declined to decode, so the answer is
  known to be incomplete for those.

Declared edges today include `MonsterParam.kind -> KindParam row`,
`MonsterPartyTable.monster_key -> MonsterParam key`, and the identifier spaces
for monsters, kinds, items, accessories, effects, actions, feats, AI actions,
battle-script entries, partners, revenge parties/skills, take-over kinds/skills,
locations, disc areas/trophies and library slots.

Example: row 1 of KindParam is the monster named スライム (Slime).

```
$ python toolscripts/game_data.py refs --table KindParam --row 1
{
  "table": "KindParam",
  "row": 1,
  "rowCount": 1024,
  "identifiers": [["kind", 1, "row"]],
  "rowValues": {"name": "スライム", "base_stat_0": 1700, ...},
  "references": [
    {"table": "MonsterParam", "field": "kind", "space": "kind",
     "rowCount": 33, "rows": [0, 1, 2, 947, 1003, ...], "truncated": false}
  ],
  "outbound": [],
  "sharedIndex": [
    {"table": "BattleScriptActionParam", "row": 1, "note": "..."},
    {"table": "FusionMonsterParam", "row": 1, "note": "..."}
  ],
  "countPeers": [{"table": "AIActionBase", "rowCount": 1024, "rowNumbered": true, ...}],
  "identifierSpaces": [{"space": "accessory", "owner": "AccessoryParam"}, ...],
  "notes": []
}
```

So adding or renumbering a species means updating the 33 MonsterParam rows that
carry `kind = 1`, and re-checking the row-aligned 1024-slot tables that
`sharedIndex` lists. That is the checklist the earlier toolchain could not
produce.

## 5. Command sequence

```
# what can be decoded
python toolscripts/game_data.py list

# prove the toolchain against your own extraction (exit 1 on any mismatch)
python toolscripts/game_data.py verify --explain --json work/verify.json

# show where table names occur in the game's messages and scripts
python toolscripts/game_data.py evidence --out work/evidence.json

# decode one table to JSON
python toolscripts/game_data.py decode <root>/data/Parameter/KindParam.tp \
    --out work/KindParam.json

# edit one value in that JSON, then encode it
python toolscripts/game_data.py encode work/KindParam.json --out work/KindParam.tp

# prove only the intended bytes moved
python toolscripts/game_data.py diff <root>/data/Parameter/KindParam.tp work/KindParam.tp

# what else references a row
python toolscripts/game_data.py refs --table KindParam --row 1
```

`--root` defaults to `generated/asset-samples` and is searched upwards from the
current directory. `verify` prints one line per file with `--explain`, including
one line per opaque file with its magic and the measured reason, and `--json`
writes the full per-file report for a machine to check.

## 6. Worked example: one stat on one monster

Change スライム's first base stat from 1700 to 1800 and prove nothing else moves.

```
$ python toolscripts/game_data.py decode \
    generated/asset-samples/base/0/data/Parameter/Break/KindParam.tp \
    --out work/example/KindParam.json
$ cp generated/asset-samples/base/0/data/Parameter/Break/KindParam.tp \
     work/example/KindParam.original.tp
# edit records[1].base_stat_0 in the JSON: 1700 -> 1800
$ python toolscripts/game_data.py encode work/example/KindParam.json \
    --out work/example/KindParam.edited.tp
$ python toolscripts/game_data.py diff \
    work/example/KindParam.original.tp work/example/KindParam.edited.tp
before 122884 bytes, after 122884 bytes, 2 bytes differ
  offset 160 (0xa0): 0xa4 -> 0x08
  offset 161 (0xa1): 0x06 -> 0x07
```

The arithmetic checks out: KindParam records start at 4, row 1 starts at
`4 + 120 = 124`, `base_stat_0` is at `+36`, so the field is at byte 160.
1700 is `0x06a4` little-endian (`a4 06`); 1800 is `0x0708` (`08 07`). Two bytes
changed, at exactly the field's offset, and the file length is unchanged. The
same edit is asserted as a test (`tests/test_game_data_tables.py`,
`test_the_worked_example_changes_exactly_two_bytes`).

For a file with more rows, the untouched records are byte-identical because the
encoder writes each record from its own values and refuses to finish unless
every byte of every record is accounted for.

## 7. Repack: what is achievable here and what is not

**Verdict: a bootable image cannot be produced in this environment, and does not
need to be for content edits.**

Measured facts:

* `tools/ctrtool-1.3.0` extracts only. `makerom` and `3dstool` are absent from
  `tools/` and are not fetched by `setup_tools.py`.
* The bundled `pyctr` 0.7.6 provides readers only — `RomFSReader`, `CIAReader`,
  `NCCHReader` — and no writer class at all.
* Opening the owner's own update CIA with `pyctr` fails immediately with
  `BootromNotFoundError: boot9.bin`. ROM-level rewriting therefore needs the
  owner's private key material, which by policy stays private and is not present
  here. That is the hard blocker for an image rebuild, before any question of
  tooling.
* The parameter tables and message archives are **not inside a SARC archive**.
  The extraction the project performs with `pyctr`'s `RomFSReader` produces one
  file per table at `data/Parameter/<Name>.tp` and `data/Message/<Name>.mes`
  directly in the RomFS tree (`base/0/...` and `update/0/...` are content
  partitions). A rebuilt `.tp` is bit-for-bit the same format the loader reads,
  so the natural repack unit is the file, not an archive.
* Therefore the usable repack path is a **RomFS overlay**: put the edited files
  at the same relative paths under `romfs/` and let LayeredFS (Luma3DS on
  hardware) or an emulator's `load/mods/<title-id>/romfs/` directory supply them.
  No image is built, no keys are needed, and nothing has to be downloaded.

What is _not_ verified here: that a replaced loose file is picked up by the
game's loader. Confirming it needs a console or emulator with the owner's keys
and a save they are willing to lose — outside this worktree. The claim this
document supports is narrower and checkable: the encoders reproduce the game's
own files exactly, and the edited file differs from the original only in the
field that was edited.

If an image ever is needed, the missing pieces in order are: a RomFS image
writer (IVFC header, Lv3 directory and file metadata, data region), an NCCH
rebuild (header, ExHeader, ExeFS, RomFS region, hashes), a CIA/TMD wrapper, and
the owner's `boot9`/title keys. None of that is committed, and none of it should
be: the keys are private by policy.

### SARC and XBB: measured, deliberately not written

`ic_*.arc` files are SARC containers: `SARC`, u16 header size `0x14`, BOM
`0xFEFF`, u32 file size, u32 data offset `0x80`, u16 version `0x0100`, then
`SFAT` at `0x14` and `SFNT` at `0x30`. The single node in each sample is
20 bytes and its last field is the member size (`0x4028` for a 16552-byte file
with data at `0x80`), but the neighbouring fields (`0x00000065`,
`0x01000000`, `0`) could not be resolved into name offset and data start from
single-member samples, so no writer was written. Shipping one would mean
shipping a guess that can silently corrupt an archive. Data edits do not need
it: the tables are loose files.

`.xbb` and `.pef` share a header (`XBB\x01`, a u32 type, then offsets at +32,
+36, +40, two 8-byte hashes and a name such as `A00_00_crack.bin`). They carry
field tables and effects, not the parameter data, and are not decoded.

## 8. What a modder can and cannot do today

Can:

* Decode and edit **80 of the 121 parameter files**, covering 53 content
  families, including the AI action container and all three battle-script
  tables. Every named field is editable, and anything unnamed is editable through
  the `unknown` hex ranges without the encoder losing a byte.
* Inspect an AI action's entry ranges and both u16 command pools, and inspect the
  32-byte effect-name slots that the battle scripts also use.
* Add a row to a flat table by appending a record object; the encoder validates
  its fields and unknown bytes before writing.
* Edit any message string in all 84 archives, including archives that mix text
  with opaque records.
* Ask what references a row, what it points at, which tables share its row count,
  and which of those are proven row-aligned, before changing it.
* Prove every change: `verify` for the whole tree, `diff` for one file, and
  `evidence` to see the cross-reference support for names.

Cannot yet:

* Decode the 28 uncharacterised families listed above, in particular the small
  AI target/condition/change tables, the coupling tables, the crack-place tables
  and the colour/ride tables. They are preserved verbatim, not editable through
  fields.
* Claim semantics for fields that are only positional: which KindParam stat is
  which, what MonsterGrowthTable's sixteen columns mean, what KindConfigParam's
  leading u16 means.
* Add a monster end to end. `refs` now lists the 1024-slot row-aligned peers and
  the MonsterParam rows carrying a species number, but nobody has established
  where a new species number must be declared so every consumer sees it.
* Build a bootable image, or write SARC archives.
