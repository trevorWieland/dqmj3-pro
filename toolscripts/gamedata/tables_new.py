"""Schemas for the second wave of parameter tables.

Every entry here was uncharacterised before the candidate set was widened: the
resolver now tries every divisor of the body, and a stride is accepted only when
the declared witnesses leave exactly one survivor.  Three kinds of witness do
the work in this file:

* a measured index column (the integer at a fixed offset equals the row number),
* a measured name column (text decodes in every record, including the byte after
  the name that belongs to a separate field), and
* a row count measured in another table of the same content partition, which
  the ``row_count_in`` witness turns into a boundary test.

Field names are positional unless the bytes themselves prove a name.  A column
called ``value_0`` carries no claim about what the game does with it; it is only
a fixed place in a record that a modder can edit and the encoder can prove it
reproduced.
"""

from .fields import Field
from .schema import (TableSchema, at_least_rows, column_constant, index_at,
                     keys_contiguous_at, row_count_in, text_names, u32_index_at_zero,
                     u8_index_at_zero, value_domain)


def _values(count, offset, kind, step=2, note="positional column"):
    """Build a run of positional columns starting at ``offset``."""
    return tuple(Field("value_%02d" % index, offset + index * step, kind, note=note)
                 for index in range(count))


NEW_TABLES = (
    # --- the AI action container, characterised by its indexed header ---------
    TableSchema(
        "AIAction", b"AIAN", (1,), layout="indexed", certain=True,
        identifier="ai_action",
        basis="the header is a u32 entry count followed by a u32 data offset that "
              "equals 8 + 4 * count in both contents (636 and 642 entries).  The "
              "entry table names two equal-length u16 pools and the positive ranges "
              "cover every one of the 5352 (base) and 5516 (update) pool words with "
              "no gap.  That tiling is what makes the header a measurement.",
        note="an entry names (offset, length) in two parallel u16 pools; the words "
             "are preserved as u16 values and no opcode or operand meaning is claimed"),
    TableSchema(
        "RaceAIAction", b"RAAI", (1,), layout="indexed", certain=True,
        identifier="race_ai_action",
        basis="the same indexed header as AIAction: 18 entries, data offset 80, and "
              "the ranges tile both 201-word pools exactly.",
        note="records are entry/pool pairs; the word meaning is not established"),
    # --- battle-script name slots and numbered records -----------------------
    TableSchema(
        "BattleScriptActionParam", b"BSCP", (40, 64), layout="named", certain=True,
        identifier="battle_script_action", row_numbered=True,
        basis="the header's 360 name slots (361 in the update) are 32-byte "
              "zero-padded ASCII effect names and the data offset is 8 + 32 * slots. "
              "Of the declared strides only 64 makes the u16 at +0 equal the row "
              "number in all 1024 records; 40 leaves 1638.4 records and 32 fails on "
              "record 1.",
        note="names are effect identifiers used verbatim in the battle scripts "
             "(e.g. EF030_10_TENSION01 in BATTLE044.nut); the rest of each record is "
             "preserved verbatim"),
    TableSchema(
        "BattleScriptFeatParam", b"BSFP", (40, 64), layout="named", certain=True,
        identifier="battle_script_feat", row_numbered=True,
        basis="42 name slots and a data offset of 8 + 32 * 42; of the declared "
              "strides only 40 makes the u16 at +0 equal the row number in all 532 "
              "records.",
        note="the 32-byte name slots are ASCII effect identifiers; record content "
             "beyond the index is unknown"),
    TableSchema(
        "BattleScriptItemParam", b"BSIP", (40, 64), layout="named", certain=True,
        identifier="battle_script_item", row_numbered=True,
        basis="28 name slots and a data offset of 8 + 32 * 28; only 40 makes the "
              "u16 at +0 equal the row number in all 512 records.",
        note="the name slots are ASCII effect identifiers; record content beyond the "
             "index is unknown"),
    # --- tables whose first column is a measured row number ------------------
    TableSchema(
        "DarkLoadRevengeParty", b"DLRP", (20,), candidates="divisors", certain=True,
        identifier="revenge_party", row_numbered=True,
        fields=(Field("index", 0, "u32", note="equals the row number"),)
               + _values(4, 4, "u32", step=4),
        witnesses=(u32_index_at_zero(), at_least_rows(2)),
        basis="of the divisors of the 200-byte body only 20 makes the u32 at +0 "
              "equal the row number in all ten records; 200 leaves one record and "
              "is rejected by at_least_rows.",
        note="the four u32 columns after the index are positional and unnamed"),
    TableSchema(
        "DarkLoadRevengeSkill", b"DLRS", (8,), candidates="divisors", certain=True,
        identifier="revenge_skill", row_numbered=True,
        fields=(Field("index", 0, "u32", note="equals the row number"),
                Field("value", 4, "u32", note="positional column")),
        witnesses=(u32_index_at_zero(), at_least_rows(2)),
        basis="only the eight-byte stride keeps u32@0 equal to the row number across "
              "all 149 records; 298 and 596 fail at the second record.",
        note="the second u32 is positional and unnamed"),
    TableSchema(
        "Partner", b"PTNR", (8,), candidates="divisors", certain=True,
        identifier="partner", row_numbered=True,
        fields=(Field("index", 0, "u32", note="equals the row number"),
                Field("value_0", 4, "u16"), Field("value_1", 6, "u16")),
        witnesses=(u32_index_at_zero(), at_least_rows(2)),
        basis="eight is the only divisor of the 48-byte body whose u32 at +0 equals "
              "the row number in all six records.",
        note="the two u16 columns after the index are positional and unnamed"),
    TableSchema(
        "PartnerFeat", b"PNFT", (32,), candidates="divisors", certain=True,
        identifier="partner_feat", row_numbered=True,
        fields=(Field("index", 0, "u32", note="equals the row number"),) + _values(14, 4, "u16"),
        witnesses=(u32_index_at_zero(), at_least_rows(2)),
        basis="of the divisors of the 224-byte body only 32 makes the u32 at +0 "
              "equal the row number in all seven records.",
        note="the fourteen u16 columns after the index are positional and unnamed"),
    TableSchema(
        "PartnerRoundEndFeat", b"PERF", (8,), candidates="divisors", certain=True,
        identifier="partner_round_end_feat", row_numbered=True,
        fields=(Field("index", 0, "u16", note="equals the row number"),) + _values(3, 2, "u16"),
        witnesses=(index_at(0, "u16"), at_least_rows(2)),
        basis="only the eight-byte stride keeps the u16 at +0 equal to the row "
              "number across all fourteen records.",
        note="the three u16 columns after the index are positional and unnamed"),
    TableSchema(
        "PartnerAfterActionFeat", b"PAAF", (4,), candidates="divisors", certain=True,
        identifier="partner_after_action_feat", row_numbered=True,
        fields=(Field("index", 0, "u16", note="equals the row number"),
                Field("value", 2, "u16")),
        witnesses=(index_at(0, "u16"), at_least_rows(2)),
        basis="the four-byte body has two records, and only stride 4 keeps the u16 "
              "at +0 equal to the row number; the eight-byte candidate is one record.",
        note="two records is the whole file; the second u16 is positional and unnamed"),
    TableSchema(
        "LocationParam", b"LOCA", (4,), candidates="divisors", certain=True,
        identifier="location", row_numbered=True,
        fields=(Field("index", 3, "u8", note="equals the row number modulo 256"),),
        witnesses=(index_at(3, "u8"), at_least_rows(2)),
        basis="only stride 4 keeps the u8 at +3 equal to the row number across all "
              "243 records; six bytes misaligns the column at the second record.",
        note="the first three bytes of each record stay unknown"),
    # --- tables whose one-byte first column is a measured index --------------
    TableSchema(
        "DiscTrophyParameter", b"DTPC", (8,), candidates="divisors", certain=True,
        identifier="disc_trophy", row_numbered=True,
        fields=(Field("index", 0, "u8", note="equals the row number plus one"),
                Field("value_0", 2, "u16"), Field("value_1", 4, "u32")),
        witnesses=(u8_index_at_zero(plus=1), at_least_rows(2)),
        basis="only the eight-byte stride keeps the u8 at +0 equal to the row "
              "number plus one across all 255 records; a 24-byte stride misaligns at "
              "the second record.",
        note="the u16 and u32 after the index are positional and unnamed"),
    TableSchema(
        "TakeOverDataKind", b"TKNP", (4,), candidates="divisors", certain=True,
        identifier="takeover_kind", row_numbered=True,
        fields=(Field("key", 0, "u16", note="equals the row number plus one"),
                Field("value", 2, "u16", note="positional column")),
        witnesses=(index_at(0, "u16", plus=1), at_least_rows(2)),
        basis="only stride 4 keeps the u16 at +0 equal to the row number plus one "
              "across all 1023 records.",
        note="the second u16 is positional and unnamed"),
    TableSchema(
        "TakeOverDataSkill", b"TSNP", (4,), candidates="divisors", certain=True,
        identifier="takeover_skill", row_numbered=True,
        fields=(Field("index", 0, "u16", note="equals the row number"),
                Field("value", 2, "u16", note="positional column")),
        witnesses=(index_at(0, "u16"), at_least_rows(2)),
        basis="only stride 4 keeps the u16 at +0 equal to the row number across all "
              "512 records.",
        note="the second u16 is positional and unnamed"),
    # --- names or known row counts ------------------------------------------
    TableSchema(
        "GrandprixCpu", b"GCPC", (44,), candidates="divisors", certain=True,
        identifier="grand_prix_cpu", row_numbered=True,
        fields=(Field("name", 0, "sjis", width=16, note="CPU opponent name"),
                *(Field("value_%02d" % index, 16 + index * 2, "u16")
                  for index in range(14)),),
        witnesses=(text_names("sjis", 16), at_least_rows(2)),
        basis="44 is the only divisor of the 308-byte body at which every record "
              "starts with a decodable cp932 name (the first record is empty); 77 "
              "and 154 misalign the name field.",
        note="the fourteen u16 columns after the name are positional and unnamed"),
    TableSchema(
        "LibraryMonsterParam", b"LIBM", (9,), candidates="divisors", certain=True,
        identifier="library_monster",
        fields=(Field("name", 0, "ascii", width=7, note="map file stem"),
                Field("value_0", 7, "u8"), Field("value_1", 8, "u8")),
        witnesses=(text_names("ascii", 7), row_count_in({1024})),
        basis="every nine-byte record starts with a seven-byte ASCII map name or an "
              "empty slot, followed by two separate bytes: record 217 ends in 0,1 "
              "and record 453 in 1,0, so neither trailing byte belongs to the name. "
              "The body yields 1024 rows, the count KindParam and the other "
              "1024-slot tables declare.",
        note="the two trailing bytes are unnamed flags; names are map stems, not "
             "monster names"),
    TableSchema(
        "DiscAreaParameter", b"DAPC", (16,), candidates="divisors", certain=True,
        identifier="disc_area", row_numbered=True,
        fields=(Field("area", 0, "u16"), Field("map_name", 4, "ascii", width=6),
                Field("variant", 10, "u16"), Field("value_0", 12, "u16"),
                Field("value_1", 14, "u16")),
        witnesses=(text_names("ascii", 6, offset=4), column_constant(2, "u16", 0xFFFF),
                   row_count_in({255})),
        basis="16 is the only divisor of the 4080-byte body that yields the 255 "
              "records the disc area space holds; every record has 0xffff at +2 and a "
              "six-byte ASCII map name at +4.  The u16 at +10 distinguishes variants "
              "of the same map (H00_00, H00_01, H00_02).",
        note="the u16s at +12 and +14 are positional; the map-name space is the "
             "disc's own, not FieldMapParam's"),
    TableSchema(
        "LibrarySkillParam", b"LIBS", (6,), candidates="divisors", certain=True,
        identifier="library_skill",
        fields=_values(3, 0, "u16"),
        witnesses=(row_count_in({621}),),
        basis="the 3726-byte body is 621 six-byte records in the base and update "
              "contents, the skill count SkillParam declares in the update content; "
              "no other divisor produces 621 rows.",
        note="three positional u16 columns; the second column is not a row number "
             "after record 67, so it is left unnamed"),
    TableSchema(
        "BattlePowerParam", b"BTPW", (4,), candidates="divisors", certain=True,
        identifier="battle_power",
        fields=_values(2, 0, "u16"),
        witnesses=(row_count_in({636, 642}),),
        basis="the base body is 636 four-byte rows and the update body 642, exactly "
              "the entry counts AIAction declares in the same content partitions; no "
              "other divisor reproduces those two counts.",
        note="two positional u16 columns; no row index or meaning is established"),
    TableSchema(
        "StateHappenParam", b"STHP", (12, 16), candidates="divisors", certain=True,
        identifier="state_happen",
        fields=_values(6, 0, "u16"),
        witnesses=(row_count_in({101}),),
        basis="the base body (1212 bytes) is 101 twelve-byte records and the update "
              "body (1616 bytes) is 101 sixteen-byte records, the row count "
              "StateBasicParam declares in both contents.",
        note="six positional u16 columns; the update record's last four bytes stay "
             "unknown; no field meaning is established"),
    TableSchema(
        "StateReleaseParam", b"STRP", (12, 16), candidates="divisors", certain=True,
        identifier="state_release",
        fields=_values(6, 0, "u16"),
        witnesses=(row_count_in({101}),),
        basis="the same 101-row measurement as StateHappenParam: 12 bytes in the "
              "base content, 16 in the update content.",
        note="six positional u16 columns; the update record's last four bytes stay "
             "unknown; no field meaning is established"),
    TableSchema(
        "LibraryFeatParam", b"LIBF", (1,), candidates="divisors", certain=True,
        identifier="library_feat",
        fields=(Field("value", 0, "u8"),),
        witnesses=(row_count_in({512, 532}), value_domain(0, "u8", {0, 1, 2, 3, 4})),
        basis="one byte per feat: 512 bytes in the base content and 532 in the "
              "update, the row counts FeatParam declares in the same partitions; "
              "every byte is in 0..4, and no larger stride reproduces either count.",
        note="the byte is a small value whose meaning is not established; the table "
             "is an array, not a struct"),
    TableSchema(
        "EvolutionSkillParam", b"ESKP", (2,), candidates="divisors", certain=True,
        identifier="evolution_skill",
        fields=(Field("value", 0, "u16"),),
        witnesses=(row_count_in({512, 621}),),
        basis="one u16 per skill: 1024 bytes in the base content (512 rows) and 1242 "
              "in the update (621 rows), exactly the row counts SkillParam declares "
              "in the same partitions.",
        note="the u16 value is positional; no skill meaning is claimed"),
    TableSchema(
        "CrackPlaceDarkLordTable", b"CDLT", (8,), candidates="divisors", certain=True,
        identifier="crack_place_dark_lord", row_numbered=True,
        fields=(Field("value_0", 0, "u16"), Field("key", 2, "u16"),
                Field("value_1", 4, "u16"), Field("value_2", 6, "u16")),
        witnesses=(keys_contiguous_at(2, plus=133), at_least_rows(2)),
        basis="only the eight-byte stride puts a contiguous 133..143 key column at "
              "+2 across all eleven records; 11, 22 and 44 misalign that column.",
        note="the key is a dark-lord slot number; the other three u16 columns are "
             "positional and unnamed"),
    TableSchema(
        "ExchangeItemTbl", b"EITC", (12,), candidates="divisors", certain=True,
        identifier="exchange_item", row_numbered=True,
        fields=(Field("item", 0, "u16"), Field("value_0", 2, "u16"),
                Field("value_1", 4, "u16"), Field("value_2", 6, "u16"),
                Field("value_3", 8, "u16"), Field("value_4", 10, "u16")),
        witnesses=(column_constant(2, "u16", 0), column_constant(6, "u16", 0),
                   column_constant(10, "u16", 0), value_domain(8, "u16", {1, 2, 3}),
                   row_count_in({40})),
        basis="12 is the only divisor of the 480-byte body that keeps the three "
              "padding words at +2, +6 and +10 zero in every record while the +8 "
              "column stays in {1,2,3}; the body yields the 40 exchange rows.",
        note="the first u16 looks like an item number but is only positional; the "
             "other columns are unnamed"),
    TableSchema(
        "MonsterExpTable", b"METC", (68,), certain=False,
        fields=_values(16, 4, "u32", step=4),
        witnesses=(),
        basis="68, 136, 272, 340 and 680 all hold sixteen u32 columns that never "
              "decrease, so divisibility plus monotonicity does not pin the record "
              "boundary.  68 is the smallest stride that can hold the sixteen "
              "columns and matches MonsterGrowthTable's stride, but that is a "
              "declaration, not a witness.",
        note="declared at 68 bytes; every record is preserved verbatim and the round "
             "trip is exact, but the boundary should be treated as provisional"),
)


__all__ = ["NEW_TABLES"]
