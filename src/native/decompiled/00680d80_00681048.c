#include "00680d80_00681048.h"



void fn_00681048(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  
  puVar9 = (uint *)(param_1 + 0x8c);
  puVar8 = *(undefined4 **)(param_1 + 0x90);
  if (puVar8 != *(undefined4 **)(param_1 + 0x94)) {
    *(undefined4 **)(param_1 + 0x90) = puVar8 + 1;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = param_2;
    }
    return;
  }
  uVar2 = (int)((int)puVar8 - *puVar9) >> 2;
  if (uVar2 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x94) - *puVar9) >> 2)) {
    *(undefined4 **)(param_1 + 0x90) = puVar8 + 1;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = puVar8[-1];
    }
    puVar5 = puVar8 + -1;
    puVar6 = puVar8;
    if (puVar8 < puVar5) {
      iVar3 = (int)puVar5 - (int)puVar8;
      if (0 < iVar3) {
        if (iVar3 * 0x20000000 < 0) {
          puVar5 = puVar8 + -2;
          puVar6 = puVar8 + -1;
          *puVar6 = *puVar5;
        }
        for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar6[-1] = puVar5[-1];
          puVar5 = puVar5 + -2;
          puVar6 = puVar6 + -2;
          *puVar6 = *puVar5;
        }
      }
    }
    else {
      while (puVar8 != puVar5) {
        puVar5 = puVar5 + -1;
        puVar6[-1] = *puVar5;
        puVar6 = puVar6 + -1;
      }
    }
    *puVar8 = param_2;
    return;
  }
  uVar4 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
  uVar10 = uVar2 + 0x20;
  if (uVar2 + 0x20 <= uVar4) {
    uVar10 = uVar4;
  }
  puVar1 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
  puVar6 = puVar1;
  for (puVar5 = (undefined4 *)*puVar9; puVar5 != puVar8; puVar5 = puVar5 + 1) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar5;
    }
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(((int)puVar8 - *puVar9 & 0xfffffffc) + (int)puVar1);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = param_2;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x90);
  puVar5 = (undefined4 *)(((int)puVar8 - *puVar9 & 0xfffffffc) + (int)puVar1);
  for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
    puVar5 = puVar5 + 1;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar8;
    }
  }
  uVar4 = *puVar9;
  uVar7 = *(uint *)(param_1 + 0x90);
  uVar2 = uVar4;
  if (uVar7 < uVar4) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != uVar7);
  }
  fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x94) - uVar4) >> 2,0);
  *(undefined4 **)(param_1 + 0x94) = puVar1 + uVar10;
  *(undefined4 **)(param_1 + 0x90) = puVar1 + ((int)(uVar7 - uVar4) >> 2) + 1;
  *puVar9 = (uint)puVar1;
  return;
}



void fn_00681040(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  
  iVar1 = *(int *)(param_1 + 0x14);
  puVar9 = (uint *)(iVar1 + 0x8c);
  puVar8 = *(undefined4 **)(iVar1 + 0x90);
  if (puVar8 != *(undefined4 **)(iVar1 + 0x94)) {
    *(undefined4 **)(iVar1 + 0x90) = puVar8 + 1;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = param_2;
    }
    return;
  }
  uVar3 = (int)((int)puVar8 - *puVar9) >> 2;
  if (uVar3 < (uint)((int)((int)*(undefined4 **)(iVar1 + 0x94) - *puVar9) >> 2)) {
    *(undefined4 **)(iVar1 + 0x90) = puVar8 + 1;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = puVar8[-1];
    }
    puVar5 = puVar8 + -1;
    puVar6 = puVar8;
    if (puVar8 < puVar5) {
      iVar1 = (int)puVar5 - (int)puVar8;
      if (0 < iVar1) {
        if (iVar1 * 0x20000000 < 0) {
          puVar5 = puVar8 + -2;
          puVar6 = puVar8 + -1;
          *puVar6 = *puVar5;
        }
        for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
          puVar6[-1] = puVar5[-1];
          puVar5 = puVar5 + -2;
          puVar6 = puVar6 + -2;
          *puVar6 = *puVar5;
        }
      }
    }
    else {
      while (puVar8 != puVar5) {
        puVar5 = puVar5 + -1;
        puVar6[-1] = *puVar5;
        puVar6 = puVar6 + -1;
      }
    }
    *puVar8 = param_2;
    return;
  }
  uVar4 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
  uVar10 = uVar3 + 0x20;
  if (uVar3 + 0x20 <= uVar4) {
    uVar10 = uVar4;
  }
  puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
  puVar6 = puVar2;
  for (puVar5 = (undefined4 *)*puVar9; puVar5 != puVar8; puVar5 = puVar5 + 1) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar5;
    }
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(((int)puVar8 - *puVar9 & 0xfffffffc) + (int)puVar2);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = param_2;
  }
  puVar6 = *(undefined4 **)(iVar1 + 0x90);
  puVar5 = (undefined4 *)(((int)puVar8 - *puVar9 & 0xfffffffc) + (int)puVar2);
  for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
    puVar5 = puVar5 + 1;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar8;
    }
  }
  uVar4 = *puVar9;
  uVar7 = *(uint *)(iVar1 + 0x90);
  uVar3 = uVar4;
  if (uVar7 < uVar4) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != uVar7);
  }
  fn_001008c4(uVar4,(int)(*(int *)(iVar1 + 0x94) - uVar4) >> 2,0);
  *(undefined4 **)(iVar1 + 0x94) = puVar2 + uVar10;
  *(undefined4 **)(iVar1 + 0x90) = puVar2 + ((int)(uVar7 - uVar4) >> 2) + 1;
  *puVar9 = (uint)puVar2;
  return;
}



