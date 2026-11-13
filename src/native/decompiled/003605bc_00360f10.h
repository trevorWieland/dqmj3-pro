#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001010c8(); extern undefined8 fn_00101c78(); extern int fn_0010217c(); extern undefined4 fn_00145b00(); extern int * fn_001c6ba4(); extern undefined4 fn_00278a80();
extern undefined4 fn_002796a4(); extern undefined4 fn_00279878(); extern uint fn_002fe310(); extern int fn_002febd8(); extern undefined4 fn_002fedf4(); extern undefined4 * fn_002ff0c8();
extern undefined4 fn_002ff628(); extern undefined4 fn_002ffc58(); extern int * fn_003007d0(); extern undefined8 fn_00301a9c(); extern undefined4 fn_00303afc(); extern undefined4 fn_0033cf3c();
extern undefined4 fn_0033d350(); extern int fn_0035dac8(); extern undefined4 fn_00361e1c(); extern undefined4 fn_00361e2c(); extern undefined4 * fn_00379bb4(); extern undefined4 fn_003ae894();
extern undefined4 fn_003ae8a4(); extern undefined4 fn_003af024(); extern undefined4 fn_003d76c0(); extern undefined4 fn_00424a1c(); extern undefined4 fn_00566c30(); extern undefined4 fn_00566ef8();
extern uint fn_00615b24(); extern undefined4 fn_006f6fc4(); extern undefined4 fn_006f7a0c(); extern undefined4 fn_006f7a70(); extern int fn_006f7a9c(); extern int * fn_00789b34();
extern undefined4 fn_007a2b20(); extern undefined4 fn_007a8258();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00360930; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008918c8; extern undefined4 DAT_008918cc;
extern undefined4 DAT_008977e0; extern undefined4 DAT_008c75fa; extern undefined4 DAT_008c7613; extern undefined4 DAT_008f9cf8;
