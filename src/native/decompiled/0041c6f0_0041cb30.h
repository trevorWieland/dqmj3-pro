#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00119b40(); extern undefined4 fn_00145b00(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0022f584(); extern undefined4 fn_0028bb6c();
extern int fn_0028bb88(); extern bool fn_00291ae4(); extern undefined4 fn_00293638(); extern undefined4 fn_002937a8(); extern undefined4 fn_00294160(); extern undefined4 fn_002fec40();
extern undefined4 fn_002feef8(); extern undefined8 fn_00301a9c(); extern undefined4 fn_003979d0(); extern undefined4 fn_003e6b34(); extern undefined4 fn_003e6b44(); extern undefined4 fn_0042f204();
extern undefined4 fn_0044aa54(); extern undefined4 fn_005f6270(); extern undefined4 * fn_005f62c0(); extern undefined4 fn_0066ddbc(); extern undefined4 fn_0067b0a4(); extern undefined4 fn_0067b11c();
extern undefined4 fn_0067b95c(); extern undefined4 * fn_0067b9c4(); extern undefined4 fn_0067babc(); extern undefined4 fn_0068974c(); extern undefined4 fn_006899f4(); extern undefined4 fn_00689b18();
extern int fn_006b876c(); extern undefined1 fn_006f6a6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0041d690; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00859420; extern undefined4 DAT_00859b38;
extern undefined4 DAT_0085a670; extern undefined4 DAT_0085a7f0; extern undefined4 DAT_008968a8; extern undefined4 DAT_00897804;
extern undefined4 s_TaskNexRankingDownloadMyCommonDa_008c7238; extern undefined4 s_TaskNexRankingUploadCommonData_008c714f;
