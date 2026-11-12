#include "0019e378_0019eb38aaa.h"



/* WARNING: Removing unreachable block (ram,0x0019e44c) */
/* WARNING: Removing unreachable block (ram,0x0019e524) */
/* WARNING: Removing unreachable block (ram,0x0019e534) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fn_0019e378(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  
  iVar16 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0x74) == '\x02') {
    fn_0019813c(param_2,(char *)&DAT_0019e7a4);
    return 0;
  }
  if (*(char *)(param_1 + 0x74) == '\0') {
    fn_0019813c(param_2,(char *)&DAT_0019e7bc);
    return 0;
  }
  iVar6 = *(int *)(param_2 + 0x30);
  iVar8 = *(int *)(param_2 + 0x34);
  if (*(int *)(param_2 + 100) == *(int *)(param_2 + 0x68)) {
    uVar7 = *(int *)(param_2 + 0x68) * 2;
    if (*(uint *)(param_2 + 0x74) < uVar7) {
      uVar17 = uVar7;
      if (uVar7 == 0) {
        uVar17 = 4;
      }
      uVar1 = fn_0018388c(*(undefined4 *)(param_2 + 0x6c),*(uint *)(param_2 + 0x74) * 0x30,
                           uVar17 * 0x30);
      *(undefined4 *)(param_2 + 0x6c) = uVar1;
      *(uint *)(param_2 + 0x74) = uVar17;
    }
    uVar17 = *(uint *)(param_2 + 0x70);
    if (uVar17 < uVar7) {
      do {
        puVar2 = (undefined4 *)(*(int *)(param_2 + 0x6c) + uVar17 * 0x30);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0x1000001;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
          puVar2[10] = 0;
          puVar2[0xb] = 0;
        }
        uVar17 = *(int *)(param_2 + 0x70) + 1;
        *(uint *)(param_2 + 0x70) = uVar17;
      } while (uVar17 < uVar7);
    }
    else {
      uVar11 = uVar7;
      if (uVar7 < uVar17) {
        do {
          iVar9 = *(int *)(param_2 + 0x6c) + uVar11 * 0x30;
          if (((*(uint *)(iVar9 + 8) & 0x8000000) != 0) &&
             (iVar13 = *(int *)(*(int *)(iVar9 + 0xc) + 4) + -1,
             *(int *)(*(int *)(iVar9 + 0xc) + 4) = iVar13, iVar13 == 0)) {
            (**(code **)(**(int **)(iVar9 + 0xc) + 8))();
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_2 + 0x70));
      }
      *(uint *)(param_2 + 0x70) = uVar7;
    }
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 0x6c);
    *(uint *)(param_2 + 0x68) = uVar7;
  }
  puVar2 = (undefined4 *)(*(int *)(param_2 + 0x60) + *(int *)(param_2 + 100) * 0x30);
  *(undefined4 **)(param_2 + 0x84) = puVar2;
  *puVar2 = *(undefined4 *)(param_1 + 0x38);
  puVar2[1] = *(undefined4 *)(param_1 + 0x3c);
  fn_0019e864(puVar2 + 2,param_1 + 0x40);
  puVar2[4] = *(undefined4 *)(param_1 + 0x48);
  puVar2[5] = *(undefined4 *)(param_1 + 0x4c);
  puVar2[6] = *(undefined4 *)(param_1 + 0x50);
  puVar2[7] = *(undefined4 *)(param_1 + 0x54);
  puVar2[8] = *(undefined4 *)(param_1 + 0x58);
  puVar2[9] = *(undefined4 *)(param_1 + 0x5c);
  puVar2[10] = *(undefined4 *)(param_1 + 0x60);
  iVar13 = 0;
  puVar2[0xb] = *(undefined4 *)(param_1 + 100);
  *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
  iVar9 = *(int *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(*(int *)(param_2 + 0x84) + 0x20) = param_3;
  *(int *)(*(int *)(param_2 + 0x84) + 0x10) = param_1;
  *(short *)(*(int *)(param_2 + 0x84) + 0x2c) = (short)*(undefined4 *)(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      piVar12 = (int *)(param_2 + 0x78);
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x6c) * 0x10 + -0x10);
      if (*(uint *)(param_2 + 0x80) <= *(uint *)(param_2 + 0x7c)) {
        iVar15 = *(uint *)(param_2 + 0x7c) << 1;
        if (iVar15 == 0) {
          iVar15 = 4;
        }
        iVar3 = fn_0018388c(*piVar12,*(uint *)(param_2 + 0x80) << 4);
        *piVar12 = iVar3;
        *(int *)(param_2 + 0x80) = iVar15;
      }
      iVar13 = iVar13 + 1;
      puVar4 = (undefined4 *)(*piVar12 + *(int *)(param_2 + 0x7c) * 0x10);
      *(int *)(param_2 + 0x7c) = *(int *)(param_2 + 0x7c) + 1;
      if (puVar4 != (undefined4 *)0x0) {
        uVar1 = puVar2[1];
        uVar10 = puVar2[2];
        uVar18 = puVar2[3];
        *puVar4 = *puVar2;
        puVar4[1] = uVar1;
        puVar4[2] = uVar10;
        puVar4[3] = uVar18;
      }
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
    } while (iVar13 < *(int *)(param_1 + 0x4c));
  }
  iVar13 = 0;
  if (0 < iVar16) {
    do {
      fn_0019e864(*(int *)(param_2 + 0x18) + (*(int *)(param_2 + 0x34) + iVar13) * 8,
                   *(int *)(param_1 + 0x20) + iVar13 * 8);
      fn_0019e864(*(undefined4 *)(param_1 + 0x20),&DAT_008c06e8);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar16);
  }
  while (*(int *)(param_1 + 0x30) != 0) {
    piVar12 = (int *)(param_2 + 0x24);
    puVar14 = (uint *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30) * 8 + -8);
    if (*(uint *)(param_2 + 0x2c) <= *(uint *)(param_2 + 0x28)) {
      iVar13 = *(uint *)(param_2 + 0x28) << 1;
      if (iVar13 == 0) {
        iVar13 = 4;
      }
      iVar15 = fn_0018388c(*piVar12,*(uint *)(param_2 + 0x2c) << 3,iVar13 << 3);
      *piVar12 = iVar15;
      *(int *)(param_2 + 0x2c) = iVar13;
    }
    puVar5 = (uint *)(*piVar12 + *(int *)(param_2 + 0x28) * 8);
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
    if (puVar5 != (uint *)0x0) {
      *puVar5 = *puVar14;
      uVar7 = puVar14[1];
      puVar5[1] = uVar7;
      if ((*puVar5 & 0x8000000) != 0) {
        *(int *)(uVar7 + 4) = *(int *)(uVar7 + 4) + 1;
      }
    }
    iVar13 = *(int *)(param_1 + 0x30) + -1;
    *(int *)(param_1 + 0x30) = iVar13;
    puVar14 = (uint *)(*(int *)(param_1 + 0x2c) + iVar13 * 8);
    if (((*puVar14 & 0x8000000) != 0) &&
       (iVar13 = *(int *)(puVar14[1] + 4) + -1, *(int *)(puVar14[1] + 4) = iVar13, iVar13 == 0)) {
      (**(code **)(*(int *)puVar14[1] + 8))();
    }
  }
  *(short *)(*(int *)(param_2 + 0x84) + 0x2e) =
       (short)*(undefined4 *)(param_2 + 0x28) - *(short *)(*(int *)(param_2 + 0x84) + 0x2c);
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x34) + iVar16;
  *(int *)(*(int *)(param_2 + 0x84) + 0x1c) = iVar6 - iVar8;
  *(int *)(*(int *)(param_2 + 0x84) + 0x18) = *(int *)(param_2 + 0x34) - iVar9;
  *(undefined1 *)(param_1 + 0x74) = 0;
  if ((*(int *)(param_2 + 0x50) != 0x1000001) &&
     (*(int *)(param_2 + 0x54) != *(int *)(*(int *)(param_2 + 0x84) + 0xc))) {
    fn_001a0d30(param_2,99,0);
  }
  return 1;
}


