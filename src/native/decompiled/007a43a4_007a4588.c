#include "007a43a4_007a4588.h"



void fn_007a4588(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint unaff_r6;
  int iVar6;
  uint *in_r12;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  uint local_48;
  byte bStack_43;
  
  if (param_1 != param_2) {
    in_r12 = param_1 + 7;
  }
  if (param_1 == param_2 || in_r12 == param_2) {
    return;
  }
  do {
    uVar5 = in_r12[1];
    fVar17 = (float)in_r12[2];
    uVar9 = (uVar5 & 0xffff) >> 8;
    uVar7 = in_r12[3];
    uVar8 = in_r12[4];
    uVar10 = in_r12[5];
    uVar12 = in_r12[6];
    unaff_r6 = unaff_r6 & 0xffffff00 | (uint)(byte)*in_r12;
    if (uVar9 == *(byte *)((int)param_1 + 5)) {
      if ((float)param_1[2] < fVar17) goto LAB_007a4604;
LAB_007a46c8:
      local_48 = CONCAT31(((unsigned int)(local_48) >> 8) & 0xffffff,(byte)*in_r12);
      puVar4 = in_r12 + -7;
      bStack_43 = (byte)(uVar5 >> 8);
      bVar1 = *(byte *)((int)in_r12 + -0x17);
      puVar2 = in_r12;
      if (bStack_43 != bVar1) goto joined_r0x007a4710;
      if ((float)in_r12[-5] < fVar17) {
        do {
          while( true ) {
            puVar3 = puVar4;
            uVar9 = puVar3[1];
            uVar11 = puVar3[2];
            uVar13 = puVar3[3];
            uVar14 = puVar3[4];
            uVar15 = puVar3[5];
            uVar16 = puVar3[6];
            *puVar2 = *puVar3;
            puVar2[1] = uVar9;
            puVar2[2] = uVar11;
            puVar2[3] = uVar13;
            puVar2[4] = uVar14;
            puVar2[5] = uVar15;
            puVar2[6] = uVar16;
            puVar4 = puVar3 + -7;
            bVar1 = *(byte *)((int)puVar3 + -0x17);
            puVar2 = puVar3;
            if (bStack_43 != bVar1) break;
            if (fVar17 <= (float)puVar3[-5]) goto LAB_007a4758;
          }
joined_r0x007a4710:
        } while (bStack_43 < bVar1);
      }
LAB_007a4758:
      *puVar2 = local_48;
      puVar2[1] = uVar5;
      puVar2[2] = (uint)fVar17;
      puVar2[3] = uVar7;
      puVar2[4] = uVar8;
      puVar2[5] = uVar10;
      puVar2[6] = uVar12;
    }
    else {
      if (*(byte *)((int)param_1 + 5) <= uVar9) goto LAB_007a46c8;
LAB_007a4604:
      puVar4 = in_r12 + 7;
      puVar2 = in_r12;
      if (param_1 < in_r12) {
        uVar9 = (int)in_r12 - (int)param_1;
        if (0 < (int)uVar9) {
          iVar6 = (int)((longlong)(int)uVar9 * -0x6db6db6d + ((ulonglong)uVar9 << 0x20) >> 0x20);
          if (((iVar6 >> 4) - (iVar6 >> 0x1f) & 1U) != 0) {
            puVar2 = in_r12 + -7;
            *in_r12 = *puVar2;
            in_r12[1] = in_r12[-6];
            in_r12[2] = in_r12[-5];
            in_r12[3] = in_r12[-4];
            in_r12[4] = in_r12[-3];
            in_r12[5] = in_r12[-2];
            in_r12[6] = in_r12[-1];
            puVar4 = in_r12;
          }
          iVar6 = (int)((longlong)(int)uVar9 * -0x6db6db6d + ((ulonglong)uVar9 << 0x20) >> 0x20);
          for (iVar6 = (iVar6 >> 4) - (iVar6 >> 0x1f) >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
            uVar9 = puVar2[-6];
            uVar11 = puVar2[-5];
            uVar13 = puVar2[-4];
            uVar14 = puVar2[-3];
            uVar15 = puVar2[-2];
            uVar16 = puVar2[-1];
            puVar4[-7] = puVar2[-7];
            puVar4[-6] = uVar9;
            puVar4[-5] = uVar11;
            puVar4[-4] = uVar13;
            puVar4[-3] = uVar14;
            puVar4[-2] = uVar15;
            puVar4[-1] = uVar16;
            uVar9 = puVar2[-0xd];
            uVar11 = puVar2[-0xc];
            uVar13 = puVar2[-0xb];
            uVar14 = puVar2[-10];
            uVar15 = puVar2[-9];
            uVar16 = puVar2[-8];
            puVar4[-0xe] = puVar2[-0xe];
            puVar4[-0xd] = uVar9;
            puVar4[-0xc] = uVar11;
            puVar4[-0xb] = uVar13;
            puVar4[-10] = uVar14;
            puVar4[-9] = uVar15;
            puVar4[-8] = uVar16;
            puVar2 = puVar2 + -0xe;
            puVar4 = puVar4 + -0xe;
          }
        }
      }
      else {
        while (param_1 != puVar2) {
          uVar9 = puVar2[-6];
          uVar11 = puVar2[-5];
          uVar13 = puVar2[-4];
          uVar14 = puVar2[-3];
          uVar15 = puVar2[-2];
          uVar16 = puVar2[-1];
          puVar4[-7] = puVar2[-7];
          puVar4[-6] = uVar9;
          puVar4[-5] = uVar11;
          puVar4[-4] = uVar13;
          puVar4[-3] = uVar14;
          puVar4[-2] = uVar15;
          puVar4[-1] = uVar16;
          puVar4 = puVar4 + -7;
          puVar2 = puVar2 + -7;
        }
      }
      param_1[1] = uVar5;
      *param_1 = unaff_r6;
      param_1[2] = (uint)fVar17;
      param_1[3] = uVar7;
      param_1[4] = uVar8;
      param_1[5] = uVar10;
      param_1[6] = uVar12;
    }
    in_r12 = in_r12 + 7;
    if (in_r12 == param_2) {
      return;
    }
  } while( true );
}



