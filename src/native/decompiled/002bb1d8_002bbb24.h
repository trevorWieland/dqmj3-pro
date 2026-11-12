#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001603f8(); extern undefined4 fn_001638a0(); extern undefined4 fn_00163940(); extern undefined1 fn_00163a00(); extern undefined4 fn_00174828(); extern undefined4 fn_00182988();
extern undefined4 fn_0028e66c(); extern undefined4 fn_002b5424(); extern undefined4 fn_002b5488(); extern undefined1 fn_002bb1d8(); extern undefined4 fn_002d313c(); extern char fn_002d4054();
extern undefined4 fn_002d46cc(); extern bool fn_0037645c(); extern undefined4 fn_00376528(); extern undefined4 fn_0037720c(); extern undefined4 fn_003773f4(); extern undefined4 fn_003a563c();
extern undefined4 fn_003a58d4(); extern undefined4 fn_003a5a44(); extern undefined4 fn_003a5bbc(); extern byte fn_003a6898(); extern undefined4 fn_003a745c(); extern undefined4 fn_003a7cf0();
extern undefined4 fn_003a7e9c(); extern undefined4 fn_003a8b98(); extern undefined4 fn_003a8cf0(); extern undefined4 fn_003a8efc(); extern undefined4 fn_003d0584(); extern undefined4 fn_003ef3e8();
extern undefined4 fn_003ef8e0(); extern undefined4 fn_004223f4(); extern undefined4 fn_004224ac(); extern undefined4 fn_00422814(); extern undefined1 fn_00660ea8(); extern int fn_00660f58();
extern undefined1 fn_00661714(); extern undefined4 fn_0068869c(); extern undefined4 fn_006a7b78(); extern undefined4 fn_006ba11c(); extern undefined4 fn_006ba178(); extern undefined1 fn_006c5d68();
extern bool fn_006f3e74();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4; extern undefined4 DAT_00897808; extern undefined4 DAT_0089780c;
