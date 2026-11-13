#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0015f180(); extern undefined4 fn_00303b10(); extern undefined4 * fn_0045503c(); extern undefined4 fn_00474678();
extern undefined4 fn_004a18ac(); extern undefined4 fn_004a1a00(); extern undefined4 * fn_0074d670();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00494ea0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004ed460; extern undefined4 DAT_00853418; extern undefined4 DAT_00853da8; extern undefined4 DAT_008544b8;
extern undefined4 DAT_008907e8; extern undefined4 DAT_008907ec; extern undefined4 DAT_008907f0; extern undefined4 DAT_00890c58;
extern undefined4 DAT_00890c5c; extern undefined4 DAT_008913a0; extern undefined4 DAT_008913a4; extern undefined4 DAT_00891ca4;
extern undefined4 DAT_00891cb0; extern undefined4 DAT_00891cb4; extern undefined4 DAT_00891e28; extern undefined4 DAT_00891ed4;
extern undefined4 DAT_00891ed8; extern undefined4 DAT_008923c4; extern undefined4 DAT_008923c8; extern undefined4 DAT_00892524;
extern undefined4 DAT_00892528; extern undefined4 DAT_00892d8c; extern undefined4 DAT_00892d90; extern undefined4 DAT_00892d94;
extern undefined4 DAT_00892ed8; extern undefined4 DAT_00892edc; extern undefined4 DAT_00892ee0; extern undefined4 DAT_00893058;
extern undefined4 DAT_0089305c; extern undefined4 DAT_00893060; extern undefined4 DAT_00893130; extern undefined4 DAT_00893134;
extern undefined4 DAT_008931bc; extern undefined4 DAT_008931c0; extern undefined4 DAT_008931dc; extern undefined4 DAT_008931e0;
extern undefined4 DAT_00893210; extern undefined4 DAT_00893278; extern undefined4 DAT_008933e0; extern undefined4 DAT_008933e4;
extern undefined4 DAT_008933e8; extern undefined4 DAT_00893b64; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678;
extern undefined4 DAT_008992a0; extern undefined4 DAT_008992a4; extern undefined4 DAT_008b6400; extern undefined4 DAT_008b6508;
extern undefined4 DAT_008c06c4; extern undefined4 DAT_008c3404; extern undefined4 DAT_008c3d30; extern undefined4 DAT_008c7cdc;
extern undefined4 DAT_008c7ce0; extern undefined4 DAT_008c7ce4; extern undefined4 DAT_008c7ce8; extern undefined4 DAT_008c7cec;
extern undefined4 DAT_008c7cf0; extern undefined4 DAT_008c82cc; extern undefined4 DAT_008c82d0; extern undefined4 DAT_008c82d4;
extern undefined4 DAT_008c82d8; extern undefined4 DAT_008c82dc; extern undefined4 DAT_008c82e0; extern undefined4 DAT_008c8c68;
extern undefined4 DAT_008c8c6c; extern undefined4 DAT_008c8c70; extern undefined4 DAT_008c8c74; extern undefined4 DAT_008c8c78;
extern undefined4 DAT_008c8c7c; extern undefined4 DAT_008c9184; extern undefined4 DAT_008c9188; extern undefined4 DAT_008c918c;
extern undefined4 DAT_008c9190; extern undefined4 DAT_008c9194; extern undefined4 DAT_008c9198; extern undefined4 DAT_008c9308;
extern undefined4 DAT_008c930c; extern undefined4 DAT_008c9310; extern undefined4 DAT_008c9314; extern undefined4 DAT_008c9318;
extern undefined4 DAT_008c931c; extern undefined4 DAT_008c955c; extern undefined4 DAT_008c9560; extern undefined4 DAT_008c9564;
extern undefined4 DAT_008c9568; extern undefined4 DAT_008c956c; extern undefined4 DAT_008c9570; extern undefined4 DAT_008c96d0;
extern undefined4 DAT_008c96d4; extern undefined4 DAT_008c96d8; extern undefined4 DAT_008c96dc; extern undefined4 DAT_008c96e0;
extern undefined4 DAT_008c96e4; extern undefined4 DAT_008c9dc8; extern undefined4 DAT_008c9dcc; extern undefined4 DAT_008c9dd0;
extern undefined4 DAT_008c9dd4; extern undefined4 DAT_008c9dd8; extern undefined4 DAT_008c9ddc; extern undefined4 DAT_008c9f18;
extern undefined4 DAT_008c9f1c; extern undefined4 DAT_008c9f20; extern undefined4 DAT_008c9f24; extern undefined4 DAT_008c9f28;
extern undefined4 DAT_008c9f2c; extern undefined4 DAT_008ca1b0; extern undefined4 DAT_008ca1b4; extern undefined4 DAT_008ca1b8;
extern undefined4 DAT_008ca1bc; extern undefined4 DAT_008ca1c0; extern undefined4 DAT_008ca1c4; extern undefined4 DAT_008ca390;
extern undefined4 DAT_008ca394; extern undefined4 DAT_008ca398; extern undefined4 DAT_008ca39c; extern undefined4 DAT_008ca3a0;
extern undefined4 DAT_008ca3a4; extern undefined4 DAT_008ca468; extern undefined4 DAT_008ca46c; extern undefined4 DAT_008ca470;
extern undefined4 DAT_008ca474; extern undefined4 DAT_008ca478; extern undefined4 DAT_008ca47c; extern undefined4 DAT_008ca4c8;
extern undefined4 DAT_008ca4cc; extern undefined4 DAT_008ca4d0; extern undefined4 DAT_008ca4d4; extern undefined4 DAT_008ca4d8;
extern undefined4 DAT_008ca4dc; extern undefined4 DAT_008ca648; extern undefined4 DAT_008ca64c; extern undefined4 DAT_008ca650;
extern undefined4 DAT_008ca654; extern undefined4 DAT_008ca658; extern undefined4 DAT_008ca65c; extern undefined4 DAT_008d1820;
extern undefined4 DAT_008d1824; extern undefined4 DAT_008d1828; extern undefined4 DAT_008d182c; extern undefined4 DAT_008d1830;
extern undefined4 DAT_008d1834; extern undefined4 DAT_008e68ac;
