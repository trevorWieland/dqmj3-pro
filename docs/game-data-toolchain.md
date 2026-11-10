# Game-data toolchain

`toolscripts/game_data.py` turns the parameter tables and message archives that
the game's loader reads into editable JSON, encodes them back, and proves the
round trip byte for byte against the user's own extraction. This document is the
durable knowledge behind it: the file formats as measured, which tables are
characterised and which are not, the reference query, the repack situation, and
a worked example with its exact bytes.

Nothing here is game data. Inputs come from the user's extraction; outputs go
where the user points them. `generated/`, `work/` and `inputs/` stay untracked.

## 1. The two data containers

### `.tp` and `.tb` — a magic and a record array

```
offset 0   4 bytes   magic, ASCII (e.g. "MONP", "KINP", "FIRP")
offset 4   N * S     N records of S bytes each, no padding, no per-record header
```

Records are fixed-stride structs with fields at constant offsets. There is no
count field: the record count is `(filesize - 4) / stride` and the toolchain
accepts a stride only when that division is exact **and** a structural witness
holds (section 2). The 4-byte magic is the only container header; the same magic
appears in the base and update contents, sometimes with a different record count
and occasionally a different stride (`KindConfigParam` is 84 bytes in the base
content and 88 in the update).

Two tables do not fit this shape and are deliberately not decoded:
`AIAction.tp` has a per-table preamble (`636` and `2552` appear as a u32 pair
before the data) and `BattleScriptActionParam.tp` is packed 32-byte name slots.

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
it. When a string changes length, opaque entry offsets are translated through
the gap they live in; if an opaque offset cannot be placed the encode refuses.

## 2. Which tables round-trip, and how firmly

A stride is accepted only when exactly one candidate satisfies every declared
witness. Witnesses are structural facts that the true record size must satisfy:

| witness | meaning |
| --- | --- |
| `index_at_zero` | the u16 at +0 equals the row number in every record |
| `keys_unique_sorted` | the u16 at +0 is unique and never decreases |
| `keys_unique` | the u16 at +0 is unique in any order |
| `keys_contiguous` | the keys run over an unbroken ascending range |
| `text_names` | every record's name field is empty, full width, or terminated text |
| `fixed_text` | every record's fixed-width field is printable ASCII |
| `zero_tail` | the last bytes of every record are zero |
| `columns_nondecreasing` | each declared u32 column never decreases down the table |
| `at_least_rows` | the candidate stride yields at least this many records |

`certain` means at least one witness corroborates the boundary. `declared` means
the stride rests on exact divisibility (and, where noted, on the same stride
being shared by the base and update files) with no discriminating witness; the
records are still preserved verbatim and the round trip is still exact, but the
record boundary should be treated as provisional.

### Characterised tables — every one round-trips byte-identically

Measured on the owner's extraction: **42 table files covering 26 distinct
tables, 42/42 byte-identical**, plus **84/84 message archives byte-identical**.

| table | stride | rows (base/update) | confidence | witness |
| --- | --- | --- | --- | --- |
| MonsterParam | 72 | 3067/3090 | certain | 3067 distinct keys, ascending |
| KindParam | 120 | 1024 | certain | 1024/1024 name fields decode |
| ItemParam | 64 | 1024/1149 | certain | names decode; 128 divides the base but not the update |
| FeatParam | 80 | 512 | certain | 512/512 rows numbered 0..n-1 |
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

### Named fields per table

Everything a field does not cover is emitted as `unknown` ranges and preserved
verbatim, so a table with no fields still round-trips exactly. Fields that are
established:

| table | fields |
| --- | --- |
| MonsterParam | `key` u16@0, `kind` u16@2 |
| KindParam | `name` sjis[32]@0, `base_stat_0`..`base_stat_5` u16@36,38,40,42,44,46 |
| ItemParam | `name` sjis[16]@0, `item_id` u16@60 |
| FeatParam, ShopItemParam, ActionParam, StateBasicParam, FusionMonsterParam, CustomArrangeItemTable, DiscCodeParameter | `index` u16@0 |
| AccessoryParam | `key` u16@0 |
| EffectParam | `effect_id` u16@0 |
| MonsterGrowthTable | `value_00`..`value_15` u32@4..64 |
| KindConfigParam | `model_name` ascii[8]@2 |
| MonsterPartyTable | `monster_key` u16@0 |
| FieldMapParam | `map_name` ascii[6]@0 |
| GimmickTypeTable | `gimmick_name` ascii[8]@0, `value` u8@8 |
| StealthBoxTable | `key` u16@0, `value` u16@2 |
| RaSearchParam | `map_name` ascii[6]@0 |
| ArrangeItemTable, FixationArrangeItemTable | `row_name` ascii[16]@0 |

Two corrections to the earlier survey came out of measuring rather than
trusting it: `ItemParam`'s name field is 16 bytes, not 32, and
`KindConfigParam` is 84 bytes in the base content and 88 in the update.

Naming is positional and deliberately silent about meaning. The six u16 columns
at KindParam +36..47 are `base_stat_0..5` because they are six small stats in
fixed positions, not because it is known which one is attack. `value_00..15` in
MonsterGrowthTable is likewise positional.

### Not characterised — 56 distinct families, 79 files

These are reported by `verify` as uncharacterised rather than decoded at a
guessed record size. The reasons fall into four groups:

