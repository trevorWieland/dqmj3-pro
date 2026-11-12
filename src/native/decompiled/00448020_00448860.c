#include "00448020_00448860.h"



void fn_00448860(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x548);
  local_10 = 0;
  local_8 = 0;
  fn_002b1b78(*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xd8),&local_10);
  return;
}



void fn_004487d4(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float local_18;
  float local_14;
  float local_10;
  
  pfVar1 = (float *)fn_00242a10((int)(short)param_1[0x2a]);
  local_18 = *pfVar1;
  fVar2 = *(float *)(param_1[0x26] + 0x544);
  if (fVar2 <= local_18) {
    local_18 = pfVar1[1];
    if (local_18 <= fVar2) goto LAB_0044881c;
  }
  *(float *)(param_1[0x26] + 0x544) = local_18;
LAB_0044881c:
  (**(code **)(*param_1 + 0x138))(param_1);
  local_18 = local_18 * *(float *)(param_1[0x26] + 0x544);
  local_14 = local_18;
  local_10 = local_18;
  fn_002b1b20(param_1[0x37],param_1[0x36],&local_18);
  return;
}



void fn_00448770(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),(char *)&DAT_004487b8,1);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  *(byte *)(param_1 + 0xed) = param_2;
  return;
}



undefined4 fn_004484ac(int *param_1)

{
  int iVar1;
  
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_008953a0,DAT_008953a4,DAT_008953a8);
  fn_0031c790(param_1[0x25],0);
  iVar1 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),DAT_008953ac,1);
  param_1[0x3a] = iVar1;
  fn_00448558(param_1);
  iVar1 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),(char *)&DAT_004487b8,1);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  *(undefined1 *)((int)param_1 + 0xed) = 0;
  return 1;
}



void fn_00448558(int *param_1)

{
  int iVar1;
  int iVar2;
  float in_s0;
  undefined4 uVar3;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_1[0x36] != -1) {
    fn_002b1810(param_1[0x37]);
    param_1[0x36] = -1;
  }
  iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
  *(short *)(param_1 + 0x2a) = (short)iVar1;
  iVar2 = param_1[0x26];
  param_1[0x31] = *(int *)(iVar2 + 0xac);
  param_1[0x32] = *(int *)(iVar2 + 0xb0);
  param_1[0x33] = *(int *)(iVar2 + 0xb4);
  param_1[0x34] = *(int *)(iVar2 + 0xb8);
  *(undefined2 *)(param_1 + 0x35) = *(undefined2 *)(iVar2 + 0xbc);
  fn_0022cdb4(param_1,iVar1 != 0);
  if ((short)param_1[0x2a] != 0) {
    if (param_1[0x36] == -1) {
      iVar1 = (**(code **)(*param_1 + 300))(param_1,(int)(short)param_1[0x2a],param_1 + 0x31,0);
      param_1[0x36] = iVar1;
    }
    (**(code **)(*param_1 + 0x128))(param_1,(int)(short)param_1[0x2a]);
    in_s0 = in_s0 * 0.5;
    param_1[0x2b] = (int)in_s0;
    param_1[0x2c] = (int)in_s0;
    param_1[0x2d] = (int)in_s0;
    (**(code **)(*param_1 + 0x120))(param_1,(int)(short)param_1[0x2a]);
    param_1[0x2e] = (int)in_s0;
    (**(code **)(*param_1 + 0x124))(param_1,(int)(short)param_1[0x2a]);
    uVar3 = 0;
    param_1[0x2f] = (int)in_s0;
    param_1[0x30] = 0;
    iVar1 = param_1[0x3a];
    local_30 = *(float *)(iVar1 + 0x1c) + (float)param_1[0x2e] + DAT_008cbdbc;
    local_2c = *(float *)(iVar1 + 0x20) + (float)param_1[0x2f] + DAT_008cbdc0;
    local_28 = *(float *)(iVar1 + 0x24) + (float)param_1[0x30] + DAT_008cbdc4;
    fn_002b18e8(param_1[0x37],param_1[0x36],&local_30);
    fn_002b1b20(param_1[0x37],param_1[0x36],param_1 + 0x2b);
    fn_002b1b54(param_1[0x37],param_1[0x36],1);
    fn_0069e2d0(param_1[0x37],param_1[0x36]);
    fn_006890a0(param_1[0x38],&DAT_008cbdc8,&DAT_008cbdc8,0);
    local_24 = uVar3;
    local_20 = uVar3;
    local_1c = uVar3;
    fn_002b1b78(param_1[0x37],param_1[0x36],&local_24);
  }
  return;
}



