#include "005c8018_005c8848.h"



void fn_005c8848(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



undefined4 fn_005c880c(undefined4 param_1)

{
  fn_005c8a6c();
  fn_005ce8b4(param_1);
  fn_005ceb40(param_1,0,0);
  fn_005cef64(param_1,0);
  return 1;
}



void fn_005c867c(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      if (*(uint *)(param_1 + 0xf8) == uVar3) {
        uVar1 = param_2[1] - *param_2 >> 3;
        if (uVar1 <= param_3) {
          fn_002ff628(9,&DAT_008c7605,&DAT_008c7605,param_3,uVar1);
        }
        if (*(short *)(*param_2 + param_3 * 8 + 6) != 0) {
          iVar4 = iVar4 + 1;
          uVar1 = param_2[1] - *param_2 >> 3;
          if (uVar1 <= param_3) {
            fn_002ff628(9,&DAT_008c7605,&DAT_008c7605,param_3,uVar1);
          }
          iVar2 = fn_00660c64((int)*(short *)(*param_2 + param_3 * 8 + 6));
          iVar5 = iVar5 + iVar2;
        }
      }
      else {
        uVar1 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 3;
        if (uVar1 <= uVar3) {
          fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar3,uVar1);
        }
        if (*(short *)(*(int *)(param_1 + 0xec) + uVar3 * 8 + 6) != 0) {
          iVar4 = iVar4 + 1;
          uVar1 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 3;
          if (uVar1 <= uVar3) {
            fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar3,uVar1);
          }
          iVar2 = fn_00660c64((int)*(short *)(*(int *)(param_1 + 0xec) + uVar3 * 8 + 6));
          iVar5 = iVar5 + iVar2;
        }
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_1 + 0xd8));
  }
  *(int *)(param_1 + 0xdc) = iVar4;
  *(int *)(param_1 + 0xe4) = iVar5;
  if (*(int *)(param_1 + 0xbc) != 0) {
    *(short *)(*(int *)(param_1 + 0xbc) + 0x2e) = (short)iVar5;
    *(short *)(*(int *)(param_1 + 0xbc) + 0x36) = (short)iVar4;
  }
  return;
}



void fn_005c8048(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 2;
      } while (uVar1 != uVar3);
    }
    *(uint *)(param_1 + 0x10) = uVar3 - (uVar3 - uVar2 & 0xfffffffe);
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar3 = *(uint *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar4 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar2 = uVar1;
  if (uVar3 < uVar1) {
    do {
      uVar2 = uVar2 + 0x104;
    } while (uVar2 != uVar3);
  }
  fn_001008c4(uVar1,(int)(iVar4 - uVar1) / 0x104,0);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x005c83e4) */
/* WARNING: Removing unreachable block (ram,0x005c83f0) */
/* WARNING: Removing unreachable block (ram,0x005c83bc) */
/* WARNING: Removing unreachable block (ram,0x005c83c0) */
/* WARNING: Removing unreachable block (ram,0x005c83c4) */
/* WARNING: Removing unreachable block (ram,0x005c83c8) */
/* WARNING: Removing unreachable block (ram,0x005c83cc) */
/* WARNING: Removing unreachable block (ram,0x005c840c) */
/* WARNING: Removing unreachable block (ram,0x005c841c) */
/* WARNING: Removing unreachable block (ram,0x005c83f4) */
/* WARNING: Removing unreachable block (ram,0x005c83fc) */
/* WARNING: Removing unreachable block (ram,0x005c8400) */
/* WARNING: Removing unreachable block (ram,0x005c8404) */

