#include "007a4778_007a488c.h"



void fn_007a488c(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint unaff_r5;
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
  ushort uStack_42;
  
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
    unaff_r5 = unaff_r5 & 0xffffff00 | (uint)(byte)*in_r12;
    if (uVar9 == *(byte *)((int)param_1 + 5)) {
      if (uVar5 >> 0x10 != (uint)*(ushort *)((int)param_1 + 6)) {
        if ((uint)*(ushort *)((int)param_1 + 6) <= uVar5 >> 0x10) goto LAB_007a49e8;
        goto LAB_007a4924;
      }
      if (fVar17 < (float)param_1[2]) goto LAB_007a4924;
LAB_007a49e8:
      local_48 = CONCAT31(((unsigned int)(local_48) >> 8) & 0xffffff,(byte)*in_r12);
      puVar3 = in_r12 + -7;
      bStack_43 = (byte)(uVar5 >> 8);
      bVar1 = *(byte *)((int)in_r12 + -0x17);
      uStack_42 = (ushort)(uVar5 >> 0x10);
      puVar2 = in_r12;
      if (bStack_43 != bVar1) goto joined_r0x007a4a50;
      puVar4 = in_r12;
      if (uStack_42 == *(ushort *)((int)in_r12 + -0x16)) {
        if (fVar17 < (float)in_r12[-5]) {
LAB_007a4a54:
          do {
            while( true ) {
              puVar2 = puVar3;
              uVar9 = puVar2[1];
              uVar11 = puVar2[2];
              uVar13 = puVar2[3];
              uVar14 = puVar2[4];
              uVar15 = puVar2[5];
              uVar16 = puVar2[6];
              *puVar4 = *puVar2;
              puVar4[1] = uVar9;
              puVar4[2] = uVar11;
              puVar4[3] = uVar13;
              puVar4[4] = uVar14;
              puVar4[5] = uVar15;
              puVar4[6] = uVar16;
              puVar3 = puVar2 + -7;
              bVar1 = *(byte *)((int)puVar2 + -0x17);
              if (bStack_43 != bVar1) break;
              puVar4 = puVar2;
              if (uStack_42 == *(ushort *)((int)puVar2 + -0x16)) {
                if ((float)puVar2[-5] <= fVar17) goto LAB_007a4ab4;
              }
              else if (*(ushort *)((int)puVar2 + -0x16) <= uStack_42) goto LAB_007a4ab4;
            }
joined_r0x007a4a50:
            puVar4 = puVar2;
          } while (bStack_43 < bVar1);
        }
      }
      else if (uStack_42 < *(ushort *)((int)in_r12 + -0x16)) goto LAB_007a4a54;
LAB_007a4ab4:
      *puVar2 = local_48;
      puVar2[1] = uVar5;
      puVar2[2] = (uint)fVar17;
      puVar2[3] = uVar7;
      puVar2[4] = uVar8;
      puVar2[5] = uVar10;
      puVar2[6] = uVar12;
    }
    else {
      if (*(byte *)((int)param_1 + 5) <= uVar9) goto LAB_007a49e8;
LAB_007a4924:
      puVar3 = in_r12 + 7;
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
            puVar3 = in_r12;
          }
          iVar6 = (int)((longlong)(int)uVar9 * -0x6db6db6d + ((ulonglong)uVar9 << 0x20) >> 0x20);
          for (iVar6 = (iVar6 >> 4) - (iVar6 >> 0x1f) >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
            uVar9 = puVar2[-6];
            uVar11 = puVar2[-5];
            uVar13 = puVar2[-4];
            uVar14 = puVar2[-3];
            uVar15 = puVar2[-2];
            uVar16 = puVar2[-1];
            puVar3[-7] = puVar2[-7];
            puVar3[-6] = uVar9;
            puVar3[-5] = uVar11;
            puVar3[-4] = uVar13;
            puVar3[-3] = uVar14;
            puVar3[-2] = uVar15;
            puVar3[-1] = uVar16;
            uVar9 = puVar2[-0xd];
            uVar11 = puVar2[-0xc];
            uVar13 = puVar2[-0xb];
            uVar14 = puVar2[-10];
            uVar15 = puVar2[-9];
            uVar16 = puVar2[-8];
            puVar3[-0xe] = puVar2[-0xe];
            puVar3[-0xd] = uVar9;
            puVar3[-0xc] = uVar11;
            puVar3[-0xb] = uVar13;
            puVar3[-10] = uVar14;
            puVar3[-9] = uVar15;
            puVar3[-8] = uVar16;
            puVar2 = puVar2 + -0xe;
            puVar3 = puVar3 + -0xe;
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
          puVar3[-7] = puVar2[-7];
          puVar3[-6] = uVar9;
          puVar3[-5] = uVar11;
          puVar3[-4] = uVar13;
          puVar3[-3] = uVar14;
          puVar3[-2] = uVar15;
          puVar3[-1] = uVar16;
          puVar3 = puVar3 + -7;
          puVar2 = puVar2 + -7;
        }
      }
      param_1[1] = uVar5;
      *param_1 = unaff_r5;
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



