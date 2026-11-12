#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890354; extern undefined4 DAT_00890358; extern undefined4 DAT_00890f18; extern undefined4 DAT_00890f1c;
extern undefined4 DAT_00893b64; extern undefined4 DAT_008945c0; extern undefined4 DAT_008945c4; extern undefined4 DAT_008945c8;
extern undefined4 DAT_008945f8; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_00894bcc;
extern undefined4 DAT_00894bd0; extern undefined4 DAT_00894bd1; extern undefined4 DAT_00894bd2; extern undefined4 DAT_00894bd3;
extern undefined4 DAT_00894bd4; extern undefined4 DAT_00894bd5; extern undefined4 DAT_00894bd6; extern undefined4 DAT_00894bd7;
extern undefined4 DAT_00894bd8; extern undefined4 DAT_00894bd9; extern undefined4 DAT_00894bda; extern undefined4 DAT_00894bdb;
extern undefined4 DAT_00894bdc; extern undefined4 DAT_00894bdd; extern undefined4 DAT_00894bde; extern undefined4 DAT_00894bdf;
extern undefined4 DAT_00894be0; extern undefined4 DAT_00894be1; extern undefined4 DAT_00894be2; extern undefined4 DAT_00894be3;
extern undefined4 DAT_00894be4; extern undefined4 DAT_00894be5; extern undefined4 DAT_00894be6; extern undefined4 DAT_00894be7;
extern undefined4 DAT_00894be8; extern undefined4 DAT_00894be9; extern undefined4 DAT_00894bea; extern undefined4 DAT_00894beb;
extern undefined4 DAT_00894bec; extern undefined4 DAT_00894bed; extern undefined4 DAT_00894bee; extern undefined4 DAT_00894bef;
extern undefined4 DAT_00894bf0; extern undefined4 DAT_00894bf1; extern undefined4 DAT_00894bf2; extern undefined4 DAT_00894bf3;
extern undefined4 DAT_00894bf4; extern undefined4 DAT_00894bf8; extern undefined4 DAT_00895980; extern undefined4 DAT_00895984;
extern undefined4 DAT_00895985; extern undefined4 DAT_00895986; extern undefined4 DAT_00895987; extern undefined4 DAT_00895988;
extern undefined4 DAT_00895989; extern undefined4 DAT_0089598a; extern undefined4 DAT_0089598b; extern undefined4 DAT_0089598c;
extern undefined4 DAT_0089598d; extern undefined4 DAT_0089598e; extern undefined4 DAT_0089598f; extern undefined4 DAT_00895990;
extern undefined4 DAT_00895991; extern undefined4 DAT_00895992; extern undefined4 DAT_00895993; extern undefined4 DAT_00895994;
extern undefined4 DAT_00895995; extern undefined4 DAT_00895996; extern undefined4 DAT_00895997; extern undefined4 DAT_00895998;
extern undefined4 DAT_00895999; extern undefined4 DAT_0089599a; extern undefined4 DAT_0089599b; extern undefined4 DAT_0089599c;
extern undefined4 DAT_0089599d; extern undefined4 DAT_0089599e; extern undefined4 DAT_0089599f; extern undefined4 DAT_008959a0;
extern undefined4 DAT_008959a1; extern undefined4 DAT_008959a2; extern undefined4 DAT_008959a3; extern undefined4 DAT_008959a4;
extern undefined4 DAT_008959a5; extern undefined4 DAT_008959a6; extern undefined4 DAT_008959a7; extern undefined4 DAT_008959b8;
extern undefined4 DAT_008959bc; extern undefined4 DAT_00895c1c; extern undefined4 DAT_00895c28; extern undefined4 DAT_00895c2c;
extern undefined4 DAT_00895eec; extern undefined4 DAT_00896414; extern undefined4 DAT_00896418; extern undefined4 DAT_00896419;
extern undefined4 DAT_0089641a; extern undefined4 DAT_0089641b; extern undefined4 DAT_0089641c; extern undefined4 DAT_0089641d;
extern undefined4 DAT_0089641e; extern undefined4 DAT_0089641f; extern undefined4 DAT_00896420; extern undefined4 DAT_00896421;
extern undefined4 DAT_00896422; extern undefined4 DAT_00896423; extern undefined4 DAT_00896424; extern undefined4 DAT_00896425;
extern undefined4 DAT_00896426; extern undefined4 DAT_00896427; extern undefined4 DAT_00896428; extern undefined4 DAT_00896429;
extern undefined4 DAT_0089642a; extern undefined4 DAT_0089642b; extern undefined4 DAT_0089642c; extern undefined4 DAT_0089642d;
extern undefined4 DAT_0089642e; extern undefined4 DAT_0089642f; extern undefined4 DAT_00896430; extern undefined4 DAT_00896431;
extern undefined4 DAT_00896432; extern undefined4 DAT_00896433; extern undefined4 DAT_00896434; extern undefined4 DAT_00896435;
extern undefined4 DAT_00896436; extern undefined4 DAT_00896437; extern undefined4 DAT_00896438; extern undefined4 DAT_00896439;
extern undefined4 DAT_0089643a; extern undefined4 DAT_0089643b; extern undefined4 DAT_0089643c; extern undefined4 DAT_00896440;
extern undefined4 DAT_00896f70; extern undefined4 DAT_00896f74; extern undefined4 DAT_00896f78; extern undefined4 DAT_00897040;
extern undefined4 DAT_00897068; extern undefined4 DAT_0089706c; extern undefined4 DAT_00897070; extern undefined4 DAT_0089708c;
extern undefined4 DAT_00897090; extern undefined4 DAT_00897094; extern undefined4 DAT_00897134; extern undefined4 DAT_008989ac;
extern undefined4 DAT_008989b0; extern undefined4 DAT_008989b4; extern undefined4 DAT_00898afc; extern undefined4 DAT_00898b00;
extern undefined4 DAT_00898b04; extern undefined4 DAT_00898ee8; extern undefined4 DAT_00898eec; extern undefined4 DAT_00899234;
extern undefined4 DAT_00899238; extern undefined4 DAT_0089923c; extern undefined4 DAT_008c8404; extern undefined4 DAT_008c8408;
extern undefined4 DAT_008c840c; extern undefined4 DAT_008c8410; extern undefined4 DAT_008c8414; extern undefined4 DAT_008c8418;
extern undefined4 DAT_008cb468; extern undefined4 DAT_008cb46c; extern undefined4 DAT_008cb470; extern undefined4 DAT_008cb474;
extern undefined4 DAT_008cb478; extern undefined4 DAT_008cb47c; extern undefined4 DAT_008cb6a8; extern undefined4 DAT_008cb6ac;
extern undefined4 DAT_008cb6b0; extern undefined4 DAT_008cb6b4; extern undefined4 DAT_008cb6b8; extern undefined4 DAT_008cb6bc;
extern undefined4 DAT_008cc1a0; extern undefined4 DAT_008cc1a4; extern undefined4 DAT_008cc1a8; extern undefined4 DAT_008cc1ac;
extern undefined4 DAT_008cc1b0; extern undefined4 DAT_008cc1b4; extern undefined4 DAT_008cc394; extern undefined4 DAT_008cc398;
extern undefined4 DAT_008cc39c; extern undefined4 DAT_008cc3a0; extern undefined4 DAT_008cc3a4; extern undefined4 DAT_008cc3a8;
extern undefined4 DAT_008cca00; extern undefined4 DAT_008cca04; extern undefined4 DAT_008cca08; extern undefined4 DAT_008cca0c;
extern undefined4 DAT_008cca10; extern undefined4 DAT_008cca14; extern undefined4 DAT_008cd5e4; extern undefined4 DAT_008cd5e8;
extern undefined4 DAT_008cd5ec; extern undefined4 DAT_008cd5f0; extern undefined4 DAT_008cd5f4; extern undefined4 DAT_008cd5f8;
extern undefined4 DAT_008cd734; extern undefined4 DAT_008cd738; extern undefined4 DAT_008cd73c; extern undefined4 DAT_008cd740;
extern undefined4 DAT_008cd744; extern undefined4 DAT_008cd748; extern undefined4 DAT_008cd77c; extern undefined4 DAT_008cd780;
extern undefined4 DAT_008cd784; extern undefined4 DAT_008cd788; extern undefined4 DAT_008cd78c; extern undefined4 DAT_008cd790;
extern undefined4 DAT_008d02d4; extern undefined4 DAT_008d02d8; extern undefined4 DAT_008d02dc; extern undefined4 DAT_008d02e0;
extern undefined4 DAT_008d02e4; extern undefined4 DAT_008d02e8; extern undefined4 DAT_008d037c; extern undefined4 DAT_008d0380;
extern undefined4 DAT_008d0384; extern undefined4 DAT_008d0388; extern undefined4 DAT_008d038c; extern undefined4 DAT_008d0390;
extern undefined4 DAT_008d12e4; extern undefined4 DAT_008d12e8; extern undefined4 DAT_008d12ec; extern undefined4 DAT_008d12f0;
extern undefined4 DAT_008d12f4; extern undefined4 DAT_008d12f8; extern undefined4 DAT_008d1734; extern undefined4 DAT_008d1738;
extern undefined4 DAT_008d173c; extern undefined4 DAT_008d1740; extern undefined4 DAT_008d1744; extern undefined4 DAT_008d1748;
