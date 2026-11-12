#include "00159920_00159df4.h"



void fn_00159df4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  fn_00159e14(1);
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x39d) == '\0') {
    return;
  }
  iVar1 = fn_00182988(DAT_008977e4);
  fn_0016dc88(iVar1 + 0x244,0,param_3);
  return;
}



void fn_00159dc4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0017b230(*(undefined4 *)(iVar1 + 0x54),param_2);
  return;
}



void fn_00159d9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  int iVar2;
  undefined8 in_d8;
  
  iVar1 = fn_00174858(DAT_008977e4);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x4c) + 0x18);
  iVar2 = 0;
  do {
    if (*(char *)(iVar1 + iVar2 + 0xac) != '\0') {
      *(undefined1 *)(iVar1 + iVar2 + 0xac) = 0;
      fn_00190cdc(*(undefined4 *)(iVar1 + (iVar2 * 2 + 2U & 0xff) * 4 + 0x68),0,param_3,param_4,
                   in_d8,unaff_r4);
      fn_00190e00(*(undefined4 *)(iVar1 + (iVar2 * 2 + 3U & 0xff) * 4 + 0x68));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}



void fn_00159d74(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0017f45c(*(undefined4 *)(iVar1 + 0x48),param_1);
  return;
}



byte fn_00159d30(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  iVar2 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar2 + 0x39d) == '\0') {
    return 1;
  }
  iVar2 = fn_00174858(DAT_008977e4);
  iVar2 = *(int *)(*(int *)(iVar2 + 0x4c) + 0x1c);
  bVar4 = 1;
  iVar3 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar3 + 0x39d) != '\0') {
    iVar3 = 0;
    do {
      bVar1 = fn_0017f170(*(undefined4 *)(iVar2 + iVar3 * 4 + 0x70));
      iVar3 = iVar3 + 1;
      bVar4 = bVar4 & bVar1;
    } while (iVar3 < 2);
    bVar4 = bVar4 & *(float *)(*(int *)(iVar2 + 100) + 0x24) == 0.0;
  }
  return bVar4;
}



undefined4 fn_00159d14(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  return *(undefined4 *)(iVar1 + 0x94);
}



void fn_00159cbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0016e470(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x18),param_1,param_2,param_3,param_4);
  iVar1 = fn_00174858(DAT_008977e4);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x4c) + 0x18);
  iVar2 = 0;
  do {
    if (*(char *)(iVar1 + iVar2 + 0xac) != '\0') {
      fn_00190cdc(*(undefined4 *)(iVar1 + (iVar2 * 2 + 3U & 0xff) * 4 + 0x68),0);
      fn_00190e00(*(undefined4 *)(iVar1 + (iVar2 * 2 + 2U & 0xff) * 4 + 0x68));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}



void fn_00159c8c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0017b7e8(*(undefined4 *)(iVar1 + 0x54),param_2);
  return;
}



void fn_00159b18(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  char local_40 [12];
  char *pcStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (7 < (int)*param_1 - 0x10U) {
    return;
  }
  cVar1 = *param_1;
  pcStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  iVar2 = fn_00174828(DAT_008977e4);
  uVar5 = 1;
  iVar2 = iVar2 + cVar1 * 0x418;
  do {
    iVar6 = iVar2 + -0x4080 + uVar5;
    cVar1 = *(char *)(iVar6 + 0x5b);
    iVar3 = fn_001667c8(local_28,uVar5);
    if (iVar3 == 0) {
      iVar3 = fn_001667c8(local_2c,uVar5);
      if (iVar3 != 0) {
        if (uVar5 == 0xc) {
          if ('\0' < *(char *)(param_2 + 0xc)) {
            fn_00180278(iVar2 + -0x4080,-(int)*(short *)(iVar2 + -0x4064));
          }
        }
        else {
          cVar1 = *(char *)(param_2 + uVar5) + cVar1;
        }
        local_40[0] = cVar1;
        local_40[4] = fn_00182944();
        iVar3 = fn_00182924((int)(short)uVar5);
        local_40[8] = (char)iVar3;
        if (iVar3 < local_40[4]) {
                    /* WARNING: Subroutine does not return */
          fn_00146590();
        }
        if ((int)local_40[0] < (int)local_40[4]) {
          pcVar4 = local_40 + 4;
        }
        else {
          pcVar4 = local_40;
        }
        if (iVar3 < *pcVar4) {
          pcVar4 = local_40 + 8;
        }
        *(char *)(iVar6 + 0x5b) = *pcVar4;
      }
    }
    else {
      *(undefined1 *)(iVar2 + -0x4025 + (uVar5 & 0xff)) = 0;
      *(undefined1 *)(iVar2 + -0x4025 + (uVar5 & 0xff) + 0x61) = 0;
    }
    uVar5 = uVar5 + 1;
    if (0x60 < (int)uVar5) {
      iVar3 = fn_00174858(DAT_008977e4);
      fn_0017b278(*(undefined4 *)(iVar3 + 0x54),param_1,iVar2 + -0x4025,param_5);
      return;
    }
  } while( true );
}



void fn_00159ac8(void)

