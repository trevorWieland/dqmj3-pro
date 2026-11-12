#include "003692c0_003696ac.h"



void fn_003696ac(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfd;
  }
  else {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 2;
  }
  *(undefined4 *)(param_1 + 100) = param_3;
  return;
}



void fn_00369618(undefined4 *param_1)

{
  param_1[1] = 0xffffffff;
  *param_1 = &DAT_00827668;
  param_1[2] = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



bool fn_0036959c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006afabc(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_006f7a0c(DAT_008977e0);
    iVar1 = fn_006c3a70(*(undefined4 *)(iVar1 + 0x30));
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != iVar1) {
    *(int *)(param_1 + 4) = iVar2;
    *(int *)(param_1 + 8) = (iVar2 + 1) % 2;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return iVar2 != iVar1;
}



void fn_0036955c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006afabc(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = fn_006f7a0c(DAT_008977e0);
    uVar2 = fn_006c3a70(*(undefined4 *)(iVar1 + 0x30));
  }
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



void fn_00369548(int param_1,undefined2 *param_2)

{
  *(undefined2 *)(*(int *)(param_1 + 0x188) + 0x14) = *param_2;
  return;
}



void fn_003694fc(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x188);
  *(undefined4 *)(iVar1 + 0x24) = *param_2;
  *(undefined4 *)(iVar1 + 0x28) = param_2[1];
  *(undefined4 *)(iVar1 + 0x2c) = param_2[2];
  *(undefined2 *)(iVar1 + 0x30) = *(undefined2 *)(param_2 + 3);
  *(undefined4 *)(iVar1 + 0x32) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined4 *)(iVar1 + 0x36) = *(undefined4 *)((int)param_2 + 0x12);
  *(undefined4 *)(iVar1 + 0x3a) = *(undefined4 *)((int)param_2 + 0x16);
  *(undefined2 *)(iVar1 + 0x3e) = *(undefined2 *)((int)param_2 + 0x1a);
  return;
}



void fn_003692d4(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar8 = *(uint *)(param_1 + 0x1c);
  if (uVar3 != uVar8) {
    uVar1 = uVar3;
    if (uVar8 <= uVar3) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar8);
    }
    *(uint *)(param_1 + 0x1c) = uVar8 - (uVar8 - uVar3 & 0xfffffffc);
  }
  puVar11 = (undefined4 *)*param_2;
  if ((undefined4 *)param_2[1] != puVar11) {
    do {
      puVar9 = *(undefined4 **)(param_1 + 0x1c);
      puVar10 = (uint *)(param_1 + 0x18);
      if (puVar9 == *(undefined4 **)(param_1 + 0x20)) {
        uVar3 = (int)((int)puVar9 - *puVar10) >> 2;
        if (uVar3 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x20) - *puVar10) >> 2)) {
          *(undefined4 **)(param_1 + 0x1c) = puVar9 + 1;
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = puVar9[-1];
          }
          puVar5 = puVar9 + -1;
          puVar6 = puVar9;
          if (puVar9 < puVar5) {
            iVar4 = (int)puVar5 - (int)puVar9;
            if (0 < iVar4) {
              if (iVar4 * 0x20000000 < 0) {
                puVar5 = puVar9 + -2;
                puVar6 = puVar9 + -1;
                *puVar6 = *puVar5;
              }
              for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
                puVar6[-1] = puVar5[-1];
                puVar5 = puVar5 + -2;
                puVar6 = puVar6 + -2;
                *puVar6 = *puVar5;
              }
            }
          }
          else {
            while (puVar9 != puVar5) {
              puVar5 = puVar5 + -1;
              puVar6[-1] = *puVar5;
              puVar6 = puVar6 + -1;
            }
          }
          *puVar9 = *puVar11;
        }
        else {
          uVar8 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
          if (uVar8 < uVar3 + 0x20) {
            uVar8 = uVar3 + 0x20;
          }
          puVar2 = (undefined4 *)fn_00100fc6(uVar8 << 2,0);
          puVar6 = puVar2;
          for (puVar5 = (undefined4 *)*puVar10; puVar5 != puVar9; puVar5 = puVar5 + 1) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar5;
            }
            puVar6 = puVar6 + 1;
          }
          puVar5 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar2);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar11;
          }
          puVar6 = *(undefined4 **)(param_1 + 0x1c);
          puVar5 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar2);
          for (; puVar9 != puVar6; puVar9 = puVar9 + 1) {
            puVar5 = puVar5 + 1;
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar9;
            }
          }
          uVar1 = *puVar10;
          uVar7 = *(uint *)(param_1 + 0x1c);
          uVar3 = uVar1;
          if (uVar7 < uVar1) {
            do {
              uVar3 = uVar3 + 4;
            } while (uVar3 != uVar7);
          }
          fn_001008c4(uVar1,(int)(*(int *)(param_1 + 0x20) - uVar1) >> 2,0);
          *(undefined4 **)(param_1 + 0x20) = puVar2 + uVar8;
          *(undefined4 **)(param_1 + 0x1c) = puVar2 + ((int)(uVar7 - uVar1) >> 2) + 1;
          *puVar10 = (uint)puVar2;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x1c) = puVar9 + 1;
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = *puVar11;
        }
      }
      puVar11 = puVar11 + 1;
    } while ((undefined4 *)param_2[1] != puVar11);
  }
  return;
}



