#include "0030cf58_0030d6bc.h"



void fn_0030d6bc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = *(uint *)(param_1 + 0x30);
  uVar7 = *(uint *)(param_1 + 0x2c) + param_2 * 0xa88;
  if (*(uint *)(param_1 + 0x2c) != uVar10) {
    uVar3 = uVar7 + 0xa88;
    if (uVar10 != uVar3) {
      if (uVar10 < uVar3) {
        for (; uVar3 != uVar10; uVar3 = uVar3 + 0xa88) {
          fn_0017821c(uVar7,uVar3,0xa88);
          uVar7 = uVar7 + 0xa88;
        }
      }
      else {
        iVar6 = uVar10 - uVar3;
        if (0 < iVar6) {
          uVar10 = uVar7;
          uVar8 = uVar7 - 0xa88;
          if ((iVar6 / 0xa88 & 1U) != 0) {
            fn_0017821c(uVar7,uVar3,0xa88);
            uVar10 = uVar3;
            uVar8 = uVar7;
          }
          for (iVar6 = iVar6 / 0xa88 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
            fn_0017821c(uVar8 + 0xa88,uVar10 + 0xa88,0xa88);
            uVar10 = uVar10 + 0x1510;
            uVar8 = uVar8 + 0x1510;
            fn_0017821c(uVar8,uVar10,0xa88);
          }
        }
      }
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xa88;
  }
  iVar9 = *(int *)(param_1 + 0x3c);
  iVar6 = *(int *)(param_1 + 0x38) + param_2 * 4;
  iVar1 = iVar6;
  if (*(int *)(param_1 + 0x38) != iVar9) {
    while (iVar1 = iVar1 + 4, iVar9 != iVar1) {
      fn_007854f8(iVar6,iVar1);
      iVar6 = iVar6 + 4;
    }
    piVar2 = (int *)(*(int *)(param_1 + 0x3c) + -4);
    puVar4 = (undefined4 *)*piVar2;
    if (puVar4 != &DAT_008f9cf4) {
      piVar5 = puVar4 + -3;
      iVar6 = *piVar5;
      if ((iVar6 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar6 + -1, iVar6 == 0)))) {
        iVar6 = *piVar2;
        fn_001008c4(iVar6 + -0xc,*(int *)(iVar6 + -8) + 8,0);
      }
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -4;
  }
  return;
}



void fn_0030d5c4(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  
  uVar4 = *(uint *)(param_1 + 0x30);
  uVar8 = *(uint *)(param_1 + 0x2c);
  if (uVar8 != uVar4) {
    uVar2 = uVar8;
    if (uVar4 <= uVar8) {
      do {
        uVar2 = uVar2 + 0xa88;
      } while (uVar2 != uVar4);
    }
    *(uint *)(param_1 + 0x30) = uVar4 + ((int)(uVar4 - uVar8) / 0xa88) * -0xa88;
  }
  piVar6 = *(int **)(param_1 + 0x3c);
  piVar7 = *(int **)(param_1 + 0x38);
  if (piVar7 != piVar6) {
    piVar5 = piVar7;
    do {
      if ((undefined4 *)*piVar5 != &DAT_008f9cf4) {
        piVar1 = (undefined4 *)*piVar5 + -3;
        iVar3 = *piVar1;
        if ((iVar3 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar3 + -1, iVar3 == 0)))) {
          fn_001008c4(*piVar5 + -0xc,*(int *)(*piVar5 + -8) + 8,0);
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar6);
    *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - ((int)piVar6 - (int)piVar7 & 0xfffffffcU)
    ;
  }
  return;
}



