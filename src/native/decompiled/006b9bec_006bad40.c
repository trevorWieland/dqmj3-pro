#include "006b9bec_006bad40.h"



/* WARNING: Removing unreachable block (ram,0x006baf18) */
/* WARNING: Removing unreachable block (ram,0x006baf1c) */
/* WARNING: Removing unreachable block (ram,0x006baf20) */
/* WARNING: Removing unreachable block (ram,0x006baf24) */
/* WARNING: Removing unreachable block (ram,0x006baf28) */

uint fn_006bad40(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  
  if (*(uint *)(param_1 + 0x60) < 0x80000000) {
    return *(uint *)(param_1 + 0x60);
  }
  iVar1 = fn_00163d44(0x3c);
  if (iVar1 == 0) {
    iVar1 = 1;
    fn_00163d68(0x3c,1);
  }
  puVar7 = (uint *)0x0;
  puVar8 = (uint *)0x0;
  iVar11 = 100;
  puVar10 = (uint *)0x0;
  uVar9 = 0;
  puVar5 = puVar7;
  if (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 100) >> 3 != 0) {
    do {
      iVar2 = fn_006b860c(*(undefined4 *)(DAT_00897804 + 0xc),
                           (int)*(short *)(*(int *)(param_1 + 100) + uVar9 * 8));
      if (iVar2 == 0) {
        if (puVar5 == puVar10) {
          uVar12 = (int)puVar5 - (int)puVar8 >> 2;
          if (uVar12 < (uint)((int)puVar10 - (int)puVar8 >> 2)) {
            puVar6 = puVar5 + -1;
            if (puVar5 != (uint *)0x0) {
              *puVar5 = puVar5[-1];
            }
            puVar7 = puVar5 + 1;
            puVar4 = puVar5;
            if (puVar5 < puVar6) {
              iVar2 = (int)puVar6 - (int)puVar5;
              if (0 < iVar2) {
                if (iVar2 * 0x20000000 < 0) {
                  puVar6 = puVar5 + -2;
                  puVar4 = puVar5 + -1;
                  *puVar4 = *puVar6;
                }
                for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
                  puVar4[-1] = puVar6[-1];
                  puVar6 = puVar6 + -2;
                  puVar4 = puVar4 + -2;
                  *puVar4 = *puVar6;
                }
              }
            }
            else {
              while (puVar5 != puVar6) {
                puVar6 = puVar6 + -1;
                puVar4[-1] = *puVar6;
                puVar4 = puVar4 + -1;
              }
            }
            *puVar5 = uVar9;
          }
          else {
            uVar3 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
            if (uVar3 < uVar12 + 0x20) {
              uVar3 = uVar12 + 0x20;
            }
            puVar4 = (uint *)fn_00100fc6(uVar3 << 2,0);
            puVar6 = puVar4;
            for (puVar7 = puVar8; puVar7 != puVar5; puVar7 = puVar7 + 1) {
              if (puVar6 != (uint *)0x0) {
                *puVar6 = *puVar7;
              }
              puVar6 = puVar6 + 1;
            }
            puVar7 = (uint *)((int)puVar4 + ((int)puVar5 - (int)puVar8 & 0xfffffffcU));
            if (puVar7 != (uint *)0x0) {
              *puVar7 = uVar9;
            }
            iVar2 = (int)puVar5 - (int)puVar8;
            puVar7 = puVar8;
            if (puVar5 <= puVar8) {
              for (; puVar7 != puVar5; puVar7 = puVar7 + 1) {
              }
            }
            fn_001008c4(puVar8,(int)puVar10 - (int)puVar8 >> 2,0);
            puVar8 = puVar4;
            puVar10 = puVar8 + uVar3;
            puVar7 = puVar8 + (iVar2 >> 2) + 1;
          }
        }
        else {
          puVar7 = puVar5 + 1;
          if (puVar5 != (uint *)0x0) {
            *puVar5 = uVar9;
          }
        }
      }
      else {
        iVar11 = (int)(short)((short)iVar11 -
                             (ushort)*(byte *)(*(int *)(param_1 + 100) + uVar9 * 8 + iVar1 + -1 + 4)
                             );
        puVar7 = puVar5;
      }
      uVar9 = uVar9 + 1;
      puVar5 = puVar7;
    } while (uVar9 < (uint)(*(int *)(param_1 + 0x68) - *(int *)(param_1 + 100) >> 3));
  }
  iVar11 = fn_00163868(iVar11);
  uVar9 = 0;
  if ((int)puVar7 - (int)puVar8 >> 2 != 0) {
    do {
      uVar12 = (int)puVar7 - (int)puVar8 >> 2;
      if (uVar12 <= uVar9) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar9,uVar12);
      }
      uVar12 = puVar8[uVar9];
      iVar11 = iVar11 - (uint)*(byte *)(*(int *)(param_1 + 100) + uVar12 * 8 + iVar1 + -1 + 4);
      puVar5 = puVar8;
      if (iVar11 < 0) {
        for (; puVar5 != puVar7; puVar5 = puVar5 + 1) {
        }
        fn_001008c4(puVar8,(int)puVar10 - (int)puVar8 >> 2,0);
        return uVar12;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((int)puVar7 - (int)puVar8 >> 2));
  }
  puVar5 = puVar8;
  if (puVar7 < puVar8) {
    do {
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar7);
  }
  fn_001008c4(puVar8,(int)puVar10 - (int)puVar8 >> 2,0);
  return 0xffffffff;
}



