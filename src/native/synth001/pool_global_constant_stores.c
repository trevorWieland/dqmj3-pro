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

/* Data addresses the functions below use as a base; the linker
 * defines each at the address its literal pool word holds. */
extern u8 g_008596e0[];
extern u8 g_00890354[];
extern u8 g_00890358[];
extern u8 g_0089035c[];
extern u8 g_00890360[];
extern u8 g_008909c8[];
extern u8 g_00890abc[];
extern u8 g_00890ae4[];
extern u8 g_00890e84[];
extern u8 g_00890f3c[];
extern u8 g_00890fc4[];
extern u8 g_008919f8[];
extern u8 g_00891a10[];
extern u8 g_00891a34[];
extern u8 g_00891bc0[];
extern u8 g_00891bc4[];
extern u8 g_00891e28[];
extern u8 g_0089290c[];
extern u8 g_0089292c[];
extern u8 g_00892b14[];
extern u8 g_00892b18[];
extern u8 g_00892b1c[];
extern u8 g_00892b2c[];
extern u8 g_00892cec[];
extern u8 g_00892cf0[];
extern u8 g_00892d98[];
extern u8 g_00892df0[];
extern u8 g_0089300c[];
extern u8 g_00893204[];
extern u8 g_00893278[];
extern u8 g_008932bc[];
extern u8 g_008933a8[];
extern u8 g_008937bc[];
extern u8 g_008937c8[];
extern u8 g_008937d8[];
extern u8 g_008937dc[];
extern u8 g_008937e4[];
extern u8 g_008939d8[];
extern u8 g_00893b1c[];
extern u8 g_00893bf0[];
extern u8 g_00893d20[];
extern u8 g_00893d24[];
extern u8 g_00893fac[];
extern u8 g_00894004[];
extern u8 g_00894020[];
extern u8 g_008941a4[];
extern u8 g_008941fc[];
extern u8 g_00894370[];
extern u8 g_008943ac[];
extern u8 g_00894404[];
extern u8 g_00894444[];
extern u8 g_00894490[];
extern u8 g_00894494[];
extern u8 g_008944a4[];
extern u8 g_008944c0[];
extern u8 g_00894678[];
extern u8 g_00894a9c[];
extern u8 g_00894b04[];
extern u8 g_00894b30[];
extern u8 g_00894b34[];
extern u8 g_00894b38[];
extern u8 g_00894d28[];
extern u8 g_00894eec[];
extern u8 g_008951b8[];
extern u8 g_008951bc[];
extern u8 g_008951d8[];
extern u8 g_008951e8[];
extern u8 g_00895ad8[];
extern u8 g_00895b54[];
extern u8 g_00895b64[];
extern u8 g_00895bcc[];
extern u8 g_00895be4[];
extern u8 g_00895be8[];
extern u8 g_00895c1c[];
extern u8 g_00895c20[];
extern u8 g_00895c24[];
extern u8 g_00895c98[];
extern u8 g_00895dec[];
extern u8 g_00895df0[];
extern u8 g_00895df4[];
extern u8 g_00895eec[];
extern u8 g_008963d8[];
extern u8 g_008963dc[];
extern u8 g_008963e0[];
extern u8 g_00896444[];
extern u8 g_00896954[];
extern u8 g_008969a8[];
extern u8 g_008969e0[];
extern u8 g_00896a84[];
extern u8 g_00896a94[];
extern u8 g_00896ad4[];
extern u8 g_00896fe0[];
extern u8 g_00896fe4[];
extern u8 g_00896fe8[];
extern u8 g_00896fec[];
extern u8 g_00897008[];
extern u8 g_0089700c[];
extern u8 g_00897040[];
extern u8 g_00897044[];
extern u8 g_00897048[];
extern u8 g_0089704c[];
extern u8 g_00897100[];
extern u8 g_00897134[];
extern u8 g_00897158[];
extern u8 g_008971bc[];
extern u8 g_008977b4[];
extern u8 g_00897898[];
extern u8 g_008981ac[];
extern u8 g_00898f50[];
extern u8 g_00898fe4[];
extern u8 g_0089914c[];
extern u8 g_00899224[];
extern u8 g_0089a83c[];
extern u8 g_0089a840[];
extern u8 g_0089a844[];
extern u8 g_0089a848[];
extern u8 g_0089a84c[];
extern u8 g_0089a850[];
extern u8 g_0089a924[];
extern u8 g_0089a928[];
extern u8 g_0089a92c[];
extern u8 g_0089a930[];
extern u8 g_0089a934[];
extern u8 g_0089a93c[];
extern u8 g_008bf788[];
extern u8 g_008bfb34[];
extern u8 g_008c03a8[];
extern u8 g_008c03ac[];
extern u8 g_008c03b0[];
extern u8 g_008c03b4[];
extern u8 g_008c0440[];
extern u8 g_008c044c[];
extern u8 g_008c0450[];
extern u8 g_008c0454[];
extern u8 g_008c0458[];
extern u8 g_008c045c[];
extern u8 g_008c0460[];
extern u8 g_008c05d0[];
extern u8 g_008c05fc[];
extern u8 g_008c33d0[];
extern u8 g_008c33d4[];
extern u8 g_008c33d8[];
extern u8 g_008c33dc[];
extern u8 g_008c33e0[];
extern u8 g_008c33e4[];
extern u8 g_008c33e8[];
extern u8 g_008c33ec[];
extern u8 g_008c33f0[];
extern u8 g_008c33f4[];
extern u8 g_008c33f8[];
extern u8 g_008c33fc[];
extern u8 g_008c3400[];
extern u8 g_008c3404[];
extern u8 g_008c3408[];
extern u8 g_008c340c[];
extern u8 g_008c3588[];
extern u8 g_008c35b0[];
extern u8 g_008c3c4c[];
extern u8 g_008c3c54[];
extern u8 g_008c3c58[];
extern u8 g_008c3c5c[];
extern u8 g_008c3c60[];
extern u8 g_008c3c64[];
extern u8 g_008c3c68[];
extern u8 g_008c3cd0[];
extern u8 g_008c3cd4[];
extern u8 g_008c3d2c[];
extern u8 g_008c3d30[];
extern u8 g_008c3d34[];
extern u8 g_008c3d38[];
extern u8 g_008c3d48[];

