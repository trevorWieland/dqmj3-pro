#include "001b7fd4_001b85e0.h"



void fn_001b85a0(void)

{
  return;
}



int fn_001b84b8(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_138 [264];
  undefined1 auStack_30 [24];
  
  iVar4 = 0;
  if ((((param_1 < 100) && (iVar1 = fn_00191f08(), iVar2 = DAT_008bf51c, iVar1 != 0)) &&
      (DAT_008bf51c != 0)) &&
     ((iVar1 = fn_00184c20(1), iVar1 == 0 && (iVar1 = fn_00184c20(0), iVar1 == 0)))) {
    iVar2 = iVar2 + param_1 * 0x5c;
    iVar1 = fn_001aff7c(iVar2 + 0x14);
    if (iVar1 == 0) {
      fn_001b1548(auStack_138,iVar2 + 8,1,iVar2 + 0x50);
      iVar1 = fn_001b1e90(auStack_138,1);
      if ((iVar1 != 0) && (iVar1 = fn_001b00bc(auStack_30), iVar1 == 0)) {
        if (param_2 != 0) {
          uVar3 = fn_001aff30(auStack_30);
          bVar5 = uVar3 == 0;
          if (bVar5) {
            uVar3 = (uint)DAT_008bf50c;
          }
          if (bVar5 && uVar3 == 0) {
            return 0;
          }
        }
        iVar4 = iVar2 + 8;
      }
    }
  }
  return iVar4;
}



undefined4 fn_001b8498(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00742670(param_1,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_001b8484(undefined4 param_1)

{
  DAT_008bf6c8 = param_1;
  return;
}



undefined8 fn_001b8438(undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_2 != 0) {
    fn_00740550(param_2);
    pcVar1 = "%s() returns `%s\'\n";
  }
  return CONCAT44(pcVar1,param_2);
}



void fn_001b83fc(void)

{
  if (DAT_008bf760 != 0) {
    fn_007407d4();
  }
  if (DAT_008bf764 != 0) {
    fn_007407d4();
  }
  if (DAT_008bf768 == 0) {
    return;
  }
  fn_007407d4();
  return;
}



void fn_001b8338(int *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_008bf51c;
  iVar1 = fn_001851bc();
  if (iVar1 == 0xb) {
    iVar1 = fn_00192114();
    *(undefined4 *)(iVar1 + 200) = 5;
  }
  iVar1 = fn_001851bc();
  if (iVar1 == 0) {
    *(undefined1 *)(iVar2 + 0xe4c0) = 1;
  }
  if (*(int *)(iVar2 + 0xe4e0) != 1) {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0xe4d8);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x001b83b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_1[2]);
    return;
  }
  iVar2 = *(int *)(iVar2 + 0xe4d8);
  param_1[9] = 0;
  param_1[10] = iVar2;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0x19d818;
  while (param_1[9] == 0) {
    param_1[9] = 1;
    iVar2 = fn_00192114();
    *(undefined4 *)(iVar2 + 0xd0) = *(undefined4 *)(iVar2 + 200);
    *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(iVar2 + 0xcc);
    if (*(code **)(*param_1 + 0x14) == (code *)0x0) {
      iVar2 = 3;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x14))();
    }
    param_1[1] = iVar2;
    if (iVar2 == 10) {
      return;
    }
  }
  if (param_1[9] != 1) {
    return;
  }
  param_1[9] = 2;
  if (param_1[2] == 0) {
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    iVar2 = fn_00192114();
    param_1[1] = *(int *)(iVar2 + 0xd0);
    param_1[2] = *(int *)(iVar2 + 0xd4);
  }
  iVar2 = param_1[1];
  if (iVar2 == 10) {
    return;
  }
  iVar3 = param_1[2];
  iVar1 = fn_00192114();
  *(undefined1 *)(iVar1 + 0xc0) = 0;
  iVar1 = fn_00192114();
  if (*(int *)(iVar1 + 200) == 0 || *(int *)(iVar1 + 200) == 10) {
    iVar1 = fn_00192114();
    *(int *)(iVar1 + 200) = iVar2;
    iVar2 = fn_00192114();
    *(int *)(iVar2 + 0xcc) = iVar3;
  }
  if ((code *)param_1[10] == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0019d918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[10])(param_1,param_1[2]);
  return;
}



undefined4 fn_001b831c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00741850(param_1,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_001b80b8(void)

{
  undefined4 uVar1;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  
  fn_00117984();
  fn_0010fa20();
  uVar1 = fn_006eb278();
  uVar1 = fn_005e19a4(uVar1,0);
  fn_005eff40(uVar1,1);
  uVar1 = fn_005eff2c(uVar1,0);
  local_18 = 0xff;
  local_17 = 0xff;
  local_16 = 0xff;
  local_15 = 0xff;
  fn_005e51b0(uVar1,&local_18);
  local_18 = 0x40;
  local_17 = 0x40;
  local_16 = 0x40;
  local_15 = 0xff;
  fn_005e516c(uVar1,&local_18);
  local_18 = 0xff;
  local_17 = 0xff;
  local_16 = 0xff;
  local_15 = 0xff;
  fn_005e5214(uVar1,&local_18);
  local_14 = 0xff;
  local_13 = 0xff;
  local_12 = 0xff;
  local_11 = 0xff;
  fn_005e5258(uVar1,&local_14);
  fn_005e5734(uVar1,1);
  return;
}



void fn_001b7fd4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [72];
  
  VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  uVar2 = 0;
  VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  fn_005254cc(auStack_50);
  fn_001bd368(auStack_50);
  if (((DAT_008c6300 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6300), iVar1 != 0)) {
    DAT_008f9e38 = 0x3f800000;
    DAT_008f9e4c = 0x3f800000;
    DAT_008f9e60 = 0x3f800000;
    DAT_008f9e3c = uVar2;
    DAT_008f9e40 = uVar2;
    DAT_008f9e44 = uVar2;
    DAT_008f9e48 = uVar2;
    DAT_008f9e50 = uVar2;
    DAT_008f9e54 = uVar2;
    DAT_008f9e58 = uVar2;
    DAT_008f9e5c = uVar2;
    DAT_008f9e64 = uVar2;
  }
  fn_001781f0(auStack_80,&DAT_008f9e38);
  fn_001b85e0(auStack_80,auStack_80,1);
  return;
}



void fn_001b85e0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  fn_001bab44(DAT_008e9964,param_1,DAT_008e994c);
  if ((param_2 == (undefined4 *)0x0) || (DAT_008e9968 == DAT_008e9964)) {
    return;
  }
  if (param_3 != 0) {
    fn_001bab44(DAT_008e9968,param_2,DAT_008e994c);
    return;
  }
  if (DAT_008e994c == '\0') {
    fn_0072f2e8(DAT_008e9944,3);
  }
  else {
    local_40 = param_2[3];
    local_3c = param_2[2];
    local_38 = param_2[1];
    local_34 = *param_2;
    local_30 = param_2[7];
    local_2c = param_2[6];
    local_28 = param_2[5];
    local_24 = param_2[4];
    local_20 = param_2[0xb];
    local_1c = param_2[10];
    local_18 = param_2[9];
    local_14 = param_2[8];
    fn_0072f2e8(DAT_008e9944,3,&local_40);
  }
  fn_00146578();
  return;
}


