#include "002f0374_002f0860.h"



void fn_002f0860(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int *piVar4;
  float fVar5;
  float local_30;
  float local_2c;
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  
  if (*(int *)(param_1 + 4) == 0) {
    fn_001ccb7c(param_3);
    fn_001ccb7c(param_2);
    fn_002efb24(param_1,local_28,local_1c,param_4);
  }
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 == '\0') {
    fn_002f09a4(param_1);
  }
  else {
    if (cVar1 == '\x01') {
      local_30 = *(float *)(param_1 + 0x2c);
      local_2c = *(float *)(param_1 + 0x34);
      piVar4 = *(int **)(*(int *)(param_1 + 0x5c) + 4);
      fVar5 = 1.0 / SQRT(local_30 * local_30 + local_2c * local_2c);
      local_30 = local_30 * fVar5;
      local_2c = local_2c * fVar5;
      (**(code **)(*piVar4 + 0x58))(piVar4,&local_30);
      uVar3 = 2;
    }
    else {
      if (cVar1 != '\x02') goto LAB_002f096c;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x5c) + 4) + 100))();
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0x58) = uVar3;
  }
LAB_002f096c:
  bVar2 = *(byte *)(*(int *)(*(int *)(param_1 + 0x5c) + 4) + 0x104);
  if ((&DAT_00896ca8)[bVar2] != '\0') {
    (&DAT_00896ca8)[bVar2] = (&DAT_00896ca8)[bVar2] + -1;
  }
  return;
}



void fn_002f0374(int param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_90 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_34;
  float *pfStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  bVar1 = false;
  iVar6 = 0;
  iStack_34 = param_1;
  pfStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  fn_0014481c(DAT_008977e8);
  iVar2 = fn_00261f54();
  if (iVar2 < 1) {
LAB_002f049c:
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    do {
      uVar3 = fn_0014481c(DAT_008977e8);
      piVar4 = (int *)fn_00263780(uVar3,iVar6);
      iVar2 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
      fVar9 = (float)piVar4[2] - *(float *)(iVar2 + 8);
      fVar7 = (float)piVar4[3] - *(float *)(iVar2 + 0xc);
      fVar8 = (float)piVar4[4] - *(float *)(iVar2 + 0x10);
      if (((int)SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8) < 0x42480001) &&
         (((iVar2 = (**(code **)(*piVar4 + 0x58))(piVar4), iVar2 == 1 ||
           (iVar2 = (**(code **)(*piVar4 + 0x58))(piVar4), iVar2 == 5)) ||
          (iVar2 = (**(code **)(*piVar4 + 0x58))(piVar4), iVar2 == 3)))) {
        bVar1 = true;
      }
      iVar6 = iVar6 + 1;
      fn_0014481c(DAT_008977e8);
      iVar2 = fn_00261f54();
    } while (iVar6 < iVar2);
    if (!bVar1) goto LAB_002f049c;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  iVar2 = fn_003c922c(*(undefined1 *)(*(int *)(*(int *)(param_1 + 0x5c) + 4) + 0x104),local_2c);
  if (iVar2 + 1 <= *(int *)(param_1 + 0x38)) {
    piVar4 = *(int **)(*(int *)(param_1 + 0x5c) + 4);
    (**(code **)(*piVar4 + 0x60))(piVar4,0);
  }
  if ((1 < *(byte *)(*(int *)(*(int *)(param_1 + 0x5c) + 4) + 400)) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x5c) + 4), fVar7 = *(float *)(iVar2 + 8) - *param_2,
     fVar8 = *(float *)(iVar2 + 0xc) - param_2[1], fVar9 = *(float *)(iVar2 + 0x10) - param_2[2],
     0x42c7ffff < (int)SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9))) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
    fVar8 = *(float *)(iVar2 + 0x10);
    fVar9 = *(float *)(iVar2 + 0xc);
    fVar13 = *param_2 - *(float *)(iVar2 + 8);
    fVar11 = param_2[2] - fVar8;
    fVar10 = param_2[1] - fVar9;
    fVar7 = fVar13 * fVar13 + fVar10 * fVar10 + fVar11 * fVar11;
    fVar14 = SQRT(fVar7);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x5c) + 4) + 0x5c))();
    fVar12 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
    fVar7 = 0.0;
    if ((0.0 < fVar12) && (0.0 < fVar14)) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x5c) + 4) + 0x5c))();
      fVar7 = (fVar13 * fVar7 + fVar10 * fVar8 + fVar11 * fVar9) / (fVar14 * fVar12);
      fn_006f9b80();
      if ((int)ABS(fVar7) < 0x3ea0d97c) {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x5c) + 4) + 100))();
      }
    }
  }
  local_90[0] = 0.0;
  local_90[1] = 400.0;
  local_90[2] = 200.0;
  local_90[3] = 300.0;
  uStack_80 = 0x43960000;
  uStack_7c = 0x43480000;
  uStack_78 = 0x428c0000;
  uStack_74 = 0x42c80000;
  local_70 = 0x42480000;
  uStack_6c = 0x43160000;
  uStack_68 = 0x42480000;
  uStack_64 = 0x42480000;
  uStack_60 = 0x42480000;
  uStack_5c = 0x42480000;
  uStack_58 = 0x42480000;
  uStack_54 = 0x42480000;
  if (param_6 == 0) {
    return;
  }
  fVar7 = *param_2 - *(float *)(*(int *)(*(int *)(param_1 + 0x5c) + 4) + 8);
  fVar8 = *(float *)(*(int *)(*(int *)(param_1 + 0x5c) + 4) + 0x24);
  fn_00525bd0();
  bVar1 = (int)ABS(fVar7 * 0.024543693 - fVar8) < 0x3e860a92;
  iVar2 = fn_006f7fec(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4),1);
  if (bVar1) {
    iVar6 = fn_006f8240(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4),0);
    if (iVar6 == 0) {
      iVar6 = fn_006f7fec(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4),0);
      iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
      fVar9 = *(float *)(iVar5 + 8) - *param_2;
      fVar7 = *(float *)(iVar5 + 0xc) - param_2[1];
      fVar8 = *(float *)(iVar5 + 0x10) - param_2[2];
      if (SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8) <= local_90[iVar6]) {
        piVar4 = *(int **)(*(int *)(param_1 + 0x5c) + 4);
        (**(code **)(*piVar4 + 0x68))(piVar4,0);
      }
    }
    iVar6 = fn_006f8240(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4),1);
    if (iVar6 == 0) {
      iVar6 = fn_006f7fec(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4),1);
      iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
      fVar9 = *(float *)(iVar5 + 8) - *param_2;
      fVar7 = *(float *)(iVar5 + 0xc) - param_2[1];
      fVar8 = *(float *)(iVar5 + 0x10) - param_2[2];
      if (SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8) <= local_90[iVar6]) {
        if (*(char *)(param_1 + 0x24) != '\0') goto LAB_002f07f8;
        piVar4 = *(int **)(*(int *)(param_1 + 0x5c) + 4);
        (**(code **)(*piVar4 + 0x68))(piVar4,1);
        if (iVar2 == 2) {
          *(undefined1 *)(param_1 + 0x24) = 1;
          *(undefined4 *)(param_1 + 0x28) = 0;
          goto LAB_002f07f8;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    return;
  }
LAB_002f07f8:
  iVar2 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar2 + 1;
  if ((10 < iVar2) && (bVar1)) {
    piVar4 = *(int **)(*(int *)(param_1 + 0x5c) + 4);
    (**(code **)(*piVar4 + 0x70))(piVar4,1);
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return;
}