void fn_003692c0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  
  *(undefined4 *)(*(int *)(param_1 + 0x188) + 0x10) = param_2;
  iVar1 = *(int *)(param_1 + 0x188);
  uVar4 = *(uint *)(iVar1 + 0x18);
  uVar9 = *(uint *)(iVar1 + 0x1c);
  if (uVar4 != uVar9) {
    uVar2 = uVar4;
    if (uVar9 <= uVar4) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar9);
    }
    *(uint *)(iVar1 + 0x1c) = uVar9 - (uVar9 - uVar4 & 0xfffffffc);
  }
  puVar12 = (undefined4 *)*param_3;
  if ((undefined4 *)param_3[1] != puVar12) {
    do {
      puVar10 = *(undefined4 **)(iVar1 + 0x1c);
      puVar11 = (uint *)(iVar1 + 0x18);
      if (puVar10 == *(undefined4 **)(iVar1 + 0x20)) {
        uVar4 = (int)((int)puVar10 - *puVar11) >> 2;
        if (uVar4 < (uint)((int)((int)*(undefined4 **)(iVar1 + 0x20) - *puVar11) >> 2)) {
          *(undefined4 **)(iVar1 + 0x1c) = puVar10 + 1;
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = puVar10[-1];
          }
          puVar6 = puVar10 + -1;
          puVar7 = puVar10;
          if (puVar10 < puVar6) {
            iVar5 = (int)puVar6 - (int)puVar10;
            if (0 < iVar5) {
              if (iVar5 * 0x20000000 < 0) {
                puVar6 = puVar10 + -2;
                puVar7 = puVar10 + -1;
                *puVar7 = *puVar6;
              }
              for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar7[-1] = puVar6[-1];
                puVar6 = puVar6 + -2;
                puVar7 = puVar7 + -2;
                *puVar7 = *puVar6;
              }
            }
          }
          else {
            while (puVar10 != puVar6) {
              puVar6 = puVar6 + -1;
              puVar7[-1] = *puVar6;
              puVar7 = puVar7 + -1;
            }
          }
          *puVar10 = *puVar12;
        }
        else {
          uVar9 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
          if (uVar9 < uVar4 + 0x20) {
            uVar9 = uVar4 + 0x20;
          }
          puVar3 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
          puVar7 = puVar3;
          for (puVar6 = (undefined4 *)*puVar11; puVar6 != puVar10; puVar6 = puVar6 + 1) {
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = *puVar6;
            }
            puVar7 = puVar7 + 1;
          }
          puVar6 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar12;
          }
          puVar7 = *(undefined4 **)(iVar1 + 0x1c);
          puVar6 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
          for (; puVar10 != puVar7; puVar10 = puVar10 + 1) {
            puVar6 = puVar6 + 1;
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar10;
            }
          }
          uVar2 = *puVar11;
          uVar8 = *(uint *)(iVar1 + 0x1c);
          uVar4 = uVar2;
          if (uVar8 < uVar2) {
            do {
              uVar4 = uVar4 + 4;
            } while (uVar4 != uVar8);
          }
          fn_001008c4(uVar2,(int)(*(int *)(iVar1 + 0x20) - uVar2) >> 2,0);
          *(undefined4 **)(iVar1 + 0x20) = puVar3 + uVar9;
          *(undefined4 **)(iVar1 + 0x1c) = puVar3 + ((int)(uVar8 - uVar2) >> 2) + 1;
          *puVar11 = (uint)puVar3;
        }
      }
      else {
        *(undefined4 **)(iVar1 + 0x1c) = puVar10 + 1;
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = *puVar12;
        }
      }
      puVar12 = puVar12 + 1;
    } while ((undefined4 *)param_3[1] != puVar12);
  }
  return;
}


