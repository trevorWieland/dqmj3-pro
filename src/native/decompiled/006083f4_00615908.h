#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_0010301c(); extern int * fn_00147974(); extern int * fn_001588d4(); extern undefined4 fn_001638a0(); extern undefined8 fn_0017821c();
extern int fn_001c232c(); extern undefined4 fn_001f74d8(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0020be00(); extern undefined4 fn_0022f584(); extern undefined4 fn_0022f750();
extern undefined4 fn_00231cb8(); extern undefined4 fn_00243550(); extern undefined4 fn_0031b78c(); extern undefined4 fn_0031c154(); extern int fn_0034bec4(); extern undefined4 fn_0036c5f4();
extern undefined4 fn_0039536c(); extern undefined4 fn_003953b0(); extern undefined4 fn_00397618(); extern int fn_00397774(); extern undefined4 fn_00574374(); extern undefined4 * fn_00574768();
extern undefined4 fn_005ab924(); extern undefined4 fn_00609ad8(); extern int fn_00609dc0(); extern int fn_00609fb4(); extern undefined4 fn_0060e65c(); extern undefined4 * fn_0060e880();
extern undefined1 * fn_0060e9c0(); extern undefined4 fn_0060ecf8(); extern undefined4 fn_00659544(); extern undefined4 fn_006899f4(); extern undefined4 fn_00689bd0(); extern undefined4 fn_00689d04();
extern char fn_006e6e6c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0060aaa8; extern undefined4 DAT_0060aac4; extern undefined4 DAT_0060b2b4; extern undefined4 DAT_0060b2d0;
extern undefined4 DAT_0060b2ec; extern undefined4 DAT_0060b308; extern undefined4 DAT_0060c268; extern undefined4 DAT_0060c284;
extern undefined4 DAT_0060c2a0; extern undefined4 DAT_0060f33c; extern undefined4 DAT_00615938; extern undefined4 DAT_007bd6e8;
extern undefined4 DAT_007c7018; extern undefined4 DAT_0084fa90; extern undefined4 DAT_008627f0; extern undefined4 DAT_0086d90c;
extern undefined4 DAT_00894498; extern undefined4 DAT_008944b4; extern undefined4 DAT_00894a9c; extern undefined4 DAT_008977e4;
extern undefined4 DAT_00898d28; extern undefined4 DAT_00898d2c; extern undefined4 DAT_00898d30; extern undefined4 DAT_00898e0c;
extern undefined4 DAT_00898e10; extern undefined4 DAT_00898e14;
