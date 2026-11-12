#include "004339ec_00433f60.h"



bool fn_00433f60(int param_1,int *param_2,int *param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  
  bVar5 = false;
  if (((*param_2 == 4) && (param_2[3] != 0)) && (*param_3 == 1 || *param_3 == 2)) {
    local_3c = (undefined4 *)0x0;
    local_38 = (undefined4 *)0x0;
    local_34 = (undefined4 *)0x0;
    local_3c = (undefined4 *)fn_00100fc6(0x80,0);
    iVar1 = 4;
    puVar3 = local_3c;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
      }
      iVar1 = iVar1 + -1;
      puVar3 = puVar3 + 1;
    } while (iVar1 != 0);
    local_38 = local_3c + 4;
    local_34 = local_3c + 0x20;
    if (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2 == 0) {
      fn_002ff628(9,&DAT_008c7655,&DAT_008c7655,0,0);
    }
    fn_0079e0cc(&local_30,**(int **)(param_1 + 0xa0) + 4);
    uVar2 = 0;
    if ((int)(local_2c - local_30) >> 2 != 0) {
      do {
        uVar4 = (int)(local_2c - local_30) >> 2;
        if (uVar4 <= uVar2) {
          fn_002ff628(9,&DAT_008c760d,&DAT_008c760d,uVar2,uVar4);
        }
        uVar4 = uVar2 + 1;
        local_3c[uVar2] = *(undefined4 *)(local_30 + uVar2 * 4);
        uVar2 = uVar4;
      } while (uVar4 < (uint)((int)(local_2c - local_30) >> 2));
    }
    if (param_3[3] != 0) {
      uVar4 = 0;
      uVar2 = (int)local_38 - (int)local_3c >> 2;
      if (uVar2 != 0) {
        do {
          if (local_3c[uVar4] == param_3[3]) {
            local_3c[uVar4] = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
    }
    if (param_2[3] != 0) {
      uVar4 = 0;
      uVar2 = (int)local_38 - (int)local_3c >> 2;
      if (uVar2 != 0) {
        do {
          if (local_3c[uVar4] == 0) {
            local_3c[uVar4] = param_2[3];
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
    }
    iVar1 = fn_002e84fc(param_2[3],&local_3c);
    bVar5 = iVar1 != 0;
    *param_4 = (char)iVar1;
    uVar2 = local_30;
    if (local_2c < local_30) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != local_2c);
    }
    fn_001008c4(local_30,(int)(local_28 - local_30) >> 2,0);
    puVar3 = local_3c;
    if (local_38 < local_3c) {
      do {
        puVar3 = puVar3 + 1;
      } while (puVar3 != local_38);
    }
    fn_001008c4(local_3c,(int)local_34 - (int)local_3c >> 2,0);
  }
  return bVar5;
}



/* WARNING: Removing unreachable block (ram,0x00433d60) */
/* WARNING: Removing unreachable block (ram,0x00433d6c) */
/* WARNING: Removing unreachable block (ram,0x00433d38) */
/* WARNING: Removing unreachable block (ram,0x00433d3c) */
/* WARNING: Removing unreachable block (ram,0x00433d40) */
/* WARNING: Removing unreachable block (ram,0x00433d44) */
/* WARNING: Removing unreachable block (ram,0x00433d48) */
/* WARNING: Removing unreachable block (ram,0x00433d88) */
/* WARNING: Removing unreachable block (ram,0x00433d98) */
/* WARNING: Removing unreachable block (ram,0x00433d70) */
/* WARNING: Removing unreachable block (ram,0x00433d78) */
/* WARNING: Removing unreachable block (ram,0x00433d7c) */
/* WARNING: Removing unreachable block (ram,0x00433d80) */

void fn_00433bb4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  uint local_30;
  uint local_2c [2];
  
  *(undefined1 *)(param_2 + 0x69) = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined1 *)(param_2 + 0x14) = 1;
  iVar1 = fn_002e8cf0();
  puVar2 = *(undefined4 **)(param_2 + 0xc);
  puVar7 = *(undefined4 **)(param_2 + 8);
  puVar13 = (uint *)(param_2 + 8);
  local_30 = (int)puVar2 - (int)puVar7 >> 2;
  if (local_30 < 4) {
    iVar14 = 4 - local_30;
    if (iVar14 != 0) {
      local_30 = iVar14 + local_30;
      if ((uint)(*(int *)(param_2 + 0x10) - (int)puVar7 >> 2) < local_30) {
        uVar6 = (int)(*(int *)(param_2 + 0xc) - *puVar13) >> 2;
        local_2c[0] = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
        if (local_2c[0] < uVar6 + 0x20) {
          local_2c[0] = uVar6 + 0x20;
        }
        puVar8 = local_2c;
        if (local_2c[0] <= local_30) {
          puVar8 = &local_30;
        }
        uVar6 = *puVar8;
        puVar3 = (undefined4 *)fn_00100fc6(uVar6 << 2,0);
        puVar10 = puVar3;
        for (puVar7 = (undefined4 *)*puVar13; puVar7 != puVar2; puVar7 = puVar7 + 1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = *puVar7;
          }
          puVar10 = puVar10 + 1;
        }
        puVar7 = (undefined4 *)(((int)puVar2 - *puVar13 & 0xfffffffc) + (int)puVar3);
        for (iVar9 = iVar14; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0;
          }
          puVar7 = puVar7 + 1;
        }
        puVar10 = *(undefined4 **)(param_2 + 0xc);
        puVar7 = puVar3 + iVar14 + ((int)((int)puVar2 - *puVar13) >> 2);
        for (; puVar2 != puVar10; puVar2 = puVar2 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar2;
          }
          puVar7 = puVar7 + 1;
        }
        uVar4 = *puVar13;
        uVar11 = *(uint *)(param_2 + 0xc);
        uVar5 = uVar4;
        if (uVar11 < uVar4) {
          do {
            uVar5 = uVar5 + 4;
          } while (uVar5 != uVar11);
        }
        fn_001008c4(uVar4,(int)(*(int *)(param_2 + 0x10) - uVar4) >> 2,0);
        *(undefined4 **)(param_2 + 0x10) = puVar3 + uVar6;
        *(undefined4 **)(param_2 + 0xc) = puVar3 + ((int)(uVar11 - uVar4) >> 2) + iVar14;
        *puVar13 = (uint)puVar3;
      }
      else {
        puVar7 = puVar2 + iVar14;
        *(undefined4 **)(param_2 + 0xc) = puVar2 + iVar14;
        if (puVar7 < puVar2) {
          puVar12 = puVar2 + -iVar14;
          puVar3 = puVar2;
          for (puVar10 = puVar12; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = *puVar10;
            }
            puVar3 = puVar3 + 1;
          }
          puVar10 = puVar2;
          if (puVar2 < puVar12) {
            iVar14 = (int)puVar12 - (int)puVar2;
            if (0 < iVar14) {
              if (iVar14 * 0x20000000 < 0) {
                puVar12 = puVar12 + -1;
                puVar10 = puVar2 + -1;
                *puVar10 = *puVar12;
              }
              for (iVar14 = iVar14 >> 3; iVar14 != 0; iVar14 = iVar14 + -1) {
                puVar10[-1] = puVar12[-1];
                puVar12 = puVar12 + -2;
                puVar10 = puVar10 + -2;
                *puVar10 = *puVar12;
              }
            }
          }
          else {
            while (puVar2 != puVar12) {
              puVar12 = puVar12 + -1;
              puVar10[-1] = *puVar12;
              puVar10 = puVar10 + -1;
            }
          }
          if (puVar2 < puVar7) {
            iVar14 = (int)puVar7 - (int)puVar2;
            if (0 < iVar14) {
              puVar7 = puVar2;
              if (iVar14 * 0x20000000 < 0) {
                puVar7 = puVar2 + 1;
                *puVar2 = 0;
              }
              for (iVar14 = iVar14 >> 3; iVar14 != 0; iVar14 = iVar14 + -1) {
                puVar2 = puVar7 + 1;
                *puVar7 = 0;
                puVar7 = puVar7 + 2;
                *puVar2 = 0;
              }
            }
          }
          else {
            for (; puVar2 != puVar7; puVar2 = puVar2 + 1) {
              *puVar2 = 0;
            }
          }
        }
        else {
          for (; iVar14 != 0; iVar14 = iVar14 + -1) {
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = 0;
            }
            puVar2 = puVar2 + 1;
          }
        }
      }
    }
  }
  else if ((4 < local_30) && (puVar10 = puVar7 + 4, puVar7 != puVar2)) {
    puVar7 = puVar10;
    if (puVar2 < puVar10) {
      do {
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar2);
    }
    *(uint *)(param_2 + 0xc) = (int)puVar2 - ((int)puVar2 - (int)puVar10 & 0xfffffffcU);
  }
  uVar6 = 0;
  if (*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 2 != 0) {
    do {
      *(undefined4 *)(*(int *)(param_2 + 8) + uVar6 * 4) =
           *(undefined4 *)(iVar1 + 0x150 + uVar6 * 0xf0);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 2));
  }
  return;
}



