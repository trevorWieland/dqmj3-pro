#include "00694b7c_00696340.h"



void fn_00696340(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  fn_0011c034(param_2);
  uVar5 = 0;
  uVar1 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x18c);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if (iVar2 >> 5 != iVar2 >> 0x1f) {
    do {
      puVar4 = *(undefined4 **)(param_2 + 4);
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x18c) + uVar5 * 0x38);
      if (puVar4 == *(undefined4 **)(param_2 + 8)) {
        fn_0078891c(param_2);
      }
      else {
        *(undefined4 **)(param_2 + 4) = puVar4 + 0xe;
        if (puVar4 != (undefined4 *)0x0) {
          uVar6 = puVar3[1];
          uVar7 = puVar3[2];
          uVar8 = puVar3[3];
          uVar9 = puVar3[4];
          uVar10 = puVar3[5];
          uVar11 = puVar3[6];
          uVar12 = puVar3[7];
          *puVar4 = *puVar3;
          puVar4[1] = uVar6;
          puVar4[2] = uVar7;
          puVar4[3] = uVar8;
          puVar4[4] = uVar9;
          puVar4[5] = uVar10;
          puVar4[6] = uVar11;
          puVar4[7] = uVar12;
          uVar6 = puVar3[9];
          uVar7 = puVar3[10];
          uVar8 = puVar3[0xb];
          uVar9 = puVar3[0xc];
          uVar10 = puVar3[0xd];
          puVar4[8] = puVar3[8];
          puVar4[9] = uVar6;
          puVar4[10] = uVar7;
          puVar4[0xb] = uVar8;
          puVar4[0xc] = uVar9;
          puVar4[0xd] = uVar10;
        }
      }
      uVar5 = uVar5 + 1;
      uVar1 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x18c);
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    } while (uVar5 < (uint)((iVar2 >> 5) - (iVar2 >> 0x1f)));
  }
  return;
}



void fn_006962dc(int param_1)

