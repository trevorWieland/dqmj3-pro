#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined * fn_00148918(); extern undefined4 fn_00148924(); extern undefined4 fn_0014971c(); extern undefined4 fn_00149a50(); extern undefined4 fn_0014a110();
extern undefined4 fn_0014ce94(); extern undefined4 fn_0014d1dc(); extern undefined4 fn_00155884(); extern undefined4 fn_00155914(); extern undefined4 fn_00157eb4(); extern undefined4 fn_00157f58();
extern undefined4 fn_00157fb0(); extern undefined4 fn_001580cc(); extern undefined4 fn_00158128(); extern undefined4 fn_001581d0(); extern undefined4 fn_0015add4(); extern undefined4 fn_0015af10();
extern undefined * fn_0015c0a4(); extern undefined * fn_0015c0fc(); extern undefined4 fn_0016a5e4(); extern undefined4 fn_00173cb8(); extern int fn_002febd8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001370a0; extern undefined4 DAT_001370b8; extern undefined4 DAT_001370d0; extern undefined4 DAT_001370e8;
extern undefined4 DAT_001371bc; extern undefined4 DAT_001371d4; extern undefined4 DAT_001371ec; extern undefined4 DAT_001376d0;
extern undefined4 DAT_001376e8; extern undefined4 DAT_00137708; extern undefined4 DAT_001378e8; extern undefined4 DAT_00137900;
extern undefined4 DAT_00137918; extern undefined4 DAT_001379f0; extern undefined4 DAT_00137a08; extern undefined4 DAT_00137a20;
extern undefined4 DAT_00137c20; extern undefined4 DAT_00137c38; extern undefined4 DAT_00137cd8; extern undefined4 DAT_00137cf0;
extern undefined4 DAT_00137e5c; extern undefined4 DAT_00137e74; extern undefined4 DAT_00137e90; extern undefined4 DAT_00138080;
extern undefined4 DAT_00138098; extern undefined4 DAT_001380b4; extern undefined4 DAT_001383d0; extern undefined4 DAT_001383e8;
extern undefined4 DAT_00138404; extern undefined4 DAT_0014ce5c; extern undefined4 DAT_0014ce74; extern undefined4 DAT_007bc473;
extern undefined4 DAT_007bc5c5; extern undefined4 DAT_007bc773; extern undefined4 DAT_007bc78b; extern undefined4 DAT_007bc7a2;
extern undefined4 DAT_007bcc98; extern undefined4 DAT_007bcce9; extern undefined4 DAT_007bcddf; extern undefined4 DAT_007bce4b;
extern undefined4 DAT_007bce7a; extern undefined4 DAT_007bcf2b; extern undefined4 DAT_00898898;
