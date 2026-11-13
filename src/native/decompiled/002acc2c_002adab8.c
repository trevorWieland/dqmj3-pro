#include "002acc2c_002adab8.h"



void fn_002adab8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_s2;
  float fVar9;
  float fVar11;
  longlong lVar10;
  ulonglong uVar12;
  float local_48;
  float fStack_44;
  undefined1 auStack_3c [28];
  
  iVar2 = fn_006f7a70(DAT_008977e0);
  fVar7 = *(float *)(param_2 + 0x4c);
  fVar5 = *(float *)(param_2 + 0x54);
  lVar10 = (ulonglong)(uint)(fVar7 * fVar7) << 0x20;
  uVar12 = (ulonglong)(uint)(fVar5 * fVar5);
  iVar3 = 0;
  iVar1 = *(int *)(iVar2 + 0x34) - *(int *)(iVar2 + 0x30) >> 2;
  if (0 < iVar1) {
    do {
      fVar11 = (float)((ulonglong)lVar10 >> 0x20);
      iVar4 = *(int *)(*(int *)(iVar2 + 0x30) + iVar3 * 4);
      fVar6 = fVar5;
      fVar8 = fVar7;
      if (iVar4 != 0) {
        fn_006a99dc(iVar4);
        fVar9 = *(float *)(param_2 + 0x40) - fVar5;
        fVar6 = *(float *)(param_2 + 0x44) - fVar7;
        fVar8 = *(float *)(param_2 + 0x48) - in_s2;
        fVar9 = fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8;
        lVar10 = CONCAT44(fVar11,fVar9);
        local_48 = fVar5;
        fStack_44 = fVar7;
        if ((fVar11 <= fVar9) && (fVar9 < (float)uVar12)) {
          fn_0018d444(auStack_3c,&local_48,param_2);
          fVar8 = *(float *)(param_2 + 0x60);
          fn_002af684(param_1,&local_48,param_2 + 0x40,param_2 + 0x58);
          fVar6 = (float)lVar10;
          fn_002abf30(param_1,iVar4,auStack_3c,1);
        }
      }
      iVar3 = iVar3 + 1;
      fVar5 = fVar6;
      fVar7 = fVar8;
    } while (iVar3 < iVar1);
  }
  return;
}



void fn_002ad1ec(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint *puVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *local_4c;
  undefined *local_48;
  uint local_3c [6];
  
  iVar9 = param_2[1];
  if ((iVar9 < 0) || (iVar1 = fn_00154ac8(iVar9), iVar1 != 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  if ((uVar11 & ~param_4) != 0) {
    fn_00144834(iVar9,1);
  }
  if ((param_2[4] == 0) || (iVar9 = fn_002febd8(), iVar9 == 0)) {
    if (*param_2 != -1) {
      fn_001f0fb4(*(undefined4 *)(DAT_008977e0 + 0x30),4,param_3);
      return;
    }
  }
  else {
    iVar9 = fn_006f75ac(DAT_008977e0);
    uVar5 = DAT_00897800;
    uVar2 = *(undefined4 *)(*(int *)(DAT_008977e0 + 0x30) + 0x80);
    fn_0038ff40(iVar9,0,0,1,0);
    local_48 = &DAT_002ad49c;
    uVar3 = fn_00100b58();
    puVar12 = &DAT_008f9ce8;
    local_4c = &DAT_008f9cf4;
    if (uVar3 != 0) {
      puVar7 = local_3c + 1;
      if (0x20 < uVar3) {
        puVar7 = local_3c;
      }
      local_3c[0] = uVar3;
      local_3c[1] = 0x20;
      uVar10 = *puVar7;
      if (0xfffffff1 < uVar10) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar10,0xfffffff1);
      }
      if (uVar10 < uVar3) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar10);
      }
      if (uVar10 != 0) {
        puVar12 = (undefined4 *)fn_00100fc6((uVar10 + 8) * 2,0);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
        }
        puVar12[2] = uVar3;
        puVar8 = (undefined2 *)((int)puVar12 + uVar3 * 2 + 0xc);
        puVar12[1] = uVar10;
        *puVar12 = 0;
        if (puVar8 != (undefined2 *)0x0) {
          *puVar8 = 0;
        }
      }
      local_4c = puVar12 + 3;
    }
    fn_00301a9c(local_4c,local_48,uVar3 << 1);
    if (uVar11 != 0) {
      fn_0025f9d8(uVar5,uVar2,param_2[3]);
      fn_0015b0dc();
      uVar4 = fn_0016ba34(uVar5,DAT_008987a4,(char *)&DAT_002ad4a8,0);
      fn_007855bc(&local_4c,uVar4);
    }
    uVar2 = fn_0025f9d8(uVar5,uVar2,param_2[4]);
    fn_007855bc(&local_4c,uVar2);
    fn_0038fee8(iVar9,local_4c);
    *(undefined1 *)(*(int *)(*(int *)(iVar9 + 8) + 0x80) + 0x1f) = 4;
    uVar5 = fn_0025f988(uVar5,(char *)&DAT_002ad4bc);
    fn_0016b4ec(iVar9,uVar5);
    if (local_4c != &DAT_008f9cf4) {
      piVar6 = local_4c + -3;
      iVar9 = *piVar6;
      if ((iVar9 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar9 + -1, iVar9 == 0)))) {
        fn_001008c4(local_4c + -3,local_4c[-2] + 8,0);
      }
    }
  }
  return;
}



