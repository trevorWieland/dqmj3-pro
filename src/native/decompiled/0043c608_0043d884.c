#include "0043c608_0043d884.h"



void fn_0043d884(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00749714();
  *puVar1 = &PTR_FUN_0083d0b0;
  return;
}



void fn_0043d86c(int *param_1)

{
  (**(code **)(*param_1 + 0x154))();
  fn_0022f750();
  return;
}



void fn_0043d370(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00748f80();
  *puVar1 = &PTR_FUN_0083cf44;
  return;
}



void fn_0043d350(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00748f80();
  *puVar1 = &PTR_FUN_0083cf44;
  return;
}



void fn_0043ccf8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_007485ac();
  *puVar1 = &PTR_FUN_0083cde8;
  return;
}



void fn_0043ccd8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_007485ac();
  *puVar1 = &PTR_FUN_0083cde8;
  return;
}



undefined4 fn_0043c608(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 extraout_r1;
  undefined2 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uVar18;
  bool bVar19;
  bool bVar20;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  uint local_30;
  uint local_2c;
  int local_28;
  
  iVar1 = (**(code **)(*param_1 + 0x138))(param_1,&local_28);
  iVar17 = 0;
  if (0 < local_28) {
    do {
      puVar7 = (undefined4 *)(iVar1 + iVar17 * 0x10);
      puVar15 = (undefined4 *)param_1[0x30];
      puVar5 = (uint *)(param_1 + 0x2f);
      if (puVar15 == (undefined4 *)param_1[0x31]) {
        uVar4 = (int)((int)puVar15 - *puVar5) >> 4;
        if (uVar4 < (uint)((int)(param_1[0x31] - *puVar5) >> 4)) {
          param_1[0x30] = (int)(puVar15 + 4);
          if (puVar15 != (undefined4 *)0x0) {
            *puVar15 = puVar15[-4];
            puVar15[1] = puVar15[-3];
            puVar15[2] = puVar15[-2];
            puVar15[3] = puVar15[-1];
          }
          puVar9 = puVar15 + -4;
          puVar16 = puVar15;
          if (puVar15 < puVar9) {
            iVar8 = (int)puVar9 - (int)puVar15;
            if (0 < iVar8) {
              if (iVar8 * 0x8000000 < 0) {
                puVar9 = puVar15 + -8;
                puVar16 = puVar15 + -4;
                *puVar16 = *puVar9;
                puVar15[-3] = puVar15[-7];
                puVar15[-2] = puVar15[-6];
                puVar15[-1] = puVar15[-5];
              }
              for (iVar8 = iVar8 >> 5; iVar8 != 0; iVar8 = iVar8 + -1) {
                uVar12 = puVar9[-3];
                uVar13 = puVar9[-2];
                uVar18 = puVar9[-1];
                puVar16[-4] = puVar9[-4];
                puVar16[-3] = uVar12;
                puVar16[-2] = uVar13;
                puVar16[-1] = uVar18;
                uVar12 = puVar9[-7];
                uVar13 = puVar9[-6];
                uVar18 = puVar9[-5];
                puVar16[-8] = puVar9[-8];
                puVar16[-7] = uVar12;
                puVar16[-6] = uVar13;
                puVar16[-5] = uVar18;
                puVar9 = puVar9 + -8;
                puVar16 = puVar16 + -8;
              }
            }
          }
          else {
            while (puVar15 != puVar9) {
              uVar12 = puVar9[-3];
              uVar13 = puVar9[-2];
              uVar18 = puVar9[-1];
              puVar16[-4] = puVar9[-4];
              puVar16[-3] = uVar12;
              puVar16[-2] = uVar13;
              puVar16[-1] = uVar18;
              puVar16 = puVar16 + -4;
              puVar9 = puVar9 + -4;
            }
          }
          uVar12 = puVar7[1];
          uVar13 = puVar7[2];
          uVar18 = puVar7[3];
          *puVar15 = *puVar7;
          puVar15[1] = uVar12;
          puVar15[2] = uVar13;
          puVar15[3] = uVar18;
        }
        else {
          uVar14 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
          if (uVar14 < uVar4 + 0x20) {
            uVar14 = uVar4 + 0x20;
          }
          puVar2 = (undefined4 *)fn_00100fc6(uVar14 << 4,0);
          puVar16 = puVar2;
          for (puVar9 = (undefined4 *)*puVar5; puVar9 != puVar15; puVar9 = puVar9 + 4) {
            if (puVar16 != (undefined4 *)0x0) {
              uVar12 = puVar9[1];
              uVar13 = puVar9[2];
              uVar18 = puVar9[3];
              *puVar16 = *puVar9;
              puVar16[1] = uVar12;
              puVar16[2] = uVar13;
              puVar16[3] = uVar18;
            }
            puVar16 = puVar16 + 4;
          }
          puVar9 = (undefined4 *)(((int)puVar15 - *puVar5 & 0xfffffff0) + (int)puVar2);
          if (puVar9 != (undefined4 *)0x0) {
            uVar12 = puVar7[1];
            uVar13 = puVar7[2];
            uVar18 = puVar7[3];
            *puVar9 = *puVar7;
            puVar9[1] = uVar12;
            puVar9[2] = uVar13;
            puVar9[3] = uVar18;
          }
          puVar9 = (undefined4 *)param_1[0x30];
          puVar7 = (undefined4 *)(((int)puVar15 - *puVar5 & 0xfffffff0) + (int)puVar2);
          for (; puVar15 != puVar9; puVar15 = puVar15 + 4) {
            puVar16 = puVar7 + 4;
            if (puVar16 != (undefined4 *)0x0) {
              uVar12 = puVar15[1];
              uVar13 = puVar15[2];
              uVar18 = puVar15[3];
              *puVar16 = *puVar15;
              puVar7[5] = uVar12;
              puVar7[6] = uVar13;
              puVar7[7] = uVar18;
            }
            puVar7 = puVar16;
          }
          uVar3 = *puVar5;
          uVar10 = param_1[0x30];
          uVar4 = uVar3;
          if (uVar10 < uVar3) {
            do {
              uVar4 = uVar4 + 0x10;
            } while (uVar4 != uVar10);
          }
          fn_001008c4(uVar3,(int)(param_1[0x31] - uVar3) >> 4);
          param_1[0x31] = (int)(puVar2 + uVar14 * 4);
          param_1[0x30] = (int)(puVar2 + ((int)(uVar10 - uVar3) >> 4) * 4 + 4);
          *puVar5 = (uint)puVar2;
        }
      }
      else {
        param_1[0x30] = (int)(puVar15 + 4);
        if (puVar15 != (undefined4 *)0x0) {
          uVar12 = puVar7[1];
          uVar13 = puVar7[2];
          uVar18 = puVar7[3];
          *puVar15 = *puVar7;
          puVar15[1] = uVar12;
          puVar15[2] = uVar13;
          puVar15[3] = uVar18;
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < local_28);
  }
  fn_002c330c(&local_64);
  local_64 = DAT_008965a0;
  local_60 = DAT_008965a4;
  local_5c = (**(code **)(*param_1 + 0x140))(param_1);
  uVar12 = (**(code **)(*param_1 + 0x150))(param_1);
  fn_00300f74(uVar12,local_5c);
  local_58 = extraout_r1;
  uVar12 = (**(code **)(*param_1 + 0x150))(param_1);
  local_54 = fn_00300f74(uVar12,local_5c);
  local_50 = param_1[0x30] - param_1[0x2f] >> 4;
  puVar15 = (undefined4 *)fn_0022f750(param_1[0x2d]);
  uVar4 = fn_00100b58();
  puVar7 = &DAT_008f9ce8;
  if (uVar4 == 0) {
    piVar6 = local_48 + -3;
    iVar1 = *piVar6;
    if (iVar1 != 0) {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
      goto LAB_0043cb08;
    }
    local_48[-1] = 0;
    puVar15 = local_48;
  }
  else {
    uVar14 = local_48[-3] + 1;
    bVar20 = local_48[-3] != -1;
    bVar19 = uVar14 == 1;
    if (uVar14 < 2) {
      bVar20 = (uint)local_48[-2] <= uVar4;
      bVar19 = uVar4 == local_48[-2];
    }
    if (bVar20 && !bVar19) {
LAB_0043c958:
      uVar14 = local_48[-1];
      local_30 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
      if (local_30 < uVar14 + 0x80) {
        local_30 = uVar14 + 0x80;
      }
      local_2c = uVar4;
      puVar5 = &local_30;
      if (local_30 < uVar4) {
        puVar5 = &local_2c;
      }
      uVar14 = *puVar5;
      if (0xfffffff1 < uVar14) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar14,0xfffffff1);
      }
      if (uVar14 < uVar4) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,uVar14);
      }
      if (uVar14 != 0) {
        puVar7 = (undefined4 *)fn_00100fc6((uVar14 + 8) * 2,0);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
        }
        puVar7[2] = uVar4;
        puVar11 = (undefined2 *)((int)puVar7 + uVar4 * 2 + 0xc);
        *puVar7 = 0;
        puVar7[1] = uVar14;
        if (puVar11 != (undefined2 *)0x0) {
          *puVar11 = 0;
        }
      }
      fn_00301a9c(puVar7 + 3,puVar15,uVar4 << 1);
      if (local_48 != &DAT_008f9cf4) {
        piVar6 = local_48 + -3;
        iVar1 = *piVar6;
        if ((iVar1 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
        }
      }
      local_48 = puVar7 + 3;
      goto LAB_0043cb08;
    }
    if (puVar15 != (undefined4 *)0x0) {
      bVar19 = puVar15 <= local_48;
      if (local_48 <= puVar15) {
        bVar19 = (undefined4 *)((int)local_48 + local_48[-1] * 2) <= puVar15;
      }
      if (!bVar19) goto LAB_0043c958;
    }
    fn_001006ac(local_48,puVar15,uVar4);
    local_48[-1] = uVar4;
    puVar15 = (undefined4 *)((int)local_48 + uVar4 * 2);
  }
  *(undefined2 *)puVar15 = 0;