void fn_006ff600(void) { volatile u32 *p = (volatile u32 *)0x8c33dcu; p[0] = (u32)g_0089a850; }

void fn_006ff84c(void) { volatile u32 *p = (volatile u32 *)0x897898u; p[0] = 0xe7e3ffffu; }

void fn_00700228(void) { volatile u32 *p = (volatile u32 *)0x8c3d48u; p[0] = 0xffffffffu; }

void fn_0070023c(void) { volatile u32 *p = (volatile u32 *)0x8c3c4cu; p[0] = (u32)g_0089a850; }

void fn_00700254(void) { volatile u32 *p = (volatile u32 *)0x8c33f4u; p[0] = (u32)g_0089a850; }

void fn_00700290(void) { volatile u32 *p = (volatile u32 *)0x89a928u; p[0] = (u32)g_0089a924; }

void fn_00700494(void) { volatile u32 *p = (volatile u32 *)0x8981acu; p[0] = (u32)g_0089a92c; }

void fn_007007a4(void) { volatile u32 *p = (volatile u32 *)0x89a844u; p[0] = (u32)g_0089a850; }

void fn_00700a80(void) { volatile u32 *p = (volatile u32 *)0x89a934u; p[0] = (u32)g_0089a924; }

void fn_00701898(void) { volatile u32 *p = (volatile u32 *)0x89a92cu; p[0] = (u32)g_0089a924; }

void fn_007018b0(void) { volatile u32 *p = (volatile u32 *)0x89a930u; p[0] = (u32)g_0089a924; }

