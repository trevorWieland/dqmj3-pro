#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890bb4; extern undefined4 DAT_00890bb8; extern undefined4 DAT_00890bbc; extern undefined4 DAT_00891ac8;
extern undefined4 DAT_00891acc; extern undefined4 DAT_00891acd; extern undefined4 DAT_00891ace; extern undefined4 DAT_00891acf;
extern undefined4 DAT_00891ad0; extern undefined4 DAT_00891ad1; extern undefined4 DAT_00891ad2; extern undefined4 DAT_00891ad3;
extern undefined4 DAT_00891ad4; extern undefined4 DAT_00891ad5; extern undefined4 DAT_00891ad6; extern undefined4 DAT_00891ad7;
extern undefined4 DAT_00891ad8; extern undefined4 DAT_00891ad9; extern undefined4 DAT_00891ada; extern undefined4 DAT_00891adb;
extern undefined4 DAT_00891adc; extern undefined4 DAT_00891add; extern undefined4 DAT_00891ade; extern undefined4 DAT_00891adf;
extern undefined4 DAT_00891ae0; extern undefined4 DAT_00891ae1; extern undefined4 DAT_00891ae2; extern undefined4 DAT_00891ae3;
extern undefined4 DAT_00891ae4; extern undefined4 DAT_00891ae5; extern undefined4 DAT_00891ae6; extern undefined4 DAT_00891ae7;
extern undefined4 DAT_00891ae8; extern undefined4 DAT_00891ae9; extern undefined4 DAT_00891aea; extern undefined4 DAT_00891aeb;
extern undefined4 DAT_00891aec; extern undefined4 DAT_00891aed; extern undefined4 DAT_00891aee; extern undefined4 DAT_00891aef;
extern undefined4 DAT_00891af0; extern undefined4 DAT_00891af4; extern undefined4 DAT_00891af8; extern undefined4 DAT_00891afc;
extern undefined4 DAT_00891afd; extern undefined4 DAT_00891afe; extern undefined4 DAT_00891aff; extern undefined4 DAT_00891b00;
extern undefined4 DAT_00891b01; extern undefined4 DAT_00891b02; extern undefined4 DAT_00891b03; extern undefined4 DAT_00891b04;
extern undefined4 DAT_00891b05; extern undefined4 DAT_00891b06; extern undefined4 DAT_00891b07; extern undefined4 DAT_00891b08;
extern undefined4 DAT_00891b09; extern undefined4 DAT_00891b0a; extern undefined4 DAT_00891b0b; extern undefined4 DAT_00891b0c;
extern undefined4 DAT_00891b0d; extern undefined4 DAT_00891b0e; extern undefined4 DAT_00891b0f; extern undefined4 DAT_00891b10;
extern undefined4 DAT_00891b11; extern undefined4 DAT_00891b12; extern undefined4 DAT_00891b13; extern undefined4 DAT_00891b14;
extern undefined4 DAT_00891b15; extern undefined4 DAT_00891b16; extern undefined4 DAT_00891b17; extern undefined4 DAT_00891b18;
extern undefined4 DAT_00891b19; extern undefined4 DAT_00891b1a; extern undefined4 DAT_00891b1b; extern undefined4 DAT_00891b1c;
extern undefined4 DAT_00891b1d; extern undefined4 DAT_00891b1e; extern undefined4 DAT_00891b1f; extern undefined4 DAT_00891b20;
extern undefined4 DAT_00891b24; extern undefined4 DAT_00891b60; extern undefined4 DAT_00891c38; extern undefined4 DAT_00891c3c;
extern undefined4 DAT_00891c40; extern undefined4 DAT_00891c41; extern undefined4 DAT_00891c42; extern undefined4 DAT_00891c43;
extern undefined4 DAT_00891c44; extern undefined4 DAT_00891c45; extern undefined4 DAT_00891c46; extern undefined4 DAT_00891c47;
extern undefined4 DAT_00891c48; extern undefined4 DAT_00891c49; extern undefined4 DAT_00891c4a; extern undefined4 DAT_00891c4b;
extern undefined4 DAT_00891c4c; extern undefined4 DAT_00891c4d; extern undefined4 DAT_00891c4e; extern undefined4 DAT_00891c4f;
extern undefined4 DAT_00891c50; extern undefined4 DAT_00891c51; extern undefined4 DAT_00891c52; extern undefined4 DAT_00891c53;
extern undefined4 DAT_00891c54; extern undefined4 DAT_00891c55; extern undefined4 DAT_00891c56; extern undefined4 DAT_00891c57;
extern undefined4 DAT_00891c58; extern undefined4 DAT_00891c59; extern undefined4 DAT_00891c5a; extern undefined4 DAT_00891c5b;
extern undefined4 DAT_00891c5c; extern undefined4 DAT_00891c5d; extern undefined4 DAT_00891c5e; extern undefined4 DAT_00891c5f;
extern undefined4 DAT_00891c60; extern undefined4 DAT_00891c64; extern undefined4 DAT_00891df8; extern undefined4 DAT_00891dfc;
extern undefined4 DAT_00891e00; extern undefined4 DAT_00892b64; extern undefined4 DAT_00892b68; extern undefined4 DAT_00892b6c;
extern undefined4 DAT_00892ee4; extern undefined4 DAT_00892ee8; extern undefined4 DAT_00892eec; extern undefined4 DAT_00892f80;
extern undefined4 DAT_00892f84; extern undefined4 DAT_00892f88; extern undefined4 DAT_00892f8c; extern undefined4 DAT_00892fb8;
extern undefined4 DAT_00892fbc; extern undefined4 DAT_00892fc0; extern undefined4 DAT_00893084; extern undefined4 DAT_00893088;
extern undefined4 DAT_0089308c; extern undefined4 DAT_008930e8; extern undefined4 DAT_008930ec; extern undefined4 DAT_008930f0;
extern undefined4 DAT_008937bc; extern undefined4 DAT_008937dc; extern undefined4 DAT_008937e4; extern undefined4 DAT_00893b28;
extern undefined4 DAT_00893b64; extern undefined4 DAT_00893d24; extern undefined4 DAT_00893d28; extern undefined4 DAT_00893d2c;
extern undefined4 DAT_00893d30; extern undefined4 DAT_00894374; extern undefined4 DAT_00894378; extern undefined4 DAT_0089437c;
extern undefined4 DAT_00894380; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_008951fc;
extern undefined4 DAT_00895b30; extern undefined4 DAT_00895b34; extern undefined4 DAT_00895b38; extern undefined4 DAT_008c81c4;
extern undefined4 DAT_008c81c8; extern undefined4 DAT_008c81cc; extern undefined4 DAT_008c81d0; extern undefined4 DAT_008c81d4;
extern undefined4 DAT_008c81d8; extern undefined4 DAT_008c9094; extern undefined4 DAT_008c9098; extern undefined4 DAT_008c909c;
extern undefined4 DAT_008c90a0; extern undefined4 DAT_008c90a4; extern undefined4 DAT_008c90a8; extern undefined4 DAT_008c90ac;
extern undefined4 DAT_008c90b0; extern undefined4 DAT_008c90b4; extern undefined4 DAT_008c90b8; extern undefined4 DAT_008c90bc;
extern undefined4 DAT_008c90c0; extern undefined4 DAT_008c9124; extern undefined4 DAT_008c9128; extern undefined4 DAT_008c912c;
extern undefined4 DAT_008c9130; extern undefined4 DAT_008c9134; extern undefined4 DAT_008c9138; extern undefined4 DAT_008c926c;
extern undefined4 DAT_008c9270; extern undefined4 DAT_008c9274; extern undefined4 DAT_008c9278; extern undefined4 DAT_008c927c;
extern undefined4 DAT_008c9280; extern undefined4 DAT_008c9b70; extern undefined4 DAT_008c9b74; extern undefined4 DAT_008c9b78;
extern undefined4 DAT_008c9b7c; extern undefined4 DAT_008c9b80; extern undefined4 DAT_008c9b84; extern undefined4 DAT_008c9f30;
extern undefined4 DAT_008c9f34; extern undefined4 DAT_008c9f38; extern undefined4 DAT_008c9f3c; extern undefined4 DAT_008c9f40;
extern undefined4 DAT_008c9f44; extern undefined4 DAT_008ca018; extern undefined4 DAT_008ca01c; extern undefined4 DAT_008ca020;
extern undefined4 DAT_008ca024; extern undefined4 DAT_008ca028; extern undefined4 DAT_008ca02c; extern undefined4 DAT_008ca078;
extern undefined4 DAT_008ca07c; extern undefined4 DAT_008ca080; extern undefined4 DAT_008ca084; extern undefined4 DAT_008ca088;
extern undefined4 DAT_008ca08c; extern undefined4 DAT_008ca210; extern undefined4 DAT_008ca214; extern undefined4 DAT_008ca218;
extern undefined4 DAT_008ca21c; extern undefined4 DAT_008ca220; extern undefined4 DAT_008ca224; extern undefined4 DAT_008ca2e8;
extern undefined4 DAT_008ca2ec; extern undefined4 DAT_008ca2f0; extern undefined4 DAT_008ca2f4; extern undefined4 DAT_008ca2f8;
extern undefined4 DAT_008ca2fc; extern undefined4 DAT_008cadc0; extern undefined4 DAT_008cadc4; extern undefined4 DAT_008cadc8;
extern undefined4 DAT_008cadcc; extern undefined4 DAT_008cadd0; extern undefined4 DAT_008cadd4; extern undefined4 DAT_008cb1e0;
extern undefined4 DAT_008cb1e4; extern undefined4 DAT_008cb1e8; extern undefined4 DAT_008cb1ec; extern undefined4 DAT_008cb1f0;
extern undefined4 DAT_008cb1f4; extern undefined4 DAT_008cc278; extern undefined4 DAT_008cc27c; extern undefined4 DAT_008cc280;
extern undefined4 DAT_008cc284; extern undefined4 DAT_008cc288; extern undefined4 DAT_008cc28c;
