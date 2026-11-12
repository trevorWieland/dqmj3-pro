#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern int fn_00129d4c();
extern int * fn_001588d4(); extern undefined4 fn_001638a0(); extern undefined4 fn_0022f584(); extern undefined4 fn_002c37e0(); extern undefined4 fn_002dd084(); extern undefined4 fn_002ff628();
extern undefined8 fn_00301a9c(); extern undefined4 fn_0031b78c(); extern undefined4 fn_0031f3f4(); extern undefined4 fn_0031f8fc(); extern void fn_00342c7c(); extern undefined4 fn_00362e84();
extern undefined4 fn_00362f9c(); extern undefined4 fn_0036307c(); extern undefined4 fn_0036308c(); extern undefined4 fn_00397618(); extern int fn_00397774(); extern undefined4 fn_003af0fc();
extern undefined4 fn_003f8108(); extern undefined4 fn_003f820c(); extern bool fn_00660e0c(); extern bool fn_00660e44(); extern undefined1 fn_00661040(); extern undefined1 fn_00661070();
extern undefined4 fn_00689878(); extern undefined4 fn_00689930(); extern undefined4 fn_006899f4(); extern undefined4 fn_00689d04(); extern undefined4 fn_00689efc(); extern undefined4 fn_0068ab44();
extern undefined4 fn_006976c0(); extern int fn_006b2a40(); extern bool fn_006b63fc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00342810; extern undefined4 DAT_00342818; extern undefined4 DAT_00342834; extern undefined4 DAT_00342858;
extern undefined4 DAT_00342c38; extern undefined4 DAT_00891db8; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804;
extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 _DAT_00891d94;
extern undefined4 _DAT_00891d9c;
