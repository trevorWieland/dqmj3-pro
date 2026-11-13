#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_00103d64(); extern undefined4 fn_0017fe34(); extern undefined4 fn_00303b10();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00104074_1(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890240; extern undefined4 DAT_00890244; extern undefined4 DAT_00890954; extern undefined4 DAT_00890958;
extern undefined4 DAT_008909a4; extern undefined4 DAT_008909a8; extern undefined4 DAT_008909ac; extern undefined4 DAT_00890f10;
extern undefined4 DAT_00890f14; extern undefined4 DAT_00891a20; extern undefined4 DAT_00891a24; extern undefined4 DAT_008922a8;
extern undefined4 DAT_008922ac; extern undefined4 DAT_00892388; extern undefined4 DAT_0089238c; extern undefined4 DAT_00892478;
extern undefined4 DAT_0089259c; extern undefined4 DAT_008925a0; extern undefined4 DAT_00893b08; extern undefined4 DAT_00893b0c;
extern undefined4 DAT_008942fc; extern undefined4 DAT_00894308; extern undefined4 DAT_0089430c; extern undefined4 DAT_0089466c;
extern undefined4 DAT_008951fc; extern undefined4 DAT_00895200; extern undefined4 DAT_00895204; extern undefined4 DAT_00895eec;
extern undefined4 DAT_00895ef0; extern undefined4 DAT_00895ef4; extern undefined4 DAT_00895ef8; extern undefined4 DAT_00896150;
extern undefined4 DAT_0089615c; extern undefined4 DAT_00896160; extern undefined4 DAT_00896164; extern undefined4 DAT_00896168;
extern undefined4 DAT_0089616c; extern undefined4 DAT_00896170; extern undefined4 DAT_00896388; extern undefined4 DAT_0089638c;
extern undefined4 DAT_00896390; extern undefined4 DAT_00896394; extern undefined4 DAT_008963d0; extern undefined4 DAT_008963d4;
extern undefined4 DAT_00897884; extern undefined4 DAT_00897888; extern undefined4 DAT_008988b4; extern undefined4 DAT_008988b8;
extern undefined4 DAT_00899298; extern undefined4 DAT_0089929c; extern undefined4 DAT_008c786c; extern undefined4 DAT_008c7870;
extern undefined4 DAT_008c7874; extern undefined4 DAT_008c7878; extern undefined4 DAT_008c787c; extern undefined4 DAT_008c7880;
extern undefined4 DAT_008c7dcc; extern undefined4 DAT_008c7dd0; extern undefined4 DAT_008c7dd4; extern undefined4 DAT_008c7dd8;
extern undefined4 DAT_008c7ddc; extern undefined4 DAT_008c7de0; extern undefined4 DAT_008c7f04; extern undefined4 DAT_008c7f08;
extern undefined4 DAT_008c7f0c; extern undefined4 DAT_008c7f10; extern undefined4 DAT_008c7f14; extern undefined4 DAT_008c7f18;
extern undefined4 DAT_008c83ec; extern undefined4 DAT_008c83f0; extern undefined4 DAT_008c83f4; extern undefined4 DAT_008c83f8;
extern undefined4 DAT_008c83fc; extern undefined4 DAT_008c8400; extern undefined4 DAT_008c8fec; extern undefined4 DAT_008c8ff0;
extern undefined4 DAT_008c8ff4; extern undefined4 DAT_008c8ff8; extern undefined4 DAT_008c8ffc; extern undefined4 DAT_008c9000;
extern undefined4 DAT_008c9448; extern undefined4 DAT_008c944c; extern undefined4 DAT_008c9450; extern undefined4 DAT_008c9454;
extern undefined4 DAT_008c9458; extern undefined4 DAT_008c945c; extern undefined4 DAT_008c94fc; extern undefined4 DAT_008c9500;
extern undefined4 DAT_008c9504; extern undefined4 DAT_008c9508; extern undefined4 DAT_008c950c; extern undefined4 DAT_008c9510;
extern undefined4 DAT_008c98a0; extern undefined4 DAT_008c98a4; extern undefined4 DAT_008c98a8; extern undefined4 DAT_008c98ac;
extern undefined4 DAT_008c98b0; extern undefined4 DAT_008c98b4; extern undefined4 DAT_008cab88; extern undefined4 DAT_008cab8c;
extern undefined4 DAT_008cab90; extern undefined4 DAT_008cab94; extern undefined4 DAT_008cab98; extern undefined4 DAT_008cab9c;
extern undefined4 DAT_008cb150; extern undefined4 DAT_008cb154; extern undefined4 DAT_008cb158; extern undefined4 DAT_008cb15c;
extern undefined4 DAT_008cb160; extern undefined4 DAT_008cb164; extern undefined4 DAT_008cbbd0; extern undefined4 DAT_008cbbd4;
extern undefined4 DAT_008cbbd8; extern undefined4 DAT_008cbbdc; extern undefined4 DAT_008cbbe0; extern undefined4 DAT_008cbbe4;
extern undefined4 DAT_008cc6ac; extern undefined4 DAT_008cc6b0; extern undefined4 DAT_008cc6b4; extern undefined4 DAT_008cc6b8;
extern undefined4 DAT_008cc6bc; extern undefined4 DAT_008cc6c0; extern undefined4 DAT_008cc7cc; extern undefined4 DAT_008cc7d0;
extern undefined4 DAT_008cc7d4; extern undefined4 DAT_008cc7d8; extern undefined4 DAT_008cc7dc; extern undefined4 DAT_008cc7e0;
extern undefined4 DAT_008cc7e4; extern undefined4 DAT_008cc7e8; extern undefined4 DAT_008cc7ec; extern undefined4 DAT_008cc7f0;
extern undefined4 DAT_008cc7f4; extern undefined4 DAT_008cc7f8; extern undefined4 DAT_008cc910; extern undefined4 DAT_008cc914;
extern undefined4 DAT_008cc918; extern undefined4 DAT_008cc91c; extern undefined4 DAT_008cc920; extern undefined4 DAT_008cc924;
extern undefined4 DAT_008cc928; extern undefined4 DAT_008cc92c; extern undefined4 DAT_008cc930; extern undefined4 DAT_008cc934;
extern undefined4 DAT_008cc938; extern undefined4 DAT_008cc93c; extern undefined4 DAT_008cc9d0; extern undefined4 DAT_008cc9d4;
extern undefined4 DAT_008cc9d8; extern undefined4 DAT_008cc9dc; extern undefined4 DAT_008cc9e0; extern undefined4 DAT_008cc9e4;
extern undefined4 DAT_008cdd84; extern undefined4 DAT_008cdd88; extern undefined4 DAT_008cdd8c; extern undefined4 DAT_008cdd90;
extern undefined4 DAT_008cdd94; extern undefined4 DAT_008cdd98; extern undefined4 DAT_008d00dc; extern undefined4 DAT_008d00e0;
extern undefined4 DAT_008d00e4; extern undefined4 DAT_008d00e8; extern undefined4 DAT_008d00ec; extern undefined4 DAT_008d00f0;
extern undefined4 DAT_008d1808; extern undefined4 DAT_008d180c; extern undefined4 DAT_008d1810; extern undefined4 DAT_008d1814;
extern undefined4 DAT_008d1818; extern undefined4 DAT_008d181c;
