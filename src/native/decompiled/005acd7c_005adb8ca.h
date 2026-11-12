#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern int * fn_001588d4();
extern undefined4 fn_001f74d8(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0022f584(); extern undefined4 fn_002c37e0(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c();
extern undefined4 * fn_00301f50(); extern undefined4 fn_0031b78c(); extern undefined4 fn_0031f3f4(); extern undefined4 fn_0031f8fc(); extern undefined4 fn_00397618(); extern int fn_00397774();
extern undefined4 fn_003d454c(); extern undefined4 fn_0057a168(); extern undefined4 fn_0057a348(); extern undefined4 fn_0057a3c4(); extern undefined4 fn_0057a3dc(); extern undefined4 fn_0057a4f8();
extern undefined1 * fn_0057a634(); extern undefined4 fn_005abb50(); extern undefined4 * fn_005acb38(); extern undefined4 fn_00604768(); extern undefined4 fn_006896fc(); extern undefined4 fn_006899f4();
extern undefined4 fn_00689efc(); extern undefined4 fn_0068ab44(); extern int fn_006c2a50(); extern undefined4 fn_006f6a5c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005ad894; extern undefined4 DAT_00847618; extern undefined4 DAT_00861124; extern undefined4 DAT_00861144;
extern undefined4 DAT_00890b20; extern undefined4 DAT_00891b50; extern undefined4 DAT_008951d8; extern undefined4 DAT_008c7611;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
