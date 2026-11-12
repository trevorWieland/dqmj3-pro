#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00892ea0; extern undefined4 DAT_00892ea4; extern undefined4 DAT_00892eb0; extern undefined4 DAT_00892eb4;
extern undefined4 DAT_00892efc; extern undefined4 DAT_00892f00; extern undefined4 DAT_00892f04; extern undefined4 DAT_0089307c;
extern undefined4 DAT_00893080; extern undefined4 DAT_008930f8; extern undefined4 DAT_008930fc; extern undefined4 DAT_00893100;
extern undefined4 DAT_00893154; extern undefined4 DAT_00893158; extern undefined4 DAT_008939cc; extern undefined4 DAT_008939d8;
extern undefined4 DAT_008939e8; extern undefined4 DAT_008939ec; extern undefined4 DAT_008939f0; extern undefined4 DAT_00893a0c;
extern undefined4 DAT_00893a10; extern undefined4 DAT_00893a14; extern undefined4 DAT_00893b64; extern undefined4 DAT_00893c74;
extern undefined4 DAT_00893c78; extern undefined4 DAT_00893c7c; extern undefined4 DAT_00893d14; extern undefined4 DAT_00893d24;
extern undefined4 DAT_00893d34; extern undefined4 DAT_00893d38; extern undefined4 DAT_00893d3c; extern undefined4 DAT_00894454;
extern undefined4 DAT_0089454c; extern undefined4 DAT_00894550; extern undefined4 DAT_00894554; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894678; extern undefined4 DAT_00894688; extern undefined4 DAT_0089468c; extern undefined4 DAT_00894690;
extern undefined4 DAT_00894aac; extern undefined4 DAT_00894ab0; extern undefined4 DAT_00894ab4; extern undefined4 DAT_00894c6c;
extern undefined4 DAT_00894c70; extern undefined4 DAT_00894c74; extern undefined4 DAT_008951b8; extern undefined4 DAT_008951bc;
extern undefined4 DAT_008951c0; extern undefined4 DAT_008951d8; extern undefined4 DAT_008951e8; extern undefined4 DAT_008951f0;
extern undefined4 DAT_00895b24; extern undefined4 DAT_00895b28; extern undefined4 DAT_00895b2c; extern undefined4 DAT_00895e28;
extern undefined4 DAT_00895e58; extern undefined4 DAT_00895e5c; extern undefined4 DAT_00895e5d; extern undefined4 DAT_00895e5e;
extern undefined4 DAT_00895e5f; extern undefined4 DAT_00895e60; extern undefined4 DAT_00895e61; extern undefined4 DAT_00895e62;
extern undefined4 DAT_00895e63; extern undefined4 DAT_00895e64; extern undefined4 DAT_00895e65; extern undefined4 DAT_00895e66;
extern undefined4 DAT_00895e67; extern undefined4 DAT_00895e68; extern undefined4 DAT_00895e69; extern undefined4 DAT_00895e6a;
extern undefined4 DAT_00895e6b; extern undefined4 DAT_00895e6c; extern undefined4 DAT_00895e6d; extern undefined4 DAT_00895e6e;
extern undefined4 DAT_00895e6f; extern undefined4 DAT_00895e70; extern undefined4 DAT_00895e71; extern undefined4 DAT_00895e72;
extern undefined4 DAT_00895e73; extern undefined4 DAT_00895e74; extern undefined4 DAT_00895e75; extern undefined4 DAT_00895e76;
extern undefined4 DAT_00895e77; extern undefined4 DAT_00895e78; extern undefined4 DAT_00895e79; extern undefined4 DAT_00895e7a;
extern undefined4 DAT_00895e7b; extern undefined4 DAT_00895e7c; extern undefined4 DAT_00895e7d; extern undefined4 DAT_00895e7e;
extern undefined4 DAT_00895e7f; extern undefined4 DAT_00895e80; extern undefined4 DAT_00895e84; extern undefined4 DAT_008963d8;
extern undefined4 DAT_008c9e88; extern undefined4 DAT_008c9e8c; extern undefined4 DAT_008c9e90; extern undefined4 DAT_008c9e94;
extern undefined4 DAT_008c9e98; extern undefined4 DAT_008c9e9c; extern undefined4 DAT_008c9eb8; extern undefined4 DAT_008c9ebc;
extern undefined4 DAT_008c9ec0; extern undefined4 DAT_008c9ec4; extern undefined4 DAT_008c9ec8; extern undefined4 DAT_008c9ecc;
extern undefined4 DAT_008c9f60; extern undefined4 DAT_008c9f64; extern undefined4 DAT_008c9f68; extern undefined4 DAT_008c9f6c;
extern undefined4 DAT_008c9f70; extern undefined4 DAT_008c9f74; extern undefined4 DAT_008ca1f8; extern undefined4 DAT_008ca1fc;
extern undefined4 DAT_008ca200; extern undefined4 DAT_008ca204; extern undefined4 DAT_008ca208; extern undefined4 DAT_008ca20c;
extern undefined4 DAT_008ca300; extern undefined4 DAT_008ca304; extern undefined4 DAT_008ca308; extern undefined4 DAT_008ca30c;
extern undefined4 DAT_008ca310; extern undefined4 DAT_008ca314; extern undefined4 DAT_008ca3d8; extern undefined4 DAT_008ca3dc;
extern undefined4 DAT_008ca3e0; extern undefined4 DAT_008ca3e4; extern undefined4 DAT_008ca3e8; extern undefined4 DAT_008ca3ec;
extern undefined4 DAT_008caa38; extern undefined4 DAT_008caa3c; extern undefined4 DAT_008caa40; extern undefined4 DAT_008caa44;
extern undefined4 DAT_008caa48; extern undefined4 DAT_008caa4c; extern undefined4 DAT_008caa80; extern undefined4 DAT_008caa84;
extern undefined4 DAT_008caa88; extern undefined4 DAT_008caa8c; extern undefined4 DAT_008caa90; extern undefined4 DAT_008caa94;
extern undefined4 DAT_008cacf0; extern undefined4 DAT_008cacf4; extern undefined4 DAT_008cacf8; extern undefined4 DAT_008cacfc;
extern undefined4 DAT_008cad00; extern undefined4 DAT_008cad04; extern undefined4 DAT_008cadd8; extern undefined4 DAT_008caddc;
extern undefined4 DAT_008cade0; extern undefined4 DAT_008cade4; extern undefined4 DAT_008cade8; extern undefined4 DAT_008cadec;
extern undefined4 DAT_008cb438; extern undefined4 DAT_008cb43c; extern undefined4 DAT_008cb440; extern undefined4 DAT_008cb444;
extern undefined4 DAT_008cb448; extern undefined4 DAT_008cb44c; extern undefined4 DAT_008cb540; extern undefined4 DAT_008cb544;
extern undefined4 DAT_008cb548; extern undefined4 DAT_008cb54c; extern undefined4 DAT_008cb550; extern undefined4 DAT_008cb554;
extern undefined4 DAT_008cb5e8; extern undefined4 DAT_008cb5ec; extern undefined4 DAT_008cb5f0; extern undefined4 DAT_008cb5f4;
extern undefined4 DAT_008cb5f8; extern undefined4 DAT_008cb5fc; extern undefined4 DAT_008cb6f0; extern undefined4 DAT_008cb6f4;
extern undefined4 DAT_008cb6f8; extern undefined4 DAT_008cb6fc; extern undefined4 DAT_008cb700; extern undefined4 DAT_008cb704;
extern undefined4 DAT_008cc260; extern undefined4 DAT_008cc264; extern undefined4 DAT_008cc268; extern undefined4 DAT_008cc26c;
extern undefined4 DAT_008cc270; extern undefined4 DAT_008cc274; extern undefined4 DAT_008cc604; extern undefined4 DAT_008cc608;
extern undefined4 DAT_008cc60c; extern undefined4 DAT_008cc610; extern undefined4 DAT_008cc614; extern undefined4 DAT_008cc618;
