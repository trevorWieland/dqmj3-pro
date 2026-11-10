"""The registry of characterised parameter tables.

Every entry states the magic, the record stride or strides, the fields that have
been established, the witnesses that make the stride a measurement, and the
evidence behind it in words.  Tables that are not listed here are reported by
``game_data.py verify`` as uncharacterised rather than decoded at a guessed
record size; the comment block at the end of this file records why each family
is missing.

No table in this list is described by semantics that the bytes do not show: a
field is either an identifier space the file itself proves (a unique, ascending
or contiguous key column), a text field that decodes in every record, a numeric
column with a measured range, or it stays unknown and is preserved verbatim.
"""

from .fields import Field
from .schema import (TableSchema, at_least_rows, columns_nondecreasing, fixed_text,
                     index_at_zero, keys_contiguous, keys_unique, keys_unique_sorted,
                     text_names,
                     zero_tail)


def text_field(name, offset, kind, width, note=""):
    """SJIS or ASCII text field helper."""
    return Field(name, offset, kind, width=width, note=note)


def number_field(name, offset, kind, note="", refers_to=None):
    """Integer or float field helper."""
    return Field(name, offset, kind, note=note, refers_to=refers_to)


#: Every table the toolchain can decode, encode and verify.
TABLES = (
    TableSchema(
        "MonsterParam", b"MONP", (72,),
        fields=(number_field("key", 0, "u16", "unique record key, sparse in 1..4414",
                             refers_to="monster"),
                number_field("kind", 2, "u16", "species number; values 1..990",
                             refers_to="kind")),
        witnesses=(keys_unique_sorted(),),
        identifier="monster", certain=True,
        basis="72 is the only divisor of 220824 whose u16 at +0 is unique and ascending "
              "across all 3067 records; the update file (222480 bytes) gives the same "
              "stride with 3090 records.",
        note="every other byte of the record is unknown and preserved verbatim"),
    TableSchema(
        "KindParam", b"KINP", (120,),
        fields=(text_field("name", 0, "sjis", 32, "species name"),
                *(number_field("base_stat_%d" % index, 36 + index * 2, "u16",
                               "one of six u16 stat columns at +36..47")
                  for index in range(6)),),
        witnesses=(text_names("sjis", 32), at_least_rows(1024)),
        identifier="kind", certain=True,
        basis="every one of the 1024 records starts with a NUL-terminated cp932 name at "
              "stride 120 and no other divisor keeps a name field decodable; the row "
              "count must exceed the 990 that MonsterParam.kind reaches.",
        note="the six u16 columns at +36..47 are named positionally; which in-game stat "
             "each one drives is not established"),
    TableSchema(
        "ItemParam", b"ITPC", (64,),
        fields=(text_field("name", 0, "sjis", 16, "item name"),
                number_field("item_id", 60, "u16", "item number, 0..998")),
        witnesses=(text_names("sjis", 16), at_least_rows(1024)),
        identifier="item", certain=True,
        basis="the base file (65536 bytes, 1024 records) and the update file (73536 "
              "bytes, 1149 records) are both whole numbers of 64-byte records; 128 "
              "divides the base but not the update.  A 16-byte cp932 name decodes in "
              "every record at +0 and the u16 at +60 stays below the record count.",
        note="the descriptive name field is 16 bytes, not the 32 the earlier survey "
             "assumed"),
    TableSchema(
        "SkillParam", b"SKLP", (80,),
        witnesses=(),
        identifier="skill", certain=False,
        basis="declared: 40960 = 512 x 80 in the base content and 49680 = 621 x 80 in "
              "the update content, and no other divisor in the plausible range is "
              "common to both.  No structural witness pins the record boundary.",
        note="records are preserved verbatim; no field is established"),
    TableSchema(
        "FeatParam", b"FEAP", (80,),
        fields=(number_field("index", 0, "u16", "row number", refers_to="feat"),),
        witnesses=(index_at_zero(),),
        identifier="feat", certain=True,
        basis="80 is the only divisor of the base body (40960 bytes) whose u16 at +0 "
              "equals the row number in all 512 records; the update body (38304 bytes) "
              "resolves the same way to 76 bytes and 504 records.",
        note="the record layout beyond the row number is not established"),
    TableSchema(
        "ShopItemParam", b"SHPP", (82,),
        fields=(number_field("index", 0, "u16", "row number"),),
        witnesses=(index_at_zero(),),
        certain=True,
        basis="82 is the only divisor of 90200 whose u16 at +0 equals the row number in "
              "all 1100 records.",
        note="82-byte records are not four-byte aligned, which is why no power-of-two "
             "stride fits"),
    TableSchema(
        "MonsterGrowthTable", b"MGTC", (68,),
        fields=(*(number_field("value_%02d" % index, 4 + index * 4, "u32",
                               "one of sixteen u32 columns at +4..67")
                  for index in range(16)),),
        witnesses=(columns_nondecreasing(tuple(4 + index * 4 for index in range(16)),
                                         "growth"), zero_tail(2)),
        certain=True,
        basis="68 bytes holds the sixteen u32 columns that never decrease down the "
              "table and the two zero bytes that end every record; 34 cannot hold the "
              "columns and 136 would pack two independent rows into one record.",
        note="the u32 at +0 is zero in every record and is left unknown"),
    TableSchema(
        "AccessoryParam", b"ACCP", (32,),
        fields=(number_field("key", 0, "u16", "accessory key, 200..376",
                             refers_to="accessory"),),
        witnesses=(keys_contiguous(),),
        identifier="accessory", certain=True,
        basis="32 is the only divisor of 5664 whose u16 at +0 runs contiguously from "
              "200 to 376 across all 177 records.",
        note="no field beyond the key is established"),
    TableSchema(
        "EffectParam", b"EFPM", (72,),
        fields=(number_field("effect_id", 0, "u16", "effect number", refers_to="effect"),),
        witnesses=(keys_unique(),),
        identifier="effect", certain=True,
        basis="72 is the only divisor of 66600 whose u16 at +0 runs over a contiguous "
              "ascending range across all 925 records; the update body (66672 bytes) "
              "gives the same stride with 926 records.",
        note="no field beyond the effect number is established"),
    TableSchema(
        "ActionParam", b"ACTP", (96,),
        fields=(number_field("index", 0, "u16", "row number", refers_to="action"),),
        witnesses=(index_at_zero(),),
        identifier="action", certain=True,
        basis="96 is the only divisor of 66432 whose u16 at +0 equals the row number in "
              "all 692 records.",
        note="no field beyond the row number is established"),
    TableSchema(
        "KindConfigParam", b"KCOP", (84, 88),
        fields=(text_field("model_name", 2, "ascii", 8, "model file stem, e.g. m000_00"),),
        witnesses=(text_names("ascii", 8, offset=2),),
        certain=True,
        basis="the base body (86016 bytes) is 1024 records of 84 and the update body "
              "(90112 bytes) is 1024 records of 88; an eight-character ASCII model name "
              "decodes at +2 in every record of both.",
        note="the four extra bytes of the update record are unknown; the leading u16 "
             "and everything after the name are unknown"),
    TableSchema(
        "StateBasicParam", b"STBP", (60,),
        fields=(number_field("index", 0, "u16", "row number"),),
        witnesses=(index_at_zero(),),
        certain=True,
        basis="60 is the only divisor of 6060 whose u16 at +0 equals the row number in "
              "all 101 records.",
        note="no field beyond the row number is established"),
    TableSchema(
        "MonsterPartyTable", b"PTYT", (44,),
        fields=(number_field("monster_key", 0, "u16", "MonsterParam key, 1..4410",
                             refers_to="monster"),),
        witnesses=(),
        certain=False,
        basis="declared: the base body (11528 bytes) is 262 records of 44 and the update "
              "body (11664 bytes) is 265; 88 divides the base but not the update.  The "
              "u16 at +0 stays inside the MonsterParam key range measured in this same "
              "tree, which corroborates the split but does not discriminate it.",
        note="no field beyond the monster key is established"),
    TableSchema(
        "SpecialSkillParam", b"SSKP", (26,),
        witnesses=(),
        identifier="special_skill", certain=False,
        basis="declared: both the base and the update body are 13286 bytes, which is "
              "511 records of 26; no structural witness pins the boundary.",
        note="records are preserved verbatim; no field is established"),
    TableSchema(
        "FieldMapParam", b"MAPP", (180,),
        fields=(text_field("map_name", 0, "ascii", 6, "map file stem, e.g. T00_00"),),
        witnesses=(fixed_text(6),),
        certain=False,
        basis="180 and 90 both put a decodable eight-character ASCII map name at +0 in "
              "every one of the 160 or 320 candidate records; 180 is declared as the "
              "record size that matches the catalogue's 160 maps.",
        note="the stride is not discriminated by the bytes, so treat record boundaries "
             "as provisional even though the round-trip is exact"),
    TableSchema(
        "FusionMonsterParam", b"FMPC", (6,),
        fields=(number_field("index", 0, "u16", "row number"),),
        witnesses=(index_at_zero(),),
        certain=True,
        basis="6 is the only divisor of 6144 whose u16 at +0 equals the row number in "
              "all 1024 records.",
        note="no field beyond the row number is established"),
    TableSchema(
        "AIActionBase", b"AIAB", (28,),
        witnesses=(),
        certain=False,
        basis="declared: both the base and the update body are 28672 bytes, which is "
              "1024 records of 28; no structural witness pins the boundary.",
        note="records are preserved verbatim; no field is established"),
    TableSchema(
        "RaceKindConfigParam", b"RKPM", (32,),
        witnesses=(),
        certain=False,
        basis="declared: both the base and the update body are 32768 bytes, which is "
              "1024 records of 32; no structural witness pins the boundary.",
        note="records are preserved verbatim; no field is established"),
    TableSchema(
        "GimmickTypeTable", b"GTTC", (9,),
        fields=(text_field("gimmick_name", 0, "ascii", 8, "gimmick file stem"),
                number_field("value", 8, "u8", "single byte following the name")),
        witnesses=(fixed_text(8),),
        certain=True,
        basis="every one of the 75 records is an eight-character printable ASCII name "
              "followed by one byte, which only a nine-byte stride produces.",
        note="the meaning of the trailing byte is not established"),
    TableSchema(
        "StealthBoxTable", b"SBTC", (4,),
        fields=(number_field("key", 0, "u16", "1..5"), number_field("value", 2, "u16")),
        witnesses=(keys_contiguous(),),
        certain=True,
        basis="four is the only stride at which the u16 at +0 runs contiguously from 1 "
              "to 5 across all five records.",
        note="the second u16 is 0x0516..0x051a and its meaning is not established"),
    TableSchema(
        "RaSearchParam", b"RSPC", (18,),
        fields=(text_field("map_name", 0, "ascii", 6, "map file stem, e.g. H00_00"),),
        witnesses=(fixed_text(6),),
        certain=True,
        basis="eighteen is the only stride at which all 27 records start with six "
              "printable ASCII bytes.",
        note="the rest of the record is unknown"),
    TableSchema(
        "ArrangeItemTable", b"FIRP", (316,),
        fields=(text_field("row_name", 0, "ascii", 16, "printable prefix of the row"),),
        witnesses=(text_names("ascii", 16),),
        certain=True,
        basis="316 is the only divisor of 56880 at which a NUL-terminated printable "
              "ASCII name decodes at +0 in all 180 records; the next best candidates "
              "leave a quarter of the rows undecodable.",
        note="the name field is declared as 16 bytes; longer names would be truncated"),
    TableSchema(
        "CustomArrangeItemTable", b"CAIT", (294,),
        fields=(number_field("index", 0, "u16", "row number"),),
        witnesses=(index_at_zero(),),
        certain=True,
        basis="294 is the only divisor of 29694 whose u16 at +0 equals the row number in "
              "all 101 records.",
        note="no field beyond the row number is established"),
    TableSchema(
        "DiscCodeParameter", b"DCPC", (18,),
        fields=(number_field("index", 0, "u16", "row number"),),
        witnesses=(index_at_zero(),),
        certain=True,
        basis="18 is the only divisor of 4608 whose u16 at +0 equals the row number in "
              "all 256 records.",
        note="no field beyond the row number is established"),
    TableSchema(
        "FixationArrangeItemTable", b"FAIP", (28,),
        fields=(text_field("row_name", 0, "ascii", 16, "printable prefix of the row"),),
        witnesses=(text_names("ascii", 16),),
        certain=False,
        basis="14, 28, 42, 84, 182 and 364 all put a decodable ASCII name at +0; 28 is "
              "declared because it is the smallest stride that holds the catalogue's "
              "507 records.",
        note="the stride is not discriminated by the bytes"),
    TableSchema(
        "DiscMonsterParameter", b"DPMT", (64,),
        witnesses=(),
        certain=False,
        basis="declared: both base and update bodies are 65472 bytes, which is 1023 "
              "records of 64; 192 divides the body as well.",
        note="records are preserved verbatim; no field is established"),
)


