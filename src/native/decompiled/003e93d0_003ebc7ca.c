#include "003e93d0_003ebc7ca.h"



undefined4 fn_003e9910(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 100),
                       L"rom:/data/Layout/menu/wifi_ranking_gcup/upper/gcup_ranking.arc",
                       &DAT_003e99d0,1,1);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar1,(char *)&DAT_003e99dc,&DAT_003e99d8,0,1,0
                      );
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  fn_00121838(DAT_00897800,L"rom:/data/Message/LocationMessage.mes",1);
  fn_00289bac(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 100));
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0xc1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00895c20) goto LAB_003e99c0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003e99c0:
  *(undefined1 *)(puVar2 + 4) = 1;
  return 1;
}



void fn_003e98d0(int param_1)

{
  fn_001218d4(DAT_00897800,L"rom:/data/Message/LocationMessage.mes");
  fn_00289c54(*(undefined4 *)(param_1 + 0x70));
  fn_0016a43c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
}



void fn_003e93ec(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  uint *puVar20;
  uint *puVar21;
  uint local_20;
  uint local_1c;
  
  uVar5 = param_3[1];
  puVar13 = *(undefined4 **)(*param_1 + param_2 * 0x14 + -0x10);
  *puVar13 = *param_3;
  puVar13[1] = uVar5;
  *(undefined1 *)(puVar13 + 2) = *(undefined1 *)(param_3 + 2);
  *(undefined4 *)((int)puVar13 + 10) = *(undefined4 *)((int)param_3 + 10);
  *(undefined4 *)((int)puVar13 + 0xe) = *(undefined4 *)((int)param_3 + 0xe);
  *(undefined4 *)((int)puVar13 + 0x12) = *(undefined4 *)((int)param_3 + 0x12);
  *(undefined4 *)((int)puVar13 + 0x16) = *(undefined4 *)((int)param_3 + 0x16);
  *(undefined1 *)((int)puVar13 + 0x1a) = *(undefined1 *)((int)param_3 + 0x1a);
  fn_00166824((int)puVar13 + 0x1b,(int)param_3 + 0x1b);
  *(undefined2 *)(puVar13 + 9) = *(undefined2 *)(param_3 + 9);
  puVar13[10] = param_3[10];
  puVar13[0xb] = param_3[0xb];
  puVar13[0xc] = param_3[0xc];
  puVar13[0xd] = param_3[0xd];
  puVar13[0xe] = param_3[0xe];
  *(undefined1 *)(puVar13 + 0xf) = *(undefined1 *)(param_3 + 0xf);
  *(undefined1 *)((int)puVar13 + 0x3d) = *(undefined1 *)((int)param_3 + 0x3d);
  *(undefined1 *)((int)puVar13 + 0x3e) = *(undefined1 *)((int)param_3 + 0x3e);
  uVar5 = param_3[0x11];
  uVar6 = param_3[0x12];
  uVar11 = param_3[0x13];
  uVar14 = param_3[0x14];
  uVar15 = param_3[0x15];
  uVar17 = param_3[0x16];
  uVar19 = param_3[0x17];
  puVar20 = param_3 + 0x18;
  puVar13[0x10] = param_3[0x10];
  puVar13[0x11] = uVar5;
  puVar13[0x12] = uVar6;
  puVar13[0x13] = uVar11;
  puVar13[0x14] = uVar14;
  puVar13[0x15] = uVar15;
  puVar13[0x16] = uVar17;
  puVar13[0x17] = uVar19;
  puVar21 = puVar13 + 0x18;
  if (puVar20 != puVar21) {
    puVar4 = (undefined4 *)*puVar20;
    puVar7 = (undefined4 *)param_3[0x19];
    iVar18 = (int)puVar7 - (int)puVar4;
    local_20 = iVar18 / 0xc;
    puVar1 = (undefined4 *)*puVar21;
    if ((uint)((puVar13[0x1a] - (int)puVar1) / 0xc) < local_20) {
      uVar16 = (int)(puVar13[0x19] - *puVar21) / 0xc;
      local_1c = uVar16 + (uVar16 >> 1) + (uVar16 >> 3);
      if (local_1c < uVar16 + 0x20) {
        local_1c = uVar16 + 0x20;
      }
      puVar12 = &local_20;
      if (local_20 < local_1c) {
        puVar12 = &local_1c;
      }
      uVar16 = *puVar12;
      puVar7 = (undefined4 *)fn_00100fc6(uVar16 * 0xc,0);
      puVar8 = (undefined4 *)param_3[0x19];
      puVar1 = puVar7;
      for (puVar4 = (undefined4 *)*puVar20; puVar4 != puVar8; puVar4 = puVar4 + 3) {
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *puVar4;
          puVar1[1] = puVar4[1];
          puVar1[2] = puVar4[2];
        }
        puVar1 = puVar1 + 3;
      }
      uVar2 = *puVar21;
      uVar3 = uVar2;
      if ((uint)puVar13[0x19] < uVar2) {
        do {
          uVar3 = uVar3 + 0xc;
        } while (uVar3 != puVar13[0x19]);
      }
      fn_001008c4(uVar2,(int)(puVar13[0x1a] - uVar2) / 0xc,0);
      *puVar21 = (uint)puVar7;
      puVar13[0x19] = puVar7 + ((int)(param_3[0x19] - *puVar20) / 0xc) * 3;
      puVar13[0x1a] = puVar7 + uVar16 * 3;
    }
    else {
      uVar16 = (puVar13[0x19] - (int)puVar1) / 0xc;
      if (local_20 <= uVar16) {
        if (puVar4 < puVar7) {
          if (0 < iVar18) {
            puVar8 = puVar1 + -3;
            puVar7 = puVar4 + -3;
            if ((local_20 & 1) != 0) {
              *puVar1 = *puVar4;
              puVar1[1] = puVar4[1];
              puVar1[2] = puVar4[2];
              puVar8 = puVar1;
              puVar7 = puVar4;
            }
            for (iVar9 = iVar18 / 0xc >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar8[3] = puVar7[3];
              puVar8[4] = puVar7[4];
              puVar8[5] = puVar7[5];
              puVar8[6] = puVar7[6];
              puVar8[7] = puVar7[7];
              puVar8[8] = puVar7[8];
              puVar7 = puVar7 + 6;
              puVar8 = puVar8 + 6;
            }
            puVar1 = puVar1 + (iVar18 / 0xc) * 3;
          }
        }
        else {
          for (; puVar4 != puVar7; puVar4 = puVar4 + 3) {
            *puVar1 = *puVar4;
            puVar1[1] = puVar4[1];
            puVar1[2] = puVar4[2];
            puVar1 = puVar1 + 3;
          }
        }
        if ((undefined4 *)puVar13[0x19] < puVar1) {
          do {
            puVar1 = puVar1 + 3;
          } while (puVar1 != (undefined4 *)puVar13[0x19]);
        }
        iVar18 = *puVar21 + ((int)(param_3[0x19] - *puVar20) / 0xc) * 0xc;
        puVar13[0x19] = iVar18;
        puVar13[0x1a] = iVar18;
        return;
      }
      puVar7 = puVar4 + uVar16 * 3;
      if (puVar4 < puVar7) {
        if (0 < (int)puVar7 - (int)puVar4) {
          puVar8 = puVar1 + -3;
          puVar10 = puVar4 + -3;
          if ((((int)puVar7 - (int)puVar4) / 0xc & 1U) != 0) {
            *puVar1 = *puVar4;
            puVar1[1] = puVar4[1];
            puVar1[2] = puVar4[2];
            puVar8 = puVar1;
            puVar10 = puVar4;
          }
          for (iVar18 = ((int)puVar7 - (int)puVar4) / 0xc >> 1; iVar18 != 0; iVar18 = iVar18 + -1) {
            puVar8[3] = puVar10[3];
            puVar8[4] = puVar10[4];
            puVar8[5] = puVar10[5];
            puVar8[6] = puVar10[6];
            puVar8[7] = puVar10[7];
            puVar8[8] = puVar10[8];
            puVar8 = puVar8 + 6;
            puVar10 = puVar10 + 6;
          }
        }
      }
      else {
        for (; puVar4 != puVar7; puVar4 = puVar4 + 3) {
          *puVar1 = *puVar4;
          puVar1[1] = puVar4[1];
          puVar1[2] = puVar4[2];
          puVar1 = puVar1 + 3;
        }
      }
      puVar13[0x19] = *puVar21 + ((int)(param_3[0x19] - *puVar20) / 0xc) * 0xc;
      puVar1 = (undefined4 *)param_3[0x19];
      puVar4 = (undefined4 *)(*puVar21 + uVar16 * 0xc);
      puVar13 = (undefined4 *)(*puVar20 + uVar16 * 0xc);
      if (puVar13 != puVar1) {
        do {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar13;
            puVar4[1] = puVar13[1];
            puVar4[2] = puVar13[2];
          }
          puVar13 = puVar13 + 3;
          puVar4 = puVar4 + 3;
        } while (puVar13 != puVar1);
        return;
      }
    }
  }
  return;
}



undefined4 fn_003e93d8(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 0x14 + -0x10);
}



undefined4 fn_003e93d0(int param_1,int param_2)

{
  return *(undefined4 *)(**(int **)(param_1 + 0x2c) + param_2 * 0x14 + -0x10);
}


