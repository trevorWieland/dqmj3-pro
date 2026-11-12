#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern bool fn_004dbcf0(); extern undefined4 fn_004dbd30(); extern undefined8 fn_004dbe24(); extern undefined4 fn_004ddab0(); extern undefined4 fn_004e21dc();
extern undefined4 * fn_004e9830(); extern uint fn_004e9c44(); extern uint fn_004e9cdc(); extern undefined4 fn_004eaf3c(); extern undefined4 fn_004ed050(); extern undefined4 fn_004ed068();
extern undefined4 fn_004ed098(); extern undefined4 fn_004ed0e4(); extern undefined4 fn_004ed13c(); extern undefined4 fn_004ed164(); extern undefined4 fn_004ed2e8(); extern undefined4 fn_004edc34();
extern undefined4 fn_004edc70(); extern undefined4 fn_00656e14(); extern uint fn_00658e84(); extern bool fn_006d589c(); extern undefined4 fn_006d5cf0(); extern undefined4 fn_006d5d14();
extern uint fn_006d6690(); extern uint fn_006d6700(); extern undefined4 fn_006f94d0();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00124db8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856874; extern undefined4 DAT_00856a80; extern undefined4 DAT_00856ad0; extern undefined4 DAT_00856ae8;
extern undefined4 DAT_00856b00; extern undefined4 DAT_008bf504;
