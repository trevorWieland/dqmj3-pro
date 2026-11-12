#include "007a0a0c_007a0d1c.h"



void fn_007a0d1c(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
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
  undefined4 local_34;
  byte bStack_2f;
  
  iVar3 = param_2;
  while( true ) {
    iVar1 = iVar3 * 2;
    iVar6 = iVar1 + 2;
    if (param_3 <= iVar6) break;
    iVar4 = param_1 + iVar6 * 0x1c;
    if (*(byte *)(iVar4 + 5) == *(byte *)(iVar4 + -0x17)) {
      if (*(float *)(iVar4 + -0x14) < *(float *)(iVar4 + 8)) {
LAB_007a0d78:
        iVar6 = iVar1 + 1;
      }
    }
    else if (*(byte *)(iVar4 + 5) < *(byte *)(iVar4 + -0x17)) goto LAB_007a0d78;
    puVar5 = (undefined4 *)(param_1 + iVar3 * 0x1c);
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x1c);
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar11 = puVar2[3];
    uVar13 = puVar2[4];
    uVar15 = puVar2[5];
    uVar17 = puVar2[6];
    *puVar5 = *puVar2;
    puVar5[1] = uVar8;
    puVar5[2] = uVar9;
    puVar5[3] = uVar11;
    puVar5[4] = uVar13;
    puVar5[5] = uVar15;
    puVar5[6] = uVar17;
    iVar3 = iVar6;
  }
  iVar4 = iVar3;
  if (iVar6 == param_3) {
    iVar6 = param_1 + iVar6 * 0x1c;
    iVar4 = iVar1 + 1;
    uVar8 = *(undefined4 *)(iVar6 + -0x18);
    uVar9 = *(undefined4 *)(iVar6 + -0x14);
    uVar11 = *(undefined4 *)(iVar6 + -0x10);
    uVar13 = *(undefined4 *)(iVar6 + -0xc);
    uVar15 = *(undefined4 *)(iVar6 + -8);
    uVar17 = *(undefined4 *)(iVar6 + -4);
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x1c);
    *puVar2 = *(undefined4 *)(iVar6 + -0x1c);
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar11;
    puVar2[4] = uVar13;
    puVar2[5] = uVar15;
    puVar2[6] = uVar17;
  }
  local_34 = CONCAT31(((unsigned int)(local_34) >> 8) & 0xffffff,*param_4);
  uVar9 = *(undefined4 *)(param_4 + 4);
  fVar7 = *(float *)(param_4 + 8);
  uVar11 = *(undefined4 *)(param_4 + 0xc);
  uVar13 = *(undefined4 *)(param_4 + 0x10);
  uVar15 = *(undefined4 *)(param_4 + 0x14);
  uVar8 = *(undefined4 *)(param_4 + 0x18);
  while (iVar3 = (iVar4 + -1) / 2, param_2 < iVar4) {
    bStack_2f = (byte)((uint)uVar9 >> 8);
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x1c);
    if (*(byte *)((int)puVar2 + 5) == bStack_2f) {
      if ((float)puVar2[2] <= fVar7) break;
    }
    else if (bStack_2f <= *(byte *)((int)puVar2 + 5)) break;
    uVar17 = puVar2[1];
    uVar10 = puVar2[2];
    uVar12 = puVar2[3];
    uVar14 = puVar2[4];
    uVar16 = puVar2[5];
    uVar18 = puVar2[6];
    puVar5 = (undefined4 *)(param_1 + iVar4 * 0x1c);
    *puVar5 = *puVar2;
    puVar5[1] = uVar17;
    puVar5[2] = uVar10;
    puVar5[3] = uVar12;
    puVar5[4] = uVar14;
    puVar5[5] = uVar16;
    puVar5[6] = uVar18;
    iVar4 = iVar3;
  }
  puVar2 = (undefined4 *)(param_1 + iVar4 * 0x1c);
  puVar2[5] = uVar15;
  puVar2[6] = uVar8;
  *puVar2 = local_34;
  puVar2[1] = uVar9;
  puVar2[2] = fVar7;
  puVar2[3] = uVar11;
  puVar2[4] = uVar13;
  return;
}



