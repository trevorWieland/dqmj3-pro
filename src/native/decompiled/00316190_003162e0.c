#include "00316190_003162e0.h"



void fn_003162e0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined2 *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  int local_120 [5];
  int local_10c [38];
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  int local_5c;
  undefined4 *local_54;
  undefined1 local_44;
  uint local_3c [6];
  
  fn_0017821c(local_120,&DAT_007bd6f0);
  uVar18 = 0;
  do {
    piVar5 = local_120 + uVar18 * 7;
    if ((((char)local_10c[uVar18 * 7] == '\0') ||
        (iVar1 = fn_00154ac8(local_10c[uVar18 * 7 + 1]), iVar1 != 0)) &&
       (local_120[uVar18 * 7 + 2] != 0)) {
      piVar12 = *(int **)(param_1 + 0xb4);
      puVar15 = (uint *)(param_1 + 0xb0);
      if (piVar12 == *(int **)(param_1 + 0xb8)) {
        uVar11 = (int)*(int **)(param_1 + 0xb8) - *puVar15;
        iVar10 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >> 0x20);
        uVar11 = (int)piVar12 - *puVar15;
        iVar1 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >> 0x20);
        if ((uint)((iVar1 >> 4) - (iVar1 >> 0x1f)) < (uint)((iVar10 >> 4) - (iVar10 >> 0x1f))) {
          *(int **)(param_1 + 0xb4) = piVar12 + 7;
          if (piVar12 != (int *)0x0) {
            *piVar12 = piVar12[-7];
            piVar12[1] = piVar12[-6];
            piVar12[2] = piVar12[-5];
            piVar12[3] = piVar12[-4];
            piVar12[4] = piVar12[-3];
            piVar12[5] = piVar12[-2];
            piVar12[6] = piVar12[-1];
          }
          piVar7 = piVar12 + -7;
          piVar9 = piVar12;
          if (piVar12 < piVar7) {
            uVar11 = (int)piVar7 - (int)piVar12;
            if (0 < (int)uVar11) {
              iVar1 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >>
                           0x20);
              if (((iVar1 >> 4) - (iVar1 >> 0x1f) & 1U) != 0) {
                piVar7 = piVar12 + -0xe;
                piVar9 = piVar12 + -7;
                *piVar9 = *piVar7;
                piVar12[-6] = piVar12[-0xd];
                piVar12[-5] = piVar12[-0xc];
                piVar12[-4] = piVar12[-0xb];
                piVar12[-3] = piVar12[-10];
                piVar12[-2] = piVar12[-9];
                piVar12[-1] = piVar12[-8];
              }
              iVar1 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >>
                           0x20);
              for (iVar1 = (iVar1 >> 4) - (iVar1 >> 0x1f) >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
                iVar10 = piVar7[-6];
                iVar13 = piVar7[-5];
                iVar16 = piVar7[-4];
                iVar17 = piVar7[-3];
                iVar19 = piVar7[-2];
                iVar23 = piVar7[-1];
                piVar9[-7] = piVar7[-7];
                piVar9[-6] = iVar10;
                piVar9[-5] = iVar13;
                piVar9[-4] = iVar16;
                piVar9[-3] = iVar17;
                piVar9[-2] = iVar19;
                piVar9[-1] = iVar23;
                iVar10 = piVar7[-0xd];
                iVar13 = piVar7[-0xc];
                iVar16 = piVar7[-0xb];
                iVar17 = piVar7[-10];
                iVar19 = piVar7[-9];
                iVar23 = piVar7[-8];
                piVar9[-0xe] = piVar7[-0xe];
                piVar9[-0xd] = iVar10;
                piVar9[-0xc] = iVar13;
                piVar9[-0xb] = iVar16;
                piVar9[-10] = iVar17;
                piVar9[-9] = iVar19;
                piVar9[-8] = iVar23;
                piVar9 = piVar9 + -0xe;
                piVar7 = piVar7 + -0xe;
              }
            }
          }
          else {
            while (piVar12 != piVar7) {
              iVar1 = piVar7[-6];
              iVar10 = piVar7[-5];
              iVar13 = piVar7[-4];
              iVar16 = piVar7[-3];
              iVar17 = piVar7[-2];
              iVar19 = piVar7[-1];
              piVar9[-7] = piVar7[-7];
              piVar9[-6] = iVar1;
              piVar9[-5] = iVar10;
              piVar9[-4] = iVar13;
              piVar9[-3] = iVar16;
              piVar9[-2] = iVar17;
              piVar9[-1] = iVar19;
              piVar9 = piVar9 + -7;
              piVar7 = piVar7 + -7;
            }
          }
          iVar1 = local_120[uVar18 * 7 + 1];
          iVar10 = local_120[uVar18 * 7 + 2];
          iVar13 = local_120[uVar18 * 7 + 3];
          iVar16 = local_120[uVar18 * 7 + 4];
          iVar17 = local_10c[uVar18 * 7];
          iVar19 = local_10c[uVar18 * 7 + 1];
          *piVar12 = *piVar5;
          piVar12[1] = iVar1;
          piVar12[2] = iVar10;
          piVar12[3] = iVar13;
          piVar12[4] = iVar16;
          piVar12[5] = iVar17;
          piVar12[6] = iVar19;
        }
        else {
          iVar1 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >> 0x20);
          uVar2 = (iVar1 >> 4) - (iVar1 >> 0x1f);
          uVar6 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
          uVar11 = uVar2 + 0x20;
          if (uVar2 + 0x20 <= uVar6) {
            uVar11 = uVar6;
          }
          piVar3 = (int *)fn_00100fc6(uVar11 * 0x1c,0);
          piVar9 = piVar3;
          for (piVar7 = (int *)*puVar15; piVar7 != piVar12; piVar7 = piVar7 + 7) {
            if (piVar9 != (int *)0x0) {
              iVar1 = piVar7[1];
              iVar10 = piVar7[2];
              iVar13 = piVar7[3];
              iVar16 = piVar7[4];
              iVar17 = piVar7[5];
              iVar19 = piVar7[6];
              *piVar9 = *piVar7;
              piVar9[1] = iVar1;
              piVar9[2] = iVar10;
              piVar9[3] = iVar13;
              piVar9[4] = iVar16;
              piVar9[5] = iVar17;
              piVar9[6] = iVar19;
            }
            piVar9 = piVar9 + 7;
          }
          iVar1 = (int)((longlong)(int)((int)piVar12 - *puVar15) * -0x6db6db6d +
                        ((ulonglong)((int)piVar12 - *puVar15) << 0x20) >> 0x20);
          piVar7 = piVar3 + ((iVar1 >> 4) - (iVar1 >> 0x1f)) * 7;
          if (piVar7 != (int *)0x0) {
            iVar1 = local_120[uVar18 * 7 + 1];
            iVar10 = local_120[uVar18 * 7 + 2];
            iVar13 = local_120[uVar18 * 7 + 3];
            iVar16 = local_120[uVar18 * 7 + 4];
            iVar17 = local_10c[uVar18 * 7];
            iVar19 = local_10c[uVar18 * 7 + 1];
            *piVar7 = *piVar5;
            piVar7[1] = iVar1;
            piVar7[2] = iVar10;
            piVar7[3] = iVar13;
            piVar7[4] = iVar16;
            piVar7[5] = iVar17;
            piVar7[6] = iVar19;
          }
          piVar7 = *(int **)(param_1 + 0xb4);
          iVar1 = (int)((longlong)(int)((int)piVar12 - *puVar15) * -0x6db6db6d +
                        ((ulonglong)((int)piVar12 - *puVar15) << 0x20) >> 0x20);
          piVar5 = piVar3 + ((iVar1 >> 4) - (iVar1 >> 0x1f)) * 7;
          for (; piVar12 != piVar7; piVar12 = piVar12 + 7) {
            piVar9 = piVar5 + 7;
            if (piVar9 != (int *)0x0) {
              iVar1 = piVar12[1];
              iVar10 = piVar12[2];
              iVar13 = piVar12[3];
              iVar16 = piVar12[4];
              iVar17 = piVar12[5];
              iVar19 = piVar12[6];
              *piVar9 = *piVar12;
              piVar5[8] = iVar1;
              piVar5[9] = iVar10;
              piVar5[10] = iVar13;
              piVar5[0xb] = iVar16;
              piVar5[0xc] = iVar17;
              piVar5[0xd] = iVar19;
            }
            piVar5 = piVar9;
          }
          uVar6 = *puVar15;
          uVar20 = *(uint *)(param_1 + 0xb4);
          iVar1 = (int)((longlong)(int)(uVar20 - uVar6) * -0x6db6db6d +
                        ((ulonglong)(uVar20 - uVar6) << 0x20) >> 0x20);
          uVar2 = uVar6;
          if (uVar20 < uVar6) {
            do {
              uVar2 = uVar2 + 0x1c;
            } while (uVar2 != uVar20);
          }
          uVar2 = *(int *)(param_1 + 0xb8) - uVar6;
          iVar10 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
          fn_001008c4(uVar6,(iVar10 >> 4) - (iVar10 >> 0x1f),0);
          *puVar15 = (uint)piVar3;
          *(int **)(param_1 + 0xb4) = piVar3 + ((iVar1 >> 4) - (iVar1 >> 0x1f)) * 7 + 7;
          *(int **)(param_1 + 0xb8) = piVar3 + uVar11 * 7;
        }
      }
      else {
        *(int **)(param_1 + 0xb4) = piVar12 + 7;
        if (piVar12 != (int *)0x0) {
          iVar1 = local_120[uVar18 * 7 + 1];
          iVar10 = local_120[uVar18 * 7 + 2];
          iVar13 = local_120[uVar18 * 7 + 3];
          iVar16 = local_120[uVar18 * 7 + 4];
          iVar17 = local_10c[uVar18 * 7];
          iVar19 = local_10c[uVar18 * 7 + 1];
          *piVar12 = *piVar5;
          piVar12[1] = iVar1;
          piVar12[2] = iVar10;
          piVar12[3] = iVar13;
          piVar12[4] = iVar16;
          piVar12[5] = iVar17;
          piVar12[6] = iVar19;
        }
      }
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 < 6);
  fn_002c330c(&local_70);
  local_70 = DAT_00890e88;
  local_6c = DAT_00890e8c;
  uVar18 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0);
  iVar1 = (int)((longlong)(int)uVar18 * -0x6db6db6d + ((ulonglong)uVar18 << 0x20) >> 0x20);
  local_68 = (iVar1 >> 4) - (iVar1 >> 0x1f);
  puVar14 = *(undefined4 **)(param_1 + 0x18);
  if (puVar14 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar14)(puVar14);
    do {
      if (puVar4 == &DAT_00890e84) goto LAB_00316654;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar14 = (undefined4 *)0x0;
LAB_00316654:
  local_64 = puVar14[2];
  uVar18 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0);
  iVar1 = (int)((longlong)(int)uVar18 * -0x6db6db6d + ((ulonglong)uVar18 << 0x20) >> 0x20);
  local_5c = (iVar1 >> 4) - (iVar1 >> 0x1f);
  puVar14 = (undefined4 *)fn_0022f750(DAT_00890e90);
  uVar18 = fn_00100b58();
  puVar4 = &DAT_008f9ce8;
  if (uVar18 == 0) {
    piVar5 = local_54 + -3;
    iVar1 = *piVar5;
    if (iVar1 != 0) {
      if ((local_54 != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(local_54 + -3,local_54[-2] + 8,0);
      }
      local_54 = &DAT_008f9cf4;
      goto LAB_003168a0;
    }
    local_54[-1] = 0;
    puVar14 = local_54;
  }
  else {
    uVar11 = local_54[-3] + 1;
    bVar22 = local_54[-3] != -1;
    bVar21 = uVar11 == 1;
    if (uVar11 < 2) {
      bVar22 = (uint)local_54[-2] <= uVar18;
      bVar21 = uVar18 == local_54[-2];
    }
    if (bVar22 && !bVar21) {
LAB_003166ec:
      uVar11 = local_54[-1];
      local_74 = uVar18;
      local_3c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
      if (local_3c[0] < uVar11 + 0x80) {
        local_3c[0] = uVar11 + 0x80;
      }
      puVar15 = &local_74;
      if (uVar18 <= local_3c[0]) {
        puVar15 = local_3c;
      }
      uVar11 = *puVar15;
      if (0xfffffff1 < uVar11) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar11,0xfffffff1);
      }
      if (uVar11 < uVar18) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar18,uVar11);
      }
      if (uVar11 != 0) {
        puVar4 = (undefined4 *)fn_00100fc6((uVar11 + 8) * 2,0);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
        }
        puVar4[2] = uVar18;
        puVar8 = (undefined2 *)((int)puVar4 + uVar18 * 2 + 0xc);
        *puVar4 = 0;
        puVar4[1] = uVar11;
        if (puVar8 != (undefined2 *)0x0) {
          *puVar8 = 0;
        }
      }
      fn_00301a9c(puVar4 + 3,puVar14,uVar18 << 1);
      if (local_54 != &DAT_008f9cf4) {
        piVar5 = local_54 + -3;
        iVar1 = *piVar5;
        if ((iVar1 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(local_54 + -3,local_54[-2] + 8,0);
        }
      }
      local_54 = puVar4 + 3;
      goto LAB_003168a0;
    }
    if (puVar14 != (undefined4 *)0x0) {
      bVar21 = puVar14 <= local_54;
      if (local_54 <= puVar14) {
        bVar21 = (undefined4 *)((int)local_54 + local_54[-1] * 2) <= puVar14;
      }
      if (!bVar21) goto LAB_003166ec;
    }
    fn_001006ac(local_54,puVar14,uVar18);
    local_54[-1] = uVar18;
    puVar14 = (undefined4 *)((int)local_54 + uVar18 * 2);
  }
  *(undefined2 *)puVar14 = 0;