undefined4 * fn_005c8018(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint local_28;
  uint local_24 [2];
  
  iVar1 = fn_00145b00(0x58,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0028e264(iVar1,param_1);
  *puVar2 = &DAT_0084afdc;
  *(undefined1 *)(puVar2 + 2) = 0;
  *(undefined1 *)((int)puVar2 + 9) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined1 *)((int)puVar2 + 0x4d) = 0;
  puVar2[0x15] = 0xffffffff;
  local_28 = 0x3ff;
  puVar16 = puVar2 + 3;
  if ((uint)((int)(puVar2[5] - puVar2[3]) >> 1) < 0x3ff) {
    uVar18 = (int)(puVar2[4] - puVar2[3]) >> 1;
    local_24[0] = uVar18 + (uVar18 >> 1) + (uVar18 >> 3);
    if (local_24[0] < uVar18 + 0x20) {
      local_24[0] = uVar18 + 0x20;
    }
    puVar3 = local_24;
    if (local_24[0] < 0x400) {
      puVar3 = &local_28;
    }
    uVar18 = *puVar3;
    puVar4 = (undefined2 *)fn_00100fc6(uVar18 << 1,0);
    puVar14 = (undefined2 *)puVar2[4];
    puVar5 = puVar4;
    for (puVar9 = (undefined2 *)*puVar16; puVar9 != puVar14; puVar9 = puVar9 + 1) {
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = *puVar9;
      }
      puVar5 = puVar5 + 1;
    }
    uVar6 = *puVar16;
    uVar7 = uVar6;
    if ((uint)puVar2[4] < uVar6) {
      do {
        uVar7 = uVar7 + 2;
      } while (uVar7 != puVar2[4]);
    }
    fn_001008c4(uVar6,(int)(puVar2[5] - uVar6) >> 1,0);
    uVar7 = *puVar16;
    puVar2[3] = puVar4;
    puVar2[4] = (puVar2[4] - uVar7 & 0xfffffffe) + (int)puVar4;
    puVar2[5] = puVar4 + uVar18;
  }
  puVar16 = puVar2 + 6;
  puVar8 = (undefined1 *)puVar2[7];
  puVar10 = (undefined1 *)puVar2[6];
  local_28 = (int)puVar8 - (int)puVar10;
  if (local_28 < 0x3ff) {
    iVar1 = 0x3ff - local_28;
    if (iVar1 != 0) {
      local_28 = local_28 + iVar1;
      if ((uint)(puVar2[8] - (int)puVar10) < local_28) {
        uVar18 = puVar2[7] - *puVar16;
        local_24[0] = uVar18 + (uVar18 >> 1) + (uVar18 >> 3);
        if (local_24[0] < uVar18 + 0x20) {
          local_24[0] = uVar18 + 0x20;
        }
        puVar3 = local_24;
        if (local_24[0] <= local_28) {
          puVar3 = &local_28;
        }
        uVar18 = *puVar3;
        puVar15 = (undefined1 *)fn_00100fc6(uVar18,0);
        puVar17 = puVar15;
        for (puVar10 = (undefined1 *)*puVar16; puVar10 != puVar8; puVar10 = puVar10 + 1) {
          if (puVar17 != (undefined1 *)0x0) {
            *puVar17 = *puVar10;
          }
          puVar17 = puVar17 + 1;
        }
        puVar10 = puVar15 + ((int)puVar8 - *puVar16);
        for (iVar12 = iVar1; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar10 != (undefined1 *)0x0) {
            *puVar10 = 0;
          }
          puVar10 = puVar10 + 1;
        }
        puVar17 = (undefined1 *)puVar2[7];
        puVar10 = puVar15 + (int)(puVar8 + (iVar1 - *puVar16));
        for (; puVar8 != puVar17; puVar8 = puVar8 + 1) {
          if (puVar10 != (undefined1 *)0x0) {
            *puVar10 = *puVar8;
          }
          puVar10 = puVar10 + 1;
        }
        uVar6 = *puVar16;
        uVar13 = puVar2[7];
        uVar7 = uVar6;
        if (uVar13 < uVar6) {
          do {
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar13);
        }
        fn_001008c4(uVar6,puVar2[8] - uVar6,0);
        *puVar16 = (uint)puVar15;
        puVar2[7] = puVar15 + iVar1 + (uVar13 - uVar6);
        puVar2[8] = puVar15 + uVar18;
      }
      else {
        puVar10 = puVar8 + iVar1;
        puVar2[7] = puVar8 + iVar1;
        if (puVar10 < puVar8) {
          puVar11 = puVar8 + -iVar1;
          puVar15 = puVar8;
          for (puVar17 = puVar11; puVar17 != puVar8; puVar17 = puVar17 + 1) {
            if (puVar15 != (undefined1 *)0x0) {
              *puVar15 = *puVar17;
            }
            puVar15 = puVar15 + 1;
          }
          puVar17 = puVar8;
          if (puVar8 < puVar11) {
            uVar18 = (int)puVar11 - (int)puVar8;
            if (0 < (int)uVar18) {
              if ((uVar18 & 1) != 0) {
                puVar11 = puVar11 + -1;
                puVar17 = puVar8 + -1;
                *puVar17 = *puVar11;
              }
              for (iVar1 = (int)uVar18 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
                puVar17[-1] = puVar11[-1];
                puVar11 = puVar11 + -2;
                puVar17 = puVar17 + -2;
                *puVar17 = *puVar11;
              }
            }
          }
          else {
            while (puVar8 != puVar11) {
              puVar11 = puVar11 + -1;
              puVar17[-1] = *puVar11;
              puVar17 = puVar17 + -1;
            }
          }
          if (puVar8 < puVar10) {
            uVar18 = (int)puVar10 - (int)puVar8;
            if (0 < (int)uVar18) {
              puVar10 = puVar8;
              if ((uVar18 & 1) != 0) {
                puVar10 = puVar8 + 1;
                *puVar8 = 0;
              }
              for (iVar1 = (int)uVar18 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
                puVar8 = puVar10 + 1;
                *puVar10 = 0;
                puVar10 = puVar10 + 2;
                *puVar8 = 0;
              }
            }
          }
          else {
            for (; puVar8 != puVar10; puVar8 = puVar8 + 1) {
              *puVar8 = 0;
            }
          }
        }
        else {
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            if (puVar8 != (undefined1 *)0x0) {
              *puVar8 = 0;
            }
            puVar8 = puVar8 + 1;
          }
        }
      }
    }
  }
  else if ((0x3ff < local_28) && (puVar17 = puVar10 + 0x3ff, puVar10 != puVar8)) {
    puVar10 = puVar17;
    if (puVar8 <= puVar17) {
      for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
      }
    }
    puVar2[7] = puVar17;
  }
  return puVar2;
}


