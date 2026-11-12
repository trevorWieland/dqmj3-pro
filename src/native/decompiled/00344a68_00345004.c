#include "00344a68_00345004.h"



undefined4 fn_00345004(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar5 = 0;
  uVar6 = *(undefined4 *)(DAT_00897804 + 0x28);
  iVar1 = fn_006b2a40(uVar6);
  if (0 < iVar1) {
    do {
      uVar2 = fn_006b2948(uVar6,iVar5);
      uVar3 = fn_006b2a74(uVar6,uVar2);
      if (*(char *)(uVar3 + 4) == '\x03') {
        uVar4 = (uint)*(byte *)(uVar3 + 8);
        bVar7 = uVar4 != param_1;
        if (bVar7) {
          uVar4 = (uint)*(byte *)(uVar3 + 9);
        }
        if (bVar7 && uVar4 != param_1) {
          uVar3 = (uint)*(byte *)(uVar3 + 10);
        }
        if ((!bVar7 || uVar4 == param_1) || uVar3 == param_1) {
          return 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = fn_006b2a40(uVar6);
    } while (iVar5 < iVar1);
  }
  return 0;
}



int fn_00344f8c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(DAT_00897804 + 0x28);
  fn_00228e40(uVar6);
  iVar5 = 0;
  iVar1 = fn_006b2a40(uVar6);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_006b2948(uVar6,iVar4);
      iVar3 = fn_006b2a74(uVar6,uVar2);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 4) == '\x03')) {
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar5;
}



void fn_00344ef0(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x20))(param_1,1);
  uVar1 = fn_0012162c(*(undefined4 *)(DAT_00897804 + 0x28));
  if (param_2 == 0) {
    fn_003472ac(param_1,param_3,uVar1);
  }
  else {
    uVar2 = fn_006b2984(*(undefined4 *)(DAT_00897804 + 0x28));
    fn_003472ac(param_1,uVar2,uVar1);
  }
  iVar3 = fn_006b2974(*(undefined4 *)(DAT_00897804 + 0x28));
  if (iVar3 == 0) {
    return;
  }
  fn_00347388(param_1);
  return;
}



void fn_00344eb8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006b2984(*(undefined4 *)(DAT_00897804 + 0x28));
  *param_1 = uVar1;
  uVar1 = fn_0012162c(*(undefined4 *)(DAT_00897804 + 0x28));
  *param_2 = uVar1;
  return;
}



undefined1 fn_00344e64(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 8) == '\0') {
      return 0x32;
    }
    return 100;
  }
  if (cVar1 == '\x02') {
    if (*(char *)(param_1 + 9) == '\0') {
      return 100;
    }
  }
  else if (cVar1 == '\x03') {
    return *(undefined1 *)(param_1 + 0xb);
  }
  return 0;
}



bool fn_00344e3c(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = fn_001d4fe8(param_2);
  return (uVar1 & 1 << (param_1 - 1U & 0xff)) != 0;
}



void fn_00344dc4(void)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  uVar1 = fn_001d4fc8();
  fn_00102908(&local_28,0x20,(char *)&DAT_00344e34,(char *)&DAT_00344e20,uVar1);
  fn_0022f584(&local_28,0);
  return;
}



void fn_00344d44(void)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  uVar1 = fn_001d4fd8();
  fn_00102908(&local_28,0x20,(char *)&DAT_00344dbc,(char *)&DAT_00344da0,uVar1);
  fn_0022f584(&local_28,0);
  return;
}



undefined * fn_00344cd4(int param_1)

{
  char cVar1;
  undefined *puVar2;
  
  cVar1 = *(char *)(param_1 + 4);
  if ((cVar1 == '\x01' || cVar1 == '\x02') || (cVar1 != '\x03')) {
    return &DAT_00344d38;
  }
  if (*(byte *)(param_1 + 0xb) < 100) {
    fn_0015b0f8();
    puVar2 = (undefined *)fn_0022fd28((char *)&DAT_00344d3c);
    return puVar2;
  }
  fn_00231ca0(0x25,0);
  fn_0015b0dc();
  puVar2 = (undefined *)fn_0022fd28((char *)&DAT_00344d3c);
  return puVar2;
}



void fn_00344bf8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  fn_00101a50(&local_28,0xc,&DAT_00344c8c,param_2);
  if (param_3 == 0) {
    uVar1 = fn_0022f584((char *)&DAT_00344c94,0);
    fn_00147974(param_1 + 4,uVar1);
    param_1 = param_1 + 8;
  }
  else {
    uVar1 = fn_0022f584((char *)&DAT_00344c94,0);
    fn_00147974(param_1 + 0x10,uVar1);
    param_1 = param_1 + 0x14;
  }
  fn_00147974(param_1,&local_28);
  return;
}



void fn_00344b80(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = &DAT_008251b0;
  uVar1 = param_1[0xe];
  uVar2 = uVar1;
  if ((uint)param_1[0xf] < uVar1) {
    do {
      uVar2 = uVar2 + 0x1c;
    } while (uVar2 != param_1[0xf]);
  }
  iVar3 = (int)((longlong)(int)(param_1[0x10] - uVar1) * -0x6db6db6d +
                ((ulonglong)(param_1[0x10] - uVar1) << 0x20) >> 0x20);
  fn_001008c4(uVar1,(iVar3 >> 4) - (iVar3 >> 0x1f),0);
  fn_0030538c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_00344b3c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 in_s0;
  
  puVar1 = (undefined4 *)fn_00305244(param_1,2);
  *puVar1 = &DAT_008251b0;
  puVar1[0xd] = in_s0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return puVar1;
}



void fn_00344a68(int param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 in_s0;
  float fVar7;
  undefined4 in_s1;
  undefined4 in_s2;
  float fVar8;
  undefined8 uVar9;
  
  iVar6 = 1;
  iVar1 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(iVar1 + 0xc) = in_s0;
  *(undefined4 *)(iVar1 + 0x10) = in_s1;
  *(undefined4 *)(iVar1 + 0x14) = in_s2;
  uVar2 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38);
  iVar1 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
  iVar1 = (iVar1 >> 4) - (iVar1 >> 0x1f);
  if (1 < iVar1) {
    uVar9 = 0x3cc90fdb00000000;
    do {
      pfVar3 = (float *)(*(int *)(param_1 + 0x38) + (iVar6 + -1) * 0x1c);
      pfVar5 = (float *)(*(int *)(param_1 + 0x38) + iVar6 * 0x1c);
      fVar7 = *pfVar3 - *pfVar5;
      fVar8 = (float)uVar9;
      if ((fVar7 != fVar8 || (fVar7 != fVar8 || pfVar3[1] - pfVar5[1] != fVar8)) ||
          pfVar3[2] - pfVar5[2] != fVar8) {
        iVar4 = *(int *)(param_1 + 0x38);
        fn_00525bd0();
        *(float *)(iVar4 + iVar6 * 0x1c + 0x10) = fVar7 * (float)((ulonglong)uVar9 >> 0x20);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return;
}


