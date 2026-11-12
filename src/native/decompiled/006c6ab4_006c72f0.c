#include "006c6ab4_006c72f0.h"



undefined4 fn_006c72f0(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 != -1) {
    iVar2 = *(int *)(param_1 + 0x14);
    iVar3 = iVar2;
    iVar1 = *(int *)(iVar2 + 4);
    while (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x10) < param_2) {
        iVar1 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar3 = iVar1;
        iVar1 = *(int *)(iVar1 + 8);
      }
    }
    if ((iVar3 == iVar2) || (param_2 < *(int *)(iVar3 + 0x10))) {
      iVar3 = iVar2;
    }
    fVar5 = *param_3 - *(float *)(iVar3 + 0x18);
    fVar4 = param_3[2] - *(float *)(iVar3 + 0x20);
    if (*(float *)(iVar3 + 0x3c) * *(float *)(iVar3 + 0x3c) < fVar5 * fVar5 + 0.0 + fVar4 * fVar4) {
      return 1;
    }
  }
  return 0;
}



int fn_006c7290(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 == -1) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14);
    iVar1 = iVar3;
    iVar2 = *(int *)(iVar3 + 4);
    while (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x10) < iVar4) {
        iVar2 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar2 + 8);
      }
    }
    if ((iVar1 != iVar3) && (*(int *)(iVar1 + 0x10) <= iVar4)) {
      iVar3 = iVar1;
    }
    iVar3 = iVar3 + 0x14;
  }
  return iVar3;
}



undefined4 fn_006c71b8(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  while( true ) {
    if (iVar1 == *(int *)(param_1 + 0x14)) {
      return 0xffffffff;
    }
    fVar3 = *(float *)(iVar1 + 0x3c) + -100.0;
    if ((0.0 < fVar3) &&
       (fVar5 = *param_2 - *(float *)(iVar1 + 0x18), fVar4 = param_2[2] - *(float *)(iVar1 + 0x20),
       fVar5 * fVar5 + 0.0 + fVar4 * fVar4 <= fVar3 * fVar3)) break;
    iVar2 = *(int *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 0xc) == 0) {
      for (iVar2 = *(int *)(iVar1 + 4); iVar1 == *(int *)(iVar2 + 0xc); iVar2 = *(int *)(iVar2 + 4))
      {
        iVar1 = iVar2;
      }
      if (*(int *)(iVar1 + 0xc) != iVar2) {
        iVar1 = iVar2;
      }
    }
    else {
      do {
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar1 + 8);
      } while (*(int *)(iVar1 + 8) != 0);
    }
  }
  return *(undefined4 *)(iVar1 + 0x14);
}



undefined4 fn_006c70f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = 100000.0;
  uVar1 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  while (iVar2 != *(int *)(param_1 + 0x14)) {
    fVar6 = *(float *)(iVar2 + 0x18) - *(float *)(DAT_008977e0 + 0xb0);
    fVar5 = *(float *)(iVar2 + 0x1c) - *(float *)(DAT_008977e0 + 0xb4);
    fVar4 = *(float *)(iVar2 + 0x20) - *(float *)(DAT_008977e0 + 0xb8);
    fVar4 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    if (fVar4 < fVar7) {
      uVar1 = *(undefined4 *)(iVar2 + 0x14);
    }
    if (fVar4 < fVar7) {
      fVar7 = fVar4;
    }
    iVar3 = *(int *)(iVar2 + 0xc);
    if (*(int *)(iVar2 + 0xc) == 0) {
      for (iVar3 = *(int *)(iVar2 + 4); iVar2 == *(int *)(iVar3 + 0xc); iVar3 = *(int *)(iVar3 + 4))
      {
        iVar2 = iVar3;
      }
      if (*(int *)(iVar2 + 0xc) != iVar3) {
        iVar2 = iVar3;
      }
    }
    else {
      do {
        iVar2 = iVar3;
        iVar3 = *(int *)(iVar2 + 8);
      } while (*(int *)(iVar2 + 8) != 0);
    }
  }
  return uVar1;
}



undefined1 fn_006c6ecc(int *param_1,int param_2,float *param_3,undefined1 *param_4)

