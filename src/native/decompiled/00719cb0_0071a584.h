#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_00103d64(); extern undefined4 fn_00303b10();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00104074_1(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890948; extern undefined4 DAT_0089094c; extern undefined4 DAT_00890950; extern undefined4 DAT_00890ad4;
extern undefined4 DAT_00890ad8; extern undefined4 DAT_00891948; extern undefined4 DAT_00891a98; extern undefined4 DAT_00891a9c;
extern undefined4 DAT_00891a9d; extern undefined4 DAT_00891a9e; extern undefined4 DAT_00891a9f; extern undefined4 DAT_00891aa0;
extern undefined4 DAT_00891aa1; extern undefined4 DAT_00891aa2; extern undefined4 DAT_00891aa3; extern undefined4 DAT_00891aa4;
extern undefined4 DAT_00891aa5; extern undefined4 DAT_00891aa6; extern undefined4 DAT_00891aa7; extern undefined4 DAT_00891aa8;
extern undefined4 DAT_00891aa9; extern undefined4 DAT_00891aaa; extern undefined4 DAT_00891aab; extern undefined4 DAT_00891aac;
extern undefined4 DAT_00891aad; extern undefined4 DAT_00891aae; extern undefined4 DAT_00891aaf; extern undefined4 DAT_00891ab0;
extern undefined4 DAT_00891ab1; extern undefined4 DAT_00891ab2; extern undefined4 DAT_00891ab3; extern undefined4 DAT_00891ab4;
extern undefined4 DAT_00891ab5; extern undefined4 DAT_00891ab6; extern undefined4 DAT_00891ab7; extern undefined4 DAT_00891ab8;
extern undefined4 DAT_00891ab9; extern undefined4 DAT_00891aba; extern undefined4 DAT_00891abb; extern undefined4 DAT_00891abc;
extern undefined4 DAT_00891abd; extern undefined4 DAT_00891abe; extern undefined4 DAT_00891abf; extern undefined4 DAT_00891ac0;
extern undefined4 DAT_00891ac4; extern undefined4 DAT_00891b60; extern undefined4 DAT_00891d60; extern undefined4 DAT_00891dc8;
extern undefined4 DAT_00891dcc; extern undefined4 DAT_00891dd0; extern undefined4 DAT_00891dd1; extern undefined4 DAT_00891dd2;
extern undefined4 DAT_00891dd3; extern undefined4 DAT_00891dd4; extern undefined4 DAT_00891dd8; extern undefined4 DAT_00891dd9;
extern undefined4 DAT_00891dda; extern undefined4 DAT_00891ddb; extern undefined4 DAT_00891ddc; extern undefined4 DAT_00891ddd;
extern undefined4 DAT_00891dde; extern undefined4 DAT_00891ddf; extern undefined4 DAT_00891de0; extern undefined4 DAT_00891de1;
extern undefined4 DAT_00891de2; extern undefined4 DAT_00891de3; extern undefined4 DAT_00891de4; extern undefined4 DAT_00891de5;
extern undefined4 DAT_00891de6; extern undefined4 DAT_00891de7; extern undefined4 DAT_00891de8; extern undefined4 DAT_00891de9;
extern undefined4 DAT_00891dea; extern undefined4 DAT_00891deb; extern undefined4 DAT_00891dec; extern undefined4 DAT_00891ded;
extern undefined4 DAT_00891dee; extern undefined4 DAT_00891def; extern undefined4 DAT_00891df0; extern undefined4 DAT_00891df4;
extern undefined4 DAT_008929a8; extern undefined4 DAT_008929e0; extern undefined4 DAT_008929e4; extern undefined4 DAT_008929e5;
extern undefined4 DAT_008929e6; extern undefined4 DAT_008929e7; extern undefined4 DAT_008929e8; extern undefined4 DAT_008929e9;
extern undefined4 DAT_008929ea; extern undefined4 DAT_008929eb; extern undefined4 DAT_008929ec; extern undefined4 DAT_008929ed;
extern undefined4 DAT_008929ee; extern undefined4 DAT_008929ef; extern undefined4 DAT_008929f0; extern undefined4 DAT_008929f1;
extern undefined4 DAT_008929f2; extern undefined4 DAT_008929f3; extern undefined4 DAT_008929f4; extern undefined4 DAT_008929f5;
extern undefined4 DAT_008929f6; extern undefined4 DAT_008929f7; extern undefined4 DAT_008929f8; extern undefined4 DAT_008929f9;
extern undefined4 DAT_008929fa; extern undefined4 DAT_008929fb; extern undefined4 DAT_008929fc; extern undefined4 DAT_008929fd;
extern undefined4 DAT_008929fe; extern undefined4 DAT_008929ff; extern undefined4 DAT_00892a00; extern undefined4 DAT_00892a01;
extern undefined4 DAT_00892a02; extern undefined4 DAT_00892a03; extern undefined4 DAT_00892a04; extern undefined4 DAT_00892a05;
extern undefined4 DAT_00892a06; extern undefined4 DAT_00892a07; extern undefined4 DAT_00892a08; extern undefined4 DAT_00892a0c;
extern undefined4 DAT_00892aa0; extern undefined4 DAT_00892aa4; extern undefined4 DAT_00892aa5; extern undefined4 DAT_00892aa6;
extern undefined4 DAT_00892aa7; extern undefined4 DAT_00892aa8; extern undefined4 DAT_00892aa9; extern undefined4 DAT_00892aaa;
extern undefined4 DAT_00892aab; extern undefined4 DAT_00892aac; extern undefined4 DAT_00892aad; extern undefined4 DAT_00892aae;
extern undefined4 DAT_00892aaf; extern undefined4 DAT_00892ab0; extern undefined4 DAT_00892ab1; extern undefined4 DAT_00892ab2;
extern undefined4 DAT_00892ab3; extern undefined4 DAT_00892ab4; extern undefined4 DAT_00892ab5; extern undefined4 DAT_00892ab6;
extern undefined4 DAT_00892ab7; extern undefined4 DAT_00892ab8; extern undefined4 DAT_00892ab9; extern undefined4 DAT_00892aba;
extern undefined4 DAT_00892abb; extern undefined4 DAT_00892abc; extern undefined4 DAT_00892abd; extern undefined4 DAT_00892abe;
extern undefined4 DAT_00892abf; extern undefined4 DAT_00892ac0; extern undefined4 DAT_00892ac1; extern undefined4 DAT_00892ac2;
extern undefined4 DAT_00892ac3; extern undefined4 DAT_00892ac4; extern undefined4 DAT_00892ac5; extern undefined4 DAT_00892ac6;
extern undefined4 DAT_00892ac7; extern undefined4 DAT_00892ac8; extern undefined4 DAT_00892acc; extern undefined4 DAT_00892eb8;
extern undefined4 DAT_00892ebc; extern undefined4 DAT_00892fac; extern undefined4 DAT_00892fb0; extern undefined4 DAT_00892fb4;
extern undefined4 DAT_00893164; extern undefined4 DAT_00893168; extern undefined4 DAT_00893278; extern undefined4 DAT_00893698;
extern undefined4 DAT_0089369c; extern undefined4 DAT_0089369d; extern undefined4 DAT_0089369e; extern undefined4 DAT_0089369f;
extern undefined4 DAT_008936a0; extern undefined4 DAT_008936a1; extern undefined4 DAT_008936a2; extern undefined4 DAT_008936a3;
extern undefined4 DAT_008936a4; extern undefined4 DAT_008936a5; extern undefined4 DAT_008936a6; extern undefined4 DAT_008936a7;
extern undefined4 DAT_008936a8; extern undefined4 DAT_008936a9; extern undefined4 DAT_008936aa; extern undefined4 DAT_008936ab;
extern undefined4 DAT_008936ac; extern undefined4 DAT_008936ad; extern undefined4 DAT_008936ae; extern undefined4 DAT_008936af;
extern undefined4 DAT_008936b0; extern undefined4 DAT_008936b1; extern undefined4 DAT_008936b2; extern undefined4 DAT_008936b3;
extern undefined4 DAT_008936b4; extern undefined4 DAT_008936b5; extern undefined4 DAT_008936b6; extern undefined4 DAT_008936b7;
extern undefined4 DAT_008936b8; extern undefined4 DAT_008936b9; extern undefined4 DAT_008936ba; extern undefined4 DAT_008936bb;
extern undefined4 DAT_008936bc; extern undefined4 DAT_008936bd; extern undefined4 DAT_008936be; extern undefined4 DAT_008936bf;
extern undefined4 DAT_008936c0; extern undefined4 DAT_008936c4; extern undefined4 DAT_0089392c; extern undefined4 DAT_00893930;
extern undefined4 DAT_00893934; extern undefined4 DAT_0089466c; extern undefined4 DAT_008c7db4; extern undefined4 DAT_008c7db8;
extern undefined4 DAT_008c7dbc; extern undefined4 DAT_008c7dc0; extern undefined4 DAT_008c7dc4; extern undefined4 DAT_008c7dc8;
extern undefined4 DAT_008c8044; extern undefined4 DAT_008c8048; extern undefined4 DAT_008c804c; extern undefined4 DAT_008c8050;
extern undefined4 DAT_008c8054; extern undefined4 DAT_008c8058; extern undefined4 DAT_008c907c; extern undefined4 DAT_008c9080;
extern undefined4 DAT_008c9084; extern undefined4 DAT_008c9088; extern undefined4 DAT_008c908c; extern undefined4 DAT_008c9090;
extern undefined4 DAT_008c9254; extern undefined4 DAT_008c9258; extern undefined4 DAT_008c925c; extern undefined4 DAT_008c9260;
extern undefined4 DAT_008c9264; extern undefined4 DAT_008c9268; extern undefined4 DAT_008c9a50; extern undefined4 DAT_008c9a54;
extern undefined4 DAT_008c9a58; extern undefined4 DAT_008c9a5c; extern undefined4 DAT_008c9a60; extern undefined4 DAT_008c9a64;
extern undefined4 DAT_008c9ab0; extern undefined4 DAT_008c9ab4; extern undefined4 DAT_008c9ab8; extern undefined4 DAT_008c9abc;
extern undefined4 DAT_008c9ac0; extern undefined4 DAT_008c9ac4; extern undefined4 DAT_008c9ed0; extern undefined4 DAT_008c9ed4;
extern undefined4 DAT_008c9ed8; extern undefined4 DAT_008c9edc; extern undefined4 DAT_008c9ee0; extern undefined4 DAT_008c9ee4;
extern undefined4 DAT_008ca060; extern undefined4 DAT_008ca064; extern undefined4 DAT_008ca068; extern undefined4 DAT_008ca06c;
extern undefined4 DAT_008ca070; extern undefined4 DAT_008ca074; extern undefined4 DAT_008ca408; extern undefined4 DAT_008ca40c;
extern undefined4 DAT_008ca410; extern undefined4 DAT_008ca414; extern undefined4 DAT_008ca418; extern undefined4 DAT_008ca41c;
extern undefined4 DAT_008ca810; extern undefined4 DAT_008ca814; extern undefined4 DAT_008ca818; extern undefined4 DAT_008ca81c;
extern undefined4 DAT_008ca820; extern undefined4 DAT_008ca824; extern undefined4 DAT_008ca960; extern undefined4 DAT_008ca964;
extern undefined4 DAT_008ca968; extern undefined4 DAT_008ca96c; extern undefined4 DAT_008ca970; extern undefined4 DAT_008ca974;
