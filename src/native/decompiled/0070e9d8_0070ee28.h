#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_00303b10(); extern undefined4 * fn_0045503c(); extern undefined4 fn_00474678(); extern undefined4 fn_004a18ac();
extern undefined4 fn_004a1a00(); extern int fn_0074cd10(); extern undefined4 * fn_0074dd3c(); extern int * fn_0077efd0();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004b2e0c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008533c0; extern undefined4 DAT_00853418; extern undefined4 DAT_00853f10; extern undefined4 DAT_00855854;
extern undefined4 DAT_00894d50; extern undefined4 DAT_00894d54; extern undefined4 DAT_00894d58; extern undefined4 DAT_008951fc;
extern undefined4 DAT_00895cb4; extern undefined4 DAT_00895cb8; extern undefined4 DAT_00895d94; extern undefined4 DAT_00895d98;
extern undefined4 DAT_0089622c; extern undefined4 DAT_0089622d; extern undefined4 DAT_0089622e; extern undefined4 DAT_0089622f;
extern undefined4 DAT_00896230; extern undefined4 DAT_00896231; extern undefined4 DAT_00896232; extern undefined4 DAT_00896233;
extern undefined4 DAT_00896234; extern undefined4 DAT_00896235; extern undefined4 DAT_00896236; extern undefined4 DAT_00896237;
extern undefined4 DAT_00896238; extern undefined4 DAT_00896239; extern undefined4 DAT_0089623a; extern undefined4 DAT_0089623b;
extern undefined4 DAT_0089623c; extern undefined4 DAT_0089623d; extern undefined4 DAT_0089623e; extern undefined4 DAT_0089623f;
extern undefined4 DAT_00896240; extern undefined4 DAT_00896241; extern undefined4 DAT_00896242; extern undefined4 DAT_00896243;
extern undefined4 DAT_00896244; extern undefined4 DAT_00896245; extern undefined4 DAT_00896246; extern undefined4 DAT_00896247;
extern undefined4 DAT_00896248; extern undefined4 DAT_00896249; extern undefined4 DAT_0089624a; extern undefined4 DAT_0089624b;
extern undefined4 DAT_0089624c; extern undefined4 DAT_0089624d; extern undefined4 DAT_0089624e; extern undefined4 DAT_0089624f;
extern undefined4 DAT_00896250; extern undefined4 DAT_00896254; extern undefined4 DAT_008963a0; extern undefined4 DAT_008963a4;
extern undefined4 DAT_008963a8; extern undefined4 DAT_008988ec; extern undefined4 DAT_008988f0; extern undefined4 DAT_008988fc;
extern undefined4 DAT_00898900; extern undefined4 DAT_0089890c; extern undefined4 DAT_00898910; extern undefined4 DAT_008b6400;
extern undefined4 DAT_008b6508; extern undefined4 DAT_008b68a4; extern undefined4 DAT_008b68a8; extern undefined4 DAT_008cb840;
extern undefined4 DAT_008cb844; extern undefined4 DAT_008cb848; extern undefined4 DAT_008cb84c; extern undefined4 DAT_008cb850;
extern undefined4 DAT_008cb854; extern undefined4 DAT_008cc49c; extern undefined4 DAT_008cc4a0; extern undefined4 DAT_008cc4a4;
extern undefined4 DAT_008cc4a8; extern undefined4 DAT_008cc4ac; extern undefined4 DAT_008cc4b0; extern undefined4 DAT_008cc544;
extern undefined4 DAT_008cc548; extern undefined4 DAT_008cc54c; extern undefined4 DAT_008cc550; extern undefined4 DAT_008cc554;
extern undefined4 DAT_008cc558; extern undefined4 DAT_008cc898; extern undefined4 DAT_008cc89c; extern undefined4 DAT_008cc8a0;
extern undefined4 DAT_008cc8a4; extern undefined4 DAT_008cc8a8; extern undefined4 DAT_008cc8ac; extern undefined4 DAT_008cc958;
extern undefined4 DAT_008cc95c; extern undefined4 DAT_008cc960; extern undefined4 DAT_008cc964; extern undefined4 DAT_008cc968;
extern undefined4 DAT_008cc96c; extern undefined4 DAT_008ccfb8; extern undefined4 DAT_008ccfbc; extern undefined4 DAT_008d0184;
extern undefined4 DAT_008d0188; extern undefined4 DAT_008d018c; extern undefined4 DAT_008d0190; extern undefined4 DAT_008d0194;
extern undefined4 DAT_008d0198; extern undefined4 DAT_008d01b4; extern undefined4 DAT_008d01b8; extern undefined4 DAT_008d01bc;
extern undefined4 DAT_008d01c0; extern undefined4 DAT_008d01c4; extern undefined4 DAT_008d01c8; extern undefined4 DAT_008d01e4;
extern undefined4 DAT_008d01e8; extern undefined4 DAT_008d01ec; extern undefined4 DAT_008d01f0; extern undefined4 DAT_008d01f4;
extern undefined4 DAT_008d01f8; extern undefined4 DAT_008e93d0;
