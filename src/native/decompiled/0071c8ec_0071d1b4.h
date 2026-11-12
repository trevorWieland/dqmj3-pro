#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893b28; extern undefined4 DAT_00893b3c; extern undefined4 DAT_00893b48; extern undefined4 DAT_00893b4c;
extern undefined4 DAT_00893b50; extern undefined4 DAT_00893b64; extern undefined4 DAT_00893ba4; extern undefined4 DAT_00893ba8;
extern undefined4 DAT_00893bac; extern undefined4 DAT_00893f78; extern undefined4 DAT_00893f7c; extern undefined4 DAT_00893f80;
extern undefined4 DAT_00893f84; extern undefined4 DAT_0089466c; extern undefined4 DAT_008946bc; extern undefined4 DAT_008946c0;
extern undefined4 DAT_008946c4; extern undefined4 DAT_00894c8c; extern undefined4 DAT_00894c90; extern undefined4 DAT_00894cf4;
extern undefined4 DAT_00894cf8; extern undefined4 DAT_00894d28; extern undefined4 DAT_00894d38; extern undefined4 DAT_00894d3c;
extern undefined4 DAT_00894d40; extern undefined4 DAT_00894d50; extern undefined4 DAT_00894da8; extern undefined4 DAT_00894ea4;
extern undefined4 DAT_00894ea8; extern undefined4 DAT_00894eac; extern undefined4 DAT_008951bc; extern undefined4 DAT_008951dc;
extern undefined4 DAT_008951e0; extern undefined4 DAT_008951e4; extern undefined4 DAT_008951fc; extern undefined4 DAT_00895274;
extern undefined4 DAT_00895278; extern undefined4 DAT_0089527c; extern undefined4 DAT_0089544c; extern undefined4 DAT_008954f0;
extern undefined4 DAT_008954f4; extern undefined4 DAT_008954f8; extern undefined4 DAT_00895554; extern undefined4 DAT_00895558;
extern undefined4 DAT_0089555c; extern undefined4 DAT_0089565c; extern undefined4 DAT_00895660; extern undefined4 DAT_00895664;
extern undefined4 DAT_00895665; extern undefined4 DAT_00895666; extern undefined4 DAT_00895667; extern undefined4 DAT_00895668;
extern undefined4 DAT_00895669; extern undefined4 DAT_0089566a; extern undefined4 DAT_0089566b; extern undefined4 DAT_0089566c;
extern undefined4 DAT_0089566d; extern undefined4 DAT_0089566e; extern undefined4 DAT_0089566f; extern undefined4 DAT_00895670;
extern undefined4 DAT_00895671; extern undefined4 DAT_00895672; extern undefined4 DAT_00895673; extern undefined4 DAT_00895674;
extern undefined4 DAT_00895675; extern undefined4 DAT_00895676; extern undefined4 DAT_00895677; extern undefined4 DAT_00895678;
extern undefined4 DAT_00895679; extern undefined4 DAT_0089567a; extern undefined4 DAT_0089567b; extern undefined4 DAT_0089567c;
extern undefined4 DAT_0089567d; extern undefined4 DAT_0089567e; extern undefined4 DAT_0089567f; extern undefined4 DAT_00895680;
extern undefined4 DAT_00895681; extern undefined4 DAT_00895682; extern undefined4 DAT_00895683; extern undefined4 DAT_00895684;
extern undefined4 DAT_00895688; extern undefined4 DAT_00895a18; extern undefined4 DAT_00895a1c; extern undefined4 DAT_00895a1d;
extern undefined4 DAT_00895a1e; extern undefined4 DAT_00895a1f; extern undefined4 DAT_00895a20; extern undefined4 DAT_00895a21;
extern undefined4 DAT_00895a22; extern undefined4 DAT_00895a23; extern undefined4 DAT_00895a24; extern undefined4 DAT_00895a25;
extern undefined4 DAT_00895a26; extern undefined4 DAT_00895a27; extern undefined4 DAT_00895a28; extern undefined4 DAT_00895a29;
extern undefined4 DAT_00895a2a; extern undefined4 DAT_00895a2b; extern undefined4 DAT_00895a2c; extern undefined4 DAT_00895a2d;
extern undefined4 DAT_00895a2e; extern undefined4 DAT_00895a2f; extern undefined4 DAT_00895a30; extern undefined4 DAT_00895a31;
extern undefined4 DAT_00895a32; extern undefined4 DAT_00895a33; extern undefined4 DAT_00895a34; extern undefined4 DAT_00895a35;
extern undefined4 DAT_00895a36; extern undefined4 DAT_00895a37; extern undefined4 DAT_00895a38; extern undefined4 DAT_00895a39;
extern undefined4 DAT_00895a3a; extern undefined4 DAT_00895a3b; extern undefined4 DAT_00895a3c; extern undefined4 DAT_00895a3d;
extern undefined4 DAT_00895a3e; extern undefined4 DAT_00895a3f; extern undefined4 DAT_00895a40; extern undefined4 DAT_00895a44;
extern undefined4 DAT_00895bd0; extern undefined4 DAT_00895bd4; extern undefined4 DAT_00895bd8; extern undefined4 DAT_008965a8;
extern undefined4 DAT_008965ac; extern undefined4 DAT_008cac00; extern undefined4 DAT_008cac04; extern undefined4 DAT_008cac08;
extern undefined4 DAT_008cac0c; extern undefined4 DAT_008cac10; extern undefined4 DAT_008cac14; extern undefined4 DAT_008cac90;
extern undefined4 DAT_008cac94; extern undefined4 DAT_008cac98; extern undefined4 DAT_008cac9c; extern undefined4 DAT_008caca0;
extern undefined4 DAT_008caca4; extern undefined4 DAT_008caf58; extern undefined4 DAT_008caf5c; extern undefined4 DAT_008caf60;
extern undefined4 DAT_008caf64; extern undefined4 DAT_008caf68; extern undefined4 DAT_008caf6c; extern undefined4 DAT_008cb588;
extern undefined4 DAT_008cb58c; extern undefined4 DAT_008cb590; extern undefined4 DAT_008cb594; extern undefined4 DAT_008cb598;
extern undefined4 DAT_008cb59c; extern undefined4 DAT_008cb720; extern undefined4 DAT_008cb724; extern undefined4 DAT_008cb728;
extern undefined4 DAT_008cb72c; extern undefined4 DAT_008cb730; extern undefined4 DAT_008cb734; extern undefined4 DAT_008cb7c8;
extern undefined4 DAT_008cb7cc; extern undefined4 DAT_008cb7d0; extern undefined4 DAT_008cb7d4; extern undefined4 DAT_008cb7d8;
extern undefined4 DAT_008cb7dc; extern undefined4 DAT_008cb810; extern undefined4 DAT_008cb814; extern undefined4 DAT_008cb818;
extern undefined4 DAT_008cb81c; extern undefined4 DAT_008cb820; extern undefined4 DAT_008cb824; extern undefined4 DAT_008cb960;
extern undefined4 DAT_008cb964; extern undefined4 DAT_008cb968; extern undefined4 DAT_008cb96c; extern undefined4 DAT_008cb970;
extern undefined4 DAT_008cb974; extern undefined4 DAT_008cbb7c; extern undefined4 DAT_008cbb80; extern undefined4 DAT_008cbb84;
extern undefined4 DAT_008cbb88; extern undefined4 DAT_008cbb8c; extern undefined4 DAT_008cbb90; extern undefined4 DAT_008cbc60;
extern undefined4 DAT_008cbc64; extern undefined4 DAT_008cbc68; extern undefined4 DAT_008cbc6c; extern undefined4 DAT_008cbc70;
extern undefined4 DAT_008cbc74; extern undefined4 DAT_008cbf00; extern undefined4 DAT_008cbf04; extern undefined4 DAT_008cbf08;
extern undefined4 DAT_008cbf0c; extern undefined4 DAT_008cbf10; extern undefined4 DAT_008cbf14; extern undefined4 DAT_008cbf30;
extern undefined4 DAT_008cbf34; extern undefined4 DAT_008cbf38; extern undefined4 DAT_008cbf3c; extern undefined4 DAT_008cbf40;
extern undefined4 DAT_008cbf44; extern undefined4 DAT_008cbfa8; extern undefined4 DAT_008cbfac; extern undefined4 DAT_008cbfb0;
extern undefined4 DAT_008cbfb4; extern undefined4 DAT_008cbfb8; extern undefined4 DAT_008cbfbc; extern undefined4 DAT_008cc200;
extern undefined4 DAT_008cc204; extern undefined4 DAT_008cc208; extern undefined4 DAT_008cc20c; extern undefined4 DAT_008cc210;
extern undefined4 DAT_008cc214; extern undefined4 DAT_008cc308; extern undefined4 DAT_008cc30c; extern undefined4 DAT_008cc310;
extern undefined4 DAT_008cc314; extern undefined4 DAT_008cc318; extern undefined4 DAT_008cc31c; extern undefined4 DAT_008ccaf0;
extern undefined4 DAT_008ccaf4; extern undefined4 DAT_008ccaf8; extern undefined4 DAT_008ccafc; extern undefined4 DAT_008ccb00;
extern undefined4 DAT_008ccb04;
