#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00658e6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890670; extern undefined4 DAT_00890674; extern undefined4 DAT_00890678; extern undefined4 DAT_0089067c;
extern undefined4 DAT_008906e0; extern undefined4 DAT_008906e4; extern undefined4 DAT_00890700; extern undefined4 DAT_00890704;
extern undefined4 DAT_00890728; extern undefined4 DAT_0089072c; extern undefined4 DAT_00890730; extern undefined4 DAT_00890770;
extern undefined4 DAT_00890774; extern undefined4 DAT_00890778; extern undefined4 DAT_00892cfc; extern undefined4 DAT_00892d00;
extern undefined4 DAT_00892d04; extern undefined4 DAT_00893b10; extern undefined4 DAT_00893b64; extern undefined4 DAT_008942d0;
extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_008951fc; extern undefined4 DAT_008952a0;
extern undefined4 DAT_008952a4; extern undefined4 DAT_008952a8; extern undefined4 DAT_008952cc; extern undefined4 DAT_008952d0;
extern undefined4 DAT_008952d4; extern undefined4 DAT_00895c04; extern undefined4 DAT_00895c08; extern undefined4 DAT_00895c0c;
extern undefined4 DAT_00896714; extern undefined4 DAT_00896718; extern undefined4 DAT_0089671c; extern undefined4 DAT_0089679c;
extern undefined4 DAT_008967a0; extern undefined4 DAT_008967a4; extern undefined4 DAT_00896808; extern undefined4 DAT_0089680c;
extern undefined4 DAT_00896810; extern undefined4 DAT_008968d4; extern undefined4 DAT_008968d8; extern undefined4 DAT_008968dc;
extern undefined4 DAT_00897074; extern undefined4 DAT_00897078; extern undefined4 DAT_0089707c; extern undefined4 DAT_008972f4;
extern undefined4 DAT_008972f8; extern undefined4 DAT_00898924; extern undefined4 DAT_00898928; extern undefined4 DAT_00898a34;
extern undefined4 DAT_00898a38; extern undefined4 DAT_00898a3c; extern undefined4 DAT_0089a84c; extern undefined4 DAT_008c0440;
extern undefined4 DAT_008c0620; extern undefined4 DAT_008c33d8; extern undefined4 DAT_008c3c68; extern undefined4 DAT_008c79bc;
extern undefined4 DAT_008c79c0; extern undefined4 DAT_008c79c4; extern undefined4 DAT_008c79c8; extern undefined4 DAT_008c79cc;
extern undefined4 DAT_008c79d0; extern undefined4 DAT_008c79d4; extern undefined4 DAT_008c79d8; extern undefined4 DAT_008c79dc;
extern undefined4 DAT_008c79e0; extern undefined4 DAT_008c79e4; extern undefined4 DAT_008c79e8; extern undefined4 DAT_008c7afc;
extern undefined4 DAT_008c7b00; extern undefined4 DAT_008c7b04; extern undefined4 DAT_008c7b08; extern undefined4 DAT_008c7b0c;
extern undefined4 DAT_008c7b10; extern undefined4 DAT_008c7b5c; extern undefined4 DAT_008c7b60; extern undefined4 DAT_008c7b64;
extern undefined4 DAT_008c7b68; extern undefined4 DAT_008c7b6c; extern undefined4 DAT_008c7b70; extern undefined4 DAT_008c7bbc;
extern undefined4 DAT_008c7bc0; extern undefined4 DAT_008c7bc4; extern undefined4 DAT_008c7bc8; extern undefined4 DAT_008c7bcc;
extern undefined4 DAT_008c7bd0; extern undefined4 DAT_008c7c4c; extern undefined4 DAT_008c7c50; extern undefined4 DAT_008c7c54;
extern undefined4 DAT_008c7c58; extern undefined4 DAT_008c7c5c; extern undefined4 DAT_008c7c60; extern undefined4 DAT_008c9cf0;
extern undefined4 DAT_008c9cf4; extern undefined4 DAT_008c9cf8; extern undefined4 DAT_008c9cfc; extern undefined4 DAT_008c9d00;
extern undefined4 DAT_008c9d04; extern undefined4 DAT_008cbc90; extern undefined4 DAT_008cbc94; extern undefined4 DAT_008cbc98;
extern undefined4 DAT_008cbc9c; extern undefined4 DAT_008cbca0; extern undefined4 DAT_008cbca4; extern undefined4 DAT_008cbcc0;
extern undefined4 DAT_008cbcc4; extern undefined4 DAT_008cbcc8; extern undefined4 DAT_008cbccc; extern undefined4 DAT_008cbcd0;
extern undefined4 DAT_008cbcd4; extern undefined4 DAT_008cc364; extern undefined4 DAT_008cc368; extern undefined4 DAT_008cc36c;
extern undefined4 DAT_008cc370; extern undefined4 DAT_008cc374; extern undefined4 DAT_008cc378; extern undefined4 DAT_008ccc40;
extern undefined4 DAT_008ccc44; extern undefined4 DAT_008ccc48; extern undefined4 DAT_008ccc4c; extern undefined4 DAT_008ccc50;
extern undefined4 DAT_008ccc54; extern undefined4 DAT_008ccd00; extern undefined4 DAT_008ccd04; extern undefined4 DAT_008ccd08;
extern undefined4 DAT_008ccd0c; extern undefined4 DAT_008ccd10; extern undefined4 DAT_008ccd14; extern undefined4 DAT_008ccd30;
extern undefined4 DAT_008ccd34; extern undefined4 DAT_008ccd38; extern undefined4 DAT_008ccd3c; extern undefined4 DAT_008ccd40;
extern undefined4 DAT_008ccd44; extern undefined4 DAT_008cce08; extern undefined4 DAT_008cce0c; extern undefined4 DAT_008cce10;
extern undefined4 DAT_008cce14; extern undefined4 DAT_008cce18; extern undefined4 DAT_008cce1c; extern undefined4 DAT_008cd74c;
extern undefined4 DAT_008cd750; extern undefined4 DAT_008cd754; extern undefined4 DAT_008cd758; extern undefined4 DAT_008cd75c;
extern undefined4 DAT_008cd760; extern undefined4 DAT_008cdba4; extern undefined4 DAT_008cdba8; extern undefined4 DAT_008cdbac;
extern undefined4 DAT_008cdbb0; extern undefined4 DAT_008cdbb4; extern undefined4 DAT_008cdbb8; extern undefined4 DAT_008d022c;
extern undefined4 DAT_008d0230; extern undefined4 DAT_008d0234; extern undefined4 DAT_008d0238; extern undefined4 DAT_008d023c;
extern undefined4 DAT_008d0240; extern undefined4 DAT_008d034c; extern undefined4 DAT_008d0350; extern undefined4 DAT_008d0354;
extern undefined4 DAT_008d0358; extern undefined4 DAT_008d035c; extern undefined4 DAT_008d0360;
