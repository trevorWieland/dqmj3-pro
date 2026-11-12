#include "002575e0_00257da8.h"



int fn_00257da8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int local_10;
  
  local_10 = param_4;
  local_10 = fn_0023a174();
  if (local_10 != -1) {
    fn_0079d450(param_1 + param_2 * 0xc + 0x28,&local_10);
  }
  return local_10;
}



bool fn_00257d88(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (DAT_008911dc == '\0') {
    return false;
  }
  iVar1 = fn_00603590(param_1,~param_4 & 2 | 1,&local_14,param_3,param_2);
  if (0 < iVar1) {
    *param_2 = local_14;
    param_2[1] = uStack_10;
    param_2[2] = uStack_c;
  }
  return 0 < iVar1;
}



void fn_00257d38(undefined4 param_1)

{
  if (DAT_008911dc != '\0') {
    fn_00239a54(param_1);
  }
  return;
}



void fn_00257c9c(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0xc);
  uVar3 = ((int *)*piVar1)[1] - *(int *)*piVar1;
  iVar4 = (int)((longlong)(int)uVar3 * -0x99fc267 + ((ulonglong)uVar3 << 0x20) >> 0x20);
  uVar3 = 0;
  if (iVar4 >> 10 != iVar4 >> 0x1f) {
    do {
      uVar2 = uVar3 + 1;
      piVar5 = (int *)(*(int *)*piVar1 + uVar3 * 0x428);
      *(short *)(*piVar5 + 0x22) = (short)piVar5[9];
      *(undefined2 *)(*piVar5 + 0x24) = *(undefined2 *)((int)piVar5 + 0x26);
      uVar3 = ((int *)*piVar1)[1] - *(int *)*piVar1;
      iVar4 = (int)((longlong)(int)uVar3 * -0x99fc267 + ((ulonglong)uVar3 << 0x20) >> 0x20);
      uVar3 = uVar2;
    } while (uVar2 < (uint)((iVar4 >> 10) - (iVar4 >> 0x1f)));
  }
  return;
}



void fn_00257c24(undefined4 *param_1,undefined2 *param_2,undefined1 *param_3,uint *param_4)

{
  longlong lVar1;
  uint local_18;
  int iStack_14;
  
  fn_00123d00(&local_18,*param_2,*(undefined1 *)(param_2 + 1),*(undefined1 *)((int)param_2 + 3),
               *param_3,param_3[1],param_3[2],0);
  lVar1 = (ulonglong)(*param_4 - local_18) * 1000000;
  param_1[1] = (param_4[1] - (iStack_14 + (uint)(*param_4 < local_18))) * 1000000 +
               (int)((ulonglong)lVar1 >> 0x20);
  *param_1 = (int)lVar1;
  return;
}



