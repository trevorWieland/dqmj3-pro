#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089392c; extern undefined4 DAT_00893938; extern undefined4 DAT_0089393c; extern undefined4 DAT_0089393d;
extern undefined4 DAT_0089393e; extern undefined4 DAT_0089393f; extern undefined4 DAT_00893940; extern undefined4 DAT_00893941;
extern undefined4 DAT_00893942; extern undefined4 DAT_00893943; extern undefined4 DAT_00893944; extern undefined4 DAT_00893945;
extern undefined4 DAT_00893946; extern undefined4 DAT_00893947; extern undefined4 DAT_00893948; extern undefined4 DAT_00893949;
extern undefined4 DAT_0089394a; extern undefined4 DAT_0089394b; extern undefined4 DAT_0089394c; extern undefined4 DAT_0089394d;
extern undefined4 DAT_0089394e; extern undefined4 DAT_0089394f; extern undefined4 DAT_00893950; extern undefined4 DAT_00893951;
extern undefined4 DAT_00893952; extern undefined4 DAT_00893953; extern undefined4 DAT_00893954; extern undefined4 DAT_00893955;
extern undefined4 DAT_00893956; extern undefined4 DAT_00893957; extern undefined4 DAT_00893958; extern undefined4 DAT_00893959;
extern undefined4 DAT_0089395a; extern undefined4 DAT_0089395b; extern undefined4 DAT_0089395c; extern undefined4 DAT_0089395d;
extern undefined4 DAT_0089395e; extern undefined4 DAT_0089395f; extern undefined4 DAT_00893960; extern undefined4 DAT_00893964;
extern undefined4 DAT_008939c0; extern undefined4 DAT_008939f4; extern undefined4 DAT_008939f8; extern undefined4 DAT_008939fc;
extern undefined4 DAT_00893b3c; extern undefined4 DAT_00893b64; extern undefined4 DAT_00893b70; extern undefined4 DAT_00893d14;
extern undefined4 DAT_00893d18; extern undefined4 DAT_00893d1c; extern undefined4 DAT_00893e18; extern undefined4 DAT_00893e1c;
extern undefined4 DAT_00893e1d; extern undefined4 DAT_00893e1e; extern undefined4 DAT_00893e1f; extern undefined4 DAT_00893e20;
extern undefined4 DAT_00893e21; extern undefined4 DAT_00893e22; extern undefined4 DAT_00893e23; extern undefined4 DAT_00893e24;
extern undefined4 DAT_00893e25; extern undefined4 DAT_00893e26; extern undefined4 DAT_00893e27; extern undefined4 DAT_00893e28;
extern undefined4 DAT_00893e29; extern undefined4 DAT_00893e2a; extern undefined4 DAT_00893e2b; extern undefined4 DAT_00893e2c;
extern undefined4 DAT_00893e2d; extern undefined4 DAT_00893e2e; extern undefined4 DAT_00893e2f; extern undefined4 DAT_00893e30;
extern undefined4 DAT_00893e31; extern undefined4 DAT_00893e32; extern undefined4 DAT_00893e33; extern undefined4 DAT_00893e34;
extern undefined4 DAT_00893e35; extern undefined4 DAT_00893e36; extern undefined4 DAT_00893e37; extern undefined4 DAT_00893e38;
extern undefined4 DAT_00893e39; extern undefined4 DAT_00893e3a; extern undefined4 DAT_00893e3b; extern undefined4 DAT_00893e3c;
extern undefined4 DAT_00893e3d; extern undefined4 DAT_00893e3e; extern undefined4 DAT_00893e3f; extern undefined4 DAT_00893e48;
extern undefined4 DAT_00893e4c; extern undefined4 DAT_00893e50; extern undefined4 DAT_00893e54; extern undefined4 DAT_00893e55;
extern undefined4 DAT_00893e56; extern undefined4 DAT_00893e57; extern undefined4 DAT_00893e58; extern undefined4 DAT_00893e59;
extern undefined4 DAT_00893e5a; extern undefined4 DAT_00893e5b; extern undefined4 DAT_00893e5c; extern undefined4 DAT_00893e5d;
extern undefined4 DAT_00893e5e; extern undefined4 DAT_00893e5f; extern undefined4 DAT_00893e60; extern undefined4 DAT_00893e61;
extern undefined4 DAT_00893e62; extern undefined4 DAT_00893e63; extern undefined4 DAT_00893e64; extern undefined4 DAT_00893e65;
extern undefined4 DAT_00893e66; extern undefined4 DAT_00893e67; extern undefined4 DAT_00893e68; extern undefined4 DAT_00893e69;
extern undefined4 DAT_00893e6a; extern undefined4 DAT_00893e6b; extern undefined4 DAT_00893e6c; extern undefined4 DAT_00893e6d;
extern undefined4 DAT_00893e6e; extern undefined4 DAT_00893e6f; extern undefined4 DAT_00893e70; extern undefined4 DAT_00893e71;
extern undefined4 DAT_00893e72; extern undefined4 DAT_00893e73; extern undefined4 DAT_00893e74; extern undefined4 DAT_00893e75;
extern undefined4 DAT_00893e76; extern undefined4 DAT_00893e77; extern undefined4 DAT_00893e78; extern undefined4 DAT_00893e7c;
extern undefined4 DAT_00893e80; extern undefined4 DAT_008941a4; extern undefined4 DAT_00894220; extern undefined4 DAT_00894224;
extern undefined4 DAT_00894225; extern undefined4 DAT_00894226; extern undefined4 DAT_00894227; extern undefined4 DAT_00894228;
extern undefined4 DAT_0089422c; extern undefined4 DAT_00894534; extern undefined4 DAT_00894538; extern undefined4 DAT_0089453c;
extern undefined4 DAT_008945e4; extern undefined4 DAT_008945e8; extern undefined4 DAT_008945ec; extern undefined4 DAT_008945f8;
extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_00894aa0; extern undefined4 DAT_00894aa4;
extern undefined4 DAT_00894aa8; extern undefined4 DAT_008951bc; extern undefined4 DAT_00895ad8; extern undefined4 DAT_00895e28;
extern undefined4 DAT_00895e2c; extern undefined4 DAT_00895e2d; extern undefined4 DAT_00895e2e; extern undefined4 DAT_00895e2f;
extern undefined4 DAT_00895e30; extern undefined4 DAT_00895e31; extern undefined4 DAT_00895e32; extern undefined4 DAT_00895e33;
extern undefined4 DAT_00895e34; extern undefined4 DAT_00895e35; extern undefined4 DAT_00895e36; extern undefined4 DAT_00895e37;
extern undefined4 DAT_00895e38; extern undefined4 DAT_00895e39; extern undefined4 DAT_00895e3a; extern undefined4 DAT_00895e3b;
extern undefined4 DAT_00895e3c; extern undefined4 DAT_00895e3d; extern undefined4 DAT_00895e3e; extern undefined4 DAT_00895e3f;
extern undefined4 DAT_00895e40; extern undefined4 DAT_00895e41; extern undefined4 DAT_00895e42; extern undefined4 DAT_00895e43;
extern undefined4 DAT_00895e44; extern undefined4 DAT_00895e45; extern undefined4 DAT_00895e46; extern undefined4 DAT_00895e47;
extern undefined4 DAT_00895e48; extern undefined4 DAT_00895e49; extern undefined4 DAT_00895e4a; extern undefined4 DAT_00895e4b;
extern undefined4 DAT_00895e4c; extern undefined4 DAT_00895e4d; extern undefined4 DAT_00895e4e; extern undefined4 DAT_00895e4f;
extern undefined4 DAT_00895e50; extern undefined4 DAT_00895e54; extern undefined4 DAT_008964f4; extern undefined4 DAT_008964f8;
extern undefined4 DAT_008964fc; extern undefined4 DAT_00896ac8; extern undefined4 DAT_00896acc; extern undefined4 DAT_00896ad0;
extern undefined4 DAT_008ca978; extern undefined4 DAT_008ca97c; extern undefined4 DAT_008ca980; extern undefined4 DAT_008ca984;
extern undefined4 DAT_008ca988; extern undefined4 DAT_008ca98c; extern undefined4 DAT_008caa50; extern undefined4 DAT_008caa54;
extern undefined4 DAT_008caa58; extern undefined4 DAT_008caa5c; extern undefined4 DAT_008caa60; extern undefined4 DAT_008caa64;
extern undefined4 DAT_008cada8; extern undefined4 DAT_008cadac; extern undefined4 DAT_008cadb0; extern undefined4 DAT_008cadb4;
extern undefined4 DAT_008cadb8; extern undefined4 DAT_008cadbc; extern undefined4 DAT_008caeb0; extern undefined4 DAT_008caeb4;
extern undefined4 DAT_008caeb8; extern undefined4 DAT_008caebc; extern undefined4 DAT_008caec0; extern undefined4 DAT_008caec4;
extern undefined4 DAT_008caec8; extern undefined4 DAT_008caecc; extern undefined4 DAT_008caed0; extern undefined4 DAT_008caed4;
extern undefined4 DAT_008caed8; extern undefined4 DAT_008caedc; extern undefined4 DAT_008cb048; extern undefined4 DAT_008cb04c;
extern undefined4 DAT_008cb050; extern undefined4 DAT_008cb054; extern undefined4 DAT_008cb058; extern undefined4 DAT_008cb05c;
extern undefined4 DAT_008cb420; extern undefined4 DAT_008cb424; extern undefined4 DAT_008cb428; extern undefined4 DAT_008cb42c;
extern undefined4 DAT_008cb430; extern undefined4 DAT_008cb434; extern undefined4 DAT_008cb480; extern undefined4 DAT_008cb484;
extern undefined4 DAT_008cb488; extern undefined4 DAT_008cb48c; extern undefined4 DAT_008cb490; extern undefined4 DAT_008cb494;
extern undefined4 DAT_008cb5d0; extern undefined4 DAT_008cb5d4; extern undefined4 DAT_008cb5d8; extern undefined4 DAT_008cb5dc;
extern undefined4 DAT_008cb5e0; extern undefined4 DAT_008cb5e4; extern undefined4 DAT_008cc5ec; extern undefined4 DAT_008cc5f0;
extern undefined4 DAT_008cc5f4; extern undefined4 DAT_008cc5f8; extern undefined4 DAT_008cc5fc; extern undefined4 DAT_008cc600;
extern undefined4 DAT_008cca78; extern undefined4 DAT_008cca7c; extern undefined4 DAT_008cca80; extern undefined4 DAT_008cca84;
extern undefined4 DAT_008cca88; extern undefined4 DAT_008cca8c; extern undefined4 DAT_008ccff4; extern undefined4 DAT_008ccff8;
extern undefined4 DAT_008ccffc; extern undefined4 DAT_008cd000; extern undefined4 DAT_008cd004; extern undefined4 DAT_008cd008;