* **No discriminating stride.** Several divisors of the body satisfy every
  available witness, so any split would be a guess: `Break/Coupling4Param`,
  `Break/CouplingKindParam`, `Break/CouplingKindLineageParam`,
  `Break/CouplingCourtRankParam`, `Break/StateHappenParam`,
  `Break/StateReleaseParam`, `Break/TakeOverDataKind`, `Break/TakeOverDataSkill`,
  `Break/GrandprixCpu`, `Break/TolerParam`, `Break/MonsterExpTable`,
  `Break/ColorChangePatternColorTbl`, `DarkLoadRevengeParty`,
  `DarkLoadRevengeSkill`, `ExchangeItemTbl`, `FusionCandidateParam`,
  `HorizontalCaveTbl`, `LibraryActParam`, `LibraryMonsterParam`,
  `LibrarySkillParam`, `LibraryFeatParam`, `LocationParam`, `MonsterColorChange`,
  `MonsterSkillPointTable`, `Partner`, `PartnerFeat`, `PartnerRoundEndFeat`,
  `PartnerAfterActionFeat`, `RaceAIAction`, `RaceAIBase`, `RaceGatherTargetParam`,
  `RaceMapParam`, `RaceRankParam`, `RideParamTbl`, `CrackPlaceTable`,
  `CrackPlaceDarkLordTable`, `CrackPlaceEffectTable`,
  `CrackPlaceMasterPartyTable`, `ColorChangeSelectColorTbl`,
  `Break/DiscAreaParameter`, `Break/DiscItemMonsterParameter`,
  `Break/DiscTrophyParameter`, `Break/EvolutionSkillParam`,
  `Break/ReplaceActSkillParam`.
* **No structural witness at all.** Many small tables fill completely with
  plausible-looking bytes whatever boundary is tried: `AITarget`,
  `AITargetCondition`, `AIActionCondition`, `AIChange`, `AIFusion`, `AIRide`,
  `BattlePowerParam`, `Break/LibraryFeatParam`.
* **Header not decoded.** `AIAction.tp` starts with a per-table preamble.
* **Name slots are packed, not records.** `BattleScriptActionParam`,
  `BattleScriptFeatParam`, `BattleScriptItemParam` hold 32-byte ASCII name slots
  and no stride yields a decodable name in every record.

One file is a genuine format difference rather than a toolchain gap: the update
content's `FeatParam.tp` has a 38304-byte body, which is not a whole number of
80-byte records, so it does not match the base layout. `verify` reports it as
uncharacterised with that measurement instead of coercing it.

## 3. The reference query

`game_data.py refs --table NAME --row N` answers "what else points at this row,
and what does this row point at". It reports only edges the schemas declare: a
field whose schema names the identifier space it points into (`refers_to`) plus
the table that owns that space (`identifier`). There is no fingerprinting and no
guesswork, so an edge that is missing from the output is an edge nobody has
proven yet, not an edge that does not exist.

Declared edges today:

| from | field | to |
| --- | --- | --- |
| MonsterParam | `kind` | KindParam row number |
| MonsterPartyTable | `monster_key` | MonsterParam `key` |
| MonsterParam, KindParam, ItemParam, AccessoryParam, EffectParam, ActionParam, FeatParam | own key/index | own space |

Output sections:

* `identifiers` — the values this row is addressed by.
* `references` — rows in other tables whose reference field equals one of them.
* `outbound` — rows this row points at through its own reference fields.
* `sharedIndex` — tables with the same row count whose first field is the row
  number, i.e. row *n* of that file describes the same slot. Reported separately
  because it is an alignment of numbering, not a pointer.
* `skippedTables` — tables the toolchain declined to decode, so the answer is
  known to be incomplete for those.

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
  "sharedIndex": [{"table": "FusionMonsterParam", "row": 1, ...}],
  "notes": []
}
```

So adding or renumbering a species means updating the 33 MonsterParam rows that
carry `kind = 1`, and re-checking the index-aligned tables. This is the query
that makes that visible instead of leaving a modder to diff every table.

## 4. Command sequence

```
# what can be decoded
python toolscripts/game_data.py list

# prove the toolchain against your own extraction (exit 1 on any mismatch)
python toolscripts/game_data.py verify --explain --json work/verify.json

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
current directory. `verify` prints one line per table with `--explain`, and
`--json` writes the full per-file report (stride, rows, witnesses, byte
identity) for a machine to check.

## 5. Worked example: one stat on one monster

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

## 6. Repack: what is achievable here and what is not

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

## 7. What a modder can and cannot do today

Can:

* Re-balance every characterised table by editing named JSON fields: monster
  indices and species links, the six KindParam stat columns, item names and
  numbers, shop and feat row numbers, accessories, effects, actions, growth
  curves, model names, map names, arrange-item names.
* Edit any message string in all 84 archives, including archives that mix text
  with opaque records.
* Edit anything at all in the characterised tables by hand through the `unknown`
  hex ranges, with the encoder still refusing to lose a byte.
* Ask what references a row before changing it, and see which tables the answer
  could not cover.
* Prove every change: `verify` for the whole tree, `diff` for one file.

Cannot yet:

* Decode the 56 uncharacterised families listed above, in particular the
  AI-action family, the battle-script families and the disk (post-game) tables.
  They are preserved verbatim, not editable through fields.
* Claim semantics for fields that are only positional: which KindParam stat is
  which, what MonsterGrowthTable's sixteen columns mean, what
  KindConfigParam's leading u16 means.
* Add a monster end to end. The chain is MonsterParam, KindParam,
  KindConfigParam, MonsterGrowthTable and the message archives; the toolchain
  can edit all but the growth table's semantics, and `refs` shows the link from
  species to MonsterParam rows, but nobody has established where a new species
  number must be declared so that every consumer sees it.
* Build a bootable image, or write SARC archives.
