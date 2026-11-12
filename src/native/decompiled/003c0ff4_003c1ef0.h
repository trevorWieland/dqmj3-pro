#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_00119b40(); extern undefined4 fn_00145b00(); extern int * fn_00147974(); extern int * fn_001588d4(); extern undefined4 fn_001f74d8();
extern undefined4 fn_001f74ec(); extern undefined4 fn_0022f750(); extern undefined4 fn_00231074(); extern undefined1 * fn_002999ac(); extern undefined4 * fn_00299cf8(); extern undefined4 fn_002fec40();
extern undefined4 fn_002feef8(); extern undefined4 fn_0031f3f4(); extern undefined4 fn_0031f8fc(); extern undefined4 fn_00397ff4(); extern int fn_00398180(); extern undefined4 fn_003c12f4();
extern undefined4 * fn_005f62c0(); extern undefined4 fn_0066ddbc(); extern undefined4 * fn_00673204(); extern undefined4 * fn_00675c38();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003c12b8; extern undefined4 DAT_003c12cc; extern undefined4 DAT_003c12d0; extern undefined4 DAT_003c12d4;
extern undefined4 DAT_007c7638; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00859420; extern undefined4 DAT_00859b38;
extern undefined4 DAT_00859d84; extern undefined4 DAT_00859ed8; extern undefined4 DAT_00866ea8; extern undefined4 DAT_008951dc;
extern undefined4 DAT_00895964; extern undefined4 s_TaskGetHostList_008c6def; extern undefined4 s_TaskNetworkConnect_008c6e38;
