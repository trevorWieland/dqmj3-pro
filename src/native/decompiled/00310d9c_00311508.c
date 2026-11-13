#include "00310d9c_00311508.h"



int fn_00311508(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_002b0bb4(*param_1);
  iVar2 = fn_00154ac8(0x30);
  if (iVar2 == 0) {
    iVar2 = fn_00154ac8(0x2e);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 5;
    }
  }
  else {
    iVar2 = 10;
  }
  return iVar2 - iVar1;
}



undefined4 fn_003113c8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint local_30;
  int iStack_2c;
  uint local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  
  iVar1 = fn_002b0b84(*param_1);
  if (iVar1 == 0) {
    fn_001237e4(&local_30);
    local_28 = local_30;
    local_24 = iStack_2c;
    lVar4 = fn_002b0b38(*param_1);
    local_30 = 0x1a;
    lVar5 = fn_00129f6c(&local_28,(int)((ulonglong)lVar4 >> 0x20),0x26d694b3,0x112e0be8);
    if (lVar4 != lVar5) {
      uVar6 = fn_002b0b38(*param_1);
      lVar4 = (uVar6 & 0xffffffff) * 1000000000;
      uVar3 = (uint)lVar4;
      local_18 = local_28 - uVar3;
      local_14 = local_24 -
                 ((int)(uVar6 >> 0x20) * 1000000000 + (int)((ulonglong)lVar4 >> 0x20) +
                 (uint)(local_28 < uVar3));
      uVar3 = param_1[2];
      iVar1 = param_1[3];
      local_30 = 0x12;
      uVar7 = fn_00129f6c(&local_18,0x12,0xd7b634db,0x431bde82);
      local_20 = uVar3 - (uint)uVar7;
      iStack_1c = iVar1 - ((int)((ulonglong)uVar7 >> 0x20) + (uint)(uVar3 < (uint)uVar7));
      iVar1 = fn_002b0b50(*param_1);
      iVar2 = fn_0011a36c(&local_20);
      if (iVar1 == iVar2) {
        iVar1 = fn_002b0b78(*param_1);
        iVar2 = fn_0011a3c4(&local_20);
        if (iVar1 == iVar2) {
          iVar1 = fn_002b0b2c(*param_1);
          iVar2 = fn_0011a314(&local_20);
          if (iVar1 == iVar2) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



undefined4 fn_00311350(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_002b0b84(*param_1);
  if (iVar1 == 0) {
    iVar1 = fn_002b0b50(*param_1);
    iVar2 = fn_0011a36c(param_1 + 2);
    if (iVar1 == iVar2) {
      iVar1 = fn_002b0b78(*param_1);
      iVar2 = fn_0011a3c4(param_1 + 2);
      if (iVar1 == iVar2) {
        iVar1 = fn_002b0b2c(*param_1);
        iVar2 = fn_0011a314(param_1 + 2);
        if (iVar1 == iVar2) {
          return 0;
        }
      }
    }
  }
  return 1;
}



undefined4 fn_0031122c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = fn_002b0c78(*param_1);
  if (iVar1 == 0) {
    uVar2 = fn_002b0c00(*param_1);
    uVar3 = fn_002b0c6c(*param_1);
    uVar4 = fn_002b0bc0(*param_1);
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    fn_00123d00(&local_28,uVar2,uVar3,uVar4);
    fn_00114248(&local_38);
    lVar6 = (ulonglong)(local_38 - local_28) * 1000000;
    local_20 = (undefined4)lVar6;
    local_1c = (local_34 - (iStack_24 + (uint)(local_38 < local_28))) * 1000000 +
               (int)((ulonglong)lVar6 >> 0x20);
    local_38 = 0x2d;
    uVar5 = fn_00129f6c(&local_20,local_20,0x48f948e3,0x683fff6f);
    iVar1 = (int)((ulonglong)uVar5 >> 0x20);
    if (iVar1 < (int)(uint)((uint)uVar5 < 2)) {
      local_38 = 0x2d;
      lVar6 = fn_00129f6c(&local_20,iVar1,0x48f948e3,0x683fff6f);
      if (lVar6 == 1) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      return uVar2;
    }
    fn_002b0c50(*param_1,0,0);
  }
  return 0;
}



void fn_00311198(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = fn_0011a314(param_1 + 2);
  uVar2 = fn_0011a3c4(param_1 + 2);
  uVar3 = fn_0011a36c(param_1 + 2);
  fn_002b0b5c(*param_1,uVar3,uVar2,uVar1);
  fn_001237e4(&local_18);
  local_20 = local_18;
  uStack_1c = uStack_14;
  uVar4 = fn_00129f6c(&local_20,local_18,0x26d694b3,0x112e0be8,0x1a);
  uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
  fn_002b0b44(*param_1,uVar1,(int)uVar4,uVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fn_00310f54(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  
  if (param_3 == 2) {
    iVar9 = *param_4;
    uVar10 = *(undefined4 *)(iVar9 + 0x10);
    *param_2 = uVar10;
    param_2[2] = uVar10;
    uVar10 = *(undefined4 *)(iVar9 + 0x14);
    param_2[1] = uVar10;
    param_2[3] = uVar10;
    fn_00310c40(param_1,param_4);
LAB_003110e0:
    param_4[1] = param_4[1] + 2;
    return 1;
  }
  if (param_3 < 3) {
    if (param_3 == 0) {
LAB_00310f8c:
      uVar10 = fn_00760774();
      return uVar10;
    }
    if (param_3 == 1) {
      iVar9 = *param_4;
      uVar10 = *(undefined4 *)(iVar9 + 0x10);
      *param_2 = uVar10;
      param_2[2] = uVar10;
      uVar10 = *(undefined4 *)(iVar9 + 0x14);
      param_2[1] = uVar10;
      param_2[3] = uVar10;
      uVar7 = _DAT_008981dc;
      uVar6 = _DAT_008981d8;
      uVar5 = _DAT_008981d4;
      uVar4 = _DAT_008981d0;
      uVar3 = _DAT_008981cc;
      uVar2 = _DAT_008981c4;
      uVar10 = _DAT_008981c0;
      uVar1 = *(ushort *)param_4[1];
      if (uVar1 == 5) {
        puVar8 = (undefined4 *)*param_4;
        *puVar8 = _DAT_008981d0;
        puVar8[1] = uVar4;
      }
      else if (uVar1 < 6) {
        if (uVar1 == 1) {
          puVar8 = (undefined4 *)*param_4;
          *puVar8 = _DAT_008981c0;
          puVar8[1] = uVar10;
        }
        else if (uVar1 == 2) {
          puVar8 = (undefined4 *)*param_4;
          *puVar8 = _DAT_008981cc;
          puVar8[1] = uVar3;
        }
        else if (uVar1 == 3) {
          puVar8 = (undefined4 *)*param_4;
          *puVar8 = _DAT_008981d4;
          puVar8[1] = uVar5;
        }
        else if (uVar1 == 4) {
          puVar8 = (undefined4 *)*param_4;
          *puVar8 = _DAT_008981dc;
          puVar8[1] = uVar7;
        }
      }
      else if (uVar1 == 6) {
        puVar8 = (undefined4 *)*param_4;
        *puVar8 = _DAT_008981d8;
        puVar8[1] = uVar6;
      }
      else if (uVar1 == 7) {
        puVar8 = (undefined4 *)*param_4;
        *puVar8 = _DAT_008981c4;
        puVar8[1] = uVar2;
      }
      else if (uVar1 == 0x1000) {
        fn_00310d20(param_1,param_4,&DAT_008981e4);
      }
      else if (uVar1 == 0x1001) {
        puVar8 = (undefined4 *)*param_4;
        uVar10 = *(undefined4 *)(param_1 + 4);
        *puVar8 = uVar10;
        puVar8[1] = uVar10;
      }
      goto LAB_003110e0;
    }
  }
  else if (param_3 == 9 || param_3 == 10) goto LAB_00310f8c;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fn_00310d9c(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  uVar7 = _DAT_008981dc;
  uVar6 = _DAT_008981d8;
  uVar5 = _DAT_008981d4;
  uVar4 = _DAT_008981d0;
  uVar3 = _DAT_008981cc;
  uVar2 = _DAT_008981c4;
  uVar8 = _DAT_008981c0;
  if (param_2 == 2) {
    fn_00310c40(param_1,param_3);
LAB_00310f0c:
    param_3[1] = param_3[1] + 2;
    return 1;
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
LAB_00310dd4:
      uVar8 = fn_007606cc();
      return uVar8;
    }
    if (param_2 == 1) {
      uVar1 = *(ushort *)param_3[1];
      if (uVar1 == 5) {
        puVar9 = (undefined4 *)*param_3;
        *puVar9 = _DAT_008981d0;
        puVar9[1] = uVar4;
      }
      else if (uVar1 < 6) {
        if (uVar1 == 1) {
          puVar9 = (undefined4 *)*param_3;
          *puVar9 = _DAT_008981c0;
          puVar9[1] = uVar8;
        }
        else if (uVar1 == 2) {
          puVar9 = (undefined4 *)*param_3;
          *puVar9 = _DAT_008981cc;
          puVar9[1] = uVar3;
        }
        else if (uVar1 == 3) {
          puVar9 = (undefined4 *)*param_3;
          *puVar9 = _DAT_008981d4;
          puVar9[1] = uVar5;
        }
        else if (uVar1 == 4) {
          puVar9 = (undefined4 *)*param_3;
          *puVar9 = _DAT_008981dc;
          puVar9[1] = uVar7;
        }
      }
      else if (uVar1 == 6) {
        puVar9 = (undefined4 *)*param_3;
        *puVar9 = _DAT_008981d8;
        puVar9[1] = uVar6;
      }
      else if (uVar1 == 7) {
        puVar9 = (undefined4 *)*param_3;
        *puVar9 = _DAT_008981c4;
        puVar9[1] = uVar2;
      }
      else if (uVar1 == 0x1000) {
        fn_00310d20(param_1,param_3,&DAT_008981e4);
      }
      else if (uVar1 == 0x1001) {
        puVar9 = (undefined4 *)*param_3;
        uVar8 = *(undefined4 *)(param_1 + 4);
        *puVar9 = uVar8;
        puVar9[1] = uVar8;
      }
      goto LAB_00310f0c;
    }
  }
  else if (param_2 == 9 || param_2 == 10) goto LAB_00310dd4;
  return 0;
}