undefined4 fn_006b9bec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  puVar3 = &local_28;
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2 == 0) {
    uVar2 = fn_006b98d0(param_1);
    return uVar2;
  }
  local_14 = 0;
  local_1c = 0;
  local_18 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  iVar1 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ec);
  if ((0 < iVar1) &&
     (iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c)), iVar1 == 7 || iVar1 == 10)) {
    fn_006b99f0(param_1,&local_28);
    iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
    if (iVar1 == 10) {
      if ((int)(local_24 - local_28) >> 2 == 0) {
        uVar2 = fn_006b98d0(param_1);
        uVar4 = local_28;
        if (local_24 < local_28) {
          do {
            uVar4 = uVar4 + 4;
          } while (uVar4 != local_24);
        }
        fn_001008c4(local_28,(int)(local_20 - local_28) >> 2,0);
        uVar4 = local_1c;
        if (local_18 < local_1c) {
          do {
            uVar4 = uVar4 + 4;
          } while (uVar4 != local_18);
        }
      }
      else {
        uVar2 = fn_006b9608(param_1,&local_28);
        uVar4 = local_28;
        if (local_24 < local_28) {
          do {
            uVar4 = uVar4 + 4;
          } while (uVar4 != local_24);
        }
        fn_001008c4(local_28,(int)(local_20 - local_28) >> 2,0);
        uVar4 = local_1c;
        if (local_18 < local_1c) {
          do {
            uVar4 = uVar4 + 4;
          } while (uVar4 != local_18);
        }
      }
      goto LAB_006b9e88;
    }
  }
  fn_006b9768(param_1,&local_1c);
  if ((int)(local_18 - local_1c) >> 2 == 0) {
    uVar2 = fn_006b98d0(param_1);
    uVar4 = local_28;
    if (local_24 < local_28) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != local_24);
    }
    fn_001008c4(local_28,(int)(local_20 - local_28) >> 2,0);
    uVar4 = local_1c;
    if (local_18 < local_1c) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != local_18);
    }
  }
  else {
    iVar1 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ec);
    if (((iVar1 < 1) ||
        (iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c)), iVar1 != 7 && iVar1 != 10)) ||
       (iVar1 = fn_00163868(2), iVar1 != 1)) {
      puVar3 = &local_1c;
    }
    uVar2 = fn_006b9608(param_1,puVar3);
    uVar4 = local_28;
    if (local_24 < local_28) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != local_24);
    }
    fn_001008c4(local_28,(int)(local_20 - local_28) >> 2,0);
    uVar4 = local_1c;
    if (local_18 < local_1c) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != local_18);
    }
  }
LAB_006b9e88:
  fn_001008c4(local_1c,(int)(local_14 - local_1c) >> 2,0);
  return uVar2;
}


