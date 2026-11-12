#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_00145b00(); extern int * fn_00147974(); extern undefined4 fn_00154ac8(); extern undefined4 fn_00163868(); extern int * fn_001827b0();
extern undefined4 fn_001828f0(); extern undefined4 fn_00190d50(); extern undefined4 fn_001f74d8(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0022f584(); extern undefined4 fn_0022f750();
extern undefined4 fn_002d8370(); extern undefined4 fn_0031f3f4(); extern undefined4 fn_0031f8fc(); extern undefined4 * fn_00327fb4(); extern undefined4 fn_0036c924(); extern undefined4 fn_00397ff4();
extern int fn_00398180(); extern undefined4 fn_00427ee4(); extern undefined4 fn_00428284(); extern short * fn_004282d0(); extern int fn_0057dcdc(); extern int fn_0057dd88();
extern undefined4 fn_005b741c(); extern undefined4 fn_00689210(); extern undefined4 fn_00689930(); extern undefined4 fn_006b2dec(); extern undefined4 fn_006ba250(); extern undefined4 fn_006cdc38();
extern int fn_006e7ac8(); extern undefined4 fn_006e8d10();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0042aac8(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0042ad5c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00425254; extern undefined4 DAT_00425274; extern undefined4 DAT_00425294; extern undefined4 DAT_00425298;
extern undefined4 DAT_004254dc; extern undefined4 DAT_0042a690; extern undefined4 DAT_0042a710; extern undefined4 DAT_0042a76c;
extern undefined4 DAT_0042a778; extern undefined4 DAT_0042a7f4; extern undefined4 DAT_0042a874; extern undefined4 DAT_0042a8f4;
extern undefined4 DAT_0042aa48; extern undefined4 DAT_0042aabc; extern undefined4 DAT_0042ab24; extern undefined4 DAT_0042ab78;
extern undefined4 DAT_0042ab80; extern undefined4 DAT_0042abd0; extern undefined4 DAT_0042abdc; extern undefined4 DAT_0042ac2c;
extern undefined4 DAT_0042ac74; extern undefined4 DAT_0042ac7c; extern undefined4 DAT_0042acc4; extern undefined4 DAT_0042accc;
extern undefined4 DAT_0042ad14; extern undefined4 DAT_0042ad58; extern undefined4 DAT_0042ad5c; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00861438; extern undefined4 DAT_00861444; extern undefined4 DAT_00891c90; extern undefined4 DAT_00891cc4;
extern undefined4 DAT_00891cc8; extern undefined4 DAT_00891ccc; extern undefined4 DAT_00891cd0; extern undefined4 DAT_00892ee4;
extern undefined4 DAT_008951c0; extern undefined4 DAT_008977e0;
