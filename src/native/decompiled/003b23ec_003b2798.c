#include "003b23ec_003b2798.h"



void fn_003b2798(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *unaff_r7;
  undefined4 *puVar14;
  bool bVar15;
  
  uVar13 = 0;
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar3 = iVar1 >> 0x1f;
  if (iVar1 / 0x28 + iVar3 == iVar3) {
    return;
  }
LAB_003b27d0:
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar3 = iVar1 >> 0x1f;
  bVar15 = iVar1 / 0x28 + iVar3 == iVar3;
  if (!bVar15) {
    unaff_r7 = (uint *)(*(int *)(param_1 + 4) + uVar13 * 0x28);
    bVar15 = unaff_r7 == (uint *)0x0;
  }
  if (!bVar15) {
    uVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
    iVar3 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20);
    iVar1 = (iVar3 >> 6) - (iVar3 >> 0x1f);
    if (0 < iVar1) {
      iVar3 = *(int *)(param_1 + 0x10);
    }
    iVar8 = 0;
    if (0 < iVar1) {
      do {
        if (*(short *)(iVar3 + iVar8 * 0x5c) == (short)unaff_r7[2]) {
          iVar3 = iVar3 + iVar8 * 0x5c;
          if (iVar3 != 0) {
            uVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
            iVar8 = (int)((longlong)(int)uVar2 * -0x7bdef7bd + ((ulonglong)uVar2 << 0x20) >> 0x20);
            iVar1 = iVar8 >> 6;
            iVar8 = iVar1 - (iVar8 >> 0x1f);
            if (0 < iVar8) {
              iVar1 = *(int *)(param_1 + 0x1c);
            }
            iVar4 = 0;
            if (0 < iVar8) goto LAB_003b2878;
          }
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
    }
  }
  goto LAB_003b2aac;
  while (iVar4 = iVar4 + 1, iVar4 < iVar8) {
LAB_003b2878:
    if (*(short *)(iVar1 + iVar4 * 0x7c) == *(short *)(iVar3 + 0xc)) {
      iVar3 = iVar4 * 0x1f;
      iVar1 = iVar1 + iVar4 * 0x7c;
      if (iVar1 != 0) {
        iVar3 = (int)*(short *)(iVar1 + 4);
      }
      if ((iVar1 != 0 && iVar3 != 0) && (iVar3 = fn_002aae50(), iVar3 != 0)) {
        puVar14 = *(undefined4 **)(param_1 + 0x38);
        uVar5 = CONCAT22(*(undefined2 *)(iVar1 + 4),*(undefined2 *)((int)unaff_r7 + 10));
        unaff_r7 = (uint *)(param_1 + 0x34);
        if (puVar14 == *(undefined4 **)(param_1 + 0x3c)) {
          uVar2 = (int)((int)puVar14 - *unaff_r7) >> 2;
          if (uVar2 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x3c) - *unaff_r7) >> 2)) {
            *(undefined4 **)(param_1 + 0x38) = puVar14 + 1;
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = puVar14[-1];
            }
            puVar10 = puVar14 + -1;
            puVar11 = puVar14;
            if (puVar14 < puVar10) {
              iVar3 = (int)puVar10 - (int)puVar14;
              if (0 < iVar3) {
                if (iVar3 * 0x20000000 < 0) {
                  puVar10 = puVar14 + -2;
                  puVar11 = puVar14 + -1;
                  *puVar11 = *puVar10;
                }
                for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
                  puVar11[-1] = puVar10[-1];
                  puVar10 = puVar10 + -2;
                  puVar11 = puVar11 + -2;
                  *puVar11 = *puVar10;
                }
              }
            }
            else {
              while (puVar14 != puVar10) {
                puVar10 = puVar10 + -1;
                puVar11[-1] = *puVar10;
                puVar11 = puVar11 + -1;
              }
            }
            *puVar14 = uVar5;
          }
          else {
            uVar9 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
            uVar6 = uVar2 + 0x20;
            if (uVar2 + 0x20 <= uVar9) {
              uVar6 = uVar9;
            }
            puVar7 = (undefined4 *)fn_00100fc6(uVar6 << 2,0);
            puVar11 = puVar7;
            for (puVar10 = (undefined4 *)*unaff_r7; puVar10 != puVar14; puVar10 = puVar10 + 1) {
              if (puVar11 != (undefined4 *)0x0) {
                *puVar11 = *puVar10;
              }
              puVar11 = puVar11 + 1;
            }
            puVar10 = (undefined4 *)((int)puVar7 + ((int)puVar14 - *unaff_r7 & 0xfffffffc));
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = uVar5;
            }
            puVar11 = *(undefined4 **)(param_1 + 0x38);
            puVar10 = (undefined4 *)((int)puVar7 + ((int)puVar14 - *unaff_r7 & 0xfffffffc));
            for (; puVar14 != puVar11; puVar14 = puVar14 + 1) {
              puVar10 = puVar10 + 1;
              if (puVar10 != (undefined4 *)0x0) {
                *puVar10 = *puVar14;
              }
            }
            uVar9 = *unaff_r7;
            uVar12 = *(uint *)(param_1 + 0x38);
            uVar2 = uVar9;
            if (uVar12 < uVar9) {
              do {
                uVar2 = uVar2 + 4;
              } while (uVar2 != uVar12);
            }
            fn_001008c4(uVar9,(int)(*(int *)(param_1 + 0x3c) - uVar9) >> 2,0);
            *(undefined4 **)(param_1 + 0x3c) = puVar7 + uVar6;
            *unaff_r7 = (uint)puVar7;
            *(undefined4 **)(param_1 + 0x38) = puVar7 + ((int)(uVar12 - uVar9) >> 2) + 1;
          }
        }
        else {
          *(undefined4 **)(param_1 + 0x38) = puVar14 + 1;
          if (puVar14 != (undefined4 *)0x0) {
            *puVar14 = uVar5;
          }
        }
      }
      break;
    }
  }
