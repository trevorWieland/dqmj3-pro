#include "00558278_00558a78.h"



void fn_00558a78(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = *(char *)(param_1 + 0x51) != '\0';
  cVar1 = '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0x50);
  }
  if (bVar3 && cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0x34);
    if ((*(uint *)(iVar2 + 4) & 0xfffffffe) != 0) {
      if ((*(uint *)(iVar2 + 4) & 1) != 0) {
        fn_00146594();
      }
      fn_0015cf8c(*(uint *)(iVar2 + 4) & 0xfffffffe);
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



int fn_005588d8(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int local_20;
  int local_1c [2];
  
  iVar3 = *(int *)(param_1 + 0x3c);
  uVar1 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44);
  if (uVar1 < iVar3 + param_3) {
    param_3 = (uVar1 - iVar3) + 0x1f & 0xffffffe0;
  }
  iVar5 = *(int *)(param_1 + 0x34);
  local_20 = 0;
  if (*(char *)(iVar5 + 0x1c) == '\0') {
    iVar3 = fn_0014da74(iVar5 + 4,0,iVar3,iVar3 >> 0x1f);
    if (iVar3 < 0) {
      fn_0015e590(iVar3,0x558958);
    }
  }
  else {
    iVar3 = fn_0014da74(iVar5 + 4,*(char *)(iVar5 + 0x1c),iVar3,iVar3 >> 0x1f);
    *(int *)(iVar5 + 0x18) = iVar3;
    if (iVar3 < 0) {
      pcVar4 = *(code **)(param_1 + 0x48);
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x18);
      goto joined_r0x00558a04;
    }
  }
  local_1c[0] = 0;
  iVar3 = *(int *)(param_1 + 0x34);
  if (*(char *)(iVar3 + 0x1c) == '\0') {
    iVar3 = fn_0014d9ec(iVar3 + 4,&local_20,param_2,param_3);
    if (iVar3 < 0) {
      fn_0015e590(iVar3,0x5589cc);
    }
    local_1c[0] = local_20;
  }
  else {
    iVar5 = fn_0014d9ec(iVar3 + 4,local_1c,param_2,param_3);
    *(int *)(iVar3 + 0x18) = iVar5;
    if (iVar5 < 0) {
      pcVar4 = *(code **)(param_1 + 0x48);
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x18);
joined_r0x00558a04:
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar2,*(undefined4 *)(param_1 + 0x4c));
      }
      return -1;
    }
  }
  if (0 < local_1c[0]) {
    fn_0052db94(param_1 + 0x38);
  }
  return local_1c[0];
}



undefined4 fn_00558844(undefined4 param_1)

{
  fn_00126800();
  return param_1;
}



void fn_00558704(int *param_1)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x328e) == '\0') {
    return;
  }
  *(undefined1 *)((int)param_1 + 0x328e) = 0;
  fn_0055c448(param_1 + 0x8c5);
  fn_00557f84(param_1);
  iVar1 = param_1[0xc11];
  fn_0017d90c(iVar1 + 8,param_1 + 0x3e);
  (**(code **)(*param_1 + 0x10))(param_1);
  fn_0017d948(iVar1 + 0x14,iVar1 + 0x18,param_1 + 0x3e);
  return;
}



void fn_00558638(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0x328c) = *(undefined2 *)(param_2 + 8);
  iVar1 = fn_00141104();
  iVar2 = fn_00140e98(iVar1,0x19);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x27;
  *(int *)(iVar2 + 0x10) = param_1 + 0x118;
  fn_0017821c(iVar2 + 0x14,param_2,0x50);
  fn_001411b8(iVar1,iVar2);
  return;
}



void fn_00558574(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x3044);
  iVar5 = (uint)*(byte *)(param_1 + 0x9d) + *(int *)(param_1 + 0x50);
  if (iVar5 < 0x80) {
    if (iVar5 < 0) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = 0x7f;
  }
  fn_0017d90c(iVar4 + 8,param_1 + 0xf8);
  piVar2 = *(int **)(iVar4 + 0xc);
  if (piVar2 != (int *)(iVar4 + 0xc)) {
    do {
      iVar3 = (uint)*(byte *)((int)piVar2 + -0x5b) + piVar2[-0x2a];
      if (iVar3 < 0x80) {
        iVar1 = 0;
        if (-1 < iVar3) {
          iVar1 = iVar3;
        }
      }
      else {
        iVar1 = 0x7f;
      }
    } while ((iVar1 <= iVar5) && (piVar2 = (int *)*piVar2, piVar2 != (int *)(iVar4 + 0xc)));
  }
  fn_0017d948(iVar4 + 8,piVar2,param_1 + 0xf8);
  return;
}



