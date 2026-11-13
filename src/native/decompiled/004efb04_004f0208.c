#include "004efb04_004f0208.h"



void fn_004f0208(void)

{
  if (DAT_008c0668 != 0) {
    fn_004ecfd0();
    DAT_008c0668 = 0;
  }
  return;
}



void fn_004f0104(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_38 [36];
  
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)();
    (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,param_1 + 1,0x40);
    (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,param_3,param_4);
    (**(code **)(*(int *)*param_1 + 0x10))((int *)*param_1,auStack_38);
    (*(code *)**(undefined4 **)*param_1)();
    (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,param_1 + 0x11,0x40);
    piVar2 = (int *)*param_1;
    uVar1 = (**(code **)(*piVar2 + 8))(piVar2);
    (**(code **)(*piVar2 + 4))(piVar2,auStack_38,uVar1);
    (**(code **)(*(int *)*param_1 + 0x10))((int *)*param_1,param_2);
  }
  return;
}



undefined4 * fn_004effdc(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  fn_004f01f4(param_1 + 2);
  return param_1;
}



void fn_004effa4(undefined4 *param_1)

{
  *param_1 = &DAT_00856d58;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



void fn_004efe44(int *param_1,int param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 6;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  iVar7 = DAT_008bf49c + 0x3c;
  fn_004edc70(iVar7);
  uVar3 = (**(code **)(*param_1 + 0xc))(param_1);
  fn_004edc34(iVar7);
  uVar8 = uVar3 & 0xff;
  param_1[2] = param_1[2] + 1;
  switch(uVar8) {
  case 0:
  case 6:
  case 7:
    fn_004f01f4(param_1 + 4);
    if (uVar8 == 6) {
      param_2 = 0;
    }
    else if (uVar8 == 7) {
      param_2 = 1;
    }
    fn_004f1470(DAT_008bf49c,param_1,param_2);
    if (param_2 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 5;
    }
    break;
  case 1:
  case 2:
    uVar2 = 8;
    break;
  case 3:
    uVar2 = 7;
    break;
  case 4:
    fn_004f01f4(param_1 + 4);
    puVar4 = (uint *)fn_004f0ce8();
    uVar5 = puVar4[1];
    lVar1 = (ulonglong)(uVar3 >> 0x10) * (ulonglong)*puVar4;
    uVar8 = (uint)lVar1;
    uVar6 = param_1[4];
    param_1[4] = uVar8 + uVar6;
    param_1[5] = uVar5 * (uVar3 >> 0x10) + (int)((ulonglong)lVar1 >> 0x20) + param_1[5] +
                 (uint)CARRY4(uVar8,uVar6);
    fn_004f1470(DAT_008bf49c,param_1,param_2);
    goto joined_r0x004eff8c;
  case 5:
    fn_004f01f4(param_1 + 4);
    fn_004f0aa0(DAT_008bf49c,param_1);
joined_r0x004eff8c:
    if (param_2 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 4;
    }
    break;
  default:
    return;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}



void fn_004efdd4(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = DAT_008bf49c + 0x3c;
  fn_004edc34(iVar2);
  if (*(char *)(param_1 + 4) != '\a') {
    fn_004edc70(iVar2);
    return;
  }
  if (param_2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 5;
  }
  *(undefined1 *)(param_1 + 4) = uVar1;
  fn_004f01f4(param_1 + 0x10);
  fn_004f1470(DAT_008bf49c,param_1,param_2);
  fn_004edc70(iVar2);
  return;
}



void fn_004efd64(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_008bf49c + 0x3c;
  fn_004edc34(iVar1);
  switch(*(undefined1 *)(param_1 + 4)) {
  case 1:
  case 2:
    fn_004f1514(DAT_008bf49c,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  fn_004edc70(iVar1);
  return;
}



void fn_004efcf4(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = DAT_008bf49c + 0x3c;
  fn_004edc34(iVar2);
  if (*(char *)(param_1 + 4) != '\0') {
    fn_004edc70(iVar2);
    return;
  }
  if (param_2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 5;
  }
  *(undefined1 *)(param_1 + 4) = uVar1;
  fn_004f01f4(param_1 + 0x10);
  fn_004f1470(DAT_008bf49c,param_1,param_2);
  fn_004edc70(iVar2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x004efd34) */

void fn_004efce8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_008bf49c + 0x3c;
  fn_004edc34(iVar1);
  if (*(char *)(param_1 + 0x344) == '\0') {
    *(undefined1 *)(param_1 + 0x344) = 5;
    fn_004f01f4(param_1 + 0x350);
    fn_004f1470(DAT_008bf49c,param_1 + 0x340,1);
    fn_004edc70(iVar1);
    return;
  }
  fn_004edc70(iVar1);
  return;
}



void fn_004efb4c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3c9) = 0xff;
  *(undefined1 *)(param_1 + 0x3ca) = 0xff;
  *(undefined1 *)(param_1 + 0x3cb) = 0xff;
  *(undefined1 *)(param_1 + 0x3cc) = 0xff;
  *(undefined1 *)(param_1 + 0x3cd) = 0xff;
  *(undefined1 *)(param_1 + 0x3d8) = 0xff;
  iVar1 = 0;
  iVar3 = 0x10;
  do {
    iVar2 = param_1 + iVar1 * 4;
    iVar4 = param_1 + iVar1 * 8;
    *(undefined4 *)(iVar2 + 0x20) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x60) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0xa0) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0xa4) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x120) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x160) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x1a0) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x1a4) = 0xffffffff;
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + 1;
  } while (iVar3 != 0);
  iVar1 = 0;
  iVar3 = 0x17;
  do {
    iVar2 = param_1 + iVar1 * 2;
    *(undefined4 *)(param_1 + iVar1 * 4 + 0x220) = 0xffffffff;
    *(undefined1 *)(param_1 + iVar1 + 0x27c) = 0xff;
    *(undefined2 *)(iVar2 + 0x294) = 0xffff;
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + 1;
    *(undefined2 *)(iVar2 + 0x2c2) = 0xffff;
  } while (iVar3 != 0);
  *(undefined1 *)(param_1 + 0x2f0) = 0xff;
  *(undefined1 *)(param_1 + 0x2f1) = 0xff;
  *(undefined2 *)(param_1 + 0x2f2) = 0xffff;
  *(undefined4 *)(param_1 + 0x2f4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x2f8) = 0xffff;
  *(undefined4 *)(param_1 + 0x2fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x308) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x310) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x314) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x318) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x31c) = 0xffffffff;
  *(undefined4 *)(param_1 + 800) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x324) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x328) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x32c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x330) = 0xff;
  *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x334) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x338) = 0xff;
  *(undefined1 *)(param_1 + 0x339) = 0xff;
  *(undefined4 *)(param_1 + 0x33c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x344) = 0xffff;
  *(undefined2 *)(param_1 + 0x346) = 0xffff;
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x34c) = 0xff;
  *(undefined1 *)(param_1 + 0x34d) = 0xff;
  *(undefined1 *)(param_1 + 0x3d9) = 0xff;
  *(undefined1 *)(param_1 + 0x3c8) = 0xff;
  *(undefined4 *)(param_1 + 0x3d0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3d4) = 0xff;
  *(undefined1 *)(param_1 + 0x3d5) = 0xff;
  *(undefined1 *)(param_1 + 0x3d6) = 0xff;
  *(undefined1 *)(param_1 + 0x3d7) = 0xff;
  *(undefined1 *)(param_1 + 0x34e) = 0xff;
  *(undefined1 *)(param_1 + 0x34f) = 0xff;
  *(undefined1 *)(param_1 + 0x350) = 0xff;
  *(undefined1 *)(param_1 + 0x351) = 0xff;
  *(undefined4 *)(param_1 + 0x354) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x358) = 0xff;
  *(undefined4 *)(param_1 + 0x35c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x360) = 0xff;
  *(undefined1 *)(param_1 + 0x361) = 0xff;
  *(undefined4 *)(param_1 + 0x364) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x36c) = 0xffffffff;
  fn_00158f40(param_1 + 0x370,5,0xff);
  *(undefined4 *)(param_1 + 0x378) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x37c) = 0xffff;
  *(undefined4 *)(param_1 + 0x380) = 0xffffffff;
  *(undefined4 *)(param_1 + 900) = 0xffffffff;
  return;
}



void fn_004efb04(undefined1 *param_1)

{
  undefined2 uVar1;
  
  fn_00158f40(param_1,0x3f0,0xff);
  *param_1 = 0xc;
  param_1[1] = 1;
  uVar1 = fn_004efb40();
  *(undefined2 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 0x3ec) = 0x5069614d;
  return;
}