LAB_003b2aac:
  uVar13 = uVar13 + 1;
  if ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28) <= uVar13) {
    return;
  }
  goto LAB_003b27d0;
}



int fn_003b2730(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
  iVar3 = (int)((longlong)(int)uVar2 * -0x7bdef7bd + ((ulonglong)uVar2 << 0x20) >> 0x20);
  iVar3 = (iVar3 >> 6) - (iVar3 >> 0x1f);
  if (0 < iVar3) {
    param_1 = *(int *)(param_1 + 0x1c);
  }
  iVar1 = 0;
  if (0 < iVar3) {
    do {
      if (*(short *)(param_1 + iVar1 * 0x7c) == param_2) {
        return param_1 + iVar1 * 0x7c;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  return 0;
}



void fn_003b23ec(int param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 local_50;
  undefined2 local_4e;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30;
  undefined4 local_2c;
  
  fn_00158f6c(&local_50,0x28);
  local_50 = *param_2;
  local_4e = param_2[1];
  local_4c = param_2[2] != 0;
  local_4b = param_2[3] != 0;
  local_4a = param_2[4];
  local_48 = param_2[5];
  local_46 = param_2[6];
  local_44 = param_2[7];
  local_42 = param_2[8];
  local_40 = param_2[9];
  local_3e = *(undefined4 *)(param_2 + 10);
  local_3a = *(undefined4 *)(param_2 + 0xc);
  local_36 = param_2[0xe];
  local_34 = param_2[0xf];
  local_32 = param_2[0x10];
  local_30 = *(undefined4 *)(param_2 + 0x11);
  local_2c = *(undefined4 *)(param_2 + 0x13);
  uVar1 = *(uint *)(param_1 + 8);
  puVar4 = (uint *)(param_1 + 4);
  if (uVar1 == *(uint *)(param_1 + 0xc)) {
    uVar5 = (int)(uVar1 - *puVar4) / 0x28;
    if ((uint)((int)(*(uint *)(param_1 + 0xc) - *puVar4) / 0x28) <= uVar5) {
      uVar7 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (uVar7 < uVar5 + 0x20) {
        uVar7 = uVar5 + 0x20;
      }
      uVar3 = fn_00100fc6(uVar7 * 0x28,0);
      uVar2 = uVar3;
      for (uVar5 = *puVar4; uVar5 != uVar1; uVar5 = uVar5 + 0x28) {
        if (uVar2 != 0) {
          fn_00301a9c(uVar2,uVar5,0x28);
        }
        uVar2 = uVar2 + 0x28;
      }
      iVar6 = uVar3 + ((int)(uVar1 - *puVar4) / 0x28) * 0x28;
      if (iVar6 != 0) {
        fn_00301a9c(iVar6,&local_50);
      }
      uVar5 = *(uint *)(param_1 + 8);
      iVar6 = uVar3 + ((int)(uVar1 - *puVar4) / 0x28) * 0x28;
      for (; uVar1 != uVar5; uVar1 = uVar1 + 0x28) {
        iVar6 = iVar6 + 0x28;
        if (iVar6 != 0) {
          fn_00301a9c(iVar6,uVar1,0x28);
        }
      }
      uVar5 = *puVar4;
      uVar2 = *(uint *)(param_1 + 8);
      uVar1 = uVar5;
      if (uVar2 < uVar5) {
        do {
          uVar1 = uVar1 + 0x28;
        } while (uVar1 != uVar2);
      }
      fn_001008c4(uVar5,(int)(*(int *)(param_1 + 0xc) - uVar5) / 0x28,0);
      *puVar4 = uVar3;
      *(uint *)(param_1 + 8) = uVar3 + ((int)(uVar2 - uVar5) / 0x28) * 0x28 + 0x28;
      *(uint *)(param_1 + 0xc) = uVar3 + uVar7 * 0x28;
      return;
    }
    *(uint *)(param_1 + 8) = uVar1 + 0x28;
    if (uVar1 != 0) {
      fn_00301a9c(uVar1,uVar1 - 0x28,0x28);
    }
    uVar5 = uVar1 - 0x28;
    uVar7 = uVar1;
    if (uVar1 < uVar5) {
      if (0 < (int)(uVar5 - uVar1)) {
        uVar7 = (int)(uVar5 - uVar1) / 0x28;
        uVar2 = uVar1;
        if ((uVar7 & 1) != 0) {
          uVar5 = uVar1 - 0x50;
          uVar2 = uVar1 - 0x28;
          fn_00301a9c(uVar2,uVar5,0x28);
        }
        for (iVar6 = (int)uVar7 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          fn_00301a9c(uVar2 - 0x28,uVar5 - 0x28,0x28);
          uVar5 = uVar5 - 0x50;
          uVar2 = uVar2 - 0x50;
          fn_00301a9c(uVar2,uVar5,0x28);
        }
      }
    }
    else {
      while (uVar1 != uVar5) {
        uVar5 = uVar5 - 0x28;
        fn_00301a9c(uVar7 - 0x28,uVar5,0x28);
        uVar7 = uVar7 - 0x28;
      }
    }
  }
  else {
    *(uint *)(param_1 + 8) = uVar1 + 0x28;
    if (uVar1 == 0) {
      return;
    }
  }
  fn_00301a9c(uVar1,&local_50,0x28);
  return;
}


