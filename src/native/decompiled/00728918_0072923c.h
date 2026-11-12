#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00150284(); extern undefined4 fn_00150294(); extern undefined4 fn_0016720c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893b1c; extern undefined4 DAT_008944d8; extern undefined4 DAT_008944dc; extern undefined4 DAT_008944e0;
extern undefined4 DAT_008944e4; extern undefined4 DAT_008944e8; extern undefined4 DAT_008944ec; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894678; extern undefined4 DAT_008951d8; extern undefined4 DAT_008951fc; extern undefined4 DAT_008953e0;
extern undefined4 DAT_00896fe8; extern undefined4 DAT_00897134; extern undefined4 DAT_00897158; extern undefined4 DAT_00898ce0;
extern undefined4 DAT_00898ce4; extern undefined4 DAT_00898ce8; extern undefined4 DAT_00898cec; extern undefined4 DAT_00898cf0;
extern undefined4 DAT_00898cf4; extern undefined4 DAT_00898da0; extern undefined4 DAT_00898da4; extern undefined4 DAT_00898da5;
extern undefined4 DAT_00898da6; extern undefined4 DAT_00898da7; extern undefined4 DAT_00898da8; extern undefined4 DAT_00898da9;
extern undefined4 DAT_00898daa; extern undefined4 DAT_00898dab; extern undefined4 DAT_00898dac; extern undefined4 DAT_00898dad;
extern undefined4 DAT_00898dae; extern undefined4 DAT_00898daf; extern undefined4 DAT_00898db0; extern undefined4 DAT_00898db1;
extern undefined4 DAT_00898db2; extern undefined4 DAT_00898db3; extern undefined4 DAT_00898db4; extern undefined4 DAT_00898db5;
extern undefined4 DAT_00898db6; extern undefined4 DAT_00898db7; extern undefined4 DAT_00898db8; extern undefined4 DAT_00898db9;
extern undefined4 DAT_00898dba; extern undefined4 DAT_00898dbb; extern undefined4 DAT_00898dbc; extern undefined4 DAT_00898dbd;
extern undefined4 DAT_00898dbe; extern undefined4 DAT_00898dbf; extern undefined4 DAT_00898dc0; extern undefined4 DAT_00898dc1;
extern undefined4 DAT_00898dc2; extern undefined4 DAT_00898dc3; extern undefined4 DAT_00898dc4; extern undefined4 DAT_00898dc5;
extern undefined4 DAT_00898dc6; extern undefined4 DAT_00898dc7; extern undefined4 DAT_00898dc8; extern undefined4 DAT_00898dcc;
extern undefined4 DAT_00898e4c; extern undefined4 DAT_00898e50; extern undefined4 DAT_00898e51; extern undefined4 DAT_00898e52;
extern undefined4 DAT_00898e53; extern undefined4 DAT_00898e54; extern undefined4 DAT_00898e55; extern undefined4 DAT_00898e56;
extern undefined4 DAT_00898e57; extern undefined4 DAT_00898e58; extern undefined4 DAT_00898e59; extern undefined4 DAT_00898e5a;
extern undefined4 DAT_00898e5b; extern undefined4 DAT_00898e5c; extern undefined4 DAT_00898e5d; extern undefined4 DAT_00898e5e;
extern undefined4 DAT_00898e5f; extern undefined4 DAT_00898e60; extern undefined4 DAT_00898e61; extern undefined4 DAT_00898e62;
extern undefined4 DAT_00898e63; extern undefined4 DAT_00898e64; extern undefined4 DAT_00898e65; extern undefined4 DAT_00898e66;
extern undefined4 DAT_00898e67; extern undefined4 DAT_00898e68; extern undefined4 DAT_00898e69; extern undefined4 DAT_00898e6a;
extern undefined4 DAT_00898e6b; extern undefined4 DAT_00898e6c; extern undefined4 DAT_00898e6d; extern undefined4 DAT_00898e6e;
extern undefined4 DAT_00898e6f; extern undefined4 DAT_00898e70; extern undefined4 DAT_00898e71; extern undefined4 DAT_00898e72;
extern undefined4 DAT_00898e73; extern undefined4 DAT_00898e74; extern undefined4 DAT_00898e78; extern undefined4 DAT_00898e7c;
extern undefined4 DAT_00898e80; extern undefined4 DAT_00898e81; extern undefined4 DAT_00898e82; extern undefined4 DAT_00898e83;
extern undefined4 DAT_00898e84; extern undefined4 DAT_00898e85; extern undefined4 DAT_00898e86; extern undefined4 DAT_00898e87;
extern undefined4 DAT_00898e88; extern undefined4 DAT_00898e89; extern undefined4 DAT_00898e8a; extern undefined4 DAT_00898e8b;
extern undefined4 DAT_00898e8c; extern undefined4 DAT_00898e8d; extern undefined4 DAT_00898e8e; extern undefined4 DAT_00898e8f;
extern undefined4 DAT_00898e90; extern undefined4 DAT_00898e91; extern undefined4 DAT_00898e92; extern undefined4 DAT_00898e93;
extern undefined4 DAT_00898e94; extern undefined4 DAT_00898e95; extern undefined4 DAT_00898e96; extern undefined4 DAT_00898e97;
extern undefined4 DAT_00898e98; extern undefined4 DAT_00898e99; extern undefined4 DAT_00898e9a; extern undefined4 DAT_00898e9b;
extern undefined4 DAT_00898e9c; extern undefined4 DAT_00898e9d; extern undefined4 DAT_00898e9e; extern undefined4 DAT_00898e9f;
extern undefined4 DAT_00898ea0; extern undefined4 DAT_00898ea1; extern undefined4 DAT_00898ea2; extern undefined4 DAT_00898ea3;
extern undefined4 DAT_00898ea4; extern undefined4 DAT_00898ea8; extern undefined4 DAT_00898eac; extern undefined4 DAT_00898eb0;
extern undefined4 DAT_00898eb4; extern undefined4 DAT_00898eb8; extern undefined4 DAT_00898ebc; extern undefined4 DAT_00898ec0;
extern undefined4 DAT_00898edc; extern undefined4 DAT_00898ee0; extern undefined4 DAT_00898ee4; extern undefined4 DAT_0089a7c8;
extern undefined4 DAT_0089a7cc; extern undefined4 DAT_008cb3d8; extern undefined4 DAT_008cb3dc; extern undefined4 DAT_008cb3e0;
extern undefined4 DAT_008cb3e4; extern undefined4 DAT_008cb3e8; extern undefined4 DAT_008cb3ec; extern undefined4 DAT_008cb3f0;
extern undefined4 DAT_008cb3f4; extern undefined4 DAT_008cb3f8; extern undefined4 DAT_008cb3fc; extern undefined4 DAT_008cb400;
extern undefined4 DAT_008cb404; extern undefined4 DAT_008d1194; extern undefined4 DAT_008d1198; extern undefined4 DAT_008d119c;
extern undefined4 DAT_008d11a0; extern undefined4 DAT_008d11a4; extern undefined4 DAT_008d11a8; extern undefined4 DAT_008d11ac;
extern undefined4 DAT_008d11b0; extern undefined4 DAT_008d11b4; extern undefined4 DAT_008d11b8; extern undefined4 DAT_008d11bc;
extern undefined4 DAT_008d11c0; extern undefined4 DAT_008d120c; extern undefined4 DAT_008d1210; extern undefined4 DAT_008d1214;
extern undefined4 DAT_008d1218; extern undefined4 DAT_008d121c; extern undefined4 DAT_008d1220; extern undefined4 DAT_008d1254;
extern undefined4 DAT_008d1258; extern undefined4 DAT_008d125c; extern undefined4 DAT_008d1260; extern undefined4 DAT_008d1264;
extern undefined4 DAT_008d1268; extern undefined4 DAT_008d126c; extern undefined4 DAT_008d1270; extern undefined4 DAT_008d1274;
extern undefined4 DAT_008d1278; extern undefined4 DAT_008d127c; extern undefined4 DAT_008d1280; extern undefined4 DAT_008d1284;
extern undefined4 DAT_008d1288; extern undefined4 DAT_008d128c; extern undefined4 DAT_008d1290; extern undefined4 DAT_008d1294;
extern undefined4 DAT_008d1298; extern undefined4 DAT_008d129c; extern undefined4 DAT_008d12a0; extern undefined4 DAT_008d12a4;
extern undefined4 DAT_008d12a8; extern undefined4 DAT_008d12ac; extern undefined4 DAT_008d12b0; extern undefined4 DAT_008d12cc;
extern undefined4 DAT_008d12d0; extern undefined4 DAT_008d12d4; extern undefined4 DAT_008d12d8; extern undefined4 DAT_008d12dc;
extern undefined4 DAT_008d12e0; extern undefined4 DAT_008e3079; extern undefined4 DAT_008e307a; extern undefined4 DAT_008e3104;
extern undefined4 DAT_008e3108;
