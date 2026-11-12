#include "00689144_00689884.h"



void fn_00689884(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  fn_0068a438();
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x78);
  }
  fn_001f7414(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),iVar1,param_2,param_3);
  return;
}



void fn_00689878(int param_1)

{
  fn_001f73a0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_00689830(int param_1)

{
  fn_003e5a98();
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x18) = 0;
  fn_006899f4(param_1,0,0,0);
  fn_00689d04(param_1,0);
  fn_001f73a0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),0);
  return;
}



void fn_00689828(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x44) + 8) = param_2;
  return;
}



void fn_00689824(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x44) + 8) = param_2;
  return;
}



void fn_00689818(int param_1)

{
  fn_001f7390(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_006897a8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006896fc(param_1,0x4b);
  if ((iVar1 != 0) && (iVar2 = fn_00689c3c(param_1), iVar2 != 0)) {
    if (iVar2 == iVar1) {
      fn_00689930(param_1,0x4b,0);
      return;
    }
    fn_0028e66c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x14));
  }
  fn_001f7390(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),0x4b,0);
  return;
}



void fn_00689710(int param_1,undefined4 param_2)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_lr;
  
  fn_0036c648(*(undefined4 *)(param_1 + 0x5c),3);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 10) = 1;
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),param_2,1,0,1,1,0,0,1,unaff_r4,unaff_r5,in_lr);
  fn_001f749c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),0x48,0);
  return;
}



undefined4 fn_006896f4(undefined4 param_1)

{
  return param_1;
}



void fn_006896e0(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_00851010;
  return;
}



int * fn_0068967c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x2c))(param_1,param_2,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a934) {
        return piVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (int *)0x0;
}