void fn_00448470(int param_1)

{
  if (*(int *)(param_1 + 0xd8) != -1) {
    fn_002b1810(*(undefined4 *)(param_1 + 0xdc));
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  }
  fn_0022ccb4(param_1);
  return;
}



void fn_004483c0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *param_1 = &PTR_FUN_0083e7b8;
  uVar3 = param_1[0x3b];
  uVar4 = param_1[0x3c];
  if (uVar3 != uVar4) {
    uVar2 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar2 = uVar2 + 2;
      } while (uVar2 != uVar4);
    }
    param_1[0x3c] = uVar4 - (uVar4 - uVar3 & 0xfffffffe);
  }
  uVar4 = uVar3;
  if ((uint)param_1[0x3c] < uVar3) {
    do {
      uVar4 = uVar4 + 2;
    } while (uVar4 != param_1[0x3c]);
  }
  fn_001008c4(uVar3,(int)(param_1[0x3d] - uVar3) >> 1,0);
  if (param_1[0x38] != 0) {
    fn_00662a1c();
    fn_002feef8();
  }
  *param_1 = &DAT_0082bf18;
  iVar1 = fn_005d2898(param_1 + 0x30);
  if (*(int **)(iVar1 + -0xc) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0xc) + 4))();
  }
  if (*(int **)(iVar1 + -0x10) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0x10) + 4))();
  }
  fn_002c471c(iVar1 + -0xc0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x004481e0) */
/* WARNING: Removing unreachable block (ram,0x004481ec) */
/* WARNING: Removing unreachable block (ram,0x004481b8) */
/* WARNING: Removing unreachable block (ram,0x004481bc) */
/* WARNING: Removing unreachable block (ram,0x004481c0) */
/* WARNING: Removing unreachable block (ram,0x004481c4) */
/* WARNING: Removing unreachable block (ram,0x004481c8) */
/* WARNING: Removing unreachable block (ram,0x00448208) */
/* WARNING: Removing unreachable block (ram,0x00448218) */
/* WARNING: Removing unreachable block (ram,0x004481f0) */
/* WARNING: Removing unreachable block (ram,0x004481f8) */
/* WARNING: Removing unreachable block (ram,0x004481fc) */
/* WARNING: Removing unreachable block (ram,0x00448200) */

