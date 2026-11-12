#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0013c500(); extern undefined4 fn_00303b10(); extern undefined4 fn_0065754c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0044f6d4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0044f5d4; extern undefined4 DAT_00890298; extern undefined4 DAT_0089029c; extern undefined4 DAT_00890360;
extern undefined4 DAT_00890364; extern undefined4 DAT_00890368; extern undefined4 DAT_008906cc; extern undefined4 DAT_008906d0;
extern undefined4 DAT_008906d4; extern undefined4 DAT_00890984; extern undefined4 DAT_00890988; extern undefined4 DAT_00890c10;
extern undefined4 DAT_00890c14; extern undefined4 DAT_0089120c; extern undefined4 DAT_00891210; extern undefined4 DAT_008918b0;
extern undefined4 DAT_008918b4; extern undefined4 DAT_00892410; extern undefined4 DAT_00892414; extern undefined4 DAT_00892470;
extern undefined4 DAT_00892474; extern undefined4 DAT_00893204; extern undefined4 DAT_00893210; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00896398; extern undefined4 DAT_0089639c; extern undefined4 DAT_008988a4; extern undefined4 DAT_008988a8;
extern undefined4 DAT_00898a00; extern undefined4 DAT_00898a04; extern undefined4 DAT_00898a08; extern undefined4 DAT_00898c24;
extern undefined4 DAT_00898c28; extern undefined4 DAT_00898c2c; extern undefined4 DAT_00898c30; extern undefined4 DAT_00898c34;
extern undefined4 DAT_00898c38; extern undefined4 DAT_00898c4c; extern undefined4 DAT_00898c50; extern undefined4 DAT_00898c54;
extern undefined4 DAT_008992a8; extern undefined4 DAT_008992ac; extern undefined4 DAT_008bfbec; extern undefined4 DAT_008bfbf0;
extern undefined4 DAT_008bfbf4; extern undefined4 DAT_008c03a8; extern undefined4 DAT_008c03ac; extern undefined4 DAT_008c0460;
extern undefined4 DAT_008c33b4; extern undefined4 DAT_008c33d0; extern undefined4 DAT_008c33e8; extern undefined4 DAT_008c3c4c;
extern undefined4 DAT_008c7884; extern undefined4 DAT_008c7888; extern undefined4 DAT_008c788c; extern undefined4 DAT_008c7890;
extern undefined4 DAT_008c7894; extern undefined4 DAT_008c7898; extern undefined4 DAT_008c7914; extern undefined4 DAT_008c7918;
extern undefined4 DAT_008c791c; extern undefined4 DAT_008c7920; extern undefined4 DAT_008c7924; extern undefined4 DAT_008c7928;
extern undefined4 DAT_008c7acc; extern undefined4 DAT_008c7ad0; extern undefined4 DAT_008c7ad4; extern undefined4 DAT_008c7ad8;
extern undefined4 DAT_008c7adc; extern undefined4 DAT_008c7ae0; extern undefined4 DAT_008c7ea4; extern undefined4 DAT_008c7ea8;
extern undefined4 DAT_008c7eac; extern undefined4 DAT_008c7eb0; extern undefined4 DAT_008c7eb4; extern undefined4 DAT_008c7eb8;
extern undefined4 DAT_008c826c; extern undefined4 DAT_008c8270; extern undefined4 DAT_008c8274; extern undefined4 DAT_008c8278;
extern undefined4 DAT_008c827c; extern undefined4 DAT_008c8280; extern undefined4 DAT_008c871c; extern undefined4 DAT_008c8720;
extern undefined4 DAT_008c8724; extern undefined4 DAT_008c8728; extern undefined4 DAT_008c872c; extern undefined4 DAT_008c8730;
extern undefined4 DAT_008c8e84; extern undefined4 DAT_008c8e88; extern undefined4 DAT_008c8e8c; extern undefined4 DAT_008c8e90;
extern undefined4 DAT_008c8e94; extern undefined4 DAT_008c8e98; extern undefined4 DAT_008c95a4; extern undefined4 DAT_008c95a8;
extern undefined4 DAT_008c95ac; extern undefined4 DAT_008c95b0; extern undefined4 DAT_008c95b4; extern undefined4 DAT_008c95b8;
extern undefined4 DAT_008c9604; extern undefined4 DAT_008c9608; extern undefined4 DAT_008c960c; extern undefined4 DAT_008c9610;
extern undefined4 DAT_008c9614; extern undefined4 DAT_008c9618; extern undefined4 DAT_008cc940; extern undefined4 DAT_008cc944;
extern undefined4 DAT_008cc948; extern undefined4 DAT_008cc94c; extern undefined4 DAT_008cc950; extern undefined4 DAT_008cc954;
extern undefined4 DAT_008d00ac; extern undefined4 DAT_008d00b0; extern undefined4 DAT_008d00b4; extern undefined4 DAT_008d00b8;
extern undefined4 DAT_008d00bc; extern undefined4 DAT_008d00c0; extern undefined4 DAT_008d031c; extern undefined4 DAT_008d0320;
extern undefined4 DAT_008d0324; extern undefined4 DAT_008d0328; extern undefined4 DAT_008d032c; extern undefined4 DAT_008d0330;
extern undefined4 DAT_008d03dc; extern undefined4 DAT_008d03e0; extern undefined4 DAT_008d03e4; extern undefined4 DAT_008d03e8;
extern undefined4 DAT_008d03ec; extern undefined4 DAT_008d03f0; extern undefined4 DAT_008d03f4; extern undefined4 DAT_008d03f8;
extern undefined4 DAT_008d03fc; extern undefined4 DAT_008d0400; extern undefined4 DAT_008d0404; extern undefined4 DAT_008d0408;
extern undefined4 DAT_008d040c; extern undefined4 DAT_008d0410; extern undefined4 DAT_008d0414; extern undefined4 DAT_008d0418;
extern undefined4 DAT_008d041c; extern undefined4 DAT_008d0420; extern undefined4 DAT_008d1838; extern undefined4 DAT_008d183c;
extern undefined4 DAT_008d1840; extern undefined4 DAT_008d1844; extern undefined4 DAT_008d1848; extern undefined4 DAT_008d184c;
extern undefined4 DAT_008ebd90; extern undefined4 DAT_008ebd9c; extern undefined4 DAT_008f2d30;
