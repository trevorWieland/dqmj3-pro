#include "007a0ea8_007a1158.h"



void fn_007a1158(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_44;
  byte bStack_3f;
  
  iVar2 = param_2;
  while( true ) {
    iVar7 = iVar2 * 2;
    iVar5 = iVar7 + 2;
    if (param_3 <= iVar5) break;
    iVar3 = param_1 + iVar5 * 0x1c;
    if ((*(int *)(iVar3 + 0x10) == *(int *)(iVar3 + -0xc)) &&
       (*(byte *)(iVar3 + 5) != *(byte *)(iVar3 + -0x17))) {
      if (*(byte *)(iVar3 + 5) < *(byte *)(iVar3 + -0x17)) {
LAB_007a11c0:
        iVar5 = iVar7 + 1;
      }
    }
    else if (*(float *)(iVar3 + 8) < *(float *)(iVar3 + -0x14)) goto LAB_007a11c0;
    puVar4 = (undefined4 *)(param_1 + iVar2 * 0x1c);
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0x1c);
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    uVar12 = puVar1[4];
    uVar14 = puVar1[5];
    uVar16 = puVar1[6];
    *puVar4 = *puVar1;
    puVar4[1] = uVar8;
    puVar4[2] = uVar9;
    puVar4[3] = uVar10;
    puVar4[4] = uVar12;
    puVar4[5] = uVar14;
    puVar4[6] = uVar16;
    iVar2 = iVar5;
  }
  if (iVar5 == param_3) {
    iVar5 = param_1 + iVar5 * 0x1c;
    puVar1 = (undefined4 *)(param_1 + iVar2 * 0x1c);
    uVar8 = *(undefined4 *)(iVar5 + -0x18);
    uVar9 = *(undefined4 *)(iVar5 + -0x14);
    uVar10 = *(undefined4 *)(iVar5 + -0x10);
    uVar12 = *(undefined4 *)(iVar5 + -0xc);
    uVar14 = *(undefined4 *)(iVar5 + -8);
    uVar16 = *(undefined4 *)(iVar5 + -4);
    iVar2 = iVar7 + 1;
    *puVar1 = *(undefined4 *)(iVar5 + -0x1c);
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1[4] = uVar12;
    puVar1[5] = uVar14;
    puVar1[6] = uVar16;
  }
  local_44 = CONCAT31(((unsigned int)(local_44) >> 8) & 0xffffff,*param_4);
  uVar9 = *(undefined4 *)(param_4 + 4);
  fVar6 = *(float *)(param_4 + 8);
  uVar10 = *(undefined4 *)(param_4 + 0xc);
  iVar7 = *(int *)(param_4 + 0x10);
  uVar12 = *(undefined4 *)(param_4 + 0x14);
  uVar8 = *(undefined4 *)(param_4 + 0x18);
  while (iVar5 = (iVar2 + -1) / 2, param_2 < iVar2) {
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0x1c);
    iVar3 = puVar1[4];
    if (iVar3 == iVar7) {
      bStack_3f = (byte)((uint)uVar9 >> 8);
      if (*(byte *)((int)puVar1 + 5) == bStack_3f) goto LAB_007a12cc;
      if (bStack_3f <= *(byte *)((int)puVar1 + 5)) break;
    }
    else {
LAB_007a12cc:
      if (fVar6 <= (float)puVar1[2]) break;
    }
    uVar16 = puVar1[1];
    uVar11 = puVar1[2];
    uVar13 = puVar1[3];
    uVar15 = puVar1[6];
    uVar14 = puVar1[5];
    puVar4 = (undefined4 *)(param_1 + iVar2 * 0x1c);
    *puVar4 = *puVar1;
    puVar4[1] = uVar16;
    puVar4[2] = uVar11;
    puVar4[3] = uVar13;
    puVar4[4] = iVar3;
    puVar4[5] = uVar14;
    puVar4[6] = uVar15;
    iVar2 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar2 * 0x1c);
  puVar1[5] = uVar12;
  puVar1[6] = uVar8;
  *puVar1 = local_44;
  puVar1[1] = uVar9;
  puVar1[2] = fVar6;
  puVar1[3] = uVar10;
  puVar1[4] = iVar7;
  return;
}



