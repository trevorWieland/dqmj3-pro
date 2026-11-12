#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_00303b10(); extern undefined4 * fn_0045503c(); extern undefined4 fn_00474678(); extern undefined4 fn_004a18ac();
extern undefined4 fn_004a1a00(); extern undefined4 * fn_0074d86c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004a6a5c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00853418; extern undefined4 DAT_00853e14; extern undefined4 DAT_008551bc; extern undefined4 DAT_00856d08;
extern undefined4 DAT_00893018; extern undefined4 DAT_0089301c; extern undefined4 DAT_00893020; extern undefined4 DAT_00893ae4;
extern undefined4 DAT_00893ae8; extern undefined4 DAT_00893aec; extern undefined4 DAT_00893b64; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894678; extern undefined4 DAT_00894b58; extern undefined4 DAT_00894b5c; extern undefined4 DAT_00894b60;
extern undefined4 DAT_00895150; extern undefined4 DAT_00895154; extern undefined4 DAT_00895155; extern undefined4 DAT_00895156;
extern undefined4 DAT_00895157; extern undefined4 DAT_00895158; extern undefined4 DAT_00895159; extern undefined4 DAT_0089515a;
extern undefined4 DAT_0089515b; extern undefined4 DAT_0089515c; extern undefined4 DAT_0089515d; extern undefined4 DAT_0089515e;
extern undefined4 DAT_0089515f; extern undefined4 DAT_00895160; extern undefined4 DAT_00895161; extern undefined4 DAT_00895162;
extern undefined4 DAT_00895163; extern undefined4 DAT_00895164; extern undefined4 DAT_00895165; extern undefined4 DAT_00895166;
extern undefined4 DAT_00895167; extern undefined4 DAT_00895168; extern undefined4 DAT_00895169; extern undefined4 DAT_0089516a;
extern undefined4 DAT_0089516b; extern undefined4 DAT_0089516c; extern undefined4 DAT_0089516d; extern undefined4 DAT_0089516e;
extern undefined4 DAT_0089516f; extern undefined4 DAT_00895170; extern undefined4 DAT_00895171; extern undefined4 DAT_00895172;
extern undefined4 DAT_00895173; extern undefined4 DAT_00895174; extern undefined4 DAT_00895175; extern undefined4 DAT_00895176;
extern undefined4 DAT_00895177; extern undefined4 DAT_00895178; extern undefined4 DAT_0089517c; extern undefined4 DAT_008951fc;
extern undefined4 DAT_00895c90; extern undefined4 DAT_00895c94; extern undefined4 DAT_00895d8c; extern undefined4 DAT_00895d90;
extern undefined4 DAT_00895dd0; extern undefined4 DAT_00895dd4; extern undefined4 DAT_00896574; extern undefined4 DAT_00896575;
extern undefined4 DAT_00896576; extern undefined4 DAT_00896577; extern undefined4 DAT_00896578; extern undefined4 DAT_00896579;
extern undefined4 DAT_0089657a; extern undefined4 DAT_0089657b; extern undefined4 DAT_0089657c; extern undefined4 DAT_00896580;
extern undefined4 DAT_00896581; extern undefined4 DAT_00896582; extern undefined4 DAT_00896583; extern undefined4 DAT_00896584;
extern undefined4 DAT_00896585; extern undefined4 DAT_00896586; extern undefined4 DAT_00896587; extern undefined4 DAT_00896588;
extern undefined4 DAT_00896589; extern undefined4 DAT_0089658a; extern undefined4 DAT_0089658b; extern undefined4 DAT_0089658c;
extern undefined4 DAT_0089658d; extern undefined4 DAT_0089658e; extern undefined4 DAT_0089658f; extern undefined4 DAT_00896590;
extern undefined4 DAT_00896591; extern undefined4 DAT_00896592; extern undefined4 DAT_00896593; extern undefined4 DAT_00896594;
extern undefined4 DAT_00896595; extern undefined4 DAT_00896596; extern undefined4 DAT_00896597; extern undefined4 DAT_00896598;
extern undefined4 DAT_0089659c; extern undefined4 DAT_00896790; extern undefined4 DAT_00896794; extern undefined4 DAT_00896798;
extern undefined4 DAT_00896c74; extern undefined4 DAT_00896c78; extern undefined4 DAT_00897034; extern undefined4 DAT_00897038;
extern undefined4 DAT_0089703c; extern undefined4 DAT_00898c58; extern undefined4 DAT_00898c5c; extern undefined4 DAT_00898c60;
extern undefined4 DAT_0089a904; extern undefined4 DAT_0089a908; extern undefined4 DAT_008b6400; extern undefined4 DAT_008b6508;
extern undefined4 DAT_008c05dc; extern undefined4 DAT_008ca150; extern undefined4 DAT_008ca154; extern undefined4 DAT_008ca158;
extern undefined4 DAT_008ca15c; extern undefined4 DAT_008ca160; extern undefined4 DAT_008ca164; extern undefined4 DAT_008ca168;
extern undefined4 DAT_008ca16c; extern undefined4 DAT_008ca170; extern undefined4 DAT_008ca174; extern undefined4 DAT_008ca178;
extern undefined4 DAT_008ca17c; extern undefined4 DAT_008cab58; extern undefined4 DAT_008cab5c; extern undefined4 DAT_008cab60;
extern undefined4 DAT_008cab64; extern undefined4 DAT_008cab68; extern undefined4 DAT_008cab6c; extern undefined4 DAT_008cb630;
extern undefined4 DAT_008cb634; extern undefined4 DAT_008cb638; extern undefined4 DAT_008cb63c; extern undefined4 DAT_008cb640;
extern undefined4 DAT_008cb644; extern undefined4 DAT_008cbb1c; extern undefined4 DAT_008cbb20; extern undefined4 DAT_008cbb24;
extern undefined4 DAT_008cbb28; extern undefined4 DAT_008cbb2c; extern undefined4 DAT_008cbb30; extern undefined4 DAT_008cc43c;
extern undefined4 DAT_008cc440; extern undefined4 DAT_008cc444; extern undefined4 DAT_008cc448; extern undefined4 DAT_008cc44c;
extern undefined4 DAT_008cc450; extern undefined4 DAT_008cc52c; extern undefined4 DAT_008cc530; extern undefined4 DAT_008cc534;
extern undefined4 DAT_008cc538; extern undefined4 DAT_008cc53c; extern undefined4 DAT_008cc540; extern undefined4 DAT_008cc58c;
extern undefined4 DAT_008cc590; extern undefined4 DAT_008cc594; extern undefined4 DAT_008cc598; extern undefined4 DAT_008cc59c;
extern undefined4 DAT_008cc5a0; extern undefined4 DAT_008ccad8; extern undefined4 DAT_008ccadc; extern undefined4 DAT_008ccae0;
extern undefined4 DAT_008ccae4; extern undefined4 DAT_008ccae8; extern undefined4 DAT_008ccaec; extern undefined4 DAT_008ccce8;
extern undefined4 DAT_008cccec; extern undefined4 DAT_008cccf0; extern undefined4 DAT_008cccf4; extern undefined4 DAT_008cccf8;
extern undefined4 DAT_008cccfc; extern undefined4 DAT_008cd0cc; extern undefined4 DAT_008cd0d0; extern undefined4 DAT_008cd0d4;
extern undefined4 DAT_008cd0d8; extern undefined4 DAT_008cd0dc; extern undefined4 DAT_008cd0e0; extern undefined4 DAT_008cd704;
extern undefined4 DAT_008cd708; extern undefined4 DAT_008cd70c; extern undefined4 DAT_008cd710; extern undefined4 DAT_008cd714;
extern undefined4 DAT_008cd718; extern undefined4 DAT_008d0424; extern undefined4 DAT_008d0428; extern undefined4 DAT_008d042c;
extern undefined4 DAT_008d0430; extern undefined4 DAT_008d0434; extern undefined4 DAT_008d0438; extern undefined4 DAT_008e96d0;
extern undefined4 DAT_008e96d4; extern undefined4 DAT_008e96d8; extern undefined4 DAT_008e96dc; extern undefined4 DAT_008ed850;
