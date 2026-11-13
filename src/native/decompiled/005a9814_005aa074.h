#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00151954(); extern undefined4 fn_0018cb08(); extern undefined4 fn_00190d50(); extern undefined4 fn_0025e7cc(); extern undefined4 fn_002feef8();
extern undefined4 fn_002ff628(); extern undefined4 fn_0038d4c4(); extern undefined4 fn_0038dad0(); extern undefined4 fn_003cfa24(); extern undefined4 fn_003cfaac(); extern undefined4 fn_003d0478();
extern undefined4 fn_003d0ae8(); extern undefined4 fn_003d0b80(); extern undefined4 fn_0054ca94(); extern bool fn_005a9afc(); extern undefined4 * fn_005aa084(); extern undefined4 fn_006e2830();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005a9acc; extern undefined4 DAT_00847230; extern undefined4 DAT_008c7659; extern undefined4 DAT_008c765f;
extern undefined4 DAT_008c7665; extern undefined4 DAT_008c7667; extern undefined4 DAT_008c766e;
