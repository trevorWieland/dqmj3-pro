#include "006ea57c_006eaac8.h"



void fn_006eaac8(void)

{
  fn_006ea99c();
  return;
}



void fn_006eaa2c(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_2[1];
  puVar2 = (undefined4 *)*param_2;
  if (puVar2 != puVar1) {
    fn_007ad410(puVar2,puVar1);
    if ((int)puVar1 - (int)puVar2 < 0x1c1) {
      fn_007a4778(puVar2,puVar1);
    }
    else {
      fn_007a4778(puVar2,puVar2 + 0x70);
      if (puVar2 + 0x70 != puVar1) {
        puVar1 = puVar2 + 0x70;
        do {
          *puVar1 = puVar1[-7];
          puVar1[1] = puVar1[-6];
          puVar1[2] = puVar1[-5];
          puVar1[3] = puVar1[-4];
          puVar1[4] = puVar1[-3];
          puVar1[5] = puVar1[-2];
          puVar1[6] = puVar1[-1];
          puVar1 = puVar1 + -7;
        } while( true );
      }
    }
  }
  return;
}



void fn_006ea87c(uint *param_1,int param_2,ushort *param_3,int param_4,uint param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  float *pfVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_28;
  float local_24;
  float local_20;
  
  param_5 = param_5 & 0xff;
  puVar4 = *(ushort **)(*(int *)(*(int *)(param_3 + 0x16) + 0x34) + (uint)*param_3 * 0x2c);
  if (puVar4 != (ushort *)0x0) {
    param_5 = param_5 | (uint)*puVar4 << 0x10;
  }
  uVar1 = param_3[3];
  iVar2 = fn_006ebeec(param_4);
  param_4 = param_4 + 0x8c;
  uVar3 = (uint)**(byte **)(param_3 + 0x16);
  bVar6 = (**(byte **)(param_3 + 0x16) & 2) != 0;
  if (bVar6) {
    uVar3 = *(uint *)(param_3 + 10);
  }
  if ((bVar6 && uVar3 != 0) && (**(char **)(param_3 + 8) == '\0')) {
    param_4 = *(int *)(iVar2 + 0x14) + (uint)*(ushort *)(*(char **)(param_3 + 8) + 4) * 0x30;
  }
  fn_0016947c(&local_28,param_4,param_3 + 0x10);
  pfVar5 = *(float **)(param_2 + 4);
  fVar7 = *pfVar5;
  fVar9 = pfVar5[1];
  fVar11 = pfVar5[2];
  fVar8 = pfVar5[3];
  fVar10 = pfVar5[4];
  fVar12 = pfVar5[5];
  *param_1 = param_5 | (uint)(byte)uVar1 << 8;
  param_1[1] = (uint)((local_28 - fVar7) * fVar8 + (local_24 - fVar9) * fVar10 +
                     (local_20 - fVar11) * fVar12);
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_006ea6e4(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 local_30;
  byte bStack_2b;
  
  puVar13 = (undefined4 *)param_2[1];
  param_2 = (undefined4 *)*param_2;
  if (param_2 != puVar13) {
    uVar2 = (int)puVar13 - (int)param_2;
    iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
    fn_007acfc0(param_2,puVar13,(iVar3 >> 4) - (iVar3 >> 0x1f));
    if ((int)uVar2 < 0x1c1) {
      fn_007a4588(param_2,puVar13);
      return;
    }
    fn_007a4588(param_2,param_2 + 0x70);
    for (param_2 = param_2 + 0x70; param_2 != puVar13; param_2 = param_2 + 7) {
      uVar2 = (uint)local_30 >> 8;
      local_30 = CONCAT31((int3)uVar2,*(undefined1 *)param_2);
      uVar4 = param_2[1];
      fVar9 = (float)param_2[2];
      uVar5 = param_2[3];
      puVar10 = param_2 + -7;
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[6];
      bStack_2b = (byte)((uint)uVar4 >> 8);
      bVar1 = *(byte *)((int)param_2 + -0x17);
      puVar12 = param_2;
      if (bStack_2b != bVar1) goto joined_r0x006ea7b8;
      if ((float)param_2[-5] < fVar9) {
        do {
          while( true ) {
            puVar11 = puVar10;
            uVar14 = puVar11[1];
            uVar15 = puVar11[2];
            uVar16 = puVar11[3];
            uVar17 = puVar11[4];
            uVar18 = puVar11[5];
            uVar19 = puVar11[6];
            *puVar12 = *puVar11;
            puVar12[1] = uVar14;
            puVar12[2] = uVar15;
            puVar12[3] = uVar16;
            puVar12[4] = uVar17;
            puVar12[5] = uVar18;
            puVar12[6] = uVar19;
            puVar10 = puVar11 + -7;
            bVar1 = *(byte *)((int)puVar11 + -0x17);
            puVar12 = puVar11;
            if (bStack_2b != bVar1) break;
            if (fVar9 <= (float)puVar11[-5]) goto LAB_006ea800;
          }
joined_r0x006ea7b8:
        } while (bStack_2b < bVar1);
      }
LAB_006ea800:
      *puVar12 = local_30;
      puVar12[1] = uVar4;
      puVar12[2] = fVar9;
      puVar12[3] = uVar5;
      puVar12[4] = uVar6;
      puVar12[5] = uVar7;
      puVar12[6] = uVar8;
    }
  }
  return;
}



void fn_006ea6d8(void)

{
  fn_006ea99c();
  return;
}



void fn_006ea99c(uint *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = fn_006eb200(param_3);
  pfVar2 = *(float **)(param_2 + 4);
  fVar3 = *(float *)(param_3 + 0x98);
  fVar4 = *(float *)(param_3 + 0xa8);
  fVar5 = *(float *)(param_3 + 0xb8);
  fVar6 = *pfVar2;
  fVar8 = pfVar2[1];
  fVar10 = pfVar2[2];
  fVar7 = pfVar2[3];
  fVar9 = pfVar2[4];
  fVar11 = pfVar2[5];
  *param_1 = param_4 & 0xffff00ff | (uVar1 & 0xff) << 8;
  param_1[1] = (uint)((fVar3 - fVar6) * fVar7 + (fVar4 - fVar8) * fVar9 + (fVar5 - fVar10) * fVar11)
  ;
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_006ea57c(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 local_30;
  byte bStack_2b;
  ushort uStack_2a;
  
  puVar13 = (undefined4 *)param_2[1];
  param_2 = (undefined4 *)*param_2;
  if (param_2 != puVar13) {
    uVar2 = (int)puVar13 - (int)param_2;
    iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
    fn_007acb68(param_2,puVar13,(iVar3 >> 4) - (iVar3 >> 0x1f));
    if ((int)uVar2 < 0x1c1) {
      fn_007a43a4(param_2,puVar13);
      return;
    }
    fn_007a43a4(param_2,param_2 + 0x70);
    for (param_2 = param_2 + 0x70; param_2 != puVar13; param_2 = param_2 + 7) {
      uVar2 = (uint)local_30 >> 8;
      local_30 = CONCAT31((int3)uVar2,*(undefined1 *)param_2);
      uVar4 = param_2[1];
      uVar9 = param_2[2];
      uVar5 = param_2[3];
      puVar10 = param_2 + -7;
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[6];
      bStack_2b = (byte)((uint)uVar4 >> 8);
      bVar1 = *(byte *)((int)param_2 + -0x17);
      uStack_2a = (ushort)((uint)uVar4 >> 0x10);
      puVar12 = param_2;
      if (bStack_2b != bVar1) goto joined_r0x006ea64c;
      if (uStack_2a < *(ushort *)((int)param_2 + -0x16)) {
        do {
          while( true ) {
            puVar11 = puVar10;
            uVar14 = puVar11[1];
            uVar15 = puVar11[2];
            uVar16 = puVar11[3];
            uVar17 = puVar11[4];
            uVar18 = puVar11[5];
            uVar19 = puVar11[6];
            *puVar12 = *puVar11;
            puVar12[1] = uVar14;
            puVar12[2] = uVar15;
            puVar12[3] = uVar16;
            puVar12[4] = uVar17;
            puVar12[5] = uVar18;
            puVar12[6] = uVar19;
            puVar10 = puVar11 + -7;
            bVar1 = *(byte *)((int)puVar11 + -0x17);
            puVar12 = puVar11;
            if (bStack_2b != bVar1) break;
            if (*(ushort *)((int)puVar11 + -0x16) <= uStack_2a) goto LAB_006ea690;
          }
joined_r0x006ea64c:
        } while (bStack_2b < bVar1);
      }
LAB_006ea690:
      *puVar12 = local_30;
      puVar12[1] = uVar4;
      puVar12[2] = uVar9;
      puVar12[3] = uVar5;
      puVar12[4] = uVar6;
      puVar12[5] = uVar7;
      puVar12[6] = uVar8;
    }
  }
  return;
}


