#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_0016a43c(); extern undefined4 fn_0016dcdc(); extern undefined4 fn_00178f9c(); extern int * fn_0017dd54(); extern undefined4 fn_001828f0();
extern int * fn_00194f08(); extern undefined4 fn_002feef8(); extern undefined4 fn_00579968(); extern int fn_00579a04(); extern undefined4 fn_00579ad0();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00578b28(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ba8a4; extern undefined4 DAT_007ba8cc; extern undefined4 DAT_007ba8dc; extern undefined4 DAT_007ba8fc;
extern undefined4 DAT_007ba900; extern undefined4 DAT_007ba92c; extern undefined4 DAT_007ba930; extern undefined4 DAT_00841620;
extern undefined4 DAT_0085c508; extern undefined4 DAT_0085c518; extern undefined4 DAT_0085c554; extern undefined4 DAT_0085c560;
extern undefined4 DAT_0085c570; extern undefined4 DAT_0085c57c; extern undefined4 DAT_0085c590; extern undefined4 DAT_0085c5d4;
extern undefined4 DAT_0085c5e8; extern undefined4 DAT_0085c60c; extern undefined4 DAT_0085c71c; extern undefined4 DAT_0085c72c;
extern undefined4 DAT_0085c760; extern undefined4 DAT_0089a92c; extern undefined4 PTR_s_Null_corner_04_007ba8ec; extern undefined4 PTR_s_Null_corner_08_007ba904;
extern undefined4 PTR_s_to_ally_00_007ba8bc; extern undefined4 PTR_s_to_ally_00_007ba9bc; extern undefined4 PTR_s_to_enemy_00_007ba99c;
