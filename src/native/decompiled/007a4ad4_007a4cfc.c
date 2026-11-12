#include "007a4ad4_007a4cfc.h"



void fn_007a4cfc(uint *param_1,uint *param_2)

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
        if ((uint)*(ushort *)((int)param_1 + 6) <= uVar5 >> 0x10) goto LAB_007a4e58;
        goto LAB_007a4d94;
      }
      if ((float)param_1[2] < fVar17) goto LAB_007a4d94;
LAB_007a4e58:
      local_48 = CONCAT31(((unsigned int)(local_48) >> 8) & 0xffffff,(byte)*in_r12);
      puVar3 = in_r12 + -7;
      bStack_43 = (byte)(uVar5 >> 8);
      bVar1 = *(byte *)((int)in_r12 + -0x17);
      uStack_42 = (ushort)(uVar5 >> 0x10);
      puVar2 = in_r12;
      if (bStack_43 != bVar1) goto joined_r0x007a4ec0;
      puVar4 = in_r12;
      if (uStack_42 == *(ushort *)((int)in_r12 + -0x16)) {
        if ((float)in_r12[-5] < fVar17) {
LAB_007a4ec4:
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
                if (fVar17 <= (float)puVar2[-5]) goto LAB_007a4f24;
              }
              else if (*(ushort *)((int)puVar2 + -0x16) <= uStack_42) goto LAB_007a4f24;
            }
joined_r0x007a4ec0:
            puVar4 = puVar2;
          } while (bStack_43 < bVar1);
        }
      }
      else if (uStack_42 < *(ushort *)((int)in_r12 + -0x16)) goto LAB_007a4ec4;