{
  int iVar1;
  float *pfVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar1 = *(int *)(*param_1 + 8);
  pfVar2 = *(float **)(param_2 + 0x100);
  fVar10 = -1.0;
  uVar3 = 0;
  fVar7 = *(float *)(param_2 + 0x28) + pfVar2[2] + param_3[2];
  fVar6 = *(float *)(param_2 + 0x20) + *pfVar2 + *param_3;
  fVar8 = 0.0;
  fVar4 = 1.0;
  fVar5 = fVar4;
  if (*(float *)(iVar1 + 4) <= fVar6 + -pfVar2[3]) {
    fVar9 = fVar8;
    if (*(float *)(iVar1 + 0x10) < fVar6 + pfVar2[3]) {
      uVar3 = 1;
      fVar5 = ((*(float *)(iVar1 + 0x10) - *(float *)(param_2 + 0x20)) - pfVar2[3]) / *param_3;
      fVar9 = fVar10;
      if (1.0 <= fVar5) {
        fVar5 = fVar4;
      }
    }
  }
  else {
    uVar3 = 1;
    fVar6 = ((*(float *)(iVar1 + 4) - *(float *)(param_2 + 0x20)) + pfVar2[3]) / *param_3;
    fVar9 = fVar4;
    if (fVar6 < 1.0) {
      fVar5 = fVar6;
    }
  }
  if (*(float *)(iVar1 + 0xc) <= fVar7 + -pfVar2[3]) {
    fVar6 = fVar8;
    if (*(float *)(iVar1 + 0x18) < fVar7 + pfVar2[3]) {
      uVar3 = 1;
      fVar6 = ((*(float *)(iVar1 + 0x18) - *(float *)(param_2 + 0x28)) - pfVar2[3]) / param_3[2];
      if (fVar6 < fVar5) {
        fVar5 = fVar6;
      }
      fVar6 = fVar10;
    }
  }
  else {
    uVar3 = 1;
    fVar6 = ((*(float *)(iVar1 + 0xc) - *(float *)(param_2 + 0x28)) + pfVar2[3]) / param_3[2];
    if (fVar6 < fVar5) {
      fVar5 = fVar6;
    }
    fVar6 = fVar4;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar3;
    fVar5 = fVar5 - 0.01;
    if (1.0 < fVar5) {
      fVar5 = fVar4;
    }
    else if (fVar5 < 0.0) {
      fVar5 = fVar8;
    }
    *(float *)(param_4 + 4) = fVar5;
    fVar7 = fVar9 * fVar9 + 0.0 + fVar6 * fVar6;
    fVar5 = fVar8;
    if (fVar7 != 0.0) {
      fVar5 = 1.0 / SQRT(fVar7);
      fVar8 = fVar9 * fVar5;
      fVar4 = fVar5 * 0.0;
      fVar5 = fVar6 * fVar5;
    }
    *(float *)(param_4 + 8) = fVar8;
    *(float *)(param_4 + 0xc) = fVar4;
    *(float *)(param_4 + 0x10) = fVar5;
  }
  return uVar3;
}



void fn_006c6d6c(undefined4 param_1,char param_2,int param_3)

{
  if (param_2 == '\x01') {
    fn_006dcd40(*(undefined4 *)(param_3 + 0x10));
  }
  else if (param_2 == '\x02') {
    fn_006dcd40(*(undefined4 *)(param_3 + 0x10));
    fn_006f7a84(DAT_008977e0);
  }
  else if (param_2 == '\x03') {
    fn_006f7a84(DAT_008977e0);
  }
  fn_006dcd40();
  return;
}



void fn_006c6c98(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined1 auStack_78 [48];
  undefined1 auStack_48 [72];
  
  fVar3 = *param_2;
  fVar2 = 0.0;
  local_88 = param_2[2];
  fStack_8c = param_2[1];
  fVar1 = (fVar3 * 0.0 + 0.0 + local_88 * 1.0) /
          (SQRT(fVar3 * fVar3 + 0.0 + local_88 * local_88) * 1.0);
  local_90 = fVar3;
  fn_006f9b80();
  if (fVar3 <= fVar2) {
    fVar1 = -fVar1;
  }
  local_80 = -fVar1;
  local_84 = fVar2;
  local_7c = fVar2;
  fn_00525824(auStack_78,&local_84);
  local_84 = fVar2;
  local_80 = fVar1;
  local_7c = fVar2;
  fn_00525824(auStack_48);
  fn_0016947c(&local_90,auStack_78);
  local_88 = fVar2;
  fn_0016947c(&local_90,auStack_48);
  return;
}



int fn_006c6b94(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short local_b8 [78];
  
  sVar1 = *(short *)(*param_1 + 0x20);
  sVar2 = *(short *)(*param_1 + 0x82);
  fn_00301f50(local_b8,0x98);
  iVar4 = fn_006c61c4(param_1,local_b8,0x4c,1,1,1,1,1);
  sVar6 = 0;
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = 0;
      do {
        if (((&DAT_007c3630)[iVar5] & 0xffff) == (int)local_b8[iVar7]) {
          sVar6 = sVar6 + (short)((uint)(&DAT_007c3630)[iVar5] >> 0x10);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  if (*(int *)(*param_1 + 0xdc) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = fn_002d6bb8();
  }
  return (int)(short)(sVar3 + sVar6 + sVar2 + sVar1);
}



int fn_006c6ab4(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short local_b8 [78];
  
  sVar1 = *(short *)(*param_1 + 0x1e);
  sVar2 = *(short *)(*param_1 + 0x80);
  fn_00301f50(local_b8,0x98);
  iVar4 = fn_006c61c4(param_1,local_b8,0x4c,1,1,1,1,1);
  sVar6 = 0;
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = 0;
      do {
        if (((&DAT_007c3608)[iVar5] & 0xffff) == (int)local_b8[iVar7]) {
          sVar6 = sVar6 + (short)((uint)(&DAT_007c3608)[iVar5] >> 0x10);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  if (*(int *)(*param_1 + 0xdc) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = fn_002d6b98();
  }
  return (int)(short)(sVar3 + sVar6 + sVar2 + sVar1);
}


