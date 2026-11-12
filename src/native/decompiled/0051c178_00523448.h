#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001237bc(); extern int fn_00124e48(); extern undefined4 fn_0013c674(); extern uint fn_0013db70(); extern undefined4 fn_0015e228(); extern undefined4 fn_00170704();
extern undefined4 fn_001707b4(); extern undefined4 fn_001707d4(); extern int fn_00171598(); extern undefined4 fn_00453c5c(); extern undefined8 fn_00453e0c(); extern undefined4 fn_004ed0e4();
extern uint fn_004ed478(); extern undefined4 fn_004efcf4(); extern undefined4 * fn_004f0ce8(); extern undefined4 fn_0050fb58(); extern undefined4 fn_0050fca4(); extern int fn_0051811c();
extern int fn_0051e5e4(); extern undefined4 fn_0051ee60(); extern undefined4 fn_0051f2f8(); extern undefined4 fn_0051fd04(); extern int fn_00520478(); extern int fn_00520984();
extern undefined4 fn_005236dc(); extern undefined4 fn_006d6e30(); extern undefined4 fn_006db878(); extern undefined4 fn_006db908();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0051c0b0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00520464; extern undefined4 DAT_007e434b; extern undefined4 DAT_0085744c; extern undefined4 DAT_008bf49c;
extern undefined4 DAT_008bf4cc; extern undefined4 DAT_008c0382; extern undefined4 DAT_008c0384; extern undefined4 DAT_008c0388;
extern undefined4 DAT_008c038c; extern undefined4 DAT_008c0390; extern undefined4 DAT_008c0678; extern undefined4 DAT_008c06a0;
extern undefined4 DAT_008ec46c; extern undefined4 DAT_008ec538; extern undefined4 DAT_008ec54c; extern undefined4 DAT_008ed94c;
extern undefined4 DAT_008ed950; extern undefined4 DAT_008ed954; extern undefined4 DAT_008ed958; extern undefined4 DAT_008ee06a;
extern undefined4 DAT_008ee06c; extern undefined4 DAT_008ee070; extern undefined4 DAT_008ee074; extern undefined4 DAT_008eef94;
extern undefined4 DAT_008eefa4;
