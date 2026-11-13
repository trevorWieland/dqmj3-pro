#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern float fn_001a4a80();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008918e0; extern undefined4 DAT_008918e4; extern undefined4 DAT_00891c68; extern undefined4 DAT_00891c7c;
extern undefined4 DAT_00891c80; extern undefined4 DAT_00891d30; extern undefined4 DAT_00891d34; extern undefined4 DAT_00891d38;
extern undefined4 DAT_00891d39; extern undefined4 DAT_00891d3a; extern undefined4 DAT_00891d3b; extern undefined4 DAT_00891d3c;
extern undefined4 DAT_00891d40; extern undefined4 DAT_00891d41; extern undefined4 DAT_00891d42; extern undefined4 DAT_00891d43;
extern undefined4 DAT_00891d44; extern undefined4 DAT_00891d45; extern undefined4 DAT_00891d46; extern undefined4 DAT_00891d47;
extern undefined4 DAT_00891d48; extern undefined4 DAT_00891d49; extern undefined4 DAT_00891d4a; extern undefined4 DAT_00891d4b;
extern undefined4 DAT_00891d4c; extern undefined4 DAT_00891d4d; extern undefined4 DAT_00891d4e; extern undefined4 DAT_00891d4f;
extern undefined4 DAT_00891d50; extern undefined4 DAT_00891d51; extern undefined4 DAT_00891d52; extern undefined4 DAT_00891d53;
extern undefined4 DAT_00891d54; extern undefined4 DAT_00891d55; extern undefined4 DAT_00891d56; extern undefined4 DAT_00891d57;
extern undefined4 DAT_00891d58; extern undefined4 DAT_00891d5c; extern undefined4 DAT_00891d60; extern undefined4 DAT_00892100;
extern undefined4 DAT_00892104; extern undefined4 DAT_00892108; extern undefined4 DAT_00892374; extern undefined4 DAT_00892378;
extern undefined4 DAT_0089251c; extern undefined4 DAT_00892520; extern undefined4 DAT_0089253c; extern undefined4 DAT_00892540;
extern undefined4 DAT_0089254c; extern undefined4 DAT_00892550; extern undefined4 DAT_008925d8; extern undefined4 DAT_008925dc;
extern undefined4 DAT_008931e4; extern undefined4 DAT_008931e8; extern undefined4 DAT_00893278; extern undefined4 DAT_0089345c;
extern undefined4 DAT_00893460; extern undefined4 DAT_00893464; extern undefined4 DAT_00893500; extern undefined4 DAT_00893504;
extern undefined4 DAT_00893508; extern undefined4 DAT_008938e8; extern undefined4 DAT_008938ec; extern undefined4 DAT_008938ed;
extern undefined4 DAT_008938ee; extern undefined4 DAT_008938ef; extern undefined4 DAT_008938f0; extern undefined4 DAT_008938f1;
extern undefined4 DAT_008938f2; extern undefined4 DAT_008938f3; extern undefined4 DAT_008938f4; extern undefined4 DAT_008938f5;
extern undefined4 DAT_008938f6; extern undefined4 DAT_008938f7; extern undefined4 DAT_008938f8; extern undefined4 DAT_008938f9;
extern undefined4 DAT_008938fa; extern undefined4 DAT_008938fb; extern undefined4 DAT_008938fc; extern undefined4 DAT_008938fd;
extern undefined4 DAT_008938fe; extern undefined4 DAT_008938ff; extern undefined4 DAT_00893900; extern undefined4 DAT_00893901;
extern undefined4 DAT_00893902; extern undefined4 DAT_00893903; extern undefined4 DAT_00893904; extern undefined4 DAT_00893905;
extern undefined4 DAT_00893906; extern undefined4 DAT_00893907; extern undefined4 DAT_00893908; extern undefined4 DAT_00893909;
extern undefined4 DAT_0089390a; extern undefined4 DAT_0089390b; extern undefined4 DAT_0089390c; extern undefined4 DAT_0089390d;
extern undefined4 DAT_0089390e; extern undefined4 DAT_0089390f; extern undefined4 DAT_00893910; extern undefined4 DAT_00893914;
extern undefined4 DAT_00893bb0; extern undefined4 DAT_00893d80; extern undefined4 DAT_00893db0; extern undefined4 DAT_00893db4;
extern undefined4 DAT_00893db8; extern undefined4 DAT_0089466c; extern undefined4 DAT_00897a38; extern undefined4 DAT_00897a3c;
extern undefined4 DAT_008988dc; extern undefined4 DAT_008988e0; extern undefined4 DAT_008c8eb4; extern undefined4 DAT_008c8eb8;
extern undefined4 DAT_008c8ebc; extern undefined4 DAT_008c8ec0; extern undefined4 DAT_008c8ec4; extern undefined4 DAT_008c8ec8;
extern undefined4 DAT_008c913c; extern undefined4 DAT_008c9140; extern undefined4 DAT_008c9144; extern undefined4 DAT_008c9148;
extern undefined4 DAT_008c914c; extern undefined4 DAT_008c9150; extern undefined4 DAT_008c91cc; extern undefined4 DAT_008c91d0;
extern undefined4 DAT_008c91d4; extern undefined4 DAT_008c91d8; extern undefined4 DAT_008c91dc; extern undefined4 DAT_008c91e0;
extern undefined4 DAT_008c93ac; extern undefined4 DAT_008c93b0; extern undefined4 DAT_008c93b4; extern undefined4 DAT_008c93b8;
extern undefined4 DAT_008c93bc; extern undefined4 DAT_008c93c0; extern undefined4 DAT_008c94e4; extern undefined4 DAT_008c94e8;
extern undefined4 DAT_008c94ec; extern undefined4 DAT_008c94f0; extern undefined4 DAT_008c94f4; extern undefined4 DAT_008c94f8;
extern undefined4 DAT_008c96b8; extern undefined4 DAT_008c96bc; extern undefined4 DAT_008c96c0; extern undefined4 DAT_008c96c4;
extern undefined4 DAT_008c96c8; extern undefined4 DAT_008c96cc; extern undefined4 DAT_008c9718; extern undefined4 DAT_008c971c;
extern undefined4 DAT_008c9720; extern undefined4 DAT_008c9724; extern undefined4 DAT_008c9728; extern undefined4 DAT_008c972c;
extern undefined4 DAT_008c9748; extern undefined4 DAT_008c974c; extern undefined4 DAT_008c9750; extern undefined4 DAT_008c9754;
extern undefined4 DAT_008c9758; extern undefined4 DAT_008c975c; extern undefined4 DAT_008c9948; extern undefined4 DAT_008c994c;
extern undefined4 DAT_008c9950; extern undefined4 DAT_008c9954; extern undefined4 DAT_008c9958; extern undefined4 DAT_008c995c;
extern undefined4 DAT_008ca4e0; extern undefined4 DAT_008ca4e4; extern undefined4 DAT_008ca4e8; extern undefined4 DAT_008ca4ec;
extern undefined4 DAT_008ca4f0; extern undefined4 DAT_008ca4f4; extern undefined4 DAT_008ca690; extern undefined4 DAT_008ca694;
extern undefined4 DAT_008ca698; extern undefined4 DAT_008ca69c; extern undefined4 DAT_008ca6a0; extern undefined4 DAT_008ca6a4;
extern undefined4 DAT_008ca6f0; extern undefined4 DAT_008ca6f4; extern undefined4 DAT_008ca6f8; extern undefined4 DAT_008ca6fc;
extern undefined4 DAT_008ca700; extern undefined4 DAT_008ca704; extern undefined4 DAT_008ca930; extern undefined4 DAT_008ca934;
extern undefined4 DAT_008ca938; extern undefined4 DAT_008ca93c; extern undefined4 DAT_008ca940; extern undefined4 DAT_008ca944;
extern undefined4 DAT_008cae68; extern undefined4 DAT_008cae6c; extern undefined4 DAT_008cae70; extern undefined4 DAT_008cae74;
extern undefined4 DAT_008cae78; extern undefined4 DAT_008cae7c; extern undefined4 DAT_008cfdb4; extern undefined4 DAT_008cfdb8;
extern undefined4 DAT_008cfdbc; extern undefined4 DAT_008cfdc0; extern undefined4 DAT_008cfdc4; extern undefined4 DAT_008cfdc8;
extern undefined4 DAT_008d0154; extern undefined4 DAT_008d0158; extern undefined4 DAT_008d015c; extern undefined4 DAT_008d0160;
extern undefined4 DAT_008d0164; extern undefined4 DAT_008d0168;