void fn_007a0f94(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_38;
  byte bStack_33;
  ushort uStack_32;
  
  iVar7 = param_2;
  while( true ) {
    iVar1 = iVar7 * 2;
    iVar5 = iVar1 + 2;
    if (param_3 <= iVar5) break;
    iVar3 = param_1 + iVar5 * 0x1c;
    if (*(byte *)(iVar3 + 5) == *(byte *)(iVar3 + -0x17)) {
      if (*(ushort *)(iVar3 + 6) == *(ushort *)(iVar3 + -0x16)) {
        if (*(float *)(iVar3 + 8) < *(float *)(iVar3 + -0x14)) {
LAB_007a100c:
          iVar5 = iVar1 + 1;
        }
      }
      else if (*(ushort *)(iVar3 + 6) < *(ushort *)(iVar3 + -0x16)) goto LAB_007a100c;
    }
    else if (*(byte *)(iVar3 + 5) < *(byte *)(iVar3 + -0x17)) goto LAB_007a100c;
    puVar2 = (undefined4 *)(param_1 + iVar5 * 0x1c);
    puVar4 = (undefined4 *)(param_1 + iVar7 * 0x1c);
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar11 = puVar2[3];
    uVar13 = puVar2[4];
    uVar15 = puVar2[5];
    uVar17 = puVar2[6];
    *puVar4 = *puVar2;
    puVar4[1] = uVar8;
    puVar4[2] = uVar9;
    puVar4[3] = uVar11;
    puVar4[4] = uVar13;
    puVar4[5] = uVar15;
    puVar4[6] = uVar17;
    iVar7 = iVar5;
  }
  iVar3 = iVar7;
  if (iVar5 == param_3) {
    iVar5 = param_1 + iVar5 * 0x1c;
    iVar3 = iVar1 + 1;
    uVar8 = *(undefined4 *)(iVar5 + -0x18);
    uVar9 = *(undefined4 *)(iVar5 + -0x14);
    uVar11 = *(undefined4 *)(iVar5 + -0x10);
    uVar13 = *(undefined4 *)(iVar5 + -0xc);
    uVar15 = *(undefined4 *)(iVar5 + -8);
    uVar17 = *(undefined4 *)(iVar5 + -4);
    puVar2 = (undefined4 *)(param_1 + iVar7 * 0x1c);
    *puVar2 = *(undefined4 *)(iVar5 + -0x1c);
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar11;
    puVar2[4] = uVar13;
    puVar2[5] = uVar15;
    puVar2[6] = uVar17;
  }
  local_38 = CONCAT31(((unsigned int)(local_38) >> 8) & 0xffffff,*param_4);
  uVar9 = *(undefined4 *)(param_4 + 4);
  fVar6 = *(float *)(param_4 + 8);
  uVar11 = *(undefined4 *)(param_4 + 0xc);
  uVar13 = *(undefined4 *)(param_4 + 0x10);
  uVar15 = *(undefined4 *)(param_4 + 0x14);
  uVar8 = *(undefined4 *)(param_4 + 0x18);
  while (iVar7 = (iVar3 + -1) / 2, param_2 < iVar3) {
    bStack_33 = (byte)((uint)uVar9 >> 8);
    puVar2 = (undefined4 *)(param_1 + iVar7 * 0x1c);
    if (*(byte *)((int)puVar2 + 5) == bStack_33) {
      uStack_32 = (ushort)((uint)uVar9 >> 0x10);
      if (*(ushort *)((int)puVar2 + 6) == uStack_32) {
        if (fVar6 <= (float)puVar2[2]) break;
      }
      else if (uStack_32 <= *(ushort *)((int)puVar2 + 6)) break;
    }
    else if (bStack_33 <= *(byte *)((int)puVar2 + 5)) break;
    uVar17 = puVar2[1];
    uVar10 = puVar2[2];
    uVar12 = puVar2[3];
    uVar14 = puVar2[4];
    uVar16 = puVar2[5];
    uVar18 = puVar2[6];
    puVar4 = (undefined4 *)(param_1 + iVar3 * 0x1c);
    *puVar4 = *puVar2;
    puVar4[1] = uVar17;
    puVar4[2] = uVar10;
    puVar4[3] = uVar12;
    puVar4[4] = uVar14;
    puVar4[5] = uVar16;
    puVar4[6] = uVar18;
    iVar3 = iVar7;
  }
  puVar2 = (undefined4 *)(param_1 + iVar3 * 0x1c);
  puVar2[5] = uVar15;
  puVar2[6] = uVar8;
  *puVar2 = local_38;
  puVar2[1] = uVar9;
  puVar2[2] = fVar6;
  puVar2[3] = uVar11;
  puVar2[4] = uVar13;
  return;
}



