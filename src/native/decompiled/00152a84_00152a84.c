#include "00152a84_00152a84.h"



/* WARNING: Removing unreachable block (ram,0x00153258) */
/* WARNING: Removing unreachable block (ram,0x00153270) */
/* WARNING: Removing unreachable block (ram,0x00153228) */
/* WARNING: Removing unreachable block (ram,0x00153230) */
/* WARNING: Removing unreachable block (ram,0x0015323c) */
/* WARNING: Removing unreachable block (ram,0x0015329c) */
/* WARNING: Removing unreachable block (ram,0x001532c8) */
/* WARNING: Removing unreachable block (ram,0x00153278) */
/* WARNING: Removing unreachable block (ram,0x00153280) */
/* WARNING: Removing unreachable block (ram,0x00153288) */
/* WARNING: Removing unreachable block (ram,0x00153294) */

void fn_00152a84(int param_1,int *param_2,undefined2 param_3,uint param_4,uint param_5,uint param_6
                 ,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  char local_96;
  undefined1 local_95;
  char local_94;
  undefined1 local_93;
  undefined4 local_90;
  int local_8c;
  undefined4 uStack_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78 [3];
  undefined1 auStack_6c [28];
  undefined1 auStack_50 [44];
  
  local_95 = 0;
  local_93 = 0;
  local_98 = (undefined2)param_5;
  local_94 = '\x01';
  local_96 = '\x01';
  local_9a = (undefined2)param_4;
  local_a0 = param_7;
  local_9c = param_3;
  uVar21 = fn_0016156c(&local_a0);
  uVar7 = 4;
  cVar1 = local_94;
  if (local_94 == '\0') {
    cVar1 = local_96;
  }
  if (local_94 != '\0' || cVar1 != '\0') {
    param_2 = (int *)fn_001287b4(cVar1,(int)((ulonglong)uVar21 >> 0x20),4);
    uVar7 = 0x10;
  }
  *(int **)(param_1 + 4) = param_2;
  uVar7 = (**(code **)(*param_2 + 8))(param_2,(int)uVar21,uVar7);
  *(undefined4 *)(param_1 + 8) = uVar7;
  fn_00161104(param_1 + 0xc,uVar7,&local_a0);
  piVar11 = (int *)(param_1 + 0x184);
  local_84 = param_4;
  if (0x6666666 < param_4) {
    fn_002ff628(8,&DAT_008c7638,&DAT_008c7638,param_4,0x6666666);
  }
  if ((uint)((*(int *)(param_1 + 0x18c) - *piVar11) / 0x28) < local_84) {
    uVar14 = (*(int *)(param_1 + 0x188) - *piVar11) / 0x28;
    local_7c = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
    if (local_7c < uVar14 + 0x20) {
      local_7c = uVar14 + 0x20;
    }
    puVar12 = &local_7c;
    if (local_7c <= local_84) {
      puVar12 = &local_84;
    }
    uVar14 = *puVar12;
    iVar2 = fn_00100fc6(uVar14 * 0x28,0);
    iVar18 = *(int *)(param_1 + 0x188);
    iVar9 = iVar2;
    for (iVar16 = *piVar11; iVar16 != iVar18; iVar16 = iVar16 + 0x28) {
      if (iVar9 != 0) {
        fn_00163514(iVar9,iVar16);
      }
      iVar9 = iVar9 + 0x28;
    }
    puVar17 = *(undefined4 **)(param_1 + 0x188);
    for (puVar10 = (undefined4 *)*piVar11; puVar10 != puVar17; puVar10 = puVar10 + 10) {
      (**(code **)*puVar10)(puVar10);
    }
    fn_001008c4(*piVar11,(*(int *)(param_1 + 0x18c) - *piVar11) / 0x28,0);
    iVar16 = *piVar11;
    *piVar11 = iVar2;
    *(int *)(param_1 + 0x188) = iVar2 + ((*(int *)(param_1 + 0x188) - iVar16) / 0x28) * 0x28;
    *(uint *)(param_1 + 0x18c) = iVar2 + uVar14 * 0x28;
  }
  uVar14 = 0;
  if (param_4 != 0) {
    do {
      iVar9 = fn_00162e28(auStack_50,param_1 + 0xc,param_1 + 0x164,uVar14);
      piVar11 = (int *)(param_1 + 0x188);
      iVar16 = *piVar11;
      piVar15 = (int *)(param_1 + 0x184);
      if (iVar16 == *(int *)(param_1 + 0x18c)) {
        uVar4 = (iVar16 - *piVar15) / 0x28;
        local_8c = iVar9;
        if (uVar4 < (uint)((*(int *)(param_1 + 0x18c) - *piVar15) / 0x28)) {
          *piVar11 = iVar16 + 0x28;
          iVar9 = iVar16;
          iVar2 = iVar16;
          if (iVar16 != 0) {
            fn_00163514(iVar16,iVar16 + -0x28);
          }
          while (iVar16 != iVar2 + -0x28) {
            *(undefined2 *)(iVar9 + -0x24) = *(undefined2 *)(iVar2 + -0x4c);
            *(undefined4 *)(iVar9 + -0x20) = *(undefined4 *)(iVar2 + -0x48);
            *(undefined2 *)(iVar9 + -0x18) = *(undefined2 *)(iVar2 + -0x40);
            *(undefined4 *)(iVar9 + -0x14) = *(undefined4 *)(iVar2 + -0x3c);
            *(undefined4 *)(iVar9 + -0x10) = *(undefined4 *)(iVar2 + -0x38);
            fn_00168b84(iVar9 + -0xc,iVar2 + -0x34);
            iVar9 = iVar9 + -0x28;
            iVar2 = iVar2 + -0x28;
          }
          *(undefined2 *)(iVar16 + 4) = *(undefined2 *)(local_8c + 4);
          *(undefined4 *)(iVar16 + 8) = *(undefined4 *)(local_8c + 8);
          *(undefined2 *)(iVar16 + 0x10) = *(undefined2 *)(local_8c + 0x10);
          *(undefined4 *)(iVar16 + 0x14) = *(undefined4 *)(local_8c + 0x14);
          *(undefined4 *)(iVar16 + 0x18) = *(undefined4 *)(local_8c + 0x18);
          fn_00168b84(iVar16 + 0x1c,local_8c + 0x1c);
        }
        else {
          local_78[0] = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
          if (local_78[0] < uVar4 + 0x20) {
            local_78[0] = uVar4 + 0x20;
          }
          iVar18 = fn_00100fc6(local_78[0] * 0x28,0);
          iVar2 = iVar18;
          for (iVar9 = *piVar15; iVar9 != iVar16; iVar9 = iVar9 + 0x28) {
            if (iVar2 != 0) {
              fn_00163514(iVar2,iVar9);
            }
            iVar2 = iVar2 + 0x28;
          }
          iVar9 = iVar18 + ((iVar16 - *piVar15) / 0x28) * 0x28;
          if (iVar9 != 0) {
            fn_00163514(iVar9,local_8c);
          }
          iVar2 = *piVar11;
          iVar9 = iVar18 + ((iVar16 - *piVar15) / 0x28) * 0x28;
          for (; iVar16 != iVar2; iVar16 = iVar16 + 0x28) {
            iVar9 = iVar9 + 0x28;
            if (iVar9 != 0) {
              fn_00163514(iVar9,iVar16);
            }
          }
          puVar10 = (undefined4 *)*piVar15;
          puVar17 = (undefined4 *)*piVar11;
          iVar16 = (int)puVar17 - (int)puVar10;
          for (; puVar10 != puVar17; puVar10 = puVar10 + 10) {
            (**(code **)*puVar10)(puVar10);
          }
          fn_001008c4(*piVar15,(*(int *)(param_1 + 0x18c) - *piVar15) / 0x28,0);
          *piVar15 = iVar18;
          *piVar11 = iVar18 + (iVar16 / 0x28) * 0x28 + 0x28;
          *(uint *)(param_1 + 0x18c) = iVar18 + local_78[0] * 0x28;
        }
      }
      else {
        *piVar11 = iVar16 + 0x28;
        if (iVar16 != 0) {
          fn_00163514();
        }
      }
      fn_001636ac(auStack_50);
      uVar14 = uVar14 + 1 & 0xffff;
    } while (uVar14 < param_4);
  }
  puVar10 = (undefined4 *)fn_00162d08(auStack_6c);
  local_90 = *puVar10;
  local_8c = puVar10[1];
  uStack_88 = puVar10[2];
  local_80 = puVar10[4];
  local_78[0] = puVar10[6];
  local_84 = puVar10[3];
  local_7c = puVar10[5];
  uVar14 = *(uint *)(param_1 + 0x178);
  uVar4 = *(uint *)(param_1 + 0x17c);
  uVar20 = uVar4 - uVar14;
  iVar16 = (int)((longlong)(int)uVar20 * -0x6db6db6d + ((ulonglong)uVar20 << 0x20) >> 0x20);
  if ((uint)((iVar16 >> 4) - (iVar16 >> 0x1f)) < param_5) {
    iVar16 = (int)((longlong)(int)uVar20 * -0x6db6db6d + ((ulonglong)uVar20 << 0x20) >> 0x20);
    fn_00168fb8((uint *)(param_1 + 0x178),uVar4,param_5 - ((iVar16 >> 4) - (iVar16 >> 0x1f)),
                 &local_90);
  }
  else {
    iVar16 = (int)((longlong)(int)uVar20 * -0x6db6db6d + ((ulonglong)uVar20 << 0x20) >> 0x20);
    if ((param_5 < (uint)((iVar16 >> 4) - (iVar16 >> 0x1f))) &&
       (uVar20 = uVar14 + param_5 * 0x1c, uVar14 != uVar4)) {
      uVar14 = uVar20;
      if (uVar4 <= uVar20) {
        for (; uVar14 != uVar4; uVar14 = uVar14 + 0x1c) {
        }
      }
      iVar16 = (int)((longlong)(int)(uVar4 - uVar20) * -0x6db6db6d +
                     ((ulonglong)(uVar4 - uVar20) << 0x20) >> 0x20);
      *(uint *)(param_1 + 0x17c) = uVar4 + ((iVar16 >> 4) - (iVar16 >> 0x1f)) * -0x1c;
    }
  }
  puVar10 = *(undefined4 **)(param_1 + 0x194);
  puVar17 = *(undefined4 **)(param_1 + 400);
  puVar12 = (uint *)(param_1 + 400);
  local_80 = ((int)puVar10 - (int)puVar17) / 0xc;
  if (local_80 < param_6) {
    iVar16 = param_6 - local_80;
    if (iVar16 != 0) {
      local_80 = local_80 + iVar16;
      if ((uint)((*(int *)(param_1 + 0x198) - (int)puVar17) / 0xc) < local_80) {
        uVar14 = (int)(*(int *)(param_1 + 0x194) - *puVar12) / 0xc;
        local_78[0] = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
        if (local_78[0] < uVar14 + 0x20) {
          local_78[0] = uVar14 + 0x20;
        }
        puVar8 = &local_80;
        if (local_80 < local_78[0]) {
          puVar8 = local_78;
        }
        uVar14 = *puVar8;
        puVar3 = (undefined4 *)fn_00100fc6(uVar14 * 0xc,0);
        puVar5 = puVar3;
        for (puVar17 = (undefined4 *)*puVar12; puVar17 != puVar10; puVar17 = puVar17 + 3) {
          if (puVar5 != (undefined4 *)0x0) {
            uVar7 = puVar17[1];
            uVar19 = puVar17[2];
            *puVar5 = *puVar17;
            puVar5[1] = uVar7;
            puVar5[2] = uVar19;
          }
          puVar5 = puVar5 + 3;
        }
        puVar17 = puVar3 + ((int)((int)puVar10 - *puVar12) / 0xc) * 3;
        for (iVar9 = iVar16; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar17 != (undefined4 *)0x0) {
            *puVar17 = 0;
            puVar17[1] = 0;
            puVar17[2] = 0;
          }
          puVar17 = puVar17 + 3;
        }
        puVar5 = *(undefined4 **)(param_1 + 0x194);
        puVar17 = puVar3 + ((int)((int)puVar10 - *puVar12) / 0xc + iVar16) * 3;
        for (; puVar10 != puVar5; puVar10 = puVar10 + 3) {
          if (puVar17 != (undefined4 *)0x0) {
            uVar7 = puVar10[1];
            uVar19 = puVar10[2];
            *puVar17 = *puVar10;
            puVar17[1] = uVar7;
            puVar17[2] = uVar19;
          }
          puVar17 = puVar17 + 3;
        }
        uVar20 = *puVar12;
        uVar6 = *(uint *)(param_1 + 0x194);
        uVar4 = uVar20;
        if (uVar6 < uVar20) {
          do {
            uVar4 = uVar4 + 0xc;
          } while (uVar4 != uVar6);
        }
        fn_001008c4(uVar20,(int)(*(int *)(param_1 + 0x198) - uVar20) / 0xc,0);
        *puVar12 = (uint)puVar3;
        *(undefined4 **)(param_1 + 0x194) = puVar3 + ((int)(uVar6 - uVar20) / 0xc) * 3 + iVar16 * 3;
        *(undefined4 **)(param_1 + 0x198) = puVar3 + uVar14 * 3;
        return;
      }
      puVar17 = puVar10 + iVar16 * 3;
      *(undefined4 **)(param_1 + 0x194) = puVar10 + iVar16 * 3;
      if (puVar17 < puVar10) {
        puVar13 = puVar10 + iVar16 * -3;
        puVar5 = puVar10;
        for (puVar3 = puVar13; puVar3 != puVar10; puVar3 = puVar3 + 3) {
          if (puVar5 != (undefined4 *)0x0) {
            uVar7 = puVar3[1];
            uVar19 = puVar3[2];
            *puVar5 = *puVar3;
            puVar5[1] = uVar7;
            puVar5[2] = uVar19;
          }
          puVar5 = puVar5 + 3;
        }
        puVar5 = puVar10;
        if (puVar10 < puVar13) {
          if (0 < (int)puVar13 - (int)puVar10) {
            uVar14 = ((int)puVar13 - (int)puVar10) / 0xc;
            puVar3 = puVar13;
            if ((uVar14 & 1) != 0) {
              puVar3 = puVar13 + -3;
              puVar5 = puVar10 + -3;
              uVar7 = puVar13[-2];
              uVar19 = puVar13[-1];
              *puVar5 = *puVar3;
              puVar10[-2] = uVar7;
              puVar10[-1] = uVar19;
            }
            for (iVar16 = (int)uVar14 >> 1; iVar16 != 0; iVar16 = iVar16 + -1) {
              uVar7 = puVar3[-2];
              uVar19 = puVar3[-1];
              puVar5[-3] = puVar3[-3];
              puVar5[-2] = uVar7;
              puVar5[-1] = uVar19;
              uVar7 = puVar3[-5];
              uVar19 = puVar3[-4];
              puVar5[-6] = puVar3[-6];
              puVar5[-5] = uVar7;
              puVar5[-4] = uVar19;
              puVar5 = puVar5 + -6;
              puVar3 = puVar3 + -6;
            }
          }
        }
        else {
          while (puVar10 != puVar13) {
            uVar7 = puVar13[-2];
            uVar19 = puVar13[-1];
            puVar5[-3] = puVar13[-3];
            puVar5[-2] = uVar7;
            puVar5[-1] = uVar19;
            puVar5 = puVar5 + -3;
            puVar13 = puVar13 + -3;
          }
        }
        if (puVar10 < puVar17) {
          if (0 < (int)puVar17 - (int)puVar10) {
            uVar14 = ((int)puVar17 - (int)puVar10) / 0xc;
            if ((uVar14 & 1) != 0) {
              *puVar10 = 0;
              puVar17 = puVar10 + 2;
              puVar10[1] = 0;
              puVar10 = puVar10 + 3;
              *puVar17 = 0;
            }
            iVar16 = (int)uVar14 >> 1;
            if (iVar16 != 0) {
              do {
                *puVar10 = 0;
                puVar10[1] = 0;
                puVar10[2] = 0;
                puVar10[5] = 0;
                puVar10[3] = 0;
                puVar10[4] = 0;
                iVar16 = iVar16 + -1;
                puVar10 = puVar10 + 6;
              } while (iVar16 != 0);
              return;
            }
          }
        }
        else {
          for (; puVar10 != puVar17; puVar10 = puVar10 + 3) {
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
          }
        }
      }
      else {
        for (; iVar16 != 0; iVar16 = iVar16 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
          }
          puVar10 = puVar10 + 3;
        }
      }
    }
  }
  else if ((local_80 != param_6) && (puVar5 = puVar17 + param_6 * 3, puVar17 != puVar10)) {
    puVar17 = puVar5;
    if (puVar10 < puVar5) {
      do {
        puVar17 = puVar17 + 3;
      } while (puVar17 != puVar10);
    }
    *(undefined4 **)(param_1 + 0x194) = puVar10 + (((int)puVar10 - (int)puVar5) / 0xc) * -3;
    return;
  }
  return;
}