void fn_002ad084(undefined4 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_s2;
  float fVar13;
  float fVar15;
  longlong lVar14;
  ulonglong uVar16;
  float local_50;
  float fStack_4c;
  undefined1 auStack_44 [32];
  
  iVar3 = fn_006f7a70(DAT_008977e0);
  fVar11 = *(float *)(param_2 + 0x4c);
  fVar9 = *(float *)(param_2 + 0x54);
  lVar14 = (ulonglong)(uint)(fVar11 * fVar11) << 0x20;
  uVar16 = (ulonglong)(uint)(fVar9 * fVar9);
  iVar7 = 0;
  iVar1 = *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc) >> 2;
  if (0 < iVar1) {
    do {
      uVar4 = *(uint *)(iVar3 + 0xc);
      bVar2 = false;
      iVar8 = *(int *)(uVar4 + iVar7 * 4);
      if (iVar8 != 0) {
        uVar4 = (uint)*(byte *)(iVar8 + 0x58);
      }
      fVar10 = fVar9;
      fVar12 = fVar11;
      if (iVar8 != 0 && uVar4 != 0) {
        uVar5 = fn_006f7294(iVar8);
        fVar15 = (float)((ulonglong)lVar14 >> 0x20);
        fVar10 = fVar9;
        fVar12 = fVar11;
        switch(uVar5) {
        case 10:
          bVar2 = true;
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xc:
          fn_006a99dc(iVar8);
          fVar13 = *(float *)(param_2 + 0x40) - fVar9;
          fVar10 = *(float *)(param_2 + 0x44) - fVar11;
          fVar12 = *(float *)(param_2 + 0x48) - in_s2;
          fVar13 = fVar13 * fVar13 + fVar10 * fVar10 + fVar12 * fVar12;
          lVar14 = CONCAT44(fVar15,fVar13);
          local_50 = fVar9;
          fStack_4c = fVar11;
          if (((fVar15 <= fVar13) && (fVar13 < (float)uVar16)) &&
             ((bVar2 || (iVar6 = fn_005feebc(&local_50), iVar6 != 0)))) {
            fn_0018d444(auStack_44,&local_50,param_2);
            fVar12 = *(float *)(param_2 + 0x60);
            fn_002af684(param_1,&local_50,param_2 + 0x40,param_2 + 0x58);
            fVar10 = (float)lVar14;
            fn_002abf30(param_1,iVar8,auStack_44,1);
          }
        }
      }
      iVar7 = iVar7 + 1;
      fVar9 = fVar10;
      fVar11 = fVar12;
    } while (iVar7 < iVar1);
  }
  return;
}



void fn_002ad000(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  while( true ) {
    while( true ) {
      uVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
      if (-1 < param_2 + param_3) break;
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
      param_2 = param_2 + ((iVar2 >> 4) - (iVar2 >> 0x1f));
    }
    iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    if ((uint)(param_2 + param_3) < (uint)((iVar2 >> 4) - (iVar2 >> 0x1f))) break;
    iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    param_2 = param_2 - ((iVar2 >> 4) - (iVar2 >> 0x1f));
  }
  return;
}



