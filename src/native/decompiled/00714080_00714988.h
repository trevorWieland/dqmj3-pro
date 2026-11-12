#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890ab0; extern undefined4 DAT_00890ab4; extern undefined4 DAT_00890ab8; extern undefined4 DAT_008939c0;
extern undefined4 DAT_008939c4; extern undefined4 DAT_008939c8; extern undefined4 DAT_00893b64; extern undefined4 DAT_00893c98;
extern undefined4 DAT_00893c9c; extern undefined4 DAT_00893ca0; extern undefined4 DAT_00893ef0; extern undefined4 DAT_00893ef4;
extern undefined4 DAT_00893ef8; extern undefined4 DAT_0089423c; extern undefined4 DAT_00894240; extern undefined4 DAT_00894244;
extern undefined4 DAT_008942ac; extern undefined4 DAT_008942b8; extern undefined4 DAT_008942bc; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894678; extern undefined4 DAT_00894c94; extern undefined4 DAT_00894c98; extern undefined4 DAT_00894da8;
extern undefined4 DAT_00894e2c; extern undefined4 DAT_00894e30; extern undefined4 DAT_00894e34; extern undefined4 DAT_00895318;
extern undefined4 DAT_0089544c; extern undefined4 DAT_00895450; extern undefined4 DAT_00895454; extern undefined4 DAT_00895458;
extern undefined4 DAT_00895464; extern undefined4 DAT_0089547c; extern undefined4 DAT_00895480; extern undefined4 DAT_00895484;
extern undefined4 DAT_0089556c; extern undefined4 DAT_00895570; extern undefined4 DAT_00895574; extern undefined4 DAT_00895575;
extern undefined4 DAT_00895576; extern undefined4 DAT_00895577; extern undefined4 DAT_00895578; extern undefined4 DAT_0089557c;
extern undefined4 DAT_0089557d; extern undefined4 DAT_0089557e; extern undefined4 DAT_0089557f; extern undefined4 DAT_00895580;
extern undefined4 DAT_00895581; extern undefined4 DAT_00895582; extern undefined4 DAT_00895583; extern undefined4 DAT_00895584;
extern undefined4 DAT_00895585; extern undefined4 DAT_00895586; extern undefined4 DAT_00895587; extern undefined4 DAT_00895588;
extern undefined4 DAT_00895589; extern undefined4 DAT_0089558a; extern undefined4 DAT_0089558b; extern undefined4 DAT_0089558c;
extern undefined4 DAT_0089558d; extern undefined4 DAT_0089558e; extern undefined4 DAT_0089558f; extern undefined4 DAT_00895590;
extern undefined4 DAT_00895591; extern undefined4 DAT_00895592; extern undefined4 DAT_00895593; extern undefined4 DAT_00895594;
extern undefined4 DAT_00895598; extern undefined4 DAT_00895758; extern undefined4 DAT_0089575c; extern undefined4 DAT_00895764;
extern undefined4 DAT_00895768; extern undefined4 DAT_00895769; extern undefined4 DAT_0089576a; extern undefined4 DAT_0089576b;
extern undefined4 DAT_0089576c; extern undefined4 DAT_0089576d; extern undefined4 DAT_0089576e; extern undefined4 DAT_0089576f;
extern undefined4 DAT_00895770; extern undefined4 DAT_00895771; extern undefined4 DAT_00895772; extern undefined4 DAT_00895773;
extern undefined4 DAT_00895774; extern undefined4 DAT_00895775; extern undefined4 DAT_00895776; extern undefined4 DAT_00895777;
extern undefined4 DAT_00895778; extern undefined4 DAT_00895779; extern undefined4 DAT_0089577a; extern undefined4 DAT_0089577b;
extern undefined4 DAT_0089577c; extern undefined4 DAT_0089577d; extern undefined4 DAT_0089577e; extern undefined4 DAT_0089577f;
extern undefined4 DAT_00895780; extern undefined4 DAT_00895781; extern undefined4 DAT_00895782; extern undefined4 DAT_00895783;
extern undefined4 DAT_00895784; extern undefined4 DAT_00895785; extern undefined4 DAT_00895786; extern undefined4 DAT_00895787;
extern undefined4 DAT_00895788; extern undefined4 DAT_00895789; extern undefined4 DAT_0089578a; extern undefined4 DAT_0089578b;
extern undefined4 DAT_00895794; extern undefined4 DAT_00895798; extern undefined4 DAT_008957a8; extern undefined4 DAT_008957b8;
extern undefined4 DAT_008963d8; extern undefined4 DAT_008963dc; extern undefined4 DAT_008963e0; extern undefined4 DAT_008963e4;
extern undefined4 DAT_008963e8; extern undefined4 DAT_008963e9; extern undefined4 DAT_008963ea; extern undefined4 DAT_008963eb;
extern undefined4 DAT_008963ec; extern undefined4 DAT_008963ed; extern undefined4 DAT_008963ee; extern undefined4 DAT_008963ef;
extern undefined4 DAT_008963f0; extern undefined4 DAT_008963f1; extern undefined4 DAT_008963f2; extern undefined4 DAT_008963f3;
extern undefined4 DAT_008963f4; extern undefined4 DAT_008963f5; extern undefined4 DAT_008963f6; extern undefined4 DAT_008963f7;
extern undefined4 DAT_008963f8; extern undefined4 DAT_008963f9; extern undefined4 DAT_008963fa; extern undefined4 DAT_008963fb;
extern undefined4 DAT_008963fc; extern undefined4 DAT_008963fd; extern undefined4 DAT_008963fe; extern undefined4 DAT_008963ff;
extern undefined4 DAT_00896400; extern undefined4 DAT_00896401; extern undefined4 DAT_00896402; extern undefined4 DAT_00896403;
extern undefined4 DAT_00896404; extern undefined4 DAT_00896405; extern undefined4 DAT_00896406; extern undefined4 DAT_00896407;
extern undefined4 DAT_00896408; extern undefined4 DAT_00896409; extern undefined4 DAT_0089640a; extern undefined4 DAT_0089640b;
extern undefined4 DAT_0089640c; extern undefined4 DAT_00896410; extern undefined4 DAT_008c7fe4; extern undefined4 DAT_008c7fe8;
extern undefined4 DAT_008c7fec; extern undefined4 DAT_008c7ff0; extern undefined4 DAT_008c7ff4; extern undefined4 DAT_008c7ff8;
extern undefined4 DAT_008c7ffc; extern undefined4 DAT_008c8000; extern undefined4 DAT_008c8004; extern undefined4 DAT_008c8008;
extern undefined4 DAT_008c800c; extern undefined4 DAT_008c8010; extern undefined4 DAT_008ca9f0; extern undefined4 DAT_008ca9f4;
extern undefined4 DAT_008ca9f8; extern undefined4 DAT_008ca9fc; extern undefined4 DAT_008caa00; extern undefined4 DAT_008caa04;
extern undefined4 DAT_008cad90; extern undefined4 DAT_008cad94; extern undefined4 DAT_008cad98; extern undefined4 DAT_008cad9c;
extern undefined4 DAT_008cada0; extern undefined4 DAT_008cada4; extern undefined4 DAT_008caf10; extern undefined4 DAT_008caf14;
extern undefined4 DAT_008caf18; extern undefined4 DAT_008caf1c; extern undefined4 DAT_008caf20; extern undefined4 DAT_008caf24;
extern undefined4 DAT_008cb078; extern undefined4 DAT_008cb07c; extern undefined4 DAT_008cb080; extern undefined4 DAT_008cb084;
extern undefined4 DAT_008cb088; extern undefined4 DAT_008cb08c; extern undefined4 DAT_008cb0d8; extern undefined4 DAT_008cb0dc;
extern undefined4 DAT_008cb0e0; extern undefined4 DAT_008cb0e4; extern undefined4 DAT_008cb0e8; extern undefined4 DAT_008cb0ec;
extern undefined4 DAT_008cb738; extern undefined4 DAT_008cb73c; extern undefined4 DAT_008cb740; extern undefined4 DAT_008cb744;
extern undefined4 DAT_008cb748; extern undefined4 DAT_008cb74c; extern undefined4 DAT_008cb8d0; extern undefined4 DAT_008cb8d4;
extern undefined4 DAT_008cb8d8; extern undefined4 DAT_008cb8dc; extern undefined4 DAT_008cb8e0; extern undefined4 DAT_008cb8e4;
extern undefined4 DAT_008cbe1c; extern undefined4 DAT_008cbe20; extern undefined4 DAT_008cbe24; extern undefined4 DAT_008cbe28;
extern undefined4 DAT_008cbe2c; extern undefined4 DAT_008cbe30; extern undefined4 DAT_008cbe64; extern undefined4 DAT_008cbe68;
extern undefined4 DAT_008cbe6c; extern undefined4 DAT_008cbe70; extern undefined4 DAT_008cbe74; extern undefined4 DAT_008cbe78;
extern undefined4 DAT_008cbf48; extern undefined4 DAT_008cbf4c; extern undefined4 DAT_008cbf50; extern undefined4 DAT_008cbf54;
extern undefined4 DAT_008cbf58; extern undefined4 DAT_008cbf5c; extern undefined4 DAT_008cc020; extern undefined4 DAT_008cc024;
extern undefined4 DAT_008cc028; extern undefined4 DAT_008cc02c; extern undefined4 DAT_008cc030; extern undefined4 DAT_008cc034;
extern undefined4 DAT_008cc038; extern undefined4 DAT_008cc03c; extern undefined4 DAT_008cc040; extern undefined4 DAT_008cc044;
extern undefined4 DAT_008cc048; extern undefined4 DAT_008cc04c; extern undefined4 DAT_008cc050; extern undefined4 DAT_008cc054;
extern undefined4 DAT_008cc058; extern undefined4 DAT_008cc05c; extern undefined4 DAT_008cc060; extern undefined4 DAT_008cc064;
extern undefined4 DAT_008cc9e8; extern undefined4 DAT_008cc9ec; extern undefined4 DAT_008cc9f0; extern undefined4 DAT_008cc9f4;
extern undefined4 DAT_008cc9f8; extern undefined4 DAT_008cc9fc;
