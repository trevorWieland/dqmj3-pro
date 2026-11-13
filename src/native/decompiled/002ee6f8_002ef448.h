#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 fn_001028d4(); extern undefined4 fn_0010887c(); extern undefined4 fn_001088e0();
extern undefined4 fn_00144810(); extern undefined4 fn_0014481c(); extern int fn_0014495c(); extern undefined4 fn_00144ac0(); extern undefined4 fn_00145b00(); extern undefined4 fn_001480d0();
extern undefined4 fn_001481c8(); extern bool fn_00154a6c(); extern undefined4 fn_00178f9c(); extern undefined4 fn_0018a69c(); extern undefined4 fn_00190d50(); extern undefined4 fn_001ccd10();
extern int * fn_0023ed44(); extern int fn_0025f988(); extern undefined4 fn_00263814(); extern undefined4 fn_002feef8(); extern undefined4 fn_00305898(); extern int * fn_0068897c();
extern undefined4 fn_006889d8(); extern undefined4 fn_00688c04(); extern undefined4 fn_00689210(); extern int * fn_00689280(); extern int fn_006892dc(); extern undefined4 fn_0068eb18();
extern undefined4 fn_006a873c(); extern int fn_006a88b8(); extern int fn_006a8a10(); extern int fn_006a8a34(); extern undefined4 fn_006b6754(); extern int fn_006b6bc4();
extern undefined4 fn_006b70fc(); extern undefined4 fn_006b71a8(); extern int fn_006f83f4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad878(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082122c; extern undefined4 DAT_00896e38;
extern undefined4 DAT_00896e3c; extern undefined4 DAT_00896e40; extern undefined4 DAT_00896e44; extern undefined4 DAT_00896e48;
extern undefined4 DAT_00896e4c; extern undefined4 DAT_00896e50; extern undefined4 DAT_00896e58; extern undefined4 DAT_00896e68;
extern undefined4 DAT_008977e8; extern undefined4 DAT_008c5407; extern undefined4 DAT_008c5409; extern undefined4 DAT_008c5448;
extern undefined4 DAT_008c5450; extern undefined4 DAT_008c5458; extern undefined4 PTR_s_face_04_008c5438; extern undefined4 PTR_s_name_00_008c5348;
extern undefined4 PTR_s_pts_00_008c5358; extern undefined4 PTR_s_pts_04_008c5368; extern undefined4 PTR_s_result_list_01_00896e78; extern undefined4 s_GuideHeader_00_008c5410;
extern undefined4 s_frame_008c540a; extern undefined4 s_point_008c53f0; extern undefined4 s_point_008c54ac; extern undefined4 s_result_list__02d_008c53f6;
extern undefined4 s_result_title_008c5428; extern undefined4 s_tb_title_008c541f;
