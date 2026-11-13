#include "002b44c0_002b4c1c.h"



void fn_002b4c1c(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  do {
    uVar1 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],(&DAT_00893760)[iVar5],1);
    *(undefined4 *)(param_1[5] + iVar5 * 4) = uVar1;
    uVar1 = (**(code **)(*(int *)param_1[2] + 0x2c))
                      ((int *)param_1[2],(&PTR_s_tab_icon_00_00893770)[iVar5],1);
    *(undefined4 *)(param_1[10] + iVar5 * 4) = uVar1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  fn_002b4f00(param_1);
  (**(code **)(*param_1 + 0x28))(param_1,(char)param_1[0xd]);
  uVar2 = 0;
  if (param_1[0x11] + (param_1[0x10] - param_1[0xe] >> 2) * 0x20 != param_1[0xf]) {
    do {
      iVar5 = param_1[0xf] + uVar2;
      uVar4 = iVar5 % 0x20;
      puVar3 = (uint *)(param_1[0xe] + ((int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1b)) >> 5) * 4);
      if ((int)uVar4 < 0) {
        puVar3 = puVar3 + -1;
        uVar4 = uVar4 + 0x20;
      }
      bVar6 = (*puVar3 & 1 << (uVar4 & 0xff)) != 0;
      iVar5 = *(int *)(param_1[5] + uVar2 * 4);
      *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | bVar6;
      iVar5 = *(int *)(param_1[10] + uVar2 * 4);
      uVar2 = uVar2 + 1;
      *(byte *)(iVar5 + 0x44) = bVar6 | *(byte *)(iVar5 + 0x44) & 0xfe;
    } while (uVar2 < (uint)((param_1[0x11] + (param_1[0x10] - param_1[0xe] >> 2) * 0x20) -
                           param_1[0xf]));
  }
  return;
}



void fn_002b4a94(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0081ed38;
  fn_0013ae4c(param_1[0x30],*(undefined4 *)(param_1[1] + 8));
  if ((int *)param_1[0x31] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x31] + 4))();
  }
  if (param_1[0x30] != 0) {
    fn_002feef8(param_1[0x30]);
  }
  uVar1 = param_1[0x2a];
  uVar2 = uVar1;
  if ((uint)param_1[0x2b] <= uVar1) {
    for (; uVar2 != param_1[0x2b]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x2c] - uVar1) >> 2,0);
  uVar1 = param_1[0x27];
  uVar2 = uVar1;
  if ((uint)param_1[0x28] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x28]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x29] - uVar1) >> 2,0);
  uVar1 = param_1[0x24];
  uVar2 = uVar1;
  if ((uint)param_1[0x25] <= uVar1) {
    for (; uVar2 != param_1[0x25]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x26] - uVar1) >> 2,0);
  uVar1 = param_1[0x21];
  uVar2 = uVar1;
  if ((uint)param_1[0x22] <= uVar1) {
    for (; uVar2 != param_1[0x22]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x23] - uVar1) >> 2,0);
  uVar1 = param_1[0x1e];
  uVar2 = uVar1;
  if ((uint)param_1[0x1f] <= uVar1) {
    for (; uVar2 != param_1[0x1f]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x20] - uVar1) >> 2,0);
  fn_0069e808(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x002b48c0) */
/* WARNING: Removing unreachable block (ram,0x002b48cc) */
/* WARNING: Removing unreachable block (ram,0x002b4898) */
/* WARNING: Removing unreachable block (ram,0x002b489c) */
/* WARNING: Removing unreachable block (ram,0x002b48a0) */
/* WARNING: Removing unreachable block (ram,0x002b48a4) */
/* WARNING: Removing unreachable block (ram,0x002b48a8) */
/* WARNING: Removing unreachable block (ram,0x002b48e8) */
/* WARNING: Removing unreachable block (ram,0x002b48f8) */
/* WARNING: Removing unreachable block (ram,0x002b48d0) */
/* WARNING: Removing unreachable block (ram,0x002b48d8) */
/* WARNING: Removing unreachable block (ram,0x002b48dc) */
/* WARNING: Removing unreachable block (ram,0x002b48e0) */