void fn_007a43a4(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint unaff_r6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_48;
  byte bStack_43;
  ushort uStack_42;
  
  puVar4 = param_1;
  if (param_1 == param_2) {
    return;
  }
  do {
    while( true ) {
      puVar2 = puVar4 + 7;
      if (puVar2 == param_2) {
        return;
      }
      uVar6 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      uVar11 = puVar2[4];
      uVar13 = puVar2[5];
      uVar15 = puVar2[6];
      uVar10 = (uVar6 & 0xffff) >> 8;
      unaff_r6 = unaff_r6 & 0xffffff00 | (uint)(byte)*puVar2;
      if (uVar10 == *(byte *)((int)param_1 + 5)) break;
      if (uVar10 < *(byte *)((int)param_1 + 5)) goto LAB_007a4420;
LAB_007a44e0:
      uVar10 = local_48 >> 8;
      local_48 = CONCAT31((int3)uVar10,(byte)*puVar2);
      puVar3 = puVar2 + -7;
      bStack_43 = (byte)(uVar6 >> 8);
      bVar1 = *(byte *)((int)puVar4 + 5);
      uStack_42 = (ushort)(uVar6 >> 0x10);
      puVar5 = puVar2;
      if (bStack_43 != bVar1) goto joined_r0x007a4564;
      if (uStack_42 < *(ushort *)((int)puVar4 + 6)) {
        do {
          while( true ) {
            puVar4 = puVar3;
            uVar10 = puVar4[1];
            uVar12 = puVar4[2];
            uVar14 = puVar4[3];
            uVar16 = puVar4[4];
            uVar17 = puVar4[5];
            uVar18 = puVar4[6];
            *puVar5 = *puVar4;
            puVar5[1] = uVar10;
            puVar5[2] = uVar12;
            puVar5[3] = uVar14;
            puVar5[4] = uVar16;
            puVar5[5] = uVar17;
            puVar5[6] = uVar18;
            puVar3 = puVar4 + -7;
            bVar1 = *(byte *)((int)puVar4 + -0x17);
            puVar5 = puVar4;
            if (bStack_43 != bVar1) break;
            if (*(ushort *)((int)puVar4 + -0x16) <= uStack_42) goto LAB_007a4568;
          }
joined_r0x007a4564:
        } while (bStack_43 < bVar1);
      }
LAB_007a4568:
      *puVar5 = local_48;
      puVar5[1] = uVar6;
      puVar5[2] = uVar8;
      puVar5[3] = uVar9;
      puVar5[4] = uVar11;
      puVar5[5] = uVar13;
      puVar5[6] = uVar15;
      puVar4 = puVar2;
    }
    if ((uint)*(ushort *)((int)param_1 + 6) <= uVar6 >> 0x10) goto LAB_007a44e0;
LAB_007a4420:
    puVar4 = puVar2 + 7;
    puVar3 = puVar2;
    if (param_1 < puVar2) {
      uVar10 = (int)puVar2 - (int)param_1;
      if (0 < (int)uVar10) {
        iVar7 = (int)((longlong)(int)uVar10 * -0x6db6db6d + ((ulonglong)uVar10 << 0x20) >> 0x20);
        if (((iVar7 >> 4) - (iVar7 >> 0x1f) & 1U) != 0) {
          puVar3 = puVar2 + -7;
          *puVar2 = *puVar3;
          puVar2[1] = puVar2[-6];
          puVar2[2] = puVar2[-5];
          puVar2[3] = puVar2[-4];
          puVar2[4] = puVar2[-3];
          puVar2[5] = puVar2[-2];
          puVar2[6] = puVar2[-1];
          puVar4 = puVar2;
        }
        iVar7 = (int)((longlong)(int)uVar10 * -0x6db6db6d + ((ulonglong)uVar10 << 0x20) >> 0x20);
        for (iVar7 = (iVar7 >> 4) - (iVar7 >> 0x1f) >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
          uVar10 = puVar3[-6];
          uVar12 = puVar3[-5];
          uVar14 = puVar3[-4];
          uVar16 = puVar3[-3];
          uVar17 = puVar3[-2];
          uVar18 = puVar3[-1];
          puVar4[-7] = puVar3[-7];
          puVar4[-6] = uVar10;
          puVar4[-5] = uVar12;
          puVar4[-4] = uVar14;
          puVar4[-3] = uVar16;
          puVar4[-2] = uVar17;
          puVar4[-1] = uVar18;
          uVar10 = puVar3[-0xd];
          uVar12 = puVar3[-0xc];
          uVar14 = puVar3[-0xb];
          uVar16 = puVar3[-10];
          uVar17 = puVar3[-9];
          uVar18 = puVar3[-8];
          puVar4[-0xe] = puVar3[-0xe];
          puVar4[-0xd] = uVar10;
          puVar4[-0xc] = uVar12;
          puVar4[-0xb] = uVar14;
          puVar4[-10] = uVar16;
          puVar4[-9] = uVar17;
          puVar4[-8] = uVar18;
          puVar3 = puVar3 + -0xe;
          puVar4 = puVar4 + -0xe;
        }
      }
    }
    else {
      while (param_1 != puVar3) {
        uVar10 = puVar3[-6];
        uVar12 = puVar3[-5];
        uVar14 = puVar3[-4];
        uVar16 = puVar3[-3];
        uVar17 = puVar3[-2];
        uVar18 = puVar3[-1];
        puVar4[-7] = puVar3[-7];
        puVar4[-6] = uVar10;
        puVar4[-5] = uVar12;
        puVar4[-4] = uVar14;
        puVar4[-3] = uVar16;
        puVar4[-2] = uVar17;
        puVar4[-1] = uVar18;
        puVar4 = puVar4 + -7;
        puVar3 = puVar3 + -7;
      }
    }
    *param_1 = unaff_r6;
    param_1[1] = uVar6;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    param_1[4] = uVar11;
    param_1[5] = uVar13;
    param_1[6] = uVar15;
    puVar4 = puVar2;
  } while( true );
}


