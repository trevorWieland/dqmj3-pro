#include "00100ba4_0010101c.h"



uint fn_0010101c(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *DAT_008f7f48;
  uVar1 = *DAT_008f7f4c;
  *DAT_008f7f4c = uVar1 + iVar2;
  DAT_008f7f48 = DAT_008f7f48 + 1;
  DAT_008f7f4c = DAT_008f7f4c + 1;
  if ((int *)((int)&DAT_008f7f44 + 3) < DAT_008f7f48) {
    DAT_008f7f48 = (int *)&DAT_008f7e6c;
  }
  else if ((uint *)((int)&DAT_008f7f44 + 3) < DAT_008f7f4c) {
    DAT_008f7f4c = (uint *)&DAT_008f7e6c;
  }
  return uVar1 + iVar2 & 0x7fffffff;
}



int fn_00100fe8(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_28 [2];
  undefined4 uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_28[0] = (param_2 >> 1) + param_2 + (param_2 >> 3);
  if (local_28[0] < param_2 + 0x20) {
    local_28[0] = param_2 + 0x20;
  }
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  puVar1 = (undefined4 *)fn_002ff78a(local_28,&uStack_18);
  iVar2 = fn_002ff0c8(param_1,*puVar1,param_4);
  return iVar2 + 0xc;
}



int fn_00100fc6(void)

{
  int iVar1;
  
  iVar1 = fn_002ff600();
  if (iVar1 == 0) {
    fn_002ff628(3);
  }
  return iVar1;
}



