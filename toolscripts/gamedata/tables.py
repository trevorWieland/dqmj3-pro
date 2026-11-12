"""The registry of characterised parameter tables.

The registry is split so no one file has to carry every schema:
``tables_core`` holds the first 26 families, ``tables_new`` the families that
were characterised after the candidate set was widened to every divisor.  This
module combines them, marks the ``.tb`` container families, and records the
families that are still deliberately not decoded.

A schema is never added here just because a divisor exists.  Each new entry
states the witness that left exactly one candidate, and the families below stay
in ``UNCHARACTERISED`` with the measurement that stopped them, so `verify`
reports an honest gap rather than a guessed record boundary.
"""

from .tables_core import TABLES as _CORE
from .tables_new import NEW_TABLES as _NEW


#: Every table the toolchain can decode, encode and verify.
TABLES = _CORE + _NEW


#: The tables that live in ``.tb`` container files rather than ``.tp`` ones.
TB_CONTAINER = frozenset({
    "GimmickTypeTable", "StealthBoxTable", "RaSearchParam", "ArrangeItemTable",
    "CustomArrangeItemTable", "DiscCodeParameter", "FixationArrangeItemTable",
    "DiscMonsterParameter", "DiscAreaParameter", "DiscTrophyParameter",
})

for _schema in TABLES:
    if _schema.name in TB_CONTAINER:
        _schema.container = "tb"
    # A table with an established ``index`` column numbers its own records, so
    # the reference query may treat row n of two such tables as the same slot.
    # Tables whose only boundary evidence is a count keep row_numbered false.
    if not _schema.row_numbered and any(field.name == "index"
                                       for field in _schema.fields):
        _schema.row_numbered = True


