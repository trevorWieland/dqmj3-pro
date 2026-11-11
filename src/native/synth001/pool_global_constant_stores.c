/*
 * Fixed-address globals set to a constant.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below writes a constant into one fixed-address global. Both the
 *  address and the constant are words the original literal pool holds.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_006ff600(void) { volatile u32 *p = (volatile u32 *)0x8c33dcu; p[0] = 0x89a850u; }

void fn_006ff84c(void) { volatile u32 *p = (volatile u32 *)0x897898u; p[0] = 0xe7e3ffffu; }

void fn_00700228(void) { volatile u32 *p = (volatile u32 *)0x8c3d48u; p[0] = 0xffffffffu; }

void fn_0070023c(void) { volatile u32 *p = (volatile u32 *)0x8c3c4cu; p[0] = 0x89a850u; }

void fn_00700254(void) { volatile u32 *p = (volatile u32 *)0x8c33f4u; p[0] = 0x89a850u; }

void fn_007026e0(void) { volatile u32 *p = (volatile u32 *)0x89a83cu; p[0] = 0x8c03acu; }

void fn_00702810(void) { volatile u32 *p = (volatile u32 *)0x8c05d0u; p[0] = 0x89a924u; }

void fn_00703264(void) { volatile u32 *p = (volatile u32 *)0x8c045cu; p[0] = 0x8c3404u; }

void fn_00703304(void) { volatile u32 *p = (volatile u32 *)0x8c35b0u; p[0] = 0x89a93cu; }

void fn_00703edc(void) { volatile u32 *p = (volatile u32 *)0x8bfb34u; p[0] = 0xe7e3ffffu; }

void fn_00705a4c(void) { volatile u32 *p = (volatile u32 *)0x8c03b0u; p[0] = 0x8c33d4u; }

void fn_00705a64(void) { volatile u32 *p = (volatile u32 *)0x8c3c58u; p[0] = 0x8c045cu; }

void fn_00705b74(void) { volatile u32 *p = (volatile u32 *)0x8c3d38u; p[0] = 0x8596e0u; }

void fn_00705bd0(void) { volatile u32 *p = (volatile u32 *)0x8c3588u; p[0] = 0x89a93cu; }

void fn_00705e8c(void) { volatile u32 *p = (volatile u32 *)0x891a10u; p[0] = 0x893204u; }

void fn_007072f0(void) { volatile u32 *p = (volatile u32 *)0x8c33d0u; p[0] = 0x8c3c4cu; }

void fn_00707308(void) { volatile u32 *p = (volatile u32 *)0x8c0460u; p[0] = 0x8c33e8u; }

void fn_00707488(void) { volatile u32 *p = (volatile u32 *)0x890360u; p[0] = 0x893204u; }

void fn_007089b4(void) { volatile u32 *p = (volatile u32 *)0x8c03b4u; p[0] = 0x8c33d8u; }

void fn_007089cc(void) { volatile u32 *p = (volatile u32 *)0x8c33e0u; p[0] = 0x8c3c4cu; }

void fn_00708a24(void) { volatile u32 *p = (volatile u32 *)0x8c3c5cu; p[0] = 0x8c3404u; }

void fn_00708a54(void) { volatile u32 *p = (volatile u32 *)0x89a850u; p[0] = 0x8c045cu; }

void fn_00708aec(void) { volatile u32 *p = (volatile u32 *)0x8c05fcu; p[0] = 0x89a93cu; }

void fn_00708f50(void) { volatile u32 *p = (volatile u32 *)0x89290cu; p[0] = 0x893204u; }

void fn_00709920(void) { volatile u32 *p = (volatile u32 *)0x896954u; p[0] = 0x893204u; }

void fn_00709b40(void) { volatile u32 *p = (volatile u32 *)0x8977b4u; p[0] = 0x893204u; }

void fn_0070a2f0(void) { volatile u32 *p = (volatile u32 *)0x890ae4u; p[0] = 0x893204u; }

void fn_0070c050(void) { volatile u32 *p = (volatile u32 *)0x8c33e4u; p[0] = 0x8c3c4cu; }

void fn_0070c068(void) { volatile u32 *p = (volatile u32 *)0x8c33f8u; p[0] = 0x89a850u; }

void fn_0070cdcc(void) { volatile u32 *p = (volatile u32 *)0x8951bcu; p[0] = 0x894678u; }

void fn_0070d97c(void) { volatile u32 *p = (volatile u32 *)0x8bf788u; p[0] = 0x8c33ecu; }

void fn_0070f9fc(void) { volatile u32 *p = (volatile u32 *)0x890f3cu; p[0] = 0x894678u; }

void fn_0070fb7c(void) { volatile u32 *p = (volatile u32 *)0x8909c8u; p[0] = 0x893204u; }

void fn_00711328(void) { volatile u32 *p = (volatile u32 *)0x895c98u; p[0] = 0x894678u; }

void fn_00711494(void) { volatile u32 *p = (volatile u32 *)0x8c3d30u; p[0] = 0x8c3404u; }

void fn_00711754(void) { volatile u32 *p = (volatile u32 *)0x891e28u; p[0] = 0x894678u; }

void fn_00711e60(void) { volatile u32 *p = (volatile u32 *)0x8937bcu; p[0] = 0x893278u; }

void fn_00712130(void) { volatile u32 *p = (volatile u32 *)0x895df4u; p[0] = 0x893b1cu; }

void fn_00714280(void) { volatile u32 *p = (volatile u32 *)0x8963dcu; p[0] = 0x894678u; }

void fn_0071572c(void) { volatile u32 *p = (volatile u32 *)0x89a840u; p[0] = 0x8c044cu; }

void fn_00716158(void) { volatile u32 *p = (volatile u32 *)0x893d20u; p[0] = 0x894678u; }

void fn_007161e8(void) { volatile u32 *p = (volatile u32 *)0x894020u; p[0] = 0x8951bcu; }

void fn_00716200(void) { volatile u32 *p = (volatile u32 *)0x895b54u; p[0] = 0x893b1cu; }

void fn_00717538(void) { volatile u32 *p = (volatile u32 *)0x895c20u; p[0] = 0x894678u; }

void fn_00717e54(void) { volatile u32 *p = (volatile u32 *)0x890e84u; p[0] = 0x894678u; }

void fn_00718750(void) { volatile u32 *p = (volatile u32 *)0x890abcu; p[0] = 0x894678u; }

void fn_00718870(void) { volatile u32 *p = (volatile u32 *)0x895b64u; p[0] = 0x894678u; }

void fn_00719988(void) { volatile u32 *p = (volatile u32 *)0x89a84cu; p[0] = 0x8c0440u; }

void fn_0071a7c4(void) { volatile u32 *p = (volatile u32 *)0x8941a4u; p[0] = 0x894678u; }

void fn_0071a944(void) { volatile u32 *p = (volatile u32 *)0x895ad8u; p[0] = 0x8951bcu; }

void fn_0071ba8c(void) { volatile u32 *p = (volatile u32 *)0x898fe4u; p[0] = 0x893204u; }

void fn_0071bb44(void) { volatile u32 *p = (volatile u32 *)0x89a848u; p[0] = 0x8c044cu; }

void fn_0071bb8c(void) { volatile u32 *p = (volatile u32 *)0x892cecu; p[0] = 0x894678u; }

void fn_0071c844(void) { volatile u32 *p = (volatile u32 *)0x893bf0u; p[0] = 0x894678u; }

void fn_0071c964(void) { volatile u32 *p = (volatile u32 *)0x894d28u; p[0] = 0x8951bcu; }

void fn_0071d50c(void) { volatile u32 *p = (volatile u32 *)0x897134u; p[0] = 0x893b1cu; }

void fn_0071d59c(void) { volatile u32 *p = (volatile u32 *)0x895c24u; p[0] = 0x894678u; }

void fn_0071dd40(void) { volatile u32 *p = (volatile u32 *)0x893d24u; p[0] = 0x8963d8u; }

void fn_0071e7ec(void) { volatile u32 *p = (volatile u32 *)0x896a84u; p[0] = 0x894d28u; }

void fn_0071f264(void) { volatile u32 *p = (volatile u32 *)0x8963d8u; p[0] = 0x893b1cu; }

void fn_0071f2f4(void) { volatile u32 *p = (volatile u32 *)0x894b30u; p[0] = 0x894678u; }

void fn_0071f30c(void) { volatile u32 *p = (volatile u32 *)0x89300cu; p[0] = 0x894678u; }

void fn_0071faf4(void) { volatile u32 *p = (volatile u32 *)0x895c1cu; p[0] = 0x894678u; }

void fn_0071fcdc(void) { volatile u32 *p = (volatile u32 *)0x890358u; p[0] = 0x895eecu; }

void fn_00720d98(void) { volatile u32 *p = (volatile u32 *)0x8969a8u; p[0] = 0x894678u; }

void fn_00720db0(void) { volatile u32 *p = (volatile u32 *)0x8969e0u; p[0] = 0x894678u; }

void fn_00720e40(void) { volatile u32 *p = (volatile u32 *)0x896a94u; p[0] = 0x894678u; }

void fn_00721784(void) { volatile u32 *p = (volatile u32 *)0x894b34u; p[0] = 0x894678u; }

void fn_0072219c(void) { volatile u32 *p = (volatile u32 *)0x892df0u; p[0] = 0x894678u; }

void fn_007224e4(void) { volatile u32 *p = (volatile u32 *)0x891bc0u; p[0] = 0x893b1cu; }

void fn_00722754(void) { volatile u32 *p = (volatile u32 *)0x894004u; p[0] = 0x894678u; }

void fn_0072276c(void) { volatile u32 *p = (volatile u32 *)0x894b04u; p[0] = 0x894678u; }

void fn_0072279c(void) { volatile u32 *p = (volatile u32 *)0x895be4u; p[0] = 0x893b1cu; }

void fn_00722fa8(void) { volatile u32 *p = (volatile u32 *)0x892cf0u; p[0] = 0x894678u; }

void fn_0072351c(void) { volatile u32 *p = (volatile u32 *)0x89292cu; p[0] = 0x894678u; }

void fn_0072393c(void) { volatile u32 *p = (volatile u32 *)0x8941fcu; p[0] = 0x894678u; }

void fn_007239e4(void) { volatile u32 *p = (volatile u32 *)0x894a9cu; p[0] = 0x894678u; }

void fn_007239fc(void) { volatile u32 *p = (volatile u32 *)0x895decu; p[0] = 0x893b1cu; }

void fn_007243f4(void) { volatile u32 *p = (volatile u32 *)0x895bccu; p[0] = 0x894678u; }

void fn_00724cdc(void) { volatile u32 *p = (volatile u32 *)0x895be8u; p[0] = 0x893b1cu; }

void fn_007256c4(void) { volatile u32 *p = (volatile u32 *)0x891a34u; p[0] = 0x8951bcu; }

void fn_00725c7c(void) { volatile u32 *p = (volatile u32 *)0x899224u; p[0] = 0x894678u; }

void fn_00725e4c(void) { volatile u32 *p = (volatile u32 *)0x891bc4u; p[0] = 0x894678u; }

void fn_00725fb4(void) { volatile u32 *p = (volatile u32 *)0x892b2cu; p[0] = 0x8951bcu; }

void fn_007266a4(void) { volatile u32 *p = (volatile u32 *)0x89914cu; p[0] = 0x893d24u; }

void fn_00726798(void) { volatile u32 *p = (volatile u32 *)0x892d98u; p[0] = 0x894678u; }

void fn_00726828(void) { volatile u32 *p = (volatile u32 *)0x892b18u; p[0] = 0x8951bcu; }

void fn_00726840(void) { volatile u32 *p = (volatile u32 *)0x892b1cu; p[0] = 0x8951bcu; }

void fn_007268d0(void) { volatile u32 *p = (volatile u32 *)0x893facu; p[0] = 0x894678u; }

void fn_007268e8(void) { volatile u32 *p = (volatile u32 *)0x896444u; p[0] = 0x894678u; }

void fn_00726978(void) { volatile u32 *p = (volatile u32 *)0x895df0u; p[0] = 0x893b1cu; }

void fn_00726990(void) { volatile u32 *p = (volatile u32 *)0x896ad4u; p[0] = 0x894678u; }

void fn_007276e8(void) { volatile u32 *p = (volatile u32 *)0x892b14u; p[0] = 0x8951bcu; }

void fn_007287b0(void) { volatile u32 *p = (volatile u32 *)0x898f50u; p[0] = 0x894678u; }