void fn_007026e0(void) { volatile u32 *p = (volatile u32 *)0x89a83cu; p[0] = (u32)g_008c03ac; }

void fn_0070270c(void) { volatile u32 *p = (volatile u32 *)0x8c33f0u; p[0] = (u32)g_008c3404; }

void fn_00702724(void) { volatile u32 *p = (volatile u32 *)0x8c3d34u; p[0] = (u32)g_008c3404; }

void fn_00702810(void) { volatile u32 *p = (volatile u32 *)0x8c05d0u; p[0] = (u32)g_0089a924; }

void fn_00703264(void) { volatile u32 *p = (volatile u32 *)0x8c045cu; p[0] = (u32)g_008c3404; }

void fn_00703290(void) { volatile u32 *p = (volatile u32 *)0x8c3cd0u; p[0] = (u32)g_008c3cd4; }

void fn_00703304(void) { volatile u32 *p = (volatile u32 *)0x8c35b0u; p[0] = (u32)g_0089a93c; }

void fn_00703edc(void) { volatile u32 *p = (volatile u32 *)0x8bfb34u; p[0] = 0xe7e3ffffu; }

void fn_00705a4c(void) { volatile u32 *p = (volatile u32 *)0x8c03b0u; p[0] = (u32)g_008c33d4; }

void fn_00705a64(void) { volatile u32 *p = (volatile u32 *)0x8c3c58u; p[0] = (u32)g_008c045c; }

void fn_00705a90(void) { volatile u32 *p = (volatile u32 *)0x8c340cu; p[0] = (u32)g_008c3c4c; }

void fn_00705b74(void) { volatile u32 *p = (volatile u32 *)0x8c3d38u; p[0] = (u32)g_008596e0; }

void fn_00705bd0(void) { volatile u32 *p = (volatile u32 *)0x8c3588u; p[0] = (u32)g_0089a93c; }

void fn_00705e8c(void) { volatile u32 *p = (volatile u32 *)0x891a10u; p[0] = (u32)g_00893204; }

void fn_007072d8(void) { volatile u32 *p = (volatile u32 *)0x8c03acu; p[0] = (u32)g_008c03a8; }

void fn_007072f0(void) { volatile u32 *p = (volatile u32 *)0x8c33d0u; p[0] = (u32)g_008c3c4c; }

void fn_00707308(void) { volatile u32 *p = (volatile u32 *)0x8c0460u; p[0] = (u32)g_008c33e8; }

void fn_00707488(void) { volatile u32 *p = (volatile u32 *)0x890360u; p[0] = (u32)g_00893204; }

void fn_007089b4(void) { volatile u32 *p = (volatile u32 *)0x8c03b4u; p[0] = (u32)g_008c33d8; }

void fn_007089cc(void) { volatile u32 *p = (volatile u32 *)0x8c33e0u; p[0] = (u32)g_008c3c4c; }

void fn_00708a0c(void) { volatile u32 *p = (volatile u32 *)0x8c33fcu; p[0] = (u32)g_008c33f4; }

void fn_00708a24(void) { volatile u32 *p = (volatile u32 *)0x8c3c5cu; p[0] = (u32)g_008c3404; }

void fn_00708a3c(void) { volatile u32 *p = (volatile u32 *)0x8c3408u; p[0] = (u32)g_008c33f4; }

void fn_00708a54(void) { volatile u32 *p = (volatile u32 *)0x89a850u; p[0] = (u32)g_008c045c; }

void fn_00708aec(void) { volatile u32 *p = (volatile u32 *)0x8c05fcu; p[0] = (u32)g_0089a93c; }

void fn_00708dcc(void) { volatile u32 *p = (volatile u32 *)0x890fc4u; p[0] = (u32)g_00893204; }

void fn_00708f50(void) { volatile u32 *p = (volatile u32 *)0x89290cu; p[0] = (u32)g_00893204; }

void fn_00709044(void) { volatile u32 *p = (volatile u32 *)0x8932bcu; p[0] = (u32)g_00893278; }

