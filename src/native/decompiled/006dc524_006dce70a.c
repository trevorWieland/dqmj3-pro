#include "006dc524_006dce70a.h"



void fn_006dc8c8(undefined4 param_1,float *param_2,float *param_3,int param_4,float *param_5,
                 int param_6)

{
  float *pfVar1;
  uint uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar2 = ~*(uint *)(param_6 + 0x3c) & 0x200;
  if ((*(uint *)(param_4 + 0x3c) & 0x60) == 0) {
    if ((~*(uint *)(param_4 + 0x3c) & 0x80) == 0) {
      if (uVar2 == 0) {
        local_28 = *(undefined4 *)(param_4 + 0xc);
        uStack_24 = *(undefined4 *)(param_4 + 0x1c);
        uStack_20 = *(undefined4 *)(param_4 + 0x2c);
        pfVar1 = param_5;
      }
      else {
        local_28 = *(undefined4 *)(param_4 + 0xc);
        uStack_24 = *(undefined4 *)(param_4 + 0x1c);
        uStack_20 = *(undefined4 *)(param_4 + 0x2c);
        *param_2 = *param_5 * *(float *)(param_6 + 0x30);
        param_2[4] = param_5[4] * *(float *)(param_6 + 0x30);
        param_2[8] = param_5[8] * *(float *)(param_6 + 0x30);
        param_2[1] = param_5[1] * *(float *)(param_6 + 0x34);
        param_2[5] = param_5[5] * *(float *)(param_6 + 0x34);
        param_2[9] = param_5[9] * *(float *)(param_6 + 0x34);
        param_2[2] = param_5[2] * *(float *)(param_6 + 0x38);
        param_2[6] = param_5[6] * *(float *)(param_6 + 0x38);
        param_2[10] = param_5[10] * *(float *)(param_6 + 0x38);
        param_2[3] = param_5[3];
        param_2[7] = param_5[7];
        param_2[0xb] = param_5[0xb];
        pfVar1 = param_2;
      }
      fn_001ad3b8(param_2,pfVar1,&local_28);
    }
    else if (uVar2 == 0) {
      local_28 = *(undefined4 *)(param_4 + 0xc);
      uStack_24 = *(undefined4 *)(param_4 + 0x1c);
      uStack_20 = *(undefined4 *)(param_4 + 0x2c);
      fn_001ad3b8(param_2,param_5,&local_28);
      fn_00755904(param_2,param_2,param_4);
    }
    else {
      local_28 = *(undefined4 *)(param_4 + 0xc);
      uStack_24 = *(undefined4 *)(param_4 + 0x1c);
      uStack_20 = *(undefined4 *)(param_4 + 0x2c);
      *param_2 = *param_5 * *(float *)(param_6 + 0x30);
      param_2[4] = param_5[4] * *(float *)(param_6 + 0x30);
      param_2[8] = param_5[8] * *(float *)(param_6 + 0x30);
      param_2[1] = param_5[1] * *(float *)(param_6 + 0x34);
      param_2[5] = param_5[5] * *(float *)(param_6 + 0x34);
      param_2[9] = param_5[9] * *(float *)(param_6 + 0x34);
      param_2[2] = param_5[2] * *(float *)(param_6 + 0x38);
      param_2[6] = param_5[6] * *(float *)(param_6 + 0x38);
      param_2[10] = param_5[10] * *(float *)(param_6 + 0x38);
      param_2[3] = param_5[3];
      param_2[7] = param_5[7];
      param_2[0xb] = param_5[0xb];
      fn_001ad3b8(param_2,param_2,&local_28);
      fn_00755904(param_2,param_2,param_4);
    }
  }
  else if (uVar2 == 0) {
    fn_001781f0(param_2);
  }
  else {
    *param_2 = *param_5 * *(float *)(param_6 + 0x30);
    param_2[4] = param_5[4] * *(float *)(param_6 + 0x30);
    param_2[8] = param_5[8] * *(float *)(param_6 + 0x30);
    param_2[1] = param_5[1] * *(float *)(param_6 + 0x34);
    param_2[5] = param_5[5] * *(float *)(param_6 + 0x34);
    param_2[9] = param_5[9] * *(float *)(param_6 + 0x34);
    param_2[2] = param_5[2] * *(float *)(param_6 + 0x38);
    param_2[6] = param_5[6] * *(float *)(param_6 + 0x38);
    param_2[10] = param_5[10] * *(float *)(param_6 + 0x38);
    param_2[3] = param_5[3];
    param_2[7] = param_5[7];
    param_2[0xb] = param_5[0xb];
  }
  if ((~(uint)param_5[0xf] & 0x200) == 0) {
    *param_3 = *(float *)(param_4 + 0x30);
    param_3[1] = *(float *)(param_4 + 0x34);
    param_3[2] = *(float *)(param_4 + 0x38);
    return;
  }
  *param_3 = param_5[0xc] * *(float *)(param_4 + 0x30);
  param_3[1] = param_5[0xd] * *(float *)(param_4 + 0x34);
  param_3[2] = param_5[0xe] * *(float *)(param_4 + 0x38);
  return;
}



