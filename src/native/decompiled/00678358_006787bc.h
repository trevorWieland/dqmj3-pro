#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00119b40(); extern undefined4 fn_00119b60(); extern undefined4 fn_00129688(); extern int fn_0013d438(); extern undefined4 fn_00145b00(); extern int fn_00170fa4();
extern undefined4 fn_002fec40(); extern undefined4 fn_002feef8(); extern undefined4 fn_0066e458(); extern undefined4 fn_0066eb80(); extern undefined4 fn_0066ec54(); extern undefined4 fn_00673ce8();
extern undefined4 fn_006779a0(); extern undefined4 fn_006779bc(); extern void fn_00678358(); extern undefined4 fn_006799e4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00859ab8; extern undefined4 DAT_00859b90; extern undefined4 DAT_00859be4;
extern undefined4 DAT_0085a090; extern undefined4 DAT_0085a168; extern undefined4 DAT_0085a34c; extern undefined4 DAT_00898840;
extern undefined4 DAT_008c6e4c; extern undefined4 s_NexCommandDataStoreGet_008c6eb4; extern undefined4 s_NexCommandDataStorePost_008c6ef9; extern undefined4 s_NexCommandDataStoreUpdate_008c6fa7;
