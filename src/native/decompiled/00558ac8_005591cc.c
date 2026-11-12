#include "00558ac8_005591cc.h"



undefined4 * fn_005591cc(undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  *(char *)(param_1 + 3) = (char)param_3;
  *param_1 = 0;
  param_1[1] = 0;
  if (((param_3 == 0) && (*param_2 == 0x56415743)) && (param_2[2] + 0xfe000000U < 0x10101)) {
    *param_1 = param_2;
    piVar1 = (int *)fn_006e5fc0(param_2);
    piVar2 = (int *)fn_006e5f58(*param_1);
    if (((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) &&
       ((*piVar1 == 0x4f464e49 && (*piVar2 == 0x41544144)))) {
      param_1[2] = piVar2 + 2;
      param_1[1] = piVar1 + 2;
    }
  }
  return param_1;
}



void fn_005591ac(undefined4 *param_1)

{
  if (*(char *)(param_1 + 2) != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



void fn_00559120(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[0x48] == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)((int)param_1 + 0x121) = 0;
  fn_00557f84(param_1);
  iVar1 = param_1[0x47];
  fn_0017d90c(iVar1 + 8,param_1 + 0x3e);
  (**(code **)(*param_1 + 0x10))(param_1);
  fn_0017d948(iVar1 + 0x14,iVar1 + 0x18,param_1 + 0x3e);
  return;
}



void fn_00558fec(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  iVar3 = fn_00141104();
  iVar4 = fn_00140e98(iVar3,0x10);
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0x184);
  *(undefined1 *)(iVar4 + 4) = 0xf;
  *(int *)(iVar4 + 0x10) = param_1 + 0x128;
  uVar2 = param_2[9];
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[4];
  uVar10 = param_2[5];
  uVar11 = param_2[6];
  uVar12 = param_2[7];
  uVar13 = param_2[8];
  uVar14 = *param_3;
  *(undefined4 *)(iVar4 + 0x14) = *param_2;
  *(undefined4 *)(iVar4 + 0x18) = uVar6;
  *(undefined4 *)(iVar4 + 0x1c) = uVar7;
  *(undefined4 *)(iVar4 + 0x20) = uVar8;
  *(undefined4 *)(iVar4 + 0x24) = uVar9;
  *(undefined4 *)(iVar4 + 0x28) = uVar10;
  *(undefined4 *)(iVar4 + 0x2c) = uVar11;
  *(undefined4 *)(iVar4 + 0x30) = uVar12;
  *(undefined4 *)(iVar4 + 0x34) = uVar13;
  *(undefined4 *)(iVar4 + 0x38) = uVar2;
  *(undefined4 *)(iVar4 + 0x3c) = uVar14;
  fn_001411b8(iVar3);
  iVar3 = param_3[2];
  if (0 < iVar3) {
    bVar1 = *(byte *)(param_3 + 1);
    iVar4 = fn_00141104();
    iVar5 = fn_00140e98(iVar4,7);
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar4 + 0x184);
    *(undefined1 *)(iVar5 + 4) = 0x10;
    *(int *)(iVar5 + 0x10) = param_1 + 0x128;
    *(uint *)(iVar5 + 0x14) = (uint)bVar1;
    *(int *)(iVar5 + 0x18) = iVar3;
    fn_001411b8(iVar4,iVar5);
  }
  *(undefined1 *)(param_1 + 0x121) = 1;
  return;
}



void fn_00558f74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00141104();
  iVar2 = fn_00140e98(iVar1,0xb);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0xd;
  *(int *)(iVar2 + 0x10) = param_1 + 0x128;
  *(undefined4 *)(iVar2 + 0x14) = param_2;
  *(undefined4 *)(iVar2 + 0x18) = param_3;
  *(undefined4 *)(iVar2 + 0x1c) = param_4;
  *(undefined1 *)(iVar2 + 0x20) = param_5;
  *(undefined1 *)(iVar2 + 0x21) = param_6;
  *(undefined4 *)(iVar2 + 0x24) = param_7;
  *(undefined4 *)(iVar2 + 0x28) = param_8;
  fn_001411b8(iVar1,iVar2);
  return;
}



void fn_00558ed0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x11c);
  iVar2 = (uint)*(byte *)(param_1 + 0x9d) + *(int *)(param_1 + 0x50);
  iVar1 = UnsignedSaturate(iVar2,7);
  UnsignedDoesSaturate(iVar2,7);
  fn_0017d90c(iVar4 + 8,param_1 + 0xf8);
  piVar3 = *(int **)(iVar4 + 0xc);
  if (piVar3 != (int *)(iVar4 + 0xc)) {
    do {
      iVar2 = piVar3[-0x2a] + (uint)*(byte *)((int)piVar3 + -0x5b);
      if (iVar2 < 0x80) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x7f;
      }
    } while ((iVar2 <= iVar1) && (piVar3 = (int *)*piVar3, piVar3 != (int *)(iVar4 + 0xc)));
  }
  fn_0017d948(iVar4 + 8,piVar3,param_1 + 0xf8);
  return;
}



