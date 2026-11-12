#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893b48; extern undefined4 DAT_00893b54; extern undefined4 DAT_00893b58; extern undefined4 DAT_00893bb0;
extern undefined4 DAT_00893bbc; extern undefined4 DAT_00893bc0; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894ebc;
extern undefined4 DAT_00894ec0; extern undefined4 DAT_00894ec1; extern undefined4 DAT_00894ec2; extern undefined4 DAT_00894ec3;
extern undefined4 DAT_00894ec4; extern undefined4 DAT_00894ec5; extern undefined4 DAT_00894ec6; extern undefined4 DAT_00894ec7;
extern undefined4 DAT_00894ec8; extern undefined4 DAT_00894ec9; extern undefined4 DAT_00894eca; extern undefined4 DAT_00894ecb;
extern undefined4 DAT_00894ecc; extern undefined4 DAT_00894ecd; extern undefined4 DAT_00894ece; extern undefined4 DAT_00894ecf;
extern undefined4 DAT_00894ed0; extern undefined4 DAT_00894ed1; extern undefined4 DAT_00894ed2; extern undefined4 DAT_00894ed3;
extern undefined4 DAT_00894ed4; extern undefined4 DAT_00894ed5; extern undefined4 DAT_00894ed6; extern undefined4 DAT_00894ed7;
extern undefined4 DAT_00894ed8; extern undefined4 DAT_00894ed9; extern undefined4 DAT_00894eda; extern undefined4 DAT_00894edb;
extern undefined4 DAT_00894edc; extern undefined4 DAT_00894edd; extern undefined4 DAT_00894ede; extern undefined4 DAT_00894edf;
extern undefined4 DAT_00894ee0; extern undefined4 DAT_00894ee1; extern undefined4 DAT_00894ee2; extern undefined4 DAT_00894ee3;
extern undefined4 DAT_00894ee4; extern undefined4 DAT_00894ee8; extern undefined4 DAT_00894ef0; extern undefined4 DAT_00894ef4;
extern undefined4 DAT_00894ef5; extern undefined4 DAT_00894ef6; extern undefined4 DAT_00894ef7; extern undefined4 DAT_00894ef8;
extern undefined4 DAT_00894ef9; extern undefined4 DAT_00894efa; extern undefined4 DAT_00894efb; extern undefined4 DAT_00894efc;
extern undefined4 DAT_00894efd; extern undefined4 DAT_00894efe; extern undefined4 DAT_00894eff; extern undefined4 DAT_00894f00;
extern undefined4 DAT_00894f01; extern undefined4 DAT_00894f02; extern undefined4 DAT_00894f03; extern undefined4 DAT_00894f04;
extern undefined4 DAT_00894f05; extern undefined4 DAT_00894f06; extern undefined4 DAT_00894f07; extern undefined4 DAT_00894f08;
extern undefined4 DAT_00894f09; extern undefined4 DAT_00894f0a; extern undefined4 DAT_00894f0b; extern undefined4 DAT_00894f0c;
extern undefined4 DAT_00894f0d; extern undefined4 DAT_00894f0e; extern undefined4 DAT_00894f0f; extern undefined4 DAT_00894f10;
extern undefined4 DAT_00894f11; extern undefined4 DAT_00894f12; extern undefined4 DAT_00894f13; extern undefined4 DAT_00894f14;
extern undefined4 DAT_00894f15; extern undefined4 DAT_00894f16; extern undefined4 DAT_00894f17; extern undefined4 DAT_00894f18;
extern undefined4 DAT_00894f1c; extern undefined4 DAT_00894f68; extern undefined4 DAT_00894f6c; extern undefined4 DAT_00894f6d;
extern undefined4 DAT_00894f6e; extern undefined4 DAT_00894f6f; extern undefined4 DAT_00894f70; extern undefined4 DAT_00894f71;
extern undefined4 DAT_00894f72; extern undefined4 DAT_00894f73; extern undefined4 DAT_00894f74; extern undefined4 DAT_00894f75;
extern undefined4 DAT_00894f76; extern undefined4 DAT_00894f77; extern undefined4 DAT_00894f78; extern undefined4 DAT_00894f79;
extern undefined4 DAT_00894f7a; extern undefined4 DAT_00894f7b; extern undefined4 DAT_00894f7c; extern undefined4 DAT_00894f7d;
extern undefined4 DAT_00894f7e; extern undefined4 DAT_00894f7f; extern undefined4 DAT_00894f80; extern undefined4 DAT_00894f81;
extern undefined4 DAT_00894f82; extern undefined4 DAT_00894f83; extern undefined4 DAT_00894f84; extern undefined4 DAT_00894f85;
extern undefined4 DAT_00894f86; extern undefined4 DAT_00894f87; extern undefined4 DAT_00894f88; extern undefined4 DAT_00894f89;
extern undefined4 DAT_00894f8a; extern undefined4 DAT_00894f8b; extern undefined4 DAT_00894f8c; extern undefined4 DAT_00894f8d;
extern undefined4 DAT_00894f8e; extern undefined4 DAT_00894f8f; extern undefined4 DAT_00894f90; extern undefined4 DAT_00894f94;
extern undefined4 DAT_00895040; extern undefined4 DAT_00895070; extern undefined4 DAT_00895074; extern undefined4 DAT_00895078;
extern undefined4 DAT_00895079; extern undefined4 DAT_0089507a; extern undefined4 DAT_0089507b; extern undefined4 DAT_0089507c;
extern undefined4 DAT_00895080; extern undefined4 DAT_00895081; extern undefined4 DAT_00895082; extern undefined4 DAT_00895083;
extern undefined4 DAT_00895084; extern undefined4 DAT_00895085; extern undefined4 DAT_00895086; extern undefined4 DAT_00895087;
extern undefined4 DAT_00895088; extern undefined4 DAT_00895089; extern undefined4 DAT_0089508a; extern undefined4 DAT_0089508b;
extern undefined4 DAT_0089508c; extern undefined4 DAT_0089508d; extern undefined4 DAT_0089508e; extern undefined4 DAT_0089508f;
extern undefined4 DAT_00895090; extern undefined4 DAT_00895091; extern undefined4 DAT_00895092; extern undefined4 DAT_00895093;
extern undefined4 DAT_00895094; extern undefined4 DAT_00895095; extern undefined4 DAT_00895096; extern undefined4 DAT_00895097;
extern undefined4 DAT_00895098; extern undefined4 DAT_0089509c; extern undefined4 DAT_00895ed0; extern undefined4 DAT_00895ed4;
extern undefined4 DAT_00895ed8; extern undefined4 DAT_00895eec; extern undefined4 DAT_00895f4c; extern undefined4 DAT_00895f50;
extern undefined4 DAT_00895f54; extern undefined4 DAT_0089603c; extern undefined4 DAT_00896040; extern undefined4 DAT_00896044;
extern undefined4 DAT_00896aa0; extern undefined4 DAT_00896aa4; extern undefined4 DAT_00896c7c; extern undefined4 DAT_00896c80;
extern undefined4 DAT_00896c84; extern undefined4 DAT_00896c88; extern undefined4 DAT_008977c4; extern undefined4 DAT_008977c8;
extern undefined4 DAT_008cac18; extern undefined4 DAT_008cac1c; extern undefined4 DAT_008cac20; extern undefined4 DAT_008cac24;
extern undefined4 DAT_008cac28; extern undefined4 DAT_008cac2c; extern undefined4 DAT_008caca8; extern undefined4 DAT_008cacac;
extern undefined4 DAT_008cacb0; extern undefined4 DAT_008cacb4; extern undefined4 DAT_008cacb8; extern undefined4 DAT_008cacbc;
extern undefined4 DAT_008cb990; extern undefined4 DAT_008cb994; extern undefined4 DAT_008cb998; extern undefined4 DAT_008cb99c;
extern undefined4 DAT_008cb9a0; extern undefined4 DAT_008cb9a4; extern undefined4 DAT_008cb9a8; extern undefined4 DAT_008cb9ac;
extern undefined4 DAT_008cb9b0; extern undefined4 DAT_008cb9b4; extern undefined4 DAT_008cb9b8; extern undefined4 DAT_008cb9bc;
extern undefined4 DAT_008cb9c0; extern undefined4 DAT_008cb9c4; extern undefined4 DAT_008cb9c8; extern undefined4 DAT_008cba14;
extern undefined4 DAT_008cba18; extern undefined4 DAT_008cba1c; extern undefined4 DAT_008cba20; extern undefined4 DAT_008cba24;
extern undefined4 DAT_008cba28; extern undefined4 DAT_008cba8c; extern undefined4 DAT_008cba90; extern undefined4 DAT_008cba94;
extern undefined4 DAT_008cba98; extern undefined4 DAT_008cba9c; extern undefined4 DAT_008cbaa0; extern undefined4 DAT_008cc664;
extern undefined4 DAT_008cc668; extern undefined4 DAT_008cc66c; extern undefined4 DAT_008cc670; extern undefined4 DAT_008cc674;
extern undefined4 DAT_008cc678; extern undefined4 DAT_008cc70c; extern undefined4 DAT_008cc710; extern undefined4 DAT_008cc714;
extern undefined4 DAT_008cc718; extern undefined4 DAT_008cc71c; extern undefined4 DAT_008cc720; extern undefined4 DAT_008cc724;
extern undefined4 DAT_008cc728; extern undefined4 DAT_008cc72c; extern undefined4 DAT_008cc730; extern undefined4 DAT_008cc734;
extern undefined4 DAT_008cc738; extern undefined4 DAT_008ccf88; extern undefined4 DAT_008ccf8c; extern undefined4 DAT_008ccf90;
extern undefined4 DAT_008ccf94; extern undefined4 DAT_008ccf98; extern undefined4 DAT_008ccf9c; extern undefined4 DAT_008cd0e4;
extern undefined4 DAT_008cd0e8; extern undefined4 DAT_008cd0ec; extern undefined4 DAT_008cd0f0; extern undefined4 DAT_008cd0f4;
extern undefined4 DAT_008cd0f8; extern undefined4 DAT_008cd0fc; extern undefined4 DAT_008cd100; extern undefined4 DAT_008cd104;
extern undefined4 DAT_008cd108; extern undefined4 DAT_008cd10c; extern undefined4 DAT_008cd110; extern undefined4 DAT_008cdd3c;
extern undefined4 DAT_008cdd40; extern undefined4 DAT_008cdd44; extern undefined4 DAT_008cdd48; extern undefined4 DAT_008cdd4c;
extern undefined4 DAT_008cdd50;
