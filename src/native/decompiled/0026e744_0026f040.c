#include "0026e744_0026f040.h"



void fn_0026f040(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar2 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar4 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 0x1c;
    } while (uVar1 != uVar2);
  }
  uVar1 = iVar4 - uVar3;
  iVar4 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  fn_001008c4(uVar3,(iVar4 >> 4) - (iVar4 >> 0x1f),0);
  fn_00337b0c(*(undefined4 *)(param_1 + 0x18));
  fn_005dfbcc(param_1);
  fn_005f44bc(*(undefined4 *)(param_1 + 0x14));
  fn_0012d73c(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  fn_0012d73c(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  fn_0026e8b0(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0026ec80) */
/* WARNING: Removing unreachable block (ram,0x0026ec8c) */
/* WARNING: Removing unreachable block (ram,0x0026ec58) */
/* WARNING: Removing unreachable block (ram,0x0026ec5c) */
/* WARNING: Removing unreachable block (ram,0x0026ec60) */
/* WARNING: Removing unreachable block (ram,0x0026ec64) */
/* WARNING: Removing unreachable block (ram,0x0026ec68) */
/* WARNING: Removing unreachable block (ram,0x0026eca8) */
/* WARNING: Removing unreachable block (ram,0x0026ecb8) */
/* WARNING: Removing unreachable block (ram,0x0026ec90) */
/* WARNING: Removing unreachable block (ram,0x0026ec98) */
/* WARNING: Removing unreachable block (ram,0x0026ec9c) */
/* WARNING: Removing unreachable block (ram,0x0026eca0) */

undefined4 fn_0026e94c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint local_280;
  uint local_27c;
  uint local_278 [128];
  int local_78 [20];
  uint local_28;
  
  uVar1 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  fn_00101a50(local_278,0x100,L"rom:/data/Field/Lod/%s/Alloc.bin",uVar1);
  uVar2 = fn_00100b58(local_278);
  puVar15 = &DAT_008f9cf4;
  if (uVar2 != 0) {
    puVar14 = &local_28;
    if (0x20 < uVar2) {
      puVar14 = &local_27c;
    }
    local_27c = uVar2;
    local_28 = 0x20;
    uVar13 = *puVar14;
    if (0xfffffff1 < uVar13) {
      local_280 = 0xfffffff1;
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar13);
    }
    if (uVar13 < uVar2) {
      local_280 = uVar13;
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2);
    }
    if (uVar13 == 0) {
      puVar15 = &DAT_008f9ce8;
    }
    else {
      puVar15 = (undefined4 *)fn_00100fc6((uVar13 + 8) * 2,0);
      if (puVar15 != (undefined4 *)0x0) {
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15[2] = 0;
      }
      puVar6 = (undefined2 *)((int)puVar15 + uVar2 * 2 + 0xc);
      *puVar15 = 0;
      puVar15[1] = uVar13;
      puVar15[2] = uVar2;
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
      }
    }
    puVar15 = puVar15 + 3;
  }
  fn_00301a9c(puVar15,local_278,uVar2 << 1);
  local_278[2] = 5;
  local_278[1] = 0;
  local_280 = 0;
  local_27c = 0;
  local_278[0] = 0;
  uVar1 = fn_0011c1b4(puVar15,local_78,0x50);
  iVar3 = fn_00145aac();
  if (iVar3 == 2) {
    fn_0012d73c(uVar1);
    if (puVar15 != &DAT_008f9cf4) {
      iVar3 = puVar15[-3];
      if ((iVar3 == -1) ||
         ((puVar15 + -3 != &DAT_008f9ce8 && (puVar15[-3] = iVar3 + -1, iVar3 == 0)))) {
        fn_001008c4(puVar15 + -3,puVar15[-2] + 8,0);
      }
    }
    return 0;
  }
  fn_0012d73c(uVar1);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  puVar7 = *(undefined4 **)(param_1 + 0x28);
  puVar14 = (uint *)(param_1 + 0x28);
  uVar2 = (int)puVar4 - (int)puVar7 >> 2;
  if (uVar2 < 10) {
    iVar3 = 10 - uVar2;
    if (iVar3 != 0) {
      uVar2 = iVar3 + uVar2;
      if ((uint)(*(int *)(param_1 + 0x30) - (int)puVar7 >> 2) < uVar2) {
        local_280 = uVar2;
        uVar13 = (int)(*(int *)(param_1 + 0x2c) - *puVar14) >> 2;
        local_278[0] = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
        if (local_278[0] < uVar13 + 0x20) {
          local_278[0] = uVar13 + 0x20;
        }
        puVar12 = local_278;
        if (local_278[0] <= uVar2) {
          puVar12 = &local_280;
        }
        local_27c = *puVar12;
        puVar5 = (undefined4 *)fn_00100fc6(local_27c << 2,0);
        puVar10 = puVar5;
        for (puVar7 = (undefined4 *)*puVar14; puVar7 != puVar4; puVar7 = puVar7 + 1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = *puVar7;
          }
          puVar10 = puVar10 + 1;
        }
        puVar7 = (undefined4 *)(((int)puVar4 - *puVar14 & 0xfffffffc) + (int)puVar5);
        for (iVar9 = iVar3; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0;
          }
          puVar7 = puVar7 + 1;
        }
        puVar10 = *(undefined4 **)(param_1 + 0x2c);
        puVar7 = puVar5 + iVar3 + ((int)((int)puVar4 - *puVar14) >> 2);
        for (; puVar4 != puVar10; puVar4 = puVar4 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar4;
          }
          puVar7 = puVar7 + 1;
        }
        uVar13 = *puVar14;
        uVar11 = *(uint *)(param_1 + 0x2c);
        uVar2 = uVar13;
        if (uVar11 < uVar13) {
          do {
            uVar2 = uVar2 + 4;
          } while (uVar2 != uVar11);
        }
        fn_001008c4(uVar13,(int)(*(int *)(param_1 + 0x30) - uVar13) >> 2,0);
        *(undefined4 **)(param_1 + 0x30) = puVar5 + local_27c;
        *(undefined4 **)(param_1 + 0x2c) = puVar5 + ((int)(uVar11 - uVar13) >> 2) + iVar3;
        *puVar14 = (uint)puVar5;
      }
      else {
        puVar7 = puVar4 + iVar3;
        *(undefined4 **)(param_1 + 0x2c) = puVar4 + iVar3;
        if (puVar7 < puVar4) {
          puVar8 = puVar4 + -iVar3;
          puVar5 = puVar4;
          for (puVar10 = puVar8; puVar10 != puVar4; puVar10 = puVar10 + 1) {
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar10;
            }
            puVar5 = puVar5 + 1;
          }
          puVar10 = puVar4;
          if (puVar4 < puVar8) {
            if (0 < (int)puVar8 - (int)puVar4) {
              iVar3 = (int)puVar8 - (int)puVar4 >> 2;
              iVar9 = 0;
              do {
                iVar3 = iVar3 + -1;
                puVar4[iVar9 + -1] = puVar8[iVar9 + -1];
                iVar9 = iVar9 + -1;
              } while (iVar3 != 0);
            }
          }
          else {
            while (puVar4 != puVar8) {
              puVar8 = puVar8 + -1;
              puVar10[-1] = *puVar8;
              puVar10 = puVar10 + -1;
            }
          }
          if (puVar4 < puVar7) {
            iVar3 = (int)puVar7 - (int)puVar4;
            if (0 < iVar3) {
              puVar7 = puVar4;
              if (iVar3 * 0x20000000 < 0) {
                puVar7 = puVar4 + 1;
                *puVar4 = 0;
              }
              for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
                puVar4 = puVar7 + 1;
                *puVar7 = 0;
                puVar7 = puVar7 + 2;
                *puVar4 = 0;
              }
            }
          }
          else {
            for (; puVar4 != puVar7; puVar4 = puVar4 + 1) {
              *puVar4 = 0;
            }
          }
        }
        else {
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = 0;
            }
            puVar4 = puVar4 + 1;
          }
        }
      }
    }
  }
  else if ((10 < uVar2) && (puVar10 = puVar7 + 10, puVar7 != puVar4)) {
    puVar7 = puVar10;
    if (puVar4 <= puVar10) {
      for (; puVar7 != puVar4; puVar7 = puVar7 + 1) {
      }
    }
    *(uint *)(param_1 + 0x2c) = (int)puVar4 - ((int)puVar4 - (int)puVar10 & 0xfffffffcU);
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2 != 0) {
    do {
      iVar3 = fn_00145b00(8,&DAT_00812c8c);
      uVar1 = 0;
      if (iVar3 != 0) {
        uVar1 = fn_005e173c();
      }
      *(undefined4 *)(*(int *)(param_1 + 0x28) + uVar2 * 4) = uVar1;
      fn_005e1168(uVar1,local_78[uVar2 * 2] * 0x400 + 0x2800,local_78[uVar2 * 2 + 1],0x28);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2));
  }
  if (puVar15 != &DAT_008f9cf4) {
    iVar3 = puVar15[-3];
    if ((iVar3 == -1) || ((puVar15 + -3 != &DAT_008f9ce8 && (puVar15[-3] = iVar3 + -1, iVar3 == 0)))
       ) {
      fn_001008c4(puVar15 + -3,puVar15[-2] + 8,0);
    }
  }
  return 1;
}



