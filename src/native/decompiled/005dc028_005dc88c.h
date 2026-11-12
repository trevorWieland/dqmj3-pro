#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00119b40(); extern undefined4 fn_00145b00(); extern undefined4 fn_0015b0dc(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0023c2a8();
extern undefined4 fn_002d6808(); extern undefined4 fn_002fec40(); extern undefined4 fn_002fecec(); extern undefined4 fn_0030233c(); extern undefined4 fn_005f6270(); extern undefined4 * fn_005f62c0();
extern undefined4 fn_005fbae8(); extern undefined4 fn_005fbe00(); extern undefined4 fn_005fc41c(); extern undefined4 fn_005fc5c8(); extern undefined4 fn_005fc69c(); extern undefined4 fn_005fc714();
extern undefined4 fn_005fc914(); extern undefined4 fn_0066ddbc(); extern uint fn_0066e224(); extern undefined4 fn_0066e368(); extern int fn_0066e3bc(); extern uint fn_0066e4e8();
extern uint fn_0066e58c(); extern undefined4 fn_0066e5f0(); extern undefined4 fn_0066e6f0(); extern undefined4 fn_0066eb90(); extern undefined4 fn_00679240(); extern undefined4 fn_0067a1a8();
extern int fn_0067a1d0(); extern undefined4 fn_0067a1f0(); extern undefined4 fn_0067a718(); extern undefined4 fn_006896fc(); extern undefined4 fn_00689824(); extern undefined4 fn_0068993c();
extern undefined4 fn_0068ab44(); extern byte fn_006c41e4(); extern undefined4 fn_006f5dec(); extern undefined4 fn_006f5f30(); extern undefined4 fn_00749130(); extern undefined4 fn_00749218();
extern undefined4 fn_007492a8(); extern undefined4 fn_0076222c(); extern undefined4 fn_007622a4(); extern undefined4 fn_00762308();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0066e074(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005dc24c; extern undefined4 DAT_005dc270; extern undefined4 DAT_005dc49c; extern undefined4 DAT_005dc754;
extern undefined4 DAT_005dc81c; extern undefined4 DAT_005dc9a8; extern undefined4 DAT_005dce28; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_0084d604; extern undefined4 DAT_00859420; extern undefined4 DAT_00859b38; extern undefined4 DAT_0085a240;
extern undefined4 DAT_0085a26c; extern undefined4 DAT_0085a48c; extern undefined4 DAT_0085a4f8; extern undefined4 DAT_00897850;
extern undefined4 DAT_00898214; extern undefined4 DAT_00898840; extern undefined4 DAT_008c6f5a; extern undefined4 DAT_008c7047;
extern undefined4 DAT_008c707e; extern undefined4 s_TaskNexGatheringFindById_008c6f5a; extern undefined4 s_TaskNexRankingDownloadList_008c7047; extern undefined4 s_TaskNexRankingDownloadStats_008c707e;