int fn_00100ef6(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int local_30;
  
  puVar6 = (undefined2 *)0x0;
  uVar1 = param_3[1];
  iVar4 = 0;
  iVar5 = param_3[2];
  local_30 = (*(code *)param_3[6])(param_2);
  if (param_4 == 0 && param_7 == 0) {
    while (iVar3 = (*(code *)param_3[8])(local_30), iVar3 != 0) {
      iVar4 = iVar4 + 1;
      local_30 = (*(code *)param_3[6])(param_2);
    }
  }
  if (local_30 == -1) {
    iVar4 = -1;
  }
  else {
    if ((uVar1 & 1) == 0) {
      puVar2 = (undefined4 *)*param_3;
      *param_3 = puVar2 + 1;
      puVar6 = (undefined2 *)*puVar2;
    }
    while ((0 < iVar5 && (local_30 != -1))) {
      if (param_4 == 0) {
        if ((param_7 == 0) && (iVar3 = (*(code *)param_3[8])(local_30), iVar3 != 0)) break;
      }
      else {
        iVar3 = fn_002ff5e0(param_4,param_5,param_6,local_30);
        if (iVar3 == 0) break;
      }
      if ((uVar1 & 1) == 0) {
        *puVar6 = (short)local_30;
        puVar6 = puVar6 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
      local_30 = (*(code *)param_3[6])(param_2);
    }
    (*(code *)param_3[7])(param_2);
    if (((param_7 == 0) && (0 < iVar4)) && ((uVar1 & 1) == 0)) {
      *puVar6 = 0;
    }
    if (((int)param_3[2] <= iVar5) || ((param_7 != 0 && (iVar5 != 0)))) {
      iVar4 = -2;
    }
  }
  return iVar4;
}



int fn_00100e0e(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 *puStack_1c;
  int local_18;
  
  local_38 = (undefined1 *)0x0;
  uVar1 = param_3[1];
  iVar6 = param_3[2];
  local_30 = 0;
  local_2c = 0;
  iVar5 = 0;
  uStack_24 = param_1;
  local_20 = param_2;
  puStack_1c = param_3;
  local_18 = param_4;
  uVar2 = (*(code *)param_3[6])(param_2);
  if (local_18 == 0 && param_7 == 0) {
    while (iVar4 = (*(code *)param_3[8])(uVar2), iVar4 != 0) {
      iVar5 = iVar5 + 1;
      uVar2 = (*(code *)param_3[6])(local_20);
    }
  }
  if (uVar2 == 0xffffffff) {
    iVar5 = -1;
  }
  else {
    if ((uVar1 & 1) == 0) {
      puVar3 = (undefined4 *)*param_3;
      *param_3 = puVar3 + 1;
      local_38 = (undefined1 *)*puVar3;
    }
    while ((0 < iVar6 && (uVar2 != 0xffffffff))) {
      if (local_18 == 0) {
        if ((param_7 == 0) && (iVar4 = (*(code *)param_3[8])(uVar2), iVar4 != 0)) break;
      }
      else {
        iVar4 = fn_002ff5e0(local_18,param_5,param_6,uVar2);
        if (iVar4 == 0) break;
      }
      if ((uVar1 & 1) == 0) {
        iVar4 = fn_002ff59c(local_38,uVar2 & 0xffff,&local_30);
        if (iVar4 == -1) goto LAB_00100eec;
        local_38 = local_38 + iVar4;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
      uVar2 = (*(code *)param_3[6])(local_20);
    }
    (*(code *)param_3[7])(local_20);
    if (((param_7 == 0) && (0 < iVar5)) && ((uVar1 & 1) == 0)) {
      *local_38 = 0;
    }
    if (((int)param_3[2] <= iVar6) || ((param_7 != 0 && (iVar6 != 0)))) {
LAB_00100eec:
      iVar5 = -2;
    }
  }
  return iVar5;
}



int fn_00100cee(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 local_40 [2];
  undefined2 *local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 *puStack_1c;
  int local_18;
  
  local_3c = (undefined2 *)0x0;
  local_34 = param_3[1];
  iVar5 = param_3[2];
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  iVar4 = 0;
  uStack_24 = param_1;
  local_20 = param_2;
  puStack_1c = param_3;
  local_18 = param_4;
  uVar1 = (*(code *)param_3[6])(param_2);
  if (local_18 == 0 && param_5 == 0) {
    while (iVar3 = (*(code *)param_3[8])(uVar1), iVar3 != 0) {
      iVar4 = iVar4 + 1;
      uVar1 = (*(code *)param_3[6])(local_20);
    }
  }
  if (uVar1 == 0xffffffff) {
    iVar4 = -1;
  }
  else {
    if ((local_34 & 1) == 0) {
      puVar2 = (undefined4 *)*param_3;
      *param_3 = puVar2 + 1;
      local_3c = (undefined2 *)*puVar2;
    }
    while ((0 < iVar5 && (uVar1 != 0xffffffff))) {
      if (local_18 == 0) {
        if ((param_5 == 0) && (iVar3 = (*(code *)param_3[8])(uVar1), iVar3 != 0)) break;
      }
      else if ((*(uint *)(((int)(((uint)((int)uVar1 >> 0x1f) >> 0x1b) + uVar1) >> 5) * 4 + local_18)
               & 1 << ((int)uVar1 % 0x20 & 0xffU)) == 0) break;
      iVar3 = fn_002fea88(local_40,uVar1 & 0xff,&local_30);
      if (iVar3 == -1) {
        (*(code *)param_3[7])(local_20);
        goto LAB_00100e04;
      }
      if (iVar3 == -2) {
        local_38 = 1;
      }
      else {
        local_38 = 0;
        if ((local_34 & 1) == 0) {
          *local_3c = local_40[0];
          local_3c = local_3c + 1;
        }
        iVar5 = iVar5 + -1;
      }
      iVar4 = iVar4 + 1;
      uVar1 = (*(code *)param_3[6])(local_20);
    }
    (*(code *)param_3[7])(local_20);
    if (local_38 == 0) {
      if (((param_5 == 0) && (0 < iVar4)) && ((local_34 & 1) == 0)) {
        *local_3c = 0;
      }
      if ((iVar5 < (int)param_3[2]) && ((param_5 == 0 || (iVar5 == 0)))) {
        return iVar4;
      }
    }
LAB_00100e04:
    iVar4 = -2;
  }
  return iVar4;
}



int fn_00100ba4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int local_38;
  int local_34;
  int local_30;
  int local_1c;
  
  lVar10 = 0;
  iVar8 = param_4[2];
  uVar6 = param_4[1];
  iVar5 = -1;
  do {
    iVar4 = iVar5;
    iVar5 = iVar4 + 1;
    local_30 = (*(code *)param_4[6])(param_2);
    iVar1 = (*(code *)param_4[8])();
  } while (iVar1 != 0);
  if (local_30 == -1) {
    return -1;
  }
  uVar7 = uVar6 & 0xfffff9ff;
  iVar1 = iVar5;
  iVar9 = iVar8;
  local_1c = param_3;
  if (iVar8 < 1) {
LAB_00100c0e:
    uVar6 = uVar7;
    if (param_3 != 0) goto LAB_00100c60;
    local_1c = 10;
  }
  else {
    if ((int)(uVar6 << 0x19) < 0) {
      if (local_30 != 0x2b) {
        if (local_30 != 0x2d) goto LAB_00100c08;
        uVar7 = uVar7 | 0x400;
      }
      iVar5 = iVar4 + 2;
      local_30 = (*(code *)param_4[6])(param_2);
      iVar8 = iVar8 + -1;
      iVar1 = iVar5;
      iVar9 = iVar8;
      if (iVar8 < 1) goto LAB_00100c0e;
    }
LAB_00100c08:
    iVar1 = iVar5;
    iVar9 = iVar8;
    if (local_30 != 0x30) goto LAB_00100c0e;
    uVar6 = uVar7 | 0x200;
    iVar1 = iVar5 + 1;
    iVar9 = iVar8 + -1;
    local_30 = (*(code *)param_4[6])(param_2);
    if ((iVar9 < 1) || ((local_30 != 0x78 && (local_30 != 0x58)))) {
      if (param_3 != 0) goto LAB_00100c60;
      local_1c = 8;
      uVar7 = uVar6;
    }
    else {
      if ((param_3 != 0) && (param_3 != 0x10)) goto LAB_00100c60;
      iVar1 = iVar5 + 2;
      iVar9 = iVar8 + -2;
      local_30 = (*(code *)param_4[6])(param_2);
      local_1c = 0x10;
    }
  }
  uVar6 = uVar7;
LAB_00100c60:
  while( true ) {
    local_34 = (int)((ulonglong)lVar10 >> 0x20);
    local_38 = (int)lVar10;
    if ((iVar9 < 1) || (iVar5 = fn_002ff284(local_30,local_1c), iVar5 < 0)) break;
    uVar6 = uVar6 | 0x200;
    iVar9 = iVar9 + -1;
    lVar10 = fn_002ff2f8(local_38,local_34,local_1c,local_1c >> 0x1f);
    lVar10 = lVar10 + iVar5;
    iVar1 = iVar1 + 1;
    local_30 = (*(code *)param_4[6])(param_2);
  }
  (*(code *)param_4[7])(param_2);
  if ((int)(uVar6 << 0x16) < 0) {
    if ((uVar6 & 1) == 0) {
      if ((int)(uVar6 << 0x19) < 0) {
        if ((int)(uVar6 << 0x15) < 0) {
          lVar10 = CONCAT44(-(uint)(local_38 != 0) - local_34,-local_38);
        }
        puVar2 = (undefined4 *)*param_4;
        *param_4 = puVar2 + 1;
        plVar3 = (longlong *)*puVar2;
      }
      else {
        puVar2 = (undefined4 *)*param_4;
        *param_4 = puVar2 + 1;
        plVar3 = (longlong *)*puVar2;
      }
      *plVar3 = lVar10;
    }
  }
  else {
    iVar1 = -2;
  }
  return iVar1;
}


