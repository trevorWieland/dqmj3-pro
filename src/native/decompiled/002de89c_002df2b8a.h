#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_0022f584(); extern int fn_002b1390(); extern undefined4 fn_002ddadc(); extern undefined4 fn_002de6e4(); extern undefined4 fn_002defa8();
extern undefined4 fn_00362e24(); extern undefined4 fn_00363128(); extern undefined4 fn_00363130(); extern int fn_0036c140(); extern undefined4 fn_003af0fc(); extern undefined4 fn_00689824();
extern undefined4 fn_0068ab44(); extern undefined4 fn_006ba284(); extern undefined4 fn_006f72b4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00891d18; extern undefined4 DAT_008977e0;