LAB_007a4f24:
      *puVar2 = local_48;
      puVar2[1] = uVar5;
      puVar2[2] = (uint)fVar17;
      puVar2[3] = uVar7;
      puVar2[4] = uVar8;
      puVar2[5] = uVar10;
      puVar2[6] = uVar12;
    }
    else {
      if (*(byte *)((int)param_1 + 5) <= uVar9) goto LAB_007a4e58;
LAB_007a4d94:
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



void fn_007a4ad4(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint unaff_r6;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
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
    param_3 = param_1 + 7;
  }
  if (param_1 == param_2 || param_3 == param_2) {
    return;
  }
  do {
    uVar1 = param_3[4];
    unaff_r6 = (uint)(byte)*param_3 | unaff_r6 & 0xffffff00;
    uVar7 = param_3[3];
    fVar17 = (float)param_3[2];
    uVar8 = param_3[5];
    uVar10 = param_3[6];
    uVar2 = param_3[1];
    if ((uVar1 == param_1[4]) &&
       (uVar11 = (uVar2 & 0xffff) >> 8, uVar11 != *(byte *)((int)param_1 + 5))) {
      if (*(byte *)((int)param_1 + 5) <= uVar11) goto LAB_007a4c28;
LAB_007a4b5c:
      puVar3 = param_3 + 7;
      puVar5 = param_3;
      if (param_1 < param_3) {
        uVar11 = (int)param_3 - (int)param_1;
        if (0 < (int)uVar11) {
          iVar4 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >> 0x20);
          if (((iVar4 >> 4) - (iVar4 >> 0x1f) & 1U) != 0) {
            puVar5 = param_3 + -7;
            *param_3 = *puVar5;
            param_3[1] = param_3[-6];
            param_3[2] = param_3[-5];
            param_3[3] = param_3[-4];
            param_3[4] = param_3[-3];
            param_3[5] = param_3[-2];
            param_3[6] = param_3[-1];
            puVar3 = param_3;
          }
          iVar4 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >> 0x20);
          for (iVar4 = (iVar4 >> 4) - (iVar4 >> 0x1f) >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
            uVar11 = puVar5[-6];
            uVar12 = puVar5[-5];
            uVar13 = puVar5[-4];
            uVar14 = puVar5[-3];
            uVar15 = puVar5[-2];
            uVar16 = puVar5[-1];
            puVar3[-7] = puVar5[-7];
            puVar3[-6] = uVar11;
            puVar3[-5] = uVar12;
            puVar3[-4] = uVar13;
            puVar3[-3] = uVar14;
            puVar3[-2] = uVar15;
            puVar3[-1] = uVar16;
            uVar11 = puVar5[-0xd];
            uVar12 = puVar5[-0xc];
            uVar13 = puVar5[-0xb];
            uVar14 = puVar5[-10];
            uVar15 = puVar5[-9];
            uVar16 = puVar5[-8];
            puVar3[-0xe] = puVar5[-0xe];
            puVar3[-0xd] = uVar11;
            puVar3[-0xc] = uVar12;
            puVar3[-0xb] = uVar13;
            puVar3[-10] = uVar14;
            puVar3[-9] = uVar15;
            puVar3[-8] = uVar16;
            puVar3 = puVar3 + -0xe;
            puVar5 = puVar5 + -0xe;
          }
        }
      }
      else {
        while (param_1 != puVar5) {
          uVar11 = puVar5[-6];
          uVar12 = puVar5[-5];
          uVar13 = puVar5[-4];
          uVar14 = puVar5[-3];
          uVar15 = puVar5[-2];
          uVar16 = puVar5[-1];
          puVar3[-7] = puVar5[-7];
          puVar3[-6] = uVar11;
          puVar3[-5] = uVar12;
          puVar3[-4] = uVar13;
          puVar3[-3] = uVar14;
          puVar3[-2] = uVar15;
          puVar3[-1] = uVar16;
          puVar3 = puVar3 + -7;
          puVar5 = puVar5 + -7;
        }
      }
      param_1[1] = uVar2;
      *param_1 = unaff_r6;
      param_1[2] = (uint)fVar17;
      param_1[3] = uVar7;
      param_1[4] = uVar1;
      param_1[5] = uVar8;
      param_1[6] = uVar10;
    }
    else {
      if (fVar17 < (float)param_1[2]) goto LAB_007a4b5c;
LAB_007a4c28:
      local_48 = CONCAT31(((unsigned int)(local_48) >> 8) & 0xffffff,(byte)*param_3);
      puVar3 = param_3 + -7;
      bStack_43 = (byte)(uVar2 >> 8);
      puVar5 = param_3;
      if ((uVar1 != param_3[-3]) || (bStack_43 == *(byte *)((int)param_3 + -0x17))) {
        fVar9 = (float)param_3[-5];
        goto joined_r0x007a4cd8;
      }
      puVar6 = param_3;
      if (bStack_43 < *(byte *)((int)param_3 + -0x17)) {
        do {
          while( true ) {
            puVar5 = puVar3;
            uVar11 = puVar5[1];
            uVar12 = puVar5[2];
            uVar13 = puVar5[3];
            uVar14 = puVar5[4];
            uVar15 = puVar5[5];
            uVar16 = puVar5[6];
            *puVar6 = *puVar5;
            puVar6[1] = uVar11;
            puVar6[2] = uVar12;
            puVar6[3] = uVar13;
            puVar6[4] = uVar14;
            puVar6[5] = uVar15;
            puVar6[6] = uVar16;
            puVar3 = puVar5 + -7;
            if ((uVar1 != puVar5[-3]) || (bStack_43 == *(byte *)((int)puVar5 + -0x17))) break;
            puVar6 = puVar5;
            if (*(byte *)((int)puVar5 + -0x17) <= bStack_43) goto LAB_007a4cdc;
          }
          fVar9 = (float)puVar5[-5];
joined_r0x007a4cd8:
          puVar6 = puVar5;
        } while (fVar17 < fVar9);
      }
LAB_007a4cdc:
      *puVar5 = local_48;
      puVar5[1] = uVar2;
      puVar5[2] = (uint)fVar17;
      puVar5[3] = uVar7;
      puVar5[4] = uVar1;
      puVar5[5] = uVar8;
      puVar5[6] = uVar10;
    }
    param_3 = param_3 + 7;
    if (param_3 == param_2) {
      return;
    }
  } while( true );
}