{
  int iVar1;
  
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x39d) == '\0') {
    return;
  }
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0016e750(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x1c));
  iVar1 = fn_00182988(DAT_008977e4);
  fn_0016dc9c(iVar1 + 0x244);
  return;
}



void fn_00159a68(char *param_1,short param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  cVar1 = *param_1;
  iVar2 = fn_00174828(DAT_008977e4);
  fn_00176e18(iVar2 + cVar1 * 0x418 + -0x4080,(int)-param_2);
  iVar2 = fn_00174858(DAT_008977e4);
  iVar3 = *(int *)(iVar2 + 0x54);
  iVar4 = *(int *)(iVar3 + (char)(*param_1 + -0x10) * 4 + 4);
  iVar2 = (int)*(short *)(iVar4 + 0x90);
  iVar4 = (int)(short)(*(short *)(iVar4 + 0x200) - param_2);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar4 < iVar2) {
    iVar2 = iVar4;
  }
  iVar5 = fn_00174828(DAT_008977e4);
  iVar5 = iVar5 + *param_1 * 0x418;
  if (0 < *(short *)(iVar5 + -0x4080)) {
    cVar1 = *(char *)(iVar5 + -0x4019);
    bVar6 = cVar1 == '\0';
    if (bVar6) {
      cVar1 = *(char *)(iVar5 + -0x400a);
    }
    bVar7 = bVar6 && cVar1 == '\0';
    if (bVar6 && cVar1 == '\0') {
      bVar7 = *(char *)(iVar5 + -0x4018) == '\0';
    }
    if ((bVar7) && (iVar5 = fn_00183704(iVar5 + -0x3c7a,4), iVar5 == 0)) {
      fn_0017b9a8(*(undefined4 *)(iVar3 + (char)(*param_1 + -0x10) * 4 + 4),iVar4);
      *(short *)(*(int *)(iVar3 + (char)(*param_1 + -0x10) * 4 + 4) + 0x90) = (short)iVar2;
    }
  }
  iVar2 = *(int *)(iVar3 + (char)(*param_1 + -0x10) * 4 + 4);
  fn_00190cdc(*(undefined4 *)(iVar2 + 0x188),0);
  fn_00190cdc(*(undefined4 *)(iVar2 + 400),0);
  fn_00190e00(*(undefined4 *)(iVar2 + 0x18c));
  return;
}



void fn_001599b0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  cVar1 = *param_1;
  iVar2 = fn_00174828(DAT_008977e4);
  iVar2 = iVar2 + cVar1 * 0x418;
  iVar5 = iVar2 + -0x4080;
  fn_001743e8(iVar5);
  iVar3 = fn_00174858(DAT_008977e4);
  fn_0017b278(*(undefined4 *)(iVar3 + 0x54),param_1,iVar2 + -0x4025,0x61);
  iVar2 = fn_00174858(DAT_008977e4);
  fn_0017b888(*(undefined4 *)(iVar2 + 0x54),param_1);
  uVar4 = fn_00176dc0(iVar5);
  iVar2 = fn_00174858(DAT_008977e4);
  fn_0016e1bc(*(undefined4 *)(iVar2 + 0x54),param_1,uVar4);
  uVar4 = fn_00176e70(iVar5);
  iVar2 = fn_00174858(DAT_008977e4);
  iVar2 = *(int *)(iVar2 + 0x54);
  fn_0017b9a8(*(undefined4 *)(iVar2 + (char)(*param_1 + -0x10) * 4 + 4),uVar4);
  iVar2 = *(int *)(iVar2 + (char)(*param_1 + -0x10) * 4 + 4);
  if (*(short *)(iVar2 + 0x200) < *(short *)(iVar2 + 0x90)) {
    *(short *)(iVar2 + 0x90) = *(short *)(iVar2 + 0x200);
    return;
  }
  return;
}



void fn_00159980(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0017b864(*(undefined4 *)(iVar1 + 0x54),param_1,param_2);
  return;
}



void fn_00159920(char *param_1,short param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  cVar1 = *param_1;
  iVar2 = fn_00174828(DAT_008977e4);
  fn_0017434c(iVar2 + cVar1 * 0x418 + -0x4080,(int)-param_2);
  iVar2 = fn_00174858(DAT_008977e4);
  iVar2 = *(int *)(iVar2 + 0x54);
  iVar3 = *(int *)(iVar2 + (char)(*param_1 + -0x10) * 4 + 4);
  sVar4 = *(short *)(iVar3 + 0x8c);
  param_2 = *(short *)(iVar3 + 0x1fe) - param_2;
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_2 < sVar4) {
    sVar4 = param_2;
  }
  fn_0017b99c();
  *(short *)(*(int *)(iVar2 + (char)(*param_1 + -0x10) * 4 + 4) + 0x8c) = sVar4;
  iVar2 = *(int *)(iVar2 + (char)(*param_1 + -0x10) * 4 + 4);
  fn_00190cdc(*(undefined4 *)(iVar2 + 0x188),0);
  fn_00190cdc(*(undefined4 *)(iVar2 + 400),0);
  fn_00190e00(*(undefined4 *)(iVar2 + 0x18c));
  return;
}