undefined4 * fn_00448020(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint local_28;
  uint local_24;
  
  puVar1 = (undefined4 *)fn_00416e5c();
  puVar1[0x38] = 0;
  *puVar1 = &PTR_FUN_0083e7b8;
  puVar1[0x39] = 0;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  puVar2 = puVar1 + 0x3b;
  *puVar2 = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar3 = (undefined2 *)*puVar2;
  puVar7 = (undefined2 *)puVar1[0x3c];
  local_28 = (int)puVar7 - (int)puVar3 >> 1;
  if (local_28 < 0x3ff) {
    iVar13 = 0x3ff - local_28;
    if (iVar13 != 0) {
      local_28 = iVar13 + local_28;
      if ((uint)(puVar1[0x3d] - (int)puVar3 >> 1) < local_28) {
        uVar14 = (int)(puVar1[0x3c] - *puVar2) >> 1;
        local_24 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
        if (local_24 < uVar14 + 0x20) {
          local_24 = uVar14 + 0x20;
        }
        puVar12 = &local_24;
        if (local_24 <= local_28) {
          puVar12 = &local_28;
        }
        uVar14 = *puVar12;
        puVar4 = (undefined2 *)fn_00100fc6(uVar14 << 1,0);
        puVar10 = puVar4;
        for (puVar3 = (undefined2 *)*puVar2; puVar3 != puVar7; puVar3 = puVar3 + 1) {
          if (puVar10 != (undefined2 *)0x0) {
            *puVar10 = *puVar3;
          }
          puVar10 = puVar10 + 1;
        }
        puVar3 = (undefined2 *)(((int)puVar7 - *puVar2 & 0xfffffffe) + (int)puVar4);
        for (iVar9 = iVar13; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar3 != (undefined2 *)0x0) {
            *puVar3 = 0;
          }
          puVar3 = puVar3 + 1;
        }
        puVar10 = (undefined2 *)puVar1[0x3c];
        puVar3 = puVar4 + iVar13 + ((int)((int)puVar7 - *puVar2) >> 1);
        for (; puVar7 != puVar10; puVar7 = puVar7 + 1) {
          if (puVar3 != (undefined2 *)0x0) {
            *puVar3 = *puVar7;
          }
          puVar3 = puVar3 + 1;
        }
        uVar5 = *puVar2;
        uVar11 = puVar1[0x3c];
        uVar6 = uVar5;
        if (uVar11 < uVar5) {
          do {
            uVar6 = uVar6 + 2;
          } while (uVar6 != uVar11);
        }
        fn_001008c4(uVar5,(int)(puVar1[0x3d] - uVar5) >> 1,0);
        puVar1[0x3d] = puVar4 + uVar14;
        puVar1[0x3c] = puVar4 + ((int)(uVar11 - uVar5) >> 1) + iVar13;
        *puVar2 = (uint)puVar4;
      }
      else {
        puVar3 = puVar7 + iVar13;
        puVar1[0x3c] = puVar7 + iVar13;
        if (puVar3 < puVar7) {
          puVar8 = puVar7 + -iVar13;
          puVar4 = puVar7;
          for (puVar10 = puVar8; puVar10 != puVar7; puVar10 = puVar10 + 1) {
            if (puVar4 != (undefined2 *)0x0) {
              *puVar4 = *puVar10;
            }
            puVar4 = puVar4 + 1;
          }
          puVar10 = puVar7;
          if (puVar7 < puVar8) {
            iVar13 = (int)puVar8 - (int)puVar7;
            if (0 < iVar13) {
              if (iVar13 * 0x40000000 < 0) {
                puVar8 = puVar8 + -1;
                puVar10 = puVar7 + -1;
                *puVar10 = *puVar8;
              }
              for (iVar13 = iVar13 >> 2; iVar13 != 0; iVar13 = iVar13 + -1) {
                puVar10[-1] = puVar8[-1];
                puVar8 = puVar8 + -2;
                puVar10 = puVar10 + -2;
                *puVar10 = *puVar8;
              }
            }
          }
          else {
            while (puVar7 != puVar8) {
              puVar8 = puVar8 + -1;
              puVar10[-1] = *puVar8;
              puVar10 = puVar10 + -1;
            }
          }
          if (puVar7 < puVar3) {
            iVar13 = (int)puVar3 - (int)puVar7;
            if (0 < iVar13) {
              puVar3 = puVar7;
              if (iVar13 * 0x40000000 < 0) {
                puVar3 = puVar7 + 1;
                *puVar7 = 0;
              }
              for (iVar13 = iVar13 >> 2; iVar13 != 0; iVar13 = iVar13 + -1) {
                puVar7 = puVar3 + 1;
                *puVar3 = 0;
                puVar3 = puVar3 + 2;
                *puVar7 = 0;
              }
            }
          }
          else {
            for (; puVar7 != puVar3; puVar7 = puVar7 + 1) {
              *puVar7 = 0;
            }
          }
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar7 != (undefined2 *)0x0) {
              *puVar7 = 0;
            }
            puVar7 = puVar7 + 1;
          }
        }
      }
    }
  }
  else if ((0x3ff < local_28) && (puVar10 = puVar3 + 0x3ff, puVar3 != puVar7)) {
    puVar3 = puVar10;
    if (puVar7 < puVar10) {
      do {
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar7);
    }
    puVar1[0x3c] = (int)puVar7 - ((int)puVar7 - (int)puVar10 & 0xfffffffeU);
  }
  return puVar1;
}


