#include "006e29c0_006e2f58.h"



int fn_006e2f58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1,local_8,0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)(char)((uint)local_8[0] >> 8);
  }
  return iVar2;
}



uint fn_006e2f30(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1,local_8,2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (local_8[0] & 0xffffff) >> 0x10;
  }
  return uVar2;
}



uint fn_006e2f08(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1,local_8,2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (local_8[0] & 0xffff) >> 8;
  }
  return uVar2;
}



undefined1 * fn_006e2ed0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int local_10;
  
  local_10 = param_4;
  iVar1 = fn_00176c24(param_1,&local_10,9);
  if (iVar1 == 0) {
    puVar2 = &DAT_008c3cca;
  }
  else {
    puVar2 = (undefined1 *)(local_10 + param_1 + *(int *)(local_10 + param_1 + 4));
  }
  return puVar2;
}



void fn_006e2de4(int param_1,undefined1 *param_2,undefined1 *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint local_18;
  
  local_18 = param_4;
  iVar3 = fn_00176c24(param_1,&local_18,8);
  if (iVar3 == 0) {
    *param_2 = 0x7f;
    if (param_4 == 0) {
      return;
    }
    puVar7 = param_3 + -1;
    if ((param_4 & 1) != 0) {
      *param_3 = 0;
      puVar7 = param_3;
    }
    for (param_4 = param_4 >> 1; param_4 != 0; param_4 = param_4 - 1) {
      puVar7[1] = 0;
      puVar7 = puVar7 + 2;
      *puVar7 = 0;
    }
    return;
  }
  puVar7 = (undefined1 *)(param_1 + local_18);
  *param_2 = *puVar7;
  uVar6 = (uint)(byte)puVar7[1];
  if (uVar6 < 3) {
    if ((int)(uVar6 - 1) < 1) goto LAB_006e2eb8;
  }
  else {
    uVar6 = 2;
  }
  puVar4 = puVar7 + 1;
  puVar5 = param_3 + -1;
  if ((uVar6 & 1) == 0) {
    puVar4 = puVar7 + 2;
    *param_3 = *puVar4;
    puVar5 = param_3;
  }
  uVar1 = puVar4[1];
  for (iVar3 = (int)(uVar6 - 1) >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar2 = puVar4[2];
    puVar5[1] = uVar1;
    uVar1 = puVar4[3];
    puVar5 = puVar5 + 2;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 2;
  }
LAB_006e2eb8:
  if ((int)(uVar6 - 1) < 0) {
    return;
  }
  param_3[uVar6 - 1] = puVar7[uVar6 + 1];
  return;
}



uint fn_006e2dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1,local_8,2);
  if (iVar1 == 0) {
    local_8[0] = 0x40;
  }
  else {
    local_8[0] = local_8[0] & 0xff;
  }
  return local_8[0];
}



int fn_006e2db4(int param_1)

{
  return param_1 + *(int *)(param_1 + 4);
}



void fn_006e2c8c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[0x87];
  if (((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 8))(piVar1,param_2), iVar2 == 0))
     && (iVar2 = fn_006e3c70(param_1 + 3,param_2), iVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x006e2ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,param_2);
    return;
  }
  return;
}



uint fn_006e2c34(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = fn_006e4490(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x44))(piVar2,param_2,param_3);
    }
    uVar1 = uVar1 | uVar3;
  }
  return uVar1;
}



uint fn_006e2bdc(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = fn_006e4200(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x40))(piVar2,param_2,param_3);
    }
    uVar1 = uVar1 | uVar3;
  }
  return uVar1;
}



uint fn_006e2b84(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = fn_006e4158(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x28))(piVar2,param_2,param_3);
    }
    uVar1 = uVar1 | uVar3;
  }
  return uVar1;
}



int fn_006e2b3c(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    param_3 = (uint)*(byte *)(piVar1 + 1);
  }
  if ((piVar1 != (int *)0x0 && param_3 != 0) && (iVar2 = (**(code **)(*piVar1 + 0xc))(), iVar2 != 0)
     ) {
    return iVar2;
  }
  iVar2 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar2 + 0x38) == 0) ||
     (iVar3 = fn_006e35dc(*(undefined4 *)(iVar2 + 0x3c),param_2), iVar3 == -1)) {
    return 0;
  }
  if (iVar3 == -1) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x38) + *(int *)(*(int *)(iVar2 + 0x38) + 4);
    if (iVar2 != 0) {
      iVar2 = iVar2 + *(int *)(iVar2 + iVar3 * 0xc + 8);
    }
  }
  return iVar2;
}



int fn_006e2ab0(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x74);
  uVar2 = (uint)uVar1;
  bVar5 = (uVar1 & 0x1000) != 0;
  uVar4 = uVar1 >> 1 & 0x18;
  iVar3 = (uVar2 & 3) * 0x20 + ((uVar2 & 0xf) >> 2) * 0x14 + uVar4;
  if (bVar5) {
    uVar4 = uVar2 << 0x17;
  }
  if (bVar5) {
    uVar4 = uVar4 >> 0x1d;
  }
  if (bVar5) {
    uVar4 = uVar4 * 3;
  }
  if (bVar5) {
    uVar4 = uVar4 * 4;
  }
  else {
    uVar4 = uVar1 >> 4 & 0x1c;
  }
  return iVar3 + (uVar1 >> 6 & 8) + (uVar1 >> 8 & 0xc) + uVar4 + ((uVar2 & 0x7fff) >> 0xd) * 0x14 +
         (uint)(uVar1 >> 0xf) * 8 + *(int *)(param_1 + 0x78);
}



void fn_006e29c0(int param_1,float *param_2)

{
  float in_s0;
  float fVar1;
  float in_s1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fn_001781f0(param_2,param_1 + 0x48);
  fn_006e1f68(param_1);
  fVar2 = in_s1;
  fVar1 = in_s0;
  fn_006e2784(param_1,param_1 + 0x3c,0);
  fVar2 = fVar2 - in_s1;
  fVar5 = param_2[1];
  fVar1 = fVar1 + in_s0;
  fVar3 = param_2[5];
  fVar4 = param_2[9];
  param_2[1] = -fVar5;
  param_2[5] = -fVar3;
  param_2[9] = -fVar4;
  param_2[3] = *param_2 * fVar1 + fVar5 * fVar2 + param_2[3];
  param_2[7] = param_2[4] * fVar1 + fVar3 * fVar2 + param_2[7];
  param_2[0xb] = param_2[8] * fVar1 + fVar4 * fVar2 + param_2[0xb];
  return;
}


