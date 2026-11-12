#include "006f6628_006f6e40.h"



undefined1 fn_006f6e40(int *param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = *(undefined1 *)(*param_1 + 4);
  }
  return uVar1;
}



int fn_006f6e30(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x44;
}



void fn_006f6cbc(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  
  uVar5 = 0;
  iVar6 = *(int *)(param_2 + 4);
  iVar1 = *(int *)(iVar6 + 4);
  if (iVar1 == 0xc) {
    uVar7 = 0xf;
  }
  else {
    uVar7 = *(undefined1 *)(iVar6 + 0xc);
  }
  if (*(int *)(iVar6 + 8) != 0) {
    do {
      iVar4 = iVar1 + iVar6 + uVar5 * 0x28;
      iVar2 = fn_002febd8(param_3);
      if (iVar2 < 0) {
        iVar2 = fn_003035b0(iVar4,param_3);
      }
      else {
        iVar2 = fn_00147e6c(iVar4,param_3,iVar2);
      }
      if (iVar2 == 0) {
        uVar3 = *(undefined4 *)(iVar4 + 0x24);
        iVar6 = *(int *)(iVar4 + 0x20) + iVar6;
        *param_1 = uVar3;
        iVar1 = fn_0017fb98(uVar7,1);
        param_1[1] = iVar1 + iVar6;
        iVar1 = fn_0017fb98(uVar7,2);
        param_1[2] = iVar1 + iVar6;
        iVar1 = fn_0017fb98(uVar7,4);
        param_1[3] = iVar1 + iVar6;
        iVar1 = fn_0017fb98(uVar7,8);
        param_1[4] = iVar1 + iVar6;
        *(undefined1 *)(param_1 + 5) = uVar7;
        param_1[6] = uVar3;
        param_1[7] = iVar4;
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(iVar6 + 8));
  }
  *param_1 = 0;
  uVar3 = fn_0017fb98(0,1);
  param_1[1] = uVar3;
  uVar3 = fn_0017fb98(0,2);
  param_1[2] = uVar3;
  uVar3 = fn_0017fb98(0,4);
  param_1[3] = uVar3;
  uVar3 = fn_0017fb98(0,8);
  param_1[4] = uVar3;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = &DAT_006f6e2c;
  return;
}



uint fn_006f6c60(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(int *)(*param_1 + 0x328) == 0) {
    return 9;
  }
  piVar3 = *(int **)(*(int *)(*param_1 + 0x328) + 4);
  iVar1 = *piVar3;
  if (iVar1 == piVar3[1]) {
    fn_00144810(DAT_008977e8);
    uVar2 = fn_006a8694();
    return uVar2;
  }
  return (uint)*(byte *)(iVar1 + 0x13);
}



void fn_006f6bac(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 800) != 0) {
    return;
  }
  if ((((byte)DAT_008c62ec & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62ec), iVar1 != 0)) {
    DAT_008c62f0 = 0;
    DAT_008c62f4 = 0;
  }
  return;
}



void fn_006f6b40(void)

{
  return;
}



void fn_006f6ad8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  fn_0068c6a0(DAT_008977e8);
  cVar1 = *(char *)(param_1 + 0x53);
  uVar2 = fn_00144810(DAT_008977e8);
  fn_006a8a10(uVar2,(int)cVar1);
  return;
}



void fn_006f6a9c(void)

{
  return;
}



void fn_006f6a90(void)

{
  return;
}



undefined4 fn_006f6a08(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 & ~param_3) == 0) {
    if ((param_3 & ~param_2) == 0) {
      if ((param_2 & param_3) == 0) {
        return 0;
      }
      if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
        return 0;
      }
      if (*(char *)(DAT_00897808 + 0x1c) == '\0') {
        return 0;
      }
      if (*(uint *)(DAT_00897808 + 0x18) >> 0x18 != 0xff) {
        return 0;
      }
      if (*(int *)(DAT_0089780c + 0x14) != *(int *)(DAT_0089780c + 0xc)) {
        return 0;
      }
      if (*(char *)(DAT_0089780c + 0x1c) == '\0') {
        return 0;
      }
      uVar1 = *(uint *)(DAT_0089780c + 0x18);
    }
    else {
      if (*(int *)(DAT_0089780c + 0x14) != *(int *)(DAT_0089780c + 0xc)) {
        return 0;
      }
      if (*(char *)(DAT_0089780c + 0x1c) == '\0') {
        return 0;
      }
      uVar1 = *(uint *)(DAT_0089780c + 0x18);
    }
  }
  else {
    if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
      return 0;
    }
    if (*(char *)(DAT_00897808 + 0x1c) == '\0') {
      return 0;
    }
    uVar1 = *(uint *)(DAT_00897808 + 0x18);
  }
  if (uVar1 >> 0x18 == 0xff) {
    return 1;
  }
  return 0;
}



