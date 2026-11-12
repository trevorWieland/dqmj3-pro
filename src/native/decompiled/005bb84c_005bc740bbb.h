#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00119b40(); extern undefined4 fn_00145b00(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0023c2a8(); extern undefined4 fn_002fec40(); extern int fn_004a2190();
extern undefined4 * fn_005bd400(); extern undefined4 * fn_005f62c0(); extern undefined4 fn_0066ddbc(); extern undefined4 fn_0067b6d4(); extern undefined4 fn_006899f4(); extern undefined4 fn_0068ab44();
extern int fn_006e8f88();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00849518; extern undefined4 DAT_00859420; extern undefined4 DAT_00859b38;
extern undefined4 DAT_0085a240; extern undefined4 DAT_0085a790; extern undefined4 DAT_0085a9f4; extern undefined4 s_TaskNexGatheringFindByParticipan_008c71f3;
