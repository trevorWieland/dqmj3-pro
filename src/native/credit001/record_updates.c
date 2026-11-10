/*
 * Record field initialisers recovered from the original image.
 *
 * Each function writes a fixed pattern into a caller-supplied record pointer:
 * zeroing a run of words, or setting one field to a constant. They were
 * recovered because the compiled bytes reproduce the original instructions
 * exactly, not because their purpose is known -- the surrounding records are
 * not yet typed, so the names remain address-derived until callers are traced.
 */
#include "record_types.h"

void fn_00119b40(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; *(u32 *)(record + 0xc) = 0x0u; *(u32 *)(record + 0x10) = 0x0u; *(u32 *)(record + 0x14) = 0x0u; }
void fn_0011a604(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; }
void fn_00122a78(u8 *record) { *(u8 *)(record + 0x4) = 0x1u; }
void fn_00124e6c(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; *(u32 *)(record + 0xc) = 0x0u; *(u32 *)(record + 0x10) = 0x0u; }
void fn_00124f40(u8 *record) { *(u32 *)(record + 0x18) = ~0x0u; }
void fn_00126800(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; }
void fn_001273b8(u8 *record) { *(u32 *)(record + 0x38) = 0x0u; *(u32 *)(record + 0x3c) = 0x0u; *(u32 *)(record + 0x40) = 0x0u; }
void fn_00127588(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; *(u32 *)(record + 0xc) = 0x0u; }
void fn_00129c8c(u8 *record) { *(u32 *)(record + 0x6c) = 0x0u; }
void fn_0012a2d8(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; }
void fn_00145c50(u8 *record) { *(u32 *)(record) = 0x1u; }
void fn_00148654(u8 *record) { *(u8 *)(record + 0x6a) = 0x1u; }
void fn_00148888(u8 *record) { *(u8 *)(record + 0x69) = 0x1u; }
void fn_00152560(u8 *record) { *(u32 *)(record + 0x38) = 0x0u; *(u32 *)(record + 0x3c) = 0x0u; *(u32 *)(record + 0x40) = 0x0u; }
void fn_00158768(u8 *record) { *(u32 *)(record + 0x1c) = ~0x0u; }
void fn_001587a4(u8 *record) { *(u32 *)(record + 0x1c) = ~0x0u; }
void fn_001729f0(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; }
void fn_00172d54(u8 *record) { *(u8 *)(record + 0x98) = 0x1u; }
void fn_001880a4(u8 *record) { *(u32 *)(record + 0x44) = 0x0u; }
u32 fn_00191218(const u8 *record) { return *(const u16 *)((const u8 *)(*(const u32 *)((const u8 *)(*(const u32 *)(record)) + 0x30)) + 0x40); }
u32 fn_00191228(const u8 *record) { return *(const u16 *)((const u8 *)(*(const u32 *)((const u8 *)(*(const u32 *)(record)) + 0x30)) + 0x4); }
void fn_00195a5c(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; }
void fn_001af0d8(u8 *record) { *(u32 *)(record + 0x48) = 0x0u; *(u32 *)(record + 0x4c) = 0x0u; *(u32 *)(record + 0x50) = 0x0u; *(u32 *)(record + 0x54) = 0x0u; *(u32 *)(record + 0x58) = 0x0u; }
u32 fn_001b3538(const u8 *record) { return 0x0u; }
void fn_001c5164(u8 *record) { *(u32 *)(record + 0x178) = 0x21u; }
void fn_001c6d34(u8 *record) { *(u32 *)(record) = ~0x0u; *(u32 *)(record + 0x4) = ~0x0u; }
void fn_001c6d44(u8 *record) { *(u32 *)(record) = ~0x0u; *(u32 *)(record + 0x4) = ~0x0u; *(u32 *)(record + 0x8) = ~0x0u; }
void fn_001d48e4(u8 *record) { *(u8 *)(record + 0x4) = 0xffu; }
void fn_001e189c(u8 *record) { *(u8 *)(record + 0x268) = 0x1u; }
void fn_001e7f80(u8 *record) { *(u8 *)(record + 0x3a8) = 0x0u; }
void fn_001f03d8(u8 *record) { *(u8 *)(record + 0xf91) = 0x1u; }
void fn_001f6464(u8 *record) { *(u8 *)(record + 0x58) = 0x1u; }
void fn_001f6470(u8 *record) { *(u8 *)(record + 0x58) = 0x0u; }
void fn_001fa2fc(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; *(u32 *)(record + 0xc) = 0x0u; }
void fn_001fb414(u8 *record) { *(u32 *)(record) = 0x0u; }
void fn_0023f034(u8 *record) { *(u32 *)(record + 0x4) = 0x0u; }
void fn_00251dcc(u8 *record) { *(u8 *)(record) = 0x0u; }
void fn_0025b2f8(u8 *record) { *(u8 *)(record + 0xa) = 0x0u; }
void fn_0025b35c(u8 *record) { *(u8 *)(record + 0x8) = 0x1u; }
void fn_0025b368(u8 *record) { *(u8 *)(record + 0xa) = 0x1u; }
void fn_0026f90c(u8 *record) { *(u8 *)(record + 0x8) = 0x1u; }
void fn_00291664(u8 *record) { *(u8 *)(record + 0x1d) = 0x1u; }
void fn_00295f78(u8 *record) { *(u32 *)(record + 0x2c8) = 0x0u; *(u32 *)(record + 0x2cc) = 0x0u; *(u32 *)(record + 0x2d0) = 0x0u; }
void fn_002a1a9c(u8 *record) { *(u32 *)(record + 0x4) = 0x0u; }
void fn_002a1aa8(u8 *record) { *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; }
void fn_002c2070(u8 *record) { *(u8 *)(record + 0xc0) = 0x2u; }
void fn_002c263c(u8 *record) { *(u8 *)(record + 0xc0) = 0x2u; }
void fn_002c2648(u8 *record) { *(u8 *)(record + 0xc0) = 0x4u; }
void fn_002c265c(u8 *record) { *(u8 *)(record + 0xc0) = 0x3u; }
void fn_002ccc34(u8 *record) { *(u8 *)(record + 0x5e) = 0x0u; }
u32 fn_002e40c8(const u8 *record) { *(u8 *)((const u8 *)(*(const u32 *)(record + 0x10)) + 0xd4) = *(const u8 *)(record + 0x25); return *(const u8 *)(record + 0x25); }
u32 fn_002f1d30(const u8 *record) { return 0x0u; }
u32 fn_002f215c(const u8 *record) { return 0x1u; }
void fn_002fdea0(u8 *record) { *(u32 *)(record + 0x48) = ~0x0u; }
u32 fn_002fdeac(u8 *record) { *(u32 *)(record + 0x18) = 0x0u; return 0x1u; }
void fn_00321574(u8 *record) { *(u32 *)(record + 0x28) = 0x0u; *(u32 *)(record + 0x2c) = 0x0u; }
void fn_00338bc8(u8 *record) { *(u8 *)(record + 0x94) = 0x1u; }
void fn_003403d0(u8 *record) { *(u32 *)(record + 0x30) = 0x0u; }
void fn_00368d34(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; *(u32 *)(record + 0xc) = 0x0u; *(u32 *)(record + 0x10) = 0x0u; }
void fn_0036ef48(u8 *record) { *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; *(u32 *)(record + 0xc) = 0x0u; *(u32 *)(record + 0x10) = 0x0u; *(u32 *)(record + 0x14) = 0x0u; *(u32 *)(record + 0x18) = 0x0u; *(u32 *)(record + 0x1c) = 0x0u; *(u32 *)(record + 0x20) = 0x0u; }
void fn_0037bec8(u8 *record) { *(u32 *)(record + 0x4) = 0x0u; }
void fn_003952f0(u8 *record) { *(u8 *)(record + 0x8) = 0x0u; }
void fn_0039536c(u8 *record) { *(u32 *)(record + 0x8) = 0x0u; *(u32 *)(record + 0xc) = 0x0u; *(u32 *)(record + 0x10) = 0x0u; }
void fn_003956e0(u8 *record) { *(u32 *)(record + 0x8) = 0x0u; }
void fn_00395754(u8 *record) { *(u32 *)(record + 0x18) = ~0x0u; }
void fn_003a1f5c(u8 *record) { *(u32 *)(record + 0xc) = 0x4u; }
void fn_003b9cc0(u8 *record) { *(u32 *)(record + 0x8) = 0x0u; }
void fn_003e889c(u8 *record) { *(u8 *)(record + 0x1c) = 0x0u; }
void fn_003e9870(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; }
void fn_003ef8e0(u8 *record) { *(u8 *)(record + 0x88) = 0x1u; }
void fn_003ef9e4(u8 *record) { *(u8 *)(record + 0x88) = 0x0u; }
void fn_003f01a8(u8 *record) { *(u32 *)(record + 0x8) = 0x0u; }
void fn_00401fb0(u8 *record) { *(u32 *)(record + 0xc) = 0x0u; }
void fn_00404edc(u8 *record) { *(u8 *)(record + 0x9d) = 0x1u; }
u32 fn_0041c6e4(const u8 *record) { return *(const u32 *)((const u8 *)(*(const u32 *)(record)) + 0x7c); }
void fn_00444134(u8 *record) { *(u8 *)(record) = 0x0u; }
void fn_0044eebc(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; *(u32 *)(record + 0xc) = 0x0u; *(u32 *)(record + 0x10) = 0x0u; }
void fn_00455d08(u8 *record) { *(u8 *)(record + 0x211) = 0x0u; }
void fn_0047687c(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; *(u32 *)(record + 0xc) = 0x0u; }
void fn_004b87b0(u8 *record) { *(u8 *)(record + 0x8) = 0x0u; }
u32 fn_004cae9c(u8 *record, u32 arg1) { *(u32 *)(record + 0x55c) = arg1; return 0x0u; }
void fn_004caea8(u8 *record) { *(u8 *)(record + 0x558) = 0x0u; }
u32 fn_004caeb4(u8 *record) { *(u8 *)(record + 0x558) = 0x1u; return 0x0u; }
void fn_004d0294(u8 *record) { *(u8 *)(record + 0x4f4) = 0x0u; }
void fn_004dedec(u8 *record) { *(u32 *)(record + 0x78) = 0x0u; *(u32 *)(record + 0x7c) = 0x0u; }
void fn_004e99d4(u8 *record) { *(u32 *)(record + 0x40) = 0x0u; }
void fn_004ea12c(u8 *record) { *(u32 *)(record + 0x2c) = 0x0u; }
void fn_004ed158(u8 *record) { *(u8 *)(record + 0x10) = 0x1u; }
u32 fn_004ed6f4(u8 *record, u32 arg1) { *(u16 *)(record + 0xc) = arg1; return 0x0u; }
void fn_004edb54(u8 *record) { *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; }
void fn_004eefec(u8 *record) { *(u32 *)(record + 0x38) = 0x0u; *(u32 *)(record + 0x3c) = 0x0u; }
void fn_004eeffc(u8 *record) { *(u32 *)(record + 0x38) = 0x0u; *(u32 *)(record + 0x3c) = 0x0u; *(u32 *)(record + 0x40) = 0x0u; *(u32 *)(record + 0x44) = 0x0u; }
void fn_004fe974(u8 *record) { *(u32 *)(record + 0xa8) = 0x0u; }
void fn_004ff7d8(u8 *record) { *(u8 *)(record + 0x4c) = 0x0u; }
void fn_00505cf4(u8 *record) { *(u32 *)(record + 0x6c) = 0x0u; }
void fn_0050bcc4(u8 *record) { *(u8 *)(record + 0x9) = 0x0u; }
void fn_0050bd10(u8 *record) { *(u8 *)(record + 0x8) = 0x0u; }
void fn_0050fc98(u8 *record) { *(u8 *)(record) = 0x1u; }
u32 fn_005213d8(u8 *record, u32 arg1) { *(u8 *)(record + 0x7) = arg1; return 0x0u; }
void fn_00537f44(u8 *record) { *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; *(u32 *)(record + 0xc) = 0x0u; *(u32 *)(record + 0x10) = 0x0u; }
void fn_005434c8(u8 *record) { *(u8 *)(record + 0x12c) = 0x0u; }
void fn_005582d8(u8 *record) { *(u32 *)(record + 0x14) = *(const u32 *)(record + 0xc); }
void fn_00559e34(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; }
void fn_005617e0(u8 *record) { *(u8 *)(record + 0x11) = 0x0u; }
void fn_00579d68(u8 *record) { *(u8 *)(record + 0x8) = 0x1u; }
void fn_005aeb2c(u8 *record) { *(u8 *)(record + 0x8) = 0x1u; }
void fn_005e6bb8(u8 *record) { *(u32 *)(record + 0x8) = 0x0u; }
void fn_00601670(u8 *record) { *(u8 *)(record + 0x8) = 0x1u; }
void fn_00604768(u8 *record) { *(u8 *)(record + 0x8) = 0x1u; }
void fn_006083b8(u8 *record) { *(u32 *)(record + 0x8) = 0x0u; }
void fn_0065942c(u8 *record) { *(u8 *)(record + 0xc) = 0x1u; }
void fn_0065945c(u8 *record) { *(u8 *)(record + 0xc) = 0x2u; }
void fn_00659468(u8 *record) { *(u8 *)(record + 0xc) = 0x3u; }
void fn_00659474(u8 *record) { *(u8 *)(record + 0xc) = 0x4u; }
u32 fn_0065c464(const u8 *record) { return 0x1u; }
u32 fn_0065c46c(const u8 *record) { return 0x2u; }
u32 fn_0065c4c0(const u8 *record) { return 0x3u; }
u32 fn_0065c520(const u8 *record) { return 0x2u; }
u32 fn_0065c528(const u8 *record) { return 0x4u; }
u32 fn_0065c5bc(const u8 *record) { return 0x5u; }
u32 fn_0065c660(const u8 *record) { return 0x6u; }
void fn_00662a1c(u8 *record) { *(u32 *)(record + 0x10) = 0x0u; *(u32 *)(record + 0x14) = 0x0u; *(u32 *)(record + 0x18) = 0x0u; *(u32 *)(record + 0x1c) = 0x0u; }
void fn_00664a8c(u8 *record) { *(u8 *)(record) = 0x0u; }
void fn_0066ddbc(u8 *record) { *(u8 *)(record + 0x38) = 0x0u; }
void fn_0066e130(u8 *record) { *(u8 *)(record + 0x4e) = 0x0u; }
void fn_0066e614(u8 *record) { *(u8 *)(record + 0x59) = 0x0u; }
void fn_0066ec18(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; *(u32 *)(record + 0xc) = 0x0u; *(u32 *)(record + 0x10) = 0x0u; *(u32 *)(record + 0x14) = 0x0u; }
void fn_00670f78(u8 *record) { *(u8 *)(record + 0xc0) = 0x0u; }
void fn_0067127c(u8 *record) { *(u8 *)(record + 0xc1) = 0x0u; }
void fn_00679ac8(u8 *record) { *(u32 *)(record + 0x64) = 0x0u; }
void fn_0067aa74(u8 *record) { *(u32 *)(record + 0x64) = 0x0u; }
void fn_0067b814(u8 *record) { *(u8 *)(record + 0x8c) = 0x0u; }
void fn_0067bc0c(u8 *record) { *(u8 *)(record + 0x8c) = 0x0u; }
void fn_0067bd54(u8 *record) { *(u8 *)(record + 0xb4) = 0x0u; }
void fn_0067f980(u8 *record) { *(u32 *)(record) = 0x0u; *(u32 *)(record + 0x4) = 0x0u; }
u32 fn_0069d8a4(const u8 *record) { return *(const u32 *)((const u8 *)(*(const u32 *)(record + 0x40))); }
u32 fn_006a8a04(const u8 *record) { return *(const u8 *)((const u8 *)(*(const u32 *)(record)) + 0x10); }
u32 fn_006b547c(const u8 *record) { return 0x1u; }
u32 fn_006b631c(const u8 *record) { return *(const u16 *)((const u8 *)(*(const u32 *)(record + 0x4)) + 0x2c); }
u32 fn_006bec34(const u8 *record) { return *(const s8 *)((const u8 *)(*(const u32 *)(record)) + 0x4a); }
u32 fn_006bec54(const u8 *record) { return *(const s8 *)((const u8 *)(*(const u32 *)(record)) + 0x48); }
u32 fn_006e63b8(const u8 *record) { return *(const u16 *)(record + 0x44); }
u32 fn_006eb2e4(const u8 *record) { return *(const u16 *)((const u8 *)(*(const u32 *)((const u8 *)(*(const u32 *)(record)) + 0x30)) + 0xa0); }
u32 fn_006eb2f4(const u8 *record) { return *(const u16 *)((const u8 *)(*(const u32 *)((const u8 *)(*(const u32 *)(record)) + 0x30)) + 0x28); }
u32 fn_006eb358(const u8 *record) { return *(const u16 *)((const u8 *)(*(const u32 *)((const u8 *)(*(const u32 *)(record)) + 0x30)) + 0x88); }
u32 fn_006eb368(const u8 *record) { return *(const u16 *)((const u8 *)(*(const u32 *)((const u8 *)(*(const u32 *)(record)) + 0x30)) + 0x70); }
u32 fn_006eb378(const u8 *record) { return *(const u16 *)((const u8 *)(*(const u32 *)((const u8 *)(*(const u32 *)(record)) + 0x30)) + 0x64); }
u32 fn_006eb388(const u8 *record) { return *(const u16 *)((const u8 *)(*(const u32 *)((const u8 *)(*(const u32 *)(record)) + 0x30)) + 0x7c); }
u32 fn_006ec94c(const u8 *record) { return *(const u32 *)((const u8 *)(*(const u32 *)((const u8 *)(*(const u32 *)(record + 0x4)))) + 0x14); }
u32 fn_006ec9f8(const u8 *record) { return *(const u16 *)((const u8 *)(*(const u32 *)((const u8 *)(*(const u32 *)(record + 0x4)))) + 0x12); }
u32 fn_006f69c4(const u8 *record) { return *(const u32 *)((const u8 *)(*(const u32 *)(record + 0x3c)) + 0x54); }
u32 fn_006f69d0(const u8 *record) { return *(const u32 *)((const u8 *)(*(const u32 *)(record + 0x3c)) + 0x40); }
u32 fn_006f69e8(const u8 *record) { return *(const u32 *)((const u8 *)(*(const u32 *)(record + 0x3c)) + 0x58); }
u32 fn_006f6a14(const u8 *record) { return *(const u32 *)((const u8 *)(*(const u32 *)(record + 0x3c)) + 0x3c); }
u32 fn_006f6a84(const u8 *record) { return *(const u32 *)((const u8 *)(*(const u32 *)(record + 0x3c)) + 0x50); }
u32 fn_0072946c(const u8 *record) { return ~0x0u; }
u32 fn_00729474(const u8 *record) { return ~0x0u; }
u32 fn_0072947c(const u8 *record) { return ~0x0u; }
u32 fn_00729484(const u8 *record) { return ~0x0u; }
u32 fn_00780890(const u8 *record) { return 0x10u; }
