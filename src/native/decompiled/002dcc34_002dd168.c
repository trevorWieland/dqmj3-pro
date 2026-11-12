#include "002dcc34_002dd168.h"



bool fn_002dd168(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_002dd188(param_1,param_3,param_2);
  return iVar1 != 0;
}



undefined4 fn_002dd084(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(DAT_00897804 + 0xc);
  fn_00660e0c(param_2);
  iVar3 = 0;
  iVar1 = fn_006b83e4(uVar4);
  if (0 < iVar1) {
    do {
      uVar2 = fn_0028b0a0(uVar4,iVar3);
      iVar1 = fn_002dd188(param_1,uVar2,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = fn_006b83e4(uVar4);
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  iVar1 = fn_006b84b0(uVar4);
  if (0 < iVar1) {
    do {
      uVar2 = fn_0028b348(uVar4,iVar3);
      iVar1 = fn_002dd188(param_1,uVar2,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = fn_006b84b0(uVar4);
    } while (iVar3 < iVar1);
  }
  return 0;
}



undefined4 * fn_002dcc34(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  uint local_30;
  uint local_2c [2];
  
  puVar7 = &local_30;
  puVar1 = (undefined4 *)fn_002dc338();
  *puVar1 = &DAT_00820430;
  *(undefined1 *)((int)puVar1 + 0x1b5) = 0;
  puVar12 = puVar1 + 0x67;
  local_2c[0] = *(uint *)(param_2 + 0x14);
  if (0x15555555 < *(uint *)(param_2 + 0x14)) {
    local_30 = 0x15555555;
    fn_002ff628(8,&DAT_008c7631);
  }
  if ((uint)((int)(puVar1[0x69] - *puVar12) / 0xc) < local_2c[0]) {
    uVar14 = (int)(puVar1[0x68] - *puVar12) / 0xc;
    local_30 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
    if (local_30 < uVar14 + 0x20) {
      local_30 = uVar14 + 0x20;
    }
    if (local_30 <= local_2c[0]) {
      puVar7 = local_2c;
    }
    uVar14 = *puVar7;
    puVar2 = (undefined4 *)fn_00100fc6(uVar14 * 0xc,0);
    puVar10 = (undefined4 *)puVar1[0x68];
    puVar15 = puVar2;
    for (puVar8 = (undefined4 *)*puVar12; puVar8 != puVar10; puVar8 = puVar8 + 3) {
      if (puVar15 != (undefined4 *)0x0) {
        uVar16 = puVar8[1];
        uVar18 = puVar8[2];
        *puVar15 = *puVar8;
        puVar15[1] = uVar16;
        puVar15[2] = uVar18;
      }
      puVar15 = puVar15 + 3;
    }
    uVar3 = *puVar12;
    uVar4 = uVar3;
    if ((uint)puVar1[0x68] < uVar3) {
      do {
        uVar4 = uVar4 + 0xc;
      } while (uVar4 != puVar1[0x68]);
    }
    fn_001008c4(uVar3,(int)(puVar1[0x69] - uVar3) / 0xc);
    uVar4 = *puVar12;
    *puVar12 = (uint)puVar2;
    puVar1[0x68] = puVar2 + ((int)(puVar1[0x68] - uVar4) / 0xc) * 3;
    puVar1[0x69] = puVar2 + uVar14 * 3;
  }
  iVar17 = *(int *)(param_2 + 0x10);
  iVar13 = *(int *)(iVar17 + 8);
  while (iVar13 != iVar17) {
    puVar15 = (undefined4 *)(iVar13 + 0x14);
    puVar8 = (undefined4 *)puVar1[0x68];
    puVar7 = puVar1 + 0x67;
    if (puVar8 == (undefined4 *)puVar1[0x69]) {
      uVar14 = (int)((int)puVar8 - *puVar7) / 0xc;
      if (uVar14 < (uint)((int)((int)puVar1[0x69] - *puVar7) / 0xc)) {
        puVar1[0x68] = puVar8 + 3;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = puVar8[-3];
          puVar8[1] = puVar8[-2];
          puVar8[2] = puVar8[-1];
        }
        puVar2 = puVar8 + -3;
        puVar10 = puVar8;
        if (puVar8 < puVar2) {
          if (0 < (int)puVar2 - (int)puVar8) {
            uVar14 = ((int)puVar2 - (int)puVar8) / 0xc;
            if ((uVar14 & 1) != 0) {
              puVar2 = puVar8 + -6;
              puVar10 = puVar8 + -3;
              *puVar10 = *puVar2;
              puVar8[-2] = puVar8[-5];
              puVar8[-1] = puVar8[-4];
            }
            for (iVar11 = (int)uVar14 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
              uVar16 = puVar2[-2];
              uVar18 = puVar2[-1];
              puVar10[-3] = puVar2[-3];
              puVar10[-2] = uVar16;
              puVar10[-1] = uVar18;
              uVar16 = puVar2[-5];
              uVar18 = puVar2[-4];
              puVar10[-6] = puVar2[-6];
              puVar10[-5] = uVar16;
              puVar10[-4] = uVar18;
              puVar10 = puVar10 + -6;
              puVar2 = puVar2 + -6;
            }
          }
        }
        else {
          while (puVar8 != puVar2) {
            uVar16 = puVar2[-2];
            uVar18 = puVar2[-1];
            puVar10[-3] = puVar2[-3];
            puVar10[-2] = uVar16;
            puVar10[-1] = uVar18;
            puVar10 = puVar10 + -3;
            puVar2 = puVar2 + -3;
          }
        }
        uVar16 = *(undefined4 *)(iVar13 + 0x18);
        uVar18 = *(undefined4 *)(iVar13 + 0x1c);
        *puVar8 = *puVar15;
        puVar8[1] = uVar16;
        puVar8[2] = uVar18;
      }
      else {
        uVar3 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
        uVar4 = uVar14 + 0x20;
        if (uVar14 + 0x20 <= uVar3) {
          uVar4 = uVar3;
        }
        puVar5 = (undefined4 *)fn_00100fc6(uVar4 * 0xc,0);
        puVar10 = puVar5;
        for (puVar2 = (undefined4 *)*puVar7; puVar2 != puVar8; puVar2 = puVar2 + 3) {
          if (puVar10 != (undefined4 *)0x0) {
            uVar16 = puVar2[1];
            uVar18 = puVar2[2];
            *puVar10 = *puVar2;
            puVar10[1] = uVar16;
            puVar10[2] = uVar18;
          }
          puVar10 = puVar10 + 3;
        }
        puVar2 = puVar5 + ((int)((int)puVar8 - *puVar7) / 0xc) * 3;
        if (puVar2 != (undefined4 *)0x0) {
          uVar16 = *(undefined4 *)(iVar13 + 0x18);
          uVar18 = *(undefined4 *)(iVar13 + 0x1c);
          *puVar2 = *puVar15;
          puVar2[1] = uVar16;
          puVar2[2] = uVar18;
        }
        puVar2 = (undefined4 *)puVar1[0x68];
        puVar15 = puVar5 + ((int)((int)puVar8 - *puVar7) / 0xc) * 3;
        for (; puVar8 != puVar2; puVar8 = puVar8 + 3) {
          puVar10 = puVar15 + 3;
          if (puVar10 != (undefined4 *)0x0) {
            uVar16 = puVar8[1];
            uVar18 = puVar8[2];
            *puVar10 = *puVar8;
            puVar15[4] = uVar16;
            puVar15[5] = uVar18;
          }
          puVar15 = puVar10;
        }
        uVar3 = *puVar7;
        uVar9 = puVar1[0x68];
        uVar14 = uVar3;
        if (uVar9 < uVar3) {
          do {
            uVar14 = uVar14 + 0xc;
          } while (uVar14 != uVar9);
        }
        fn_001008c4(uVar3,(int)(puVar1[0x69] - uVar3) / 0xc);
        *puVar7 = (uint)puVar5;
        puVar1[0x68] = puVar5 + ((int)(uVar9 - uVar3) / 0xc) * 3 + 3;
        puVar1[0x69] = puVar5 + uVar4 * 3;
      }
    }
    else {
      puVar1[0x68] = puVar8 + 3;
      if (puVar8 != (undefined4 *)0x0) {
        uVar16 = *(undefined4 *)(iVar13 + 0x18);
        uVar18 = *(undefined4 *)(iVar13 + 0x1c);
        *puVar8 = *puVar15;
        puVar8[1] = uVar16;
        puVar8[2] = uVar18;
      }
    }
    iVar11 = *(int *)(iVar13 + 0xc);
    if (*(int *)(iVar13 + 0xc) == 0) {
      iVar11 = *(int *)(iVar13 + 4);
      while (iVar6 = iVar11, iVar13 == *(int *)(iVar6 + 0xc)) {
        iVar13 = iVar6;
        iVar11 = *(int *)(iVar6 + 4);
      }
      if (*(int *)(iVar13 + 0xc) != iVar6) {
        iVar13 = iVar6;
      }
    }
    else {
      do {
        iVar13 = iVar11;
        iVar11 = *(int *)(iVar13 + 8);
      } while (*(int *)(iVar13 + 8) != 0);
    }
  }
  return puVar1;
}


