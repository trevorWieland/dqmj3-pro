#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890abc; extern undefined4 DAT_008929a4; extern undefined4 DAT_008929a8; extern undefined4 DAT_00892a10;
extern undefined4 DAT_00892a14; extern undefined4 DAT_00892a15; extern undefined4 DAT_00892a16; extern undefined4 DAT_00892a17;
extern undefined4 DAT_00892a18; extern undefined4 DAT_00892a19; extern undefined4 DAT_00892a1a; extern undefined4 DAT_00892a1b;
extern undefined4 DAT_00892a1c; extern undefined4 DAT_00892a1d; extern undefined4 DAT_00892a1e; extern undefined4 DAT_00892a1f;
extern undefined4 DAT_00892a20; extern undefined4 DAT_00892a21; extern undefined4 DAT_00892a22; extern undefined4 DAT_00892a23;
extern undefined4 DAT_00892a24; extern undefined4 DAT_00892a25; extern undefined4 DAT_00892a26; extern undefined4 DAT_00892a27;
extern undefined4 DAT_00892a28; extern undefined4 DAT_00892a29; extern undefined4 DAT_00892a2a; extern undefined4 DAT_00892a2b;
extern undefined4 DAT_00892a2c; extern undefined4 DAT_00892a2d; extern undefined4 DAT_00892a2e; extern undefined4 DAT_00892a2f;
extern undefined4 DAT_00892a30; extern undefined4 DAT_00892a31; extern undefined4 DAT_00892a32; extern undefined4 DAT_00892a33;
extern undefined4 DAT_00892a34; extern undefined4 DAT_00892a35; extern undefined4 DAT_00892a36; extern undefined4 DAT_00892a37;
extern undefined4 DAT_00892a38; extern undefined4 DAT_00892a3c; extern undefined4 DAT_00892a40; extern undefined4 DAT_00892a44;
extern undefined4 DAT_00892a45; extern undefined4 DAT_00892a46; extern undefined4 DAT_00892a47; extern undefined4 DAT_00892a48;
extern undefined4 DAT_00892a49; extern undefined4 DAT_00892a4a; extern undefined4 DAT_00892a4b; extern undefined4 DAT_00892a4c;
extern undefined4 DAT_00892a4d; extern undefined4 DAT_00892a4e; extern undefined4 DAT_00892a4f; extern undefined4 DAT_00892a50;
extern undefined4 DAT_00892a51; extern undefined4 DAT_00892a52; extern undefined4 DAT_00892a53; extern undefined4 DAT_00892a54;
extern undefined4 DAT_00892a55; extern undefined4 DAT_00892a56; extern undefined4 DAT_00892a57; extern undefined4 DAT_00892a58;
extern undefined4 DAT_00892a59; extern undefined4 DAT_00892a5a; extern undefined4 DAT_00892a5b; extern undefined4 DAT_00892a5c;
extern undefined4 DAT_00892a5d; extern undefined4 DAT_00892a5e; extern undefined4 DAT_00892a5f; extern undefined4 DAT_00892a60;
extern undefined4 DAT_00892a61; extern undefined4 DAT_00892a62; extern undefined4 DAT_00892a63; extern undefined4 DAT_00892a64;
extern undefined4 DAT_00892a65; extern undefined4 DAT_00892a66; extern undefined4 DAT_00892a67; extern undefined4 DAT_00892a68;
extern undefined4 DAT_00892a6c; extern undefined4 DAT_00892b08; extern undefined4 DAT_00892b0c; extern undefined4 DAT_00892b10;
extern undefined4 DAT_00892e94; extern undefined4 DAT_00892e98; extern undefined4 DAT_00892e9c; extern undefined4 DAT_008930d8;
extern undefined4 DAT_008930dc; extern undefined4 DAT_0089392c; extern undefined4 DAT_00893988; extern undefined4 DAT_0089398c;
extern undefined4 DAT_0089398d; extern undefined4 DAT_0089398e; extern undefined4 DAT_0089398f; extern undefined4 DAT_00893990;
extern undefined4 DAT_00893991; extern undefined4 DAT_00893992; extern undefined4 DAT_00893993; extern undefined4 DAT_00893994;
extern undefined4 DAT_00893995; extern undefined4 DAT_00893996; extern undefined4 DAT_00893997; extern undefined4 DAT_00893998;
extern undefined4 DAT_00893999; extern undefined4 DAT_0089399a; extern undefined4 DAT_0089399b; extern undefined4 DAT_0089399c;
extern undefined4 DAT_0089399d; extern undefined4 DAT_0089399e; extern undefined4 DAT_0089399f; extern undefined4 DAT_008939a0;
extern undefined4 DAT_008939a1; extern undefined4 DAT_008939a2; extern undefined4 DAT_008939a3; extern undefined4 DAT_008939a4;
extern undefined4 DAT_008939a5; extern undefined4 DAT_008939a6; extern undefined4 DAT_008939a7; extern undefined4 DAT_008939a8;
extern undefined4 DAT_008939a9; extern undefined4 DAT_008939aa; extern undefined4 DAT_008939ab; extern undefined4 DAT_008939ac;
extern undefined4 DAT_008939ad; extern undefined4 DAT_008939ae; extern undefined4 DAT_008939af; extern undefined4 DAT_008939b0;
extern undefined4 DAT_008939b4; extern undefined4 DAT_00893b64; extern undefined4 DAT_00893b70; extern undefined4 DAT_00894010;
extern undefined4 DAT_00894014; extern undefined4 DAT_00894015; extern undefined4 DAT_00894016; extern undefined4 DAT_00894017;
extern undefined4 DAT_00894018; extern undefined4 DAT_0089401c; extern undefined4 DAT_00894248; extern undefined4 DAT_0089424c;
extern undefined4 DAT_00894250; extern undefined4 DAT_00894380; extern undefined4 DAT_00894384; extern undefined4 DAT_00894388;
extern undefined4 DAT_008943b0; extern undefined4 DAT_008943b4; extern undefined4 DAT_008943b8; extern undefined4 DAT_00894444;
extern undefined4 DAT_00894484; extern undefined4 DAT_00894488; extern undefined4 DAT_0089448c; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894678; extern undefined4 DAT_00895114; extern undefined4 DAT_00895118; extern undefined4 DAT_0089511c;
extern undefined4 DAT_008951dc; extern undefined4 DAT_00895b64; extern undefined4 DAT_008964b8; extern undefined4 DAT_008964bc;
extern undefined4 DAT_008964c0; extern undefined4 DAT_008c9a68; extern undefined4 DAT_008c9a6c; extern undefined4 DAT_008c9a70;
extern undefined4 DAT_008c9a74; extern undefined4 DAT_008c9a78; extern undefined4 DAT_008c9a7c; extern undefined4 DAT_008c9a80;
extern undefined4 DAT_008c9a84; extern undefined4 DAT_008c9a88; extern undefined4 DAT_008c9a8c; extern undefined4 DAT_008c9a90;
extern undefined4 DAT_008c9a94; extern undefined4 DAT_008c9ae0; extern undefined4 DAT_008c9ae4; extern undefined4 DAT_008c9ae8;
extern undefined4 DAT_008c9aec; extern undefined4 DAT_008c9af0; extern undefined4 DAT_008c9af4; extern undefined4 DAT_008c9e70;
extern undefined4 DAT_008c9e74; extern undefined4 DAT_008c9e78; extern undefined4 DAT_008c9e7c; extern undefined4 DAT_008c9e80;
extern undefined4 DAT_008c9e84; extern undefined4 DAT_008ca2d0; extern undefined4 DAT_008ca2d4; extern undefined4 DAT_008ca2d8;
extern undefined4 DAT_008ca2dc; extern undefined4 DAT_008ca2e0; extern undefined4 DAT_008ca2e4; extern undefined4 DAT_008ca9c0;
extern undefined4 DAT_008ca9c4; extern undefined4 DAT_008ca9c8; extern undefined4 DAT_008ca9cc; extern undefined4 DAT_008ca9d0;
extern undefined4 DAT_008ca9d4; extern undefined4 DAT_008caf88; extern undefined4 DAT_008caf8c; extern undefined4 DAT_008caf90;
extern undefined4 DAT_008caf94; extern undefined4 DAT_008caf98; extern undefined4 DAT_008caf9c; extern undefined4 DAT_008cb090;
extern undefined4 DAT_008cb094; extern undefined4 DAT_008cb098; extern undefined4 DAT_008cb09c; extern undefined4 DAT_008cb0a0;
extern undefined4 DAT_008cb0a4; extern undefined4 DAT_008cb1f8; extern undefined4 DAT_008cb1fc; extern undefined4 DAT_008cb200;
extern undefined4 DAT_008cb204; extern undefined4 DAT_008cb208; extern undefined4 DAT_008cb20c; extern undefined4 DAT_008cb240;
extern undefined4 DAT_008cb244; extern undefined4 DAT_008cb248; extern undefined4 DAT_008cb24c; extern undefined4 DAT_008cb250;
extern undefined4 DAT_008cb254; extern undefined4 DAT_008cb348; extern undefined4 DAT_008cb34c; extern undefined4 DAT_008cb350;
extern undefined4 DAT_008cb354; extern undefined4 DAT_008cb358; extern undefined4 DAT_008cb35c; extern undefined4 DAT_008cbaec;
extern undefined4 DAT_008cbaf0; extern undefined4 DAT_008cbaf4; extern undefined4 DAT_008cbaf8; extern undefined4 DAT_008cbafc;
extern undefined4 DAT_008cbb00; extern undefined4 DAT_008cca60; extern undefined4 DAT_008cca64; extern undefined4 DAT_008cca68;
extern undefined4 DAT_008cca6c; extern undefined4 DAT_008cca70; extern undefined4 DAT_008cca74;
