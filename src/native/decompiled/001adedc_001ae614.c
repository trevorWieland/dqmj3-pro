#include "001adedc_001ae614.h"



undefined4 fn_001ae614(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + param_2 * 4 + 0x70) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_001ae500(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((param_2 != 0 && param_3 != 0) || (param_2 == 0 && param_3 == 0)) && (param_1 != 0)) {
    fn_001afe98(2);
    iVar1 = fn_00191f08();
    if (iVar1 != 0) {
      return;
    }
    if (param_2 == 0) {
      uVar2 = fn_001bdd60(0);
    }
    else {
      uVar2 = fn_001ae310(param_4);
    }
    fn_001bfd08(param_1,uVar2);
    iVar1 = fn_00192114();
    *(char *)(iVar1 + 0xc1) = (char)param_4;
    if (param_2 != 0) {
      iVar3 = fn_00191f08();
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = fn_00192114();
        iVar1 = iVar1 + 4;
      }
      *(undefined1 *)(iVar1 + 0xa8) = 1;
      *(int *)(iVar1 + 0xa0) = param_3;
      *(int *)(iVar1 + 0xa4) = param_2;
    }
    iVar1 = fn_001af038(fn_001b8178);
    iVar3 = iVar1;
    if ((iVar1 == 4 || iVar1 == 5) || iVar1 == 0xb) {
      iVar3 = 0;
    }
    if ((iVar1 != 4 && iVar1 != 5) && iVar1 != 0xb) {
      if (iVar3 == 0) {
        return;
      }
      if (iVar3 == 10) goto LAB_001ae604;
      if (iVar3 == 9) {
        return;
      }
      fn_00169f4c();
    }
    iVar1 = iVar3;
    if (iVar3 == 10) {
LAB_001ae604:
      fn_0018501c(iVar1);
      return;
    }
  }
  return;
}



undefined4 fn_001ae478(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = 2;
  if ((param_1 != (undefined4 *)0x0) && (param_2 - 1U < 0x80)) {
    iVar2 = fn_00191f08(2);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      fn_00158f6c(param_1,param_2 * 0x70 + 0x18);
      if (DAT_008bf50e == '\0') {
        uVar3 = 0x42504643;
      }
      else {
        uVar3 = 0x4e504643;
      }
      uVar1 = 0;
      param_1[1] = 0;
      *param_1 = uVar3;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      *(undefined2 *)((int)param_1 + 0x16) = 0;
      *(short *)(param_1 + 5) = (short)param_2;
    }
  }
  return uVar1;
}



undefined4 fn_001ae3f8(undefined4 *param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if ((((param_2 != 0 && param_1 != (undefined4 *)0x0) && param_3 < param_4) && (param_4 - 2 < 0x7f)
      ) && ((int)((param_4 - 1) * param_5) < 0x81)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    *(char *)param_1 = (char)param_5;
    *(char *)((int)param_1 + 1) = (char)param_4;
    *(short *)((int)param_1 + 2) = (short)param_3;
    uVar1 = 0;
    param_1[9] = param_2;
  }
  return uVar1;
}



int fn_001ae364(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_150 [308];
  
  iVar1 = fn_001b0b6c(auStack_150);
  if (iVar1 == 0) {
    iVar2 = fn_00178410();
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = fn_001b0ee4(auStack_150);
    fn_001af938(param_1,auStack_150,param_5,param_6,param_7,param_8,param_9);
    if (((iVar2 == 0) && (param_2 != 0)) && (param_2 != 2)) {
      fn_001aed7c(auStack_150);
    }
  }
  return iVar1;
}



/* WARNING: Removing unreachable block (ram,0x001ae340) */

int fn_001ae310(int param_1)

{
  int iVar1;
  
  if (DAT_008bf5f4 == '\0') {
    if (param_1 == 0) {
      iVar1 = 0x80;
    }
    else {
      iVar1 = 0x100;
    }
  }
  else if (param_1 == 0) {
    iVar1 = 0x200;
  }
  else {
    iVar1 = 0x400;
  }
  return iVar1 * iVar1 * 3 + 0x400e0;
}



void fn_001ae2cc(undefined4 *param_1)

{
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  param_1[3] = in_s0;
  param_1[7] = in_s1;
  param_1[0xb] = in_s2;
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  return;
}



undefined4 fn_001ae224(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = fn_00191f08();
  if (iVar1 == 0) {
    return 1;
  }
  if (param_2 == 0) {
    if (99 < param_3) {
      return 2;
    }
    iVar1 = fn_001b84b8(param_3,1);
  }
  else {
    if (param_2 != 2) {
      return 8;
    }
    if (5 < param_3) {
      return 2;
    }
    iVar1 = fn_001bf140(&DAT_008e970c,param_3);
  }
  if (iVar1 == 0) {
    return 8;
  }
  fn_00185098(param_1,iVar1,1,iVar1 + 0x48);
  return 0;
}



void fn_001ae1e8(undefined4 *param_1)

{
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  *param_1 = in_s0;
  param_1[5] = in_s1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = in_s2;
  param_1[0xb] = 0;
  return;
}



void fn_001ae0f0(float *param_1,int param_2)

{
  float in_s0;
  float fVar1;
  
  fVar1 = in_s0;
  fn_006f9fb0();
  fn_006faec0();
  if (param_2 == 0x78) {
    param_1[9] = fVar1;
    param_1[5] = in_s0;
    param_1[10] = in_s0;
    *param_1 = 1.0;
    param_1[6] = -fVar1;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 0.0;
  }
  else {
    if (param_2 != 0x79) {
      if (param_2 == 0x7a) {
        param_1[4] = fVar1;
        *param_1 = in_s0;
        param_1[5] = in_s0;
        param_1[1] = -fVar1;
        param_1[2] = 0.0;
        param_1[3] = 0.0;
        param_1[6] = 0.0;
        param_1[7] = 0.0;
        param_1[8] = 0.0;
        param_1[9] = 0.0;
        param_1[10] = 1.0;
        param_1[0xb] = 0.0;
      }
      return;
    }
    *param_1 = in_s0;
    param_1[10] = in_s0;
    param_1[8] = -fVar1;
    param_1[1] = 0.0;
    param_1[2] = fVar1;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 1.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[9] = 0.0;
  }
  param_1[0xb] = 0.0;
  return;
}



int fn_001adf30(int param_1)

{
  return param_1 * 0x70 + 0x18;
}



int fn_001adf18(int param_1,int param_2)

{
  return (param_2 * 0x60 + 0x18) * (param_1 + -1);
}



int fn_001adef4(void)

{
  int iVar1;
  
  iVar1 = fn_001af8ec();
  return (iVar1 * 0x34 + 0x1fU & 0xffffffe0) + 0x780;
}



undefined4 fn_001adedc(int param_1)

{
  if (0xb < param_1) {
    param_1 = 0xb;
  }
  return *(undefined4 *)(&DAT_007e1390 + param_1 * 4);
}


