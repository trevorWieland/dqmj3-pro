#include "006eaad4_006eb054.h"



void fn_006eb054(void)

{
  fn_006ea87c();
  return;
}



undefined4 fn_006eaff0(undefined4 param_1,int param_2,int param_3)

{
  if (*(byte *)(param_2 + 5) == *(byte *)(param_3 + 5)) {
    if (*(ushort *)(param_2 + 6) == *(ushort *)(param_3 + 6)) {
      if (*(float *)(param_3 + 8) < *(float *)(param_2 + 8)) {
        return 1;
      }
    }
    else if (*(ushort *)(param_2 + 6) < *(ushort *)(param_3 + 6)) {
      return 1;
    }
  }
  else if (*(byte *)(param_2 + 5) < *(byte *)(param_3 + 5)) {
    return 1;
  }
  return 0;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_006eae68(undefined4 param_1,undefined4 *param_2)

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
  ushort uStack_2a;
  
  puVar13 = (undefined4 *)param_2[1];
  param_2 = (undefined4 *)*param_2;
  if (param_2 != puVar13) {
    uVar2 = (int)puVar13 - (int)param_2;
    iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
    fn_007adf7c(param_2,puVar13,(iVar3 >> 4) - (iVar3 >> 0x1f));
    if ((int)uVar2 < 0x1c1) {
      fn_007a4cfc(param_2,puVar13);
      return;
    }
    fn_007a4cfc(param_2,param_2 + 0x70);
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
      uStack_2a = (ushort)((uint)uVar4 >> 0x10);
      puVar12 = param_2;
      if (bStack_2b != bVar1) goto joined_r0x006eaf58;
      puVar11 = param_2;
      if (uStack_2a == *(ushort *)((int)param_2 + -0x16)) {
        if ((float)param_2[-5] < fVar9) {
LAB_006eaf5c:
          do {
            while( true ) {
              puVar12 = puVar10;
              uVar14 = puVar12[1];
              uVar15 = puVar12[2];
              uVar16 = puVar12[3];
              uVar17 = puVar12[4];
              uVar18 = puVar12[5];
              uVar19 = puVar12[6];
              *puVar11 = *puVar12;
              puVar11[1] = uVar14;
              puVar11[2] = uVar15;
              puVar11[3] = uVar16;
              puVar11[4] = uVar17;
              puVar11[5] = uVar18;
              puVar11[6] = uVar19;
              puVar10 = puVar12 + -7;
              bVar1 = *(byte *)((int)puVar12 + -0x17);
              if (bStack_2b != bVar1) break;
              puVar11 = puVar12;
              if (uStack_2a == *(ushort *)((int)puVar12 + -0x16)) {
                if (fVar9 <= (float)puVar12[-5]) goto LAB_006eafbc;
              }
              else if (*(ushort *)((int)puVar12 + -0x16) <= uStack_2a) goto LAB_006eafbc;
            }
joined_r0x006eaf58:
            puVar11 = puVar12;
          } while (bStack_2b < bVar1);
        }
      }
      else if (uStack_2a < *(ushort *)((int)param_2 + -0x16)) goto LAB_006eaf5c;
LAB_006eafbc:
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



void fn_006eae5c(void)

{
  fn_006ea99c();
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_006eace0(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_30;
  byte bStack_2b;
  
  puVar11 = (undefined4 *)param_2[1];
  param_2 = (undefined4 *)*param_2;
  if (param_2 != puVar11) {
    uVar1 = (int)puVar11 - (int)param_2;
    iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    fn_007ada58(param_2,puVar11,(iVar2 >> 4) - (iVar2 >> 0x1f));
    if ((int)uVar1 < 0x1c1) {
      fn_007a4ad4(param_2,puVar11);
      return;
    }
    fn_007a4ad4(param_2,param_2 + 0x70);
    for (param_2 = param_2 + 0x70; param_2 != puVar11; param_2 = param_2 + 7) {
      uVar1 = (uint)local_30 >> 8;
      local_30 = CONCAT31((int3)uVar1,*(undefined1 *)param_2);
      uVar3 = param_2[1];
      fVar7 = (float)param_2[2];
      uVar4 = param_2[3];
      puVar8 = param_2 + -7;
      iVar2 = param_2[4];
      uVar5 = param_2[5];
      uVar6 = param_2[6];
      bStack_2b = (byte)((uint)uVar3 >> 8);
      puVar10 = param_2;
      if ((iVar2 != param_2[-3]) || (bStack_2b == *(byte *)((int)param_2 + -0x17))) {
        fVar13 = (float)param_2[-5];
        goto joined_r0x006eadc0;
      }
      puVar9 = param_2;
      if (bStack_2b < *(byte *)((int)param_2 + -0x17)) {
        do {
          while( true ) {
            puVar10 = puVar8;
            uVar12 = puVar10[1];
            uVar14 = puVar10[2];
            uVar15 = puVar10[3];
            uVar16 = puVar10[4];
            uVar17 = puVar10[5];
            uVar18 = puVar10[6];
            *puVar9 = *puVar10;
            puVar9[1] = uVar12;
            puVar9[2] = uVar14;
            puVar9[3] = uVar15;
            puVar9[4] = uVar16;
            puVar9[5] = uVar17;
            puVar9[6] = uVar18;
            puVar8 = puVar10 + -7;
            if ((iVar2 != puVar10[-3]) || (bStack_2b == *(byte *)((int)puVar10 + -0x17))) break;
            puVar9 = puVar10;
            if (*(byte *)((int)puVar10 + -0x17) <= bStack_2b) goto LAB_006eae14;
          }
          fVar13 = (float)puVar10[-5];
joined_r0x006eadc0:
          puVar9 = puVar10;
        } while (fVar7 < fVar13);
      }
LAB_006eae14:
      *puVar10 = local_30;
      puVar10[1] = uVar3;
      puVar10[2] = fVar7;
      puVar10[3] = uVar4;
      puVar10[4] = iVar2;
      puVar10[5] = uVar5;
      puVar10[6] = uVar6;
    }
  }
  return;
}



void fn_006eacd4(void)

{
  fn_006ea99c();
  return;
}



void fn_006eacc0(void)

{
  fn_006ea87c();
  return;
}



undefined4 fn_006eac5c(undefined4 param_1,int param_2,int param_3)

{
  if (*(byte *)(param_2 + 5) == *(byte *)(param_3 + 5)) {
    if (*(ushort *)(param_2 + 6) == *(ushort *)(param_3 + 6)) {
      if (*(float *)(param_2 + 8) < *(float *)(param_3 + 8)) {
        return 1;
      }
    }
    else if (*(ushort *)(param_2 + 6) < *(ushort *)(param_3 + 6)) {
      return 1;
    }
  }
  else if (*(byte *)(param_2 + 5) < *(byte *)(param_3 + 5)) {
    return 1;
  }
  return 0;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_006eaad4(undefined4 param_1,undefined4 *param_2)

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
  ushort uStack_2a;
  
  puVar13 = (undefined4 *)param_2[1];
  param_2 = (undefined4 *)*param_2;
  if (param_2 != puVar13) {
    uVar2 = (int)puVar13 - (int)param_2;
    iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
    fn_007ad5c8(param_2,puVar13,(iVar3 >> 4) - (iVar3 >> 0x1f));
    if ((int)uVar2 < 0x1c1) {
      fn_007a488c(param_2,puVar13);
      return;
    }
    fn_007a488c(param_2,param_2 + 0x70);
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
      uStack_2a = (ushort)((uint)uVar4 >> 0x10);
      puVar12 = param_2;
      if (bStack_2b != bVar1) goto joined_r0x006eabc4;
      puVar11 = param_2;
      if (uStack_2a == *(ushort *)((int)param_2 + -0x16)) {
        if (fVar9 < (float)param_2[-5]) {
LAB_006eabc8:
          do {
            while( true ) {
              puVar12 = puVar10;
              uVar14 = puVar12[1];
              uVar15 = puVar12[2];
              uVar16 = puVar12[3];
              uVar17 = puVar12[4];
              uVar18 = puVar12[5];
              uVar19 = puVar12[6];
              *puVar11 = *puVar12;
              puVar11[1] = uVar14;
              puVar11[2] = uVar15;
              puVar11[3] = uVar16;
              puVar11[4] = uVar17;
              puVar11[5] = uVar18;
              puVar11[6] = uVar19;
              puVar10 = puVar12 + -7;
              bVar1 = *(byte *)((int)puVar12 + -0x17);
              if (bStack_2b != bVar1) break;
              puVar11 = puVar12;
              if (uStack_2a == *(ushort *)((int)puVar12 + -0x16)) {
                if ((float)puVar12[-5] <= fVar9) goto LAB_006eac28;
              }
              else if (*(ushort *)((int)puVar12 + -0x16) <= uStack_2a) goto LAB_006eac28;
            }
joined_r0x006eabc4:
            puVar11 = puVar12;
          } while (bStack_2b < bVar1);
        }
      }
      else if (uStack_2a < *(ushort *)((int)param_2 + -0x16)) goto LAB_006eabc8;
LAB_006eac28:
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


