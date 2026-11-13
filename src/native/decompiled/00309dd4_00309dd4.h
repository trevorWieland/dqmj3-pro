#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8(); extern undefined4 fn_00178f9c(); extern undefined4 fn_001853ec(); extern undefined4 fn_001854ac();
extern undefined4 fn_0018a69c(); extern undefined4 fn_001c8abc(); extern undefined4 fn_001c8c60(); extern undefined4 fn_0022d948(); extern undefined4 fn_002ff628(); extern undefined4 fn_00308fb8();
extern undefined4 fn_00309438(); extern undefined4 fn_003096b8(); extern undefined4 fn_00689210(); extern undefined4 fn_0068aeac();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0030a1d8; extern undefined4 DAT_0030a1e0; extern undefined4 DAT_0030a7ac; extern undefined4 DAT_0030a7c0;
extern undefined4 DAT_0030a7d4; extern undefined4 DAT_0030a7e0; extern undefined4 DAT_0030a7ec; extern undefined4 DAT_0030a7fc;
extern undefined4 DAT_0030a808; extern undefined4 DAT_0030a820; extern undefined4 DAT_0030a830; extern undefined4 DAT_0030ab44;
extern undefined4 DAT_0030ab50; extern undefined4 DAT_0030ab5c; extern undefined4 DAT_0030ab64; extern undefined4 DAT_0030ab74;
extern undefined4 DAT_0030ab80; extern undefined4 DAT_0030ab90; extern undefined4 DAT_0030aba4; extern undefined4 DAT_0030abb8;
extern undefined4 DAT_0030abc8; extern undefined4 DAT_0030abe0; extern undefined4 DAT_0030abfc; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_0085cb90; extern undefined4 DAT_0085cb9c; extern undefined4 DAT_0085cda0; extern undefined4 DAT_0085cdf8;
extern undefined4 DAT_0085ce0c; extern undefined4 DAT_0085cfcc; extern undefined4 DAT_0085cfe0; extern undefined4 DAT_0085d008;
extern undefined4 DAT_0085d01c; extern undefined4 DAT_0085d0e0; extern undefined4 DAT_0085d0ec; extern undefined4 DAT_0085d130;
extern undefined4 DAT_0085d140; extern undefined4 DAT_0085d1bc; extern undefined4 DAT_0085d1d0; extern undefined4 DAT_0085d1dc;
extern undefined4 DAT_0085d1e8; extern undefined4 DAT_0085d24c; extern undefined4 DAT_0085d260; extern undefined4 DAT_0085d314;
extern undefined4 DAT_0085d360; extern undefined4 DAT_0085d3d8; extern undefined4 DAT_0085d3e4; extern undefined4 DAT_0085d418;
extern undefined4 DAT_0085d434; extern undefined4 DAT_0085d450; extern undefined4 DAT_0086b2ac; extern undefined4 DAT_00890410;
extern undefined4 DAT_00890414; extern undefined4 DAT_00890418; extern undefined4 DAT_0089041c; extern undefined4 DAT_00890434;
extern undefined4 DAT_008904b4; extern undefined4 DAT_00890504; extern undefined4 DAT_00890508; extern undefined4 DAT_0089050c;
extern undefined4 DAT_00890510; extern undefined4 DAT_00890514; extern undefined4 DAT_00890518; extern undefined4 DAT_0089051c;
extern undefined4 DAT_008905b0; extern undefined4 DAT_008905c8; extern undefined4 DAT_00890620; extern undefined4 DAT_00890630;
extern undefined4 DAT_00890640; extern undefined4 DAT_0089a930; extern undefined4 DAT_008c7663; extern undefined4 DAT_008c7670;
extern undefined4 PTR_s_Null_status_base_s_007babac; extern undefined4 PTR_s_mon_icon_s_007babbc; extern undefined4 PTR_s_win_li_iconframe_ss_00_00890474;
