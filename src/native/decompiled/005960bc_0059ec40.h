#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int * fn_00147974(); extern int * fn_001588d4(); extern undefined4 fn_0015b0f8();
extern undefined4 fn_001638a0(); extern undefined4 fn_001f74d8(); extern undefined4 fn_002043cc(); extern undefined4 fn_0022f750(); extern bool fn_002429a4(); extern undefined4 fn_0024e350();
extern undefined4 fn_002525a0(); extern undefined4 fn_0025f3f4(); extern int * fn_0028aad0(); extern int fn_002b0948(); extern undefined4 fn_002c3e78(); extern longlong fn_00300f74();
extern undefined4 * fn_00301f50(); extern undefined4 fn_0031b78c(); extern undefined4 fn_0037cb88(); extern undefined4 fn_00397618(); extern int fn_00397774(); extern int fn_003a3abc();
extern undefined4 fn_00406c48(); extern undefined4 fn_00406e9c(); extern undefined4 fn_00407140(); extern undefined4 fn_004081f0(); extern undefined4 fn_004082a4(); extern undefined4 fn_0059e074();
extern undefined4 fn_005d2aac(); extern undefined4 fn_005d2adc(); extern undefined4 fn_005f65d4(); extern undefined4 fn_005fbb70(); extern undefined1 fn_0066e158(); extern undefined4 fn_0066e55c();
extern undefined4 fn_006732a0(); extern undefined4 fn_00689bd0(); extern undefined4 fn_006ba4ec(); extern int fn_006bfda8(); extern int fn_006c5b04(); extern uint fn_006c5c08();
extern undefined4 fn_0079ce44();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893d20; extern undefined4 DAT_008944a4; extern undefined4 DAT_00894558; extern undefined4 DAT_0089455c;
extern undefined4 DAT_00894560; extern undefined4 DAT_00897804; extern undefined4 DAT_00897840; extern undefined4 DAT_00897850;
extern undefined4 DAT_00898840;
