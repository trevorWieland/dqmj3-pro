#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008906e8; extern undefined4 DAT_008906ec; extern undefined4 DAT_0089071c; extern undefined4 DAT_00890720;
extern undefined4 DAT_00890724; extern undefined4 DAT_0089074c; extern undefined4 DAT_00890750; extern undefined4 DAT_00890754;
extern undefined4 DAT_008907bc; extern undefined4 DAT_008907c8; extern undefined4 DAT_008907cc; extern undefined4 DAT_0089093c;
extern undefined4 DAT_00890940; extern undefined4 DAT_00890944; extern undefined4 DAT_00890e84; extern undefined4 DAT_00891040;
extern undefined4 DAT_00891044; extern undefined4 DAT_00891048; extern undefined4 DAT_008919dc; extern undefined4 DAT_008919e0;
extern undefined4 DAT_008919e4; extern undefined4 DAT_00891be0; extern undefined4 DAT_00891be4; extern undefined4 DAT_00891be8;
extern undefined4 DAT_00891be9; extern undefined4 DAT_00891bea; extern undefined4 DAT_00891beb; extern undefined4 DAT_00891bec;
extern undefined4 DAT_00891bf0; extern undefined4 DAT_00891bf1; extern undefined4 DAT_00891bf2; extern undefined4 DAT_00891bf3;
extern undefined4 DAT_00891bf4; extern undefined4 DAT_00891bf5; extern undefined4 DAT_00891bf6; extern undefined4 DAT_00891bf7;
extern undefined4 DAT_00891bf8; extern undefined4 DAT_00891bf9; extern undefined4 DAT_00891bfa; extern undefined4 DAT_00891bfb;
extern undefined4 DAT_00891bfc; extern undefined4 DAT_00891bfd; extern undefined4 DAT_00891bfe; extern undefined4 DAT_00891bff;
extern undefined4 DAT_00891c00; extern undefined4 DAT_00891c01; extern undefined4 DAT_00891c02; extern undefined4 DAT_00891c03;
extern undefined4 DAT_00891c04; extern undefined4 DAT_00891c05; extern undefined4 DAT_00891c06; extern undefined4 DAT_00891c07;
extern undefined4 DAT_00891c08; extern undefined4 DAT_00891c0c; extern undefined4 DAT_008929a4; extern undefined4 DAT_008929a8;
extern undefined4 DAT_008929ac; extern undefined4 DAT_008929ad; extern undefined4 DAT_008929ae; extern undefined4 DAT_008929af;
extern undefined4 DAT_008929b0; extern undefined4 DAT_008929b1; extern undefined4 DAT_008929b2; extern undefined4 DAT_008929b3;
extern undefined4 DAT_008929b4; extern undefined4 DAT_008929b5; extern undefined4 DAT_008929b6; extern undefined4 DAT_008929b7;
extern undefined4 DAT_008929b8; extern undefined4 DAT_008929b9; extern undefined4 DAT_008929ba; extern undefined4 DAT_008929bb;
extern undefined4 DAT_008929bc; extern undefined4 DAT_008929bd; extern undefined4 DAT_008929be; extern undefined4 DAT_008929bf;
extern undefined4 DAT_008929c0; extern undefined4 DAT_008929c1; extern undefined4 DAT_008929c2; extern undefined4 DAT_008929c3;
extern undefined4 DAT_008929c4; extern undefined4 DAT_008929c5; extern undefined4 DAT_008929c6; extern undefined4 DAT_008929c7;
extern undefined4 DAT_008929c8; extern undefined4 DAT_008929c9; extern undefined4 DAT_008929ca; extern undefined4 DAT_008929cb;
extern undefined4 DAT_008929cc; extern undefined4 DAT_008929cd; extern undefined4 DAT_008929ce; extern undefined4 DAT_008929cf;
extern undefined4 DAT_008929d0; extern undefined4 DAT_008929d4; extern undefined4 DAT_00892d28; extern undefined4 DAT_00892d2c;
extern undefined4 DAT_00892d30; extern undefined4 DAT_00892e68; extern undefined4 DAT_00892e6c; extern undefined4 DAT_00892e70;
extern undefined4 DAT_00892e88; extern undefined4 DAT_00893120; extern undefined4 DAT_00893124; extern undefined4 DAT_00893b64;
extern undefined4 DAT_00893b70; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_00895d84;
extern undefined4 DAT_00895d88; extern undefined4 DAT_0089618c; extern undefined4 DAT_00896190; extern undefined4 DAT_00899228;
extern undefined4 DAT_0089922c; extern undefined4 DAT_00899230; extern undefined4 DAT_008c7b14; extern undefined4 DAT_008c7b18;
extern undefined4 DAT_008c7b1c; extern undefined4 DAT_008c7b20; extern undefined4 DAT_008c7b24; extern undefined4 DAT_008c7b28;
extern undefined4 DAT_008c7ba4; extern undefined4 DAT_008c7ba8; extern undefined4 DAT_008c7bac; extern undefined4 DAT_008c7bb0;
extern undefined4 DAT_008c7bb4; extern undefined4 DAT_008c7bb8; extern undefined4 DAT_008c7c04; extern undefined4 DAT_008c7c08;
extern undefined4 DAT_008c7c0c; extern undefined4 DAT_008c7c10; extern undefined4 DAT_008c7c14; extern undefined4 DAT_008c7c18;
extern undefined4 DAT_008c7cc4; extern undefined4 DAT_008c7cc8; extern undefined4 DAT_008c7ccc; extern undefined4 DAT_008c7cd0;
extern undefined4 DAT_008c7cd4; extern undefined4 DAT_008c7cd8; extern undefined4 DAT_008c7d9c; extern undefined4 DAT_008c7da0;
extern undefined4 DAT_008c7da4; extern undefined4 DAT_008c7da8; extern undefined4 DAT_008c7dac; extern undefined4 DAT_008c7db0;
extern undefined4 DAT_008c853c; extern undefined4 DAT_008c8540; extern undefined4 DAT_008c8544; extern undefined4 DAT_008c8548;
extern undefined4 DAT_008c854c; extern undefined4 DAT_008c8550; extern undefined4 DAT_008c8fa4; extern undefined4 DAT_008c8fa8;
extern undefined4 DAT_008c8fac; extern undefined4 DAT_008c8fb0; extern undefined4 DAT_008c8fb4; extern undefined4 DAT_008c8fb8;
extern undefined4 DAT_008c910c; extern undefined4 DAT_008c9110; extern undefined4 DAT_008c9114; extern undefined4 DAT_008c9118;
extern undefined4 DAT_008c911c; extern undefined4 DAT_008c9120; extern undefined4 DAT_008c9a38; extern undefined4 DAT_008c9a3c;
extern undefined4 DAT_008c9a40; extern undefined4 DAT_008c9a44; extern undefined4 DAT_008c9a48; extern undefined4 DAT_008c9a4c;
extern undefined4 DAT_008c9d08; extern undefined4 DAT_008c9d0c; extern undefined4 DAT_008c9d10; extern undefined4 DAT_008c9d14;
extern undefined4 DAT_008c9d18; extern undefined4 DAT_008c9d1c; extern undefined4 DAT_008c9e28; extern undefined4 DAT_008c9e2c;
extern undefined4 DAT_008c9e30; extern undefined4 DAT_008c9e34; extern undefined4 DAT_008c9e38; extern undefined4 DAT_008c9e3c;
extern undefined4 DAT_008ca360; extern undefined4 DAT_008ca364; extern undefined4 DAT_008ca368; extern undefined4 DAT_008ca36c;
extern undefined4 DAT_008ca370; extern undefined4 DAT_008ca374; extern undefined4 DAT_008cc514; extern undefined4 DAT_008cc518;
extern undefined4 DAT_008cc51c; extern undefined4 DAT_008cc520; extern undefined4 DAT_008cc524; extern undefined4 DAT_008cc528;
extern undefined4 DAT_008d171c; extern undefined4 DAT_008d1720; extern undefined4 DAT_008d1724; extern undefined4 DAT_008d1728;
extern undefined4 DAT_008d172c; extern undefined4 DAT_008d1730;