void fn_007a0b98(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
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
  undefined4 local_34;
  byte bStack_2f;
  ushort uStack_2e;
  
  iVar6 = param_2;
  while( true ) {
    iVar1 = iVar6 * 2;
    iVar5 = iVar1 + 2;
    if (param_3 <= iVar5) break;
    iVar3 = param_1 + iVar5 * 0x1c;
    if (*(byte *)(iVar3 + 5) == *(byte *)(iVar3 + -0x17)) {
      if (*(ushort *)(iVar3 + 6) < *(ushort *)(iVar3 + -0x16)) {
LAB_007a0bf0:
        iVar5 = iVar1 + 1;
      }
    }
    else if (*(byte *)(iVar3 + 5) < *(byte *)(iVar3 + -0x17)) goto LAB_007a0bf0;
    puVar4 = (undefined4 *)(param_1 + iVar6 * 0x1c);
    puVar2 = (undefined4 *)(param_1 + iVar5 * 0x1c);
    uVar7 = puVar2[1];
    uVar9 = puVar2[2];
    uVar11 = puVar2[3];
    uVar13 = puVar2[4];
    uVar15 = puVar2[5];
    uVar17 = puVar2[6];
    *puVar4 = *puVar2;
    puVar4[1] = uVar7;
    puVar4[2] = uVar9;
    puVar4[3] = uVar11;
    puVar4[4] = uVar13;
    puVar4[5] = uVar15;
    puVar4[6] = uVar17;
    iVar6 = iVar5;
  }
  iVar3 = iVar6;
  if (iVar5 == param_3) {
    iVar5 = param_1 + iVar5 * 0x1c;
    iVar3 = iVar1 + 1;
    uVar7 = *(undefined4 *)(iVar5 + -0x18);
    uVar9 = *(undefined4 *)(iVar5 + -0x14);
    uVar11 = *(undefined4 *)(iVar5 + -0x10);
    uVar13 = *(undefined4 *)(iVar5 + -0xc);
    uVar15 = *(undefined4 *)(iVar5 + -8);
    uVar17 = *(undefined4 *)(iVar5 + -4);
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x1c);
    *puVar2 = *(undefined4 *)(iVar5 + -0x1c);
    puVar2[1] = uVar7;
    puVar2[2] = uVar9;
    puVar2[3] = uVar11;
    puVar2[4] = uVar13;
    puVar2[5] = uVar15;
    puVar2[6] = uVar17;
  }
  local_34 = CONCAT31(((unsigned int)(local_34) >> 8) & 0xffffff,*param_4);
  uVar9 = *(undefined4 *)(param_4 + 4);
  uVar11 = *(undefined4 *)(param_4 + 8);
  uVar13 = *(undefined4 *)(param_4 + 0xc);
  uVar15 = *(undefined4 *)(param_4 + 0x10);
  uVar17 = *(undefined4 *)(param_4 + 0x14);
  uVar7 = *(undefined4 *)(param_4 + 0x18);
  while (iVar6 = (iVar3 + -1) / 2, param_2 < iVar3) {
    bStack_2f = (byte)((uint)uVar9 >> 8);
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x1c);
    if (*(byte *)((int)puVar2 + 5) == bStack_2f) {
      uStack_2e = (ushort)((uint)uVar9 >> 0x10);
      if (uStack_2e <= *(ushort *)((int)puVar2 + 6)) break;
    }
    else if (bStack_2f <= *(byte *)((int)puVar2 + 5)) break;
    uVar8 = puVar2[1];
    uVar10 = puVar2[2];
    uVar12 = puVar2[3];
    uVar14 = puVar2[4];
    uVar16 = puVar2[5];
    uVar18 = puVar2[6];
    puVar4 = (undefined4 *)(param_1 + iVar3 * 0x1c);
    *puVar4 = *puVar2;
    puVar4[1] = uVar8;
    puVar4[2] = uVar10;
    puVar4[3] = uVar12;
    puVar4[4] = uVar14;
    puVar4[5] = uVar16;
    puVar4[6] = uVar18;
    iVar3 = iVar6;
  }
  puVar2 = (undefined4 *)(param_1 + iVar3 * 0x1c);
  puVar2[5] = uVar17;
  puVar2[6] = uVar7;
  *puVar2 = local_34;
  puVar2[1] = uVar9;
  puVar2[2] = uVar11;
  puVar2[3] = uVar13;
  puVar2[4] = uVar15;
  return;
}



