#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_001287d4(); extern undefined4 fn_0013c500(); extern undefined4 fn_00144810(); extern undefined4 fn_0014481c(); extern undefined4 * fn_0015ece0();
extern undefined8 fn_0017821c(); extern int * fn_0017d948(); extern undefined4 fn_0017d96c(); extern undefined4 fn_0017dcb0(); extern undefined4 fn_0019530c(); extern undefined4 fn_0023e640();
extern undefined4 fn_00263814(); extern undefined4 * fn_00301f50(); extern undefined4 fn_00303b10(); extern undefined4 * fn_0046c7f0(); extern undefined4 * fn_004745d8(); extern undefined4 fn_004a18ac();
extern undefined4 fn_004b9b58(); extern undefined4 fn_0054a630(); extern undefined4 fn_00660790(); extern undefined4 fn_0068c7e8(); extern undefined4 fn_0068cafc(); extern int fn_006a8660();
extern bool fn_006a8714(); extern undefined4 * fn_0074e0d4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00310bfc(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0074d360(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00705334; extern undefined4 DAT_007d8878; extern undefined4 DAT_0085281c; extern undefined4 DAT_008528bc;
extern undefined4 DAT_0085290c; extern undefined4 DAT_00852d6c; extern undefined4 DAT_0085319c; extern undefined4 DAT_00853798;
extern undefined4 DAT_00853c18; extern undefined4 DAT_00853c90; extern undefined4 DAT_00853d3c; extern undefined4 DAT_00853fc4;
extern undefined4 DAT_00853fe8; extern undefined4 DAT_0085400c; extern undefined4 DAT_00854054; extern undefined4 DAT_00854100;
extern undefined4 DAT_00854b88; extern undefined4 DAT_00855ab4; extern undefined4 DAT_00855ad4; extern undefined4 DAT_00857950;
extern unsigned char *DAT_008977e8; extern unsigned char *DAT_00897818; extern unsigned char *DAT_0089a918; extern undefined4 DAT_008b63a1;
extern undefined4 DAT_008b63ec; extern undefined4 DAT_008b6400; extern undefined4 DAT_008b6468; extern undefined4 DAT_008b64f4;
extern undefined4 DAT_008b64f8; extern undefined4 DAT_008b64fc; extern undefined4 DAT_008b6500; extern undefined4 DAT_008b6504;
extern undefined4 DAT_008b6508; extern undefined4 DAT_008b6548; extern undefined4 DAT_008b654c; extern undefined4 DAT_008b6550;
extern undefined4 DAT_008b6558; extern undefined4 DAT_008b6560; extern undefined4 DAT_008b6564; extern code *DAT_008bf4f4;
extern undefined4 DAT_008e6a94; extern undefined4 DAT_008e6a98; extern undefined4 DAT_008e6aa4; extern undefined4 DAT_008e6bf8;
extern undefined4 DAT_008e6bfc; extern undefined4 DAT_008e6c00; extern undefined4 DAT_008e6c04; extern undefined4 DAT_008e6c08;
extern undefined4 DAT_008e6c20; extern undefined4 DAT_008e6c24; extern undefined4 DAT_008e6c28; extern undefined4 DAT_008e6c40;
extern undefined4 DAT_008e6c44; extern undefined4 DAT_008e6c48; extern undefined4 DAT_008e6c60; extern undefined4 DAT_008e6c64;
extern undefined4 DAT_008e6c68; extern undefined4 DAT_008e6c6c; extern undefined4 DAT_008e6c70; extern undefined4 DAT_008e6c74;
extern undefined4 DAT_008e6c78; extern undefined4 DAT_008e6c7c; extern undefined4 DAT_008e6c80; extern undefined4 DAT_008e6c84;
extern undefined4 DAT_008e6c86; extern undefined4 DAT_008e6c88; extern undefined4 DAT_008e6c8c; extern undefined4 DAT_008e6c90;
extern undefined4 DAT_008e6c94; extern undefined4 DAT_008e7654; extern undefined4 DAT_008e7658; extern undefined4 DAT_008e765c;
extern undefined4 DAT_008e7660; extern undefined4 DAT_008e7664; extern undefined4 DAT_008e7668; extern undefined4 DAT_008e766c;
extern undefined4 DAT_008e7670; extern undefined4 DAT_008e7674; extern undefined4 DAT_008e769c; extern undefined4 DAT_008e76a0;
extern undefined4 DAT_008e76a4; extern undefined4 DAT_008e76e0; extern undefined4 DAT_008e76e4; extern undefined4 DAT_008e76e8;
extern undefined4 DAT_008e7710; extern undefined4 DAT_008e7738; extern undefined4 DAT_008e773c; extern undefined4 DAT_008e7740;
extern undefined4 DAT_008e7744; extern undefined4 DAT_008e7748; extern undefined4 DAT_008e774c; extern undefined4 DAT_008e7774;
extern undefined4 DAT_008e778c; extern undefined4 DAT_008e77b8; extern undefined4 DAT_008e92d8; extern undefined4 DAT_008e92dc;
extern undefined4 DAT_008e92e0; extern undefined4 DAT_008e92e4; extern undefined4 DAT_008e92fc; extern undefined4 DAT_008e9300;
extern undefined4 DAT_008e9304; extern undefined4 DAT_008e9308; extern undefined4 DAT_008e9309; extern undefined4 DAT_008e930c;
extern undefined4 DAT_008e9310; extern undefined4 DAT_008e9314; extern undefined4 DAT_008e9318; extern undefined4 DAT_008e9319;
extern undefined4 DAT_008e931c; extern undefined4 DAT_008e9320; extern undefined4 DAT_008e9324; extern undefined4 DAT_008e9328;
extern undefined4 DAT_008e9329; extern undefined4 DAT_008e932c; extern undefined4 PTR_LAB_008533fc; extern undefined4 PTR_LAB_00854110;
extern undefined4 PTR_u_Insufficient_Memory_008b6568; extern undefined4 s_;
