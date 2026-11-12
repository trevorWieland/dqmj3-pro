#include "00441a28_00442598.h"



void fn_00442598(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar3 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
  iVar4 = *(int *)(iVar5 + 0x100);
  if (0 < iVar4) {
    do {
      iVar1 = fn_006bb544(iVar5,iVar3);
      if (*(int *)(param_1 + 0x14) != iVar1) {
        uVar2 = *(uint *)(iVar1 + 0x19c);
        bVar6 = *(short *)(uVar2 + 0x5e) != 0x14;
        if (bVar6) {
          uVar2 = (uint)*(ushort *)(uVar2 + 0x66);
        }
        if (bVar6 && uVar2 != 0x14) {
          fn_00683320(iVar1,3,0);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}



undefined4 fn_00442500(int *param_1,int param_2)

{
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x2c))(param_1);
    param_1[3] = 4;
    param_1[4] = 0;
  }
  else if (param_2 == 2) {
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  else if ((param_2 != 1) && (param_2 == 0x10)) {
    (**(code **)(*(int *)param_1[5] + 0x1dc))((int *)param_1[5],1,0x11,0);
    if (*(char *)(param_1[1] + 4) == '\0') {
      *(undefined4 *)(param_1[1] + 0xc) = 1;
    }
  }
  return 1;
}



undefined4 fn_004424c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006aff38(*(undefined4 *)(param_1 + 0x14),0);
  if ((iVar1 == 0) && (iVar1 = fn_006b1300(*(undefined4 *)(param_1 + 0x14),0), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 * fn_004423e4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x1d);
  *puVar1 = &DAT_0083dda0;
  pfVar2 = (float *)fn_006f7770(DAT_008977e0);
  fVar3 = *(float *)(puVar1[5] + 0x20) - *pfVar2;
  fVar4 = *(float *)(puVar1[5] + 0x28) - pfVar2[2];
  if ((fVar3 != 0.0) || (fVar4 != 0.0)) {
    fVar3 = fVar3 * (1.0 / SQRT(fVar3 * fVar3 + 0.0 + fVar4 * fVar4));
  }
  fn_006f9cac();
  *(float *)(puVar1[5] + 0x30) = fVar3;
  *(uint *)(puVar1[5] + 0x138) = *(uint *)(puVar1[5] + 0x138) | 2;
  puVar1[3] = 4;
  puVar1[4] = 0;
  return puVar1;
}



void fn_00442268(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 0;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),1,4,0);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x34))();
  if (*(int *)(param_1 + 0xc) == 4) {
    iVar1 = fn_006aa2dc(*(undefined4 *)(param_1 + 0x14));
    if ((iVar1 != 0) || (iVar1 = fn_006aff38(*(undefined4 *)(param_1 + 0x14),0), iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0xc) = 5;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else if (*(int *)(param_1 + 0xc) == 5) {
    iVar1 = *(int *)(param_1 + 0x18);
    uVar2 = iVar1 + 1;
    *(uint *)(param_1 + 0x18) = uVar2;
    if (0x2d < uVar2) {
      fVar5 = 0.0;
      fVar4 = (float)VectorUnsignedToFloat(iVar1 + -0x2c,(byte)(in_fpscr >> 0x16) & 3);
      fVar4 = 1.0 - fVar4 * 0.05;
      if (fVar4 < 0.0) {
        fVar4 = fVar5;
      }
      (**(code **)(**(int **)(param_1 + 0x14) + 0xd8))();
      if (fVar4 == fVar5) {
        (**(code **)(**(int **)(param_1 + 0x14) + 0x1bc))(*(int **)(param_1 + 0x14),0);
        (**(code **)(**(int **)(param_1 + 0x14) + 0x1c4))(*(int **)(param_1 + 0x14),1);
        (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14),0);
        piVar3 = (int *)fn_006f7508(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x0044238c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar3 + 100))
                  (piVar3,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x170) + 0xfc),4,0);
        return;
      }
    }
  }
  return;
}



