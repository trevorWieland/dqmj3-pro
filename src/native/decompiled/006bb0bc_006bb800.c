#include "006bb0bc_006bb800.h"



void fn_006bb800(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006bb80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x184) + 0x28))();
  return;
}



undefined4 fn_006bb760(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint unaff_r4;
  int iVar3;
  
  if (param_2 < *(int *)(param_1 + 0x100)) {
    iVar2 = 0;
    do {
      if (param_2 < 0) {
        return 0;
      }
      iVar3 = *(int *)(param_1 + iVar2 * 4 + 0x140);
      if (iVar3 != 0) {
        unaff_r4 = (uint)*(byte *)(iVar3 + 0x58);
      }
      iVar1 = param_2;
      if (iVar3 != 0 && unaff_r4 != 0) {
        if (param_3 != -1) {
          iVar3 = *(int *)(iVar3 + 8);
        }
        if ((param_3 == -1 || iVar3 == param_3) && (iVar1 = param_2 + -1, param_2 < 1)) {
          return *(undefined4 *)(param_1 + iVar2 * 4 + 0x140);
        }
      }
      iVar2 = iVar2 + 1;
      param_2 = iVar1;
    } while (iVar2 < 0x10);
  }
  return 0;
}



void fn_006bb6b0(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar1 = *(int *)(param_1 + 0x1a8) - *(int *)(param_1 + 0x1a4) >> 1;
  if (uVar1 != 0) {
    do {
      if (*(short *)(*(int *)(param_1 + 0x1a4) + uVar5 * 2) == param_3) {
        if (-1 < (int)uVar5) {
          if (uVar5 < (uint)((*(int *)(param_1 + 0x19c) - *(int *)(param_1 + 0x198)) / 0xc)) {
            puVar2 = (undefined4 *)(*(int *)(param_1 + 0x198) + uVar5 * 0xc);
            uVar3 = puVar2[1];
            uVar4 = puVar2[2];
            *param_2 = *puVar2;
            param_2[1] = uVar3;
            param_2[2] = uVar4;
            return;
          }
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
  param_2[2] = 0xffffffff;
  return;
}



undefined1 fn_006bb66c(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_006f7508(DAT_008977e0);
  iVar3 = *(int *)(iVar2 + 8);
  iVar2 = fn_003f2d04(iVar3,param_1);
  if ((iVar2 == 0) || (uVar1 = 1, *(char *)(iVar3 + 10) != '\x01')) {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_006bb5dc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    do {
      param_2 = param_2 + -1;
      if (param_2 < *(int *)(param_1 + 0x100)) {
        iVar3 = 0;
        iVar2 = param_2;
        do {
          if (iVar2 < 0) break;
          iVar1 = iVar2;
          if ((*(int *)(param_1 + iVar3 * 4 + 0x140) != 0) && (iVar1 = iVar2 + -1, iVar2 < 1)) {
            iVar2 = *(int *)(param_1 + iVar3 * 4 + 0x140);
            if (param_3 != -1) {
              iVar3 = *(int *)(iVar2 + 8);
            }
            if (param_3 == -1 || iVar3 == param_3) {
              return iVar2;
            }
            break;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar1;
        } while (iVar3 < 0x10);
      }
    } while (param_2 != 0);
  }
  return 0;
}



int fn_006bb59c(int param_1,int param_2)

{
  int iVar1;
  short extraout_r1;
  
  iVar1 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x18c) >> 2;
  if (iVar1 != 0) {
    fn_00169f1c(param_2,iVar1);
    param_2 = (int)extraout_r1;
    if (param_2 < 0) {
      param_2 = (int)(short)((short)iVar1 + extraout_r1);
    }
  }
  return param_2;
}



undefined4 fn_006bb544(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < *(int *)(param_1 + 0x100)) {
    iVar2 = 0;
    do {
      if (param_2 < 0) {
        return 0;
      }
      iVar1 = param_2;
      if ((*(int *)(param_1 + iVar2 * 4 + 0x140) != 0) && (iVar1 = param_2 + -1, param_2 < 1)) {
        return *(undefined4 *)(param_1 + iVar2 * 4 + 0x140);
      }
      iVar2 = iVar2 + 1;
      param_2 = iVar1;
    } while (iVar2 < 0x10);
  }
  return 0;
}



void fn_006bb518(void)

{
  return;
}



undefined4 fn_006bb4d8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while ((iVar2 = *(int *)(param_1 + iVar1 * 4 + 0x140), iVar2 == 0 ||
         (*(int *)(iVar2 + 0x13c) != param_2))) {
    iVar1 = iVar1 + 1;
    if (0xf < iVar1) {
      return 0;
    }
  }
  return *(undefined4 *)(param_1 + iVar1 * 4 + 0x140);
}



uint fn_006bb474(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00897804 + 0x14);
  fn_00163940(param_2);
  return (int)*(short *)(*(int *)(iVar1 + 4) + 0x8a4 + ((int)(param_2 << 0x10) >> 0x14) * 2) >>
         (param_2 & 0xf) & 1;
}



undefined4 fn_006bb3c4(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((*(char *)(param_2 + 0xdc) == '\0') &&
     (pfVar1 = *(float **)(param_2 + 0x100),
     fVar5 = (*(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x16c)) -
             (*(float *)(param_2 + 0x20) + *pfVar1),
     fVar2 = (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x170)) -
             (*(float *)(param_2 + 0x24) + pfVar1[1]),
     fVar4 = (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x174)) -
             (*(float *)(param_2 + 0x28) + pfVar1[2]),
     fVar3 = *(float *)(param_1 + 0x168) + pfVar1[3],
     fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4 < fVar3 * fVar3)) {
    return 1;
  }
  return 0;
}



