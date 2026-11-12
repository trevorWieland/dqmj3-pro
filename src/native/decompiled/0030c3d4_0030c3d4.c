#include "0030c3d4_0030c3d4.h"



void fn_0030c3d4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 in_s0;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_88 [92];
  int iStack_2c;
  undefined4 local_28;
  
  iVar12 = 0;
  uVar28 = 0;
  iStack_2c = param_1;
  local_28 = param_2;
  while( true ) {
    fn_001028d4(auStack_88,(char *)&DAT_0030c6c8,iVar12);
    iVar1 = fn_005f6e60(local_28,auStack_88);
    if (iVar1 == 0) break;
    uVar15 = in_s0;
    if ((((byte)DAT_008c62fc & 1) == 0) &&
       (iVar1 = fn_00303afc(&DAT_008c62fc), uVar15 = in_s0, iVar1 != 0)) {
      DAT_008f9e2c = uVar28;
      DAT_008f9e30 = uVar28;
      DAT_008f9e34 = uVar28;
    }
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
      DAT_008f9e2c = uVar28;
      DAT_008f9e30 = uVar28;
      DAT_008f9e34 = uVar28;
    }
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
      DAT_008f9e2c = uVar28;
      DAT_008f9e30 = uVar28;
      DAT_008f9e34 = uVar28;
    }
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
      DAT_008f9e2c = uVar28;
      DAT_008f9e30 = uVar28;
      DAT_008f9e34 = uVar28;
    }
    fn_005f6de0(local_28,auStack_88,(char *)&DAT_0030c6e0);
    uVar25 = uVar15;
    fn_005f6de0(local_28,auStack_88,(char *)&DAT_0030c6ec);
    uVar17 = uVar15;
    fn_005f6de0(local_28,auStack_88,(char *)&DAT_0030c6f8);
    uVar27 = uVar15;
    fn_005f6de0(local_28,auStack_88,(char *)&DAT_0030c704);
    uVar31 = uVar15;
    fn_005f6de0(local_28,auStack_88,(char *)&DAT_0030c710);
    uVar19 = uVar15;
    fn_005f6de0(local_28,auStack_88,(char *)&DAT_0030c71c);
    uVar32 = uVar15;
    fn_005f6de0(local_28,auStack_88,(char *)&DAT_0030c728);
    uVar21 = uVar15;
    fn_005f6de0(local_28,auStack_88,(char *)&DAT_0030c738);
    uVar29 = uVar15;
    fn_005f6de0(local_28,auStack_88,(char *)&DAT_0030c748);
    uVar30 = uVar15;
    fn_005f6de0(local_28,auStack_88,(char *)&DAT_0030c758);
    in_s0 = uVar15;
    fn_005f6de0(local_28,auStack_88,(char *)&DAT_0030c768);
    uVar23 = uVar15;
    fn_005f6de0(local_28,auStack_88,(char *)&DAT_0030c778);
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    puVar10 = (uint *)(param_1 + 0xc);
    if (puVar2 == *(undefined4 **)(param_1 + 0x14)) {
      uVar6 = (int)((int)puVar2 - *puVar10) / 0x30;
      if (uVar6 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x14) - *puVar10) / 0x30)) {
        *(undefined4 **)(param_1 + 0x10) = puVar2 + 0xc;
        uVar13 = in_s0;
        if (puVar2 != (undefined4 *)0x0) {
          uVar13 = puVar2[-0xc];
          *puVar2 = uVar13;
          puVar2[1] = puVar2[-0xb];
          puVar2[2] = puVar2[-10];
          puVar2[3] = puVar2[-9];
          puVar2[4] = puVar2[-8];
          puVar2[5] = puVar2[-7];
          puVar2[6] = puVar2[-6];
          puVar2[7] = puVar2[-5];
          puVar2[8] = puVar2[-4];
          puVar2[9] = puVar2[-3];
          puVar2[10] = puVar2[-2];
          puVar2[0xb] = puVar2[-1];
        }
        puVar7 = puVar2 + -0xc;
        puVar8 = puVar2;
        if (puVar2 < puVar7) {
          if (0 < (int)puVar7 - (int)puVar2) {
            uVar6 = ((int)puVar7 - (int)puVar2) / 0x30;
            if ((uVar6 & 1) != 0) {
              uVar13 = puVar2[-0x18];
              puVar2[-0xc] = uVar13;
              puVar2[-0xb] = puVar2[-0x17];
              puVar2[-10] = puVar2[-0x16];
              puVar2[-9] = puVar2[-0x15];
              puVar2[-8] = puVar2[-0x14];
              puVar2[-7] = puVar2[-0x13];
              puVar2[-6] = puVar2[-0x12];
              puVar2[-5] = puVar2[-0x11];
              puVar7 = puVar2 + -0x18;
              puVar2[-4] = puVar2[-0x10];
              puVar2[-3] = puVar2[-0xf];
              puVar2[-2] = puVar2[-0xe];
              puVar2[-1] = puVar2[-0xd];
              puVar8 = puVar2 + -0xc;
            }
            for (iVar1 = (int)uVar6 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
              uVar13 = puVar7[-0xb];
              uVar14 = puVar7[-10];
              uVar16 = puVar7[-9];
              uVar18 = puVar7[-8];
              uVar20 = puVar7[-7];
              uVar22 = puVar7[-6];
              uVar24 = puVar7[-5];
              puVar8[-0xc] = puVar7[-0xc];
              puVar8[-0xb] = uVar13;
              puVar8[-10] = uVar14;
              puVar8[-9] = uVar16;
              puVar8[-8] = uVar18;
              puVar8[-7] = uVar20;
              puVar8[-6] = uVar22;
              puVar8[-5] = uVar24;
              uVar13 = puVar7[-3];
              uVar14 = puVar7[-2];
              uVar16 = puVar7[-1];
              puVar8[-4] = puVar7[-4];
              puVar8[-3] = uVar13;
              puVar8[-2] = uVar14;
              puVar8[-1] = uVar16;
              uVar13 = puVar7[-0x18];
              uVar14 = puVar7[-0x17];
              uVar16 = puVar7[-0x16];
              uVar18 = puVar7[-0x15];
              uVar20 = puVar7[-0x14];
              uVar22 = puVar7[-0x13];
              uVar24 = puVar7[-0x12];
              uVar26 = puVar7[-0x11];
              puVar3 = puVar7 + -0x10;
              puVar8[-0x18] = uVar13;
              puVar8[-0x17] = uVar14;
              puVar8[-0x16] = uVar16;
              puVar8[-0x15] = uVar18;
              puVar8[-0x14] = uVar20;
              puVar8[-0x13] = uVar22;
              puVar8[-0x12] = uVar24;
              puVar8[-0x11] = uVar26;
              uVar14 = puVar7[-0xf];
              uVar16 = puVar7[-0xe];
              uVar18 = puVar7[-0xd];
              puVar7 = puVar7 + -0x18;
              puVar8[-0x10] = *puVar3;
              puVar8[-0xf] = uVar14;
              puVar8[-0xe] = uVar16;
              puVar8[-0xd] = uVar18;
              puVar8 = puVar8 + -0x18;
            }
          }
        }
        else {
          while (puVar2 != puVar7) {
            uVar13 = puVar7[-0xc];
            uVar14 = puVar7[-0xb];
            uVar16 = puVar7[-10];
            uVar18 = puVar7[-9];
            uVar20 = puVar7[-8];
            uVar22 = puVar7[-7];
            uVar24 = puVar7[-6];
            uVar26 = puVar7[-5];
            puVar8[-0xc] = uVar13;
            puVar8[-0xb] = uVar14;
            puVar8[-10] = uVar16;
            puVar8[-9] = uVar18;
            puVar8[-8] = uVar20;
            puVar8[-7] = uVar22;
            puVar8[-6] = uVar24;
            puVar8[-5] = uVar26;
            uVar14 = puVar7[-3];
            uVar16 = puVar7[-2];
            uVar18 = puVar7[-1];
            puVar8[-4] = puVar7[-4];
            puVar8[-3] = uVar14;
            puVar8[-2] = uVar16;
            puVar8[-1] = uVar18;
            puVar8 = puVar8 + -0xc;
            puVar7 = puVar7 + -0xc;
          }
        }
        *puVar2 = uVar25;
        puVar2[1] = uVar17;
        puVar2[2] = uVar27;
        puVar2[3] = uVar21;
        puVar2[4] = uVar29;
        puVar2[5] = uVar30;
        puVar2[6] = uVar31;
        puVar2[7] = uVar19;
        puVar2[8] = uVar32;
        puVar2[9] = in_s0;
        puVar2[10] = uVar23;
        puVar2[0xb] = uVar15;
        in_s0 = uVar13;
      }
      else {
        uVar11 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
        if (uVar11 < uVar6 + 0x20) {
          uVar11 = uVar6 + 0x20;
        }
        uVar13 = in_s0;
        puVar3 = (undefined4 *)fn_00100fc6(uVar11 * 0x30,0);
        puVar8 = puVar3;
        for (puVar7 = (undefined4 *)*puVar10; puVar7 != puVar2; puVar7 = puVar7 + 0xc) {
          if (puVar8 != (undefined4 *)0x0) {
            uVar14 = puVar7[1];
            uVar16 = puVar7[2];
            uVar18 = puVar7[3];
            uVar20 = puVar7[4];
            uVar22 = puVar7[5];
            uVar24 = puVar7[6];
            uVar26 = puVar7[7];
            *puVar8 = *puVar7;
            puVar8[1] = uVar14;
            puVar8[2] = uVar16;
            puVar8[3] = uVar18;
            puVar8[4] = uVar20;
            puVar8[5] = uVar22;
            puVar8[6] = uVar24;
            puVar8[7] = uVar26;
            in_s0 = puVar7[8];
            uVar14 = puVar7[9];
            uVar16 = puVar7[10];
            uVar18 = puVar7[0xb];
            puVar8[8] = in_s0;
            puVar8[9] = uVar14;
            puVar8[10] = uVar16;
            puVar8[0xb] = uVar18;
          }
          puVar8 = puVar8 + 0xc;
        }
        puVar7 = puVar3 + ((int)((int)puVar2 - *puVar10) / 0x30) * 0xc;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = uVar25;
          puVar7[1] = uVar17;
          puVar7[2] = uVar27;
          puVar7[3] = uVar21;
          puVar7[4] = uVar29;
          puVar7[5] = uVar30;
          puVar7[6] = uVar31;
          puVar7[7] = uVar19;
          puVar7[8] = uVar32;
          puVar7[9] = uVar13;
          puVar7[10] = uVar23;
          puVar7[0xb] = uVar15;
        }
        puVar8 = *(undefined4 **)(param_1 + 0x10);
        puVar7 = puVar3 + ((int)((int)puVar2 - *puVar10) / 0x30) * 0xc;
        for (; puVar2 != puVar8; puVar2 = puVar2 + 0xc) {
          puVar4 = puVar7 + 0xc;
          if (puVar4 != (undefined4 *)0x0) {
            uVar15 = puVar2[1];
            uVar17 = puVar2[2];
            uVar19 = puVar2[3];
            uVar21 = puVar2[4];
            uVar23 = puVar2[5];
            uVar25 = puVar2[6];
            uVar27 = puVar2[7];
            *puVar4 = *puVar2;
            puVar7[0xd] = uVar15;
            puVar7[0xe] = uVar17;
            puVar7[0xf] = uVar19;
            puVar7[0x10] = uVar21;
            puVar7[0x11] = uVar23;
            puVar7[0x12] = uVar25;
            puVar7[0x13] = uVar27;
            in_s0 = puVar2[8];
            uVar15 = puVar2[9];
            uVar17 = puVar2[10];
            uVar19 = puVar2[0xb];
            puVar7[0x14] = in_s0;
            puVar7[0x15] = uVar15;
            puVar7[0x16] = uVar17;
            puVar7[0x17] = uVar19;
          }
          puVar7 = puVar4;
        }
        uVar5 = *puVar10;
        uVar9 = *(uint *)(param_1 + 0x10);
        uVar6 = uVar5;
        if (uVar9 < uVar5) {
          do {
            uVar6 = uVar6 + 0x30;
          } while (uVar6 != uVar9);
        }
        fn_001008c4(uVar5,(int)(*(int *)(param_1 + 0x14) - uVar5) / 0x30,0);
        *puVar10 = (uint)puVar3;
        *(undefined4 **)(param_1 + 0x10) = puVar3 + ((int)(uVar9 - uVar5) / 0x30) * 0xc + 0xc;
        *(undefined4 **)(param_1 + 0x14) = puVar3 + uVar11 * 0xc;
      }
    }
    else {
      *(undefined4 **)(param_1 + 0x10) = puVar2 + 0xc;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = uVar25;
        puVar2[1] = uVar17;
        puVar2[2] = uVar27;
        puVar2[3] = uVar21;
        puVar2[4] = uVar29;
        puVar2[5] = uVar30;
        puVar2[6] = uVar31;
        puVar2[7] = uVar19;
        puVar2[8] = uVar32;
        puVar2[9] = in_s0;
        puVar2[10] = uVar23;
        puVar2[0xb] = uVar15;
      }
    }
    iVar12 = iVar12 + 1;
  }
  return;
}


