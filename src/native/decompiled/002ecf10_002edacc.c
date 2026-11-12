#include "002ecf10_002edacc.h"



undefined4 * fn_002edacc(undefined4 *param_1)

{
  *param_1 = &DAT_008210d8;
  fn_002eccc8(param_1);
  return param_1;
}



void fn_002eda7c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_005f6d10(param_2,(char *)&DAT_002edab8,&DAT_002ecad4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = fn_005f6d10(param_2,(char *)&DAT_002edab8,(char *)&DAT_002edac0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



void fn_002ed848(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_s0;
  
  uVar1 = fn_005f6d10(param_2,&DAT_002ed8d4,(char *)&DAT_002ecabc);
  *(undefined4 *)(param_1 + 0x22c) = uVar1;
  fn_005f6de0(param_2,&DAT_002ed8d4,(char *)&DAT_002ed8dc);
  *(undefined4 *)(param_1 + 0x230) = in_s0;
  uVar1 = fn_005f6d10(param_2,&DAT_002ed8d4,&DAT_002ecad4);
  *(undefined4 *)(param_1 + 0x234) = uVar1;
  fn_005f6de0(param_2,&DAT_002ed8d4,(char *)&DAT_002ed8ec);
  *(undefined4 *)(param_1 + 0x238) = in_s0;
  fn_005f6de0(param_2,&DAT_002ed8d4,(char *)&DAT_002ec698);
  *(undefined4 *)(param_1 + 0x23c) = in_s0;
  uVar1 = fn_005f6d10(param_2,&DAT_002ed8d4,(char *)&DAT_002ecb18);
  *(undefined4 *)(param_1 + 0x240) = uVar1;
  return;
}



void fn_002ecf10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_s0;
  undefined1 auStack_18 [8];
  
  fn_00128f40(auStack_18);
  uVar1 = fn_0011c1b4(DAT_00896cc8,0,0,0,0,0,0,0,5);
  iVar2 = fn_00145aac();
  if (iVar2 == 1) {
    uVar3 = fn_0012a26c(uVar1);
    uVar4 = fn_00145ac0(uVar1);
    fn_00128ee0(auStack_18,uVar4,uVar3);
    fn_0012d73c(uVar1);
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002edab8,&DAT_002ecad4);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002edab8,(char *)&DAT_002edac0);
    *(undefined4 *)(param_1 + 8) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec7dc,(char *)&DAT_002ec7cc);
    *(undefined4 *)(param_1 + 0xc) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec7dc,(char *)&DAT_002ec7e8);
    *(undefined4 *)(param_1 + 0x10) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec7dc,(char *)&DAT_002ec7f8);
    *(undefined4 *)(param_1 + 0x14) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ebb34,(char *)&DAT_002ecabc);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ebb34,&DAT_002ebb3c);
    *(undefined4 *)(param_1 + 0x1c) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ebb34,(char *)&DAT_002ec9f4);
    fn_0017fe34();
    *(undefined4 *)(param_1 + 0x20) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ebb34,(char *)&DAT_002ecadc);
    *(undefined4 *)(param_1 + 0x24) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ebb34,(char *)&DAT_002ebb4c);
    fn_0017fe34();
    *(undefined4 *)(param_1 + 0x28) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ebb34,&DAT_002ecad4);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ebb34,(char *)&DAT_002ec698);
    *(undefined4 *)(param_1 + 0x30) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ebb34,(char *)&DAT_002ecb18);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    fn_002ebb60(param_1,auStack_18);
    fn_002ebef8(param_1,auStack_18);
    fn_002ebda8(param_1,auStack_18);
    fn_002ed688(param_1,auStack_18);
    fn_002ed8fc(param_1,auStack_18);
    fn_002ec89c(param_1,auStack_18);
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ecbd8,(char *)&DAT_002ecabc);
    *(undefined4 *)(param_1 + 0x1c4) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ecbd8,(char *)&DAT_002ed8dc);
    *(undefined4 *)(param_1 + 0x1c8) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ecbd8,(char *)&DAT_002ecbe8);
    *(undefined4 *)(param_1 + 0x1cc) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ecbd8,&DAT_002ecad4);
    *(undefined4 *)(param_1 + 0x1d0) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ecbd8,(char *)&DAT_002ed8ec);
    *(undefined4 *)(param_1 + 0x1d4) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ecbd8,(char *)&DAT_002ecc00);
    *(undefined4 *)(param_1 + 0x1d8) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ecbd8,(char *)&DAT_002ec698);
    *(undefined4 *)(param_1 + 0x1dc) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ecbd8,(char *)&DAT_002ecb18);
    *(undefined4 *)(param_1 + 0x1e0) = uVar1;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec3ec,(char *)&DAT_002ecabc);
    *(undefined4 *)(param_1 + 0x1e4) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec3ec,(char *)&DAT_002ed8dc);
    *(undefined4 *)(param_1 + 0x1e8) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec3ec,&DAT_002ecad4);
    *(undefined4 *)(param_1 + 0x1ec) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec3ec,(char *)&DAT_002ec698);
    *(undefined4 *)(param_1 + 0x1f0) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec3ec,(char *)&DAT_002ecb18);
    *(undefined4 *)(param_1 + 500) = uVar1;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ecca0,(char *)&DAT_002ecabc);
    *(undefined4 *)(param_1 + 0x1f8) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ecca0,(char *)&DAT_002ecae4);
    *(undefined4 *)(param_1 + 0x1fc) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ecca0,(char *)&DAT_002ecadc);
    fn_0017fe34();
    *(undefined4 *)(param_1 + 0x200) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ecca0,(char *)&DAT_002ec698);
    *(undefined4 *)(param_1 + 0x204) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ecca0,(char *)&DAT_002ecb18);
    *(undefined4 *)(param_1 + 0x208) = uVar1;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ecca0,(char *)&DAT_002eccbc);
    *(undefined4 *)(param_1 + 0x20c) = uVar1;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec558,(char *)&DAT_002ecabc);
    *(undefined4 *)(param_1 + 0x210) = uVar1;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec558,&DAT_002ecad4);
    *(undefined4 *)(param_1 + 0x214) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec558,(char *)&DAT_002ecadc);
    *(undefined4 *)(param_1 + 0x218) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec558,(char *)&DAT_002ec568);
    *(undefined4 *)(param_1 + 0x21c) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec558,(char *)&DAT_002ecae4);
    *(undefined4 *)(param_1 + 0x220) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec558,(char *)&DAT_002ecaec);
    *(undefined4 *)(param_1 + 0x224) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec558,(char *)&DAT_002ec774);
    *(undefined4 *)(param_1 + 0x228) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,&DAT_002ed8d4,(char *)&DAT_002ecabc);
    *(undefined4 *)(param_1 + 0x22c) = uVar1;
    fn_005f6de0(auStack_18,&DAT_002ed8d4,(char *)&DAT_002ed8dc);
    *(undefined4 *)(param_1 + 0x230) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,&DAT_002ed8d4,&DAT_002ecad4);
    *(undefined4 *)(param_1 + 0x234) = uVar1;
    fn_005f6de0(auStack_18,&DAT_002ed8d4,(char *)&DAT_002ed8ec);
    *(undefined4 *)(param_1 + 0x238) = in_s0;
    fn_005f6de0(auStack_18,&DAT_002ed8d4,(char *)&DAT_002ec698);
    *(undefined4 *)(param_1 + 0x23c) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,&DAT_002ed8d4,(char *)&DAT_002ecb18);
    *(undefined4 *)(param_1 + 0x240) = uVar1;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec490,(char *)&DAT_002ecabc);
    *(undefined4 *)(param_1 + 0x244) = uVar1;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec490,&DAT_002ecad4);
    *(undefined4 *)(param_1 + 0x248) = uVar1;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec490,(char *)&DAT_002ecb18);
    *(undefined4 *)(param_1 + 0x24c) = uVar1;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec490,(char *)&DAT_002ec4a0);
    *(undefined4 *)(param_1 + 0x250) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec490,(char *)&DAT_002ecae4);
    *(undefined4 *)(param_1 + 0x254) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec490,(char *)&DAT_002ecaec);
    *(undefined4 *)(param_1 + 600) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec880,(char *)&DAT_002ecabc);
    *(undefined4 *)(param_1 + 0x25c) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec880,(char *)&DAT_002ecadc);
    *(undefined4 *)(param_1 + 0x260) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec880,&DAT_002ecad4);
    *(undefined4 *)(param_1 + 0x264) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec880,(char *)&DAT_002ec698);
    *(undefined4 *)(param_1 + 0x268) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec880,(char *)&DAT_002ecb18);
    *(undefined4 *)(param_1 + 0x26c) = uVar1;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec754,(char *)&DAT_002ecabc);
    *(undefined4 *)(param_1 + 0x270) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec754,(char *)&DAT_002ecadc);
    *(undefined4 *)(param_1 + 0x274) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec754,&DAT_002ecad4);
    *(undefined4 *)(param_1 + 0x278) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec754,(char *)&DAT_002ec698);
    *(undefined4 *)(param_1 + 0x27c) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ec754,(char *)&DAT_002ecb18);
    *(undefined4 *)(param_1 + 0x280) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec754,(char *)&DAT_002ecae4);
    *(undefined4 *)(param_1 + 0x284) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ec754,(char *)&DAT_002ec774);
    *(undefined4 *)(param_1 + 0x288) = in_s0;
    fn_002ec584(param_1,auStack_18);
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ecac8,(char *)&DAT_002ecabc);
    *(undefined4 *)(param_1 + 0x2b4) = uVar1;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ecac8,&DAT_002ecad4);
    *(undefined4 *)(param_1 + 0x2b8) = uVar1;
    fn_005f6de0(auStack_18,(char *)&DAT_002ecac8,(char *)&DAT_002ecadc);
    *(undefined4 *)(param_1 + 700) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ecac8,(char *)&DAT_002ecae4);
    *(undefined4 *)(param_1 + 0x2c0) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ecac8,(char *)&DAT_002ecaec);
    *(undefined4 *)(param_1 + 0x2c4) = in_s0;
    fn_005f6de0(auStack_18,(char *)&DAT_002ecac8,(char *)&DAT_002ecaf8);
    *(undefined4 *)(param_1 + 0x2c8) = in_s0;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ecac8,(char *)&DAT_002ecb08);
    *(undefined4 *)(param_1 + 0x2cc) = uVar1;
    uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_002ecac8,(char *)&DAT_002ecb18);
    *(undefined4 *)(param_1 + 0x2d0) = uVar1;
    fn_00128fc4(auStack_18);
    return;
  }
  fn_0012d73c();
  fn_00128fc4(auStack_18);
  return;
}