LAB_003168a0:
  local_44 = 0;
  fn_002c29a0(param_1,&local_70);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x81) = 1;
  fn_0031f3f4(iVar1,0);
  fn_00689d04(param_1,0);
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



bool fn_00316190(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 4) - (iVar2 >> 0x1f)) <= param_2) {
    iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    fn_002ff628(9,&DAT_008c7628,&DAT_008c7628,param_2,(iVar2 >> 4) - (iVar2 >> 0x1f));
  }
  if (*(char *)(*(int *)(param_1 + 0xb0) + param_2 * 0x1c + 0xc) != '\0') {
    uVar1 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0);
    iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    if ((uint)((iVar2 >> 4) - (iVar2 >> 0x1f)) <= param_2) {
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
      fn_002ff628(9,&DAT_008c7628,&DAT_008c7628,param_2,(iVar2 >> 4) - (iVar2 >> 0x1f));
    }
    iVar2 = fn_00154ac8(*(undefined4 *)(*(int *)(param_1 + 0xb0) + param_2 * 0x1c + 0x10));
    if (iVar2 == 0) {
      return false;
    }
  }
  uVar1 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 4) - (iVar2 >> 0x1f)) <= param_2) {
    iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    fn_002ff628(9,&DAT_008c7628,&DAT_008c7628,param_2,(iVar2 >> 4) - (iVar2 >> 0x1f));
  }
  return *(int *)(*(int *)(param_1 + 0xb0) + param_2 * 0x1c + 8) != 0;
}


