#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890ac8; extern undefined4 DAT_00890acc; extern undefined4 DAT_00890ad0; extern undefined4 DAT_00890b58;
extern undefined4 DAT_00890b5c; extern undefined4 DAT_00890b60; extern undefined4 DAT_00890b74; extern undefined4 DAT_00890b94;
extern undefined4 DAT_00890b98; extern undefined4 DAT_00890b9c; extern undefined4 DAT_00890c8c; extern undefined4 DAT_00890c90;
extern undefined4 DAT_00890c91; extern undefined4 DAT_00890c92; extern undefined4 DAT_00890c93; extern undefined4 DAT_00890c94;
extern undefined4 DAT_00890c95; extern undefined4 DAT_00890c96; extern undefined4 DAT_00890c97; extern undefined4 DAT_00890c98;
extern undefined4 DAT_00890c99; extern undefined4 DAT_00890c9a; extern undefined4 DAT_00890c9b; extern undefined4 DAT_00890c9c;
extern undefined4 DAT_00890c9d; extern undefined4 DAT_00890c9e; extern undefined4 DAT_00890c9f; extern undefined4 DAT_00890ca0;
extern undefined4 DAT_00890ca1; extern undefined4 DAT_00890ca2; extern undefined4 DAT_00890ca3; extern undefined4 DAT_00890ca4;
extern undefined4 DAT_00890ca5; extern undefined4 DAT_00890ca6; extern undefined4 DAT_00890ca7; extern undefined4 DAT_00890ca8;
extern undefined4 DAT_00890ca9; extern undefined4 DAT_00890caa; extern undefined4 DAT_00890cab; extern undefined4 DAT_00890cac;
extern undefined4 DAT_00890cad; extern undefined4 DAT_00890cae; extern undefined4 DAT_00890caf; extern undefined4 DAT_00890cb0;
extern undefined4 DAT_00890cb1; extern undefined4 DAT_00890cb2; extern undefined4 DAT_00890cb3; extern undefined4 DAT_00890cc4;
extern undefined4 DAT_00890cc8; extern undefined4 DAT_00891a8c; extern undefined4 DAT_00891a90; extern undefined4 DAT_00891a94;
extern undefined4 DAT_00891ac8; extern undefined4 DAT_00891b28; extern undefined4 DAT_00891b2c; extern undefined4 DAT_00891b2d;
extern undefined4 DAT_00891b2e; extern undefined4 DAT_00891b2f; extern undefined4 DAT_00891b30; extern undefined4 DAT_00891b31;
extern undefined4 DAT_00891b32; extern undefined4 DAT_00891b33; extern undefined4 DAT_00891b34; extern undefined4 DAT_00891b35;
extern undefined4 DAT_00891b36; extern undefined4 DAT_00891b37; extern undefined4 DAT_00891b38; extern undefined4 DAT_00891b39;
extern undefined4 DAT_00891b3a; extern undefined4 DAT_00891b3b; extern undefined4 DAT_00891b3c; extern undefined4 DAT_00891b3d;
extern undefined4 DAT_00891b3e; extern undefined4 DAT_00891b3f; extern undefined4 DAT_00891b40; extern undefined4 DAT_00891b41;
extern undefined4 DAT_00891b42; extern undefined4 DAT_00891b43; extern undefined4 DAT_00891b44; extern undefined4 DAT_00891b45;
extern undefined4 DAT_00891b46; extern undefined4 DAT_00891b47; extern undefined4 DAT_00891b48; extern undefined4 DAT_00891b49;
extern undefined4 DAT_00891b4a; extern undefined4 DAT_00891b4b; extern undefined4 DAT_00891b4c; extern undefined4 DAT_00891b4d;
extern undefined4 DAT_00891b4e; extern undefined4 DAT_00891b4f; extern undefined4 DAT_00891b58; extern undefined4 DAT_00891b5c;
extern undefined4 DAT_0089292c; extern undefined4 DAT_00892b34; extern undefined4 DAT_00892b38; extern undefined4 DAT_00892b3c;
extern undefined4 DAT_00892be8; extern undefined4 DAT_00892bec; extern undefined4 DAT_00892bf0; extern undefined4 DAT_00892bf1;
extern undefined4 DAT_00892bf2; extern undefined4 DAT_00892bf3; extern undefined4 DAT_00892bf4; extern undefined4 DAT_00892bf8;
extern undefined4 DAT_00892bf9; extern undefined4 DAT_00892bfa; extern undefined4 DAT_00892bfb; extern undefined4 DAT_00892bfc;
extern undefined4 DAT_00892bfd; extern undefined4 DAT_00892bfe; extern undefined4 DAT_00892bff; extern undefined4 DAT_00892c00;
extern undefined4 DAT_00892c01; extern undefined4 DAT_00892c02; extern undefined4 DAT_00892c03; extern undefined4 DAT_00892c04;
extern undefined4 DAT_00892c05; extern undefined4 DAT_00892c06; extern undefined4 DAT_00892c07; extern undefined4 DAT_00892c08;
extern undefined4 DAT_00892c09; extern undefined4 DAT_00892c0a; extern undefined4 DAT_00892c0b; extern undefined4 DAT_00892c0c;
extern undefined4 DAT_00892c0d; extern undefined4 DAT_00892c0e; extern undefined4 DAT_00892c0f; extern undefined4 DAT_00892c10;
extern undefined4 DAT_00892c14; extern undefined4 DAT_00892c18; extern undefined4 DAT_00892c1c; extern undefined4 DAT_00892c20;
extern undefined4 DAT_00892c24; extern undefined4 DAT_00892f50; extern undefined4 DAT_00892f54; extern undefined4 DAT_00892f55;
extern undefined4 DAT_00892f56; extern undefined4 DAT_00892f57; extern undefined4 DAT_00892f58; extern undefined4 DAT_00892f59;
extern undefined4 DAT_00892f5a; extern undefined4 DAT_00892f5b; extern undefined4 DAT_00892f5c; extern undefined4 DAT_00892f5d;
extern undefined4 DAT_00892f5e; extern undefined4 DAT_00892f5f; extern undefined4 DAT_00892f60; extern undefined4 DAT_00892f61;
extern undefined4 DAT_00892f62; extern undefined4 DAT_00892f63; extern undefined4 DAT_00892f64; extern undefined4 DAT_00892f65;
extern undefined4 DAT_00892f66; extern undefined4 DAT_00892f67; extern undefined4 DAT_00892f68; extern undefined4 DAT_00892f69;
extern undefined4 DAT_00892f6a; extern undefined4 DAT_00892f6b; extern undefined4 DAT_00892f6c; extern undefined4 DAT_00892f6d;
extern undefined4 DAT_00892f6e; extern undefined4 DAT_00892f6f; extern undefined4 DAT_00892f70; extern undefined4 DAT_00892f71;
extern undefined4 DAT_00892f72; extern undefined4 DAT_00892f73; extern undefined4 DAT_00892f74; extern undefined4 DAT_00892f75;
extern undefined4 DAT_00892f76; extern undefined4 DAT_00892f77; extern undefined4 DAT_00892f78; extern undefined4 DAT_00892f7c;
extern undefined4 DAT_00892fdc; extern undefined4 DAT_00892fe0; extern undefined4 DAT_00892fe4; extern undefined4 DAT_00893b1c;
extern undefined4 DAT_00893b64; extern undefined4 DAT_008941fc; extern undefined4 DAT_00894494; extern undefined4 DAT_008944c0;
extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_008951fc; extern undefined4 DAT_008c802c;
extern undefined4 DAT_008c8030; extern undefined4 DAT_008c8034; extern undefined4 DAT_008c8038; extern undefined4 DAT_008c803c;
extern undefined4 DAT_008c8040; extern undefined4 DAT_008c814c; extern undefined4 DAT_008c8150; extern undefined4 DAT_008c8154;
extern undefined4 DAT_008c8158; extern undefined4 DAT_008c815c; extern undefined4 DAT_008c8160; extern undefined4 DAT_008c8194;
extern undefined4 DAT_008c8198; extern undefined4 DAT_008c819c; extern undefined4 DAT_008c81a0; extern undefined4 DAT_008c81a4;
extern undefined4 DAT_008c81a8; extern undefined4 DAT_008c8314; extern undefined4 DAT_008c8318; extern undefined4 DAT_008c831c;
extern undefined4 DAT_008c8320; extern undefined4 DAT_008c8324; extern undefined4 DAT_008c8328; extern undefined4 DAT_008c9064;
extern undefined4 DAT_008c9068; extern undefined4 DAT_008c906c; extern undefined4 DAT_008c9070; extern undefined4 DAT_008c9074;
extern undefined4 DAT_008c9078; extern undefined4 DAT_008c90c4; extern undefined4 DAT_008c90c8; extern undefined4 DAT_008c90cc;
extern undefined4 DAT_008c90d0; extern undefined4 DAT_008c90d4; extern undefined4 DAT_008c90d8; extern undefined4 DAT_008c9b10;
extern undefined4 DAT_008c9b14; extern undefined4 DAT_008c9b18; extern undefined4 DAT_008c9b1c; extern undefined4 DAT_008c9b20;
extern undefined4 DAT_008c9b24; extern undefined4 DAT_008c9bd0; extern undefined4 DAT_008c9bd4; extern undefined4 DAT_008c9bd8;
extern undefined4 DAT_008c9bdc; extern undefined4 DAT_008c9be0; extern undefined4 DAT_008c9be4; extern undefined4 DAT_008c9be8;
extern undefined4 DAT_008c9bec; extern undefined4 DAT_008c9bf0; extern undefined4 DAT_008c9bf4; extern undefined4 DAT_008c9bf8;
extern undefined4 DAT_008c9bfc; extern undefined4 DAT_008ca000; extern undefined4 DAT_008ca004; extern undefined4 DAT_008ca008;
extern undefined4 DAT_008ca00c; extern undefined4 DAT_008ca010; extern undefined4 DAT_008ca014; extern undefined4 DAT_008ca0c0;
extern undefined4 DAT_008ca0c4; extern undefined4 DAT_008ca0c8; extern undefined4 DAT_008ca0cc; extern undefined4 DAT_008ca0d0;
extern undefined4 DAT_008ca0d4;