void fn_002ed8fc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_s0;
  
  uVar1 = fn_005f6d10(param_2,&DAT_002eda04,(char *)&DAT_002ecabc);
  *(undefined4 *)(param_1 + 0x164) = uVar1;
  uVar1 = fn_005f6d10(param_2,&DAT_002eda04,&DAT_002ecad4);
  *(undefined4 *)(param_1 + 0x168) = uVar1;
  uVar1 = fn_005f6d10(param_2,&DAT_002eda04,(char *)&DAT_002eda10);
  *(undefined4 *)(param_1 + 0x16c) = uVar1;
  fn_005f6de0(param_2,&DAT_002eda04,(char *)&DAT_002eda20);
  *(undefined4 *)(param_1 + 0x170) = in_s0;
  fn_005f6de0(param_2,&DAT_002eda04,(char *)&DAT_002eda2c);
  *(undefined4 *)(param_1 + 0x174) = in_s0;
  fn_005f6de0(param_2,&DAT_002eda04,(char *)&DAT_002ecc00);
  *(undefined4 *)(param_1 + 0x178) = in_s0;
  fn_005f6de0(param_2,&DAT_002eda04,(char *)&DAT_002ec774);
  *(undefined4 *)(param_1 + 0x17c) = in_s0;
  fn_005f6de0(param_2,&DAT_002eda04,(char *)&DAT_002ecaec);
  *(undefined4 *)(param_1 + 0x180) = in_s0;
  fn_005f6de0(param_2,&DAT_002eda04,(char *)&DAT_002eda44);
  fn_0017fe34();
  *(undefined4 *)(param_1 + 0x184) = in_s0;
  fn_005f6de0(param_2,&DAT_002eda04,(char *)&DAT_002eda50);
  *(undefined4 *)(param_1 + 0x188) = in_s0;
  fn_005f6de0(param_2,&DAT_002eda04,(char *)&DAT_002eda64);
  *(undefined4 *)(param_1 + 0x18c) = in_s0;
  uVar1 = fn_005f6d10(param_2,&DAT_002eda04,(char *)&DAT_002ecb18);
  *(undefined4 *)(param_1 + 400) = uVar1;
  return;
}