void fn_005584bc(int param_1)

{
  ushort uVar1;
  
  fn_00557e4c();
  uVar1 = *(ushort *)(param_1 + 0x328c);
  if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x3054) < *(int *)(param_1 + 0x3050))) {
    *(int *)(param_1 + 0x3054) = *(int *)(param_1 + 0x3054) + 1;
  }
  if (((uVar1 >> 1 & 1) != 0) && (*(int *)(param_1 + 0x3064) < *(int *)(param_1 + 0x3060))) {
    *(int *)(param_1 + 0x3064) = *(int *)(param_1 + 0x3064) + 1;
  }
  if (((uVar1 >> 2 & 1) != 0) && (*(int *)(param_1 + 0x3074) < *(int *)(param_1 + 0x3070))) {
    *(int *)(param_1 + 0x3074) = *(int *)(param_1 + 0x3074) + 1;
  }
  if (((uVar1 >> 2 & 3) >> 1 != 0) && (*(int *)(param_1 + 0x3084) < *(int *)(param_1 + 0x3080))) {
    *(int *)(param_1 + 0x3084) = *(int *)(param_1 + 0x3084) + 1;
  }
  return;
}



void fn_00558464(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = fn_00141104();
  iVar2 = fn_00140e98(iVar1,10);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x29;
  *(int *)(iVar2 + 0x10) = param_1 + 0x118;
  *(undefined4 *)(iVar2 + 0x24) = param_2;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(iVar2 + 0x14) = *param_3;
  *(undefined4 *)(iVar2 + 0x18) = uVar3;
  *(undefined4 *)(iVar2 + 0x1c) = uVar4;
  *(undefined4 *)(iVar2 + 0x20) = uVar5;
  fn_001411b8(iVar1,iVar2);
  return;
}



void fn_0055839c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  fn_00557bec();
  iVar1 = fn_00141104();
  uVar4 = 0;
  uVar5 = (uint)*(ushort *)(param_1 + 0x328c);
  do {
    if ((uVar5 & 1) != 0) {
      iVar2 = fn_00140e98(iVar1,7);
      iVar3 = param_1 + uVar4 * 0x10;
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
      *(undefined1 *)(iVar2 + 4) = 0x2d;
      *(int *)(iVar2 + 0x10) = param_1 + 0x118;
      *(int *)(iVar2 + 0x14) = 1 << (uVar4 & 0xff);
      if (*(int *)(iVar3 + 0x3054) < *(int *)(iVar3 + 0x3050)) {
        fVar7 = (float)VectorSignedToFloat(*(int *)(iVar3 + 0x3054),(byte)(in_fpscr >> 0x16) & 3);
        fVar6 = (float)VectorSignedToFloat(*(int *)(iVar3 + 0x3050),(byte)(in_fpscr >> 0x16) & 3);
        fVar6 = ((*(float *)(iVar3 + 0x304c) - *(float *)(iVar3 + 0x3048)) * fVar7) / fVar6 +
                *(float *)(iVar3 + 0x3048);
      }
      else {
        fVar6 = *(float *)(iVar3 + 0x304c);
      }
      *(float *)(iVar2 + 0x18) = fVar6;
      fn_001411b8(iVar1);
    }
    uVar4 = uVar4 + 1;
    uVar5 = uVar5 >> 1;
  } while (uVar4 < 4);
  return;
}



void fn_005582e4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  uVar2 = fn_00141104();
  iVar3 = fn_0013c3d8(iVar1 + 4);
  if (iVar3 == 0) {
    fn_001271e8(uVar2,1);
    fn_0015def0(iVar1 + 4);
  }
  fn_005579dc(param_1);
  fn_0055b900(param_1 + 0x8c5);
  param_1[0xc10] = 0;
  iVar1 = 0;
  do {
    param_1[iVar1 * 4 + 0xc15] = 0;
    param_1[iVar1 * 4 + 0xc12] = 0;
    param_1[iVar1 * 4 + 0xc13] = 0;
    iVar3 = iVar1 + 1;
    param_1[iVar1 * 4 + 0xc14] = 1;
    param_1[iVar1 * 4 + 0xc13] = 0x3f800000;
    iVar1 = iVar3;
  } while (iVar3 < 4);
  *(undefined1 *)((int)param_1 + 0x328e) = 1;
  return;
}



undefined4 fn_0055828c(undefined4 param_1)

{
  fn_00558104();
  return param_1;
}



void fn_00558278(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(&DAT_00812968 + param_2 * 4);
  return;
}


