#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00303b10(); extern undefined4 * fn_006574c4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00656ce8; extern undefined4 DAT_00657514; extern undefined4 DAT_00859738; extern undefined4 DAT_00890238;
extern undefined4 DAT_0089023c; extern undefined4 DAT_008902a0; extern undefined4 DAT_008902a4; extern undefined4 DAT_00890384;
extern undefined4 DAT_00890388; extern undefined4 DAT_0089038c; extern undefined4 DAT_00890390; extern undefined4 DAT_00890758;
extern undefined4 DAT_0089075c; extern undefined4 DAT_00890760; extern undefined4 DAT_00890f08; extern undefined4 DAT_00890f0c;
extern undefined4 DAT_00890f28; extern undefined4 DAT_00890f2c; extern undefined4 DAT_00890f78; extern undefined4 DAT_00890f7c;
extern undefined4 DAT_00890f80; extern undefined4 DAT_00891218; extern undefined4 DAT_0089121c; extern undefined4 DAT_00891278;
extern undefined4 DAT_0089127c; extern undefined4 DAT_008918a4; extern undefined4 DAT_008918a8; extern undefined4 DAT_00891a28;
extern undefined4 DAT_00891a2c; extern undefined4 DAT_00891a30; extern undefined4 DAT_00892250; extern undefined4 DAT_00892254;
extern undefined4 DAT_00892cb0; extern undefined4 DAT_00892cb4; extern undefined4 DAT_00892cb8; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894678; extern undefined4 DAT_00898c74; extern undefined4 DAT_00898c78; extern undefined4 DAT_00898c7c;
extern undefined4 DAT_00898ff4; extern undefined4 DAT_00898ff8; extern undefined4 DAT_00899290; extern undefined4 DAT_00899294;
extern undefined4 DAT_008bf788; extern undefined4 DAT_008c33ec; extern undefined4 DAT_008c3c64; extern undefined4 DAT_008c3d34;
extern undefined4 DAT_008c7854; extern undefined4 DAT_008c7858; extern undefined4 DAT_008c785c; extern undefined4 DAT_008c7860;
extern undefined4 DAT_008c7864; extern undefined4 DAT_008c7868; extern undefined4 DAT_008c789c; extern undefined4 DAT_008c78a0;
extern undefined4 DAT_008c78a4; extern undefined4 DAT_008c78a8; extern undefined4 DAT_008c78ac; extern undefined4 DAT_008c78b0;
extern undefined4 DAT_008c7944; extern undefined4 DAT_008c7948; extern undefined4 DAT_008c794c; extern undefined4 DAT_008c7950;
extern undefined4 DAT_008c7954; extern undefined4 DAT_008c7958; extern undefined4 DAT_008c795c; extern undefined4 DAT_008c7960;
extern undefined4 DAT_008c7964; extern undefined4 DAT_008c7968; extern undefined4 DAT_008c796c; extern undefined4 DAT_008c7970;
extern undefined4 DAT_008c7c1c; extern undefined4 DAT_008c7c20; extern undefined4 DAT_008c7c24; extern undefined4 DAT_008c7c28;
extern undefined4 DAT_008c7c2c; extern undefined4 DAT_008c7c30; extern undefined4 DAT_008c83d4; extern undefined4 DAT_008c83d8;
extern undefined4 DAT_008c83dc; extern undefined4 DAT_008c83e0; extern undefined4 DAT_008c83e4; extern undefined4 DAT_008c83e8;
extern undefined4 DAT_008c8464; extern undefined4 DAT_008c8468; extern undefined4 DAT_008c846c; extern undefined4 DAT_008c8470;
extern undefined4 DAT_008c8474; extern undefined4 DAT_008c8478; extern undefined4 DAT_008c84ac; extern undefined4 DAT_008c84b0;
extern undefined4 DAT_008c84b4; extern undefined4 DAT_008c84b8; extern undefined4 DAT_008c84bc; extern undefined4 DAT_008c84c0;
extern undefined4 DAT_008c8734; extern undefined4 DAT_008c8738; extern undefined4 DAT_008c873c; extern undefined4 DAT_008c8740;
extern undefined4 DAT_008c8744; extern undefined4 DAT_008c8748; extern undefined4 DAT_008c8bb4; extern undefined4 DAT_008c8bb8;
extern undefined4 DAT_008c8bbc; extern undefined4 DAT_008c8bc0; extern undefined4 DAT_008c8bc4; extern undefined4 DAT_008c8bc8;
extern undefined4 DAT_008c8e60; extern undefined4 DAT_008c8e64; extern undefined4 DAT_008c8e68; extern undefined4 DAT_008c8e6c;
extern undefined4 DAT_008c8e70; extern undefined4 DAT_008c8e74; extern undefined4 DAT_008c9004; extern undefined4 DAT_008c9008;
extern undefined4 DAT_008c900c; extern undefined4 DAT_008c9010; extern undefined4 DAT_008c9014; extern undefined4 DAT_008c9018;
extern undefined4 DAT_008c93e8; extern undefined4 DAT_008c93ec; extern undefined4 DAT_008c93f0; extern undefined4 DAT_008c93f4;
extern undefined4 DAT_008c93f8; extern undefined4 DAT_008c93fc; extern undefined4 DAT_008c9cd8; extern undefined4 DAT_008c9cdc;
extern undefined4 DAT_008c9ce0; extern undefined4 DAT_008c9ce4; extern undefined4 DAT_008c9ce8; extern undefined4 DAT_008c9cec;
extern undefined4 DAT_008d043c; extern undefined4 DAT_008d0440; extern undefined4 DAT_008d0444; extern undefined4 DAT_008d0448;
extern undefined4 DAT_008d044c; extern undefined4 DAT_008d0450; extern undefined4 DAT_008d138c; extern undefined4 DAT_008d1390;
extern undefined4 DAT_008d1394; extern undefined4 DAT_008d1398; extern undefined4 DAT_008d139c; extern undefined4 DAT_008d13a0;
extern undefined4 DAT_008d17f0; extern undefined4 DAT_008d17f4; extern undefined4 DAT_008d17f8; extern undefined4 DAT_008d17fc;
extern undefined4 DAT_008d1800; extern undefined4 DAT_008d1804; extern undefined4 DAT_008f7910; extern undefined4 DAT_008f7914;
extern undefined4 DAT_008f7918; extern undefined4 DAT_008f791c; extern undefined4 DAT_008f7d1b; extern undefined4 DAT_008f7d1c;
