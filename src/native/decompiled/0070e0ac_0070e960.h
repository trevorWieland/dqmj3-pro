#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00891d60; extern undefined4 DAT_00891d64; extern undefined4 DAT_00891d65; extern undefined4 DAT_00891d66;
extern undefined4 DAT_00891d67; extern undefined4 DAT_00891d68; extern undefined4 DAT_00891d69; extern undefined4 DAT_00891d6a;
extern undefined4 DAT_00891d6b; extern undefined4 DAT_00891d6c; extern undefined4 DAT_00891d6d; extern undefined4 DAT_00891d6e;
extern undefined4 DAT_00891d6f; extern undefined4 DAT_00891d70; extern undefined4 DAT_00891d71; extern undefined4 DAT_00891d72;
extern undefined4 DAT_00891d73; extern undefined4 DAT_00891d74; extern undefined4 DAT_00891d75; extern undefined4 DAT_00891d76;
extern undefined4 DAT_00891d77; extern undefined4 DAT_00891d78; extern undefined4 DAT_00891d79; extern undefined4 DAT_00891d7a;
extern undefined4 DAT_00891d7b; extern undefined4 DAT_00891d7c; extern undefined4 DAT_00891d7d; extern undefined4 DAT_00891d7e;
extern undefined4 DAT_00891d7f; extern undefined4 DAT_00891d80; extern undefined4 DAT_00891d81; extern undefined4 DAT_00891d82;
extern undefined4 DAT_00891d83; extern undefined4 DAT_00891d84; extern undefined4 DAT_00891d85; extern undefined4 DAT_00891d86;
extern undefined4 DAT_00891d87; extern undefined4 DAT_00891d88; extern undefined4 DAT_00891d8c; extern undefined4 DAT_0089255c;
extern undefined4 DAT_00892560; extern undefined4 DAT_008925b4; extern undefined4 DAT_008925b8; extern undefined4 DAT_008925bc;
extern undefined4 DAT_008925c0; extern undefined4 DAT_008931ec; extern undefined4 DAT_008931f0; extern undefined4 DAT_008939b8;
extern undefined4 DAT_008939bc; extern undefined4 DAT_00893abc; extern undefined4 DAT_00893ac0; extern undefined4 DAT_00893ac4;
extern undefined4 DAT_00893b64; extern undefined4 DAT_00893b70; extern undefined4 DAT_00893b98; extern undefined4 DAT_00893b9c;
extern undefined4 DAT_00893ba0; extern undefined4 DAT_00893be4; extern undefined4 DAT_00893be8; extern undefined4 DAT_00893bec;
extern undefined4 DAT_008942d0; extern undefined4 DAT_008942d4; extern undefined4 DAT_008942d8; extern undefined4 DAT_008942fc;
extern undefined4 DAT_00894310; extern undefined4 DAT_00894314; extern undefined4 DAT_00894318; extern undefined4 DAT_0089431c;
extern undefined4 DAT_00894328; extern undefined4 DAT_0089432c; extern undefined4 DAT_00894330; extern undefined4 DAT_00894334;
extern undefined4 DAT_00894338; extern undefined4 DAT_00894339; extern undefined4 DAT_0089433a; extern undefined4 DAT_0089433b;
extern undefined4 DAT_0089433c; extern undefined4 DAT_0089433d; extern undefined4 DAT_0089433e; extern undefined4 DAT_0089433f;
extern undefined4 DAT_00894340; extern undefined4 DAT_00894341; extern undefined4 DAT_00894342; extern undefined4 DAT_00894343;
extern undefined4 DAT_00894344; extern undefined4 DAT_00894345; extern undefined4 DAT_00894346; extern undefined4 DAT_00894347;
extern undefined4 DAT_00894348; extern undefined4 DAT_00894349; extern undefined4 DAT_0089434a; extern undefined4 DAT_0089434b;
extern undefined4 DAT_0089434c; extern undefined4 DAT_0089434d; extern undefined4 DAT_0089434e; extern undefined4 DAT_0089434f;
extern undefined4 DAT_00894350; extern undefined4 DAT_00894351; extern undefined4 DAT_00894352; extern undefined4 DAT_00894353;
extern undefined4 DAT_00894354; extern undefined4 DAT_00894355; extern undefined4 DAT_00894356; extern undefined4 DAT_00894357;
extern undefined4 DAT_00894358; extern undefined4 DAT_00894359; extern undefined4 DAT_0089435a; extern undefined4 DAT_0089435b;
extern undefined4 DAT_0089435c; extern undefined4 DAT_00894360; extern undefined4 DAT_008943a0; extern undefined4 DAT_008944f8;
extern undefined4 DAT_008944fc; extern undefined4 DAT_008944fd; extern undefined4 DAT_008944fe; extern undefined4 DAT_008944ff;
extern undefined4 DAT_00894500; extern undefined4 DAT_00894501; extern undefined4 DAT_00894502; extern undefined4 DAT_00894503;
extern undefined4 DAT_00894504; extern undefined4 DAT_00894505; extern undefined4 DAT_00894506; extern undefined4 DAT_00894507;
extern undefined4 DAT_00894508; extern undefined4 DAT_00894509; extern undefined4 DAT_0089450a; extern undefined4 DAT_0089450b;
extern undefined4 DAT_0089450c; extern undefined4 DAT_0089450d; extern undefined4 DAT_0089450e; extern undefined4 DAT_0089450f;
extern undefined4 DAT_00894510; extern undefined4 DAT_00894511; extern undefined4 DAT_00894512; extern undefined4 DAT_00894513;
extern undefined4 DAT_00894514; extern undefined4 DAT_00894515; extern undefined4 DAT_00894516; extern undefined4 DAT_00894517;
extern undefined4 DAT_00894518; extern undefined4 DAT_00894519; extern undefined4 DAT_0089451a; extern undefined4 DAT_0089451b;
extern undefined4 DAT_0089451c; extern undefined4 DAT_0089451d; extern undefined4 DAT_0089451e; extern undefined4 DAT_0089451f;
extern undefined4 DAT_00894520; extern undefined4 DAT_00894524; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678;
extern undefined4 DAT_008951c0; extern undefined4 DAT_008951c4; extern undefined4 DAT_008951c8; extern undefined4 DAT_008951dc;
extern undefined4 DAT_00895458; extern undefined4 DAT_008c91e4; extern undefined4 DAT_008c91e8; extern undefined4 DAT_008c91ec;
extern undefined4 DAT_008c91f0; extern undefined4 DAT_008c91f4; extern undefined4 DAT_008c91f8; extern undefined4 DAT_008c9778;
extern undefined4 DAT_008c977c; extern undefined4 DAT_008c9780; extern undefined4 DAT_008c9784; extern undefined4 DAT_008c9788;
extern undefined4 DAT_008c978c; extern undefined4 DAT_008c98e8; extern undefined4 DAT_008c98ec; extern undefined4 DAT_008c98f0;
extern undefined4 DAT_008c98f4; extern undefined4 DAT_008c98f8; extern undefined4 DAT_008c98fc; extern undefined4 DAT_008c9900;
extern undefined4 DAT_008c9904; extern undefined4 DAT_008c9908; extern undefined4 DAT_008c990c; extern undefined4 DAT_008c9910;
extern undefined4 DAT_008c9914; extern undefined4 DAT_008ca4f8; extern undefined4 DAT_008ca4fc; extern undefined4 DAT_008ca500;
extern undefined4 DAT_008ca504; extern undefined4 DAT_008ca508; extern undefined4 DAT_008ca50c; extern undefined4 DAT_008ca9d8;
extern undefined4 DAT_008ca9dc; extern undefined4 DAT_008ca9e0; extern undefined4 DAT_008ca9e4; extern undefined4 DAT_008ca9e8;
extern undefined4 DAT_008ca9ec; extern undefined4 DAT_008cab28; extern undefined4 DAT_008cab2c; extern undefined4 DAT_008cab30;
extern undefined4 DAT_008cab34; extern undefined4 DAT_008cab38; extern undefined4 DAT_008cab3c; extern undefined4 DAT_008cac78;
extern undefined4 DAT_008cac7c; extern undefined4 DAT_008cac80; extern undefined4 DAT_008cac84; extern undefined4 DAT_008cac88;
extern undefined4 DAT_008cac8c; extern undefined4 DAT_008cacc0; extern undefined4 DAT_008cacc4; extern undefined4 DAT_008cacc8;
extern undefined4 DAT_008caccc; extern undefined4 DAT_008cacd0; extern undefined4 DAT_008cacd4; extern undefined4 DAT_008cb108;
extern undefined4 DAT_008cb10c; extern undefined4 DAT_008cb110; extern undefined4 DAT_008cb114; extern undefined4 DAT_008cb118;
extern undefined4 DAT_008cb11c; extern undefined4 DAT_008cb168; extern undefined4 DAT_008cb16c; extern undefined4 DAT_008cb170;
extern undefined4 DAT_008cb174; extern undefined4 DAT_008cb178; extern undefined4 DAT_008cb17c; extern undefined4 DAT_008cb198;
extern undefined4 DAT_008cb19c; extern undefined4 DAT_008cb1a0; extern undefined4 DAT_008cb1a4; extern undefined4 DAT_008cb1a8;
extern undefined4 DAT_008cb1ac; extern undefined4 DAT_008cb1b0; extern undefined4 DAT_008cb1b4; extern undefined4 DAT_008cb1b8;
extern undefined4 DAT_008cb1bc; extern undefined4 DAT_008cb1c0; extern undefined4 DAT_008cb1c4; extern undefined4 DAT_008cb408;
extern undefined4 DAT_008cb40c; extern undefined4 DAT_008cb410; extern undefined4 DAT_008cb414; extern undefined4 DAT_008cb418;
extern undefined4 DAT_008cb41c; extern undefined4 DAT_008cbb4c; extern undefined4 DAT_008cbb50; extern undefined4 DAT_008cbb54;
extern undefined4 DAT_008cbb58; extern undefined4 DAT_008cbb5c; extern undefined4 DAT_008cbb60;
