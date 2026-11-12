#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00303b10(); extern undefined4 fn_004c9eac(); extern uint * fn_0078afd4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0051e2b0; extern undefined4 DAT_00890fc4; extern undefined4 DAT_00890fc8; extern undefined4 DAT_00890fcc;
extern undefined4 DAT_00890fd0; extern undefined4 DAT_0089184c; extern undefined4 DAT_00891850; extern undefined4 DAT_0089239c;
extern undefined4 DAT_008923a0; extern undefined4 DAT_00892404; extern undefined4 DAT_00892408; extern undefined4 DAT_0089290c;
extern undefined4 DAT_00892910; extern undefined4 DAT_00892914; extern undefined4 DAT_00892918; extern undefined4 DAT_00892d84;
extern undefined4 DAT_00892d88; extern undefined4 DAT_00893204; extern undefined4 DAT_00893210; extern undefined4 DAT_00893278;
extern undefined4 DAT_008932bc; extern undefined4 DAT_008933ac; extern undefined4 DAT_008933b0; extern undefined4 DAT_008933b4;
extern undefined4 DAT_0089345c; extern undefined4 DAT_0089350c; extern undefined4 DAT_00893510; extern undefined4 DAT_00893514;
extern undefined4 DAT_0089362c; extern undefined4 DAT_00893630; extern undefined4 DAT_00893634; extern undefined4 DAT_008936cc;
extern undefined4 DAT_008936d0; extern undefined4 DAT_008936d1; extern undefined4 DAT_008936d2; extern undefined4 DAT_008936d3;
extern undefined4 DAT_008936d4; extern undefined4 DAT_008936d5; extern undefined4 DAT_008936d6; extern undefined4 DAT_008936d7;
extern undefined4 DAT_008936d8; extern undefined4 DAT_008936d9; extern undefined4 DAT_008936da; extern undefined4 DAT_008936db;
extern undefined4 DAT_008936dc; extern undefined4 DAT_008936dd; extern undefined4 DAT_008936de; extern undefined4 DAT_008936df;
extern undefined4 DAT_008936e0; extern undefined4 DAT_008936e1; extern undefined4 DAT_008936e2; extern undefined4 DAT_008936e3;
extern undefined4 DAT_008936e4; extern undefined4 DAT_008936e5; extern undefined4 DAT_008936e6; extern undefined4 DAT_008936e7;
extern undefined4 DAT_008936e8; extern undefined4 DAT_008936e9; extern undefined4 DAT_008936ea; extern undefined4 DAT_008936eb;
extern undefined4 DAT_008936ec; extern undefined4 DAT_008936ed; extern undefined4 DAT_008936ee; extern undefined4 DAT_008936ef;
extern undefined4 DAT_008936f0; extern undefined4 DAT_008936f1; extern undefined4 DAT_008936f2; extern undefined4 DAT_008936f3;
extern undefined4 DAT_008936f4; extern undefined4 DAT_008936f8; extern undefined4 DAT_008937ec; extern undefined4 DAT_008961cc;
extern undefined4 DAT_008961d0; extern undefined4 DAT_008988ac; extern undefined4 DAT_008988b0; extern undefined4 DAT_00898cd8;
extern undefined4 DAT_00898cdc; extern undefined4 DAT_0089a93c; extern undefined4 DAT_008c05fc; extern undefined4 DAT_008c3cca;
extern undefined4 DAT_008c3ccb; extern undefined4 DAT_008c3ccc; extern undefined4 DAT_008c3ccd; extern undefined4 DAT_008c3cce;
extern undefined4 DAT_008c84f4; extern undefined4 DAT_008c84f8; extern undefined4 DAT_008c84fc; extern undefined4 DAT_008c8500;
extern undefined4 DAT_008c8504; extern undefined4 DAT_008c8508; extern undefined4 DAT_008c8d54; extern undefined4 DAT_008c8d58;
extern undefined4 DAT_008c8d5c; extern undefined4 DAT_008c8da0; extern undefined4 DAT_008c8da4; extern undefined4 DAT_008c8da8;
extern undefined4 DAT_008c8dac; extern undefined4 DAT_008c8db0; extern undefined4 DAT_008c8db4; extern undefined4 DAT_008c9514;
extern undefined4 DAT_008c9518; extern undefined4 DAT_008c951c; extern undefined4 DAT_008c9520; extern undefined4 DAT_008c9524;
extern undefined4 DAT_008c9528; extern undefined4 DAT_008c958c; extern undefined4 DAT_008c9590; extern undefined4 DAT_008c9594;
extern undefined4 DAT_008c9598; extern undefined4 DAT_008c959c; extern undefined4 DAT_008c95a0; extern undefined4 DAT_008c99c0;
extern undefined4 DAT_008c99c4; extern undefined4 DAT_008c99c8; extern undefined4 DAT_008c99cc; extern undefined4 DAT_008c99d0;
extern undefined4 DAT_008c99d4; extern undefined4 DAT_008c9db0; extern undefined4 DAT_008c9db4; extern undefined4 DAT_008c9db8;
extern undefined4 DAT_008c9dbc; extern undefined4 DAT_008c9dc0; extern undefined4 DAT_008c9dc4; extern undefined4 DAT_008ca630;
extern undefined4 DAT_008ca634; extern undefined4 DAT_008ca638; extern undefined4 DAT_008ca63c; extern undefined4 DAT_008ca640;
extern undefined4 DAT_008ca644; extern undefined4 DAT_008ca708; extern undefined4 DAT_008ca70c; extern undefined4 DAT_008ca710;
extern undefined4 DAT_008ca714; extern undefined4 DAT_008ca718; extern undefined4 DAT_008ca71c; extern undefined4 DAT_008ca798;
extern undefined4 DAT_008ca79c; extern undefined4 DAT_008ca7a0; extern undefined4 DAT_008ca7a4; extern undefined4 DAT_008ca7a8;
extern undefined4 DAT_008ca7ac; extern undefined4 DAT_008ca828; extern undefined4 DAT_008ca82c; extern undefined4 DAT_008ca830;
extern undefined4 DAT_008ca834; extern undefined4 DAT_008ca838; extern undefined4 DAT_008ca83c; extern undefined4 DAT_008cc85c;
extern undefined4 DAT_008cc860; extern undefined4 DAT_008cc864; extern undefined4 DAT_008cc868; extern undefined4 DAT_008cc86c;
extern undefined4 DAT_008cc870; extern undefined4 DAT_008d00c4; extern undefined4 DAT_008d00c8; extern undefined4 DAT_008d00cc;
extern undefined4 DAT_008d00d0; extern undefined4 DAT_008d00d4; extern undefined4 DAT_008d00d8; extern undefined4 DAT_008d117c;
extern undefined4 DAT_008d1180; extern undefined4 DAT_008d1184; extern undefined4 DAT_008d1188; extern undefined4 DAT_008d118c;
extern undefined4 DAT_008d1190; extern undefined4 DAT_008ee168; extern undefined4 DAT_008ee18c; extern undefined4 DAT_008ef56c;
extern undefined4 DAT_008ef5b0; extern undefined4 DAT_008ef5b4; extern undefined4 DAT_008ef5b8;