void fn_00558e28(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = fn_00141104();
  iVar2 = fn_00140e98(iVar1,0x15);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0xe;
  *(int *)(iVar2 + 0x10) = param_1 + 0x128;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  *(undefined4 *)(iVar2 + 0x14) = *param_3;
  *(undefined4 *)(iVar2 + 0x18) = uVar3;
  *(undefined4 *)(iVar2 + 0x1c) = uVar4;
  *(undefined4 *)(iVar2 + 0x20) = *param_2;
  *(undefined4 *)(iVar2 + 0x24) = param_2[1];
  *(undefined4 *)(iVar2 + 0x28) = param_2[7];
  uVar3 = ((undefined4 *)param_2[2])[1];
  *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)param_2[2];
  *(undefined4 *)(iVar2 + 0x30) = uVar3;
  uVar3 = ((undefined4 *)param_2[3])[1];
  *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)param_2[3];
  *(undefined4 *)(iVar2 + 0x38) = uVar3;
  uVar3 = ((undefined4 *)param_2[4])[1];
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)param_2[4];
  *(undefined4 *)(iVar2 + 0x40) = uVar3;
  uVar3 = ((undefined4 *)param_2[5])[1];
  *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)param_2[5];
  *(undefined4 *)(iVar2 + 0x48) = uVar3;
  uVar3 = ((undefined4 *)param_2[6])[1];
  *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)param_2[6];
  *(undefined4 *)(iVar2 + 0x50) = uVar3;
  fn_001411b8(iVar1);
  return;
}



void fn_00558e00(int param_1)

{
  fn_005579dc();
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  *(undefined1 *)(param_1 + 0x121) = 0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00558cec) */
/* WARNING: Removing unreachable block (ram,0x00558ce8) */
/* WARNING: Removing unreachable block (ram,0x00558cf4) */
/* WARNING: Removing unreachable block (ram,0x00558d04) */
/* WARNING: Removing unreachable block (ram,0x00558d08) */
/* WARNING: Removing unreachable block (ram,0x00558d0c) */
/* WARNING: Removing unreachable block (ram,0x00558d1c) */

undefined4 *
fn_00558c50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *param_1 = &DAT_00858024;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[5] = &DAT_0085238c;
  param_1[5] = &DAT_0085238c;
  param_1[0xb] = 0xe7e3ffff;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_3;
  param_1[0x11] = param_4;
  param_1[0x12] = param_5;
  param_1[0x13] = param_6;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  iVar5 = param_1[0xd];
  if (*(char *)(iVar5 + 0x1c) == '\0') {
    iVar5 = fn_001560d8(iVar5 + 4,&local_20);
    if (iVar5 < 0) {
      fn_0015e590(iVar5,0x558d80);
    }
    uVar4 = local_20;
  }
  else {
    local_20 = 0;
    uStack_1c = 0;
    uVar1 = fn_001560d8(iVar5 + 4,&local_20);
    uVar2 = uVar1 & 0x80000000;
    *(uint *)(iVar5 + 0x18) = uVar1;
    uVar4 = 0;
    if (-1 < (int)uVar2) {
      uVar4 = local_20;
    }
    if ((int)uVar1 < 0) {
      pcVar3 = (code *)param_1[0x12];
      if (pcVar3 != (code *)0x0) {
        uVar2 = param_1[0x13];
      }
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(*(undefined4 *)(param_1[0xd] + 0x18),uVar2);
      }
      return param_1;
    }
  }
  if (param_4 == 0) {
    param_1[0x11] = uVar4;
  }
  param_1[0xe] = uVar4;
  fn_0052db34(param_1 + 0xe,0);
  *(undefined1 *)((int)param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return param_1;
}



undefined4 *
fn_00558ac8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *param_1 = &DAT_00858024;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[5] = &DAT_0085238c;
  param_1[5] = &DAT_0085238c;
  param_1[0xb] = 0xe7e3ffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_3;
  param_1[0x11] = param_4;
  param_1[0x12] = param_6;
  param_1[0x13] = param_7;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  iVar1 = fn_0014020c(param_1 + 5,param_2,param_5);
  if (iVar1 == 0) {
    pcVar3 = (code *)param_1[0x12];
    uVar2 = param_1[0xb];
joined_r0x00558bc8:
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar2,param_1[0x13]);
    }
    return param_1;
  }
  param_1[0xd] = param_1 + 5;
  if (*(char *)(param_1 + 0xc) == '\0') {
    iVar1 = fn_001560d8(param_1 + 6,&local_20);
    if (iVar1 < 0) {
      fn_0015e590(iVar1,0x558bec);
    }
  }
  else {
    local_20 = 0;
    uStack_1c = 0;
    iVar1 = fn_001560d8(param_1 + 6,&local_20);
    param_1[0xb] = iVar1;
    if (iVar1 < 0) {
      pcVar3 = (code *)param_1[0x12];
      uVar2 = *(undefined4 *)(param_1[0xd] + 0x18);
      goto joined_r0x00558bc8;
    }
  }
  if (param_4 == 0) {
    param_1[0x11] = local_20;
  }
  param_1[0xe] = local_20;
  fn_0052db34(param_1 + 0xe,0);
  *(undefined1 *)((int)param_1 + 0x52) = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return param_1;
}