#: Tables this toolchain deliberately does not decode, with the measured reason.
#:
#: Each entry states what was tested and why the bytes still do not justify a
#: boundary.  "Several divisors pass" means the candidate set really was every
#: divisor of the body (see ``candidate_strides``), not merely the one the
#: earlier survey happened to try.
UNCHARACTERISED = {
    # -- small AI tables: a byte stream, not a record array ------------------
    "AITarget": "16384 bytes split evenly by 8, 16, 32 and larger; the u16 at +0 "
                "is zero in the first record and 36 in the second at every "
                "candidate, so no witness selects a boundary",
    "AITargetCondition": "3072 bytes; 31, 0, 0 repeats three times and then the "
                         "bytes change, but 12, 16, 24 and larger strides all "
                         "reproduce a plausible repeat and no column numbers "
                         "itself",
    "AIActionCondition": "512 one-byte values in 0x38..0x3f; a byte array has no "
                         "internal boundary to measure",
    "AIChange": "52 bytes of (u16, u16) command pairs; the pair vocabulary does "
                "not overlap AIAction's pools (0/13 pairs occur in either pool), "
                "so the 4-byte unit is a declaration, not a measurement",
    "AIFusion": "48 bytes of (u16, u16) pairs with no vocabulary link to "
                "AIAction's pools; 4, 8 and 16-byte units all fit",
    "AIRide": "36 bytes of (u16, u16) pairs with no vocabulary link to AIAction's "
              "pools; 4, 6, 12 and 18-byte units all fit",
    # -- coupling tables: many divisors satisfy every weak column check ------
    "Coupling4Param": "540/860 bytes; ten-byte records put a key and four "
                      "similar u16 columns first, but 23 of 54 base records have "
                      "four different values, so equality is not a witness and "
                      "15, 20, 27 and 30 all pass uniqueness",
    "CouplingKindParam": "1368/1614 bytes; the body is two differently-sized "
                         "sections and 19, 24, 36, 38, 57 and 72 all satisfy the "
                         "weak key checks",
    "CouplingKindLineageParam": "84 bytes; 6, 7, 12, 14 and 21-byte strides all "
                                "pass uniqueness, and the table is too small to "
                                "corroborate one",
    "CouplingCourtRankParam": "2192/2904 bytes; 16-byte records fit the base but "
                              "the update body splits at 12 or 24, so the two "
                              "contents do not agree on a record shape",
    # -- crack-place tables: no column that numbers itself -------------------
    "CrackPlaceTable": "624 bytes; 12, 24, 26, 48 and 52-byte strides all "
                       "reproduce the repeated sub-record pattern, but no column "
                       "is an index or key",
    "CrackPlaceEffectTable": "72 bytes; eight-byte records give a plausible "
                             "(u32, u32) pair, yet 4, 6, 8, 9, 12 and 18 all do, "
                             "and nine records cannot discriminate",
    "CrackPlaceMasterPartyTable": "336 bytes; a nondecreasing u16 at +0 passes at "
                                  "8, 16, 24 and 48 bytes, so it does not pin the "
                                  "record boundary",
    # -- disc tables ---------------------------------------------------------
    "DiscItemMonsterParameter": "126 bytes; 2, 3, 6, 7 and 9-byte strides all see "
                                "ascending u16 values, and 63 two-byte items are "
                                "not corroborated by a count",
    # -- library tables ------------------------------------------------------
    "LibraryActParam": "1024 bytes that are zero except for a small tail; 16, 32, "
                       "64 and larger strides all treat the zero run as empty "
                       "records, so nothing dates the boundary",
    # -- model/colour tables -------------------------------------------------
    "ColorChangePatternColorTbl": "360 bytes of small signed u16 colour "
                                  "components; 5, 6, 8, 9, 10, 12 and 15-byte "
                                  "strides all fit a 9-record reading",
    "ColorChangeSelectColorTbl": "144 bytes of u16 components in 0..255; 8, 9, "
                                 "12, 16 and 18-byte strides all fit",
    "MonsterColorChange": "558 bytes; 9, 18, 31, 62 and 93-byte strides all look "
                          "plausible and the nonzero data is concentrated in a "
                          "few records, so no boundary is measured",
    "MonsterSkillPointTable": "480 bytes; 4, 6, 8, 12, 16, 20 and 24-byte strides "
                              "all produce unique u32 keys, and no count "
                              "corroborates one",
    # -- race and misc tables ------------------------------------------------
    "FusionCandidateParam": "486 bytes; the body repeats a three-u16 group every "
                            "six bytes, so 6, 18, 54 and larger strides all fit "
                            "and even the row count is ambiguous",
    "HorizontalCaveTbl": "56 bytes with two 28-byte slots; two records are too "
                         "few to corroborate a boundary (7, 14 and 28 all fit)",
    "RaceAIBase": "504 bytes of runs of 0x0a separated by zero bytes; 7, 8, 9, "
                  "12 and 14-byte strides all fit a byte-array reading",
    "RaceGatherTargetParam": "252 bytes; 12-byte records hold a plausible id and "
                             "eight zero bytes, but 36 and 84-byte strides group "
                             "three or seven of them without contradiction",
    "RaceMapParam": "400 bytes; 20, 25, 40, 50, 80 and 100-byte strides all start "
                    "each group with a map name, and the record count is not "
                    "measured anywhere else",
    "RaceRankParam": "840 bytes; 7, 8, 10, 12, 14, 15, 20 and 24-byte strides all "
                     "produce a cp932 name or a plausible column, so the name "
                     "field does not discriminate",
    "ReplaceActSkillParam": "8192 bytes that are zero except for one 16-byte "
                            "value; 16, 32, 64 and larger strides all treat the "
                            "zero run as empty records",
    "RideParamTbl": "80 bytes of five f32 rows; 4, 8, 10, 16, 20 and 40-byte "
                    "strides all hold finite floats, and five rows cannot "
                    "corroborate one",
    "TolerParam": "800 bytes; 80-byte records hold a cp932 name at +18, but 160, "
                  "200 and 400-byte strides also start every group with a name, "
                  "and ten records do not select one",
}
