#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089102c; extern undefined4 DAT_00891030; extern undefined4 DAT_00892570; extern undefined4 DAT_00892574;
extern undefined4 DAT_00892578; extern undefined4 DAT_0089257c; extern undefined4 DAT_00892588; extern undefined4 DAT_0089258c;
extern undefined4 DAT_00892590; extern undefined4 DAT_00892594; extern undefined4 DAT_0089291c; extern undefined4 DAT_00892920;
extern undefined4 DAT_00893208; extern undefined4 DAT_0089320c; extern undefined4 DAT_00893210; extern undefined4 DAT_00893278;
extern undefined4 DAT_008938d4; extern undefined4 DAT_008938d8; extern undefined4 DAT_008938dc; extern undefined4 DAT_008943fc;
extern undefined4 DAT_00894400; extern undefined4 DAT_0089466c; extern undefined4 DAT_0089467c; extern undefined4 DAT_00894680;
extern undefined4 DAT_00894684; extern undefined4 DAT_00895974; extern undefined4 DAT_00895978; extern undefined4 DAT_0089597c;
extern undefined4 DAT_00895dd8; extern undefined4 DAT_00895ddc; extern undefined4 DAT_00895eec; extern undefined4 DAT_00895f2c;
extern undefined4 DAT_00895f30; extern undefined4 DAT_00895f34; extern undefined4 DAT_00896138; extern undefined4 DAT_00896180;
extern undefined4 DAT_00896184; extern undefined4 DAT_00896188; extern undefined4 DAT_00896298; extern undefined4 DAT_0089629c;
extern undefined4 DAT_008962a0; extern undefined4 DAT_008962a4; extern undefined4 DAT_00896964; extern undefined4 DAT_00896968;
extern undefined4 DAT_00896d64; extern undefined4 DAT_00896d68; extern undefined4 DAT_00896de8; extern undefined4 DAT_00896dec;
extern undefined4 DAT_00896df0; extern undefined4 DAT_00897274; extern undefined4 DAT_00897278; extern undefined4 DAT_008981f8;
extern undefined4 DAT_008981fc; extern undefined4 DAT_008c8524; extern undefined4 DAT_008c8528; extern undefined4 DAT_008c852c;
extern undefined4 DAT_008c8530; extern undefined4 DAT_008c8534; extern undefined4 DAT_008c8538; extern undefined4 DAT_008c9828;
extern undefined4 DAT_008c982c; extern undefined4 DAT_008c9830; extern undefined4 DAT_008c9834; extern undefined4 DAT_008c9838;
extern undefined4 DAT_008c983c; extern undefined4 DAT_008c9840; extern undefined4 DAT_008c9844; extern undefined4 DAT_008c9848;
extern undefined4 DAT_008c984c; extern undefined4 DAT_008c9850; extern undefined4 DAT_008c9854; extern undefined4 DAT_008c9870;
extern undefined4 DAT_008c9874; extern undefined4 DAT_008c9878; extern undefined4 DAT_008c987c; extern undefined4 DAT_008c9880;
extern undefined4 DAT_008c9884; extern undefined4 DAT_008c9888; extern undefined4 DAT_008c988c; extern undefined4 DAT_008c9890;
extern undefined4 DAT_008c9894; extern undefined4 DAT_008c9898; extern undefined4 DAT_008c989c; extern undefined4 DAT_008c99d8;
extern undefined4 DAT_008c99dc; extern undefined4 DAT_008c99e0; extern undefined4 DAT_008c99e4; extern undefined4 DAT_008c99e8;
extern undefined4 DAT_008c99ec; extern undefined4 DAT_008ca528; extern undefined4 DAT_008ca52c; extern undefined4 DAT_008ca530;
extern undefined4 DAT_008ca534; extern undefined4 DAT_008ca538; extern undefined4 DAT_008ca53c; extern undefined4 DAT_008ca918;
extern undefined4 DAT_008ca91c; extern undefined4 DAT_008ca920; extern undefined4 DAT_008ca924; extern undefined4 DAT_008ca928;
extern undefined4 DAT_008ca92c; extern undefined4 DAT_008cb288; extern undefined4 DAT_008cb28c; extern undefined4 DAT_008cb290;
extern undefined4 DAT_008cb294; extern undefined4 DAT_008cb298; extern undefined4 DAT_008cb29c; extern undefined4 DAT_008cb528;
extern undefined4 DAT_008cb52c; extern undefined4 DAT_008cb530; extern undefined4 DAT_008cb534; extern undefined4 DAT_008cb538;
extern undefined4 DAT_008cb53c; extern undefined4 DAT_008cc188; extern undefined4 DAT_008cc18c; extern undefined4 DAT_008cc190;
extern undefined4 DAT_008cc194; extern undefined4 DAT_008cc198; extern undefined4 DAT_008cc19c; extern undefined4 DAT_008cc5a4;
extern undefined4 DAT_008cc5a8; extern undefined4 DAT_008cc5ac; extern undefined4 DAT_008cc5b0; extern undefined4 DAT_008cc5b4;
extern undefined4 DAT_008cc5b8; extern undefined4 DAT_008cc6f4; extern undefined4 DAT_008cc6f8; extern undefined4 DAT_008cc6fc;
extern undefined4 DAT_008cc700; extern undefined4 DAT_008cc704; extern undefined4 DAT_008cc708; extern undefined4 DAT_008cc814;
extern undefined4 DAT_008cc818; extern undefined4 DAT_008cc81c; extern undefined4 DAT_008cc820; extern undefined4 DAT_008cc824;
extern undefined4 DAT_008cc828; extern undefined4 DAT_008cc8b0; extern undefined4 DAT_008cc8b4; extern undefined4 DAT_008cc8b8;
extern undefined4 DAT_008cc8bc; extern undefined4 DAT_008cc8c0; extern undefined4 DAT_008cc8c4; extern undefined4 DAT_008cc8c8;
extern undefined4 DAT_008cc8cc; extern undefined4 DAT_008cc8d0; extern undefined4 DAT_008cc8d4; extern undefined4 DAT_008cc8d8;
extern undefined4 DAT_008cc8dc; extern undefined4 DAT_008cceb0; extern undefined4 DAT_008cceb4; extern undefined4 DAT_008cceb8;
extern undefined4 DAT_008ccebc; extern undefined4 DAT_008ccec0; extern undefined4 DAT_008ccec4; extern undefined4 DAT_008cd498;
extern undefined4 DAT_008cd49c; extern undefined4 DAT_008cd4a0; extern undefined4 DAT_008cd4a4; extern undefined4 DAT_008cd4a8;
extern undefined4 DAT_008cd4ac; extern undefined4 DAT_008cd4c8; extern undefined4 DAT_008cd4cc; extern undefined4 DAT_008cd4d0;
extern undefined4 DAT_008cd4d4; extern undefined4 DAT_008cd4d8; extern undefined4 DAT_008cd4dc; extern undefined4 DAT_008cda4c;
extern undefined4 DAT_008cda50; extern undefined4 DAT_008cda54; extern undefined4 DAT_008cda58; extern undefined4 DAT_008cda5c;
extern undefined4 DAT_008cda60; extern undefined4 DAT_008cfe18; extern undefined4 DAT_008cfe1c; extern undefined4 DAT_008cfe20;
extern undefined4 DAT_008cfe24; extern undefined4 DAT_008cfe28; extern undefined4 DAT_008cfe2c;