void fn_00709920(void) { volatile u32 *p = (volatile u32 *)0x896954u; p[0] = (u32)g_00893204; }

void fn_00709b40(void) { volatile u32 *p = (volatile u32 *)0x8977b4u; p[0] = (u32)g_00893204; }

void fn_0070a2f0(void) { volatile u32 *p = (volatile u32 *)0x890ae4u; p[0] = (u32)g_00893204; }

void fn_0070c050(void) { volatile u32 *p = (volatile u32 *)0x8c33e4u; p[0] = (u32)g_008c3c4c; }

void fn_0070c068(void) { volatile u32 *p = (volatile u32 *)0x8c33f8u; p[0] = (u32)g_0089a850; }

void fn_0070cb5c(void) { volatile u32 *p = (volatile u32 *)0x8933a8u; p[0] = (u32)g_00893278; }

void fn_0070cdcc(void) { volatile u32 *p = (volatile u32 *)0x8951bcu; p[0] = (u32)g_00894678; }

void fn_0070d97c(void) { volatile u32 *p = (volatile u32 *)0x8bf788u; p[0] = (u32)g_008c33ec; }

void fn_0070d9a8(void) { volatile u32 *p = (volatile u32 *)0x8c3c64u; p[0] = (u32)g_008c3d34; }

void fn_0070f900(void) { volatile u32 *p = (volatile u32 *)0x8c33d8u; p[0] = (u32)g_008c33d4; }

void fn_0070f974(void) { volatile u32 *p = (volatile u32 *)0x8c3c54u; p[0] = (u32)g_008c3d2c; }

void fn_0070f98c(void) { volatile u32 *p = (volatile u32 *)0x8c0458u; p[0] = (u32)g_008c044c; }

void fn_0070f9fc(void) { volatile u32 *p = (volatile u32 *)0x890f3cu; p[0] = (u32)g_00894678; }

void fn_0070fb7c(void) { volatile u32 *p = (volatile u32 *)0x8909c8u; p[0] = (u32)g_00893204; }

void fn_007105e4(void) { volatile u32 *p = (volatile u32 *)0x8937c8u; p[0] = (u32)g_00893278; }

void fn_00711328(void) { volatile u32 *p = (volatile u32 *)0x895c98u; p[0] = (u32)g_00894678; }

void fn_00711494(void) { volatile u32 *p = (volatile u32 *)0x8c3d30u; p[0] = (u32)g_008c3404; }

void fn_00711754(void) { volatile u32 *p = (volatile u32 *)0x891e28u; p[0] = (u32)g_00894678; }

void fn_00711e60(void) { volatile u32 *p = (volatile u32 *)0x8937bcu; p[0] = (u32)g_00893278; }

void fn_00711e78(void) { volatile u32 *p = (volatile u32 *)0x8937d8u; p[0] = (u32)g_00893278; }

void fn_00711f08(void) { volatile u32 *p = (volatile u32 *)0x8943acu; p[0] = (u32)g_00894678; }

void fn_00711f20(void) { volatile u32 *p = (volatile u32 *)0x894404u; p[0] = (u32)g_00894678; }

void fn_007120a0(void) { volatile u32 *p = (volatile u32 *)0x894eecu; p[0] = (u32)g_00894678; }

void fn_00712130(void) { volatile u32 *p = (volatile u32 *)0x895df4u; p[0] = (u32)g_00893b1c; }

void fn_00714280(void) { volatile u32 *p = (volatile u32 *)0x8963dcu; p[0] = (u32)g_00894678; }

void fn_00714310(void) { volatile u32 *p = (volatile u32 *)0x8963e0u; p[0] = (u32)g_008963d8; }

void fn_0071572c(void) { volatile u32 *p = (volatile u32 *)0x89a840u; p[0] = (u32)g_008c044c; }

void fn_00716158(void) { volatile u32 *p = (volatile u32 *)0x893d20u; p[0] = (u32)g_00894678; }

