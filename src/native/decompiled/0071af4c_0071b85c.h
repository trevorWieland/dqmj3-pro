#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893a20; extern undefined4 DAT_00893a38; extern undefined4 DAT_00893a3c; extern undefined4 DAT_00893a40;
extern undefined4 DAT_00893b64; extern undefined4 DAT_00893b70; extern undefined4 DAT_00893b80; extern undefined4 DAT_00894038;
extern undefined4 DAT_00894108; extern undefined4 DAT_0089410c; extern undefined4 DAT_0089410d; extern undefined4 DAT_0089410e;
extern undefined4 DAT_0089410f; extern undefined4 DAT_00894110; extern undefined4 DAT_00894111; extern undefined4 DAT_00894112;
extern undefined4 DAT_00894113; extern undefined4 DAT_00894114; extern undefined4 DAT_00894115; extern undefined4 DAT_00894116;
extern undefined4 DAT_00894117; extern undefined4 DAT_00894118; extern undefined4 DAT_00894119; extern undefined4 DAT_0089411a;
extern undefined4 DAT_0089411b; extern undefined4 DAT_0089411c; extern undefined4 DAT_0089411d; extern undefined4 DAT_0089411e;
extern undefined4 DAT_0089411f; extern undefined4 DAT_00894120; extern undefined4 DAT_00894121; extern undefined4 DAT_00894122;
extern undefined4 DAT_00894123; extern undefined4 DAT_00894124; extern undefined4 DAT_00894125; extern undefined4 DAT_00894126;
extern undefined4 DAT_00894127; extern undefined4 DAT_00894128; extern undefined4 DAT_00894129; extern undefined4 DAT_0089412a;
extern undefined4 DAT_0089412b; extern undefined4 DAT_0089412c; extern undefined4 DAT_0089412d; extern undefined4 DAT_0089412e;
extern undefined4 DAT_0089412f; extern undefined4 DAT_00894130; extern undefined4 DAT_00894134; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894bb8; extern undefined4 DAT_00894bbc; extern undefined4 DAT_00894bc0; extern undefined4 DAT_00894da8;
extern undefined4 DAT_00894db4; extern undefined4 DAT_00894db8; extern undefined4 DAT_00894dbc; extern undefined4 DAT_008951fc;
extern undefined4 DAT_008952e4; extern undefined4 DAT_008952e8; extern undefined4 DAT_008952ec; extern undefined4 DAT_00895458;
extern undefined4 DAT_00895a0c; extern undefined4 DAT_00895a10; extern undefined4 DAT_00895a14; extern undefined4 DAT_00895e94;
extern undefined4 DAT_00895e98; extern undefined4 DAT_00895e99; extern undefined4 DAT_00895e9a; extern undefined4 DAT_00895e9b;
extern undefined4 DAT_00895e9c; extern undefined4 DAT_00895e9d; extern undefined4 DAT_00895e9e; extern undefined4 DAT_00895e9f;
extern undefined4 DAT_00895ea0; extern undefined4 DAT_00895ea1; extern undefined4 DAT_00895ea2; extern undefined4 DAT_00895ea3;
extern undefined4 DAT_00895ea4; extern undefined4 DAT_00895ea5; extern undefined4 DAT_00895ea6; extern undefined4 DAT_00895ea7;
extern undefined4 DAT_00895ea8; extern undefined4 DAT_00895ea9; extern undefined4 DAT_00895eaa; extern undefined4 DAT_00895eab;
extern undefined4 DAT_00895eac; extern undefined4 DAT_00895ead; extern undefined4 DAT_00895eae; extern undefined4 DAT_00895eaf;
extern undefined4 DAT_00895eb0; extern undefined4 DAT_00895eb1; extern undefined4 DAT_00895eb2; extern undefined4 DAT_00895eb3;
extern undefined4 DAT_00895eb4; extern undefined4 DAT_00895eb5; extern undefined4 DAT_00895eb6; extern undefined4 DAT_00895eb7;
extern undefined4 DAT_00895eb8; extern undefined4 DAT_00895eb9; extern undefined4 DAT_00895eba; extern undefined4 DAT_00895ebb;
extern undefined4 DAT_00895ebc; extern undefined4 DAT_00895ec0; extern undefined4 DAT_008963b8; extern undefined4 DAT_008963bc;
extern undefined4 DAT_008965e0; extern undefined4 DAT_008965e4; extern undefined4 DAT_008965e8; extern undefined4 DAT_0089663c;
extern undefined4 DAT_0089685c; extern undefined4 DAT_00896860; extern undefined4 DAT_00896864; extern undefined4 DAT_008968b4;
extern undefined4 DAT_008968b8; extern undefined4 DAT_008968bc; extern undefined4 DAT_008968ec; extern undefined4 DAT_008968f0;
extern undefined4 DAT_008968f4; extern undefined4 DAT_00896978; extern undefined4 DAT_0089697c; extern undefined4 DAT_00896980;
extern undefined4 DAT_00896c04; extern undefined4 DAT_00896c08; extern undefined4 DAT_00896c09; extern undefined4 DAT_00896c0a;
extern undefined4 DAT_00896c0b; extern undefined4 DAT_00896c0c; extern undefined4 DAT_00896c0d; extern undefined4 DAT_00896c0e;
extern undefined4 DAT_00896c0f; extern undefined4 DAT_00896c10; extern undefined4 DAT_00896c11; extern undefined4 DAT_00896c12;
extern undefined4 DAT_00896c13; extern undefined4 DAT_00896c14; extern undefined4 DAT_00896c15; extern undefined4 DAT_00896c16;
extern undefined4 DAT_00896c17; extern undefined4 DAT_00896c18; extern undefined4 DAT_00896c19; extern undefined4 DAT_00896c1a;
extern undefined4 DAT_00896c1b; extern undefined4 DAT_00896c1c; extern undefined4 DAT_00896c1d; extern undefined4 DAT_00896c1e;
extern undefined4 DAT_00896c1f; extern undefined4 DAT_00896c20; extern undefined4 DAT_00896c21; extern undefined4 DAT_00896c22;
extern undefined4 DAT_00896c23; extern undefined4 DAT_00896c24; extern undefined4 DAT_00896c25; extern undefined4 DAT_00896c26;
extern undefined4 DAT_00896c27; extern undefined4 DAT_00896c28; extern undefined4 DAT_00896c29; extern undefined4 DAT_00896c2a;
extern undefined4 DAT_00896c2b; extern undefined4 DAT_00896c2c; extern undefined4 DAT_00896c2d; extern undefined4 DAT_00896c2e;
extern undefined4 DAT_00896c2f; extern undefined4 DAT_00896c30; extern undefined4 DAT_00896c34; extern undefined4 DAT_008988f4;
extern undefined4 DAT_008988f8; extern undefined4 DAT_008caac8; extern undefined4 DAT_008caacc; extern undefined4 DAT_008caad0;
extern undefined4 DAT_008caad4; extern undefined4 DAT_008caad8; extern undefined4 DAT_008caadc; extern undefined4 DAT_008cafe8;
extern undefined4 DAT_008cafec; extern undefined4 DAT_008caff0; extern undefined4 DAT_008caff4; extern undefined4 DAT_008caff8;
extern undefined4 DAT_008caffc; extern undefined4 DAT_008cb690; extern undefined4 DAT_008cb694; extern undefined4 DAT_008cb698;
extern undefined4 DAT_008cb69c; extern undefined4 DAT_008cb6a0; extern undefined4 DAT_008cb6a4; extern undefined4 DAT_008cb888;
extern undefined4 DAT_008cb88c; extern undefined4 DAT_008cb890; extern undefined4 DAT_008cb894; extern undefined4 DAT_008cb898;
extern undefined4 DAT_008cb89c; extern undefined4 DAT_008cbcf0; extern undefined4 DAT_008cbcf4; extern undefined4 DAT_008cbcf8;
extern undefined4 DAT_008cbcfc; extern undefined4 DAT_008cbd00; extern undefined4 DAT_008cbd04; extern undefined4 DAT_008cc1e8;
extern undefined4 DAT_008cc1ec; extern undefined4 DAT_008cc1f0; extern undefined4 DAT_008cc1f4; extern undefined4 DAT_008cc1f8;
extern undefined4 DAT_008cc1fc; extern undefined4 DAT_008cc634; extern undefined4 DAT_008cc638; extern undefined4 DAT_008cc63c;
extern undefined4 DAT_008cc640; extern undefined4 DAT_008cc644; extern undefined4 DAT_008cc648; extern undefined4 DAT_008cc988;
extern undefined4 DAT_008cc98c; extern undefined4 DAT_008cc990; extern undefined4 DAT_008cc994; extern undefined4 DAT_008cc998;
extern undefined4 DAT_008cc99c; extern undefined4 DAT_008ccb50; extern undefined4 DAT_008ccb54; extern undefined4 DAT_008ccb58;
extern undefined4 DAT_008ccb5c; extern undefined4 DAT_008ccb60; extern undefined4 DAT_008ccb64; extern undefined4 DAT_008ccd60;
extern undefined4 DAT_008ccd64; extern undefined4 DAT_008ccd68; extern undefined4 DAT_008ccd6c; extern undefined4 DAT_008ccd70;
extern undefined4 DAT_008ccd74; extern undefined4 DAT_008ccdd8; extern undefined4 DAT_008ccddc; extern undefined4 DAT_008ccde0;
extern undefined4 DAT_008ccde4; extern undefined4 DAT_008ccde8; extern undefined4 DAT_008ccdec; extern undefined4 DAT_008cce38;
extern undefined4 DAT_008cce3c; extern undefined4 DAT_008cce40; extern undefined4 DAT_008cce44; extern undefined4 DAT_008cce48;
extern undefined4 DAT_008cce4c; extern undefined4 DAT_008ccec8; extern undefined4 DAT_008ccecc; extern undefined4 DAT_008cced0;
extern undefined4 DAT_008cced4; extern undefined4 DAT_008cced8; extern undefined4 DAT_008ccedc; extern undefined4 DAT_008cd09c;
extern undefined4 DAT_008cd0a0; extern undefined4 DAT_008cd0a4; extern undefined4 DAT_008cd0a8; extern undefined4 DAT_008cd0ac;
extern undefined4 DAT_008cd0b0; extern undefined4 DAT_008d019c; extern undefined4 DAT_008d01a0; extern undefined4 DAT_008d01a4;
extern undefined4 DAT_008d01a8; extern undefined4 DAT_008d01ac; extern undefined4 DAT_008d01b0;
