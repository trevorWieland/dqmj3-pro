#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890740; extern undefined4 DAT_00890744; extern undefined4 DAT_00890748; extern undefined4 DAT_00890b4c;
extern undefined4 DAT_00890b50; extern undefined4 DAT_00890b54; extern undefined4 DAT_00890c04; extern undefined4 DAT_00890c08;
extern undefined4 DAT_00890c0c; extern undefined4 DAT_00890e54; extern undefined4 DAT_00890e58; extern undefined4 DAT_00890e59;
extern undefined4 DAT_00890e5a; extern undefined4 DAT_00890e5b; extern undefined4 DAT_00890e5c; extern undefined4 DAT_00890e5d;
extern undefined4 DAT_00890e5e; extern undefined4 DAT_00890e5f; extern undefined4 DAT_00890e60; extern undefined4 DAT_00890e61;
extern undefined4 DAT_00890e62; extern undefined4 DAT_00890e63; extern undefined4 DAT_00890e64; extern undefined4 DAT_00890e65;
extern undefined4 DAT_00890e66; extern undefined4 DAT_00890e67; extern undefined4 DAT_00890e68; extern undefined4 DAT_00890e69;
extern undefined4 DAT_00890e6a; extern undefined4 DAT_00890e6b; extern undefined4 DAT_00890e6c; extern undefined4 DAT_00890e6d;
extern undefined4 DAT_00890e6e; extern undefined4 DAT_00890e6f; extern undefined4 DAT_00890e70; extern undefined4 DAT_00890e71;
extern undefined4 DAT_00890e72; extern undefined4 DAT_00890e73; extern undefined4 DAT_00890e74; extern undefined4 DAT_00890e75;
extern undefined4 DAT_00890e76; extern undefined4 DAT_00890e77; extern undefined4 DAT_00890e78; extern undefined4 DAT_00890e79;
extern undefined4 DAT_00890e7a; extern undefined4 DAT_00890e7b; extern undefined4 DAT_00890e7c; extern undefined4 DAT_00890e80;
extern undefined4 DAT_00891bc0; extern undefined4 DAT_00892df0; extern undefined4 DAT_00892e7c; extern undefined4 DAT_00892e80;
extern undefined4 DAT_00892e84; extern undefined4 DAT_00892ec0; extern undefined4 DAT_00892ec4; extern undefined4 DAT_00892ec8;
extern undefined4 DAT_00892ecc; extern undefined4 DAT_00892ed0; extern undefined4 DAT_00892ed4; extern undefined4 DAT_00892f28;
extern undefined4 DAT_00892f2c; extern undefined4 DAT_00892f30; extern undefined4 DAT_008930a0; extern undefined4 DAT_008930a4;
extern undefined4 DAT_008930a8; extern undefined4 DAT_008939cc; extern undefined4 DAT_008939dc; extern undefined4 DAT_008939e0;
extern undefined4 DAT_008939e4; extern undefined4 DAT_00893b1c; extern undefined4 DAT_00893b64; extern undefined4 DAT_00893b70;
extern undefined4 DAT_00894004; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_00894b04;
extern undefined4 DAT_00894b38; extern undefined4 DAT_008951f0; extern undefined4 DAT_0089544c; extern undefined4 DAT_00895be4;
extern undefined4 DAT_00895c48; extern undefined4 DAT_00895c4c; extern undefined4 DAT_00899240; extern undefined4 DAT_00899244;
extern undefined4 DAT_008c0440; extern undefined4 DAT_008c0454; extern undefined4 DAT_008c7bec; extern undefined4 DAT_008c7bf0;
extern undefined4 DAT_008c7bf4; extern undefined4 DAT_008c7bf8; extern undefined4 DAT_008c7bfc; extern undefined4 DAT_008c7c00;
extern undefined4 DAT_008c8134; extern undefined4 DAT_008c8138; extern undefined4 DAT_008c813c; extern undefined4 DAT_008c8140;
extern undefined4 DAT_008c8144; extern undefined4 DAT_008c8148; extern undefined4 DAT_008c8254; extern undefined4 DAT_008c8258;
extern undefined4 DAT_008c825c; extern undefined4 DAT_008c8260; extern undefined4 DAT_008c8264; extern undefined4 DAT_008c8268;
extern undefined4 DAT_008c838c; extern undefined4 DAT_008c8390; extern undefined4 DAT_008c8394; extern undefined4 DAT_008c8398;
extern undefined4 DAT_008c839c; extern undefined4 DAT_008c83a0; extern undefined4 DAT_008c9e40; extern undefined4 DAT_008c9e44;
extern undefined4 DAT_008c9e48; extern undefined4 DAT_008c9e4c; extern undefined4 DAT_008c9e50; extern undefined4 DAT_008c9e54;
extern undefined4 DAT_008c9ee8; extern undefined4 DAT_008c9eec; extern undefined4 DAT_008c9ef0; extern undefined4 DAT_008c9ef4;
extern undefined4 DAT_008c9ef8; extern undefined4 DAT_008c9efc; extern undefined4 DAT_008c9f00; extern undefined4 DAT_008c9f04;
extern undefined4 DAT_008c9f08; extern undefined4 DAT_008c9f0c; extern undefined4 DAT_008c9f10; extern undefined4 DAT_008c9f14;
extern undefined4 DAT_008c9f78; extern undefined4 DAT_008c9f7c; extern undefined4 DAT_008c9f80; extern undefined4 DAT_008c9f84;
extern undefined4 DAT_008c9f88; extern undefined4 DAT_008c9f8c; extern undefined4 DAT_008ca240; extern undefined4 DAT_008ca244;
extern undefined4 DAT_008ca248; extern undefined4 DAT_008ca24c; extern undefined4 DAT_008ca250; extern undefined4 DAT_008ca254;
extern undefined4 DAT_008caa20; extern undefined4 DAT_008caa24; extern undefined4 DAT_008caa28; extern undefined4 DAT_008caa2c;
extern undefined4 DAT_008caa30; extern undefined4 DAT_008caa34; extern undefined4 DAT_008cc3f4; extern undefined4 DAT_008cc3f8;
extern undefined4 DAT_008cc3fc; extern undefined4 DAT_008cc400; extern undefined4 DAT_008cc404; extern undefined4 DAT_008cc408;
extern undefined4 DAT_008d174c; extern undefined4 DAT_008d1750; extern undefined4 DAT_008d1754; extern undefined4 DAT_008d1758;
extern undefined4 DAT_008d175c; extern undefined4 DAT_008d1760;