void fn_007a0a0c(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
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
  undefined4 local_34;
  byte bStack_2f;
  
  iVar3 = param_2;
  while( true ) {
    iVar1 = iVar3 * 2;
    iVar6 = iVar1 + 2;
    if (param_3 <= iVar6) break;
    iVar4 = param_1 + iVar6 * 0x1c;
    if (*(byte *)(iVar4 + 5) == *(byte *)(iVar4 + -0x17)) {
      if (*(float *)(iVar4 + 8) < *(float *)(iVar4 + -0x14)) {
LAB_007a0a68:
        iVar6 = iVar1 + 1;
      }
    }
    else if (*(byte *)(iVar4 + 5) < *(byte *)(iVar4 + -0x17)) goto LAB_007a0a68;
    puVar5 = (undefined4 *)(param_1 + iVar3 * 0x1c);
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x1c);
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar11 = puVar2[3];
    uVar13 = puVar2[4];
    uVar15 = puVar2[5];
    uVar17 = puVar2[6];
    *puVar5 = *puVar2;
    puVar5[1] = uVar8;
    puVar5[2] = uVar9;
    puVar5[3] = uVar11;
    puVar5[4] = uVar13;
    puVar5[5] = uVar15;
    puVar5[6] = uVar17;
    iVar3 = iVar6;
  }
  iVar4 = iVar3;
  if (iVar6 == param_3) {
    iVar6 = param_1 + iVar6 * 0x1c;
    iVar4 = iVar1 + 1;
    uVar8 = *(undefined4 *)(iVar6 + -0x18);
    uVar9 = *(undefined4 *)(iVar6 + -0x14);
    uVar11 = *(undefined4 *)(iVar6 + -0x10);
    uVar13 = *(undefined4 *)(iVar6 + -0xc);
    uVar15 = *(undefined4 *)(iVar6 + -8);
    uVar17 = *(undefined4 *)(iVar6 + -4);
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x1c);
    *puVar2 = *(undefined4 *)(iVar6 + -0x1c);
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar11;
    puVar2[4] = uVar13;
    puVar2[5] = uVar15;
    puVar2[6] = uVar17;
  }
  local_34 = CONCAT31(((unsigned int)(local_34) >> 8) & 0xffffff,*param_4);
  uVar9 = *(undefined4 *)(param_4 + 4);
  fVar7 = *(float *)(param_4 + 8);
  uVar11 = *(undefined4 *)(param_4 + 0xc);
  uVar13 = *(undefined4 *)(param_4 + 0x10);
  uVar15 = *(undefined4 *)(param_4 + 0x14);
  uVar8 = *(undefined4 *)(param_4 + 0x18);
  while (iVar3 = (iVar4 + -1) / 2, param_2 < iVar4) {
    bStack_2f = (byte)((uint)uVar9 >> 8);
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x1c);
    if (*(byte *)((int)puVar2 + 5) == bStack_2f) {
      if (fVar7 <= (float)puVar2[2]) break;
    }
    else if (bStack_2f <= *(byte *)((int)puVar2 + 5)) break;
    uVar17 = puVar2[1];
    uVar10 = puVar2[2];
    uVar12 = puVar2[3];
    uVar14 = puVar2[4];
    uVar16 = puVar2[5];
    uVar18 = puVar2[6];
    puVar5 = (undefined4 *)(param_1 + iVar4 * 0x1c);
    *puVar5 = *puVar2;
    puVar5[1] = uVar17;
    puVar5[2] = uVar10;
    puVar5[3] = uVar12;
    puVar5[4] = uVar14;
    puVar5[5] = uVar16;
    puVar5[6] = uVar18;
    iVar4 = iVar3;
  }
  puVar2 = (undefined4 *)(param_1 + iVar4 * 0x1c);
  puVar2[5] = uVar15;
  puVar2[6] = uVar8;
  *puVar2 = local_34;
  puVar2[1] = uVar9;
  puVar2[2] = fVar7;
  puVar2[3] = uVar11;
  puVar2[4] = uVar13;
  return;
}