void fn_007161e8(void) { volatile u32 *p = (volatile u32 *)0x894020u; p[0] = (u32)g_008951bc; }

void fn_00716200(void) { volatile u32 *p = (volatile u32 *)0x895b54u; p[0] = (u32)g_00893b1c; }

void fn_00717538(void) { volatile u32 *p = (volatile u32 *)0x895c20u; p[0] = (u32)g_00894678; }

void fn_00717e54(void) { volatile u32 *p = (volatile u32 *)0x890e84u; p[0] = (u32)g_00894678; }

void fn_00718750(void) { volatile u32 *p = (volatile u32 *)0x890abcu; p[0] = (u32)g_00894678; }

void fn_00718858(void) { volatile u32 *p = (volatile u32 *)0x894444u; p[0] = (u32)g_00894678; }

void fn_00718870(void) { volatile u32 *p = (volatile u32 *)0x895b64u; p[0] = (u32)g_00894678; }

void fn_00719988(void) { volatile u32 *p = (volatile u32 *)0x89a84cu; p[0] = (u32)g_008c0440; }

void fn_007199a0(void) { volatile u32 *p = (volatile u32 *)0x8c3c68u; p[0] = (u32)g_008c33d8; }

void fn_0071a7c4(void) { volatile u32 *p = (volatile u32 *)0x8941a4u; p[0] = (u32)g_00894678; }

void fn_0071a944(void) { volatile u32 *p = (volatile u32 *)0x895ad8u; p[0] = (u32)g_008951bc; }

void fn_0071ba8c(void) { volatile u32 *p = (volatile u32 *)0x898fe4u; p[0] = (u32)g_00893204; }

void fn_0071bb44(void) { volatile u32 *p = (volatile u32 *)0x89a848u; p[0] = (u32)g_008c044c; }

void fn_0071bb5c(void) { volatile u32 *p = (volatile u32 *)0x8c3400u; p[0] = (u32)g_008c3404; }

void fn_0071bb74(void) { volatile u32 *p = (volatile u32 *)0x8c3c60u; p[0] = (u32)g_008c3d2c; }

void fn_0071bb8c(void) { volatile u32 *p = (volatile u32 *)0x892cecu; p[0] = (u32)g_00894678; }

void fn_0071c82c(void) { volatile u32 *p = (volatile u32 *)0x894370u; p[0] = (u32)g_00894678; }

void fn_0071c844(void) { volatile u32 *p = (volatile u32 *)0x893bf0u; p[0] = (u32)g_00894678; }

void fn_0071c8d4(void) { volatile u32 *p = (volatile u32 *)0x894490u; p[0] = (u32)g_00894678; }

void fn_0071c964(void) { volatile u32 *p = (volatile u32 *)0x894d28u; p[0] = (u32)g_008951bc; }

void fn_0071d50c(void) { volatile u32 *p = (volatile u32 *)0x897134u; p[0] = (u32)g_00893b1c; }

void fn_0071d59c(void) { volatile u32 *p = (volatile u32 *)0x895c24u; p[0] = (u32)g_00894678; }

void fn_0071d758(void) { volatile u32 *p = (volatile u32 *)0x8c0450u; p[0] = (u32)g_008c0440; }

void fn_0071dd28(void) { volatile u32 *p = (volatile u32 *)0x8939d8u; p[0] = (u32)g_00894678; }

void fn_0071dd40(void) { volatile u32 *p = (volatile u32 *)0x893d24u; p[0] = (u32)g_008963d8; }

void fn_0071dfb0(void) { volatile u32 *p = (volatile u32 *)0x8951b8u; p[0] = (u32)g_008951d8; }

void fn_0071e040(void) { volatile u32 *p = (volatile u32 *)0x8951e8u; p[0] = (u32)g_008951bc; }

void fn_0071e7ec(void) { volatile u32 *p = (volatile u32 *)0x896a84u; p[0] = (u32)g_00894d28; }

