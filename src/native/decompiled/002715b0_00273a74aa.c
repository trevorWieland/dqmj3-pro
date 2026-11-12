#include "002715b0_00273a74aa.h"



void fn_00271930(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  
  iVar1 = fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  uVar2 = fn_00176970();
  uVar2 = VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
  }
  uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921f0,
                       *(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  fn_00271e64(param_1,(char *)&DAT_00273bb0,1);
  fn_00271e64(param_1,(char *)&DAT_002757ec,1);
  fn_00273898(param_1);
  fn_00273898(param_1);
  fn_00272314(param_1);
  fn_00271e64(param_1,(char *)&DAT_00274f2c,1);
  fn_00271e64(param_1,(char *)&DAT_00274f34,1);
  fn_00274dcc(param_1,1);
  fn_0027583c(param_1,1);
  *(undefined1 *)(param_1 + 8) = 0xc;
  return;
}



void fn_002715b0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint local_30;
  uint local_2c;
  undefined *local_28;
  
  puVar14 = &local_30;
  fn_00271508();
  puVar11 = (uint *)(param_1 + 0x24);
  local_2c = param_2;
  if (0x3fffffff < param_2) {
    local_30 = 0x3fffffff;
    fn_002ff628(8,&DAT_008c765e,&DAT_008c765e,param_2);
  }
  if ((uint)((int)(*(int *)(param_1 + 0x2c) - *puVar11) >> 2) < local_2c) {
    uVar13 = (int)(*(int *)(param_1 + 0x28) - *puVar11) >> 2;
    local_30 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
    if (local_30 < uVar13 + 0x20) {
      local_30 = uVar13 + 0x20;
    }
    if (local_30 <= local_2c) {
      puVar14 = &local_2c;
    }
    uVar13 = *puVar14;
    puVar1 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
    puVar8 = *(undefined4 **)(param_1 + 0x28);
    puVar12 = puVar1;
    for (puVar2 = (undefined4 *)*puVar11; puVar2 != puVar8; puVar2 = puVar2 + 1) {
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = *puVar2;
      }
      puVar12 = puVar12 + 1;
    }
    uVar3 = *puVar11;
    uVar4 = uVar3;
    if (*(uint *)(param_1 + 0x28) < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != *(uint *)(param_1 + 0x28));
    }
    fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x2c) - uVar3) >> 2,0);
    uVar4 = *puVar11;
    *puVar11 = (uint)puVar1;
    *(uint *)(param_1 + 0x28) = (*(int *)(param_1 + 0x28) - uVar4 & 0xfffffffc) + (int)puVar1;
    *(undefined4 **)(param_1 + 0x2c) = puVar1 + uVar13;
  }
  iVar15 = 0;
  if (0 < (int)param_2) {
    local_28 = &DAT_00851a3c;
    do {
      local_30 = 0;
      local_2c = 0xe;
      uVar5 = fn_001c8124(*(undefined4 *)(param_1 + 0xc),DAT_00892114,DAT_0089211c);
      puVar2 = (undefined4 *)fn_00145b00(0x14,&DAT_00812c8c);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[2] = 0xffffffff;
        puVar2[3] = 0xffffffff;
        *puVar2 = local_28;
        puVar2[1] = 0;
        *(undefined1 *)(puVar2 + 4) = 0;
        *(undefined1 *)((int)puVar2 + 0x11) = 4;
      }
      puVar2[2] = uVar5;
      puVar12 = *(undefined4 **)(param_1 + 0x28);
      puVar14 = (uint *)(param_1 + 0x24);
      if (puVar12 == *(undefined4 **)(param_1 + 0x2c)) {
        uVar13 = (int)((int)puVar12 - *puVar14) >> 2;
        if (uVar13 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x2c) - *puVar14) >> 2)) {
          *(undefined4 **)(param_1 + 0x28) = puVar12 + 1;
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = puVar12[-1];
          }
          puVar1 = puVar12 + -1;
          puVar8 = puVar12;
          if (puVar12 < puVar1) {
            if (0 < (int)puVar1 - (int)puVar12) {
              iVar9 = (int)puVar1 - (int)puVar12 >> 2;
              iVar7 = 0;
              do {
                iVar9 = iVar9 + -1;
                puVar12[iVar7 + -1] = puVar1[iVar7 + -1];
                iVar7 = iVar7 + -1;
              } while (iVar9 != 0);
            }
          }
          else {
            while (puVar12 != puVar1) {
              puVar1 = puVar1 + -1;
              puVar8[-1] = *puVar1;
              puVar8 = puVar8 + -1;
            }
          }
          *puVar12 = puVar2;
        }
        else {
          uVar4 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
          if (uVar4 < uVar13 + 0x20) {
            uVar4 = uVar13 + 0x20;
          }
          puVar6 = (undefined4 *)fn_00100fc6(uVar4 << 2,0);
          puVar8 = puVar6;
          for (puVar1 = (undefined4 *)*puVar14; puVar1 != puVar12; puVar1 = puVar1 + 1) {
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = *puVar1;
            }
            puVar8 = puVar8 + 1;
          }
          puVar1 = (undefined4 *)(((int)puVar12 - *puVar14 & 0xfffffffc) + (int)puVar6);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = puVar2;
          }
          puVar1 = *(undefined4 **)(param_1 + 0x28);
          puVar2 = (undefined4 *)(((int)puVar12 - *puVar14 & 0xfffffffc) + (int)puVar6);
          for (; puVar12 != puVar1; puVar12 = puVar12 + 1) {
            puVar2 = puVar2 + 1;
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = *puVar12;
            }
          }
          uVar3 = *(uint *)(param_1 + 0x28);
          uVar10 = *puVar14;
          uVar13 = uVar10;
          if (uVar3 < uVar10) {
            do {
              uVar13 = uVar13 + 4;
            } while (uVar13 != uVar3);
          }
          fn_001008c4(uVar10,(int)(*(int *)(param_1 + 0x2c) - uVar10) >> 2,0);
          *(undefined4 **)(param_1 + 0x2c) = puVar6 + uVar4;
          *(undefined4 **)(param_1 + 0x28) = puVar6 + ((int)(uVar3 - uVar10) >> 2) + 1;
          *puVar14 = (uint)puVar6;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x28) = puVar12 + 1;
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = puVar2;
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < (int)param_2);
  }
  return;
}


