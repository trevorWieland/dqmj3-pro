#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0015e294(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_00169c08(); extern undefined4 fn_0030233c(); extern undefined4 * fn_004745d8();
extern undefined4 * fn_00488798(); extern byte * fn_00495d00(); extern int * fn_004b4d90(); extern int * fn_004b4f20(); extern int fn_0074c2b8(); extern char * fn_00785c48();
extern int * fn_00786a18();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00853324; extern undefined4 DAT_0085346c; extern undefined4 DAT_008544fc; extern undefined4 DAT_0085450c;
extern undefined4 PTR_LAB_00854110;
