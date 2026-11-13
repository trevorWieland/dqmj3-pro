#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0013c500(); extern undefined4 * fn_00168a24(); extern undefined4 fn_00303b10(); extern undefined4 fn_00558844();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00522680(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00525294(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0077eea8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0044f5d4; extern undefined4 DAT_00705980; extern undefined4 DAT_0085745c; extern undefined4 DAT_0085747c;
extern undefined4 DAT_00859684; extern undefined4 DAT_008596e0; extern undefined4 DAT_00890964; extern undefined4 DAT_00890968;
extern undefined4 DAT_008909b8; extern undefined4 DAT_008909bc; extern undefined4 DAT_00890af4; extern undefined4 DAT_00890af8;
extern undefined4 DAT_00891280; extern undefined4 DAT_00891284; extern undefined4 DAT_0089189c; extern undefined4 DAT_008918a0;
extern undefined4 DAT_0089466c; extern undefined4 DAT_008972b4; extern undefined4 DAT_008972b8; extern undefined4 DAT_008977a0;
extern undefined4 DAT_008977a4; extern undefined4 DAT_00898934; extern undefined4 DAT_00898938; extern undefined4 DAT_0089893c;
extern undefined4 DAT_00899278; extern undefined4 DAT_0089927c; extern undefined4 DAT_00899280; extern undefined4 DAT_00899284;
extern undefined4 DAT_00899288; extern undefined4 DAT_0089928c; extern undefined4 DAT_0089a4f4; extern undefined4 DAT_0089a4f8;
extern undefined4 DAT_0089a4fc; extern undefined4 DAT_0089a500; extern undefined4 DAT_0089a7d0; extern undefined4 DAT_0089a7d4;
extern undefined4 DAT_0089a7d8; extern undefined4 DAT_0089a7f4; extern undefined4 DAT_0089a82c; extern undefined4 DAT_0089a834;
extern undefined4 DAT_0089a93c; extern undefined4 DAT_008bf4e4; extern undefined4 DAT_008bf4e5; extern undefined4 DAT_008bf4e6;
extern undefined4 DAT_008c03b0; extern undefined4 DAT_008c045c; extern undefined4 DAT_008c060c; extern undefined4 DAT_008c0610;
extern undefined4 DAT_008c33d4; extern undefined4 DAT_008c340c; extern undefined4 DAT_008c3588; extern undefined4 DAT_008c3c4c;
extern undefined4 DAT_008c3c58; extern undefined4 DAT_008c3d38; extern undefined4 DAT_008c7dfc; extern undefined4 DAT_008c7e00;
extern undefined4 DAT_008c7e04; extern undefined4 DAT_008c7e08; extern undefined4 DAT_008c7e0c; extern undefined4 DAT_008c7e10;
extern undefined4 DAT_008c7ebc; extern undefined4 DAT_008c7ec0; extern undefined4 DAT_008c7ec4; extern undefined4 DAT_008c7ec8;
extern undefined4 DAT_008c7ecc; extern undefined4 DAT_008c7ed0; extern undefined4 DAT_008c7ed4; extern undefined4 DAT_008c7ed8;
extern undefined4 DAT_008c7edc; extern undefined4 DAT_008c7ee0; extern undefined4 DAT_008c7ee4; extern undefined4 DAT_008c7ee8;
extern undefined4 DAT_008c7f6c; extern undefined4 DAT_008c7f70; extern undefined4 DAT_008c7f74; extern undefined4 DAT_008c7f78;
extern undefined4 DAT_008c7f7c; extern undefined4 DAT_008c7f80; extern undefined4 DAT_008c808c; extern undefined4 DAT_008c8090;
extern undefined4 DAT_008c8094; extern undefined4 DAT_008c8098; extern undefined4 DAT_008c809c; extern undefined4 DAT_008c80a0;
extern undefined4 DAT_008c8bcc; extern undefined4 DAT_008c8bd0; extern undefined4 DAT_008c8bd4; extern undefined4 DAT_008c8bd8;
extern undefined4 DAT_008c8bdc; extern undefined4 DAT_008c8be0; extern undefined4 DAT_008c8e48; extern undefined4 DAT_008c8e4c;
extern undefined4 DAT_008c8e50; extern undefined4 DAT_008c8e54; extern undefined4 DAT_008c8e58; extern undefined4 DAT_008c8e5c;
extern undefined4 DAT_008cdac4; extern undefined4 DAT_008cdac8; extern undefined4 DAT_008cdacc; extern undefined4 DAT_008cdad0;
extern undefined4 DAT_008cdad4; extern undefined4 DAT_008cdad8; extern undefined4 DAT_008cdcf4; extern undefined4 DAT_008cdcf8;
extern undefined4 DAT_008cdcfc; extern undefined4 DAT_008cdd00; extern undefined4 DAT_008cdd04; extern undefined4 DAT_008cdd08;
extern undefined4 DAT_008d025c; extern undefined4 DAT_008d0260; extern undefined4 DAT_008d0264; extern undefined4 DAT_008d0268;
extern undefined4 DAT_008d026c; extern undefined4 DAT_008d0270; extern undefined4 DAT_008d17d8; extern undefined4 DAT_008d17dc;
extern undefined4 DAT_008d17e0; extern undefined4 DAT_008d17e4; extern undefined4 DAT_008d17e8; extern undefined4 DAT_008d17ec;
extern undefined4 DAT_008e3670; extern undefined4 DAT_008e3674; extern undefined4 DAT_008e3678; extern undefined4 DAT_008e367c;
extern undefined4 DAT_008e3680; extern undefined4 DAT_008e3684; extern undefined4 DAT_008e3688; extern undefined4 DAT_008e368c;
extern undefined4 DAT_008e3690; extern undefined4 DAT_008e3698; extern undefined4 DAT_008e369c; extern undefined4 DAT_008ebe50;
extern undefined4 DAT_008eef20; extern undefined4 DAT_008eef24; extern undefined4 DAT_008eef28; extern undefined4 DAT_008eef2c;
extern undefined4 DAT_008eef90; extern undefined4 DAT_008eef94; extern undefined4 DAT_008eef95; extern undefined4 DAT_008eef96;
extern undefined4 DAT_008eef98; extern undefined4 DAT_008eef9c; extern undefined4 DAT_008eefa0; extern undefined4 DAT_008eefa4;
extern undefined4 DAT_008eefa8; extern undefined4 DAT_008eefac; extern undefined4 DAT_008eefb0; extern undefined4 DAT_008eefb4;
