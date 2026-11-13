#include "007604fc_007609c4.h"



undefined4 * fn_007609c4(int param_1,uint *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (((DAT_008c632c & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c632c), iVar3 != 0)) {
    DAT_008c63a8 = *(undefined4 *)(param_1 + 0xb0);
  }
  if (0 < (int)(*(byte *)(param_1 + 0xd8) - 1)) {
    pbVar6 = (byte *)(param_1 + 0xd8);
    puVar7 = &DAT_008f9ee0;
    puVar4 = &DAT_008f9ed8;
    if ((*(byte *)(param_1 + 0xd8) & 1) == 0) {
      pbVar6 = (byte *)(param_1 + 0xd9);
      iVar3 = (uint)*pbVar6 * 0x10;
      DAT_008f9ee8 = *(undefined4 *)(&DAT_008c6330 + iVar3);
      DAT_008f9eec = *(undefined4 *)(&DAT_008c6334 + iVar3);
      DAT_008f9ef0 = *(undefined4 *)(&DAT_008c6338 + iVar3);
      DAT_008f9ef4 = *(undefined4 *)(&DAT_008c633c + iVar3);
      if (*pbVar6 == 7) {
        DAT_008f9ef0 = *(undefined4 *)(param_1 + 0xb0);
      }
      puVar7 = &DAT_008f9ef0;
      puVar4 = &DAT_008f9ee8;
    }
    bVar2 = pbVar6[1];
    for (iVar3 = (int)(*(byte *)(param_1 + 0xd8) - 1) >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      iVar1 = (uint)bVar2 * 0x10;
      uVar5 = (uint)pbVar6[2];
      uVar8 = *(undefined4 *)(&DAT_008c6334 + iVar1);
      uVar9 = *(undefined4 *)(&DAT_008c6338 + iVar1);
      uVar10 = *(undefined4 *)(&DAT_008c633c + iVar1);
      puVar4[4] = *(undefined4 *)(&DAT_008c6330 + iVar1);
      puVar4[5] = uVar8;
      puVar4[6] = uVar9;
      puVar4[7] = uVar10;
      iVar1 = uVar5 * 0x10;
      if (bVar2 == 7) {
        puVar7[4] = *(undefined4 *)(param_1 + 0xb0);
      }
      bVar2 = pbVar6[3];
      uVar8 = *(undefined4 *)(&DAT_008c6334 + iVar1);
      uVar9 = *(undefined4 *)(&DAT_008c6338 + iVar1);
      uVar10 = *(undefined4 *)(&DAT_008c633c + iVar1);
      puVar4[8] = *(undefined4 *)(&DAT_008c6330 + iVar1);
      puVar4[9] = uVar8;
      puVar4[10] = uVar9;
      puVar4[0xb] = uVar10;
      if (uVar5 == 7) {
        puVar7[8] = *(undefined4 *)(param_1 + 0xb0);
      }
      puVar7 = puVar7 + 8;
      puVar4 = puVar4 + 8;
      pbVar6 = pbVar6 + 2;
    }
  }
  iVar3 = *(byte *)(param_1 + 0xd8) - 1;
  if (-1 < iVar3) {
    iVar1 = (uint)*(byte *)(param_1 + iVar3 + 0xd9) * 0x10;
    uVar8 = *(undefined4 *)(&DAT_008c6334 + iVar1);
    uVar9 = *(undefined4 *)(&DAT_008c6338 + iVar1);
    uVar10 = *(undefined4 *)(&DAT_008c633c + iVar1);
    (&DAT_008f9ee8)[iVar3 * 4] = *(undefined4 *)(&DAT_008c6330 + iVar1);
    (&DAT_008f9eec)[iVar3 * 4] = uVar8;
    (&DAT_008f9ef0)[iVar3 * 4] = uVar9;
    (&DAT_008f9ef4)[iVar3 * 4] = uVar10;
    if (*(char *)(param_1 + iVar3 + 0xd9) == '\a') {
      (&DAT_008f9ef0)[iVar3 * 4] = *(undefined4 *)(param_1 + 0xb0);
    }
  }
  *param_2 = (uint)*(byte *)(param_1 + 0xd8);
  return &DAT_008f9ee8;
}