int fn_002575e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint local_30;
  uint local_2c [2];
  
  puVar9 = (uint *)(param_1 + 4);
  puVar11 = (uint *)(param_2 + 4);
  if (puVar11 != puVar9) {
    puVar4 = *(undefined4 **)(param_2 + 8);
    puVar6 = (undefined4 *)*puVar11;
    puVar1 = (undefined4 *)*puVar9;
    uVar17 = (int)puVar4 - (int)puVar6;
    uVar13 = (int)uVar17 >> 2;
    if ((uint)(*(int *)(param_1 + 0xc) - (int)puVar1 >> 2) < uVar13) {
      local_30 = uVar13;
      uVar17 = *(int *)(param_1 + 8) - (int)puVar1 >> 2;
      local_2c[0] = uVar17 + (uVar17 >> 1) + (uVar17 >> 3);
      if (local_2c[0] < uVar17 + 0x20) {
        local_2c[0] = uVar17 + 0x20;
      }
      puVar2 = local_2c;
      if (local_2c[0] <= uVar13) {
        puVar2 = &local_30;
      }
      uVar13 = *puVar2;
      puVar4 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
      puVar7 = *(undefined4 **)(param_2 + 8);
      puVar1 = puVar4;
      for (puVar6 = (undefined4 *)*puVar11; puVar6 != puVar7; puVar6 = puVar6 + 1) {
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *puVar6;
        }
        puVar1 = puVar1 + 1;
      }
      uVar3 = *puVar9;
      uVar17 = uVar3;
      if (*(uint *)(param_1 + 8) < uVar3) {
        do {
          uVar17 = uVar17 + 4;
        } while (uVar17 != *(uint *)(param_1 + 8));
      }
      fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0xc) - uVar3) >> 2,0);
      *puVar9 = (uint)puVar4;
      *(uint *)(param_1 + 8) = (*(int *)(param_2 + 8) - *puVar11 & 0xfffffffc) + (int)puVar4;
      *(undefined4 **)(param_1 + 0xc) = puVar4 + uVar13;
    }
    else {
      uVar3 = *(int *)(param_1 + 8) - (int)puVar1 >> 2;
      if (uVar3 < uVar13) {
        puVar4 = puVar6 + uVar3;
        if (puVar6 < puVar4) {
          if (0 < (int)puVar4 - (int)puVar6) {
            puVar7 = puVar1 + -1;
            puVar8 = puVar6 + -1;
            if (((int)puVar4 - (int)puVar6) * 0x20000000 < 0) {
              *puVar1 = *puVar6;
              puVar7 = puVar1;
              puVar8 = puVar6;
            }
            for (iVar16 = (int)puVar4 - (int)puVar6 >> 3; iVar16 != 0; iVar16 = iVar16 + -1) {
              puVar7[1] = puVar8[1];
              puVar8 = puVar8 + 2;
              puVar7 = puVar7 + 2;
              *puVar7 = *puVar8;
            }
          }
        }
        else {
          for (; puVar6 != puVar4; puVar6 = puVar6 + 1) {
            *puVar1 = *puVar6;
            puVar1 = puVar1 + 1;
          }
        }
        *(uint *)(param_1 + 8) = (*(int *)(param_2 + 8) - *puVar11 & 0xfffffffc) + *puVar9;
        puVar4 = *(undefined4 **)(param_2 + 8);
        puVar1 = (undefined4 *)(*puVar9 + uVar3 * 4);
        for (puVar6 = (undefined4 *)(*puVar11 + uVar3 * 4); puVar6 != puVar4; puVar6 = puVar6 + 1) {
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *puVar6;
          }
          puVar1 = puVar1 + 1;
        }
      }
      else {
        if (puVar6 < puVar4) {
          if (0 < (int)uVar17) {
            puVar4 = puVar1 + -1;
            puVar7 = puVar6 + -1;
            if ((int)(uVar17 * 0x20000000) < 0) {
              *puVar1 = *puVar6;
              puVar4 = puVar1;
              puVar7 = puVar6;
            }
            for (iVar16 = (int)uVar17 >> 3; iVar16 != 0; iVar16 = iVar16 + -1) {
              puVar4[1] = puVar7[1];
              puVar7 = puVar7 + 2;
              puVar4 = puVar4 + 2;
              *puVar4 = *puVar7;
            }
            puVar1 = (undefined4 *)((int)puVar1 + (uVar17 & 0xfffffffc));
          }
        }
        else {
          for (; puVar6 != puVar4; puVar6 = puVar6 + 1) {
            *puVar1 = *puVar6;
            puVar1 = puVar1 + 1;
          }
        }
        if (*(undefined4 **)(param_1 + 8) < puVar1) {
          do {
            puVar1 = puVar1 + 1;
          } while (puVar1 != *(undefined4 **)(param_1 + 8));
        }
        iVar16 = (*(int *)(param_2 + 8) - *puVar11 & 0xfffffffc) + *puVar9;
        *(int *)(param_1 + 8) = iVar16;
        *(int *)(param_1 + 0xc) = iVar16;
      }
    }
  }
  puVar9 = (uint *)(param_1 + 0x10);
  puVar11 = (uint *)(param_2 + 0x10);
  if (puVar11 != puVar9) {
    uVar17 = *puVar11;
    uVar14 = *(uint *)(param_2 + 0x14);
    uVar3 = *puVar9;
    iVar16 = uVar14 - uVar17;
    uVar13 = iVar16 / 0x104;
    if ((uint)((int)(*(int *)(param_1 + 0x18) - uVar3) / 0x104) < uVar13) {
      local_30 = uVar13;
      uVar17 = (int)(*(int *)(param_1 + 0x14) - *puVar9) / 0x104;
      local_2c[0] = uVar17 + (uVar17 >> 1) + (uVar17 >> 3);
      if (local_2c[0] < uVar17 + 0x20) {
        local_2c[0] = uVar17 + 0x20;
      }
      puVar2 = &local_30;
      if (uVar13 < local_2c[0]) {
        puVar2 = local_2c;
      }
      uVar15 = *puVar2;
      uVar3 = fn_00100fc6(uVar15 * 0x104,0);
      uVar14 = *(uint *)(param_2 + 0x14);
      uVar17 = uVar3;
      for (uVar13 = *puVar11; uVar13 != uVar14; uVar13 = uVar13 + 0x104) {
        if (uVar17 != 0) {
          fn_0017821c(uVar17,uVar13,0x104);
        }
        uVar17 = uVar17 + 0x104;
      }
      uVar17 = *puVar9;
      uVar13 = uVar17;
      if (*(uint *)(param_1 + 0x14) < uVar17) {
        do {
          uVar13 = uVar13 + 0x104;
        } while (uVar13 != *(uint *)(param_1 + 0x14));
      }
      fn_001008c4(uVar17,(int)(*(int *)(param_1 + 0x18) - uVar17) / 0x104,0);
      *puVar9 = uVar3;
      *(uint *)(param_1 + 0x14) =
           uVar3 + ((int)(*(int *)(param_2 + 0x14) - *puVar11) / 0x104) * 0x104;
      *(uint *)(param_1 + 0x18) = uVar3 + uVar15 * 0x104;
    }
    else {
      uVar15 = (int)(*(int *)(param_1 + 0x14) - uVar3) / 0x104;
      if (uVar15 < uVar13) {
        uVar13 = uVar17 + uVar15 * 0x104;
        if (uVar17 < uVar13) {
          if (0 < (int)(uVar13 - uVar17)) {
            uVar14 = uVar3 - 0x104;
            uVar5 = uVar17 - 0x104;
            if (((int)(uVar13 - uVar17) / 0x104 & 1U) != 0) {
              fn_0017821c(uVar3,uVar17,0x104);
              uVar14 = uVar3;
              uVar5 = uVar17;
            }
            for (iVar16 = (int)(uVar13 - uVar17) / 0x104 >> 1; iVar16 != 0; iVar16 = iVar16 + -1) {
              fn_0017821c(uVar14 + 0x104,uVar5 + 0x104,0x104);
              uVar5 = uVar5 + 0x208;
              uVar14 = uVar14 + 0x208;
              fn_0017821c(uVar14,uVar5,0x104);
            }
          }
        }
        else {
          for (; uVar17 != uVar13; uVar17 = uVar17 + 0x104) {
            fn_0017821c(uVar3,uVar17,0x104);
            uVar3 = uVar3 + 0x104;
          }
        }
        *(uint *)(param_1 + 0x14) =
             *puVar9 + ((int)(*(int *)(param_2 + 0x14) - *puVar11) / 0x104) * 0x104;
        iVar12 = *(int *)(param_2 + 0x14);
        iVar16 = *puVar9 + uVar15 * 0x104;
        for (iVar10 = *puVar11 + uVar15 * 0x104; iVar10 != iVar12; iVar10 = iVar10 + 0x104) {
          if (iVar16 != 0) {
            fn_0017821c(iVar16,iVar10,0x104);
          }
          iVar16 = iVar16 + 0x104;
        }
      }
      else {
        if (uVar17 < uVar14) {
          if (0 < iVar16) {
            uVar14 = uVar3 - 0x104;
            uVar15 = uVar17 - 0x104;
            if ((uVar13 & 1) != 0) {
              fn_0017821c(uVar3,uVar17,0x104);
              uVar14 = uVar3;
              uVar15 = uVar17;
            }
            local_30 = iVar16 / 0x104;
            for (iVar16 = (int)local_30 >> 1; iVar16 != 0; iVar16 = iVar16 + -1) {
              fn_0017821c(uVar14 + 0x104,uVar15 + 0x104,0x104);
              uVar15 = uVar15 + 0x208;
              uVar14 = uVar14 + 0x208;
              fn_0017821c(uVar14,uVar15,0x104);
            }
            uVar3 = uVar3 + local_30 * 0x104;
          }
        }
        else {
          for (; uVar17 != uVar14; uVar17 = uVar17 + 0x104) {
            fn_0017821c(uVar3,uVar17,0x104);
            uVar3 = uVar3 + 0x104;
          }
        }
        if (*(uint *)(param_1 + 0x14) < uVar3) {
          do {
            uVar3 = uVar3 + 0x104;
          } while (uVar3 != *(uint *)(param_1 + 0x14));
        }
        iVar16 = *puVar9 + ((int)(*(int *)(param_2 + 0x14) - *puVar11) / 0x104) * 0x104;
        *(int *)(param_1 + 0x14) = iVar16;
        *(int *)(param_1 + 0x18) = iVar16;
      }
    }
  }
  return param_1;
}