void fn_0071f264(void) { volatile u32 *p = (volatile u32 *)0x8963d8u; p[0] = (u32)g_00893b1c; }

void fn_0071f2f4(void) { volatile u32 *p = (volatile u32 *)0x894b30u; p[0] = (u32)g_00894678; }

void fn_0071f30c(void) { volatile u32 *p = (volatile u32 *)0x89300cu; p[0] = (u32)g_00894678; }

void fn_0071f9ec(void) { volatile u32 *p = (volatile u32 *)0x897040u; p[0] = (u32)g_00897134; }

void fn_0071faf4(void) { volatile u32 *p = (volatile u32 *)0x895c1cu; p[0] = (u32)g_00894678; }

void fn_0071fcc4(void) { volatile u32 *p = (volatile u32 *)0x890354u; p[0] = (u32)g_00890358; }

void fn_0071fcdc(void) { volatile u32 *p = (volatile u32 *)0x890358u; p[0] = (u32)g_00895eec; }

void fn_00720580(void) { volatile u32 *p = (volatile u32 *)0x8937dcu; p[0] = (u32)g_008937bc; }

void fn_00720598(void) { volatile u32 *p = (volatile u32 *)0x8937e4u; p[0] = (u32)g_008937bc; }

void fn_00720d98(void) { volatile u32 *p = (volatile u32 *)0x8969a8u; p[0] = (u32)g_00894678; }

void fn_00720db0(void) { volatile u32 *p = (volatile u32 *)0x8969e0u; p[0] = (u32)g_00894678; }

void fn_00720e40(void) { volatile u32 *p = (volatile u32 *)0x896a94u; p[0] = (u32)g_00894678; }

void fn_00720f34(void) { volatile u32 *p = (volatile u32 *)0x897048u; p[0] = (u32)g_00897134; }

void fn_00721280(void) { volatile u32 *p = (volatile u32 *)0x89035cu; p[0] = (u32)g_00890358; }

void fn_007213d8(void) { volatile u32 *p = (volatile u32 *)0x8919f8u; p[0] = (u32)g_00894678; }

void fn_00721784(void) { volatile u32 *p = (volatile u32 *)0x894b34u; p[0] = (u32)g_00894678; }

void fn_0072179c(void) { volatile u32 *p = (volatile u32 *)0x8951d8u; p[0] = (u32)g_008951bc; }

void fn_00721f3c(void) { volatile u32 *p = (volatile u32 *)0x897008u; p[0] = (u32)g_00897134; }

void fn_00722184(void) { volatile u32 *p = (volatile u32 *)0x8c0454u; p[0] = (u32)g_008c0440; }

void fn_0072219c(void) { volatile u32 *p = (volatile u32 *)0x892df0u; p[0] = (u32)g_00894678; }

void fn_007224e4(void) { volatile u32 *p = (volatile u32 *)0x891bc0u; p[0] = (u32)g_00893b1c; }

void fn_00722754(void) { volatile u32 *p = (volatile u32 *)0x894004u; p[0] = (u32)g_00894678; }

void fn_0072276c(void) { volatile u32 *p = (volatile u32 *)0x894b04u; p[0] = (u32)g_00894678; }

void fn_00722784(void) { volatile u32 *p = (volatile u32 *)0x894b38u; p[0] = (u32)g_00894678; }

void fn_0072279c(void) { volatile u32 *p = (volatile u32 *)0x895be4u; p[0] = (u32)g_00893b1c; }

void fn_00722fa8(void) { volatile u32 *p = (volatile u32 *)0x892cf0u; p[0] = (u32)g_00894678; }

void fn_0072351c(void) { volatile u32 *p = (volatile u32 *)0x89292cu; p[0] = (u32)g_00894678; }

void fn_0072393c(void) { volatile u32 *p = (volatile u32 *)0x8941fcu; p[0] = (u32)g_00894678; }

void fn_00723954(void) { volatile u32 *p = (volatile u32 *)0x894494u; p[0] = (u32)g_008944c0; }

