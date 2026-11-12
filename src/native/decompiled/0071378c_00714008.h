#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern float fn_001a4a80();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890764; extern undefined4 DAT_00890768; extern undefined4 DAT_0089076c; extern undefined4 DAT_0089077c;
extern undefined4 DAT_00890780; extern undefined4 DAT_00890784; extern undefined4 DAT_00890788; extern undefined4 DAT_0089078c;
extern undefined4 DAT_00890790; extern undefined4 DAT_0089097c; extern undefined4 DAT_00890980; extern undefined4 DAT_00890c28;
extern undefined4 DAT_00890c2c; extern undefined4 DAT_00891090; extern undefined4 DAT_00891094; extern undefined4 DAT_00891098;
extern undefined4 DAT_00891868; extern undefined4 DAT_0089186c; extern undefined4 DAT_008918ac; extern undefined4 DAT_008918fc;
extern undefined4 DAT_00891900; extern undefined4 DAT_00891a54; extern undefined4 DAT_00891a58; extern undefined4 DAT_00891a5c;
extern undefined4 DAT_00891d0c; extern undefined4 DAT_00891d10; extern undefined4 DAT_00891d14; extern undefined4 DAT_00891e1c;
extern undefined4 DAT_00891e20; extern undefined4 DAT_00891e24; extern undefined4 DAT_00892e88; extern undefined4 DAT_00892e8c;
extern undefined4 DAT_00892e90; extern undefined4 DAT_00892f40; extern undefined4 DAT_00892f44; extern undefined4 DAT_00892f48;
extern undefined4 DAT_008930c8; extern undefined4 DAT_008930cc; extern undefined4 DAT_00893b1c; extern undefined4 DAT_00893b64;
extern undefined4 DAT_00893bf8; extern undefined4 DAT_00893bfc; extern undefined4 DAT_00893c00; extern undefined4 DAT_00894364;
extern undefined4 DAT_00894368; extern undefined4 DAT_0089436c; extern undefined4 DAT_0089438c; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00896514; extern undefined4 DAT_008989a0; extern undefined4 DAT_008989a4; extern undefined4 DAT_008989a8;
extern undefined4 DAT_00898b80; extern undefined4 DAT_00898b84; extern undefined4 DAT_00898b88; extern undefined4 DAT_008c7c34;
extern undefined4 DAT_008c7c38; extern undefined4 DAT_008c7c3c; extern undefined4 DAT_008c7c40; extern undefined4 DAT_008c7c44;
extern undefined4 DAT_008c7c48; extern undefined4 DAT_008c7c64; extern undefined4 DAT_008c7c68; extern undefined4 DAT_008c7c6c;
extern undefined4 DAT_008c7c70; extern undefined4 DAT_008c7c74; extern undefined4 DAT_008c7c78; extern undefined4 DAT_008c7c7c;
extern undefined4 DAT_008c7c80; extern undefined4 DAT_008c7c84; extern undefined4 DAT_008c7c88; extern undefined4 DAT_008c7c8c;
extern undefined4 DAT_008c7c90; extern undefined4 DAT_008c7e44; extern undefined4 DAT_008c7e48; extern undefined4 DAT_008c7e4c;
extern undefined4 DAT_008c7e50; extern undefined4 DAT_008c7e54; extern undefined4 DAT_008c7e58; extern undefined4 DAT_008c7e5c;
extern undefined4 DAT_008c7e60; extern undefined4 DAT_008c7e64; extern undefined4 DAT_008c7e68; extern undefined4 DAT_008c7e6c;
extern undefined4 DAT_008c7e70; extern undefined4 DAT_008c7e74; extern undefined4 DAT_008c7e78; extern undefined4 DAT_008c7e7c;
extern undefined4 DAT_008c7e80; extern undefined4 DAT_008c7e84; extern undefined4 DAT_008c7e88; extern undefined4 DAT_008c7e8c;
extern undefined4 DAT_008c7e90; extern undefined4 DAT_008c7e94; extern undefined4 DAT_008c7e98; extern undefined4 DAT_008c7e9c;
extern undefined4 DAT_008c7ea0; extern undefined4 DAT_008c82b4; extern undefined4 DAT_008c82b8; extern undefined4 DAT_008c82bc;
extern undefined4 DAT_008c82c0; extern undefined4 DAT_008c82c4; extern undefined4 DAT_008c82c8; extern undefined4 DAT_008c8584;
extern undefined4 DAT_008c8588; extern undefined4 DAT_008c858c; extern undefined4 DAT_008c8590; extern undefined4 DAT_008c8594;
extern undefined4 DAT_008c8598; extern undefined4 DAT_008c8dd0; extern undefined4 DAT_008c8dd4; extern undefined4 DAT_008c8dd8;
extern undefined4 DAT_008c8ddc; extern undefined4 DAT_008c8de0; extern undefined4 DAT_008c8de4; extern undefined4 DAT_008c8e78;
extern undefined4 DAT_008c8e7c; extern undefined4 DAT_008c8e80; extern undefined4 DAT_008c8efc; extern undefined4 DAT_008c8f00;
extern undefined4 DAT_008c8f04; extern undefined4 DAT_008c8f08; extern undefined4 DAT_008c8f0c; extern undefined4 DAT_008c8f10;
extern undefined4 DAT_008c901c; extern undefined4 DAT_008c9020; extern undefined4 DAT_008c9024; extern undefined4 DAT_008c9028;
extern undefined4 DAT_008c902c; extern undefined4 DAT_008c9030; extern undefined4 DAT_008c91b4; extern undefined4 DAT_008c91b8;
extern undefined4 DAT_008c91bc; extern undefined4 DAT_008c91c0; extern undefined4 DAT_008c91c4; extern undefined4 DAT_008c91c8;
extern undefined4 DAT_008c929c; extern undefined4 DAT_008c92a0; extern undefined4 DAT_008c92a4; extern undefined4 DAT_008c92a8;
extern undefined4 DAT_008c92ac; extern undefined4 DAT_008c92b0; extern undefined4 DAT_008c9e58; extern undefined4 DAT_008c9e5c;
extern undefined4 DAT_008c9e60; extern undefined4 DAT_008c9e64; extern undefined4 DAT_008c9e68; extern undefined4 DAT_008c9e6c;
extern undefined4 DAT_008c9fa8; extern undefined4 DAT_008c9fac; extern undefined4 DAT_008c9fb0; extern undefined4 DAT_008c9fb4;
extern undefined4 DAT_008c9fb8; extern undefined4 DAT_008c9fbc; extern undefined4 DAT_008ca2a0; extern undefined4 DAT_008ca2a4;
extern undefined4 DAT_008ca2a8; extern undefined4 DAT_008ca2ac; extern undefined4 DAT_008ca2b0; extern undefined4 DAT_008ca2b4;
extern undefined4 DAT_008cacd8; extern undefined4 DAT_008cacdc; extern undefined4 DAT_008cace0; extern undefined4 DAT_008cace4;
extern undefined4 DAT_008cace8; extern undefined4 DAT_008cacec; extern undefined4 DAT_008cb1c8; extern undefined4 DAT_008cb1cc;
extern undefined4 DAT_008cb1d0; extern undefined4 DAT_008cb1d4; extern undefined4 DAT_008cb1d8; extern undefined4 DAT_008cb1dc;
extern undefined4 DAT_008d02bc; extern undefined4 DAT_008d02c0; extern undefined4 DAT_008d02c4; extern undefined4 DAT_008d02c8;
extern undefined4 DAT_008d02cc; extern undefined4 DAT_008d02d0; extern undefined4 DAT_008d0394; extern undefined4 DAT_008d0398;
extern undefined4 DAT_008d039c; extern undefined4 DAT_008d03a0; extern undefined4 DAT_008d03a4; extern undefined4 DAT_008d03a8;
