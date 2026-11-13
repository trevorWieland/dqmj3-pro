#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890e94; extern undefined4 DAT_00890e98; extern undefined4 DAT_00890e99; extern undefined4 DAT_00890e9a;
extern undefined4 DAT_00890e9b; extern undefined4 DAT_00890e9c; extern undefined4 DAT_00890e9d; extern undefined4 DAT_00890e9e;
extern undefined4 DAT_00890e9f; extern undefined4 DAT_00890ea0; extern undefined4 DAT_00890ea1; extern undefined4 DAT_00890ea2;
extern undefined4 DAT_00890ea3; extern undefined4 DAT_00890ea4; extern undefined4 DAT_00890ea5; extern undefined4 DAT_00890ea6;
extern undefined4 DAT_00890ea7; extern undefined4 DAT_00890ea8; extern undefined4 DAT_00890ea9; extern undefined4 DAT_00890eaa;
extern undefined4 DAT_00890eab; extern undefined4 DAT_00890eac; extern undefined4 DAT_00890ead; extern undefined4 DAT_00890eae;
extern undefined4 DAT_00890eaf; extern undefined4 DAT_00890eb0; extern undefined4 DAT_00890eb1; extern undefined4 DAT_00890eb2;
extern undefined4 DAT_00890eb3; extern undefined4 DAT_00890eb4; extern undefined4 DAT_00890eb5; extern undefined4 DAT_00890eb6;
extern undefined4 DAT_00890eb7; extern undefined4 DAT_00890eb8; extern undefined4 DAT_00890eb9; extern undefined4 DAT_00890eba;
extern undefined4 DAT_00890ebb; extern undefined4 DAT_00890ebc; extern undefined4 DAT_00890ec0; extern undefined4 DAT_00890f20;
extern undefined4 DAT_00890f24; extern undefined4 DAT_00891230; extern undefined4 DAT_00891234; extern undefined4 DAT_00891298;
extern undefined4 DAT_0089129c; extern undefined4 DAT_00891914; extern undefined4 DAT_00891918; extern undefined4 DAT_00891940;
extern undefined4 DAT_00891944; extern undefined4 DAT_00891fa4; extern undefined4 DAT_00891fa8; extern undefined4 DAT_008925a4;
extern undefined4 DAT_008925a8; extern undefined4 DAT_008925ac; extern undefined4 DAT_008925b0; extern undefined4 DAT_008925c4;
extern undefined4 DAT_008925c8; extern undefined4 DAT_0089316c; extern undefined4 DAT_00893178; extern undefined4 DAT_0089317c;
extern undefined4 DAT_00893180; extern undefined4 DAT_00893278; extern undefined4 DAT_008932c4; extern undefined4 DAT_008932c8;
extern undefined4 DAT_008932c9; extern undefined4 DAT_008932ca; extern undefined4 DAT_008932cb; extern undefined4 DAT_008932cc;
extern undefined4 DAT_008932cd; extern undefined4 DAT_008932ce; extern undefined4 DAT_008932cf; extern undefined4 DAT_008932d0;
extern undefined4 DAT_008932d1; extern undefined4 DAT_008932d2; extern undefined4 DAT_008932d3; extern undefined4 DAT_008932d4;
extern undefined4 DAT_008932d5; extern undefined4 DAT_008932d6; extern undefined4 DAT_008932d7; extern undefined4 DAT_008932d8;
extern undefined4 DAT_008932d9; extern undefined4 DAT_008932da; extern undefined4 DAT_008932db; extern undefined4 DAT_008932dc;
extern undefined4 DAT_008932dd; extern undefined4 DAT_008932de; extern undefined4 DAT_008932df; extern undefined4 DAT_008932e0;
extern undefined4 DAT_008932e1; extern undefined4 DAT_008932e2; extern undefined4 DAT_008932e3; extern undefined4 DAT_008932e4;
extern undefined4 DAT_008932e5; extern undefined4 DAT_008932e6; extern undefined4 DAT_008932e7; extern undefined4 DAT_008932e8;
extern undefined4 DAT_008932e9; extern undefined4 DAT_008932ea; extern undefined4 DAT_008932eb; extern undefined4 DAT_008932ec;
extern undefined4 DAT_008932f0; extern undefined4 DAT_0089332c; extern undefined4 DAT_00893330; extern undefined4 DAT_00893334;
extern undefined4 DAT_00893335; extern undefined4 DAT_00893336; extern undefined4 DAT_00893337; extern undefined4 DAT_00893338;
extern undefined4 DAT_00893339; extern undefined4 DAT_0089333a; extern undefined4 DAT_0089333b; extern undefined4 DAT_0089333c;
extern undefined4 DAT_0089333d; extern undefined4 DAT_0089333e; extern undefined4 DAT_0089333f; extern undefined4 DAT_00893340;
extern undefined4 DAT_00893341; extern undefined4 DAT_00893342; extern undefined4 DAT_00893343; extern undefined4 DAT_00893344;
extern undefined4 DAT_00893345; extern undefined4 DAT_00893346; extern undefined4 DAT_00893347; extern undefined4 DAT_00893348;
extern undefined4 DAT_00893349; extern undefined4 DAT_0089334a; extern undefined4 DAT_0089334b; extern undefined4 DAT_0089334c;
extern undefined4 DAT_0089334d; extern undefined4 DAT_0089334e; extern undefined4 DAT_0089334f; extern undefined4 DAT_00893350;
extern undefined4 DAT_00893351; extern undefined4 DAT_00893352; extern undefined4 DAT_00893353; extern undefined4 DAT_00893354;
extern undefined4 DAT_00893358; extern undefined4 DAT_0089466c; extern undefined4 DAT_008988cc; extern undefined4 DAT_008988d0;
extern undefined4 DAT_008c83a4; extern undefined4 DAT_008c83a8; extern undefined4 DAT_008c83ac; extern undefined4 DAT_008c83b0;
extern undefined4 DAT_008c83b4; extern undefined4 DAT_008c83b8; extern undefined4 DAT_008c841c; extern undefined4 DAT_008c8420;
extern undefined4 DAT_008c8424; extern undefined4 DAT_008c8428; extern undefined4 DAT_008c842c; extern undefined4 DAT_008c8430;
extern undefined4 DAT_008c874c; extern undefined4 DAT_008c8750; extern undefined4 DAT_008c8754; extern undefined4 DAT_008c8758;
extern undefined4 DAT_008c875c; extern undefined4 DAT_008c8760; extern undefined4 DAT_008c8be4; extern undefined4 DAT_008c8be8;
extern undefined4 DAT_008c8bec; extern undefined4 DAT_008c8bf0; extern undefined4 DAT_008c8bf4; extern undefined4 DAT_008c8bf8;
extern undefined4 DAT_008c8f38; extern undefined4 DAT_008c8f3c; extern undefined4 DAT_008c8f40; extern undefined4 DAT_008c8f44;
extern undefined4 DAT_008c8f48; extern undefined4 DAT_008c8f4c; extern undefined4 DAT_008c8f68; extern undefined4 DAT_008c8f6c;
extern undefined4 DAT_008c8f70; extern undefined4 DAT_008c8f74; extern undefined4 DAT_008c8f78; extern undefined4 DAT_008c8f7c;
extern undefined4 DAT_008c8f80; extern undefined4 DAT_008c8f84; extern undefined4 DAT_008c8f88; extern undefined4 DAT_008c9320;
extern undefined4 DAT_008c9324; extern undefined4 DAT_008c9328; extern undefined4 DAT_008c932c; extern undefined4 DAT_008c9330;
extern undefined4 DAT_008c9334; extern undefined4 DAT_008c98b8; extern undefined4 DAT_008c98bc; extern undefined4 DAT_008c98c0;
extern undefined4 DAT_008c98c4; extern undefined4 DAT_008c98c8; extern undefined4 DAT_008c98cc; extern undefined4 DAT_008c98d0;
extern undefined4 DAT_008c98d4; extern undefined4 DAT_008c98d8; extern undefined4 DAT_008c98dc; extern undefined4 DAT_008c98e0;
extern undefined4 DAT_008c98e4; extern undefined4 DAT_008c9918; extern undefined4 DAT_008c991c; extern undefined4 DAT_008c9920;
extern undefined4 DAT_008c9924; extern undefined4 DAT_008c9928; extern undefined4 DAT_008c992c; extern undefined4 DAT_008ca438;
extern undefined4 DAT_008ca43c; extern undefined4 DAT_008ca440; extern undefined4 DAT_008ca444; extern undefined4 DAT_008ca448;
extern undefined4 DAT_008ca44c; extern undefined4 DAT_008ca600; extern undefined4 DAT_008ca604; extern undefined4 DAT_008ca608;
extern undefined4 DAT_008ca60c; extern undefined4 DAT_008ca610; extern undefined4 DAT_008ca614; extern undefined4 DAT_008ca618;
extern undefined4 DAT_008ca61c; extern undefined4 DAT_008ca620; extern undefined4 DAT_008ca624; extern undefined4 DAT_008ca628;
extern undefined4 DAT_008ca62c; extern undefined4 DAT_008d0124; extern undefined4 DAT_008d0128; extern undefined4 DAT_008d012c;
extern undefined4 DAT_008d0130; extern undefined4 DAT_008d0134; extern undefined4 DAT_008d0138;
