#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00891a10; extern undefined4 DAT_00891a14; extern undefined4 DAT_00891a18; extern undefined4 DAT_00891a1c;
extern undefined4 DAT_00891e04; extern undefined4 DAT_00891e08; extern undefined4 DAT_00891e0c; extern undefined4 DAT_00892554;
extern undefined4 DAT_00892558; extern undefined4 DAT_00892580; extern undefined4 DAT_00892584; extern undefined4 DAT_008925cc;
extern undefined4 DAT_008925d0; extern undefined4 DAT_008927f4; extern undefined4 DAT_008927f8; extern undefined4 DAT_00892c90;
extern undefined4 DAT_00892c94; extern undefined4 DAT_00892c98; extern undefined4 DAT_00893204; extern undefined4 DAT_00893210;
extern undefined4 DAT_00893234; extern undefined4 DAT_00893238; extern undefined4 DAT_0089323c; extern undefined4 DAT_00893260;
extern undefined4 DAT_0089326c; extern undefined4 DAT_00893270; extern undefined4 DAT_00893274; extern undefined4 DAT_00893278;
extern undefined4 DAT_0089328c; extern undefined4 DAT_00893290; extern undefined4 DAT_00893291; extern undefined4 DAT_00893292;
extern undefined4 DAT_00893293; extern undefined4 DAT_00893294; extern undefined4 DAT_00893295; extern undefined4 DAT_00893296;
extern undefined4 DAT_00893297; extern undefined4 DAT_00893298; extern undefined4 DAT_00893299; extern undefined4 DAT_0089329a;
extern undefined4 DAT_0089329b; extern undefined4 DAT_0089329c; extern undefined4 DAT_0089329d; extern undefined4 DAT_0089329e;
extern undefined4 DAT_0089329f; extern undefined4 DAT_008932a0; extern undefined4 DAT_008932a1; extern undefined4 DAT_008932a2;
extern undefined4 DAT_008932a3; extern undefined4 DAT_008932a4; extern undefined4 DAT_008932a5; extern undefined4 DAT_008932a6;
extern undefined4 DAT_008932a7; extern undefined4 DAT_008932a8; extern undefined4 DAT_008932a9; extern undefined4 DAT_008932aa;
extern undefined4 DAT_008932ab; extern undefined4 DAT_008932ac; extern undefined4 DAT_008932ad; extern undefined4 DAT_008932ae;
extern undefined4 DAT_008932af; extern undefined4 DAT_008932b0; extern undefined4 DAT_008932b1; extern undefined4 DAT_008932b2;
extern undefined4 DAT_008932b3; extern undefined4 DAT_008932b4; extern undefined4 DAT_008932b8; extern undefined4 DAT_008935bc;
extern undefined4 DAT_008935c0; extern undefined4 DAT_008935c4; extern undefined4 DAT_00893754; extern undefined4 DAT_00893758;
extern undefined4 DAT_0089375c; extern undefined4 DAT_008937ec; extern undefined4 DAT_008937f0; extern undefined4 DAT_008937f4;
extern undefined4 DAT_00893b28; extern undefined4 DAT_00893b34; extern undefined4 DAT_00893b38; extern undefined4 DAT_008943a0;
extern undefined4 DAT_008943bc; extern undefined4 DAT_008943c0; extern undefined4 DAT_008943c1; extern undefined4 DAT_008943c2;
extern undefined4 DAT_008943c3; extern undefined4 DAT_008943c4; extern undefined4 DAT_008943c5; extern undefined4 DAT_008943c6;
extern undefined4 DAT_008943c7; extern undefined4 DAT_008943c8; extern undefined4 DAT_008943c9; extern undefined4 DAT_008943ca;
extern undefined4 DAT_008943cb; extern undefined4 DAT_008943cc; extern undefined4 DAT_008943cd; extern undefined4 DAT_008943ce;
extern undefined4 DAT_008943cf; extern undefined4 DAT_008943d0; extern undefined4 DAT_008943d1; extern undefined4 DAT_008943d2;
extern undefined4 DAT_008943d3; extern undefined4 DAT_008943d4; extern undefined4 DAT_008943d5; extern undefined4 DAT_008943d6;
extern undefined4 DAT_008943d7; extern undefined4 DAT_008943d8; extern undefined4 DAT_008943d9; extern undefined4 DAT_008943da;
extern undefined4 DAT_008943db; extern undefined4 DAT_008943dc; extern undefined4 DAT_008943dd; extern undefined4 DAT_008943de;
extern undefined4 DAT_008943df; extern undefined4 DAT_008943e0; extern undefined4 DAT_008943e1; extern undefined4 DAT_008943e2;
extern undefined4 DAT_008943e3; extern undefined4 DAT_008943e4; extern undefined4 DAT_008943e5; extern undefined4 DAT_008943e6;
extern undefined4 DAT_008943e7; extern undefined4 DAT_008943e8; extern undefined4 DAT_008943ec; extern undefined4 DAT_00894408;
extern undefined4 DAT_0089440c; extern undefined4 DAT_00894410; extern undefined4 DAT_0089466c; extern undefined4 DAT_008963a0;
extern undefined4 DAT_008c8fd4; extern undefined4 DAT_008c8fd8; extern undefined4 DAT_008c8fdc; extern undefined4 DAT_008c8fe0;
extern undefined4 DAT_008c8fe4; extern undefined4 DAT_008c8fe8; extern undefined4 DAT_008c9284; extern undefined4 DAT_008c9288;
extern undefined4 DAT_008c928c; extern undefined4 DAT_008c9290; extern undefined4 DAT_008c9294; extern undefined4 DAT_008c9298;
extern undefined4 DAT_008c9760; extern undefined4 DAT_008c9764; extern undefined4 DAT_008c9768; extern undefined4 DAT_008c976c;
extern undefined4 DAT_008c9770; extern undefined4 DAT_008c9774; extern undefined4 DAT_008c9858; extern undefined4 DAT_008c985c;
extern undefined4 DAT_008c9860; extern undefined4 DAT_008c9864; extern undefined4 DAT_008c9868; extern undefined4 DAT_008c986c;
extern undefined4 DAT_008c9930; extern undefined4 DAT_008c9934; extern undefined4 DAT_008c9938; extern undefined4 DAT_008c993c;
extern undefined4 DAT_008c9940; extern undefined4 DAT_008c9944; extern undefined4 DAT_008c9960; extern undefined4 DAT_008c9964;
extern undefined4 DAT_008c9968; extern undefined4 DAT_008c996c; extern undefined4 DAT_008c9970; extern undefined4 DAT_008c9974;
extern undefined4 DAT_008c9c90; extern undefined4 DAT_008c9c94; extern undefined4 DAT_008c9c98; extern undefined4 DAT_008c9c9c;
extern undefined4 DAT_008c9ca0; extern undefined4 DAT_008c9ca4; extern undefined4 DAT_008ca588; extern undefined4 DAT_008ca58c;
extern undefined4 DAT_008ca590; extern undefined4 DAT_008ca594; extern undefined4 DAT_008ca598; extern undefined4 DAT_008ca59c;
extern undefined4 DAT_008ca5d0; extern undefined4 DAT_008ca5d4; extern undefined4 DAT_008ca5d8; extern undefined4 DAT_008ca5dc;
extern undefined4 DAT_008ca5e0; extern undefined4 DAT_008ca5e4; extern undefined4 DAT_008ca5e8; extern undefined4 DAT_008ca5ec;
extern undefined4 DAT_008ca5f0; extern undefined4 DAT_008ca5f4; extern undefined4 DAT_008ca5f8; extern undefined4 DAT_008ca5fc;
extern undefined4 DAT_008ca768; extern undefined4 DAT_008ca76c; extern undefined4 DAT_008ca770; extern undefined4 DAT_008ca774;
extern undefined4 DAT_008ca778; extern undefined4 DAT_008ca77c; extern undefined4 DAT_008ca870; extern undefined4 DAT_008ca874;
extern undefined4 DAT_008ca878; extern undefined4 DAT_008ca87c; extern undefined4 DAT_008ca880; extern undefined4 DAT_008ca884;
extern undefined4 DAT_008ca8b8; extern undefined4 DAT_008ca8bc; extern undefined4 DAT_008ca8c0; extern undefined4 DAT_008ca8c4;
extern undefined4 DAT_008ca8c8; extern undefined4 DAT_008ca8cc; extern undefined4 DAT_008cabd0; extern undefined4 DAT_008cabd4;
extern undefined4 DAT_008cabd8; extern undefined4 DAT_008cabdc; extern undefined4 DAT_008cabe0; extern undefined4 DAT_008cabe4;
extern undefined4 DAT_008cb258; extern undefined4 DAT_008cb25c; extern undefined4 DAT_008cb260; extern undefined4 DAT_008cb264;
extern undefined4 DAT_008cb268; extern undefined4 DAT_008cb26c; extern undefined4 DAT_008cb2a0; extern undefined4 DAT_008cb2a4;
extern undefined4 DAT_008cb2a8; extern undefined4 DAT_008cb2ac; extern undefined4 DAT_008cb2b0; extern undefined4 DAT_008cb2b4;