void fn_00760954(int param_1)

{
  if (*(int *)(param_1 + 0x110) != 0) {
    fn_00251ec8();
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if (*(int **)(param_1 + 0x10c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10c) + 4))();
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  if (*(int **)(param_1 + 0x108) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x108) + 4))();
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_00747ef8(param_1);
}



void fn_00760928(int param_1)

{
  fn_00370550(*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x10));
  fn_0042f204(*(undefined4 *)(param_1 + 200),0);
  if (*(int *)(param_1 + 0x110) != 0) {
    fn_00251ec8();
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if (*(int **)(param_1 + 0x10c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10c) + 4))();
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  if (*(int **)(param_1 + 0x108) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x108) + 4))();
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_00747ef8(param_1);
}



undefined4 fn_00760774(undefined4 param_1,float *param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float in_s0;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  
  fVar8 = 0.0;
  if (param_3 != 9) {
    if (param_3 == 10) {
      iVar2 = *param_4;
      param_2[2] = *(float *)(iVar2 + 0x10);
      param_2[1] = *(float *)(iVar2 + 0x14);
      iVar3 = *param_4;
      iVar9 = param_4[3];
      fn_00781b20(iVar3);
      *(int *)(iVar3 + 0x10) = iVar9;
      in_s0 = in_s0 + *(float *)(iVar3 + 0x14);
      *(float *)(iVar3 + 0x14) = in_s0;
      *param_2 = *(float *)(iVar2 + 0x10);
      fn_006e60f0(*param_4);
      in_s0 = in_s0 + *(float *)(iVar2 + 0x14);
      param_2[3] = in_s0;
      fVar5 = *param_2;
      fVar6 = param_2[1];
      fVar7 = param_2[2];
      if (fVar8 <= fVar7 - fVar5) {
        fVar4 = fVar7;
      }
      else {
        fVar4 = fVar5;
        fVar5 = fVar7;
      }
      *param_2 = fVar5;
      param_2[2] = fVar4;
      if (in_s0 - fVar6 < fVar8) {
        fVar8 = fVar6;
      }
      else {
        fVar8 = in_s0;
        in_s0 = fVar6;
      }
      param_2[1] = in_s0;
      uVar1 = 3;
      param_2[3] = fVar8;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  iVar3 = *param_4;
  *param_2 = *(float *)(iVar3 + 0x10);
  iVar2 = *param_4;
  iVar9 = *(int *)(iVar2 + 0x3c);
  if (0 < iVar9) {
    if (*(char *)(iVar2 + 0x2c) == '\0') {
      fn_006e6098(iVar2);
    }
    else {
      in_s0 = *(float *)(iVar2 + 0x1c);
    }
    fVar5 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
    in_s0 = fVar5 * in_s0;
    fVar5 = (float)VectorSignedToFloat((int)((*(float *)(iVar2 + 0x10) - (float)param_4[3]) / in_s0)
                                       + 1,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(iVar2 + 0x10) = (float)param_4[3] + in_s0 * fVar5;
  }
  param_2[2] = *(float *)(iVar3 + 0x10);
  param_2[1] = *(float *)(iVar3 + 0x14);
  fn_006e60f0(iVar3);
  fVar6 = param_2[1];
  in_s0 = in_s0 + fVar6;
  param_2[3] = in_s0;
  fVar7 = *param_2;
  fVar5 = param_2[2];
  if (fVar5 - fVar7 < fVar8) {
    fVar4 = fVar7;
  }
  else {
    fVar4 = fVar5;
    fVar5 = fVar7;
  }
  *param_2 = fVar5;
  param_2[2] = fVar4;
  fVar5 = fVar6;
  if (in_s0 - fVar6 < fVar8) {
    fVar5 = in_s0;
    in_s0 = fVar6;
  }
  param_2[1] = fVar5;
  param_2[3] = in_s0;
  return 1;
}



undefined4 fn_007606cc(undefined4 param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float in_s0;
  float fVar4;
  float fVar5;
  
  if (param_2 != 9) {
    if (param_2 == 10) {
      iVar2 = *param_3;
      iVar3 = param_3[3];
      fn_00781b20(iVar2);
      *(int *)(iVar2 + 0x10) = iVar3;
      uVar1 = 3;
      *(float *)(iVar2 + 0x14) = in_s0 + *(float *)(iVar2 + 0x14);
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  iVar2 = *param_3;
  iVar3 = *(int *)(iVar2 + 0x3c);
  if (0 < iVar3) {
    if (*(char *)(iVar2 + 0x2c) == '\0') {
      fn_006e6098(iVar2);
    }
    else {
      in_s0 = *(float *)(iVar2 + 0x1c);
    }
    fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (float)VectorSignedToFloat((int)((*(float *)(iVar2 + 0x10) - (float)param_3[3]) /
                                            (fVar4 * in_s0)) + 1,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(iVar2 + 0x10) = (float)param_3[3] + fVar4 * in_s0 * fVar5;
  }
  return 1;
}



void fn_007606ac(undefined4 *param_1)

{
  *param_1 = &DAT_008586a4;
  return;
}



undefined4 fn_007604fc(undefined4 param_1,float *param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float in_s0;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  
  fVar8 = 0.0;
  if (param_3 != 9) {
    if (param_3 == 10) {
      iVar2 = *param_4;
      param_2[2] = *(float *)(iVar2 + 0x10);
      param_2[1] = *(float *)(iVar2 + 0x14);
      iVar3 = *param_4;
      iVar9 = param_4[3];
      fn_00781ae8(iVar3);
      *(int *)(iVar3 + 0x10) = iVar9;
      in_s0 = in_s0 + *(float *)(iVar3 + 0x14);
      *(float *)(iVar3 + 0x14) = in_s0;
      *param_2 = *(float *)(iVar2 + 0x10);
      fn_006e60f0(*param_4);
      in_s0 = in_s0 + *(float *)(iVar2 + 0x14);
      param_2[3] = in_s0;
      fVar5 = *param_2;
      fVar6 = param_2[1];
      fVar7 = param_2[2];
      if (fVar8 <= fVar7 - fVar5) {
        fVar4 = fVar7;
      }
      else {
        fVar4 = fVar5;
        fVar5 = fVar7;
      }
      *param_2 = fVar5;
      param_2[2] = fVar4;
      if (in_s0 - fVar6 < fVar8) {
        fVar8 = fVar6;
      }
      else {
        fVar8 = in_s0;
        in_s0 = fVar6;
      }
      param_2[1] = in_s0;
      uVar1 = 3;
      param_2[3] = fVar8;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  iVar3 = *param_4;
  *param_2 = *(float *)(iVar3 + 0x10);
  iVar2 = *param_4;
  iVar9 = *(int *)(iVar2 + 0x3c);
  if (0 < iVar9) {
    if (*(char *)(iVar2 + 0x2c) == '\0') {
      fn_006e6098(iVar2);
    }
    else {
      in_s0 = *(float *)(iVar2 + 0x1c);
    }
    fVar5 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
    in_s0 = fVar5 * in_s0;
    fVar5 = (float)VectorSignedToFloat((int)((*(float *)(iVar2 + 0x10) - (float)param_4[3]) / in_s0)
                                       + 1,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(iVar2 + 0x10) = (float)param_4[3] + in_s0 * fVar5;
  }
  param_2[2] = *(float *)(iVar3 + 0x10);
  param_2[1] = *(float *)(iVar3 + 0x14);
  fn_006e60f0(iVar3);
  fVar6 = param_2[1];
  in_s0 = in_s0 + fVar6;
  param_2[3] = in_s0;
  fVar7 = *param_2;
  fVar5 = param_2[2];
  if (fVar5 - fVar7 < fVar8) {
    fVar4 = fVar7;
  }
  else {
    fVar4 = fVar5;
    fVar5 = fVar7;
  }
  *param_2 = fVar5;
  param_2[2] = fVar4;
  fVar5 = fVar6;
  if (in_s0 - fVar6 < fVar8) {
    fVar5 = in_s0;
    in_s0 = fVar6;
  }
  param_2[1] = fVar5;
  param_2[3] = in_s0;
  return 1;
}