int fn_006892dc(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  byte bVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  byte bVar11;
  int *piVar12;
  bool bVar13;
  float fVar14;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))();
  if (puVar7 == &DAT_0089a92c) {
    iVar8 = fn_00145b00(0xc0,&DAT_00812c8c);
    if (iVar8 == 0) {
      return 0;
    }
    iVar8 = fn_005532f8(iVar8,param_1);
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
    if (puVar7 == &DAT_0089a930) {
      iVar8 = fn_00145b00(0x100,&DAT_00812c8c);
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = fn_00554378();
      }
      fn_005c7b2c(iVar8,param_1);
      iVar9 = 0;
      do {
        iVar1 = iVar9 * 4;
        iVar5 = iVar9 + 0x2b;
        iVar9 = iVar9 + 1;
        *(int *)(iVar8 + iVar1 + 0xac) = param_1[iVar5];
      } while (iVar9 < 2);
      fn_00553c84(iVar8,param_1[0x2d]);
      if ((*(float *)(iVar8 + 0xb8) == (float)param_1[0x2e]) &&
         (*(float *)(iVar8 + 0xbc) == (float)param_1[0x2f])) {
        bVar11 = 1;
      }
      else {
        bVar11 = 0;
      }
      *(byte *)(iVar8 + 0xd0) = *(byte *)(iVar8 + 0xd0) | (bVar11 ^ 1) << 2;
      if ((bVar11 ^ 1) != 0) {
        iVar9 = param_1[0x2f];
        *(int *)(iVar8 + 0xb8) = param_1[0x2e];
        *(int *)(iVar8 + 0xbc) = iVar9;
      }
      fVar14 = (float)param_1[0x30];
      bVar13 = *(float *)(iVar8 + 0xc0) != fVar14;
      *(byte *)(iVar8 + 0xd0) = *(byte *)(iVar8 + 0xd0) | bVar13 << 2;
      if (bVar13) {
        *(float *)(iVar8 + 0xc0) = fVar14;
      }
      fVar14 = (float)param_1[0x31];
      bVar13 = *(float *)(iVar8 + 0xc4) != fVar14;
      *(byte *)(iVar8 + 0xd0) = *(byte *)(iVar8 + 0xd0) | bVar13 << 2;
      if (bVar13) {
        *(float *)(iVar8 + 0xc4) = fVar14;
      }
      bVar11 = *(byte *)((int)param_1 + 0xd1) & 3;
      bVar13 = (*(byte *)(iVar8 + 0xd1) & 3) != bVar11;
      *(byte *)(iVar8 + 0xd0) = *(byte *)(iVar8 + 0xd0) | bVar13 << 2;
      if (bVar13) {
        *(byte *)(iVar8 + 0xd1) = bVar11 | *(byte *)(iVar8 + 0xd1) & 0xfc;
      }
      uVar2 = (*(byte *)((int)param_1 + 0xd1) & 0xf) >> 2;
      bVar13 = uVar2 != (*(byte *)(iVar8 + 0xd1) & 0xf) >> 2;
      *(byte *)(iVar8 + 0xd0) = *(byte *)(iVar8 + 0xd0) | bVar13 << 2;
      if (bVar13) {
        *(byte *)(iVar8 + 0xd1) = *(byte *)(iVar8 + 0xd1) & 0xf3 | (byte)(uVar2 << 2);
      }
      bVar11 = *(byte *)(iVar8 + 0xd0);
      bVar6 = *(byte *)(param_1 + 0x34) & 3;
      bVar13 = (bVar11 & 3) != bVar6;
      *(byte *)(iVar8 + 0xd0) = bVar11 | bVar13 << 2;
      if (bVar13) {
        *(byte *)(iVar8 + 0xd0) = bVar11 & 0xfc | 4 | bVar6;
      }
      iVar9 = param_1[0x32];
      bVar11 = *(byte *)(iVar8 + 0xd0);
      bVar13 = *(int *)(iVar8 + 200) != iVar9;
      bVar6 = bVar13 << 2;
      *(byte *)(iVar8 + 0xd0) = bVar11 | bVar6;
      if (bVar13) {
        *(int *)(iVar8 + 200) = iVar9;
      }
      bVar11 = bVar11 & 0xbf | bVar6 | *(byte *)(param_1 + 0x34) & 0x40;
      *(byte *)(iVar8 + 0xd0) = bVar11;
      fVar14 = (float)param_1[0x35];
      bVar13 = *(float *)(iVar8 + 0xd4) != fVar14;
      *(byte *)(iVar8 + 0xd0) = bVar11 | bVar13 << 2;
      if (bVar13) {
        *(float *)(iVar8 + 0xd4) = fVar14;
      }
    }
    else {
      puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
      if (puVar7 == &DAT_0089a934) {
        uVar3 = *(undefined1 *)((int)param_1 + 0xc5);
        uVar4 = *(undefined1 *)((int)param_1 + 0xcd);
        iVar9 = fn_00145b00(0xd8,&DAT_00812c8c);
        iVar8 = 0;
        if (iVar9 != 0) {
          iVar8 = fn_00552c9c(iVar9,uVar3,uVar4);
        }
        fn_005c7b2c(iVar8,param_1);
      }
      else {
        puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
        if (puVar7 != &DAT_0089a924) {
          return 0;
        }
        iVar8 = fn_00145b00(0xa4,&DAT_00812c8c);
        uVar10 = 0;
        if (iVar8 != 0) {
          uVar10 = fn_0018a6d4();
        }
        iVar8 = fn_005c7b2c(uVar10,param_1);
      }
    }
  }
  if (iVar8 != 0) {
    for (piVar12 = (int *)param_1[5]; piVar12 != param_1 + 5; piVar12 = (int *)*piVar12) {
      iVar9 = fn_006892dc(piVar12 + -1);
      if (iVar9 != 0) {
        fn_0018a69c(iVar8);
      }
    }
  }
  return iVar8;
}



int * fn_00689280(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x2c))(param_1,param_2,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a928) {
        return piVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (int *)0x0;
}



int * fn_00689220(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x2c))
                            (*(int **)(param_1 + 0x10),param_2,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a928) {
        return piVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (int *)0x0;
}



undefined4 * fn_00689144(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_1 = &DAT_0085a9e4;
  uVar4 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  param_1[1] = DAT_008f9e2c;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  uVar4 = DAT_008f9e2c;
  param_1[7] = 0;
  param_1[4] = uVar4;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  return param_1;
}


