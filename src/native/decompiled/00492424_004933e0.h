#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 fn_0014f1bc(); extern undefined4 fn_0014f510(); extern undefined4 * fn_0015ece0(); extern int fn_00170fa4();
extern undefined4 fn_00455018(); extern undefined4 fn_004732fc(); extern int fn_00473520(); extern undefined4 fn_00477090(); extern undefined4 fn_0047faf0(); extern undefined4 fn_0048cbf8();
extern int fn_0048d3c8(); extern undefined4 fn_0049339c(); extern undefined4 fn_004a7300(); extern undefined4 fn_004a749c(); extern undefined4 fn_004b8d4c(); extern undefined4 * fn_004b93c4();
extern undefined4 fn_004ba5a4(); extern undefined4 fn_004ba934(); extern undefined4 fn_00735640(); extern undefined4 fn_00735644(); extern undefined4 fn_0074c034(); extern undefined4 fn_0079a6b8();
extern undefined4 fn_0079b730(); extern int * fn_0079c5b8(); extern int * fn_0079dd48();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0075552c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008b637e; extern undefined4 DAT_008b6430; extern undefined4 DAT_008e6868;