undefined4 * fn_002b44c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint uVar15;
  uint in_stack_00000000;
  uint local_28;
  uint local_24;
  
  local_28 = in_stack_00000000;
  puVar1 = (undefined4 *)fn_0069e7cc();
  *puVar1 = &DAT_0081ed38;
  *(undefined2 *)(puVar1 + 5) = 0;
  *(undefined2 *)((int)puVar1 + 0x16) = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined1 *)((int)puVar1 + 0x19) = 0;
  *(undefined1 *)((int)puVar1 + 0x1a) = 0;
  *(undefined1 *)((int)puVar1 + 0x1b) = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  *(undefined1 *)((int)puVar1 + 0x1e) = 0;
  *(undefined1 *)((int)puVar1 + 0x1f) = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  *(undefined1 *)((int)puVar1 + 0x22) = 0;
  *(undefined1 *)((int)puVar1 + 0x23) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined1 *)((int)puVar1 + 0x25) = 0;
  *(undefined1 *)((int)puVar1 + 0x26) = 0;
  *(undefined1 *)((int)puVar1 + 0x27) = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  *(undefined1 *)((int)puVar1 + 0x29) = 0;
  *(undefined1 *)((int)puVar1 + 0x2a) = 0;
  *(undefined1 *)((int)puVar1 + 0x2b) = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  *(undefined1 *)((int)puVar1 + 0x2e) = 0;
  *(undefined1 *)((int)puVar1 + 0x2f) = 0;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  *(undefined1 *)((int)puVar1 + 0x31) = 1;
  *(undefined1 *)((int)puVar1 + 0x32) = 1;
  *(undefined1 *)((int)puVar1 + 0x33) = 1;
  *(undefined1 *)(puVar1 + 0xd) = 1;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  *(undefined1 *)((int)puVar1 + 0x36) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x37) = 0xff;
  *(undefined1 *)(puVar1 + 0xe) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x39) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x3a) = 0;
  *(undefined1 *)((int)puVar1 + 0x3b) = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  *(undefined1 *)((int)puVar1 + 0x3d) = 0;
  *(undefined1 *)((int)puVar1 + 0x3e) = 0;
  *(undefined1 *)((int)puVar1 + 0x3f) = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)((int)puVar1 + 0x41) = 0;
  *(undefined1 *)((int)puVar1 + 0x42) = 0;
  *(undefined1 *)((int)puVar1 + 0x43) = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((int)puVar1 + 0x45) = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00305898();
  }
  puVar1[0x30] = uVar3;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar14 = puVar1 + 0x1e;
  *(undefined1 *)(puVar1 + 0x34) = 0xff;
  local_28 = 4;
  if ((uint)((int)(puVar1[0x20] - puVar1[0x1e]) >> 2) < 4) {
    uVar15 = (int)(puVar1[0x1f] - puVar1[0x1e]) >> 2;
    local_24 = uVar15 + (uVar15 >> 1) + (uVar15 >> 3);
    if (local_24 < uVar15 + 0x20) {
      local_24 = uVar15 + 0x20;
    }
    puVar7 = &local_24;
    if (local_24 < 5) {
      puVar7 = &local_28;
    }
    uVar15 = *puVar7;
    puVar4 = (undefined4 *)fn_00100fc6(uVar15 << 2,0);
    puVar12 = (undefined4 *)puVar1[0x1f];
    puVar9 = puVar4;
    for (puVar8 = (undefined4 *)*puVar14; puVar8 != puVar12; puVar8 = puVar8 + 1) {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *puVar8;
      }
      puVar9 = puVar9 + 1;
    }
    uVar5 = *puVar14;
    uVar6 = uVar5;
    if ((uint)puVar1[0x1f] < uVar5) {
      do {
        uVar6 = uVar6 + 4;
      } while (uVar6 != puVar1[0x1f]);
    }
    fn_001008c4(uVar5,(int)(puVar1[0x20] - uVar5) >> 2,0);
    uVar6 = *puVar14;
    puVar1[0x1e] = puVar4;
    puVar1[0x1f] = (puVar1[0x1f] - uVar6 & 0xfffffffc) + (int)puVar4;
    puVar1[0x20] = puVar4 + uVar15;
  }
  puVar9 = (undefined4 *)puVar1[0x2b];
  puVar4 = (undefined4 *)puVar1[0x2a];
  puVar14 = puVar1 + 0x2a;
  puVar8 = (undefined4 *)((int)puVar9 - (int)puVar4);
  local_28 = (int)puVar8 >> 2;
  if (local_28 < 7) {
    iVar2 = 7 - local_28;
    if (iVar2 != 0) {
      local_28 = iVar2 + local_28;
      if ((uint)(puVar1[0x2c] - (int)puVar4 >> 2) < local_28) {
        uVar15 = (int)(puVar1[0x2b] - *puVar14) >> 2;
        local_24 = uVar15 + (uVar15 >> 1) + (uVar15 >> 3);
        if (local_24 < uVar15 + 0x20) {
          local_24 = uVar15 + 0x20;
        }
        puVar7 = &local_28;
        if (local_28 < local_24) {
          puVar7 = &local_24;
        }
        uVar15 = *puVar7;
        puVar12 = (undefined4 *)fn_00100fc6(uVar15 << 2,0);
        puVar4 = puVar12;
        for (puVar8 = (undefined4 *)*puVar14; puVar8 != puVar9; puVar8 = puVar8 + 1) {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar8;
          }
          puVar4 = puVar4 + 1;
        }
        puVar8 = (undefined4 *)(((int)puVar9 - *puVar14 & 0xfffffffc) + (int)puVar12);
        for (iVar10 = iVar2; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = 0;
          }
          puVar8 = puVar8 + 1;
        }
        puVar4 = (undefined4 *)puVar1[0x2b];
        puVar8 = puVar12 + iVar2 + ((int)((int)puVar9 - *puVar14) >> 2);
        for (; puVar9 != puVar4; puVar9 = puVar9 + 1) {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = *puVar9;
          }
          puVar8 = puVar8 + 1;
        }
        uVar11 = *puVar14;
        uVar5 = puVar1[0x2b];
        uVar6 = uVar11;
        if (uVar5 < uVar11) {
          do {
            uVar6 = uVar6 + 4;
          } while (uVar6 != uVar5);
        }
        fn_001008c4(uVar11,(int)(puVar1[0x2c] - uVar11) >> 2,0);
        puVar1[0x2c] = puVar12 + uVar15;
        puVar1[0x2b] = puVar12 + ((int)(uVar5 - uVar11) >> 2) + iVar2;
        *puVar14 = (uint)puVar12;
      }
      else {
        puVar8 = puVar9 + iVar2;
        puVar1[0x2b] = puVar9 + iVar2;
        if (puVar8 < puVar9) {
          puVar13 = puVar9 + -iVar2;
          puVar12 = puVar9;
          for (puVar4 = puVar13; puVar4 != puVar9; puVar4 = puVar4 + 1) {
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = *puVar4;
            }
            puVar12 = puVar12 + 1;
          }
          puVar4 = puVar9;
          if (puVar9 < puVar13) {
            if (0 < (int)puVar13 - (int)puVar9) {
              iVar2 = (int)puVar13 - (int)puVar9 >> 2;
              iVar10 = 0;
              do {
                iVar2 = iVar2 + -1;
                puVar9[iVar10 + -1] = puVar13[iVar10 + -1];
                iVar10 = iVar10 + -1;
              } while (iVar2 != 0);
            }
          }
          else {
            while (puVar9 != puVar13) {
              puVar13 = puVar13 + -1;
              puVar4[-1] = *puVar13;
              puVar4 = puVar4 + -1;
            }
          }
          if (puVar9 < puVar8) {
            iVar2 = (int)puVar8 - (int)puVar9;
            if (0 < iVar2) {
              puVar8 = puVar9;
              if (iVar2 * 0x20000000 < 0) {
                puVar8 = puVar9 + 1;
                *puVar9 = 0;
              }
              for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
                puVar9 = puVar8 + 1;
                *puVar8 = 0;
                puVar8 = puVar8 + 2;
                *puVar9 = 0;
              }
            }
          }
          else {
            for (; puVar9 != puVar8; puVar9 = puVar9 + 1) {
              *puVar9 = 0;
            }
          }
        }
        else {
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = 0;
            }
            puVar9 = puVar9 + 1;
          }
        }
      }
    }
  }
  else {
    if (local_28 != 7) {
      puVar8 = puVar4 + 7;
    }
    if (local_28 != 7 && puVar4 != puVar9) {
      puVar4 = puVar8;
      if (puVar9 < puVar8) {
        do {
          puVar4 = puVar4 + 1;
        } while (puVar4 != puVar9);
      }
      puVar1[0x2b] = (int)puVar9 - ((int)puVar9 - (int)puVar8 & 0xfffffffcU);
    }
  }
  return puVar1;
}


