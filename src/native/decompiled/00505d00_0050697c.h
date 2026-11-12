#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined8 fn_00301a9c(); extern undefined4 fn_004ed050(); extern undefined4 fn_004ed0e4(); extern undefined4 fn_004ee29c();
extern longlong fn_004ee340(); extern undefined4 fn_004efcf4(); extern undefined4 fn_004f3eb4(); extern undefined4 fn_004f40c0(); extern int fn_004f8aa0(); extern undefined4 fn_004fa100();
extern undefined4 fn_004fa374(); extern undefined4 fn_004fe974(); extern undefined4 fn_005026b8(); extern undefined4 fn_0050329c(); extern undefined4 fn_00503ca8(); extern undefined4 fn_005044fc();
extern undefined4 fn_00505734(); extern int fn_0050b144(); extern undefined4 fn_0050bd1c(); extern undefined4 fn_00511ab8(); extern undefined4 fn_00519360(); extern undefined8 fn_0051b008();
extern undefined4 fn_0051dc1c(); extern undefined1 * fn_0051dcdc(); extern undefined4 fn_006d897c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004ee310(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004ee324(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_000000fd; extern undefined4 DAT_008bf4cc; extern undefined4 DAT_008bf4d4; extern undefined4 DAT_008bf4dd;
extern undefined4 DAT_008c0630; extern undefined4 DAT_008c0638; extern undefined4 DAT_008c0674; extern undefined4 DAT_008ed960;
extern undefined4 DAT_008ed964; extern undefined4 DAT_008ed969; extern undefined4 DAT_008ed96a; extern undefined4 DAT_008ed96c;
extern undefined4 DAT_008ed970; extern undefined4 DAT_008ed974; extern undefined4 DAT_008ed978; extern undefined4 DAT_008ed9d4;
extern undefined4 DAT_008eda08; extern undefined4 DAT_008eda2c; extern undefined4 DAT_008edb18; extern undefined4 DAT_008edb1c;
extern undefined4 DAT_008edb24; extern undefined4 DAT_008edb38; extern undefined4 DAT_008edb94; extern undefined4 DAT_008edbf0;
extern undefined4 DAT_008edc4c; extern undefined4 DAT_008edca8; extern undefined4 DAT_008edd04; extern undefined4 DAT_008edd1b;
extern undefined4 DAT_008edd32; extern undefined4 DAT_008edd49; extern undefined4 DAT_e0a14827;