undefined4 * fn_004421a8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x28);
  *puVar1 = &DAT_0083dd78;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  return puVar1;
}



void fn_004420f4(int param_1)

{
  int iVar1;
  float local_18;
  float local_14;
  float local_10;
  
  iVar1 = fn_006b0d10(*(undefined4 *)(param_1 + 0x14),0);
  if (iVar1 == 0) {
    fn_0021718c(param_1,1,0x3c);
    return;
  }
  local_18 = *(float *)(iVar1 + 0x20) + *(float *)(param_1 + 0x58);
  local_14 = *(float *)(iVar1 + 0x24) + *(float *)(param_1 + 0x5c);
  local_10 = *(float *)(iVar1 + 0x28) + *(float *)(param_1 + 0x60);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14),&local_18);
  if (*(int *)(iVar1 + 0xf8) == 0x3f800000) {
    return;
  }
  fn_00215d9c(*(undefined4 *)(param_1 + 0x14),10,0,1);
  return;
}



undefined4 fn_0044202c(int param_1)

{
  int *piVar1;
  float in_s0;
  float in_s1;
  float in_s2;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),0x18,4,0);
  fn_006bd414(param_1,*(undefined4 *)(param_1 + 0x14),(char *)&DAT_004420e4);
  *(float *)(param_1 + 0x58) = in_s0 * -1.0;
  *(float *)(param_1 + 0x5c) = in_s1 * -1.0;
  *(float *)(param_1 + 0x60) = in_s2 * -1.0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(uint *)(*(int *)(param_1 + 0x14) + 0x39c) = *(uint *)(*(int *)(param_1 + 0x14) + 0x39c) | 0x800;
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  piVar1 = (int *)fn_006f7508(DAT_008977e0);
  (**(code **)(*piVar1 + 100))
            (piVar1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x170) + 0xfc),2,0);
  return 1;
}



void fn_00441fec(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 0x1c4))(*(int **)(param_1 + 0x14),1);
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00442028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14),0);
  return;
}



void fn_00441dcc(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))();
  if ((iVar1 == 0) && (iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(), iVar1 == 0)) {
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x1e6) = 0;
                    /* WARNING: Could not recover jumptable at 0x00441e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x1dc))(*(int **)(param_1 + 0x14),2,3,0);
  return;
}



undefined4 fn_00441d30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_002fdeac();
  fn_00441c8c(param_1);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))
            (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x58),0);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),1);
  fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7d16);
  (**(code **)(**(int **)(param_1 + 0x14) + 0xe4))(*(int **)(param_1 + 0x14),0x10009af,0);
  return uVar1;
}



void fn_00441c8c(int param_1)

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



undefined4 fn_00441bec(int *param_1,int param_2)

{
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  else if (param_2 == 2) {
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  else if (param_2 == 1) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  else if (param_2 == 0x10) {
    (**(code **)(*(int *)param_1[5] + 0x1dc))((int *)param_1[5],1,0x11,0);
    if (*(char *)(param_1[1] + 4) == '\0') {
      *(undefined4 *)(param_1[1] + 0xc) = 1;
    }
  }
  return 1;
}



undefined4 * fn_00441b80(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,4);
  *puVar1 = &DAT_0083dd14;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  (**(code **)(*(int *)puVar1[5] + 0xe0))((int *)puVar1[5],0);
  if (param_3 != (char *)0x0) {
    *(bool *)(puVar1 + 0x16) = *param_3 != '\0';
  }
  return puVar1;
}



undefined4 fn_00441a28(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  cVar1 = '\x01';
  if (iVar2 != 1) {
    cVar1 = (char)param_1[0x16];
  }
  if ((iVar2 != 1 && cVar1 != '\0') &&
     (iVar2 = (**(code **)(*param_1 + 0x134))(param_1,param_2), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x44))(param_1,1,4,0);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return 0;
}


