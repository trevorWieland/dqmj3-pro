#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern int * fn_0013c428(); extern undefined4 fn_0014ddb8(); extern undefined4 fn_0015def0(); extern undefined4 fn_0015dfc0(); extern int * fn_0015e6f0();
extern undefined4 * fn_0015ece0(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined4 * fn_00170f54(); extern int fn_001775e8(); extern undefined4 fn_0030233c();
extern undefined4 * fn_004745d8(); extern undefined4 fn_00477090(); extern undefined4 fn_0047e514(); extern int fn_004a5870(); extern undefined4 fn_004a7300(); extern undefined4 fn_00735640();
extern undefined4 fn_0079a8b8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00787700(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00852b8c; extern undefined4 DAT_008536ec; extern undefined4 DAT_00855a94; extern undefined4 DAT_00855d20;
extern undefined4 DAT_008b637e; extern undefined4 DAT_008b63d8; extern undefined4 DAT_008b6438; extern undefined4 DAT_008b6444;
extern undefined4 PTR_FUN_0085508c; extern undefined4 PTR_LAB_00854110;