void fn_002ed688(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_s0;
  
  uVar1 = fn_005f6d10(param_2,&DAT_002ed7ac,(char *)&DAT_002ecabc);
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  uVar1 = fn_005f6d10(param_2,&DAT_002ed7ac,&DAT_002ecad4);
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  fn_005f6de0(param_2,&DAT_002ed7ac,(char *)&DAT_002eda20);
  *(undefined4 *)(param_1 + 0x138) = in_s0;
  fn_005f6de0(param_2,&DAT_002ed7ac,(char *)&DAT_002eda2c);
  *(undefined4 *)(param_1 + 0x13c) = in_s0;
  uVar1 = fn_005f6d10(param_2,&DAT_002ed7ac,(char *)&DAT_002ed7c0);
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  fn_005f6de0(param_2,&DAT_002ed7ac,(char *)&DAT_002ed7d0);
  fn_0017fe34();
  *(undefined4 *)(param_1 + 0x144) = in_s0;
  fn_005f6de0(param_2,&DAT_002ed7ac,(char *)&DAT_002ecadc);
  *(undefined4 *)(param_1 + 0x148) = in_s0;
  fn_005f6de0(param_2,&DAT_002ed7ac,(char *)&DAT_002ed7e0);
  fn_0017fe34();
  *(undefined4 *)(param_1 + 0x14c) = in_s0;
  fn_005f6de0(param_2,&DAT_002ed7ac,(char *)&DAT_002ed7f0);
  *(undefined4 *)(param_1 + 0x150) = in_s0;
  uVar1 = fn_005f6d10(param_2,&DAT_002ed7ac,(char *)&DAT_002ed800);
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  fn_005f6de0(param_2,&DAT_002ed7ac,(char *)&DAT_002ed814);
  fn_0017fe34();
  *(undefined4 *)(param_1 + 0x158) = in_s0;
  fn_005f6de0(param_2,&DAT_002ed7ac,(char *)&DAT_002ed824);
  *(undefined4 *)(param_1 + 0x15c) = in_s0;
  uVar1 = fn_005f6d10(param_2,&DAT_002ed7ac,(char *)&DAT_002ed834);
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  return;
}