#: The tables that live in ``.tb`` container files rather than ``.tp`` ones.
TB_CONTAINER = frozenset({
    "GimmickTypeTable", "StealthBoxTable", "RaSearchParam", "ArrangeItemTable",
    "CustomArrangeItemTable", "DiscCodeParameter", "FixationArrangeItemTable",
    "DiscMonsterParameter",
})

for _schema in TABLES:
    if _schema.name in TB_CONTAINER:
        _schema.container = "tb"


#: Tables this toolchain deliberately does not decode, with the measured reason.
UNCHARACTERISED = {
    "AIAction": "the body is 23960 bytes, which no stride in the plausible range splits "
                "into records that satisfy any structural witness; the file appears to "
                "carry a per-table preamble (a u32 pair 636 / 2552 precedes the data)",
    "BattleScriptActionParam": "77064 bytes of packed 32-byte name slots; no stride was "
                               "found that yields a decodable name in every record",
    "BattleScriptFeatParam": "22632 bytes; every candidate stride leaves name fields "
                             "that do not decode",
    "BattleScriptItemParam": "21384 bytes; every candidate stride leaves name fields "
                             "that do not decode",
    "AITarget": "16384 bytes with no key, index or name column to witness a boundary",
    "AITargetCondition": "3072 bytes with no structural witness",
    "AIActionCondition": "512 bytes with no structural witness",
    "CouplingKindParam": "1368 bytes; several divisors pass the weak key witness",
    "Coupling4Param": "540 bytes; divisors 15..270 all pass the weak key witness",
    "StateHappenParam": "1212 bytes with no structural witness",
    "StateReleaseParam": "1212 bytes; no dominant divisor",
    "LibrarySkillParam": "3726 bytes, an odd body that only factors into small "
                               "strides inconsistent with a fixed record",
    "LibraryMonsterParam": "9216 bytes; name-validity is identical for many "
                                  "divisors",
    "DiscAreaParameter": "4080 bytes; several divisors pass",
    "DiscItemMonsterParameter": "126 bytes; too small to corroborate",
    "DiscTrophyParameter": "2040 bytes; several divisors pass",
}
