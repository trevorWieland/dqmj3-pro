#include "0048daa0_0048e250aa.h"



bool fn_0048dcbc(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_10;
  undefined4 local_c [3];
  
  local_10 = 0;
  local_c[0] = param_2;
  iVar1 = fn_00528038(&local_10,*(undefined4 *)(param_1 + 8),0,8,local_c,4);
  if (iVar1 < 0) {
    local_10 = fn_00529b0c();
  }
  return local_10 != 0;
}



undefined4 fn_0048daa0(int *param_1,undefined4 param_2,uint param_3,uint *param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int extraout_r1;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int local_b4;
  undefined4 local_b0;
  uint local_ac [29];
  int local_38;
  int *piStack_34;
  undefined4 local_30;
  uint uStack_2c;
  uint *puStack_28;
  
  piStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  puStack_28 = param_4;
  if ((short)param_4[1] == 0) {
    DAT_008e6a88 = DAT_008e6a88 + 1;
    iVar1 = param_1[3];
    uVar4 = 0;
    if (*(uint *)(iVar1 + 0x2c) < 0x10) {
      piVar2 = (int *)(iVar1 + 4);
      (**(code **)(*(int *)(iVar1 + 4) + 8))();
      iVar9 = *(int *)(iVar1 + 0xa8);
      *(int *)(iVar1 + 0xa8) = iVar9 + 1;
      uVar3 = *(uint *)(iVar1 + 0x2c);
      uVar4 = 0;
      uVar6 = 0;
      if (uVar3 != 0) {
        do {
          fn_00169f1c(uVar6 + iVar9,uVar3);
          iVar5 = iVar1 + extraout_r1 * 8;
          uVar4 = *(uint *)(iVar5 + 0x34);
          uVar7 = uVar6 + 1;
          local_ac[uVar6 * 2 + -1] = *(uint *)(iVar5 + 0x30);
          local_ac[uVar6 * 2] = uVar4;
          uVar3 = *(uint *)(iVar1 + 0x2c);
          uVar4 = uVar3;
          uVar6 = uVar7;
        } while (uVar7 < uVar3);
      }
      (**(code **)(*piVar2 + 0xc))();
    }
    local_b4 = uVar4 << 3;
    iVar1 = fn_00529654(&local_38,param_1[2],local_30,param_3,0,&local_b0,8);
    if (-1 < iVar1) {
      goto LAB_0048dc2c;
    }
  }
  else {
    DAT_008e6a84 = DAT_008e6a84 + 1;
    uVar4 = *param_4;
    local_ac[0] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                  uVar4 >> 0x18;
    local_b0 = CONCAT22((ushort)param_4[1] << 8 | (ushort)param_4[1] >> 8,0x208);
    if (param_3 < 0x2001) {
      iVar1 = fn_00528598();
    }
    else {
      iVar1 = fn_0052b3b8(&local_b4,param_1[2],param_2,param_3,0,&local_b0,8);
    }
    if (-1 < iVar1) {
      local_38 = local_b4;
      goto LAB_0048dc2c;
    }
  }
  local_38 = fn_00529b0c();
LAB_0048dc2c:
  if (local_38 < 0) {
    uVar8 = 4;
    if (local_38 == -0x26) {
      (**(code **)(*param_1 + 0x14))(param_1);
      (**(code **)(*param_1 + 4))(param_1);
    }
    else if (local_38 != -8) {
      if (local_38 == -6) {
        uVar8 = 2;
      }
      else {
        uVar8 = 1;
      }
    }
  }
  else {
    uVar8 = 0;
    if (param_5 != (int *)0x0) {
      *param_5 = local_38;
    }
  }
  (*DAT_008b64b4)(uVar8,local_30,param_3,param_4,param_5);
  return uVar8;
}