void fn_002acd78(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  float in_s2;
  float fVar10;
  float fVar12;
  longlong lVar11;
  float local_48;
  float fStack_44;
  undefined1 auStack_3c [24];
  
  iVar2 = fn_006f7a70(DAT_008977e0);
  fVar7 = *(float *)(param_2 + 0x4c);
  iVar5 = 0;
  lVar11 = (ulonglong)(uint)(fVar7 * fVar7) << 0x20;
  iVar1 = *(int *)(iVar2 + 0x28) - *(int *)(iVar2 + 0x24) >> 2;
  if (0 < iVar1) {
    do {
      fVar12 = (float)((ulonglong)lVar11 >> 0x20);
      uVar3 = *(uint *)(iVar2 + 0x24);
      iVar6 = *(int *)(uVar3 + iVar5 * 4);
      if (iVar6 != 0) {
        uVar3 = (uint)*(byte *)(iVar6 + 0x58);
      }
      fVar8 = fVar7;
      fVar9 = in_s1;
      if ((iVar6 != 0 && uVar3 != 0) &&
         ((*(char *)(iVar6 + 0x18b) != '\0' || (*(int *)(iVar6 + 0x1d0) != -1)))) {
        fn_006a99dc(iVar6);
        fVar10 = *(float *)(param_2 + 0x40) - fVar7;
        fVar8 = *(float *)(param_2 + 0x44) - in_s1;
        fVar9 = *(float *)(param_2 + 0x48) - in_s2;
        fVar10 = fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9;
        lVar11 = CONCAT44(fVar12,fVar10);
        fVar8 = *(float *)(iVar6 + 0x1d8);
        local_48 = fVar7;
        fStack_44 = in_s1;
        if ((fVar12 <= fVar10) &&
           (((fVar8 == -1.0 || (fVar8 = fVar8 * fVar8, fVar10 < fVar8)) &&
            (iVar4 = fn_005feebc(&local_48), iVar4 != 0)))) {
          fn_0018d444(auStack_3c,&local_48,param_2);
          fVar9 = *(float *)(param_2 + 0x60);
          fn_002af684(param_1,&local_48,param_2 + 0x40,param_2 + 0x58);
          fVar8 = (float)lVar11;
          fn_002abf30(param_1,iVar6,auStack_3c,1);
        }
      }
      iVar5 = iVar5 + 1;
      fVar7 = fVar8;
      in_s1 = fVar9;
    } while (iVar5 < iVar1);
  }
  return;
}



void fn_002acc2c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  undefined1 auStack_108 [48];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [76];
  float local_3c;
  float fStack_38;
  float fStack_34;
  float local_30 [5];
  
  iVar2 = fn_006f7a5c(DAT_008977e0);
  iVar2 = fn_00176d68(*(undefined4 *)(iVar2 + 4));
  fn_001694c0(auStack_c8,iVar2 + 0x1a8);
  fn_001781f0(auStack_108,iVar2 + 0x148);
  uVar7 = 0;
  fVar6 = 1.0;
  local_d0 = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_cc = 0x3f800000;
  fn_00184220(auStack_88,auStack_c8,auStack_108);
  uVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
  iVar5 = 0;
  iVar2 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  iVar2 = (iVar2 >> 4) - (iVar2 >> 0x1f);
  if (0 < iVar2) {
    do {
      iVar4 = *(int *)(param_1 + 0x1c) + iVar5 * 0x1c;
      fn_006a99dc(*(undefined4 *)(iVar4 + 4));
      local_30[0] = fVar6;
      fn_0018d444(&local_3c,local_30,auStack_88);
      fVar6 = (float)uVar7;
      if ((((fStack_34 < fVar6 || (fStack_34 < fVar6 || local_3c < fVar6)) ||
           (0x43c7ffff < (int)local_3c)) || (fStack_38 < fVar6)) || (0x436fffff < (int)fStack_38)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      iVar5 = iVar5 + 1;
      *(float *)(iVar4 + 8) = local_3c;
      *(float *)(iVar4 + 0xc) = fStack_38;
      *(undefined1 *)(iVar4 + 0x15) = uVar1;
      fVar6 = local_3c;
    } while (iVar5 < iVar2);
  }
  return;
}


