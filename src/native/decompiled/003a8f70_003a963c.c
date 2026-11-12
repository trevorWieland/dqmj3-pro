#include "003a8f70_003a963c.h"



void fn_003a963c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x86) == '\0') {
    iVar1 = fn_00174858(DAT_008977e4);
    iVar1 = *(int *)(iVar1 + 0x54);
    *(int *)(param_1 + 0x70) = iVar1;
    if (iVar1 != 0) {
      fn_00353a48();
    }
    if (*(int **)(param_1 + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x78) + 4))();
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    if (*(int **)(param_1 + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x74) + 4))();
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    iVar1 = 0x10;
    if (*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4) >> 2 != 0) {
      do {
        uVar5 = (uint)(char)((char)iVar1 + -0x10);
        uVar3 = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4) >> 2;
        if (uVar3 <= uVar5) {
          fn_002ff628(9,&DAT_008c764d,&DAT_008c764d,uVar5,uVar3);
        }
        piVar4 = *(int **)(*(int *)(param_1 + 0xd4) + uVar5 * 4);
        if ((char)piVar4[4] != '\0') {
          (**(code **)(*piVar4 + 0x14))(piVar4);
        }
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        iVar1 = (int)(char)((char)iVar1 + '\x01');
      } while (iVar1 - 0x10U < (uint)(*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4) >> 2));
    }
    uVar3 = *(uint *)(param_1 + 0xd4);
    uVar5 = *(uint *)(param_1 + 0xd8);
    if (uVar3 != uVar5) {
      uVar2 = uVar3;
      if (uVar5 <= uVar3) {
        do {
          uVar2 = uVar2 + 4;
        } while (uVar2 != uVar5);
      }
      *(uint *)(param_1 + 0xd8) = uVar5 - (uVar5 - uVar3 & 0xfffffffc);
    }
    piVar4 = *(int **)(param_1 + 200);
    if (piVar4 != (int *)0x0) {
      if (*(char *)(*(int *)(param_1 + 0xd0) + 0x10) != '\0') {
        (**(code **)(*piVar4 + 0x14))(piVar4);
      }
      if (*(int **)(param_1 + 200) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 200) + 4))();
        *(undefined4 *)(param_1 + 200) = 0;
      }
    }
    piVar4 = *(int **)(param_1 + 0xcc);
    if (piVar4 != (int *)0x0) {
      if (*(char *)(*(int *)(param_1 + 0xd0) + 0x10) != '\0') {
        (**(code **)(*piVar4 + 0x14))(piVar4);
      }
      if (*(int **)(param_1 + 0xcc) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xcc) + 4))();
        *(undefined4 *)(param_1 + 0xcc) = 0;
      }
    }
    piVar4 = *(int **)(param_1 + 0xd0);
    if (piVar4 != (int *)0x0) {
      if ((char)piVar4[4] != '\0') {
        (**(code **)(*piVar4 + 0x14))();
      }
      if (*(int **)(param_1 + 0xd0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xd0) + 4))();
        *(undefined4 *)(param_1 + 0xd0) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x86) = 1;
    if (*(int *)(param_1 + 0x88) != -1) {
      fn_0016a43c(*(undefined4 *)(param_1 + 0x68));
      *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
    }
    fn_003138d4(*(undefined4 *)(param_1 + 0x68),0);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2 != 0) {
      do {
        uVar5 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
        if (uVar5 <= uVar3) {
          fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,uVar3,uVar5);
        }
        fn_002feef8(*(undefined4 *)(*(int *)(param_1 + 0x98) + uVar3 * 4));
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2));
    }
    uVar3 = *(uint *)(param_1 + 0x98);
    uVar5 = *(uint *)(param_1 + 0x9c);
    if (uVar3 != uVar5) {
      uVar2 = uVar3;
      if (uVar5 <= uVar3) {
        do {
          uVar2 = uVar2 + 4;
        } while (uVar2 != uVar5);
      }
      *(uint *)(param_1 + 0x9c) = uVar5 - (uVar5 - uVar3 & 0xfffffffc);
    }
    uVar3 = *(uint *)(param_1 + 0x100);
    uVar5 = *(uint *)(param_1 + 0x104);
    if (uVar3 != uVar5) {
      uVar2 = uVar3;
      if (uVar5 <= uVar3) {
        do {
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar5);
      }
      *(uint *)(param_1 + 0x104) = uVar3;
    }
  }
  return;
}



void fn_003a8fa0(int param_1)