{
  *(undefined1 *)(param_1 + 0x16c) = 8;
  *(undefined1 *)(param_1 + 0x16e) = 2;
  *(code **)(param_1 + 0x178) = fn_006961e0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  if (*(char *)(param_1 + 0x170) != '\0') {
    fn_00699014(param_1,1);
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  fn_00699014(param_1,1);
  fn_003b682c(param_1);
  return;
}



undefined4 fn_006961e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  if (*(int *)(param_1 + 0x174) == 0) {
    uVar1 = fn_001603f8(&uStack_18,0xff);
    fn_00163988(DAT_00897808,uVar1,0x14);
    uVar1 = fn_001603f8(&uStack_18,0xff);
    fn_00163988(DAT_0089780c,uVar1,0x14);
    fn_001ea9c0(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if ((*(int *)(param_1 + 0x174) == 1) && (iVar2 = fn_006f73a0(param_1,1), iVar2 != 0)) {
    fn_00694a10(param_1);
    return 1;
  }
  return 0;
}



void fn_006952bc(int param_1)

{
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x16e) = 2;
  *(undefined1 *)(param_1 + 0x219) = 1;
  *(code **)(param_1 + 0x178) = fn_006969dc;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  if (*(char *)(param_1 + 0x170) != '\0') {
    fn_00699014(param_1,1);
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  fn_003b682c(param_1);
  return;
}



undefined4 fn_00695198(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  if (*(int *)(param_1 + 0x174) == 0) {
    uVar1 = fn_001603f8(&uStack_18,0xff);
    fn_00163988(DAT_00897808,uVar1,0x14);
    uVar1 = fn_001603f8(&uStack_18,0xff);
    fn_00163988(DAT_0089780c,uVar1,0x14);
    fn_001ea9c0(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if ((*(int *)(param_1 + 0x174) == 1) && (iVar2 = fn_006f73a0(param_1,1), iVar2 != 0)) {
    fn_00694a10(param_1);
    return 1;
  }
  return 0;
}



undefined4 fn_00694b7c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint *puVar22;
  uint local_60;
  uint local_5c [14];
  
  iVar14 = (int)*(char *)(param_1 + 0x16c);
  *(undefined1 *)(param_1 + 0x219) = 0;
  *(undefined1 *)(param_1 + 0x21a) = 0;
  fn_00697c44(param_1,iVar14);
  if (iVar14 != -1) {
    if (iVar14 == 0) {
      puVar1 = (undefined4 *)fn_001c232c(DAT_008977e4);
      puVar15 = *(undefined4 **)(param_1 + 0x58);
      uVar9 = puVar1[1];
      *puVar15 = *puVar1;
      puVar15[1] = uVar9;
      *(undefined1 *)(puVar15 + 2) = *(undefined1 *)(puVar1 + 2);
      *(undefined4 *)((int)puVar15 + 10) = *(undefined4 *)((int)puVar1 + 10);
      *(undefined4 *)((int)puVar15 + 0xe) = *(undefined4 *)((int)puVar1 + 0xe);
      *(undefined4 *)((int)puVar15 + 0x12) = *(undefined4 *)((int)puVar1 + 0x12);
      *(undefined4 *)((int)puVar15 + 0x16) = *(undefined4 *)((int)puVar1 + 0x16);
      *(undefined1 *)((int)puVar15 + 0x1a) = *(undefined1 *)((int)puVar1 + 0x1a);
      fn_00166824((int)puVar15 + 0x1b,(int)puVar1 + 0x1b);
      *(undefined2 *)(puVar15 + 9) = *(undefined2 *)(puVar1 + 9);
      puVar15[10] = puVar1[10];
      puVar15[0xb] = puVar1[0xb];
      puVar15[0xc] = puVar1[0xc];
      puVar15[0xd] = puVar1[0xd];
      puVar15[0xe] = puVar1[0xe];
      *(undefined1 *)(puVar15 + 0xf) = *(undefined1 *)(puVar1 + 0xf);
      *(undefined1 *)((int)puVar15 + 0x3d) = *(undefined1 *)((int)puVar1 + 0x3d);
      *(undefined1 *)((int)puVar15 + 0x3e) = *(undefined1 *)((int)puVar1 + 0x3e);
      uVar9 = puVar1[0x11];
      uVar5 = puVar1[0x12];
      uVar10 = puVar1[0x13];
      uVar16 = puVar1[0x14];
      uVar18 = puVar1[0x15];
      uVar20 = puVar1[0x16];
      uVar21 = puVar1[0x17];
      puVar15[0x10] = puVar1[0x10];
      puVar15[0x11] = uVar9;
      puVar15[0x12] = uVar5;
      puVar15[0x13] = uVar10;
      puVar15[0x14] = uVar16;
      puVar15[0x15] = uVar18;
      puVar15[0x16] = uVar20;
      puVar15[0x17] = uVar21;
      puVar22 = puVar15 + 0x18;
      puVar17 = puVar1 + 0x18;
      if (puVar17 != puVar22) {
        puVar2 = (undefined4 *)puVar1[0x19];
        puVar11 = (undefined4 *)*puVar17;
        iVar14 = (int)puVar2 - (int)puVar11;
        uVar19 = iVar14 / 0xc;
        puVar6 = (undefined4 *)*puVar22;
        if ((uint)((puVar15[0x1a] - (int)puVar6) / 0xc) < uVar19) {
          local_60 = uVar19;
          uVar4 = (int)(puVar15[0x19] - *puVar22) / 0xc;
          local_5c[0] = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
          if (local_5c[0] < uVar4 + 0x20) {
            local_5c[0] = uVar4 + 0x20;
          }
          puVar3 = local_5c;
          if (local_5c[0] <= uVar19) {
            puVar3 = &local_60;
          }
          uVar19 = *puVar3;
          puVar2 = (undefined4 *)fn_00100fc6(uVar19 * 0xc,0);
          puVar7 = (undefined4 *)puVar1[0x19];
          puVar6 = puVar2;
          for (puVar11 = (undefined4 *)*puVar17; puVar11 != puVar7; puVar11 = puVar11 + 3) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar11;
              puVar6[1] = puVar11[1];
              puVar6[2] = puVar11[2];
            }
            puVar6 = puVar6 + 3;
          }
          uVar12 = *puVar22;
          uVar4 = uVar12;
          if ((uint)puVar15[0x19] < uVar12) {
            do {
              uVar4 = uVar4 + 0xc;
            } while (uVar4 != puVar15[0x19]);
          }
          fn_001008c4(uVar12,(int)(puVar15[0x1a] - uVar12) / 0xc,0);
          *puVar22 = (uint)puVar2;
          puVar11 = puVar2 + uVar19 * 3;
          puVar15[0x19] = puVar2 + ((int)(puVar1[0x19] - *puVar17) / 0xc) * 3;
        }
        else {
          uVar4 = (puVar15[0x19] - (int)puVar6) / 0xc;
          if (uVar4 < uVar19) {
            puVar2 = puVar11 + uVar4 * 3;
            if (puVar11 < puVar2) {
              if (0 < (int)puVar2 - (int)puVar11) {
                puVar7 = puVar11 + -3;
                puVar8 = puVar6 + -3;
                if ((((int)puVar2 - (int)puVar11) / 0xc & 1U) != 0) {
                  *puVar6 = *puVar11;
                  puVar6[1] = puVar11[1];
                  puVar6[2] = puVar11[2];
                  puVar7 = puVar11;
                  puVar8 = puVar6;
                }
                for (iVar14 = ((int)puVar2 - (int)puVar11) / 0xc >> 1; iVar14 != 0;
                    iVar14 = iVar14 + -1) {
                  puVar8[3] = puVar7[3];
                  puVar8[4] = puVar7[4];
                  puVar8[5] = puVar7[5];
                  puVar8[6] = puVar7[6];
                  puVar8[7] = puVar7[7];
                  puVar8[8] = puVar7[8];
                  puVar7 = puVar7 + 6;
                  puVar8 = puVar8 + 6;
                }
              }
            }
            else {
              for (; puVar11 != puVar2; puVar11 = puVar11 + 3) {
                *puVar6 = *puVar11;
                puVar6[1] = puVar11[1];
                puVar6[2] = puVar11[2];
                puVar6 = puVar6 + 3;
              }
            }
            puVar15[0x19] = *puVar22 + ((int)(puVar1[0x19] - *puVar17) / 0xc) * 0xc;
            puVar11 = (undefined4 *)puVar1[0x19];
            puVar15 = (undefined4 *)(*puVar22 + uVar4 * 0xc);
            for (puVar1 = (undefined4 *)(*puVar17 + uVar4 * 0xc); puVar1 != puVar11;
                puVar1 = puVar1 + 3) {
              if (puVar15 != (undefined4 *)0x0) {
                *puVar15 = *puVar1;
                puVar15[1] = puVar1[1];
                puVar15[2] = puVar1[2];
              }
              puVar15 = puVar15 + 3;
            }
            goto LAB_00695068;
          }
          if (puVar11 < puVar2) {
            if (0 < iVar14) {
              puVar2 = puVar11 + -3;
              puVar7 = puVar6 + -3;
              if ((uVar19 & 1) != 0) {
                *puVar6 = *puVar11;
                puVar6[1] = puVar11[1];
                puVar6[2] = puVar11[2];
                puVar2 = puVar11;
                puVar7 = puVar6;
              }
              for (iVar13 = iVar14 / 0xc >> 1; iVar13 != 0; iVar13 = iVar13 + -1) {
                puVar7[3] = puVar2[3];
                puVar7[4] = puVar2[4];
                puVar7[5] = puVar2[5];
                puVar7[6] = puVar2[6];
                puVar7[7] = puVar2[7];
                puVar7[8] = puVar2[8];
                puVar2 = puVar2 + 6;
                puVar7 = puVar7 + 6;
              }
              puVar6 = puVar6 + (iVar14 / 0xc) * 3;
            }
          }
          else {
            for (; puVar11 != puVar2; puVar11 = puVar11 + 3) {
              *puVar6 = *puVar11;
              puVar6[1] = puVar11[1];
              puVar6[2] = puVar11[2];
              puVar6 = puVar6 + 3;
            }
          }
          if ((undefined4 *)puVar15[0x19] < puVar6) {
            do {
              puVar6 = puVar6 + 3;
            } while (puVar6 != (undefined4 *)puVar15[0x19]);
          }
          puVar11 = (undefined4 *)(*puVar22 + ((int)(puVar1[0x19] - *puVar17) / 0xc) * 0xc);
          puVar15[0x19] = puVar11;
        }
        puVar15[0x1a] = puVar11;
      }
LAB_00695068:
      *(undefined1 *)(param_1 + 0x21a) = 1;
      fn_001f0fb4(*(undefined4 *)(DAT_008977e0 + 0x30),3,0);
      (**(code **)(**(int **)(DAT_008977e0 + 0x30) + 8))();
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((iVar14 != 0xd) &&
       ((((iVar14 == 9 || iVar14 == 0xb || (iVar14 == 0xc || iVar14 == 0xe)) ||
         (iVar14 == 0xf || iVar14 == 0x10)) || ((iVar14 == 0x11 || iVar14 == 1) || iVar14 == 0x12)))
       ) {
      fn_0011a24c(&local_60);
      fn_006f76f0(param_1,&local_60);
      fn_006949f8(param_1,&local_60);
    }
  }
  return 1;
}