void fn_007239e4(void) { volatile u32 *p = (volatile u32 *)0x894a9cu; p[0] = (u32)g_00894678; }

void fn_007239fc(void) { volatile u32 *p = (volatile u32 *)0x895decu; p[0] = (u32)g_00893b1c; }

void fn_00723dd8(void) { volatile u32 *p = (volatile u32 *)0x896fe0u; p[0] = (u32)g_00897134; }

void fn_007243f4(void) { volatile u32 *p = (volatile u32 *)0x895bccu; p[0] = (u32)g_00894678; }

void fn_00724cdc(void) { volatile u32 *p = (volatile u32 *)0x895be8u; p[0] = (u32)g_00893b1c; }

void fn_00724edc(void) { volatile u32 *p = (volatile u32 *)0x896fecu; p[0] = (u32)g_00897134; }

void fn_007256c4(void) { volatile u32 *p = (volatile u32 *)0x891a34u; p[0] = (u32)g_008951bc; }

void fn_00725a9c(void) { volatile u32 *p = (volatile u32 *)0x897044u; p[0] = (u32)g_00897134; }

void fn_00725c7c(void) { volatile u32 *p = (volatile u32 *)0x899224u; p[0] = (u32)g_00894678; }

void fn_00725e4c(void) { volatile u32 *p = (volatile u32 *)0x891bc4u; p[0] = (u32)g_00894678; }

void fn_00725fb4(void) { volatile u32 *p = (volatile u32 *)0x892b2cu; p[0] = (u32)g_008951bc; }

void fn_007266a4(void) { volatile u32 *p = (volatile u32 *)0x89914cu; p[0] = (u32)g_00893d24; }

void fn_00726798(void) { volatile u32 *p = (volatile u32 *)0x892d98u; p[0] = (u32)g_00894678; }

void fn_00726828(void) { volatile u32 *p = (volatile u32 *)0x892b18u; p[0] = (u32)g_008951bc; }

void fn_00726840(void) { volatile u32 *p = (volatile u32 *)0x892b1cu; p[0] = (u32)g_008951bc; }

void fn_007268d0(void) { volatile u32 *p = (volatile u32 *)0x893facu; p[0] = (u32)g_00894678; }

void fn_007268e8(void) { volatile u32 *p = (volatile u32 *)0x896444u; p[0] = (u32)g_00894678; }

void fn_00726978(void) { volatile u32 *p = (volatile u32 *)0x895df0u; p[0] = (u32)g_00893b1c; }

void fn_00726990(void) { volatile u32 *p = (volatile u32 *)0x896ad4u; p[0] = (u32)g_00894678; }

void fn_00726a20(void) { volatile u32 *p = (volatile u32 *)0x897100u; p[0] = (u32)g_00897134; }

void fn_00727098(void) { volatile u32 *p = (volatile u32 *)0x8944a4u; p[0] = (u32)g_00894678; }

void fn_00727128(void) { volatile u32 *p = (volatile u32 *)0x896fe4u; p[0] = (u32)g_00897134; }

void fn_007276e8(void) { volatile u32 *p = (volatile u32 *)0x892b14u; p[0] = (u32)g_008951bc; }

void fn_00727c28(void) { volatile u32 *p = (volatile u32 *)0x89700cu; p[0] = (u32)g_00897134; }

void fn_00727c40(void) { volatile u32 *p = (volatile u32 *)0x89704cu; p[0] = (u32)g_00897134; }

void fn_00728000(void) { volatile u32 *p = (volatile u32 *)0x8971bcu; p[0] = (u32)g_00897134; }

void fn_007287b0(void) { volatile u32 *p = (volatile u32 *)0x898f50u; p[0] = (u32)g_00894678; }

void fn_00728a68(void) { volatile u32 *p = (volatile u32 *)0x896fe8u; p[0] = (u32)g_00897134; }

void fn_00728ff0(void) { volatile u32 *p = (volatile u32 *)0x897158u; p[0] = (u32)g_00897134; }
