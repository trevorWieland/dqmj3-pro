#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893278; extern undefined4 DAT_0089345c; extern undefined4 DAT_0089347c; extern undefined4 DAT_00893480;
extern undefined4 DAT_00893481; extern undefined4 DAT_00893482; extern undefined4 DAT_00893483; extern undefined4 DAT_00893484;
extern undefined4 DAT_00893485; extern undefined4 DAT_00893486; extern undefined4 DAT_00893487; extern undefined4 DAT_00893488;
extern undefined4 DAT_00893489; extern undefined4 DAT_0089348a; extern undefined4 DAT_0089348b; extern undefined4 DAT_0089348c;
extern undefined4 DAT_0089348d; extern undefined4 DAT_0089348e; extern undefined4 DAT_0089348f; extern undefined4 DAT_00893490;
extern undefined4 DAT_00893491; extern undefined4 DAT_00893492; extern undefined4 DAT_00893493; extern undefined4 DAT_00893494;
extern undefined4 DAT_00893495; extern undefined4 DAT_00893496; extern undefined4 DAT_00893497; extern undefined4 DAT_00893498;
extern undefined4 DAT_00893499; extern undefined4 DAT_0089349a; extern undefined4 DAT_0089349b; extern undefined4 DAT_0089349c;
extern undefined4 DAT_0089349d; extern undefined4 DAT_0089349e; extern undefined4 DAT_0089349f; extern undefined4 DAT_008934a0;
extern undefined4 DAT_008934a1; extern undefined4 DAT_008934a2; extern undefined4 DAT_008934a3; extern undefined4 DAT_008934a4;
extern undefined4 DAT_008934a8; extern undefined4 DAT_00893524; extern undefined4 DAT_00893528; extern undefined4 DAT_0089352c;
extern undefined4 DAT_00893540; extern undefined4 DAT_00893544; extern undefined4 DAT_00893545; extern undefined4 DAT_00893546;
extern undefined4 DAT_00893547; extern undefined4 DAT_00893548; extern undefined4 DAT_00893549; extern undefined4 DAT_0089354a;
extern undefined4 DAT_0089354b; extern undefined4 DAT_0089354c; extern undefined4 DAT_0089354d; extern undefined4 DAT_0089354e;
extern undefined4 DAT_0089354f; extern undefined4 DAT_00893550; extern undefined4 DAT_00893551; extern undefined4 DAT_00893552;
extern undefined4 DAT_00893553; extern undefined4 DAT_00893554; extern undefined4 DAT_00893555; extern undefined4 DAT_00893556;
extern undefined4 DAT_00893557; extern undefined4 DAT_00893558; extern undefined4 DAT_00893559; extern undefined4 DAT_0089355a;
extern undefined4 DAT_0089355b; extern undefined4 DAT_0089355c; extern undefined4 DAT_0089355d; extern undefined4 DAT_0089355e;
extern undefined4 DAT_0089355f; extern undefined4 DAT_00893560; extern undefined4 DAT_00893561; extern undefined4 DAT_00893562;
extern undefined4 DAT_00893563; extern undefined4 DAT_00893564; extern undefined4 DAT_00893565; extern undefined4 DAT_00893566;
extern undefined4 DAT_00893567; extern undefined4 DAT_00893568; extern undefined4 DAT_0089356c; extern undefined4 DAT_00893614;
extern undefined4 DAT_00893618; extern undefined4 DAT_0089361c; extern undefined4 DAT_00893648; extern undefined4 DAT_0089364c;
extern undefined4 DAT_00893650; extern undefined4 DAT_008937c8; extern undefined4 DAT_00893938; extern undefined4 DAT_00893a2c;
extern undefined4 DAT_00893a30; extern undefined4 DAT_00893a34; extern undefined4 DAT_00893a4c; extern undefined4 DAT_00893a50;
extern undefined4 DAT_00893a51; extern undefined4 DAT_00893a52; extern undefined4 DAT_00893a53; extern undefined4 DAT_00893a54;
extern undefined4 DAT_00893a55; extern undefined4 DAT_00893a56; extern undefined4 DAT_00893a57; extern undefined4 DAT_00893a58;
extern undefined4 DAT_00893a59; extern undefined4 DAT_00893a5a; extern undefined4 DAT_00893a5b; extern undefined4 DAT_00893a5c;
extern undefined4 DAT_00893a5d; extern undefined4 DAT_00893a5e; extern undefined4 DAT_00893a5f; extern undefined4 DAT_00893a60;
extern undefined4 DAT_00893a61; extern undefined4 DAT_00893a62; extern undefined4 DAT_00893a63; extern undefined4 DAT_00893a64;
extern undefined4 DAT_00893a65; extern undefined4 DAT_00893a66; extern undefined4 DAT_00893a67; extern undefined4 DAT_00893a68;
extern undefined4 DAT_00893a69; extern undefined4 DAT_00893a6a; extern undefined4 DAT_00893a6b; extern undefined4 DAT_00893a6c;
extern undefined4 DAT_00893a6d; extern undefined4 DAT_00893a6e; extern undefined4 DAT_00893a6f; extern undefined4 DAT_00893a70;
extern undefined4 DAT_00893a71; extern undefined4 DAT_00893a72; extern undefined4 DAT_00893a73; extern undefined4 DAT_00893a74;
extern undefined4 DAT_00893a78; extern undefined4 DAT_00893b1c; extern undefined4 DAT_00893b28; extern undefined4 DAT_00893b3c;
extern undefined4 DAT_00893b40; extern undefined4 DAT_00893b44; extern undefined4 DAT_00893b48; extern undefined4 DAT_00893b64;
extern undefined4 DAT_00893d48; extern undefined4 DAT_00893d4c; extern undefined4 DAT_00893d50; extern undefined4 DAT_00893d80;
extern undefined4 DAT_00893d84; extern undefined4 DAT_00893d85; extern undefined4 DAT_00893d86; extern undefined4 DAT_00893d87;
extern undefined4 DAT_00893d88; extern undefined4 DAT_00893d89; extern undefined4 DAT_00893d8a; extern undefined4 DAT_00893d8b;
extern undefined4 DAT_00893d8c; extern undefined4 DAT_00893d8d; extern undefined4 DAT_00893d8e; extern undefined4 DAT_00893d8f;
extern undefined4 DAT_00893d90; extern undefined4 DAT_00893d91; extern undefined4 DAT_00893d92; extern undefined4 DAT_00893d93;
extern undefined4 DAT_00893d94; extern undefined4 DAT_00893d95; extern undefined4 DAT_00893d96; extern undefined4 DAT_00893d97;
extern undefined4 DAT_00893d98; extern undefined4 DAT_00893d99; extern undefined4 DAT_00893d9a; extern undefined4 DAT_00893d9b;
extern undefined4 DAT_00893d9c; extern undefined4 DAT_00893d9d; extern undefined4 DAT_00893d9e; extern undefined4 DAT_00893d9f;
extern undefined4 DAT_00893da0; extern undefined4 DAT_00893da1; extern undefined4 DAT_00893da2; extern undefined4 DAT_00893da3;
extern undefined4 DAT_00893da4; extern undefined4 DAT_00893da5; extern undefined4 DAT_00893da6; extern undefined4 DAT_00893da7;
extern undefined4 DAT_00893da8; extern undefined4 DAT_00893dac; extern undefined4 DAT_0089466c; extern undefined4 DAT_008946a8;
extern undefined4 DAT_008946ac; extern undefined4 DAT_008946b0; extern undefined4 DAT_00894ac0; extern undefined4 DAT_00894ac4;
extern undefined4 DAT_00894ac8; extern undefined4 DAT_00895964; extern undefined4 DAT_00895968; extern undefined4 DAT_0089596c;
extern undefined4 DAT_008ca6a8; extern undefined4 DAT_008ca6ac; extern undefined4 DAT_008ca6b0; extern undefined4 DAT_008ca6b4;
extern undefined4 DAT_008ca6b8; extern undefined4 DAT_008ca6bc; extern undefined4 DAT_008ca738; extern undefined4 DAT_008ca73c;
extern undefined4 DAT_008ca740; extern undefined4 DAT_008ca744; extern undefined4 DAT_008ca748; extern undefined4 DAT_008ca74c;
extern undefined4 DAT_008ca750; extern undefined4 DAT_008ca754; extern undefined4 DAT_008ca758; extern undefined4 DAT_008ca75c;
extern undefined4 DAT_008ca760; extern undefined4 DAT_008ca764; extern undefined4 DAT_008ca780; extern undefined4 DAT_008ca784;
extern undefined4 DAT_008ca788; extern undefined4 DAT_008ca78c; extern undefined4 DAT_008ca790; extern undefined4 DAT_008ca794;
extern undefined4 DAT_008ca7b0; extern undefined4 DAT_008ca7b4; extern undefined4 DAT_008ca7b8; extern undefined4 DAT_008ca7bc;
extern undefined4 DAT_008ca7c0; extern undefined4 DAT_008ca7c4; extern undefined4 DAT_008caab0; extern undefined4 DAT_008caab4;
extern undefined4 DAT_008caab8; extern undefined4 DAT_008caabc; extern undefined4 DAT_008caac0; extern undefined4 DAT_008caac4;
extern undefined4 DAT_008caae0; extern undefined4 DAT_008caae4; extern undefined4 DAT_008caae8; extern undefined4 DAT_008caaec;
extern undefined4 DAT_008caaf0; extern undefined4 DAT_008caaf4; extern undefined4 DAT_008cabe8; extern undefined4 DAT_008cabec;
extern undefined4 DAT_008cabf0; extern undefined4 DAT_008cabf4; extern undefined4 DAT_008cabf8; extern undefined4 DAT_008cabfc;
extern undefined4 DAT_008cadf0; extern undefined4 DAT_008cadf4; extern undefined4 DAT_008cadf8; extern undefined4 DAT_008cadfc;
extern undefined4 DAT_008cae00; extern undefined4 DAT_008cae04; extern undefined4 DAT_008cae50; extern undefined4 DAT_008cae54;
extern undefined4 DAT_008cae58; extern undefined4 DAT_008cae5c; extern undefined4 DAT_008cae60; extern undefined4 DAT_008cae64;
extern undefined4 DAT_008cb570; extern undefined4 DAT_008cb574; extern undefined4 DAT_008cb578; extern undefined4 DAT_008cb57c;
extern undefined4 DAT_008cb580; extern undefined4 DAT_008cb584; extern undefined4 DAT_008cb600; extern undefined4 DAT_008cb604;
extern undefined4 DAT_008cb608; extern undefined4 DAT_008cb60c; extern undefined4 DAT_008cb610; extern undefined4 DAT_008cb614;
extern undefined4 DAT_008cc170; extern undefined4 DAT_008cc174; extern undefined4 DAT_008cc178; extern undefined4 DAT_008cc17c;
extern undefined4 DAT_008cc180; extern undefined4 DAT_008cc184;