void fn_004339ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_28;
  uint uStack_24;
  int local_20;
  
  fn_00445904(*(undefined4 *)(param_1 + 0x110));
  fn_0058c9a8(*(undefined4 *)(param_1 + 0x110),&DAT_00433ae4);
  iVar1 = fn_002c11d0(param_1,1,0);
  iVar6 = -1;
  iVar7 = -1;
  iVar5 = 0;
  fn_0079e0cc(&local_28,iVar1 + 4);
  iVar1 = 0;
  do {
    if (*(int *)(local_28 + iVar1 * 4) != 0) {
      uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      fn_00445884(*(undefined4 *)(param_1 + 0x110),uVar2);
      iVar3 = *(int *)(local_28 + iVar1 * 4);
      if (iVar3 == *(int *)(param_1 + 0xf4)) {
        iVar6 = iVar5;
      }
      else if (iVar3 == *(int *)(param_1 + 0xf8)) {
        iVar7 = iVar5;
      }
      iVar5 = iVar5 + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  *(int *)(*(int *)(param_1 + 0x110) + 0x3f0) = iVar6;
  *(int *)(*(int *)(param_1 + 0x110) + 0x3f4) = iVar7;
  uVar4 = local_28;
  if (uStack_24 < local_28) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != uStack_24);
  }
  fn_001008c4(local_28,(int)(local_20 - local_28) >> 2,0);
  return;
}


