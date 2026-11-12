#include "0013fb54_001404c8.h"



void fn_001404c8(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int local_2c [2];
  undefined1 *local_24;
  undefined *local_20;
  undefined1 *local_1c;
  
  if (*(char *)(param_1 + 0x15) != '\0') {
    fn_001521a8(param_1);
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  fn_0013c500(param_1 + 8);
  local_2c[1] = 4;
  local_24 = &LAB_001675a0;
  local_20 = &DAT_001775e4;
  local_1c = &LAB_001775d8;
  local_2c[0] = param_1;
  uVar1 = fn_0014e2f4(param_1,local_2c + 1,fn_0015211c,local_2c,*param_3 + param_3[1],param_2,
                       0xfffffffe,0);
  if (((uVar1 & 0x7e00000) != 0x600000) && ((int)uVar1 < 0)) {
    fn_0015e294(uVar1);
  }
  if (-1 < (int)uVar1) {
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return;
}



undefined4 * fn_0014044c(void)

{
  int iVar1;
  
  if (((DAT_008c3590 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c3590), iVar1 != 0)) {
    DAT_008f2a64 = 0;
    DAT_008f2a68 = 1;
    DAT_008f2a6c = 0;
    DAT_008f2a70 = 0;
    DAT_008f2a74 = 0xffffffff;
    DAT_008f2a78 = 0;
    DAT_008f2a79 = 0;
  }
  return &DAT_008f2a64;
}



int fn_001403d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else if (param_3 == 1) {
    iVar1 = 1;
  }
  else {
    iVar1 = param_1;
    if (param_3 == 2) {
      iVar1 = 2;
    }
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar1 = fn_0014da74(param_1 + 4,param_2,param_2,param_2 >> 0x1f,iVar1);
    *(int *)(param_1 + 0x18) = iVar1;
    return (iVar1 >> 0x1f) + 1;
  }
  iVar1 = fn_0014da74(param_1 + 4,param_2,param_2,param_2 >> 0x1f,iVar1);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x140440);
  }
  return 1;
}



int fn_0014036c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = param_4;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar1 = fn_0014d9ec(param_1 + 4,param_4,param_2,param_3);
    *(int *)(param_1 + 0x18) = iVar1;
    return (iVar1 >> 0x1f) + 1;
  }
  iVar1 = fn_0014d9ec(param_1 + 4,&local_10,param_2,param_3);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x1403bc);
  }
  *param_4 = local_10;
  return 1;
}



void fn_0013fd24(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  if (((char)param_1[0x27] != '\0') &&
     (iVar4 = (**(code **)(*param_1 + 0x20))(param_1), *(char *)(iVar4 + 0xf) != '\0'))
  goto LAB_0013fd6c;
  if (*(char *)(iVar3 + 0x10) != '\0') {
    iVar3 = fn_00141104();
    iVar4 = fn_00140e98(iVar3,5);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0x184);
    *(undefined1 *)(iVar4 + 4) = 0xc;
    uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
    *(undefined4 *)(iVar4 + 0x10) = uVar5;
    fn_001411b8(iVar3,iVar4);
    goto LAB_0013fd6c;
  }
  iVar3 = (**(code **)(*param_1 + 0x14))(param_1);
  if (iVar3 == 0) {
    return;
  }
  if (*(char *)((int)param_1 + 0x9a) != '\0') {
    if (param_1[0x29] == 0) {
      if (*(char *)((int)param_1 + 0xa1) == '\0' || *(char *)((int)param_1 + 0xa1) == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x0013fe64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x10))(param_1);
        return;
      }
    }
    else {
      param_1[0x29] = param_1[0x29] + -1;
    }
  }
  bVar2 = false;
  if (*(char *)((int)param_1 + 0x99) == '\0') {
    if ((char)param_1[0x26] == '\0') {
      return;
    }
    iVar3 = (**(code **)(*param_1 + 0x14))(param_1);
    if (iVar3 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
    bVar2 = true;
LAB_0013fe94:
    if (param_1[0x2a] != -1) {
      param_1[0x2a] = param_1[0x2a] + 1;
    }
    uVar6 = (uint)*(byte *)((int)param_1 + 0xa1);
    bVar10 = uVar6 != 2;
    if (bVar10) {
      uVar6 = param_1[0x2b];
    }
    if (bVar10 && uVar6 != 0xffffffff) {
      param_1[0x2b] = uVar6 + 1;
    }
  }
  else if ((char)param_1[0x28] == '\x01') goto LAB_0013fe94;
  cVar1 = *(char *)((int)param_1 + 0xa1);
  if (cVar1 == '\0') {
LAB_0013ff08:
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  else if (cVar1 == '\x01') {
    if (param_1[0x21] < param_1[0x20]) {
      param_1[0x21] = param_1[0x21] + 1;
    }
  }
  else if (cVar1 == '\x03') {
    if (param_1[0x21] < param_1[0x20]) {
      param_1[0x21] = param_1[0x21] + 1;
    }
    goto LAB_0013ff08;
  }
  piVar7 = (int *)param_1[8];
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7,param_1[10],param_1);
  }
  if (param_1[7] != 0) {
    local_48 = 0x3f800000;
    local_44 = 0x3f800000;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    if (param_1[0x2a] != 0) {
      local_48 = param_1[0xc];
      local_44 = param_1[0xd];
      local_40 = param_1[0xe];
      local_3c = param_1[0xf];
      local_38 = param_1[0x10];
      local_34 = param_1[0x11];
      local_30 = param_1[0x12];
      local_2c = param_1[0x13];
      local_28 = param_1[0x14];
      local_24 = param_1[0x15];
    }
    (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],param_1[10],param_1[0x2c],&local_48);
    param_1[0xc] = local_48;
    param_1[0xd] = local_44;
    param_1[0xe] = local_40;
    param_1[0xf] = local_3c;
    param_1[0x10] = local_38;
    param_1[0x11] = local_34;
    param_1[0x12] = local_30;
    param_1[0x13] = local_2c;
    param_1[0x14] = local_28;
    param_1[0x15] = local_24;
  }
  iVar3 = param_1[5];
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0x48);
    iVar8 = *(int *)(iVar3 + 0x4c);
    iVar9 = *(int *)(iVar3 + 0x50);
    param_1[0x19] = *(int *)(iVar3 + 0x54);
    param_1[0x16] = iVar4;
    param_1[0x17] = iVar8;
    param_1[0x18] = iVar9;
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  if ((*(char *)((int)param_1 + 0x9b) == '\0') || (param_1[0x1d] < param_1[0x1c])) {
    iVar3 = fn_00141104();
    if (bVar2) {
      iVar4 = fn_00140e98(iVar3,6);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0x184);
      *(undefined1 *)(iVar4 + 4) = 5;
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
      *(undefined4 *)(iVar4 + 0x10) = uVar5;
      fn_001411b8(iVar3,iVar4);
      *(undefined1 *)((int)param_1 + 0x99) = 1;
      *(undefined1 *)(param_1 + 0x26) = 0;
    }
    if (*(char *)((int)param_1 + 0xa1) == '\x01') {
      if (param_1[0x20] <= param_1[0x21]) {
        iVar4 = fn_00140e98(iVar3,6);
        *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0x184);
        *(undefined1 *)(iVar4 + 4) = 7;
        uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
        *(undefined4 *)(iVar4 + 0x10) = uVar5;
        *(undefined1 *)(iVar4 + 0x14) = 1;
        fn_001411b8(iVar3,iVar4);
        *(undefined1 *)((int)param_1 + 0xa1) = 2;
      }
    }
    else if ((*(char *)((int)param_1 + 0xa1) == '\x03') && (param_1[0x20] <= param_1[0x21])) {
      *(undefined1 *)((int)param_1 + 0xa1) = 0;
    }
    if (*(char *)((int)param_1 + 0xa3) != '\0') {
      iVar4 = fn_00140e98(iVar3,6);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0x184);
      *(undefined1 *)(iVar4 + 4) = 7;
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
      *(undefined4 *)(iVar4 + 0x10) = uVar5;
      *(undefined1 *)(iVar4 + 0x14) = 0;
      fn_001411b8(iVar3,iVar4);
      *(undefined1 *)((int)param_1 + 0xa3) = 0;
    }
    if (*(char *)((int)param_1 + 0xa2) == '\x01') {
      if (param_1[0x24] <= param_1[0x25]) {
        *(undefined1 *)((int)param_1 + 0xa2) = 2;
      }
      return;
    }
    if ((*(char *)((int)param_1 + 0xa2) == '\x03') && (param_1[0x24] <= param_1[0x25])) {
      *(undefined1 *)((int)param_1 + 0xa2) = 0;
    }
    return;
  }
  *(undefined1 *)((int)param_1 + 0x9b) = 0;