int fn_0030cf58(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined2 *puVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  undefined4 *local_50 [2];
  undefined4 local_48;
  uint local_44 [4];
  uint local_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  puVar9 = (uint *)(param_1 + 0x30);
  uVar2 = *puVar9;
  puVar10 = (uint *)(param_1 + 0x2c);
  iStack_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  if (uVar2 == *(uint *)(param_1 + 0x34)) {
    uVar14 = (int)(uVar2 - *puVar10) / 0xa88;
    local_48 = param_2;
    if ((uint)((int)(*(uint *)(param_1 + 0x34) - *puVar10) / 0xa88) <= uVar14) {
      uVar17 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
      if (uVar17 < uVar14 + 0x20) {
        uVar17 = uVar14 + 0x20;
      }
      uVar6 = fn_00100fc6(uVar17 * 0xa88,0);
      uVar13 = uVar6;
      for (uVar14 = *puVar10; uVar14 != uVar2; uVar14 = uVar14 + 0xa88) {
        if (uVar13 != 0) {
          fn_0017821c(uVar13,uVar14,0xa88);
        }
        uVar13 = uVar13 + 0xa88;
      }
      iVar3 = uVar6 + ((int)(uVar2 - *puVar10) / 0xa88) * 0xa88;
      if (iVar3 != 0) {
        fn_0017821c(iVar3,local_48,0xa88);
      }
      uVar14 = *puVar9;
      iVar3 = uVar6 + ((int)(uVar2 - *puVar10) / 0xa88) * 0xa88;
      for (; uVar2 != uVar14; uVar2 = uVar2 + 0xa88) {
        iVar3 = iVar3 + 0xa88;
        if (iVar3 != 0) {
          fn_0017821c(iVar3,uVar2,0xa88);
        }
      }
      uVar14 = *puVar10;
      uVar13 = *puVar9;
      uVar2 = uVar14;
      if (uVar13 < uVar14) {
        do {
          uVar2 = uVar2 + 0xa88;
        } while (uVar2 != uVar13);
      }
      fn_001008c4(uVar14,(int)(*(int *)(param_1 + 0x34) - uVar14) / 0xa88,0);
      *puVar10 = uVar6;
      *puVar9 = uVar6 + ((int)(uVar13 - uVar14) / 0xa88) * 0xa88 + 0xa88;
      *(uint *)(param_1 + 0x34) = uVar6 + uVar17 * 0xa88;
      goto LAB_0030d240;
    }
    *puVar9 = uVar2 + 0xa88;
    uVar14 = uVar2 - 0xa88;
    if (uVar2 != 0) {
      fn_0017821c(uVar2,uVar14,0xa88);
    }
    uVar17 = uVar2;
    if (uVar2 < uVar14) {
      if (0 < (int)(uVar14 - uVar2)) {
        uVar17 = (int)(uVar14 - uVar2) / 0xa88;
        uVar13 = uVar2;
        uVar6 = uVar14;
        if ((uVar17 & 1) != 0) {
          uVar6 = uVar2 - 0x1510;
          fn_0017821c(uVar14,uVar6,0xa88);
          uVar13 = uVar14;
        }
        for (iVar3 = (int)uVar17 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          fn_0017821c(uVar13 - 0xa88,uVar6 - 0xa88,0xa88);
          uVar6 = uVar6 - 0x1510;
          uVar13 = uVar13 - 0x1510;
          fn_0017821c(uVar13,uVar6,0xa88);
        }
      }
    }
    else {
      while (uVar2 != uVar14) {
        uVar14 = uVar14 - 0xa88;
        fn_0017821c(uVar17 - 0xa88,uVar14,0xa88);
        uVar17 = uVar17 - 0xa88;
      }
    }
    param_2 = local_48;
  }
  else {
    *puVar9 = uVar2 + 0xa88;
    if (uVar2 == 0) goto LAB_0030d240;
  }
  fn_0017821c(uVar2,param_2,0xa88);
LAB_0030d240:
  uVar1 = local_28;
  piVar8 = (int *)(param_1 + 0x38);
  uVar2 = fn_00100b58();
  local_50[0] = &DAT_008f9cf4;
  if (uVar2 != 0) {
    puVar9 = local_44;
    if (0x20 < uVar2) {
      puVar9 = &local_34;
    }
    local_34 = uVar2;
    local_44[0] = 0x20;
    uVar14 = *puVar9;
    if (0xfffffff1 < uVar14) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar14,0xfffffff1);
    }
    if (uVar14 < uVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar14);
    }
    if (uVar14 == 0) {
      local_50[0] = &DAT_008f9ce8;
    }
    else {
      local_50[0] = (undefined4 *)fn_00100fc6((uVar14 + 8) * 2,0);
      if (local_50[0] != (undefined4 *)0x0) {
        *local_50[0] = 0;
        local_50[0][1] = 0;
        local_50[0][2] = 0;
      }
      local_50[0][2] = uVar2;
      puVar7 = (undefined2 *)((int)local_50[0] + uVar2 * 2 + 0xc);
      local_50[0][1] = uVar14;
      *local_50[0] = 0;
      if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = 0;
      }
    }
    local_50[0] = local_50[0] + 3;
  }
  fn_00301a9c(local_50[0],uVar1,uVar2 << 1);
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 == *(int *)(param_1 + 0x40)) {
    uVar2 = iVar3 - *piVar8 >> 2;
    if (uVar2 < (uint)(*(int *)(param_1 + 0x40) - *piVar8 >> 2)) {
      *(int *)(param_1 + 0x3c) = iVar3 + 4;
      iVar15 = iVar3;
      iVar11 = iVar3;
      if (iVar3 != 0) {
        fn_00785420(iVar3,iVar3 + -4);
      }
      while (iVar3 != iVar11 + -4) {
        fn_007854f8(iVar15 + -4);
        iVar15 = iVar15 + -4;
        iVar11 = iVar11 + -4;
      }
      fn_007854f8(iVar3,local_50);
    }
    else {
      uVar14 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
      if (uVar14 < uVar2 + 0x20) {
        uVar14 = uVar2 + 0x20;
      }
      iVar4 = fn_00100fc6(uVar14 << 2,0);
      iVar11 = iVar4;
      for (iVar15 = *piVar8; iVar15 != iVar3; iVar15 = iVar15 + 4) {
        if (iVar11 != 0) {
          fn_00785420(iVar11,iVar15);
        }
        iVar11 = iVar11 + 4;
      }
      iVar15 = (iVar3 - *piVar8 & 0xfffffffcU) + iVar4;
      if (iVar15 != 0) {
        fn_00785420(iVar15,local_50);
      }
      iVar11 = *(int *)(param_1 + 0x3c);
      iVar15 = (iVar3 - *piVar8 & 0xfffffffcU) + iVar4;
      for (; iVar3 != iVar11; iVar3 = iVar3 + 4) {
        iVar15 = iVar15 + 4;
        if (iVar15 != 0) {
          fn_00785420(iVar15,iVar3);
        }
      }
      piVar12 = (int *)*piVar8;
      piVar16 = *(int **)(param_1 + 0x3c);
      iVar3 = (int)piVar16 - (int)piVar12;
      for (; piVar12 != piVar16; piVar12 = piVar12 + 1) {
        if ((undefined4 *)*piVar12 != &DAT_008f9cf4) {
          piVar5 = (undefined4 *)*piVar12 + -3;
          iVar15 = *piVar5;
          if ((iVar15 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar15 + -1, iVar15 == 0))))
          {
            fn_001008c4(*piVar12 + -0xc,*(int *)(*piVar12 + -8) + 8,0);
          }
        }
      }
      fn_001008c4(*piVar8,*(int *)(param_1 + 0x40) - *piVar8 >> 2,0);
      *piVar8 = iVar4;
      *(int *)(param_1 + 0x3c) = iVar4 + (iVar3 >> 2) * 4 + 4;
      *(uint *)(param_1 + 0x40) = iVar4 + uVar14 * 4;
    }
  }
  else {
    *(int *)(param_1 + 0x3c) = iVar3 + 4;
    if (iVar3 != 0) {
      fn_00785420(iVar3,local_50);
    }
  }
  if (local_50[0] != &DAT_008f9cf4) {
    piVar8 = local_50[0] + -3;
    iVar3 = *piVar8;
    if ((iVar3 == -1) || ((piVar8 != &DAT_008f9ce8 && (*piVar8 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_50[0] + -3,local_50[0][-2] + 8,0);
    }
  }
  return (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0xa88;
}