void fn_007a0ea8(int param_1,int param_2,int param_3,byte *param_4)

{
  int iVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint unaff_r6;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  
  iVar6 = param_2;
  while( true ) {
    iVar1 = iVar6 * 2;
    iVar5 = iVar1 + 2;
    if (param_3 <= iVar5) break;
    puVar8 = (undefined4 *)(param_1 + iVar6 * 0x1c);
    puVar7 = (undefined4 *)(param_1 + (iVar1 + 1) * 0x1c);
    uVar10 = puVar7[1];
    uVar12 = puVar7[2];
    uVar14 = puVar7[3];
    uVar16 = puVar7[4];
    uVar18 = puVar7[5];
    uVar20 = puVar7[6];
    *puVar8 = *puVar7;
    puVar8[1] = uVar10;
    puVar8[2] = uVar12;
    puVar8[3] = uVar14;
    puVar8[4] = uVar16;
    puVar8[5] = uVar18;
    puVar8[6] = uVar20;
    iVar6 = iVar1 + 1;
  }
  iVar4 = iVar6;
  if (iVar5 == param_3) {
    iVar5 = param_1 + iVar5 * 0x1c;
    iVar4 = iVar1 + 1;
    uVar10 = *(undefined4 *)(iVar5 + -0x18);
    uVar12 = *(undefined4 *)(iVar5 + -0x14);
    uVar14 = *(undefined4 *)(iVar5 + -0x10);
    uVar16 = *(undefined4 *)(iVar5 + -0xc);
    uVar18 = *(undefined4 *)(iVar5 + -8);
    uVar20 = *(undefined4 *)(iVar5 + -4);
    puVar7 = (undefined4 *)(param_1 + iVar6 * 0x1c);
    *puVar7 = *(undefined4 *)(iVar5 + -0x1c);
    puVar7[1] = uVar10;
    puVar7[2] = uVar12;
    puVar7[3] = uVar14;
    puVar7[4] = uVar16;
    puVar7[5] = uVar18;
    puVar7[6] = uVar20;
  }
  bVar2 = *param_4;
  uVar19 = *(uint *)(param_4 + 0x18);
  uVar9 = *(uint *)(param_4 + 0xc);
  uVar11 = *(uint *)(param_4 + 0x10);
  uVar13 = *(uint *)(param_4 + 0x14);
  uVar15 = *(uint *)(param_4 + 4);
  uVar17 = *(uint *)(param_4 + 8);
  while (iVar6 = (iVar4 + -1) / 2, param_2 < iVar4) {
    puVar7 = (undefined4 *)(param_1 + iVar6 * 0x1c);
    uVar10 = puVar7[1];
    uVar12 = puVar7[2];
    uVar14 = puVar7[3];
    uVar16 = puVar7[4];
    uVar18 = puVar7[5];
    uVar20 = puVar7[6];
    puVar8 = (undefined4 *)(param_1 + iVar4 * 0x1c);
    *puVar8 = *puVar7;
    puVar8[1] = uVar10;
    puVar8[2] = uVar12;
    puVar8[3] = uVar14;
    puVar8[4] = uVar16;
    puVar8[5] = uVar18;
    puVar8[6] = uVar20;
    iVar4 = iVar6;
  }
  puVar3 = (uint *)(param_1 + iVar4 * 0x1c);
  *puVar3 = (uint)bVar2 | unaff_r6 & 0xffffff00;
  puVar3[6] = uVar19;
  puVar3[3] = uVar9;
  puVar3[4] = uVar11;
  puVar3[5] = uVar13;
  puVar3[1] = uVar15;
  puVar3[2] = uVar17;
  return;
}


