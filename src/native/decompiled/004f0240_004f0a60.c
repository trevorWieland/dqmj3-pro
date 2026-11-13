#include "004f0240_004f0a60.h"



void fn_004f0a60(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 8);
    *(int *)(*piVar1 + 4) = piVar1[1];
    *(int *)piVar1[1] = *piVar1;
    *piVar1 = 0;
    piVar1[1] = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}



void fn_004f09a4(void)

{
  if (DAT_008bf488 != '\0') {
    if (DAT_008bf489 != '\0') {
      fn_004f0860();
    }
    fn_0065673c(0);
    fn_004f11b0();
    fn_004eed1c();
    fn_004f0208();
    fn_004ecffc();
    fn_004ee1cc();
    fn_004ef288();
    if (DAT_008c0630 == DAT_008bf48c) {
      DAT_008c0630 = 0;
    }
    DAT_008bf48c = 0;
    fn_004ed284(2);
    fn_004ed3b8();
    DAT_008bf488 = '\0';
  }
  return;
}



undefined1 * fn_004f0860(void)

{
  int *piVar1;
  
  if (DAT_008bf488 == '\0') {
    return &DAT_e0a1482b;
  }
  if (DAT_008bf489 == '\0') {
    return &DAT_e0a14827;
  }
  piVar1 = (int *)fn_004ed2e8();
  (**(code **)(*piVar1 + 0x14))();
  fn_004ed21c();
  DAT_008bf489 = 0;
  return (undefined1 *)0x0;
}



bool fn_004f0848(uint param_1)

{
  return param_1 < 0x595;
}



undefined4 fn_004f0820(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x595) {
    uVar1 = 0;
    DAT_008c35f0 = param_1;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}



undefined4 * fn_004f07f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &DAT_00856d70;
  fn_001782b8(param_1 + 1,param_2,0x7f);
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  return param_1;
}



uint fn_004f07b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = fn_00100394(param_1 + 4,0x80,param_2,&uStack_8);
  if (0x7f < uVar1) {
    *(undefined1 *)(param_1 + 0x83) = 0;
    uVar1 = 0x7f;
  }
  return uVar1;
}



int fn_004f0788(int param_1)

{
  *(undefined **)(param_1 + 0x5d8) = &DAT_00856c94;
  *(undefined **)(param_1 + 0x5c4) = &DAT_00856c94;
  return param_1;
}



void fn_004f06f4(undefined4 param_1,undefined4 param_2)

{
  fn_001694e4(param_1,param_2,0x5ec);
  return;
}



undefined1 * fn_004f05cc(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_5dc [12];
  undefined1 auStack_5d0 [1456];
  
  if ((*param_1 == 0x6498ab32) && (cVar1 = (char)param_1[1], cVar1 == '\x01' || cVar1 == '\x02')) {
    iVar5 = param_1[0x16e];
    uVar6 = iVar5 - 0xc;
    bVar8 = uVar6 == 0x5aa;
    if (uVar6 < 0x5ab) {
      bVar8 = cVar1 == '\x01';
    }
    if (bVar8) {
      if (*param_2 == '\0') {
        return (undefined1 *)0x0;
      }
      if (*param_2 != '\x01') {
        return (undefined1 *)0xe161482a;
      }
      if (uVar6 == 0) {
        return (undefined1 *)0x0;
      }
      iVar2 = fn_004f0230(1);
      iVar3 = fn_00169f1c(uVar6 + iVar2 + -1,iVar2);
      uVar7 = iVar3 * iVar2;
      if (uVar7 < 0x5ab) {
        fn_001694e4(auStack_5d0,param_1 + 3,uVar6);
        iVar2 = uVar7 - uVar6;
        if (iVar2 != 0) {
          fn_00158f40(auStack_5dc + iVar5,iVar2,0xff);
        }
        puVar4 = (undefined1 *)fn_004f0338(param_1 + 3,auStack_5d0,uVar7,param_2);
        if ((int)puVar4 < 0) {
          return puVar4;
        }
        param_1[0x16e] = param_1[0x16e] + iVar2;
        *(undefined1 *)(param_1 + 1) = 2;
        return (undefined1 *)0x0;
      }
    }
  }
  return &DAT_e0a14827;
}