void fn_006bb2dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  fn_001028d4(auStack_20,(char *)&DAT_006bb328,param_2);
  iVar1 = fn_005f6e60(*(undefined4 *)(param_1 + 4),auStack_20);
  if (iVar1 != 0) {
    fn_00128eac(*(undefined4 *)(param_1 + 4),auStack_20,param_3);
  }
  return;
}



void fn_006bb23c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  fn_001028d4(auStack_20,(char *)&DAT_006bb328,param_2);
  iVar1 = fn_005f6e60(*(undefined4 *)(param_1 + 4),auStack_20);
  if (iVar1 != 0) {
    fn_00128eac(*(undefined4 *)(param_1 + 4),auStack_20,1);
  }
  return;
}



uint fn_006bb17c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (((**(int **)(DAT_008977e0 + 0x40) == 0) || (iVar1 = fn_006f700c(), iVar1 == 0)) ||
     ((iVar1 = fn_006cc234(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4)), iVar1 != 0 &&
      (iVar1 = fn_006cc234(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4)), iVar1 != 1)))) {
    iVar1 = fn_006f75c0(DAT_008977e0,*(undefined4 *)(param_1 + 0x28));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = *(uint *)(iVar1 + 0x10);
    }
  }
  else {
    iVar1 = fn_006cc234(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = fn_006cc234(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
      return (uint)(iVar1 == 1);
    }
  }
  return uVar2;
}



bool fn_006bb0bc(int *param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  fVar3 = (float)VectorSignedToFloat(iVar1 * iVar2,(byte)(in_fpscr >> 0x16) & 3);
  iVar1 = fn_006f7a84(DAT_008977e0);
  in_s0 = in_s0 - *(float *)(iVar1 + 0x20);
  in_s1 = in_s1 - *(float *)(iVar1 + 0x24);
  in_s2 = in_s2 - *(float *)(iVar1 + 0x28);
  return in_s0 * in_s0 + in_s1 * in_s1 + in_s2 * in_s2 < fVar3;
}


