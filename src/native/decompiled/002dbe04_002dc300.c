#include "002dbe04_002dc300.h"



bool fn_002dc300(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x150))(param_1);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x138))(param_1);
  }
  return iVar1 != 0;
}



void fn_002dc164(int *param_1)

{
  bool bVar1;
  int extraout_r1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_38;
  float local_34;
  float local_30;
  
  if (*(char *)(DAT_008977e0 + 0x170) == '\x01') {
    return;
  }
  iVar2 = param_1[0x67];
  fn_00169f1c(param_1[0x6a] + 1,(param_1[0x68] - iVar2) / 0xc);
  pfVar3 = (float *)(iVar2 + extraout_r1 * 0xc);
  fVar5 = *pfVar3 - (float)param_1[8];
  fVar8 = pfVar3[2] - (float)param_1[10];
  fVar9 = pfVar3[1] - (float)param_1[9];
  bVar1 = fVar5 == 0.0;
  bVar4 = bVar1 || (bVar1 || fVar8 == 0.0);
  if (!bVar1 && (!bVar1 && fVar8 != 0.0)) {
    bVar4 = param_1[0x3a] == -1;
  }
  if (!bVar4) {
    fn_00525bd0();
    fn_005df8f8();
    fn_0023e2ac(*(undefined4 *)(DAT_008977e0 + 0x2c),param_1[0x3a]);
  }
  if ((float)param_1[0x6b] * (float)param_1[0x6b] < fVar5 * fVar5 + fVar9 * fVar9 + fVar8 * fVar8) {
    fVar6 = 1.0 / SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar8 * fVar8);
    fVar7 = (float)param_1[0x6b];
    local_38 = (float)param_1[8] + fVar5 * fVar6 * fVar7;
    local_34 = (float)param_1[9] + fVar9 * fVar6 * fVar7;
    local_30 = (float)param_1[10] + fVar8 * fVar6 * fVar7;
    (**(code **)(*param_1 + 0x10))(param_1,&local_38);
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1,pfVar3);
    param_1[0x6a] = extraout_r1;
  }
  fn_001db0c0(param_1);
  return;
}



void fn_002dc120(int *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x13c))(param_1);
  uVar1 = fn_006f7a70(DAT_008977e0);
  fn_002ff3b4(uVar1,param_1[0x4f]);
                    /* WARNING: Could not recover jumptable at 0x002dc15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))(param_1);
  return;
}



undefined4 fn_002dc0b8(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_002113c8();
  (**(code **)(*param_1 + 0x10))(param_1,param_1[0x67] + param_1[0x6a] * 0xc);
  param_1[0x4e] = param_1[0x4e] & 0xfffffff7U | (**(int **)(DAT_008977e0 + 0x40) != 0 ^ 1) << 3;
  return uVar1;
}



void fn_002dc094(int *param_1)

{
  (**(code **)(*param_1 + 0x14c))(param_1);
  fn_001d9f9c(param_1);
  return;
}



void fn_002dc06c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_006f7a70(DAT_008977e0);
  fn_002ff3b4(uVar1,*(undefined4 *)(param_1 + 0x13c));
  return;
}



void fn_002dc000(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((char)param_1[0x6d] == '\0') {
    iVar1 = fn_006f733c(DAT_008977e0);
    if (iVar1 == 0) {
      piVar2 = (int *)fn_006f72e0(DAT_008977e0);
      iVar1 = (**(code **)(*piVar2 + 0x3c))();
      if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002dc064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x58))(param_1,0);
        return;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x4e) & 4) != 0) {
    return;
  }
  if ((float)param_1[0x3e] == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x001da408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x58))(param_1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001da410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1,1);
  return;
}



void fn_002dbf90(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((char)param_1[0x6d] == '\0') {
    iVar1 = fn_006f733c(DAT_008977e0);
    if (iVar1 == 0) {
      piVar2 = (int *)fn_006f72e0(DAT_008977e0);
      iVar1 = (**(code **)(*piVar2 + 0x3c))();
      if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002dbff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xd8))(param_1);
        return;
      }
    }
  }
  fn_00210f78(param_1);
  return;
}



void fn_002dbe90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  
  uVar1 = fn_001287b4();
  iVar2 = fn_0011c184(L"rom:/data/Script/Field/Demo/demoBase.nut",uVar1,4,5);
  if ((iVar2 == 0) || (iVar3 = fn_00145ac0(), iVar3 == 0)) {
    return;
  }
  iVar3 = fn_00145b00(8,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_00128f40();
  }
  piVar6 = *(int **)(param_1 + 4);
  if (piVar6 != piVar4) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 4) = piVar4;
  }
  uVar1 = fn_0012a26c(iVar2);
  uVar5 = fn_00145ac0(iVar2);
  fn_00128ee0(*(undefined4 *)(param_1 + 4),uVar5,uVar1);
  fn_0012d73c(iVar2);
  return;
}



void fn_002dbe64(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



undefined4 fn_002dbe28(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_002d8370(0xffffffff);
  if ((iVar1 == 0) || (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) != 3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_002dbe24(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_002d8370(0xffffffff);
  if ((iVar1 == 0) || (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) != 3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_002dbe14(undefined1 param_1)

{
  DAT_00891251 = param_1;
  return;
}



int fn_002dbe04(void)

{
  return (int)DAT_00891251;
}


