#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0017fe34(); extern uint * fn_0078afd4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089176c; extern undefined4 DAT_00891770; extern undefined4 DAT_00891ec8; extern undefined4 DAT_00891ecc;
extern undefined4 DAT_00891ed0; extern undefined4 DAT_008920ec; extern undefined4 DAT_008920f0; extern undefined4 DAT_008920f4;
extern undefined4 DAT_008920f8; extern undefined4 DAT_008920fc; extern undefined4 DAT_00892514; extern undefined4 DAT_00892518;
extern undefined4 DAT_0089252c; extern undefined4 DAT_00892530; extern undefined4 DAT_00892568; extern undefined4 DAT_0089256c;
extern undefined4 DAT_0089431c; extern undefined4 DAT_00894320; extern undefined4 DAT_00894324; extern undefined4 DAT_0089466c;
extern undefined4 DAT_008946e0; extern undefined4 DAT_008946e4; extern undefined4 DAT_008946e8; extern undefined4 DAT_00894f38;
extern undefined4 DAT_00894f3c; extern undefined4 DAT_00894f3d; extern undefined4 DAT_00894f3e; extern undefined4 DAT_00894f3f;
extern undefined4 DAT_00894f40; extern undefined4 DAT_00894f41; extern undefined4 DAT_00894f42; extern undefined4 DAT_00894f43;
extern undefined4 DAT_00894f44; extern undefined4 DAT_00894f45; extern undefined4 DAT_00894f46; extern undefined4 DAT_00894f47;
extern undefined4 DAT_00894f48; extern undefined4 DAT_00894f49; extern undefined4 DAT_00894f4a; extern undefined4 DAT_00894f4b;
extern undefined4 DAT_00894f4c; extern undefined4 DAT_00894f4d; extern undefined4 DAT_00894f4e; extern undefined4 DAT_00894f4f;
extern undefined4 DAT_00894f50; extern undefined4 DAT_00894f51; extern undefined4 DAT_00894f52; extern undefined4 DAT_00894f53;
extern undefined4 DAT_00894f54; extern undefined4 DAT_00894f55; extern undefined4 DAT_00894f56; extern undefined4 DAT_00894f57;
extern undefined4 DAT_00894f58; extern undefined4 DAT_00894f59; extern undefined4 DAT_00894f5a; extern undefined4 DAT_00894f5b;
extern undefined4 DAT_00894f5c; extern undefined4 DAT_00894f5d; extern undefined4 DAT_00894f5e; extern undefined4 DAT_00894f5f;
extern undefined4 DAT_00894f60; extern undefined4 DAT_00894f64; extern undefined4 DAT_008950b4; extern undefined4 DAT_00895318;
extern undefined4 DAT_0089531c; extern undefined4 DAT_00895320; extern undefined4 DAT_00895eec; extern undefined4 DAT_00895efc;
extern undefined4 DAT_00895f00; extern undefined4 DAT_00895f04; extern undefined4 DAT_00895f08; extern undefined4 DAT_00895f0c;
extern undefined4 DAT_00896138; extern undefined4 DAT_00896144; extern undefined4 DAT_00896148; extern undefined4 DAT_0089614c;
extern undefined4 DAT_00896194; extern undefined4 DAT_00896195; extern undefined4 DAT_00896196; extern undefined4 DAT_00896197;
extern undefined4 DAT_00896198; extern undefined4 DAT_00896199; extern undefined4 DAT_0089619a; extern undefined4 DAT_0089619b;
extern undefined4 DAT_0089619c; extern undefined4 DAT_0089619d; extern undefined4 DAT_0089619e; extern undefined4 DAT_0089619f;
extern undefined4 DAT_008961a0; extern undefined4 DAT_008961a1; extern undefined4 DAT_008961a2; extern undefined4 DAT_008961a3;
extern undefined4 DAT_008961a4; extern undefined4 DAT_008961a5; extern undefined4 DAT_008961a6; extern undefined4 DAT_008961a7;
extern undefined4 DAT_008961a8; extern undefined4 DAT_008961a9; extern undefined4 DAT_008961aa; extern undefined4 DAT_008961ab;
extern undefined4 DAT_008961ac; extern undefined4 DAT_008961ad; extern undefined4 DAT_008961ae; extern undefined4 DAT_008961af;
extern undefined4 DAT_008961b0; extern undefined4 DAT_008961b1; extern undefined4 DAT_008961b2; extern undefined4 DAT_008961b3;
extern undefined4 DAT_008961b4; extern undefined4 DAT_008961b5; extern undefined4 DAT_008961b6; extern undefined4 DAT_008961b7;
extern undefined4 DAT_008961b8; extern undefined4 DAT_008961bc; extern undefined4 DAT_00896374; extern undefined4 DAT_00896375;
extern undefined4 DAT_00896376; extern undefined4 DAT_00896377; extern undefined4 DAT_00896378; extern undefined4 DAT_0089637c;
extern undefined4 DAT_008987b4; extern undefined4 DAT_008987b8; extern undefined4 DAT_008c8d30; extern undefined4 DAT_008c8d34;
extern undefined4 DAT_008c8d38; extern undefined4 DAT_008c8d3c; extern undefined4 DAT_008c8d40; extern undefined4 DAT_008c8d44;
extern undefined4 DAT_008c92f0; extern undefined4 DAT_008c92f4; extern undefined4 DAT_008c92f8; extern undefined4 DAT_008c92fc;
extern undefined4 DAT_008c9300; extern undefined4 DAT_008c9304; extern undefined4 DAT_008c9388; extern undefined4 DAT_008c938c;
extern undefined4 DAT_008c9390; extern undefined4 DAT_008c9394; extern undefined4 DAT_008c9398; extern undefined4 DAT_008c939c;
extern undefined4 DAT_008c93a0; extern undefined4 DAT_008c93a4; extern undefined4 DAT_008c93a8; extern undefined4 DAT_008c96a0;
extern undefined4 DAT_008c96a4; extern undefined4 DAT_008c96a8; extern undefined4 DAT_008c96ac; extern undefined4 DAT_008c96b0;
extern undefined4 DAT_008c96b4; extern undefined4 DAT_008c96e8; extern undefined4 DAT_008c96ec; extern undefined4 DAT_008c96f0;
extern undefined4 DAT_008c96f4; extern undefined4 DAT_008c96f8; extern undefined4 DAT_008c96fc; extern undefined4 DAT_008c9790;
extern undefined4 DAT_008c9794; extern undefined4 DAT_008c9798; extern undefined4 DAT_008c979c; extern undefined4 DAT_008c97a0;
extern undefined4 DAT_008c97a4; extern undefined4 DAT_008cb180; extern undefined4 DAT_008cb184; extern undefined4 DAT_008cb188;
extern undefined4 DAT_008cb18c; extern undefined4 DAT_008cb190; extern undefined4 DAT_008cb194; extern undefined4 DAT_008cb5b8;
extern undefined4 DAT_008cb5bc; extern undefined4 DAT_008cb5c0; extern undefined4 DAT_008cb5c4; extern undefined4 DAT_008cb5c8;
extern undefined4 DAT_008cb5cc; extern undefined4 DAT_008cb9fc; extern undefined4 DAT_008cba00; extern undefined4 DAT_008cba04;
extern undefined4 DAT_008cba08; extern undefined4 DAT_008cba0c; extern undefined4 DAT_008cba10; extern undefined4 DAT_008cbd50;
extern undefined4 DAT_008cbd54; extern undefined4 DAT_008cbd58; extern undefined4 DAT_008cbd5c; extern undefined4 DAT_008cbd60;
extern undefined4 DAT_008cbd64; extern undefined4 DAT_008cbd68; extern undefined4 DAT_008cbd6c; extern undefined4 DAT_008cbd70;
extern undefined4 DAT_008cbd74; extern undefined4 DAT_008cbd78; extern undefined4 DAT_008cbd7c; extern undefined4 DAT_008cbd80;
extern undefined4 DAT_008cbd84; extern undefined4 DAT_008cbd88; extern undefined4 DAT_008cc6c4; extern undefined4 DAT_008cc6c8;
extern undefined4 DAT_008cc6cc; extern undefined4 DAT_008cc6d0; extern undefined4 DAT_008cc6d4; extern undefined4 DAT_008cc6d8;
extern undefined4 DAT_008cc6dc; extern undefined4 DAT_008cc6e0; extern undefined4 DAT_008cc6e4; extern undefined4 DAT_008cc6e8;
extern undefined4 DAT_008cc6ec; extern undefined4 DAT_008cc6f0; extern undefined4 DAT_008cc79c; extern undefined4 DAT_008cc7a0;
extern undefined4 DAT_008cc7a4; extern undefined4 DAT_008cc7a8; extern undefined4 DAT_008cc7ac; extern undefined4 DAT_008cc7b0;
extern undefined4 DAT_008cc82c; extern undefined4 DAT_008cc830; extern undefined4 DAT_008cc834; extern undefined4 DAT_008cc838;
extern undefined4 DAT_008cc83c; extern undefined4 DAT_008cc840; extern undefined4 DAT_008cc8f8; extern undefined4 DAT_008cc8fc;
extern undefined4 DAT_008cc900; extern undefined4 DAT_008cc904; extern undefined4 DAT_008cc908; extern undefined4 DAT_008cc90c;
extern undefined4 DAT_008cfe30; extern undefined4 DAT_008cfe34; extern undefined4 DAT_008cfe38; extern undefined4 DAT_008cfe3c;
extern undefined4 DAT_008cfe40; extern undefined4 DAT_008cfe44;
