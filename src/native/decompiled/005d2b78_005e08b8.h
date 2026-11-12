#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern undefined4 fn_001028d4(); extern undefined4 fn_00119b40(); extern undefined4 fn_00121838(); extern undefined4 * fn_00124930();
extern undefined4 fn_001439d0(); extern undefined4 fn_00145b00(); extern int * fn_00147974(); extern int fn_00156b34(); extern int * fn_001588d4(); extern undefined4 fn_00162ad0();
extern int fn_00172c98(); extern undefined4 fn_00178f9c(); extern undefined4 fn_0017d96c(); extern undefined4 fn_0018a618(); extern undefined4 fn_001f74d8(); extern undefined4 fn_0020bbc4();
extern undefined4 fn_0020bc58(); extern undefined4 fn_0022f750(); extern undefined4 fn_0025f354(); extern int fn_0025f9d8(); extern undefined4 fn_0025fa58(); extern int * fn_0028aad0();
extern undefined4 fn_002c29a0(); extern undefined4 fn_002c330c(); extern undefined4 fn_002c37e0(); extern undefined4 fn_002f70cc(); extern undefined4 fn_002fec40(); extern undefined4 fn_002ff628();
extern undefined4 fn_0031b78c(); extern undefined4 * fn_0037d928(); extern undefined4 * fn_0038e974(); extern undefined4 fn_00397618(); extern int fn_00397774(); extern undefined4 fn_0043d370();
extern undefined4 fn_005d2d78(); extern undefined4 fn_005d34e0(); extern undefined4 * fn_005f62c0(); extern undefined4 fn_0066ddbc(); extern undefined4 fn_00676eec(); extern undefined4 fn_00679fec();
extern undefined4 fn_00688c04(); extern undefined4 fn_00689efc(); extern uint fn_006bfffc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005d2d5c; extern undefined4 DAT_005d2d68; extern undefined4 DAT_005d9aa0; extern undefined4 DAT_005d9ab0;
extern undefined4 DAT_005d9ac4; extern undefined4 DAT_005db910; extern undefined4 DAT_005db924; extern undefined4 DAT_005db92c;
extern undefined4 DAT_005db944; extern undefined4 DAT_005de47c; extern undefined4 DAT_007c6fe8; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00859420; extern undefined4 DAT_00859b38; extern undefined4 DAT_00859f80; extern undefined4 DAT_0085a460;
extern undefined4 DAT_0085a9f4; extern undefined4 DAT_0085fd6c; extern undefined4 DAT_0085fd9c; extern undefined4 DAT_00864c4c;
extern undefined4 DAT_00864c88; extern undefined4 DAT_008944cc; extern undefined4 DAT_00894604; extern undefined4 DAT_00894608;
extern undefined4 DAT_00894610; extern undefined4 DAT_00894618; extern undefined4 DAT_008951dc; extern undefined4 DAT_00897800;
extern undefined4 DAT_00897804; extern undefined4 DAT_0089a4f4; extern undefined4 DAT_0089a930; extern undefined4 DAT_008c6e5b;
extern undefined4 DAT_008c702c; extern undefined4 DAT_008c7656; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
extern undefined4 PTR_FUN_0084d968; extern undefined4 s_TaskNexGatheringEnd_008c6e5b; extern undefined4 s_TaskNexGatheringUnregister_008c702c;
