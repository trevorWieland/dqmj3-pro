#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00102ca2(); extern undefined4 fn_00146590(); extern uint fn_001a8760(); extern undefined4 fn_001a878c(); extern void fn_006fb118();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081b708; extern undefined4 DAT_0081b70c; extern undefined4 DAT_00896138; extern undefined4 DAT_0089613c;
extern undefined4 DAT_00896140; extern undefined4 DAT_008cc784; extern undefined4 DAT_008cc788; extern undefined4 DAT_008cc78c;
extern undefined4 DAT_008cc790; extern undefined4 DAT_008cc794; extern undefined4 DAT_008cc798; extern undefined4 UNK_0081b710;
extern undefined4 UNK_0081b714;