void fn_006f6988(void)

{
  return;
}



void fn_006f6908(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1cc);
  iVar3 = *(int *)(param_1 + 0x1dc);
  if (iVar2 == -1 && iVar3 == 0) {
    return;
  }
  if (iVar2 == -1) {
    puVar1 = &DAT_00891e48;
  }
  else {
    puVar1 = (undefined *)(DAT_008c92cc + iVar2 * 0x60);
  }
  if (puVar1[10] == '\0') {
    fn_0016ba34(DAT_00897800,DAT_00898224,iVar3,0);
    return;
  }
  fn_0016ba34(DAT_00897800,DAT_00898210,iVar3,0);
  return;
}



void fn_006f6628(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined1 auStack_58 [60];
  
  fVar9 = 0.0;
  local_74 = 0;
  local_70 = 0.0;
  local_6c = 0;
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
  if (*(int *)(param_1 + 0x1cc) == -1) {
    puVar2 = &DAT_00891e48;
  }
  else {
    puVar2 = (undefined *)(DAT_008c92cc + *(int *)(param_1 + 0x1cc) * 0x60);
  }
  iVar3 = fn_00191238(uVar1,puVar2 + 0x4c);
  if (-1 < iVar3) {
    uVar4 = fn_0016676c(uVar1);
    fn_001781f0(&local_68,uVar4);
    fn_0016947c(&local_74,&local_68);
  }
  *param_2 = local_74;
  param_2[1] = local_70;
  param_2[2] = local_6c;
  if (((DAT_00891e38 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_00891e38), iVar3 != 0)) {
    DAT_008c92c0 = fVar9;
    DAT_008c92c4 = fVar9;
    DAT_008c92c8 = fVar9;
  }
  if (*(int *)(param_1 + 0x1cc) == -1) {
    fVar6 = DAT_008c92c8;
    fVar5 = DAT_008c92c4;
    fVar8 = DAT_008c92c0;
  }
  else {
    iVar3 = DAT_008c92cc + *(int *)(param_1 + 0x1cc) * 0x60;
    fVar6 = *(float *)(iVar3 + 0x28);
    fVar5 = *(float *)(iVar3 + 0x24);
    fVar8 = *(float *)(iVar3 + 0x20);
  }
  param_2[9] = fVar8;
  param_2[0xb] = fVar6;
  param_2[10] = fVar5;
  param_2[9] = fVar8 + *(float *)(param_1 + 0x19c);
  param_2[10] = (float)param_2[10] + *(float *)(param_1 + 0x1a0);
  param_2[0xb] = (float)param_2[0xb] + *(float *)(param_1 + 0x1a4);
  if (((DAT_00891e34 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_00891e34), iVar3 != 0)) {
    DAT_008c92b8 = 0x40a00000;
    DAT_008c92bc = 0xc1eb3333;
    DAT_008c92b4 = fVar9;
  }
  if (*(int *)(param_1 + 0x1cc) == -1) {
    uVar4 = DAT_008c92bc;
    fVar6 = DAT_008c92b4;
    uVar7 = DAT_008c92b8;
  }
  else {
    iVar3 = DAT_008c92cc + *(int *)(param_1 + 0x1cc) * 0x60;
    uVar4 = *(undefined4 *)(iVar3 + 0x1c);
    fVar6 = *(float *)(iVar3 + 0x14);
    uVar7 = *(undefined4 *)(iVar3 + 0x18);
  }
  param_2[8] = uVar4;
  param_2[6] = fVar6;
  param_2[7] = uVar7;
  iVar3 = fn_006f7a84(DAT_008977e0);
  uVar4 = fn_0017fde4(*(undefined4 *)(iVar3 + 0xe4));
  iVar3 = fn_00191238(uVar4,(char *)&DAT_006f68fc);
  local_68 = fVar9;
  local_64 = fVar9;
  local_60 = fVar9;
  if (-1 < iVar3) {
    uVar1 = fn_0016676c(uVar1);
    fn_001781f0(auStack_58,uVar1);
    fn_0016947c(&local_68,auStack_58);
  }
  param_2[7] = (local_64 - local_70) + (float)param_2[7];
  param_2[6] = (float)param_2[6] + *(float *)(param_1 + 400);
  param_2[7] = (float)param_2[7] + *(float *)(param_1 + 0x194);
  param_2[8] = (float)param_2[8] + *(float *)(param_1 + 0x198);
  iVar3 = fn_006f7a84(DAT_008977e0);
  fVar6 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
  fn_00525bd0();
  param_2[3] = fVar9;
  param_2[4] = fVar9 + fVar6 * 0.024543693;
  param_2[5] = fVar9;
  return;
}