undefined4 * fn_00680e7c(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar9;
  undefined8 uVar7;
  longlong lVar8;
  float fVar10;
  undefined8 uVar11;
  undefined4 local_30;
  undefined4 *local_2c [5];
  
  bVar1 = false;
  iVar5 = **(int **)(param_1 + 0x18) + param_2 * 0x94;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 2 != 0) {
    do {
      iVar4 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      if (*(int *)(*(int *)(param_1 + 0x8c) + iVar4) == param_2) {
        bVar1 = true;
      }
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 2));
    if (bVar1) {
      return (undefined4 *)0x0;
    }
  }
  if ((*(char *)(*(int *)(param_1 + 0x70) + *(int *)(iVar5 + 0x78)) != '\x01') &&
     (*(char *)(*(int *)(param_1 + 0x7c) + *(int *)(iVar5 + 0x78)) != '\x01')) {
    uVar9 = 0;
    uVar7 = 0;
    fVar10 = 1.0;
    uVar11 = 0x3f800000;
    local_30 = 0;
    puVar3 = *(undefined4 **)(param_1 + 0x48);
    if ((int)*(undefined4 **)(param_1 + 0x4c) - (int)puVar3 >> 2 != 0 &&
        *(undefined4 **)(param_1 + 0x4c) != puVar3) {
      do {
        (*(code *)*puVar3)(&local_30,**(int **)(param_1 + 0x18) + *(int *)(param_1 + 0x58) * 0x94,
                           iVar5);
        fVar10 = (float)uVar11;
        uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
        puVar3 = puVar3 + 1;
      } while (*(undefined4 **)(param_1 + 0x4c) != puVar3);
    }
    lVar8 = CONCAT44(uVar9,local_30);
    fVar6 = (float)(int)*(float *)(param_3 + 0x14);
    iVar4 = (int)fVar6 + 1;
    local_2c[0] = (undefined4 *)fn_00145b00(0x1c,&DAT_00812c8c);
    if (local_2c[0] != (undefined4 *)0x0) {
      *local_2c[0] = *(undefined4 *)(param_1 + 0x68);
      local_2c[0][1] = iVar5;
      if (param_3 != 0) {
        fVar6 = *(float *)(param_3 + 8);
      }
      local_2c[0][3] = (int)lVar8;
      local_2c[0][4] = param_3;
      if (param_3 != 0) {
        lVar8 = (ulonglong)(uint)(fVar6 + fVar10) << 0x20;
      }
      uVar9 = VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      local_2c[0][5] = uVar9;
      *(undefined1 *)(local_2c[0] + 6) = 0;
      local_2c[0][2] = (int)((ulonglong)lVar8 >> 0x20);
      *(undefined1 *)((int)local_2c[0] + 0x19) = 0;
    }
    fn_00799c30(param_1,local_2c);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(undefined1 *)(*(int *)(iVar5 + 0x78) + *(int *)(param_1 + 0x70)) = 1;
    if (param_4 != 0) {
      *(undefined1 *)((int)local_2c[0] + 0x19) = 1;
    }
    if (*(int *)(iVar5 + 0x78) == *(int *)(param_1 + 0x58)) {
      return local_2c[0];
    }
  }
  return (undefined4 *)0x0;
}



undefined4 fn_00680d80(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  piVar4 = (int *)*param_1;
  piVar7 = (int *)param_1[1];
  if (piVar7 != piVar4) {
    piVar2 = piVar4;
    do {
      if (*(int *)*piVar2 == *param_2) {
        if (piVar4 != piVar7) {
          if (piVar2 + 1 != piVar7) {
            piVar4 = piVar2 + 1;
            piVar3 = piVar2;
            if (piVar4 < piVar7) {
              uVar6 = (int)piVar7 - (int)piVar4;
              if (0 < (int)uVar6) {
                uVar8 = (uVar6 & 7) >> 2;
                if (uVar8 != 0) {
                  *piVar2 = *piVar4;
                }
                uVar5 = (uint)(uVar8 != 0);
                for (; (int)uVar8 < (int)uVar6 >> 2; uVar8 = uVar8 + 2) {
                  piVar2[uVar5] = piVar4[uVar5];
                  piVar2[uVar5 + 1] = piVar4[uVar5 + 1];
                  uVar5 = uVar5 + 2;
                }
              }
            }
            else {
              do {
                piVar1 = piVar4 + 1;
                *piVar3 = *piVar4;
                piVar4 = piVar1;
                piVar3 = piVar3 + 1;
              } while (piVar1 != piVar7);
            }
          }
          param_1[1] = param_1[1] + -4;
        }
        *(undefined1 *)(param_1[0x1c] + *(int *)(*(int *)(*piVar2 + 4) + 0x78)) = 0;
        return 1;
      }
      piVar2 = piVar2 + 1;
    } while (piVar7 != piVar2);
  }
  return 0;
}


