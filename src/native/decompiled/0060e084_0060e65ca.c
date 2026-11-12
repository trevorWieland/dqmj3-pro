#include "0060e084_0060e65ca.h"



void fn_0060e218(uint *param_1,int *param_2,uint param_3)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
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
  undefined4 in_s22;
  undefined4 in_s23;
  char local_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_94;
  uint local_90;
  undefined4 local_50 [8];
  uint *local_30;
  int *piStack_2c;
  uint uStack_28;
  
  iVar12 = 0;
  iVar13 = *param_2;
  local_30 = param_1;
  piStack_2c = param_2;
  uStack_28 = param_3;
  if (0 < iVar13) {
    do {
      fn_00176ec8(&local_94,param_2 + 1,iVar12);
      fn_0017821c(local_d8,&local_94,0x44);
      if (local_d8[0] != 'i') {
        uVar2 = fn_00102c18(local_d8,local_50,10);
        iVar3 = fn_002febd8(local_50[0]);
        puVar1 = local_30;
        if ((iVar3 == 0) && (uVar2 != 0)) {
          local_94 = (uint)uVar2 << 0x10 | param_3 & 0xffff;
          puVar11 = (undefined4 *)local_30[1];
          if (puVar11 == (undefined4 *)local_30[2]) {
            uVar6 = (int)((int)puVar11 - *local_30) / 0x24;
            if (uVar6 < (uint)((int)((int)local_30[2] - *local_30) / 0x24)) {
              local_30[1] = (uint)(puVar11 + 9);
              if (puVar11 != (undefined4 *)0x0) {
                *puVar11 = puVar11[-9];
                puVar11[1] = puVar11[-8];
                puVar11[2] = puVar11[-7];
                puVar11[3] = puVar11[-6];
                puVar11[4] = puVar11[-5];
                puVar11[5] = puVar11[-4];
                puVar11[6] = puVar11[-3];
                puVar11[7] = puVar11[-2];
                puVar11[8] = puVar11[-1];
              }
              puVar7 = puVar11 + -9;
              puVar8 = puVar11;
              if (puVar11 < puVar7) {
                if (0 < (int)puVar7 - (int)puVar11) {
                  uVar6 = ((int)puVar7 - (int)puVar11) / 0x24;
                  if ((uVar6 & 1) != 0) {
                    puVar7 = puVar11 + -0x12;
                    puVar8 = puVar11 + -9;
                    *puVar8 = *puVar7;
                    puVar11[-8] = puVar11[-0x11];
                    puVar11[-7] = puVar11[-0x10];
                    puVar11[-6] = puVar11[-0xf];
                    puVar11[-5] = puVar11[-0xe];
                    puVar11[-4] = puVar11[-0xd];
                    puVar11[-3] = puVar11[-0xc];
                    puVar11[-2] = puVar11[-0xb];
                    puVar11[-1] = puVar11[-10];
                  }
                  for (iVar3 = (int)uVar6 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
                    uVar14 = puVar7[-8];
                    uVar15 = puVar7[-7];
                    uVar17 = puVar7[-6];
                    uVar19 = puVar7[-5];
                    uVar21 = puVar7[-4];
                    uVar23 = puVar7[-3];
                    uVar25 = puVar7[-2];
                    puVar8[-9] = puVar7[-9];
                    puVar8[-8] = uVar14;
                    puVar8[-7] = uVar15;
                    puVar8[-6] = uVar17;
                    puVar8[-5] = uVar19;
                    puVar8[-4] = uVar21;
                    puVar8[-3] = uVar23;
                    puVar8[-2] = uVar25;
                    puVar8[-1] = puVar7[-1];
                    uVar14 = puVar7[-0x11];
                    uVar15 = puVar7[-0x10];
                    uVar17 = puVar7[-0xf];
                    uVar19 = puVar7[-0xe];
                    uVar21 = puVar7[-0xd];
                    uVar23 = puVar7[-0xc];
                    uVar25 = puVar7[-0xb];
                    puVar8[-0x12] = puVar7[-0x12];
                    puVar8[-0x11] = uVar14;
                    puVar8[-0x10] = uVar15;
                    puVar8[-0xf] = uVar17;
                    puVar8[-0xe] = uVar19;
                    puVar8[-0xd] = uVar21;
                    puVar8[-0xc] = uVar23;
                    puVar8[-0xb] = uVar25;
                    puVar8[-10] = puVar7[-10];
                    puVar7 = puVar7 + -0x12;
                    puVar8 = puVar8 + -0x12;
                  }
                }
              }
              else {
                while (puVar11 != puVar7) {
                  uVar14 = puVar7[-8];
                  uVar15 = puVar7[-7];
                  uVar17 = puVar7[-6];
                  uVar19 = puVar7[-5];
                  uVar21 = puVar7[-4];
                  uVar23 = puVar7[-3];
                  uVar25 = puVar7[-2];
                  puVar8[-9] = puVar7[-9];
                  puVar8[-8] = uVar14;
                  puVar8[-7] = uVar15;
                  puVar8[-6] = uVar17;
                  puVar8[-5] = uVar19;
                  puVar8[-4] = uVar21;
                  puVar8[-3] = uVar23;
                  puVar8[-2] = uVar25;
                  puVar8[-1] = puVar7[-1];
                  puVar8 = puVar8 + -9;
                  puVar7 = puVar7 + -9;
                }
              }
              *puVar11 = in_s22;
              puVar11[1] = in_s23;
              puVar11[2] = local_94;
              goto LAB_0060e410;
            }
            uVar10 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
            local_90 = uVar6 + 0x20;
            if (uVar6 + 0x20 <= uVar10) {
              local_90 = uVar10;
            }
            uVar14 = local_b8;
            uVar15 = uStack_b4;
            uVar17 = uStack_b0;
            uVar19 = uStack_ac;
            uVar21 = uStack_a8;
            uVar23 = uStack_a4;
            puVar4 = (undefined4 *)fn_00100fc6(local_90 * 0x24,0);
            puVar8 = puVar4;
            for (puVar7 = (undefined4 *)*puVar1; puVar7 != puVar11; puVar7 = puVar7 + 9) {
              if (puVar8 != (undefined4 *)0x0) {
                uVar25 = puVar7[1];
                uVar16 = puVar7[2];
                uVar18 = puVar7[3];
                uVar20 = puVar7[4];
                uVar22 = puVar7[5];
                uVar24 = puVar7[6];
                uVar26 = puVar7[7];
                *puVar8 = *puVar7;
                puVar8[1] = uVar25;
                puVar8[2] = uVar16;
                puVar8[3] = uVar18;
                puVar8[4] = uVar20;
                puVar8[5] = uVar22;
                puVar8[6] = uVar24;
                puVar8[7] = uVar26;
                puVar8[8] = puVar7[8];
              }
              puVar8 = puVar8 + 9;
            }
            puVar7 = puVar4 + ((int)((int)puVar11 - *puVar1) / 0x24) * 9;
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = in_s22;
              puVar7[1] = in_s23;
              puVar7[2] = local_94;
              puVar7[3] = uVar14;
              puVar7[4] = uVar15;
              puVar7[5] = uVar17;
              puVar7[6] = uVar19;
              puVar7[7] = uVar21;
              puVar7[8] = uVar23;
            }
            puVar8 = (undefined4 *)puVar1[1];
            puVar7 = puVar4 + ((int)((int)puVar11 - *puVar1) / 0x24) * 9;
            for (; puVar11 != puVar8; puVar11 = puVar11 + 9) {
              puVar5 = puVar7 + 9;
              if (puVar5 != (undefined4 *)0x0) {
                uVar14 = puVar11[1];
                uVar15 = puVar11[2];
                uVar17 = puVar11[3];
                uVar19 = puVar11[4];
                uVar21 = puVar11[5];
                uVar23 = puVar11[6];
                uVar25 = puVar11[7];
                *puVar5 = *puVar11;
                puVar7[10] = uVar14;
                puVar7[0xb] = uVar15;
                puVar7[0xc] = uVar17;
                puVar7[0xd] = uVar19;
                puVar7[0xe] = uVar21;
                puVar7[0xf] = uVar23;
                puVar7[0x10] = uVar25;
                puVar7[0x11] = puVar11[8];
              }
              puVar7 = puVar5;
            }
            uVar10 = *puVar1;
            uVar9 = puVar1[1];
            uVar6 = uVar10;
            if (uVar9 < uVar10) {
              do {
                uVar6 = uVar6 + 0x24;
              } while (uVar6 != uVar9);
            }
            fn_001008c4(uVar10,(int)(puVar1[2] - uVar10) / 0x24,0);
            *puVar1 = (uint)puVar4;
            puVar1[1] = (uint)(puVar4 + ((int)(uVar9 - uVar10) / 0x24) * 9 + 9);
            puVar1[2] = (uint)(puVar4 + local_90 * 9);
          }
          else {
            local_30[1] = (uint)(puVar11 + 9);
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = in_s22;
              puVar11[1] = in_s23;
              puVar11[2] = local_94;
LAB_0060e410:
              puVar11[3] = local_b8;
              puVar11[4] = uStack_b4;
              puVar11[5] = uStack_b0;
              puVar11[6] = uStack_ac;
              puVar11[7] = uStack_a8;
              puVar11[8] = uStack_a4;
            }
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar13);
  }
  return;
}



void fn_0060e084(undefined4 *param_1)

{
  *param_1 = &DAT_007c11d8;
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 4))();
  }
  fn_002feef8(param_1);
  return;
}


