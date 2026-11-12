#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008903ac; extern undefined4 DAT_008903b0; extern undefined4 DAT_008903b1; extern undefined4 DAT_008903b2;
extern undefined4 DAT_008903b3; extern undefined4 DAT_008903b4; extern undefined4 DAT_008903b5; extern undefined4 DAT_008903b6;
extern undefined4 DAT_008903b7; extern undefined4 DAT_008903b8; extern undefined4 DAT_008903b9; extern undefined4 DAT_008903ba;
extern undefined4 DAT_008903bb; extern undefined4 DAT_008903bc; extern undefined4 DAT_008903bd; extern undefined4 DAT_008903be;
extern undefined4 DAT_008903bf; extern undefined4 DAT_008903c0; extern undefined4 DAT_008903c1; extern undefined4 DAT_008903c2;
extern undefined4 DAT_008903c3; extern undefined4 DAT_008903c4; extern undefined4 DAT_008903c5; extern undefined4 DAT_008903c6;
extern undefined4 DAT_008903c7; extern undefined4 DAT_008903c8; extern undefined4 DAT_008903c9; extern undefined4 DAT_008903ca;
extern undefined4 DAT_008903cb; extern undefined4 DAT_008903cc; extern undefined4 DAT_008903d0; extern undefined4 DAT_008903d1;
extern undefined4 DAT_008903d2; extern undefined4 DAT_008903d3; extern undefined4 DAT_008903d4; extern undefined4 DAT_008903d8;
extern undefined4 DAT_008903dc; extern undefined4 DAT_00890688; extern undefined4 DAT_0089068c; extern undefined4 DAT_008906ac;
extern undefined4 DAT_008906b0; extern undefined4 DAT_008906c4; extern undefined4 DAT_008906c8; extern undefined4 DAT_0089087c;
extern undefined4 DAT_00890890; extern undefined4 DAT_00890894; extern undefined4 DAT_00890adc; extern undefined4 DAT_00890ae0;
extern undefined4 DAT_00891254; extern undefined4 DAT_00891258; extern undefined4 DAT_008922b8; extern undefined4 DAT_008922bc;
extern undefined4 DAT_00893210; extern undefined4 DAT_0089466c; extern undefined4 DAT_00895c30; extern undefined4 DAT_00895c34;
extern undefined4 DAT_00895c88; extern undefined4 DAT_00895c8c; extern undefined4 DAT_00895cbc; extern undefined4 DAT_00895cc0;
extern undefined4 DAT_00895eec; extern undefined4 DAT_008970dc; extern undefined4 DAT_008970e0; extern undefined4 DAT_008970e4;
extern undefined4 DAT_00897128; extern undefined4 DAT_0089712c; extern undefined4 DAT_00897130; extern undefined4 DAT_0089758c;
extern undefined4 DAT_00897590; extern undefined4 DAT_008988bc; extern undefined4 DAT_008988c0; extern undefined4 DAT_008989e4;
extern undefined4 DAT_008989e8; extern undefined4 DAT_008989ec; extern undefined4 DAT_00898c04; extern undefined4 DAT_00898c08;
extern undefined4 DAT_00898c0c; extern undefined4 DAT_0089a840; extern undefined4 DAT_008c044c; extern undefined4 DAT_008c78e4;
extern undefined4 DAT_008c78e8; extern undefined4 DAT_008c78ec; extern undefined4 DAT_008c78f0; extern undefined4 DAT_008c78f4;
extern undefined4 DAT_008c78f8; extern undefined4 DAT_008c7974; extern undefined4 DAT_008c7978; extern undefined4 DAT_008c797c;
extern undefined4 DAT_008c7980; extern undefined4 DAT_008c7984; extern undefined4 DAT_008c7988; extern undefined4 DAT_008c7a04;
extern undefined4 DAT_008c7a08; extern undefined4 DAT_008c7a0c; extern undefined4 DAT_008c7a10; extern undefined4 DAT_008c7a14;
extern undefined4 DAT_008c7a18; extern undefined4 DAT_008c7a6c; extern undefined4 DAT_008c7a70; extern undefined4 DAT_008c7a74;
extern undefined4 DAT_008c7a78; extern undefined4 DAT_008c7a7c; extern undefined4 DAT_008c7a80; extern undefined4 DAT_008c7ab4;
extern undefined4 DAT_008c7ab8; extern undefined4 DAT_008c7abc; extern undefined4 DAT_008c7ac0; extern undefined4 DAT_008c7ac4;
extern undefined4 DAT_008c7ac8; extern undefined4 DAT_008c7d0c; extern undefined4 DAT_008c7d10; extern undefined4 DAT_008c7d14;
extern undefined4 DAT_008c7d18; extern undefined4 DAT_008c7d1c; extern undefined4 DAT_008c7d20; extern undefined4 DAT_008c805c;
extern undefined4 DAT_008c8060; extern undefined4 DAT_008c8064; extern undefined4 DAT_008c8068; extern undefined4 DAT_008c806c;
extern undefined4 DAT_008c8070; extern undefined4 DAT_008c8b84; extern undefined4 DAT_008c8b88; extern undefined4 DAT_008c8b8c;
extern undefined4 DAT_008c8b90; extern undefined4 DAT_008c8b94; extern undefined4 DAT_008c8b98; extern undefined4 DAT_008c9478;
extern undefined4 DAT_008c947c; extern undefined4 DAT_008c9480; extern undefined4 DAT_008c9484; extern undefined4 DAT_008c9488;
extern undefined4 DAT_008c948c; extern undefined4 DAT_008cc3ac; extern undefined4 DAT_008cc3b0; extern undefined4 DAT_008cc3b4;
extern undefined4 DAT_008cc3b8; extern undefined4 DAT_008cc3bc; extern undefined4 DAT_008cc3c0; extern undefined4 DAT_008cc424;
extern undefined4 DAT_008cc428; extern undefined4 DAT_008cc42c; extern undefined4 DAT_008cc430; extern undefined4 DAT_008cc434;
extern undefined4 DAT_008cc438; extern undefined4 DAT_008cc4b4; extern undefined4 DAT_008cc4b8; extern undefined4 DAT_008cc4bc;
extern undefined4 DAT_008cc4c0; extern undefined4 DAT_008cc4c4; extern undefined4 DAT_008cc4c8; extern undefined4 DAT_008cd7ac;
extern undefined4 DAT_008cd7b0; extern undefined4 DAT_008cd7b4; extern undefined4 DAT_008cd7b8; extern undefined4 DAT_008cd7bc;
extern undefined4 DAT_008cd7c0; extern undefined4 DAT_008cd83c; extern undefined4 DAT_008cd840; extern undefined4 DAT_008cd844;
extern undefined4 DAT_008cd848; extern undefined4 DAT_008cd84c; extern undefined4 DAT_008cd850; extern undefined4 DAT_008cdc94;
extern undefined4 DAT_008cdc98; extern undefined4 DAT_008cdc9c; extern undefined4 DAT_008cdca0; extern undefined4 DAT_008cdca4;
extern undefined4 DAT_008cdca8; extern undefined4 DAT_008d00f4; extern undefined4 DAT_008d00f8; extern undefined4 DAT_008d00fc;
extern undefined4 DAT_008d0100; extern undefined4 DAT_008d0104; extern undefined4 DAT_008d0108; extern undefined4 DAT_008d02ec;
extern undefined4 DAT_008d02f0; extern undefined4 DAT_008d02f4; extern undefined4 DAT_008d02f8; extern undefined4 DAT_008d02fc;
extern undefined4 DAT_008d0300; extern undefined4 DAT_008d03ac; extern undefined4 DAT_008d03b0; extern undefined4 DAT_008d03b4;
extern undefined4 DAT_008d03b8; extern undefined4 DAT_008d03bc; extern undefined4 DAT_008d03c0;
