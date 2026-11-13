#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008913cc; extern undefined4 DAT_008913d0; extern undefined4 DAT_008914b4; extern undefined4 DAT_008914b8;
extern undefined4 DAT_00891cd4; extern undefined4 DAT_00891cd8; extern undefined4 DAT_00891cd9; extern undefined4 DAT_00891cda;
extern undefined4 DAT_00891cdb; extern undefined4 DAT_00891cdc; extern undefined4 DAT_00891cdd; extern undefined4 DAT_00891cde;
extern undefined4 DAT_00891cdf; extern undefined4 DAT_00891ce0; extern undefined4 DAT_00891ce1; extern undefined4 DAT_00891ce2;
extern undefined4 DAT_00891ce3; extern undefined4 DAT_00891ce4; extern undefined4 DAT_00891ce5; extern undefined4 DAT_00891ce6;
extern undefined4 DAT_00891ce7; extern undefined4 DAT_00891ce8; extern undefined4 DAT_00891ce9; extern undefined4 DAT_00891cea;
extern undefined4 DAT_00891ceb; extern undefined4 DAT_00891cec; extern undefined4 DAT_00891ced; extern undefined4 DAT_00891cee;
extern undefined4 DAT_00891cef; extern undefined4 DAT_00891cf0; extern undefined4 DAT_00891cf1; extern undefined4 DAT_00891cf2;
extern undefined4 DAT_00891cf3; extern undefined4 DAT_00891cf4; extern undefined4 DAT_00891cf5; extern undefined4 DAT_00891cf6;
extern undefined4 DAT_00891cf7; extern undefined4 DAT_00891cf8; extern undefined4 DAT_00891cf9; extern undefined4 DAT_00891cfa;
extern undefined4 DAT_00891cfb; extern undefined4 DAT_00891d04; extern undefined4 DAT_00891d08; extern undefined4 DAT_0089296c;
extern undefined4 DAT_00892970; extern undefined4 DAT_00892971; extern undefined4 DAT_00892972; extern undefined4 DAT_00892973;
extern undefined4 DAT_00892974; extern undefined4 DAT_00892975; extern undefined4 DAT_00892976; extern undefined4 DAT_00892977;
extern undefined4 DAT_00892978; extern undefined4 DAT_00892979; extern undefined4 DAT_0089297a; extern undefined4 DAT_0089297b;
extern undefined4 DAT_0089297c; extern undefined4 DAT_0089297d; extern undefined4 DAT_0089297e; extern undefined4 DAT_0089297f;
extern undefined4 DAT_00892980; extern undefined4 DAT_00892981; extern undefined4 DAT_00892982; extern undefined4 DAT_00892983;
extern undefined4 DAT_00892984; extern undefined4 DAT_00892985; extern undefined4 DAT_00892986; extern undefined4 DAT_00892987;
extern undefined4 DAT_00892988; extern undefined4 DAT_00892989; extern undefined4 DAT_0089298a; extern undefined4 DAT_0089298b;
extern undefined4 DAT_0089298c; extern undefined4 DAT_0089298d; extern undefined4 DAT_0089298e; extern undefined4 DAT_0089298f;
extern undefined4 DAT_00892990; extern undefined4 DAT_00892991; extern undefined4 DAT_00892992; extern undefined4 DAT_00892993;
extern undefined4 DAT_00892994; extern undefined4 DAT_00892998; extern undefined4 DAT_008929a8; extern undefined4 DAT_00892ad0;
extern undefined4 DAT_00892ad4; extern undefined4 DAT_00892ad5; extern undefined4 DAT_00892ad6; extern undefined4 DAT_00892ad7;
extern undefined4 DAT_00892ad8; extern undefined4 DAT_00892ad9; extern undefined4 DAT_00892ada; extern undefined4 DAT_00892adb;
extern undefined4 DAT_00892adc; extern undefined4 DAT_00892add; extern undefined4 DAT_00892ade; extern undefined4 DAT_00892adf;
extern undefined4 DAT_00892ae0; extern undefined4 DAT_00892ae1; extern undefined4 DAT_00892ae2; extern undefined4 DAT_00892ae3;
extern undefined4 DAT_00892ae4; extern undefined4 DAT_00892ae5; extern undefined4 DAT_00892ae6; extern undefined4 DAT_00892ae7;
extern undefined4 DAT_00892ae8; extern undefined4 DAT_00892ae9; extern undefined4 DAT_00892aea; extern undefined4 DAT_00892aeb;
extern undefined4 DAT_00892aec; extern undefined4 DAT_00892aed; extern undefined4 DAT_00892aee; extern undefined4 DAT_00892aef;
extern undefined4 DAT_00892af0; extern undefined4 DAT_00892af1; extern undefined4 DAT_00892af2; extern undefined4 DAT_00892af3;
extern undefined4 DAT_00892af4; extern undefined4 DAT_00892af5; extern undefined4 DAT_00892af6; extern undefined4 DAT_00892af7;
extern undefined4 DAT_00892af8; extern undefined4 DAT_00892afc; extern undefined4 DAT_00892f34; extern undefined4 DAT_00892f38;
extern undefined4 DAT_00892f3c; extern undefined4 DAT_00892fd0; extern undefined4 DAT_00892fd4; extern undefined4 DAT_00892fd8;
extern undefined4 DAT_008930c0; extern undefined4 DAT_008930c4; extern undefined4 DAT_008930d0; extern undefined4 DAT_008930d4;
extern undefined4 DAT_008931f4; extern undefined4 DAT_008931f8; extern undefined4 DAT_00893970; extern undefined4 DAT_00893974;
extern undefined4 DAT_00893978; extern undefined4 DAT_0089397c; extern undefined4 DAT_00893980; extern undefined4 DAT_00893984;
extern undefined4 DAT_00893a20; extern undefined4 DAT_00893b64; extern undefined4 DAT_00893b80; extern undefined4 DAT_00893bf0;
extern undefined4 DAT_008942dc; extern undefined4 DAT_008942e8; extern undefined4 DAT_008942ec; extern undefined4 DAT_008942f0;
extern undefined4 DAT_00894370; extern undefined4 DAT_00894490; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678;
extern undefined4 DAT_008951f0; extern undefined4 DAT_008c8c80; extern undefined4 DAT_008c8c84; extern undefined4 DAT_008c8c88;
extern undefined4 DAT_008c8c8c; extern undefined4 DAT_008c8c90; extern undefined4 DAT_008c8c94; extern undefined4 DAT_008c8c98;
extern undefined4 DAT_008c8c9c; extern undefined4 DAT_008c8ca0; extern undefined4 DAT_008c8ca4; extern undefined4 DAT_008c8ca8;
extern undefined4 DAT_008c8cac; extern undefined4 DAT_008c919c; extern undefined4 DAT_008c91a0; extern undefined4 DAT_008c91a4;
extern undefined4 DAT_008c91a8; extern undefined4 DAT_008c91ac; extern undefined4 DAT_008c91b0; extern undefined4 DAT_008c9a20;
extern undefined4 DAT_008c9a24; extern undefined4 DAT_008c9a28; extern undefined4 DAT_008c9a2c; extern undefined4 DAT_008c9a30;
extern undefined4 DAT_008c9a34; extern undefined4 DAT_008c9ac8; extern undefined4 DAT_008c9acc; extern undefined4 DAT_008c9ad0;
extern undefined4 DAT_008c9ad4; extern undefined4 DAT_008c9ad8; extern undefined4 DAT_008c9adc; extern undefined4 DAT_008c9f90;
extern undefined4 DAT_008c9f94; extern undefined4 DAT_008c9f98; extern undefined4 DAT_008c9f9c; extern undefined4 DAT_008c9fa0;
extern undefined4 DAT_008c9fa4; extern undefined4 DAT_008ca0a8; extern undefined4 DAT_008ca0ac; extern undefined4 DAT_008ca0b0;
extern undefined4 DAT_008ca0b4; extern undefined4 DAT_008ca0b8; extern undefined4 DAT_008ca0bc; extern undefined4 DAT_008ca288;
extern undefined4 DAT_008ca28c; extern undefined4 DAT_008ca290; extern undefined4 DAT_008ca294; extern undefined4 DAT_008ca298;
extern undefined4 DAT_008ca29c; extern undefined4 DAT_008ca2b8; extern undefined4 DAT_008ca2bc; extern undefined4 DAT_008ca2c0;
extern undefined4 DAT_008ca2c4; extern undefined4 DAT_008ca2c8; extern undefined4 DAT_008ca2cc; extern undefined4 DAT_008ca510;
extern undefined4 DAT_008ca514; extern undefined4 DAT_008ca518; extern undefined4 DAT_008ca51c; extern undefined4 DAT_008ca520;
extern undefined4 DAT_008ca524; extern undefined4 DAT_008ca990; extern undefined4 DAT_008ca994; extern undefined4 DAT_008ca998;
extern undefined4 DAT_008ca99c; extern undefined4 DAT_008ca9a0; extern undefined4 DAT_008ca9a4; extern undefined4 DAT_008ca9a8;
extern undefined4 DAT_008ca9ac; extern undefined4 DAT_008ca9b0; extern undefined4 DAT_008ca9b4; extern undefined4 DAT_008ca9b8;
extern undefined4 DAT_008ca9bc; extern undefined4 DAT_008cb138; extern undefined4 DAT_008cb13c; extern undefined4 DAT_008cb140;
extern undefined4 DAT_008cb144; extern undefined4 DAT_008cb148; extern undefined4 DAT_008cb14c;