void fn_0026e8b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2;
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    fn_005e15cc(*(undefined4 *)(*(int *)(param_1 + 0x28) + iVar5 * 4));
    piVar1 = *(int **)(*(int *)(param_1 + 0x28) + iVar5 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  uVar4 = *(uint *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar3 = *(uint *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar5 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar2 = uVar4;
  if (uVar3 < uVar4) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != uVar3);
  }
  fn_002feef8(uVar4,(int)(iVar5 - uVar4) >> 2,0,uVar4,unaff_r4,in_lr);
  return;
}



void fn_0026e744(int param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_48 [11];
  
  uVar4 = 0;
  fVar8 = *param_2;
  fVar9 = param_2[2];
  uVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  fVar5 = 0.0;
  if (iVar2 >> 4 != iVar2 >> 0x1f) {
    fVar10 = 0.1;
    fVar7 = 1.0;
    fVar6 = fVar5;
    do {
      iVar2 = fn_00337cb8(*(undefined4 *)(param_1 + 0x18),uVar4);
      if (iVar2 != 0) {
        fVar11 = *(float *)(*(int *)(param_1 + 0x1c) + uVar4 * 0x1c + 4);
        pfVar3 = (float *)fn_006c0e78(*(undefined4 *)(param_1 + 0x18),uVar4);
        local_48[0] = *(float *)(*(int *)(param_1 + 0x1c) + uVar4 * 0x1c + 0x14);
        if ((fVar8 - *pfVar3) * (fVar8 - *pfVar3) + (fVar5 - fVar6) * (fVar5 - fVar6) +
            (fVar9 - pfVar3[2]) * (fVar9 - pfVar3[2]) <= fVar11 * fVar11) {
          local_48[0] = local_48[0] + fVar10;
        }
        else {
          local_48[0] = local_48[0] - fVar10;
        }
        local_48[1] = fVar6;
        local_48[2] = fVar7;
        if (fVar7 < fVar6) {
                    /* WARNING: Subroutine does not return */
          fn_00146590();
        }
        pfVar3 = local_48 + 1;
        if (fVar6 <= local_48[0]) {
          pfVar3 = local_48;
        }
        if (fVar7 < *pfVar3) {
          pfVar3 = local_48 + 2;
        }
        *(float *)(*(int *)(param_1 + 0x1c) + uVar4 * 0x1c + 0x14) = *pfVar3;
        fn_0017fc3c(iVar2);
      }
      uVar4 = uVar4 + 1;
      uVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    } while (uVar4 < (uint)((iVar2 >> 4) - (iVar2 >> 0x1f)));
  }
  return;
}