{
  uint uVar1;
  
  fn_003a58f4();
  fn_003a6ae8(param_1);
  fn_003541a0(*(undefined4 *)(param_1 + 0x70));
  if (*(int *)(param_1 + 0x74) != 0) {
    fn_005a9654();
  }
  if (*(char *)(param_1 + 0xe1) != '\0') {
    uVar1 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
    if (uVar1 < 6) {
      fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,5,uVar1);
    }
    if ((*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x98) + 0x14) + 4) + 0x44) & 1) != 0) {
      if ((char)(*(int **)(param_1 + 0xe4))[5] != '\0') {
        (**(code **)(**(int **)(param_1 + 0xe4) + 0xc))();
      }
    }
  }
  if (*(char *)(param_1 + 0xe2) != '\0') {
    uVar1 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
    if (uVar1 < 7) {
      fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,6,uVar1);
    }
    if ((*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x98) + 0x18) + 4) + 0x44) & 1) != 0) {
      if ((char)(*(int **)(param_1 + 0xe8))[5] != '\0') {
        (**(code **)(**(int **)(param_1 + 0xe8) + 0xc))();
      }
    }
  }
  if ((*(byte *)(*(int *)(param_1 + 0xf0) + 0x44) & 1) != 0) {
    (**(code **)(**(int **)(param_1 + 0xec) + 0xc))();
  }
  fn_0068a5a8(param_1);
  return;
}



