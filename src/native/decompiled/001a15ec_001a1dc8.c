#include "001a15ec_001a1dc8.h"



undefined4 fn_001a1dc8(int param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = *param_2;
  if (uVar4 != 0x1000001) {
    if ((uVar4 == 0x1000008) || (uVar4 == 0x5000002)) {
      uVar5 = param_2[1];
    }
    else if (uVar4 == 0x5000004) {
      uVar5 = (uint)(float)param_2[1];
    }
    else if (uVar4 == 0x8000010) {
      uVar5 = *(uint *)(param_2[1] + 0x18);
    }
    else {
      uVar5 = (int)param_2[1] >> 3;
    }
    puVar1 = (uint *)(*(int *)(param_1 + 0x20) + (uVar5 & *(int *)(param_1 + 0x24) - 1U) * 0x14);
    do {
      uVar5 = puVar1[3];
      bVar7 = uVar5 == param_2[1];
      if (bVar7) {
        uVar5 = puVar1[2];
      }
      if (bVar7 && uVar5 == uVar4) {
        if (puVar1 == (uint *)0x0) {
          return 0;
        }
        uVar4 = *puVar1;
        if (uVar4 == 0x8010000) {
          uVar4 = *(uint *)(puVar1[1] + 0xc);
          uVar5 = *(uint *)(puVar1[1] + 0x10);
        }
        else {
          uVar5 = puVar1[1];
        }
        uVar6 = *param_3;
        *param_3 = uVar4;
        piVar2 = (int *)param_3[1];
        param_3[1] = uVar5;
        if ((uVar4 & 0x8000000) != 0) {
          *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
        }
        if (((uVar6 & 0x8000000) != 0) &&
           (iVar3 = piVar2[1], piVar2[1] = iVar3 + -1, iVar3 + -1 == 0)) {
          (**(code **)(*piVar2 + 8))();
        }
        return 1;
      }
      puVar1 = (uint *)puVar1[4];
    } while (puVar1 != (uint *)0x0);
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x001a1c2c) */
/* WARNING: Removing unreachable block (ram,0x001a1968) */
/* WARNING: Removing unreachable block (ram,0x001a19e4) */
/* WARNING: Removing unreachable block (ram,0x001a19f4) */
/* WARNING: Removing unreachable block (ram,0x001a1ca8) */
/* WARNING: Removing unreachable block (ram,0x001a1cb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_001a18a8(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  undefined4 *puStack_30;
  int local_2c;
  int iStack_28;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &DAT_00850d90;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x1000001;
  param_1[0x12] = 0;
  param_1[7] = param_3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  puStack_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  if ((uint)param_1[0x10] < 0x12) {
    uVar1 = fn_0018388c(param_1[0xe],param_1[0x10] << 3,0x90);
    param_1[0xe] = uVar1;
    param_1[0x10] = 0x12;
  }
  if ((uint)param_1[0xf] < 0x12) {
    do {
      puVar2 = (undefined4 *)(param_1[0xe] + param_1[0xf] * 8);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0x1000001;
        puVar2[1] = 0;
      }
      iVar3 = param_1[0xf];
      param_1[0xf] = iVar3 + 1U;
    } while (iVar3 + 1U < 0x12);
  }
  else {
    uVar8 = 0x12;
    if (0x12 < (uint)param_1[0xf]) {
      do {
        puVar5 = (uint *)(param_1[0xe] + uVar8 * 8);
        if (((*puVar5 & 0x8000000) != 0) &&
           (iVar3 = *(int *)(puVar5[1] + 4) + -1, *(int *)(puVar5[1] + 4) = iVar3, iVar3 == 0)) {
          (**(code **)(*(int *)puVar5[1] + 8))();
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)param_1[0xf]);
    }
    param_1[0xf] = 0x12;
  }
  if (param_1[7] != 0) {
    local_40 = 0x1000001;
    local_3c = (int *)0x0;
    local_38 = 0x1000001;
    local_34 = (int *)0x0;
    fn_001a51e0(param_1 + 8,*(undefined4 *)(param_3 + 0x24),&local_40);
    if (((local_38 & 0x8000000) != 0) &&
       (iVar3 = local_34[1], local_34[1] = iVar3 + -1, iVar3 + -1 == 0)) {
      (**(code **)(*local_34 + 8))();
    }
    if (((local_40 & 0x8000000) != 0) &&
       (iVar3 = local_3c[1], local_3c[1] = iVar3 + -1, iVar3 + -1 == 0)) {
      (**(code **)(*local_3c + 8))();
    }
    uVar9 = 0;
    uVar8 = 0;
    if (*(int *)(param_3 + 0x24) != 0) {
      do {
        puVar2 = (undefined4 *)(param_1[8] + uVar9 * 0x10);
        if (puVar2 != (undefined4 *)0x0) {
          iVar3 = *(int *)(param_3 + 0x20);
          *puVar2 = 0x1000001;
          puVar2[1] = 0;
          puVar2[2] = 0x1000001;
          puVar2[3] = 0;
          iVar3 = iVar3 + uVar9 * 0x10;
          fn_0019e864(puVar2,iVar3);
          fn_0019e864(puVar2 + 2,iVar3 + 8);
        }
        uVar8 = *(uint *)(param_3 + 0x24);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
    }
    param_1[9] = uVar8;
    local_40 = 0x1000001;
    local_3c = (int *)0x0;
    local_38 = 0x1000001;
    local_34 = (int *)0x0;
    fn_001a51e0(param_1 + 0xb,*(undefined4 *)(param_3 + 0x30),&local_40);
    if (((local_38 & 0x8000000) != 0) &&
       (iVar3 = local_34[1], local_34[1] = iVar3 + -1, iVar3 + -1 == 0)) {
      (**(code **)(*local_34 + 8))();
    }
    if (((local_40 & 0x8000000) != 0) &&
       (iVar3 = local_3c[1], local_3c[1] = iVar3 + -1, iVar3 + -1 == 0)) {
      (**(code **)(*local_3c + 8))();
    }
    uVar9 = 0;
    uVar8 = 0;
    if (*(int *)(param_3 + 0x30) != 0) {
      do {
        puVar2 = (undefined4 *)(param_1[0xb] + uVar9 * 0x10);
        if (puVar2 != (undefined4 *)0x0) {
          iVar3 = *(int *)(param_3 + 0x2c);
          *puVar2 = 0x1000001;
          puVar2[1] = 0;
          puVar2[2] = 0x1000001;
          puVar2[3] = 0;
          iVar3 = iVar3 + uVar9 * 0x10;
          fn_0019e864(puVar2,iVar3);
          fn_0019e864(puVar2 + 2,iVar3 + 8);
        }
        uVar8 = *(uint *)(param_3 + 0x30);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
    }
    param_1[0xc] = uVar8;
    uVar8 = *(uint *)(param_3 + 0x3c);
    if ((uint)param_1[0x10] < uVar8) {
      uVar9 = uVar8;
      if (uVar8 == 0) {
        uVar9 = 4;
      }
      uVar1 = fn_0018388c(param_1[0xe],param_1[0x10] << 3,uVar9 << 3);
      param_1[0xe] = uVar1;
      param_1[0x10] = uVar9;
    }
    uVar9 = param_1[0xf];
    if (uVar9 < uVar8) {
      do {
        puVar2 = (undefined4 *)(param_1[0xe] + uVar9 * 8);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0x1000001;
          puVar2[1] = 0;
        }
        uVar9 = param_1[0xf] + 1;
        param_1[0xf] = uVar9;
      } while (uVar9 < uVar8);
    }
    else {
      uVar6 = uVar8;
      if (uVar8 < uVar9) {
        do {
          puVar5 = (uint *)(param_1[0xe] + uVar6 * 8);
          if (((*puVar5 & 0x8000000) != 0) &&
             (iVar3 = *(int *)(puVar5[1] + 4) + -1, *(int *)(puVar5[1] + 4) = iVar3, iVar3 == 0)) {
            (**(code **)(*(int *)puVar5[1] + 8))();
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)param_1[0xf]);
      }
      param_1[0xf] = uVar8;
    }
    uVar8 = 0;
    if (*(int *)(param_3 + 0x3c) != 0) {
      do {
        puVar5 = (uint *)(param_1[0xe] + uVar8 * 8);
        if (puVar5 != (uint *)0x0) {
          puVar7 = (uint *)(*(int *)(param_3 + 0x38) + uVar8 * 8);
          uVar9 = *puVar7;
          *puVar5 = uVar9;
          uVar6 = puVar7[1];
          puVar5[1] = uVar6;
          if ((uVar9 & 0x8000000) != 0) {
            *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_3 + 0x3c));
    }
    param_1[0xf] = *(undefined4 *)(param_3 + 0x3c);
    *(int *)(param_1[7] + 4) = *(int *)(param_1[7] + 4) + 1;
  }
  iVar3 = local_2c;
  if (param_3 == 0) {
    iVar4 = fn_002fece8(0x2c);
    if (iVar4 != 0) {
      fn_0019b998(iVar4,iVar3,0);
    }
    *(undefined4 *)(iVar4 + 0x18) = 0;
  }
  else {
    iVar4 = fn_001a4734(*(undefined4 *)(param_3 + 0x18));
  }
  param_1[6] = iVar4;
  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = local_2c;
  fn_0019e8c4(local_2c + 0x44,param_1);
  return param_1;
}



int fn_001a178c(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_18;
  int *local_14;
  
  local_18 = 0x1000001;
  local_14 = (int *)0x0;
  iVar1 = fn_001a8604(*(undefined4 *)(param_1 + 0x18),0,param_2,param_3,&local_18);
  if (iVar1 != -1) {
    if (((uint)local_14 & 0x1000000) == 0) {
      puVar4 = (uint *)(*(int *)(param_1 + 0x20) + ((uint)local_14 & 0xffffff) * 0x10);
      uVar2 = *puVar4;
      uVar5 = puVar4[1];
      if (uVar2 == 0x8010000) {
        uVar2 = *(uint *)(uVar5 + 0xc);
        uVar5 = *(uint *)(uVar5 + 0x10);
      }
      uVar7 = *param_4;
      *param_4 = uVar2;
      piVar3 = (int *)param_4[1];
      param_4[1] = uVar5;
      if ((uVar2 & 0x8000000) != 0) {
        *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
      }
      if (((uVar7 & 0x8000000) != 0) && (iVar6 = piVar3[1], piVar3[1] = iVar6 + -1, iVar6 + -1 == 0)
         ) {
        (**(code **)(*piVar3 + 8))();
      }
    }
    else {
      fn_0019e864(param_4,*(int *)(param_1 + 0x2c) + ((uint)local_14 & 0xffffff) * 0x10);
    }
  }
  if (((local_18 & 0x8000000) != 0) &&
     (iVar6 = local_14[1], local_14[1] = iVar6 + -1, iVar6 + -1 == 0)) {
    (**(code **)(*local_14 + 8))();
  }
  return iVar1;
}



undefined4 fn_001a15ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  uint local_28;
  int *local_24;
  
  local_28 = 0x1000001;
  local_24 = (int *)0x0;
  local_38 = 0x1000001;
  local_34 = (int *)0x0;
  fn_001a83dc(param_1,param_2,&local_28);
  fn_001a83dc(param_1,param_3,&local_38);
  iVar4 = local_34[5];
  iVar3 = local_24[5];
  iVar5 = iVar3 + iVar4;
  iVar1 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),iVar5 + 1);
  fn_00301a9c(iVar1,local_24 + 7,iVar3);
  fn_00301a9c(iVar1 + iVar3,local_34 + 7,iVar4);
  uVar2 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),0xffffffff);
  local_2c = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),uVar2,iVar5);
  local_30 = 0x8000010;
  if (local_2c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_2c[1] = local_2c[1] + 1;
  fn_0019e864(param_4,&local_30);
  if (((local_30 & 0x8000000) != 0) &&
     (iVar1 = local_2c[1], local_2c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  if (((local_38 & 0x8000000) != 0) &&
     (iVar1 = local_34[1], local_34[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_34 + 8))();
  }
  if (((local_28 & 0x8000000) != 0) &&
     (iVar1 = local_24[1], local_24[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_24 + 8))();
  }
  return 1;
}