void fn_006dc7b8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 unaff_r4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (*(char *)(puVar5 + 7) == '\0') {
    fn_005e4a60(puVar5[1],*puVar5);
    (**(code **)(*(int *)puVar5[3] + 0x10))((int *)puVar5[3],puVar5[1]);
    fn_005e6bb8(puVar5[1]);
    *(undefined1 *)(puVar5 + 7) = 1;
  }
  iVar1 = fn_005e4644(*puVar5);
  iVar2 = puVar5[5];
  piVar9 = *(int **)(iVar1 + 0x10);
  for (piVar7 = *(int **)(iVar1 + 0xc); piVar7 != piVar9; piVar7 = piVar7 + 1) {
    iVar6 = *piVar7;
    iVar3 = *(int *)(iVar6 + 0x34);
    puVar8 = *(undefined4 **)(iVar3 + 0xc);
    for (puVar5 = *(undefined4 **)(iVar3 + 8); puVar5 != puVar8; puVar5 = puVar5 + 1) {
      pcVar4 = (code *)**(undefined4 **)*puVar5;
      (*pcVar4)((undefined4 *)*puVar5,iVar6,iVar1,pcVar4,unaff_r4);
    }
    (**(code **)(*(int *)*piVar7 + 0x20))();
    (**(code **)(*(int *)*piVar7 + 0xc))((int *)*piVar7,*(undefined4 *)(iVar2 + 0x10),iVar1);
  }
  return;
}



int fn_006dc71c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(**(int **)(param_1 + 4) + 0xc) + param_3 * 4);
  if (iVar1 == 0) {
    return -1;
  }
  iVar3 = 0;
  if (0 < *(int *)(*(int *)(iVar1 + 0xc) + 8)) {
    do {
      iVar2 = fn_003035b0(param_2,*(int *)(iVar1 + 0x10) +
                                   *(int *)(*(int *)(*(int *)(iVar1 + 0x18) + iVar3 * 0x3c) + 8));
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)(iVar1 + 0xc) + 8));
  }
  return -1;
}



uint * fn_006dc64c(int param_1,uint *param_2,uint param_3,int param_4,int param_5,int param_6,
                   int param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + param_7 * 4 + 0x10);
  if ((uVar3 & 1) != 0) {
    *param_2 = 0xffffffff;
    param_2[1] = 0xf00c3;
    param_2 = param_2 + 2;
  }
  uVar4 = param_3 | param_4 << 8 | param_5 << 0x10 | param_6 << 0x18;
  puVar1 = param_2;
  if ((uVar3 & 2) != 0) {
    puVar1 = param_2 + 2;
    *param_2 = uVar4;
    param_2[1] = 0xf00cb;
  }
  puVar2 = puVar1;
  if ((uVar3 & 4) != 0) {
    puVar2 = puVar1 + 2;
    *puVar1 = uVar4;
    puVar1[1] = 0xf00d3;
  }
  puVar1 = puVar2;
  if ((uVar3 & 8) != 0) {
    puVar1 = puVar2 + 2;
    *puVar2 = uVar4;
    puVar2[1] = 0xf00db;
  }
  puVar2 = puVar1;
  if ((uVar3 & 0x10) != 0) {
    puVar2 = puVar1 + 2;
    *puVar1 = uVar4;
    puVar1[1] = 0xf00f3;
  }
  if ((uVar3 & 0x20) != 0) {
    puVar1 = puVar2 + 1;
    *puVar2 = uVar4;
    puVar2 = puVar2 + 2;
    *puVar1 = 0xf00fb;
  }
  return puVar2;
}



void fn_006dc524(void)

{
  return;
}


