#include "0040b754_0040c4b4.h"



void fn_0040c4b4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  bVar1 = *(byte *)(param_1 + 0x58) & 7;
  if (bVar1 == 1) {
    piVar4 = *(int **)(param_1 + 0x14);
    (**(code **)(*(int *)piVar4[0x5c] + 0x94))();
    (**(code **)(*piVar4 + 0x1d4))(piVar4,param_1 + 0x5c,param_1 + 0x68,param_1 + 0x74);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x154))();
    iVar3 = **(int **)(param_1 + 0x14);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0040c580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar3 + 0x44))(*(int **)(param_1 + 0x14),3,4,0);
      return;
    }
    iVar2 = (**(code **)(iVar3 + 0x14c))();
    if (iVar2 != 0) {
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),6,4,0);
  }
  else if ((bVar1 != 2) || (iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))(), iVar2 == 0))
  {
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x0040c514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x194))(*(int **)(param_1 + 0x14),0);
  return;
}



void fn_0040c350(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fn_0040c268();
  if (*(int *)(param_1 + 0xc) == 4) {
    uVar2 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar2;
    if (0x3c < uVar2) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0xc) = 5;
      *(undefined4 *)(param_1 + 0x10) = 0;
      fn_002fdea0();
      return;
    }
  }
  else if (*(int *)(param_1 + 0xc) == 5) {
    iVar1 = fn_006f7a84(DAT_008977e0);
    iVar3 = *(int *)(param_1 + 0x14);
    fVar4 = *(float *)(iVar1 + 0x20) - *(float *)(iVar3 + 0x20);
    fVar5 = *(float *)(iVar1 + 0x28) - *(float *)(iVar3 + 0x28);
    iVar1 = fn_006aff38(iVar3,0);
    iVar3 = fn_002fdebc(param_1,0x3c);
    if (iVar3 != 0 || (iVar1 == 0 || 0x471c4000 < (int)(fVar4 * fVar4 + fVar5 * fVar5))) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x1dc))(*(int **)(param_1 + 0x14),1,0x11,0);
      if (*(char *)(*(int *)(param_1 + 4) + 4) == '\0') {
        *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 1;
      }
    }
  }
  return;
}



