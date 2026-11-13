#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890ba0; extern undefined4 DAT_00890ba4; extern undefined4 DAT_00890ba8; extern undefined4 DAT_00890bc0;
extern undefined4 DAT_00890bcc; extern undefined4 DAT_00890bd0; extern undefined4 DAT_00890bd4; extern undefined4 DAT_00890e1c;
extern undefined4 DAT_00890e20; extern undefined4 DAT_00890e24; extern undefined4 DAT_0089104c; extern undefined4 DAT_00891050;
extern undefined4 DAT_00891054; extern undefined4 DAT_00891c90; extern undefined4 DAT_00891c94; extern undefined4 DAT_00891c98;
extern undefined4 DAT_00892c78; extern undefined4 DAT_00892c7c; extern undefined4 DAT_00892c80; extern undefined4 DAT_0089362c;
extern undefined4 DAT_00893b10; extern undefined4 DAT_00893b1c; extern undefined4 DAT_00893b64; extern undefined4 DAT_00893b70;
extern undefined4 DAT_00894164; extern undefined4 DAT_00894168; extern undefined4 DAT_00894169; extern undefined4 DAT_0089416a;
extern undefined4 DAT_0089416b; extern undefined4 DAT_0089416c; extern undefined4 DAT_0089416d; extern undefined4 DAT_0089416e;
extern undefined4 DAT_0089416f; extern undefined4 DAT_00894170; extern undefined4 DAT_00894171; extern undefined4 DAT_00894172;
extern undefined4 DAT_00894173; extern undefined4 DAT_00894174; extern undefined4 DAT_00894175; extern undefined4 DAT_00894176;
extern undefined4 DAT_00894177; extern undefined4 DAT_00894178; extern undefined4 DAT_00894179; extern undefined4 DAT_0089417a;
extern undefined4 DAT_0089417b; extern undefined4 DAT_0089417c; extern undefined4 DAT_0089417d; extern undefined4 DAT_0089417e;
extern undefined4 DAT_0089417f; extern undefined4 DAT_00894180; extern undefined4 DAT_00894181; extern undefined4 DAT_00894182;
extern undefined4 DAT_00894183; extern undefined4 DAT_00894184; extern undefined4 DAT_00894185; extern undefined4 DAT_00894186;
extern undefined4 DAT_00894187; extern undefined4 DAT_00894188; extern undefined4 DAT_00894189; extern undefined4 DAT_0089418a;
extern undefined4 DAT_0089418b; extern undefined4 DAT_0089418c; extern undefined4 DAT_0089418d; extern undefined4 DAT_0089418e;
extern undefined4 DAT_0089418f; extern undefined4 DAT_00894190; extern undefined4 DAT_00894194; extern undefined4 DAT_008944b4;
extern undefined4 DAT_008944b8; extern undefined4 DAT_008944bc; extern undefined4 DAT_008945e4; extern undefined4 DAT_00894678;
extern undefined4 DAT_00894a9c; extern undefined4 DAT_008951fc; extern undefined4 DAT_008952fc; extern undefined4 DAT_00895300;
extern undefined4 DAT_00895304; extern undefined4 DAT_00895458; extern undefined4 DAT_00895dec; extern undefined4 DAT_008963e0;
extern undefined4 DAT_008965d0; extern undefined4 DAT_008965d4; extern undefined4 DAT_008965d8; extern undefined4 DAT_0089687c;
extern undefined4 DAT_00896880; extern undefined4 DAT_00896884; extern undefined4 DAT_008968c0; extern undefined4 DAT_008968c4;
extern undefined4 DAT_008968c8; extern undefined4 DAT_00896b6c; extern undefined4 DAT_00896b70; extern undefined4 DAT_00896b74;
extern undefined4 DAT_00896fe0; extern undefined4 DAT_00897134; extern undefined4 DAT_00897208; extern undefined4 DAT_0089720c;
extern undefined4 DAT_00897210; extern undefined4 DAT_00898ef0; extern undefined4 DAT_00898ef4; extern undefined4 DAT_00898ef8;
extern undefined4 DAT_008990a4; extern undefined4 DAT_008990a8; extern undefined4 DAT_008990ac; extern undefined4 DAT_008c81ac;
extern undefined4 DAT_008c81b0; extern undefined4 DAT_008c81b4; extern undefined4 DAT_008c81b8; extern undefined4 DAT_008c81bc;
extern undefined4 DAT_008c81c0; extern undefined4 DAT_008c81f4; extern undefined4 DAT_008c81f8; extern undefined4 DAT_008c81fc;
extern undefined4 DAT_008c8200; extern undefined4 DAT_008c8204; extern undefined4 DAT_008c8208; extern undefined4 DAT_008c8374;
extern undefined4 DAT_008c8378; extern undefined4 DAT_008c837c; extern undefined4 DAT_008c8380; extern undefined4 DAT_008c8384;
extern undefined4 DAT_008c8388; extern undefined4 DAT_008c8554; extern undefined4 DAT_008c8558; extern undefined4 DAT_008c855c;
extern undefined4 DAT_008c8560; extern undefined4 DAT_008c8564; extern undefined4 DAT_008c8568; extern undefined4 DAT_008c916c;
extern undefined4 DAT_008c9170; extern undefined4 DAT_008c9174; extern undefined4 DAT_008c9178; extern undefined4 DAT_008c917c;
extern undefined4 DAT_008c9180; extern undefined4 DAT_008c9c60; extern undefined4 DAT_008c9c64; extern undefined4 DAT_008c9c68;
extern undefined4 DAT_008c9c6c; extern undefined4 DAT_008c9c70; extern undefined4 DAT_008c9c74; extern undefined4 DAT_008cb000;
extern undefined4 DAT_008cb004; extern undefined4 DAT_008cb008; extern undefined4 DAT_008cb00c; extern undefined4 DAT_008cb010;
extern undefined4 DAT_008cb014; extern undefined4 DAT_008cb390; extern undefined4 DAT_008cb394; extern undefined4 DAT_008cb398;
extern undefined4 DAT_008cb39c; extern undefined4 DAT_008cb3a0; extern undefined4 DAT_008cb3a4; extern undefined4 DAT_008cbd20;
extern undefined4 DAT_008cbd24; extern undefined4 DAT_008cbd28; extern undefined4 DAT_008cbd2c; extern undefined4 DAT_008cbd30;
extern undefined4 DAT_008cbd34; extern undefined4 DAT_008ccb38; extern undefined4 DAT_008ccb3c; extern undefined4 DAT_008ccb40;
extern undefined4 DAT_008ccb44; extern undefined4 DAT_008ccb48; extern undefined4 DAT_008ccb4c; extern undefined4 DAT_008ccd78;
extern undefined4 DAT_008ccd7c; extern undefined4 DAT_008ccd80; extern undefined4 DAT_008ccd84; extern undefined4 DAT_008ccd88;
extern undefined4 DAT_008ccd8c; extern undefined4 DAT_008ccdf0; extern undefined4 DAT_008ccdf4; extern undefined4 DAT_008ccdf8;
extern undefined4 DAT_008ccdfc; extern undefined4 DAT_008cce00; extern undefined4 DAT_008cce04; extern undefined4 DAT_008cd00c;
extern undefined4 DAT_008cd010; extern undefined4 DAT_008cd014; extern undefined4 DAT_008cd018; extern undefined4 DAT_008cd01c;
extern undefined4 DAT_008cd020; extern undefined4 DAT_008cd9a4; extern undefined4 DAT_008cd9a8; extern undefined4 DAT_008cd9ac;
extern undefined4 DAT_008cd9b0; extern undefined4 DAT_008cd9b4; extern undefined4 DAT_008cd9b8; extern undefined4 DAT_008d12fc;
extern undefined4 DAT_008d1300; extern undefined4 DAT_008d1304; extern undefined4 DAT_008d1308; extern undefined4 DAT_008d130c;
extern undefined4 DAT_008d1310; extern undefined4 DAT_008d14dc; extern undefined4 DAT_008d14e0; extern undefined4 DAT_008d14e4;
extern undefined4 DAT_008d14e8; extern undefined4 DAT_008d14ec; extern undefined4 DAT_008d14f0;
