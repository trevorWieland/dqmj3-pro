#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893a98; extern undefined4 DAT_00893a9c; extern undefined4 DAT_00893aa0; extern undefined4 DAT_00893ad4;
extern undefined4 DAT_00893ad8; extern undefined4 DAT_00893adc; extern undefined4 DAT_00893b64; extern undefined4 DAT_00894460;
extern undefined4 DAT_00894464; extern undefined4 DAT_00894468; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894fe0;
extern undefined4 DAT_00894fe4; extern undefined4 DAT_00894fe5; extern undefined4 DAT_00894fe6; extern undefined4 DAT_00894fe7;
extern undefined4 DAT_00894fe8; extern undefined4 DAT_00894fe9; extern undefined4 DAT_00894fea; extern undefined4 DAT_00894feb;
extern undefined4 DAT_00894fec; extern undefined4 DAT_00894fed; extern undefined4 DAT_00894fee; extern undefined4 DAT_00894fef;
extern undefined4 DAT_00894ff0; extern undefined4 DAT_00894ff1; extern undefined4 DAT_00894ff2; extern undefined4 DAT_00894ff3;
extern undefined4 DAT_00894ff4; extern undefined4 DAT_00894ff5; extern undefined4 DAT_00894ff6; extern undefined4 DAT_00894ff7;
extern undefined4 DAT_00894ff8; extern undefined4 DAT_00894ff9; extern undefined4 DAT_00894ffa; extern undefined4 DAT_00894ffb;
extern undefined4 DAT_00894ffc; extern undefined4 DAT_00894ffd; extern undefined4 DAT_00894ffe; extern undefined4 DAT_00894fff;
extern undefined4 DAT_00895000; extern undefined4 DAT_00895001; extern undefined4 DAT_00895002; extern undefined4 DAT_00895003;
extern undefined4 DAT_00895004; extern undefined4 DAT_00895005; extern undefined4 DAT_00895006; extern undefined4 DAT_00895007;
extern undefined4 DAT_00895008; extern undefined4 DAT_0089500c; extern undefined4 DAT_00895040; extern undefined4 DAT_00895044;
extern undefined4 DAT_00895045; extern undefined4 DAT_00895046; extern undefined4 DAT_00895047; extern undefined4 DAT_00895048;
extern undefined4 DAT_00895049; extern undefined4 DAT_0089504a; extern undefined4 DAT_0089504b; extern undefined4 DAT_0089504c;
extern undefined4 DAT_0089504d; extern undefined4 DAT_0089504e; extern undefined4 DAT_0089504f; extern undefined4 DAT_00895050;
extern undefined4 DAT_00895051; extern undefined4 DAT_00895052; extern undefined4 DAT_00895053; extern undefined4 DAT_00895054;
extern undefined4 DAT_00895055; extern undefined4 DAT_00895056; extern undefined4 DAT_00895057; extern undefined4 DAT_00895058;
extern undefined4 DAT_00895059; extern undefined4 DAT_0089505a; extern undefined4 DAT_0089505b; extern undefined4 DAT_0089505c;
extern undefined4 DAT_0089505d; extern undefined4 DAT_0089505e; extern undefined4 DAT_0089505f; extern undefined4 DAT_00895060;
extern undefined4 DAT_00895061; extern undefined4 DAT_00895062; extern undefined4 DAT_00895063; extern undefined4 DAT_00895064;
extern undefined4 DAT_00895065; extern undefined4 DAT_00895066; extern undefined4 DAT_00895067; extern undefined4 DAT_00895068;
extern undefined4 DAT_0089506c; extern undefined4 DAT_008950b4; extern undefined4 DAT_008950e4; extern undefined4 DAT_008951fc;
extern undefined4 DAT_008953e0; extern undefined4 DAT_008953e4; extern undefined4 DAT_008953e5; extern undefined4 DAT_008953e6;
extern undefined4 DAT_008953e7; extern undefined4 DAT_008953e8; extern undefined4 DAT_008953e9; extern undefined4 DAT_008953ea;
extern undefined4 DAT_008953eb; extern undefined4 DAT_008953ec; extern undefined4 DAT_008953ed; extern undefined4 DAT_008953ee;
extern undefined4 DAT_008953ef; extern undefined4 DAT_008953f0; extern undefined4 DAT_008953f1; extern undefined4 DAT_008953f2;
extern undefined4 DAT_008953f3; extern undefined4 DAT_008953f4; extern undefined4 DAT_008953f5; extern undefined4 DAT_008953f6;
extern undefined4 DAT_008953f7; extern undefined4 DAT_008953f8; extern undefined4 DAT_008953f9; extern undefined4 DAT_008953fa;
extern undefined4 DAT_008953fb; extern undefined4 DAT_008953fc; extern undefined4 DAT_008953fd; extern undefined4 DAT_008953fe;
extern undefined4 DAT_008953ff; extern undefined4 DAT_00895400; extern undefined4 DAT_00895401; extern undefined4 DAT_00895402;
extern undefined4 DAT_00895403; extern undefined4 DAT_00895404; extern undefined4 DAT_00895405; extern undefined4 DAT_00895406;
extern undefined4 DAT_00895407; extern undefined4 DAT_00895408; extern undefined4 DAT_0089540c; extern undefined4 DAT_00895458;
extern undefined4 DAT_008956c8; extern undefined4 DAT_00895840; extern undefined4 DAT_00895844; extern undefined4 DAT_00895848;
extern undefined4 DAT_00895b18; extern undefined4 DAT_00895b1c; extern undefined4 DAT_00895b20; extern undefined4 DAT_00895c9c;
extern undefined4 DAT_00895ca0; extern undefined4 DAT_00896508; extern undefined4 DAT_0089650c; extern undefined4 DAT_00896510;
extern undefined4 DAT_00896aa8; extern undefined4 DAT_00896aac; extern undefined4 DAT_00896ab0; extern undefined4 DAT_00896ab4;
extern undefined4 DAT_00896b8c; extern undefined4 DAT_00896b90; extern undefined4 DAT_00896b94; extern undefined4 DAT_0089729c;
extern undefined4 DAT_008972a0; extern undefined4 DAT_008972a4; extern undefined4 DAT_008972a8; extern undefined4 DAT_00898968;
extern undefined4 DAT_0089896c; extern undefined4 DAT_00898970; extern undefined4 DAT_008cab10; extern undefined4 DAT_008cab14;
extern undefined4 DAT_008cab18; extern undefined4 DAT_008cab1c; extern undefined4 DAT_008cab20; extern undefined4 DAT_008cab24;
extern undefined4 DAT_008cab40; extern undefined4 DAT_008cab44; extern undefined4 DAT_008cab48; extern undefined4 DAT_008cab4c;
extern undefined4 DAT_008cab50; extern undefined4 DAT_008cab54; extern undefined4 DAT_008cb300; extern undefined4 DAT_008cb304;
extern undefined4 DAT_008cb308; extern undefined4 DAT_008cb30c; extern undefined4 DAT_008cb310; extern undefined4 DAT_008cb314;
extern undefined4 DAT_008cba44; extern undefined4 DAT_008cba48; extern undefined4 DAT_008cba4c; extern undefined4 DAT_008cba50;
extern undefined4 DAT_008cba54; extern undefined4 DAT_008cba58; extern undefined4 DAT_008cba74; extern undefined4 DAT_008cba78;
extern undefined4 DAT_008cba7c; extern undefined4 DAT_008cba80; extern undefined4 DAT_008cba84; extern undefined4 DAT_008cba88;
extern undefined4 DAT_008cbdec; extern undefined4 DAT_008cbdf0; extern undefined4 DAT_008cbdf4; extern undefined4 DAT_008cbdf8;
extern undefined4 DAT_008cbdfc; extern undefined4 DAT_008cbe00; extern undefined4 DAT_008cc0f8; extern undefined4 DAT_008cc0fc;
extern undefined4 DAT_008cc100; extern undefined4 DAT_008cc104; extern undefined4 DAT_008cc108; extern undefined4 DAT_008cc10c;
extern undefined4 DAT_008cc248; extern undefined4 DAT_008cc24c; extern undefined4 DAT_008cc250; extern undefined4 DAT_008cc254;
extern undefined4 DAT_008cc258; extern undefined4 DAT_008cc25c; extern undefined4 DAT_008cc454; extern undefined4 DAT_008cc458;
extern undefined4 DAT_008cc45c; extern undefined4 DAT_008cc460; extern undefined4 DAT_008cc464; extern undefined4 DAT_008cc468;
extern undefined4 DAT_008cca90; extern undefined4 DAT_008cca94; extern undefined4 DAT_008cca98; extern undefined4 DAT_008cca9c;
extern undefined4 DAT_008ccaa0; extern undefined4 DAT_008ccaa4; extern undefined4 DAT_008ccfa0; extern undefined4 DAT_008ccfa4;
extern undefined4 DAT_008ccfa8; extern undefined4 DAT_008ccfac; extern undefined4 DAT_008ccfb0; extern undefined4 DAT_008ccfb4;
extern undefined4 DAT_008cd03c; extern undefined4 DAT_008cd040; extern undefined4 DAT_008cd044; extern undefined4 DAT_008cd048;
extern undefined4 DAT_008cd04c; extern undefined4 DAT_008cd050; extern undefined4 DAT_008cda94; extern undefined4 DAT_008cda98;
extern undefined4 DAT_008cda9c; extern undefined4 DAT_008cdaa0; extern undefined4 DAT_008cdaa4; extern undefined4 DAT_008cdaa8;
extern undefined4 DAT_008cdaac; extern undefined4 DAT_008cdab0; extern undefined4 DAT_008cdab4; extern undefined4 DAT_008cdab8;
extern undefined4 DAT_008cdabc; extern undefined4 DAT_008cdac0; extern undefined4 DAT_008d02a4; extern undefined4 DAT_008d02a8;
extern undefined4 DAT_008d02ac; extern undefined4 DAT_008d02b0; extern undefined4 DAT_008d02b4; extern undefined4 DAT_008d02b8;
