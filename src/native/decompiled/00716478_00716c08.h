#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089466c; extern undefined4 DAT_00894c04; extern undefined4 DAT_00894c08; extern undefined4 DAT_00894c09;
extern undefined4 DAT_00894c0a; extern undefined4 DAT_00894c0b; extern undefined4 DAT_00894c0c; extern undefined4 DAT_00894c0d;
extern undefined4 DAT_00894c0e; extern undefined4 DAT_00894c0f; extern undefined4 DAT_00894c10; extern undefined4 DAT_00894c11;
extern undefined4 DAT_00894c12; extern undefined4 DAT_00894c13; extern undefined4 DAT_00894c14; extern undefined4 DAT_00894c15;
extern undefined4 DAT_00894c16; extern undefined4 DAT_00894c17; extern undefined4 DAT_00894c18; extern undefined4 DAT_00894c19;
extern undefined4 DAT_00894c1a; extern undefined4 DAT_00894c1b; extern undefined4 DAT_00894c1c; extern undefined4 DAT_00894c1d;
extern undefined4 DAT_00894c1e; extern undefined4 DAT_00894c1f; extern undefined4 DAT_00894c20; extern undefined4 DAT_00894c21;
extern undefined4 DAT_00894c22; extern undefined4 DAT_00894c23; extern undefined4 DAT_00894c24; extern undefined4 DAT_00894c25;
extern undefined4 DAT_00894c26; extern undefined4 DAT_00894c27; extern undefined4 DAT_00894c28; extern undefined4 DAT_00894c29;
extern undefined4 DAT_00894c2a; extern undefined4 DAT_00894c2b; extern undefined4 DAT_00894c2c; extern undefined4 DAT_00894c30;
extern undefined4 DAT_00894cc8; extern undefined4 DAT_00894ccc; extern undefined4 DAT_00894ccd; extern undefined4 DAT_00894cce;
extern undefined4 DAT_00894ccf; extern undefined4 DAT_00894cd0; extern undefined4 DAT_00894cd4; extern undefined4 DAT_00894cd5;
extern undefined4 DAT_00894cd6; extern undefined4 DAT_00894cd7; extern undefined4 DAT_00894cd8; extern undefined4 DAT_00894cd9;
extern undefined4 DAT_00894cda; extern undefined4 DAT_00894cdb; extern undefined4 DAT_00894cdc; extern undefined4 DAT_00894cdd;
extern undefined4 DAT_00894cde; extern undefined4 DAT_00894cdf; extern undefined4 DAT_00894ce0; extern undefined4 DAT_00894ce1;
extern undefined4 DAT_00894ce2; extern undefined4 DAT_00894ce3; extern undefined4 DAT_00894ce4; extern undefined4 DAT_00894ce5;
extern undefined4 DAT_00894ce6; extern undefined4 DAT_00894ce7; extern undefined4 DAT_00894ce8; extern undefined4 DAT_00894ce9;
extern undefined4 DAT_00894cea; extern undefined4 DAT_00894ceb; extern undefined4 DAT_00894cec; extern undefined4 DAT_00894cf0;
extern undefined4 DAT_00894d2c; extern undefined4 DAT_00894d30; extern undefined4 DAT_00894d34; extern undefined4 DAT_00894d50;
extern undefined4 DAT_00894da8; extern undefined4 DAT_00894e3c; extern undefined4 DAT_00894e40; extern undefined4 DAT_00894e44;
extern undefined4 DAT_00894e48; extern undefined4 DAT_00894e4c; extern undefined4 DAT_00894e50; extern undefined4 DAT_0089544c;
extern undefined4 DAT_00895458; extern undefined4 DAT_00895464; extern undefined4 DAT_00895608; extern undefined4 DAT_0089560c;
extern undefined4 DAT_00895610; extern undefined4 DAT_00895611; extern undefined4 DAT_00895612; extern undefined4 DAT_00895613;
extern undefined4 DAT_00895614; extern undefined4 DAT_00895615; extern undefined4 DAT_00895616; extern undefined4 DAT_00895617;
extern undefined4 DAT_00895618; extern undefined4 DAT_0089561c; extern undefined4 DAT_0089561d; extern undefined4 DAT_0089561e;
extern undefined4 DAT_0089561f; extern undefined4 DAT_00895620; extern undefined4 DAT_00895621; extern undefined4 DAT_00895622;
extern undefined4 DAT_00895623; extern undefined4 DAT_00895624; extern undefined4 DAT_00895625; extern undefined4 DAT_00895626;
extern undefined4 DAT_00895627; extern undefined4 DAT_00895628; extern undefined4 DAT_00895629; extern undefined4 DAT_0089562a;
extern undefined4 DAT_0089562b; extern undefined4 DAT_0089562c; extern undefined4 DAT_0089562d; extern undefined4 DAT_0089562e;
extern undefined4 DAT_0089562f; extern undefined4 DAT_00895630; extern undefined4 DAT_00895634; extern undefined4 DAT_00895698;
extern undefined4 DAT_0089569c; extern undefined4 DAT_008956a0; extern undefined4 DAT_0089571c; extern undefined4 DAT_00895720;
extern undefined4 DAT_00895721; extern undefined4 DAT_00895722; extern undefined4 DAT_00895723; extern undefined4 DAT_00895724;
extern undefined4 DAT_00895725; extern undefined4 DAT_00895726; extern undefined4 DAT_00895727; extern undefined4 DAT_00895728;
extern undefined4 DAT_00895729; extern undefined4 DAT_0089572a; extern undefined4 DAT_0089572b; extern undefined4 DAT_0089572c;
extern undefined4 DAT_0089572d; extern undefined4 DAT_0089572e; extern undefined4 DAT_0089572f; extern undefined4 DAT_00895730;
extern undefined4 DAT_00895731; extern undefined4 DAT_00895732; extern undefined4 DAT_00895733; extern undefined4 DAT_00895734;
extern undefined4 DAT_00895735; extern undefined4 DAT_00895736; extern undefined4 DAT_00895737; extern undefined4 DAT_00895738;
extern undefined4 DAT_00895739; extern undefined4 DAT_0089573a; extern undefined4 DAT_0089573b; extern undefined4 DAT_0089573c;
extern undefined4 DAT_0089573d; extern undefined4 DAT_0089573e; extern undefined4 DAT_0089573f; extern undefined4 DAT_00895740;
extern undefined4 DAT_00895741; extern undefined4 DAT_00895742; extern undefined4 DAT_00895743; extern undefined4 DAT_00895744;
extern undefined4 DAT_00895748; extern undefined4 DAT_008957e8; extern undefined4 DAT_008957ec; extern undefined4 DAT_008957f0;
extern undefined4 DAT_0089586c; extern undefined4 DAT_00895870; extern undefined4 DAT_00895894; extern undefined4 DAT_00895898;
extern undefined4 DAT_008cb6c0; extern undefined4 DAT_008cb6c4; extern undefined4 DAT_008cb6c8; extern undefined4 DAT_008cb6cc;
extern undefined4 DAT_008cb6d0; extern undefined4 DAT_008cb6d4; extern undefined4 DAT_008cb7b0; extern undefined4 DAT_008cb7b4;
extern undefined4 DAT_008cb7b8; extern undefined4 DAT_008cb7bc; extern undefined4 DAT_008cb7c0; extern undefined4 DAT_008cb7c4;
extern undefined4 DAT_008cb7f8; extern undefined4 DAT_008cb7fc; extern undefined4 DAT_008cb800; extern undefined4 DAT_008cb804;
extern undefined4 DAT_008cb808; extern undefined4 DAT_008cb80c; extern undefined4 DAT_008cb8e8; extern undefined4 DAT_008cb8ec;
extern undefined4 DAT_008cb8f0; extern undefined4 DAT_008cb8f4; extern undefined4 DAT_008cb8f8; extern undefined4 DAT_008cb8fc;
extern undefined4 DAT_008cb900; extern undefined4 DAT_008cb904; extern undefined4 DAT_008cb908; extern undefined4 DAT_008cb90c;
extern undefined4 DAT_008cb910; extern undefined4 DAT_008cb914; extern undefined4 DAT_008cbf60; extern undefined4 DAT_008cbf64;
extern undefined4 DAT_008cbf68; extern undefined4 DAT_008cbf6c; extern undefined4 DAT_008cbf70; extern undefined4 DAT_008cbf74;
extern undefined4 DAT_008cbf78; extern undefined4 DAT_008cbf7c; extern undefined4 DAT_008cbf80; extern undefined4 DAT_008cbf84;
extern undefined4 DAT_008cbf88; extern undefined4 DAT_008cbf8c; extern undefined4 DAT_008cbf90; extern undefined4 DAT_008cbf94;
extern undefined4 DAT_008cbf98; extern undefined4 DAT_008cbf9c; extern undefined4 DAT_008cbfa0; extern undefined4 DAT_008cbfa4;
extern undefined4 DAT_008cbfc0; extern undefined4 DAT_008cbfc4; extern undefined4 DAT_008cbfc8; extern undefined4 DAT_008cbfcc;
extern undefined4 DAT_008cbfd0; extern undefined4 DAT_008cbfd4; extern undefined4 DAT_008cc008; extern undefined4 DAT_008cc00c;
extern undefined4 DAT_008cc010; extern undefined4 DAT_008cc014; extern undefined4 DAT_008cc018; extern undefined4 DAT_008cc01c;
extern undefined4 DAT_008cc068; extern undefined4 DAT_008cc06c; extern undefined4 DAT_008cc070; extern undefined4 DAT_008cc074;
extern undefined4 DAT_008cc078; extern undefined4 DAT_008cc07c; extern undefined4 DAT_008cc128; extern undefined4 DAT_008cc12c;
extern undefined4 DAT_008cc130; extern undefined4 DAT_008cc134; extern undefined4 DAT_008cc138; extern undefined4 DAT_008cc13c;
extern undefined4 DAT_008cc158; extern undefined4 DAT_008cc15c; extern undefined4 DAT_008cc160; extern undefined4 DAT_008cc164;
extern undefined4 DAT_008cc168; extern undefined4 DAT_008cc16c;