void fn_0040c268(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14);
  iVar2 = fn_006f7a84(DAT_008977e0);
  bVar1 = *(float *)(iVar3 + 0x20) - *(float *)(iVar2 + 0x20) == 0.0;
  if ((bVar1 && (bVar1 && *(float *)(iVar3 + 0x24) - *(float *)(iVar2 + 0x24) == 0.0)) &&
      *(float *)(iVar3 + 0x28) - *(float *)(iVar2 + 0x28) == 0.0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x94))();
  fn_001c7228(*(undefined4 *)(param_1 + 0x14),1);
                    /* WARNING: Could not recover jumptable at 0x0040c334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),1,4,0);
  return;
}



void fn_0040c0ac(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x60))();
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x38))(*(int **)(param_1 + 0x14),param_1 + 0x30,1);
  }
  else {
    fn_001c7228(*(undefined4 *)(param_1 + 0x14),1);
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),1,4,0);
  if (*(int *)(param_1 + 0xc) == 4) {
    uVar3 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar3;
    if (0x3c < uVar3) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0xc) = 5;
      *(undefined4 *)(param_1 + 0x10) = 0;
      fn_00215d9c(*(undefined4 *)(param_1 + 0x14),0x14,0,1);
      return;
    }
  }
  else if ((*(int *)(param_1 + 0xc) == 5) &&
          (piVar2 = *(int **)(param_1 + 0x14), (float)piVar2[0x3e] <= 0.0)) {
    (**(code **)(*piVar2 + 0x1bc))(piVar2,0);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x1c4))(*(int **)(param_1 + 0x14),1);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14),0);
    piVar2 = (int *)fn_006f7508(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x0040c1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 100))
              (piVar2,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x170) + 0xfc),4,0);
    return;
  }
  return;
}



undefined4 fn_0040bf6c(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fn_002fdeac();
  fn_00214c4c(*(undefined4 *)(param_1 + 0x14),7,1);
  iVar1 = fn_006b0d10(*(undefined4 *)(param_1 + 0x14),0);
  fVar4 = 0.0;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0xc) = 5;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x14);
    fVar3 = (float)piVar2[10];
    fVar7 = (float)piVar2[8] - *(float *)(iVar1 + 0x20);
    fVar5 = (float)piVar2[9] - *(float *)(iVar1 + 0x24);
    fVar6 = fVar3 - *(float *)(iVar1 + 0x28);
    iVar1 = (**(code **)(*piVar2 + 0x60))(piVar2);
    if (iVar1 == 0) {
      fVar3 = 0.5;
    }
    if (iVar1 == 0) {
      fVar5 = fVar5 * fVar3;
    }
    else {
      fVar5 = fVar4;
    }
    if ((fVar7 != fVar4 || (fVar7 != fVar4 || fVar5 != fVar4)) || fVar6 != fVar4) {
      fVar3 = 1.0 / SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
      fVar7 = fVar7 * fVar3;
      fVar5 = fVar5 * fVar3;
      fVar6 = fVar6 * fVar3;
    }
    (**(code **)(**(int **)(param_1 + 0x14) + 0x94))();
    *(float *)(param_1 + 0x38) = fVar6 * fVar3;
    *(float *)(param_1 + 0x30) = fVar7 * fVar3;
    *(float *)(param_1 + 0x34) = fVar5 * fVar3;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(uint *)(*(int *)(param_1 + 0x14) + 0x138) = *(uint *)(*(int *)(param_1 + 0x14) + 0x138) | 2;
  return 1;
}



undefined4 * fn_0040be40(undefined4 param_1,undefined4 param_2,short *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)fn_002fdf94(param_1,param_2,10);
  uVar4 = 0;
  *puVar2 = &DAT_00837fb0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar1 = DAT_008f9e34;
  uVar4 = DAT_008f9e30;
  puVar2[0x1c] = DAT_008f9e2c;
  puVar2[0x1d] = uVar4;
  puVar2[0x1e] = uVar1;
  if (param_3 == (short *)0x0) {
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    *(undefined1 *)(puVar2 + 0x19) = 0;
  }
  else {
    puVar2[0x16] = (int)*param_3;
    puVar2[0x17] = (uint)*(byte *)(param_3 + 1);
    puVar2[0x18] = *(undefined4 *)(param_3 + 2);
    *(char *)(puVar2 + 0x19) = (char)param_3[4];
  }
  return puVar2;
}



undefined4 fn_0040bab0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = fn_002fdeac();
  iVar5 = 0;
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
  iVar6 = *(int *)(iVar7 + 0x100);
  if (0 < iVar6) {
    do {
      piVar2 = (int *)fn_006bb544(iVar7,iVar5);
      if (((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x168))(piVar2), iVar3 != 0))
         && ((int)(short)piVar2[0x5a] == *(int *)(param_1 + 0x58))) {
        *(undefined4 *)(param_1 + 0xc) = 6;
        *(undefined4 *)(param_1 + 0x10) = 0;
        return uVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),1);
  fn_00215b58(*(undefined4 *)(param_1 + 0x14),2);
  fn_00214c4c(*(undefined4 *)(param_1 + 0x14),2,2,1);
  iVar5 = fn_006f7a84(DAT_008977e0);
  fn_001c72c0(*(undefined4 *)(param_1 + 0x14),iVar5 + 0x20);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))
            (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x5c),4,0);
  iVar5 = *(int *)(param_1 + 0x14);
  fVar9 = *(float *)(*(int *)(iVar5 + 0x100) + 0xc) * 2.5;
  fVar10 = *(float *)(*(int *)(param_1 + 0x14) + 0x30);
  fVar8 = fVar10;
  fn_006faec0();
  *(float *)(param_1 + 0x70) = *(float *)(iVar5 + 0x20) + fVar10 * fVar9;
  fn_006f9fb0();
  *(float *)(param_1 + 0x78) = *(float *)(iVar5 + 0x28) + fVar8 * fVar9;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar5 + 0x24);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0xf0))();
  uVar4 = fn_006f7388(DAT_008977e0);
  fn_0023b858(uVar4,uVar1,param_1 + 0x70,param_1 + 0x70,0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 1;
}



void fn_0040b93c(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x18) + 1;
  *(uint *)(param_1 + 0x18) = uVar1;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),1,4,0);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x34))();
  if (uVar1 < 0x3d) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x1dc))(*(int **)(param_1 + 0x14),1,0x11,0);
  if (*(char *)(*(int *)(param_1 + 4) + 4) == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 1;
  }
  fn_002171d4(*(undefined4 *)(param_1 + 0x14),0,0x3c);
  return;
}



void fn_0040b8ac(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  fVar2 = *(float *)(iVar1 + 0x20) - *(float *)(*(int *)(param_1 + 0x14) + 0x20);
  fVar3 = *(float *)(iVar1 + 0x28) - *(float *)(*(int *)(param_1 + 0x14) + 0x28);
  if ((fVar2 != 0.0) || (fVar3 != 0.0)) {
    fVar2 = fVar2 * (1.0 / SQRT(fVar2 * fVar2 + 0.0 + fVar3 * fVar3));
  }
  iVar1 = *(int *)(param_1 + 0x14);
  fn_006f9cac();
  *(float *)(iVar1 + 0x30) = fVar2;
  return;
}



void fn_0040b754(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003632b0();
  *puVar1 = &DAT_00837e30;
  puVar1[0x85] = 0;
  puVar1[0x86] = 0;
  puVar1[0x87] = 0;
  puVar1[0x88] = 0;
  puVar1[0x89] = 0;
  *(undefined1 *)(puVar1 + 0x8a) = 0;
  puVar1[0x8b] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x8c) = 0;
  puVar1[0x8d] = 0;
  return;
}