undefined4 * fn_003a8f70(undefined4 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint local_28;
  uint local_24 [3];
  
  iVar2 = fn_00145b00(0x10c,&DAT_00812c8c);
  if (iVar2 == 0) {
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)fn_0068ab5c();
  puVar17 = (undefined4 *)0x0;
  *puVar3 = &PTR_FUN_0082dda8;
  if (param_1 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*param_1)(param_1);
    do {
      if (puVar4 == &DAT_00890360) goto LAB_003a9b08;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  param_1 = (undefined4 *)0x0;
LAB_003a9b08:
  puVar3[0x1a] = 0;
  puVar3[0x19] = param_1;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  *(undefined1 *)((int)puVar3 + 0x7d) = 0;
  *(undefined1 *)((int)puVar3 + 0x7e) = 0;
  *(undefined1 *)(puVar3 + 0x20) = 0;
  *(undefined1 *)((int)puVar3 + 0x83) = 0;
  *(undefined1 *)(puVar3 + 0x21) = 0;
  *(undefined1 *)((int)puVar3 + 0x86) = 0;
  puVar3[0x23] = 8;
  puVar3[0x24] = 0;
  puVar3[0x25] = 0;
  puVar3[0x26] = 0;
  puVar3[0x27] = 0;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x2e] = 0;
  puVar3[0x2f] = 0;
  puVar3[0x32] = 0;
  puVar3[0x33] = 0;
  puVar3[0x34] = 0;
  puVar3[0x35] = 0;
  puVar3[0x36] = 0;
  puVar3[0x37] = 0;
  *(undefined1 *)(puVar3 + 0x38) = 0;
  *(undefined1 *)((int)puVar3 + 0xe1) = 0;
  *(undefined1 *)((int)puVar3 + 0xe2) = 0;
  *(undefined1 *)((int)puVar3 + 0xe3) = 0;
  puVar3[0x39] = 0;
  puVar3[0x3a] = 0;
  puVar3[0x3b] = 0;
  puVar3[0x3c] = 0;
  puVar3[0x3d] = 0;
  puVar3[0x3e] = 0;
  puVar3[0x3f] = 0;
  puVar3[0x40] = 0;
  puVar3[0x41] = 0;
  puVar3[0x42] = 0;
  local_28 = 0xc;
  puVar18 = puVar3 + 0x26;
  if ((uint)((int)(puVar3[0x28] - puVar3[0x26]) >> 2) < 0xc) {
    uVar19 = (int)(puVar3[0x27] - puVar3[0x26]) >> 2;
    local_24[0] = uVar19 + (uVar19 >> 1) + (uVar19 >> 3);
    if (local_24[0] < uVar19 + 0x20) {
      local_24[0] = uVar19 + 0x20;
    }
    puVar8 = local_24;
    if (local_24[0] < 0xd) {
      puVar8 = &local_28;
    }
    uVar19 = *puVar8;
    puVar5 = (undefined4 *)fn_00100fc6(uVar19 << 2,0);
    puVar16 = (undefined4 *)puVar3[0x27];
    puVar12 = puVar5;
    for (puVar4 = (undefined4 *)*puVar18; puVar4 != puVar16; puVar4 = puVar4 + 1) {
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = *puVar4;
      }
      puVar12 = puVar12 + 1;
    }
    uVar6 = *puVar18;
    uVar7 = uVar6;
    if ((uint)puVar3[0x27] < uVar6) {
      do {
        uVar7 = uVar7 + 4;
      } while (uVar7 != puVar3[0x27]);
    }
    fn_001008c4(uVar6,(int)(puVar3[0x28] - uVar6) >> 2,0);
    uVar7 = *puVar18;
    *puVar18 = (uint)puVar5;
    puVar3[0x27] = (puVar3[0x27] - uVar7 & 0xfffffffc) + (int)puVar5;
    puVar3[0x28] = puVar5 + uVar19;
  }
  uVar7 = puVar3[0x41];
  uVar19 = puVar3[0x40];
  if (uVar19 != uVar7) {
    uVar6 = uVar19;
    if (uVar7 <= uVar19) {
      do {
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar7);
    }
    puVar3[0x41] = uVar19;
  }
  local_28 = 0xc;
  puVar18 = puVar3 + 0x40;
  if ((uint)(puVar3[0x42] - puVar3[0x40]) < 0xc) {
    uVar19 = puVar3[0x41] - puVar3[0x40];
    local_24[0] = uVar19 + (uVar19 >> 1) + (uVar19 >> 3);
    if (local_24[0] < uVar19 + 0x20) {
      local_24[0] = uVar19 + 0x20;
    }
    puVar8 = local_24;
    if (local_24[0] < 0xd) {
      puVar8 = &local_28;
    }
    uVar19 = *puVar8;
    puVar9 = (undefined1 *)fn_00100fc6(uVar19,0);
    puVar15 = (undefined1 *)puVar3[0x41];
    puVar10 = puVar9;
    for (puVar13 = (undefined1 *)*puVar18; puVar13 != puVar15; puVar13 = puVar13 + 1) {
      if (puVar10 != (undefined1 *)0x0) {
        *puVar10 = *puVar13;
      }
      puVar10 = puVar10 + 1;
    }
    uVar6 = *puVar18;
    uVar7 = uVar6;
    if ((uint)puVar3[0x41] < uVar6) {
      do {
        uVar7 = uVar7 + 1;
      } while (uVar7 != puVar3[0x41]);
    }
    fn_001008c4(uVar6,puVar3[0x42] - uVar6,0);
    uVar7 = *puVar18;
    puVar3[0x40] = puVar9;
    puVar3[0x41] = puVar9 + (puVar3[0x41] - uVar7);
    puVar3[0x42] = puVar9 + uVar19;
  }
  puVar3[0x22] = 0xffffffff;
  *(undefined1 *)(puVar3 + 0x1f) = 0;
  *(undefined1 *)((int)puVar3 + 0x7d) = 0x10;
  *(undefined1 *)((int)puVar3 + 0x7e) = 0x10;
  *(undefined1 *)((int)puVar3 + 0x7f) = 0;
  puVar3[0x1a] = *(undefined4 *)(puVar3[0x19] + 0x2c);
  iVar2 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar11 = (int *)0x0;
  if (iVar2 != 0) {
    piVar11 = (int *)fn_001caa80(iVar2,puVar3[0x19],0);
  }
  piVar14 = (int *)puVar3[0x1e];
  if (piVar14 != piVar11) {
    if (piVar14 != (int *)0x0) {
      (**(code **)(*piVar14 + 4))(piVar14);
    }
    puVar3[0x1e] = piVar11;
  }
  *(undefined4 **)(puVar3[0x1e] + 8) = puVar3;
  *(undefined1 *)(puVar3[0x1e] + 0x45) = 1;
  *(undefined1 *)(puVar3[0x1e] + 0x44) = 0;
  uVar1 = fn_00154ac8(0x3c);
  *(undefined1 *)((int)puVar3 + 0xe1) = uVar1;
  uVar1 = fn_00154ac8(0x38);
  *(undefined1 *)((int)puVar3 + 0xe2) = uVar1;
  puVar4 = (undefined4 *)fn_001f7510(puVar3,0x4a);
  if (puVar4 != (undefined4 *)0x0) {
    puVar12 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar12 == &DAT_008942e8) goto LAB_003a9ea4;
      puVar12 = (undefined4 *)*puVar12;
    } while (puVar12 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003a9ea4:
  puVar3[0x1b] = puVar4;
  puVar4 = (undefined4 *)fn_001f7510(puVar3,0xd6);
  if (puVar4 != (undefined4 *)0x0) {
    puVar12 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar12 == &DAT_00890728) {
        puVar17 = puVar4;
        break;
      }
      puVar12 = (undefined4 *)*puVar12;
    } while (puVar12 != (undefined4 *)0x0);
  }
  puVar3[0x3d] = puVar17;
  return puVar3;
}


