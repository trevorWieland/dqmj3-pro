#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined8 fn_0017821c(); extern undefined4 * fn_0025dea8(); extern int * fn_0028aad0(); extern undefined4 fn_0028e264(); extern undefined4 fn_002c4694();
extern undefined4 fn_002fdf94(); extern int fn_003453a8(); extern int fn_00397a0c(); extern undefined4 fn_005b3000(); extern undefined4 * fn_005b3064(); extern undefined4 fn_005b30fc();
extern undefined4 fn_005b3170(); extern undefined4 fn_005b31ec(); extern undefined4 fn_005b32cc(); extern undefined4 fn_005b33d0(); extern undefined4 fn_005b4558(); extern undefined4 fn_005b4710();
extern undefined4 fn_005b47a0(); extern undefined4 fn_005b47f8(); extern undefined4 * fn_005b4d04(); extern undefined4 fn_005b73b4(); extern undefined4 * fn_005b7480(); extern undefined4 fn_005b8054();
extern undefined4 fn_005b8104(); extern undefined4 * fn_005d9bb0(); extern undefined4 fn_0068ab44();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_008463ec[]; extern unsigned char DAT_00846868[]; extern unsigned char DAT_008469a8[]; extern unsigned char DAT_00846c30[];
extern unsigned char DAT_00847960[]; extern unsigned char DAT_00847bbc[]; extern unsigned char DAT_008485f8[]; extern unsigned char DAT_00848a6c[]; extern unsigned char DAT_00848a94[];
extern unsigned char DAT_00892b30[]; extern unsigned char DAT_00895244[]; extern undefined4 DAT_00897804;
