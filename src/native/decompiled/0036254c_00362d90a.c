#include "0036254c_00362d90a.h"



undefined4 fn_00362938(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (((*(char *)(param_2 + 0xdc) == '\0') && ((char)param_1[0x16] != '\0')) && (param_1[0x5a] == 0)
     ) {
    fVar4 = *(float *)(param_2 + 0x20) - (float)param_1[8];
    fVar3 = *(float *)(param_2 + 0x24) - (float)param_1[9];
    fVar5 = *(float *)(param_2 + 0x28) - (float)param_1[10];
    fVar4 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
    iVar1 = fn_006f7a84(DAT_008977e0);
    fVar3 = *(float *)(*(int *)(iVar1 + 0x100) + 0xc) + 24.0;
    fVar3 = fVar3 * fVar3;
    bVar2 = fVar4 == fVar3;
    if (fVar4 <= fVar3) {
      bVar2 = param_1[0x5a] == 0;
    }
    if (bVar2) {
      (**(code **)(*param_1 + 0x44))(param_1,1,4,0);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return 0;
}



void fn_003628bc(int *param_1)

{
  int iVar1;
  
  fn_001db0c4();
  iVar1 = param_1[0x5a];
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
      if (iVar1 != 0) {
        param_1[0x5a] = 2;
      }
    }
    else if (iVar1 == 2) {
      param_1[0x5a] = 3;
      (**(code **)(*param_1 + 0x58))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00362914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x54))(param_1,0);
      return;
    }
  }
  return;
}



undefined4 fn_003627d4(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_001d99a0(param_1,param_2,0);
  uVar2 = fn_006f7a9c(DAT_008977e0);
  fn_00279bbc(uVar2,param_2 + 1);
  param_1[0x4e] = param_1[0x4e] | 0x20;
  (**(code **)(*param_1 + 0x10c))(param_1,1);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  (**(code **)(*param_1 + 0x54))(param_1,1);
  param_1[0x5a] = 0;
  fn_001d96a0(param_1,&DAT_007c1150);
  param_1[0x4e] = param_1[0x4e] | 8;
  (**(code **)(*param_1 + 0x44))(param_1,0,4);
  (**(code **)(*param_1 + 0x20))(param_1);
  return uVar1;
}



void fn_003627ac(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001d9fcc(param_1);
  return;
}



undefined4 *
fn_0036254c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar2 = (undefined4 *)fn_001dbf48(param_1,8,param_3,param_4,param_4);
  *puVar2 = &DAT_0082707c;
  puVar2[0x5a] = 0;
  uVar12 = 2;
  iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc;
  if (iVar3 < 3) {
    if ((puVar2[0x55] & 0x3fffffff) < 2) {
      piVar4 = (int *)puVar2[0x52];
      if (((piVar4 == (int *)0x0) || ((puVar2[0x55] & 0xc0000000) != 0x40000000)) ||
         (puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4,0x18),
         puVar5 == (undefined4 *)0x0)) {
        uVar12 = puVar2[0x55] & 0x3fffffff;
      }
      else {
        iVar3 = 0;
        puVar8 = (undefined4 *)puVar2[0x53];
        puVar10 = (undefined4 *)puVar2[0x54];
        puVar6 = puVar5;
        if (puVar8 != puVar10) {
          do {
            if (puVar6 != (undefined4 *)0x0) {
              uVar13 = puVar8[1];
              uVar14 = puVar8[2];
              *puVar6 = *puVar8;
              puVar6[1] = uVar13;
              puVar6[2] = uVar14;
            }
            puVar8 = puVar8 + 3;
            puVar6 = puVar6 + 3;
          } while (puVar8 != puVar10);
          iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc;
        }
        uVar7 = puVar2[0x53];
        if (uVar7 != 0) {
          uVar11 = puVar2[0x54];
          uVar1 = uVar7;
          if (uVar7 < uVar11) {
            iVar9 = 1;
            if (1 < (int)(uVar11 - uVar7) / 0xc + 1) {
              do {
                iVar9 = iVar9 + 1;
              } while (iVar9 < (int)(uVar11 - uVar7) / 0xc + 1);
            }
          }
          else {
            for (; uVar1 != uVar11; uVar1 = uVar1 + 0xc) {
            }
          }
          puVar2[0x54] = uVar7;
          piVar4 = (int *)puVar2[0x52];
          (**(code **)(*piVar4 + 0xc))(piVar4,puVar2[0x53]);
        }
        puVar2[0x53] = puVar5;
        puVar2[0x54] = puVar5 + iVar3 * 3;
        puVar2[0x55] = puVar2[0x55] & 0xc0000000 | 2;
      }
    }
    for (iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc; iVar3 < (int)uVar12; iVar3 = iVar3 + 1) {
      puVar5 = (undefined4 *)(puVar2[0x53] + iVar3 * 0xc);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xffffffff;
        puVar5[1] = 0xffffffff;
        puVar5[2] = 0xffffffff;
      }
    }
    iVar3 = puVar2[0x53] + uVar12 * 0xc;
  }
  else {
    do {
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar3);
    iVar3 = puVar2[0x53] + 0x18;
  }
  puVar2[0x54] = iVar3;
  fn_001da490(puVar2,0,0,0,0);
  fn_001da490(puVar2,1,1,1,1);
  return puVar2;
}


