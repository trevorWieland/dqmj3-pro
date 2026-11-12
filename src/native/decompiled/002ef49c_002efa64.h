#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0010887c(); extern undefined4 fn_001088e0(); extern undefined4 fn_00144810(); extern undefined4 fn_0014481c();
extern int fn_0014495c(); extern undefined4 fn_00144ac0(); extern undefined4 fn_00145b00(); extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8(); extern bool fn_00154a6c();
extern undefined4 fn_00154ab4(); extern undefined2 fn_00176970(); extern undefined4 fn_00178f9c(); extern undefined4 fn_0018d034(); extern undefined4 fn_00190d50(); extern undefined4 fn_0023ddec();
extern undefined4 fn_0023e6c8(); extern undefined4 * fn_0023e8ec(); extern int fn_002a4648(); extern undefined4 * fn_002f1bd8(); extern int * fn_0068897c(); extern undefined4 fn_00689210();
extern undefined4 fn_0068cab0(); extern undefined4 fn_006a34f4(); extern int fn_006c7ff8(); extern int fn_006f83f4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00851eac; extern undefined4 DAT_00851ed8; extern undefined4 DAT_00896f18;
extern undefined4 DAT_00896f1c; extern undefined4 DAT_00896f20; extern undefined4 DAT_00896f24; extern undefined4 DAT_00896f28;
extern undefined4 DAT_008977e8; extern undefined4 DAT_008c54b2; extern undefined4 DAT_008c54b4; extern undefined4 s_Null_blue_008c5549;
extern undefined4 s_Null_green_008c5568; extern undefined4 s_Null_red_008c5553; extern undefined4 s_Null_rrbg_blue_008c5573; extern undefined4 s_Null_rrbg_green_008c55a1;
extern undefined4 s_Null_rrbg_red_008c5582; extern undefined4 s_Null_rrbg_yellow_008c5590; extern undefined4 s_Null_yellow_008c555c; extern undefined4 s_tb_name_008c55b1;
extern undefined4 s_winner_player_p1_008c54b5; extern undefined4 s_winner_player_p1_00_008c54f9; extern undefined4 s_winner_player_p2_008c54c6; extern undefined4 s_winner_player_p2_00_008c550d;
extern undefined4 s_winner_player_p3_008c54d7; extern undefined4 s_winner_player_p3_00_008c5521; extern undefined4 s_winner_player_p4_008c54e8; extern undefined4 s_winner_player_p4_00_008c5535;
