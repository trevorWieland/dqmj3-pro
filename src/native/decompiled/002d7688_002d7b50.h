#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_0022f750(); extern undefined4 fn_002d7bf0(); extern byte fn_006c4094();
extern char fn_006c4168(); extern undefined * fn_006c4258(); extern char * fn_006c4288(); extern char * fn_006c4304(); extern char * fn_006c4374(); extern char * fn_006c4410();
extern char * fn_006c4568(); extern undefined * fn_006c45f8(); extern char * fn_006c4628(); extern char * fn_006c46a4(); extern char fn_006c4720();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008992d4; extern undefined4 PTR_DAT_008992e0;
