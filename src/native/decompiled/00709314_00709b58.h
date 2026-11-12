#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0088fce8; extern undefined4 DAT_0088fcec; extern undefined4 DAT_00890420; extern undefined4 DAT_00890424;
extern undefined4 DAT_00890425; extern undefined4 DAT_00890426; extern undefined4 DAT_00890427; extern undefined4 DAT_00890428;
extern undefined4 DAT_00890429; extern undefined4 DAT_0089042a; extern undefined4 DAT_0089042b; extern undefined4 DAT_0089042c;
extern undefined4 DAT_00890430; extern undefined4 DAT_00893204; extern undefined4 DAT_00893210; extern undefined4 DAT_00893278;
extern undefined4 DAT_0089345c; extern undefined4 DAT_00893728; extern undefined4 DAT_0089372c; extern undefined4 DAT_00893730;
extern undefined4 DAT_00893794; extern undefined4 DAT_00893798; extern undefined4 DAT_0089379c; extern undefined4 DAT_00893c88;
extern undefined4 DAT_00893c8c; extern undefined4 DAT_00893c90; extern undefined4 DAT_00893d70; extern undefined4 DAT_00893d74;
extern undefined4 DAT_00893d78; extern undefined4 DAT_00893d80; extern undefined4 DAT_00894024; extern undefined4 DAT_00894030;
extern undefined4 DAT_00894034; extern undefined4 DAT_0089466c; extern undefined4 DAT_008950a0; extern undefined4 DAT_008950a4;
extern undefined4 DAT_008950a8; extern undefined4 DAT_008951fc; extern undefined4 DAT_00895458; extern undefined4 DAT_00895ae8;
extern undefined4 DAT_00895aec; extern undefined4 DAT_00895aed; extern undefined4 DAT_00895aee; extern undefined4 DAT_00895aef;
extern undefined4 DAT_00895af0; extern undefined4 DAT_00895af1; extern undefined4 DAT_00895af2; extern undefined4 DAT_00895af3;
extern undefined4 DAT_00895af4; extern undefined4 DAT_00895af5; extern undefined4 DAT_00895af6; extern undefined4 DAT_00895af7;
extern undefined4 DAT_00895af8; extern undefined4 DAT_00895af9; extern undefined4 DAT_00895afa; extern undefined4 DAT_00895afb;
extern undefined4 DAT_00895afc; extern undefined4 DAT_00895afd; extern undefined4 DAT_00895afe; extern undefined4 DAT_00895aff;
extern undefined4 DAT_00895b00; extern undefined4 DAT_00895b01; extern undefined4 DAT_00895b02; extern undefined4 DAT_00895b03;
extern undefined4 DAT_00895b04; extern undefined4 DAT_00895b05; extern undefined4 DAT_00895b06; extern undefined4 DAT_00895b07;
extern undefined4 DAT_00895b08; extern undefined4 DAT_00895b09; extern undefined4 DAT_00895b0a; extern undefined4 DAT_00895b0b;
extern undefined4 DAT_00895b0c; extern undefined4 DAT_00895b0d; extern undefined4 DAT_00895b0e; extern undefined4 DAT_00895b0f;
extern undefined4 DAT_00895b10; extern undefined4 DAT_00895b14; extern undefined4 DAT_00895b58; extern undefined4 DAT_00895b5c;
extern undefined4 DAT_00895b60; extern undefined4 DAT_00895bc4; extern undefined4 DAT_00895bc8; extern undefined4 DAT_00895dc8;
extern undefined4 DAT_00895dcc; extern undefined4 DAT_00895eec; extern undefined4 DAT_008963c8; extern undefined4 DAT_008963cc;
extern undefined4 DAT_00896954; extern undefined4 DAT_00896958; extern undefined4 DAT_0089695c; extern undefined4 DAT_00896960;
extern undefined4 DAT_00896ab8; extern undefined4 DAT_00896abc; extern undefined4 DAT_008977b4; extern undefined4 DAT_008977b8;
extern undefined4 DAT_008977bc; extern undefined4 DAT_008977c0; extern undefined4 DAT_00898914; extern undefined4 DAT_00898918;
extern undefined4 DAT_008c77dc; extern undefined4 DAT_008c77e0; extern undefined4 DAT_008c77e4; extern undefined4 DAT_008c77e8;
extern undefined4 DAT_008c77ec; extern undefined4 DAT_008c77f0; extern undefined4 DAT_008c798c; extern undefined4 DAT_008c7990;
extern undefined4 DAT_008c7994; extern undefined4 DAT_008c7998; extern undefined4 DAT_008c799c; extern undefined4 DAT_008c79a0;
extern undefined4 DAT_008ca858; extern undefined4 DAT_008ca85c; extern undefined4 DAT_008ca860; extern undefined4 DAT_008ca864;
extern undefined4 DAT_008ca868; extern undefined4 DAT_008ca86c; extern undefined4 DAT_008ca888; extern undefined4 DAT_008ca88c;
extern undefined4 DAT_008ca890; extern undefined4 DAT_008ca894; extern undefined4 DAT_008ca898; extern undefined4 DAT_008ca89c;
extern undefined4 DAT_008cad08; extern undefined4 DAT_008cad0c; extern undefined4 DAT_008cad10; extern undefined4 DAT_008cad14;
extern undefined4 DAT_008cad18; extern undefined4 DAT_008cad1c; extern undefined4 DAT_008cae38; extern undefined4 DAT_008cae3c;
extern undefined4 DAT_008cae40; extern undefined4 DAT_008cae44; extern undefined4 DAT_008cae48; extern undefined4 DAT_008cae4c;
extern undefined4 DAT_008cafa0; extern undefined4 DAT_008cafa4; extern undefined4 DAT_008cafa8; extern undefined4 DAT_008cafac;
extern undefined4 DAT_008cafb0; extern undefined4 DAT_008cafb4; extern undefined4 DAT_008cbaa4; extern undefined4 DAT_008cbaa8;
extern undefined4 DAT_008cbaac; extern undefined4 DAT_008cbab0; extern undefined4 DAT_008cbab4; extern undefined4 DAT_008cbab8;
extern undefined4 DAT_008cc230; extern undefined4 DAT_008cc234; extern undefined4 DAT_008cc238; extern undefined4 DAT_008cc23c;
extern undefined4 DAT_008cc240; extern undefined4 DAT_008cc244; extern undefined4 DAT_008cc2c0; extern undefined4 DAT_008cc2c4;
extern undefined4 DAT_008cc2c8; extern undefined4 DAT_008cc2cc; extern undefined4 DAT_008cc2d0; extern undefined4 DAT_008cc2d4;
extern undefined4 DAT_008cc2f0; extern undefined4 DAT_008cc2f4; extern undefined4 DAT_008cc2f8; extern undefined4 DAT_008cc2fc;
extern undefined4 DAT_008cc300; extern undefined4 DAT_008cc304; extern undefined4 DAT_008cc574; extern undefined4 DAT_008cc578;
extern undefined4 DAT_008cc57c; extern undefined4 DAT_008cc580; extern undefined4 DAT_008cc584; extern undefined4 DAT_008cc588;
extern undefined4 DAT_008cc9b8; extern undefined4 DAT_008cc9bc; extern undefined4 DAT_008cc9c0; extern undefined4 DAT_008cc9c4;
extern undefined4 DAT_008cc9c8; extern undefined4 DAT_008cc9cc; extern undefined4 DAT_008cce98; extern undefined4 DAT_008cce9c;
extern undefined4 DAT_008ccea0; extern undefined4 DAT_008ccea4; extern undefined4 DAT_008ccea8; extern undefined4 DAT_008cceac;
extern undefined4 DAT_008ccfc4; extern undefined4 DAT_008ccfc8; extern undefined4 DAT_008ccfcc; extern undefined4 DAT_008ccfd0;
extern undefined4 DAT_008ccfd4; extern undefined4 DAT_008ccfd8; extern undefined4 DAT_008cdd24; extern undefined4 DAT_008cdd28;
extern undefined4 DAT_008cdd2c; extern undefined4 DAT_008cdd30; extern undefined4 DAT_008cdd34; extern undefined4 DAT_008cdd38;
extern undefined4 DAT_008d01fc; extern undefined4 DAT_008d0200; extern undefined4 DAT_008d0204; extern undefined4 DAT_008d0208;
extern undefined4 DAT_008d020c; extern undefined4 DAT_008d0210;
