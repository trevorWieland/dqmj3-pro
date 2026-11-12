#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0017fe34(); extern undefined4 fn_00303b10(); extern int fn_003f7174(); extern uint * fn_0078afd4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0088ff28; extern undefined4 DAT_0088ff2c; extern undefined4 DAT_00890340; extern undefined4 DAT_00890344;
extern undefined4 DAT_008911b0; extern undefined4 DAT_008911b4; extern undefined4 DAT_008911b8; extern undefined4 DAT_008911bc;
extern undefined4 DAT_008911c0; extern undefined4 DAT_008911c4; extern undefined4 DAT_008917e4; extern undefined4 DAT_008917e8;
extern undefined4 DAT_008917ec; extern undefined4 DAT_00892260; extern undefined4 DAT_00892261; extern undefined4 DAT_00892262;
extern undefined4 DAT_00892263; extern undefined4 DAT_00892264; extern undefined4 DAT_00892268; extern undefined4 DAT_0089282c;
extern undefined4 DAT_00892830; extern undefined4 DAT_008928a4; extern undefined4 DAT_008928a8; extern undefined4 DAT_00892904;
extern undefined4 DAT_00892908; extern undefined4 DAT_00893210; extern undefined4 DAT_00893214; extern undefined4 DAT_00893218;
extern undefined4 DAT_00896120; extern undefined4 DAT_00896124; extern undefined4 DAT_00896128; extern undefined4 DAT_00896a98;
extern undefined4 DAT_00896a9c; extern undefined4 DAT_00896e0c; extern undefined4 DAT_00896e10; extern undefined4 DAT_008c7824;
extern undefined4 DAT_008c7828; extern undefined4 DAT_008c782c; extern undefined4 DAT_008c7830; extern undefined4 DAT_008c7834;
extern undefined4 DAT_008c7838; extern undefined4 DAT_008c78cc; extern undefined4 DAT_008c78d0; extern undefined4 DAT_008c78d4;
extern undefined4 DAT_008c78d8; extern undefined4 DAT_008c78dc; extern undefined4 DAT_008c78e0; extern undefined4 DAT_008c85a8;
extern undefined4 DAT_008c85ac; extern undefined4 DAT_008c85b0; extern undefined4 DAT_008c85b4; extern undefined4 DAT_008c85b8;
extern undefined4 DAT_008c85bc; extern undefined4 DAT_008c85c0; extern undefined4 DAT_008c85c4; extern undefined4 DAT_008c85c8;
extern undefined4 DAT_008c85cc; extern undefined4 DAT_008c85d0; extern undefined4 DAT_008c85d4; extern undefined4 DAT_008c85d8;
extern undefined4 DAT_008c85dc; extern undefined4 DAT_008c85e0; extern undefined4 DAT_008c85e4; extern undefined4 DAT_008c85e8;
extern undefined4 DAT_008c85ec; extern undefined4 DAT_008c85f0; extern undefined4 DAT_008c85f4; extern undefined4 DAT_008c85f8;
extern undefined4 DAT_008c85fc; extern undefined4 DAT_008c8600; extern undefined4 DAT_008c8604; extern undefined4 DAT_008c8608;
extern undefined4 DAT_008c860c; extern undefined4 DAT_008c8610; extern undefined4 DAT_008c8614; extern undefined4 DAT_008c8618;
extern undefined4 DAT_008c861c; extern undefined4 DAT_008c8620; extern undefined4 DAT_008c8624; extern undefined4 DAT_008c8628;
extern undefined4 DAT_008c862c; extern undefined4 DAT_008c8630; extern undefined4 DAT_008c8634; extern undefined4 DAT_008c8638;
extern undefined4 DAT_008c863c; extern undefined4 DAT_008c8640; extern undefined4 DAT_008c8644; extern undefined4 DAT_008c8648;
extern undefined4 DAT_008c864c; extern undefined4 DAT_008c8650; extern undefined4 DAT_008c8654; extern undefined4 DAT_008c8658;
extern undefined4 DAT_008c865c; extern undefined4 DAT_008c8660; extern undefined4 DAT_008c8664; extern undefined4 DAT_008c8668;
extern undefined4 DAT_008c866c; extern undefined4 DAT_008c8670; extern undefined4 DAT_008c8674; extern undefined4 DAT_008c8678;
extern undefined4 DAT_008c867c; extern undefined4 DAT_008c8680; extern undefined4 DAT_008c8684; extern undefined4 DAT_008c8688;
extern undefined4 DAT_008c868c; extern undefined4 DAT_008c8690; extern undefined4 DAT_008c8694; extern undefined4 DAT_008c8698;
extern undefined4 DAT_008c869c; extern undefined4 DAT_008c86a0; extern undefined4 DAT_008c86a4; extern undefined4 DAT_008c86a8;
extern undefined4 DAT_008c86ac; extern undefined4 DAT_008c86b0; extern undefined4 DAT_008c86b4; extern undefined4 DAT_008c86b8;
extern undefined4 DAT_008c86bc; extern undefined4 DAT_008c86c0; extern undefined4 DAT_008c86c4; extern undefined4 DAT_008c86c8;
extern undefined4 DAT_008c86cc; extern undefined4 DAT_008c86d0; extern undefined4 DAT_008c86d4; extern undefined4 DAT_008c86d8;
extern undefined4 DAT_008c86dc; extern undefined4 DAT_008c86e0; extern undefined4 DAT_008c86e4; extern undefined4 DAT_008c86e8;
extern undefined4 DAT_008c86ec; extern undefined4 DAT_008c86f0; extern undefined4 DAT_008c86f4; extern undefined4 DAT_008c86f8;
extern undefined4 DAT_008c86fc; extern undefined4 DAT_008c8700; extern undefined4 DAT_008c8d48; extern undefined4 DAT_008c8d4c;
extern undefined4 DAT_008c8d50; extern undefined4 DAT_008c8d88; extern undefined4 DAT_008c8d8c; extern undefined4 DAT_008c8d90;
extern undefined4 DAT_008c8d94; extern undefined4 DAT_008c8d98; extern undefined4 DAT_008c8d9c; extern undefined4 DAT_008c940c;
extern undefined4 DAT_008c9410; extern undefined4 DAT_008c9414; extern undefined4 DAT_008c9418; extern undefined4 DAT_008c941c;
extern undefined4 DAT_008c9420; extern undefined4 DAT_008c9424; extern undefined4 DAT_008c9428; extern undefined4 DAT_008c942c;
extern undefined4 DAT_008c9978; extern undefined4 DAT_008c997c; extern undefined4 DAT_008c9980; extern undefined4 DAT_008c9984;
extern undefined4 DAT_008c9988; extern undefined4 DAT_008c998c; extern undefined4 DAT_008c9990; extern undefined4 DAT_008c9994;
extern undefined4 DAT_008c9998; extern undefined4 DAT_008c999c; extern undefined4 DAT_008c99a0; extern undefined4 DAT_008c99a4;
extern undefined4 DAT_008c99a8; extern undefined4 DAT_008c99ac; extern undefined4 DAT_008c99b0; extern undefined4 DAT_008c99b4;
extern undefined4 DAT_008c99b8; extern undefined4 DAT_008c99bc; extern undefined4 DAT_008ca540; extern undefined4 DAT_008ca544;
extern undefined4 DAT_008ca548; extern undefined4 DAT_008ca54c; extern undefined4 DAT_008ca550; extern undefined4 DAT_008ca554;
extern undefined4 DAT_008cc754; extern undefined4 DAT_008cc758; extern undefined4 DAT_008cc75c; extern undefined4 DAT_008cc760;
extern undefined4 DAT_008cc764; extern undefined4 DAT_008cc768; extern undefined4 DAT_008ccf70; extern undefined4 DAT_008ccf74;
extern undefined4 DAT_008ccf78; extern undefined4 DAT_008ccf7c; extern undefined4 DAT_008ccf80; extern undefined4 DAT_008ccf84;
extern undefined4 DAT_008cd190; extern undefined4 DAT_008cd224; extern undefined4 DAT_008cd4e0; extern undefined4 DAT_008cd4e4;
extern undefined4 DAT_008cd4e8; extern undefined4 DAT_008cd4ec; extern undefined4 DAT_008cd4f0; extern undefined4 DAT_008cd4f4;
