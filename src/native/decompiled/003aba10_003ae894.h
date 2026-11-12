#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern uint fn_00101a50(); extern undefined4 fn_001028d4(); extern undefined4 fn_001088e0(); extern undefined4 fn_001480d0();
extern undefined4 fn_001481c8(); extern undefined4 fn_00159f34(); extern undefined4 fn_00178f9c(); extern int fn_001930b8(); extern undefined4 fn_001c804c(); extern undefined4 fn_001f74d8();
extern undefined4 fn_0024db7c(); extern undefined4 fn_0024db98(); extern undefined4 fn_0024dbb0(); extern undefined4 fn_0024dbc8(); extern undefined4 fn_0026d2e8(); extern undefined4 fn_0026d700();
extern int * fn_0026e33c(); extern undefined4 * fn_00301f50(); extern undefined4 fn_003acbc4(); extern void fn_003acf1c(); extern undefined4 fn_0044d6e4(); extern undefined4 fn_005f3aac();
extern undefined4 fn_006ba838(); extern undefined4 fn_006ba860();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_003acfc8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003aca34; extern undefined4 DAT_003aca3c; extern undefined4 DAT_003aca40; extern undefined4 DAT_00860a3c;
extern undefined4 DAT_0089104c; extern undefined4 DAT_00891084; extern undefined4 DAT_00891088; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4; extern undefined4 PTR_s_staff_roll_lower_Tag_00_bflan_0089109c;
