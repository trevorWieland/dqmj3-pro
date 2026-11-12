#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_001028d4(); extern int fn_0011c134(); extern undefined4 fn_00121838(); extern undefined4 fn_00145b00(); extern uint fn_00147e6c();
extern undefined4 fn_00163988(); extern undefined4 fn_001828f0(); extern undefined4 fn_00190d50(); extern int fn_0025f9d8(); extern undefined4 fn_0025fa58(); extern undefined4 fn_00289ac0();
extern undefined4 fn_00289bac(); extern undefined4 fn_00289c54(); extern undefined4 * fn_00289c84(); extern undefined4 * fn_00289ca8(); extern int * fn_0028c0f0(); extern void fn_0028c190();
extern byte fn_002e322c(); extern undefined4 fn_002feef8(); extern int * fn_0068897c(); extern undefined4 fn_006a7b08(); extern bool fn_006b7b54(); extern undefined4 fn_006b8370();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0028bdd8; extern undefined4 DAT_006b8818; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081e17c;
extern undefined4 DAT_00892824; extern undefined4 DAT_00892828; extern undefined4 DAT_00897800; extern undefined4 DAT_00897804;
extern undefined4 DAT_00897808; extern undefined4 DAT_0089780c;