LAB_0013fd6c:
                    /* WARNING: Could not recover jumptable at 0x0013fd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



undefined4 fn_0013fb54(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_78;
  uint local_74;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_54;
  int iStack_34;
  undefined4 local_30;
  uint uStack_2c;
  int local_28;
  
  if ((param_3 & 0x1f) != 0) {
    return 0;
  }
  iVar7 = param_3 + param_4;
  local_78 = param_3;
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  iVar1 = fn_00151b9c(param_1,param_2,&local_78,iVar7);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = fn_001457bc(local_30,&local_68);
    if (iVar1 != 0) {
      iVar1 = fn_00151d48(param_1,local_68,&local_78,iVar7);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = fn_001519a8(param_1,local_54,&local_78,iVar7);
      uVar5 = local_78;
      if (iVar1 == 0) {
        return 0;
      }
      if ((local_78 & 0x1f) != 0) {
        return 0;
      }
      uVar2 = local_60 * 0x3298 + 0x1fU & 0xffffffe0;
      local_74 = local_78 + uVar2;
      if (0 < (int)(local_74 - iVar7)) {
        return 0;
      }
      uVar6 = 0;
      uVar4 = local_78;
      if (uVar2 / 0x3298 != 0) {
        do {
          if (uVar4 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = fn_00152258(uVar4,(uint *)(param_1 + 0xb8));
          }
          fn_0017d948(param_1 + 0xcc,param_1 + 0xd0,iVar1 + 0xf8);
          uVar6 = uVar6 + 1;
          uVar4 = uVar4 + 0x3298;
        } while (uVar6 < uVar2 / 0x3298);
      }
      *(uint *)(param_1 + 0xb8) = uVar5;
      *(uint *)(param_1 + 0xbc) = uVar2;
      local_78 = local_74;
      if ((local_74 & 0x1f) != 0) {
        return 0;
      }
      uVar5 = local_74 + (local_64 * 0x138 + 0x1fU & 0xffffffe0);
      if (0 < (int)(uVar5 - iVar7)) {
        return 0;
      }
      fn_001626ec(param_1 + 0xf4);
      local_78 = uVar5;
    }
    if ((param_5 != 0) && (iVar1 = fn_00151f74(param_1,&local_78,iVar7,param_5), iVar1 == 0)) {
      return 0;
    }
    *(undefined4 *)(param_1 + 4) = local_30;
    *(uint *)(param_1 + 0x104) = param_3;
    *(int *)(param_1 + 0x108) = local_28;
    uVar3 = 1;
  }
  return uVar3;
}