LAB_0043cb08:
  fn_002c29a0(param_1,&local_64);
  (**(code **)(*param_1 + 0x124))(param_1);
  if ((char)param_1[0x2e] != '\0') {
    fn_0031f8fc(param_1[0x1d],0,0,0,0xffffffff);
    iVar1 = param_1[0x1d];
    *(undefined1 *)(iVar1 + 0x81) = 1;
    fn_0031f3f4(iVar1,0);
  }
  puVar15 = (undefined4 *)fn_001f74d8(param_1,0x39);
  if (puVar15 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)(**(code **)*puVar15)(puVar15);
    do {
      if (puVar7 == &DAT_00894d28) goto LAB_0043cba0;
      puVar7 = (undefined4 *)*puVar7;
    } while (puVar7 != (undefined4 *)0x0);
  }
  puVar15 = (undefined4 *)0x0;
LAB_0043cba0:
  param_1[0x32] = (int)puVar15;
  if (local_3c != &DAT_008f9cf4) {
    piVar6 = local_3c + -3;
    iVar1 = *piVar6;
    if ((iVar1 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  if (local_40 != &DAT_008f9cf4) {
    piVar6 = local_40 + -3;
    iVar1 = *piVar6;
    if ((iVar1 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  if (local_44 != &DAT_008f9cf4) {
    piVar6 = local_44 + -3;
    iVar1 = *piVar6;
    if ((iVar1 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  if (local_48 != &DAT_008f9cf4) {
    piVar6 = local_48 + -3;
    iVar1 = *piVar6;
    if ((iVar1 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
    }
  }
  return 1;
}