int fn_004f04c8(int *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  uint uVar4;
  undefined1 auStack_5d0 [1456];
  
  if (((*param_1 == 0x6498ab32) && (cVar1 = (char)param_1[1], cVar1 == '\x01' || cVar1 == '\x02'))
     && (param_1[0x16e] - 0xcU < 0x5ab)) {
    if (cVar1 == '\x01') {
      return 0;
    }
    if (*param_2 != '\x01') {
      return -0x1e9eb7d6;
    }
    if (cVar1 == '\x02') {
      uVar4 = param_1[0x16e] - 0xc;
      if (uVar4 == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        return 0;
      }
      uVar2 = fn_004f0230(1);
      fn_00169f1c(uVar4,uVar2);
      if ((extraout_r1 == 0) && (uVar4 < 0x5ab)) {
        iVar3 = fn_004f0240(auStack_5d0,param_1 + 3,uVar4,param_2);
        if (iVar3 < 0) {
          return iVar3;
        }
        fn_001694e4(param_1 + 3,auStack_5d0,uVar4);
        *(undefined1 *)(param_1 + 1) = 1;
        return 0;
      }
    }
  }
  return -0x269eb7de;
}



void fn_004f045c(undefined4 *param_1)

{
  *param_1 = 0x6498ab32;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[0x16e] = 0xc;
  *(undefined1 *)(param_1 + 0x16f) = 0xfd;
  param_1[0x170] = 0;
  fn_004ed714(param_1 + 0x171);
  *(undefined1 *)(param_1 + 0x175) = 0;
  *(undefined1 *)((int)param_1 + 0x5d5) = 0;
  fn_004ed714(param_1 + 0x176);
  *(undefined1 *)(param_1 + 0x17a) = 0;
  return;
}



int fn_004f0430(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + *(int *)(param_1 + 0x5b8);
  if (uVar2 < 0x5b7) {
    iVar1 = param_1 + *(int *)(param_1 + 0x5b8);
    *(uint *)(param_1 + 0x5b8) = uVar2;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int fn_004f0338(int param_1,int param_2,uint param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *local_d8;
  undefined1 auStack_d4 [180];
  
  if (*param_4 == '\0') {
    return 0;
  }
  iVar3 = -0x1f1eb7da;
  if (*param_4 != '\x01') {
    return -0x1f1eb7da;
  }
  local_d8 = &DAT_008575a0;
  if (*param_4 == '\x01') {
    iVar1 = fn_00780890(&local_d8);
    if (iVar1 != *(int *)(param_4 + 8)) goto LAB_004f03b8;
    (**(code **)(local_d8 + 0x10))(&local_d8,*(undefined4 *)(param_4 + 4));
  }
  iVar3 = 0;
LAB_004f03b8:
  if (iVar3 < 0) {
    return iVar3;
  }
  uVar4 = fn_00169f1c(param_3,0x10);
  if ((int)((ulonglong)uVar4 >> 0x20) != 0) {
    return -0x1f1eb7da;
  }
  uVar2 = 0;
  if (param_3 >> 4 != 0) {
    do {
      fn_00755e38(auStack_d4,param_1,param_2);
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 0x10;
      param_2 = param_2 + 0x10;
    } while (uVar2 < (uint)uVar4);
  }
  return 0;
}



int fn_004f0240(int param_1,int param_2,uint param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *local_d8;
  undefined1 auStack_d4 [180];
  
  if (*param_4 == '\0') {
    return 0;
  }
  iVar3 = -0x1f1eb7da;
  if (*param_4 != '\x01') {
    return -0x1f1eb7da;
  }
  local_d8 = &DAT_008575a0;
  if (*param_4 == '\x01') {
    iVar1 = fn_00780890(&local_d8);
    if (iVar1 != *(int *)(param_4 + 8)) goto LAB_004f02c0;
    (**(code **)(local_d8 + 0x10))(&local_d8,*(undefined4 *)(param_4 + 4));
  }
  iVar3 = 0;
LAB_004f02c0:
  if (iVar3 < 0) {
    return iVar3;
  }
  uVar4 = fn_00169f1c(param_3,0x10);
  if ((int)((ulonglong)uVar4 >> 0x20) != 0) {
    return -0x1f1eb7da;
  }
  uVar2 = 0;
  if (param_3 >> 4 != 0) {
    do {
      fn_00755b58(auStack_d4,param_1,param_2);
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 0x10;
      param_2 = param_2 + 0x10;
    } while (uVar2 < (uint)uVar4);
  }
  return 0;
}


