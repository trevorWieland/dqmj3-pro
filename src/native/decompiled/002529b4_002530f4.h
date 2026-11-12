#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_0010706c(); extern int fn_0011c134(); extern undefined4 * fn_0011d89c(); extern uint fn_00147e6c(); extern undefined4 fn_00154ae0();
extern undefined4 fn_0017484c(); extern undefined4 fn_00174858(); extern int fn_001748ec(); extern undefined4 fn_00175d88(); extern undefined4 fn_00175dcc(); extern undefined8 fn_0017821c();
extern undefined4 fn_001d448c(); extern undefined4 fn_00202fd8(); extern undefined4 fn_002043cc(); extern undefined4 fn_00204404(); extern undefined4 fn_00251f18(); extern undefined4 fn_0025266c();
extern void fn_00252eb8(); extern undefined4 fn_0029432c(); extern undefined4 fn_002fa3b4(); extern undefined4 fn_002fa418(); extern undefined4 fn_00615ee4(); extern char fn_006c40c8();
extern byte fn_006c41b0(); extern byte fn_006c41e4(); extern byte fn_006c476c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00202fe8(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_002f8abc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002530b8; extern undefined4 DAT_007c4fdc; extern undefined4 DAT_008923ac; extern undefined4 DAT_008923b0;
extern undefined4 DAT_008977e4; extern undefined4 DAT_00897828; extern undefined4 DAT_00897840;