void fn_007a4778(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint unaff_r5;
  int iVar4;
  uint uVar5;
  uint uVar6;
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
  
  puVar1 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (puVar1 = puVar1 + 7, puVar1 != param_2) {
    uVar7 = puVar1[3];
    uVar8 = puVar1[4];
    uVar9 = puVar1[5];
    uVar10 = puVar1[6];
    puVar3 = puVar1 + 7;
    unaff_r5 = unaff_r5 & 0xffffff00 | (uint)(byte)*puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    puVar2 = puVar1;
    if (param_1 < puVar1) {
      uVar11 = (int)puVar1 - (int)param_1;
      if (0 < (int)uVar11) {
        iVar4 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >> 0x20);
        if (((iVar4 >> 4) - (iVar4 >> 0x1f) & 1U) != 0) {
          puVar2 = puVar1 + -7;
          *puVar1 = *puVar2;
          puVar1[1] = puVar1[-6];
          puVar1[2] = puVar1[-5];
          puVar1[3] = puVar1[-4];
          puVar1[4] = puVar1[-3];
          puVar1[5] = puVar1[-2];
          puVar1[6] = puVar1[-1];
          puVar3 = puVar1;
        }
        iVar4 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >> 0x20);
        for (iVar4 = (iVar4 >> 4) - (iVar4 >> 0x1f) >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar11 = puVar2[-6];
          uVar12 = puVar2[-5];
          uVar13 = puVar2[-4];
          uVar14 = puVar2[-3];
          uVar15 = puVar2[-2];
          uVar16 = puVar2[-1];
          puVar3[-7] = puVar2[-7];
          puVar3[-6] = uVar11;
          puVar3[-5] = uVar12;
          puVar3[-4] = uVar13;
          puVar3[-3] = uVar14;
          puVar3[-2] = uVar15;
          puVar3[-1] = uVar16;
          uVar11 = puVar2[-0xd];
          uVar12 = puVar2[-0xc];
          uVar13 = puVar2[-0xb];
          uVar14 = puVar2[-10];
          uVar15 = puVar2[-9];
          uVar16 = puVar2[-8];
          puVar3[-0xe] = puVar2[-0xe];
          puVar3[-0xd] = uVar11;
          puVar3[-0xc] = uVar12;
          puVar3[-0xb] = uVar13;
          puVar3[-10] = uVar14;
          puVar3[-9] = uVar15;
          puVar3[-8] = uVar16;
          puVar2 = puVar2 + -0xe;
          puVar3 = puVar3 + -0xe;
        }
      }
    }
    else {
      while (param_1 != puVar2) {
        uVar11 = puVar2[-6];
        uVar12 = puVar2[-5];
        uVar13 = puVar2[-4];
        uVar14 = puVar2[-3];
        uVar15 = puVar2[-2];
        uVar16 = puVar2[-1];
        puVar3[-7] = puVar2[-7];
        puVar3[-6] = uVar11;
        puVar3[-5] = uVar12;
        puVar3[-4] = uVar13;
        puVar3[-3] = uVar14;
        puVar3[-2] = uVar15;
        puVar3[-1] = uVar16;
        puVar3 = puVar3 + -7;
        puVar2 = puVar2 + -7;
      }
    }
    *param_1 = unaff_r5;
    param_1[1] = uVar5;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    param_1[4] = uVar8;
    param_1[5] = uVar9;
    param_1[6] = uVar10;
  }
  return;
}


