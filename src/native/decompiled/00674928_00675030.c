#include "00674928_00675030.h"



undefined4 fn_00675030(undefined4 param_1,int param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [20];
  
  if (param_2 == 0) {
    local_48 = 0x36443042;
    uStack_44 = 0x34464635;
    uStack_40 = 0x3446442d;
    uStack_3c = 0x34342d46;
    uStack_38 = 0x412d3830;
    uStack_34 = 0x2d434130;
    uStack_30 = 0x35423730;
    uStack_2c = 0x33314438;
    local_28 = 0x31414146;
    uStack_24 = 0;
    fn_004eea3c(auStack_20,&local_48,0x25);
    fn_00674260(param_1,auStack_20);
  }
  else {
    fn_00674260();
  }
  if (*(char *)(DAT_00898840 + 0x4d) != '\0') {
    fn_00505148(DAT_008bf4e0);
  }
  return 0;
}



void fn_00674f6c(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *unaff_r4;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_3 != 0) {
    unaff_r4 = &DAT_008cfee8;
  }
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      uVar3 = uVar4 + 1;
      puVar2 = unaff_r4 + uVar4 * 3;
      puVar1 = (undefined4 *)(param_2 + uVar4 * 0xc);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      uVar4 = uVar3;
    } while (uVar3 < param_3);
  }
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      uVar3 = uVar4 + 1;
      if (uVar3 < param_3) {
        puVar1 = (undefined4 *)(param_2 + uVar4 * 0xc);
        do {
          uVar5 = puVar1[2];
          puVar2 = (undefined4 *)(param_2 + uVar3 * 0xc);
          if ((uint)puVar2[2] < uVar5) {
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            *puVar1 = *puVar2;
            puVar1[1] = puVar2[1];
            puVar1[2] = puVar2[2];
            *puVar2 = uVar6;
            puVar2[1] = uVar7;
            puVar2[2] = uVar5;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}



void fn_00674f58(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  DAT_0089885c = param_2;
  DAT_0089886c = param_3;
  return;
}



bool fn_00674ec4(int *param_1)

{
  bool bVar1;
  
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,4);
    return true;
  }
  fn_00673ce8(param_1,4);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    DAT_00898860 = 0;
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



undefined4 fn_00674db8(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1[0x12];
  if (iVar2 == 0) {
    if ((DAT_008bf4e0 != 0) && (iVar2 = fn_006d9250(), -1 < iVar2)) {
      fn_0050548c(DAT_008bf4e0);
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 0;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return 0;
      }
      iVar2 = fn_00673be8(param_1);
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x30))(param_1,0);
        return 0;
      }
      return 0;
    }
    iVar2 = fn_00505cc4();
    if (iVar2 == 0) {
      uVar1 = fn_0066e17c(DAT_00898840);
    }
    else {
      uVar1 = fn_00505ae4(DAT_008bf4e0);
      uVar1 = uVar1 & 0x80000000;
    }
    if (uVar1 != 0) {
      return 0;
    }
  }
  param_1[0x13] = param_1[0x13] & 0xfffffff7;
  (**(code **)(*param_1 + 0x34))(param_1,2);
  return 0;
}



undefined4 fn_00674b70(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_60 [4];
  undefined1 *local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [40];
  
  iVar2 = param_1[0x12];
  if (iVar2 == 0) {
    fn_00674d04(param_1,auStack_38);
    local_58 = 0;
    local_54 = 10000;
    local_50 = 1000;
    uStack_4c = 0xffffffff;
    local_48 = 0;
    uStack_44 = 1000;
    local_40 = 0;
    local_3c = 0;
    local_60[0] = 0;
    local_5c = auStack_38;
    fn_00507bf4(DAT_008bf4e8,local_60);
    (**(code **)(*param_1 + 0x34))(param_1,1);
  }
  else if (iVar2 == 1) {
    iVar2 = fn_0066eb80(DAT_00898840,8);
    uVar1 = fn_00507290(DAT_008bf4e8,iVar2 + 0xc28);
    if ((uVar1 & 0x80000000) == 0) {
      (**(code **)(*param_1 + 0x34))(param_1,2);
    }
  }
  else if (iVar2 == 2) {
    iVar2 = fn_006d9598(DAT_008bf4e8);
    if ((iVar2 != 0) && (uVar1 = fn_006d94a0(DAT_008bf4e8), (uVar1 & 0x80000000) == 0)) {
      param_1[0x13] = param_1[0x13] | 0x40;
      (**(code **)(*param_1 + 0x34))(param_1,3);
    }
  }
  else if ((iVar2 == 3) && (iVar2 = fn_00673be8(param_1), iVar2 == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return 0;
}



undefined4 fn_00674928(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_70;
  undefined1 *local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [40];
  
  iVar4 = DAT_00898840;
  uVar5 = 0;
  iVar1 = param_1[0x12];
  if (iVar1 == 0) {
    fn_0066eb80(DAT_00898840,3);
    fn_0066bd38();
    (**(code **)(*param_1 + 0x34))(param_1,1);
  }
  else if (iVar1 == 1) {
    iVar1 = fn_0066eb80(DAT_00898840,3);
    if ((*(byte *)(iVar1 + 0x4c) & 0x10) != 0) {
      iVar4 = fn_0066eb80(iVar4,6);
      uVar2 = fn_0067058c(iVar4);
      uVar3 = fn_00670650(iVar4);
      fn_00674d04(param_1,auStack_48);
      local_68 = 0;
      local_64 = 10000;
      local_60 = 1000;
      uStack_5c = 0xffffffff;
      uStack_58 = 0;
      local_54 = 1000;
      local_6c = auStack_48;
      local_50 = 0;
      local_4c = 0;
      local_70 = local_70 & 0xffffff00;
      fn_00507bf4(DAT_008bf4e8,&local_70);
      fn_005075f4(DAT_008bf4e8,iVar4 + 0x7c,uVar2,uVar3);
      (**(code **)(*param_1 + 0x34))(param_1,2);
    }
  }
  else if (iVar1 == 2) {
    iVar4 = fn_006d95d0(DAT_008bf4e8);
    if (iVar4 != 0) {
      local_70 = fn_006d95c8(DAT_008bf4e8);
      if ((local_70 & 0x80000000) == 0) {
        iVar4 = fn_006d9600(DAT_008bf4e8);
        if (iVar4 == 0) {
          *(undefined1 *)(DAT_00898840 + 0x4d) = 0;
        }
        else {
          *(undefined1 *)(DAT_00898840 + 0x4d) = 1;
        }
        param_1[0x13] = param_1[0x13] | 8;
        (**(code **)(*param_1 + 0x34))(param_1,3);
      }
      else {
        iVar4 = fn_004daa68(&local_70);
        param_1[0x1c] = 0;
        *(undefined1 *)(param_1 + 0x1d) = 0;
        param_1[0x1b] = iVar4;
        param_1[0x1c] = (uint)(iVar4 != 0);
        uVar5 = 0xffffffff;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
    }
  }
  else if ((iVar1 == 3) && (iVar4 = fn_00673be8(param_1), iVar4 == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return uVar5;
}



void fn_00674d04(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [72];
  
  if (DAT_00897804 != 0) {
    uVar3 = *(undefined4 *)(DAT_00897804 + 8);
    iVar2 = fn_006b64bc(uVar3);
    if (iVar2 == 0) {
      uVar3 = *(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4);
      fn_00301a9c(param_2,uVar3,0x22);
      uVar1 = fn_00100b58(uVar3);
      *(undefined1 *)(param_2 + 0x22) = uVar1;
    }
    else {
      fn_001f825c();
      uVar3 = fn_006b621c(uVar3);
      fn_006619ec(auStack_58,uVar3);
      fn_00301a9c(param_2,auStack_58,0x22);
      uVar1 = fn_00100b58(auStack_58);
      *(undefined1 *)(param_2 + 0x22) = uVar1;
      fn_0011ddb8();
    }
  }
  uVar1 = fn_00453b34();
  *(undefined1 *)(param_2 + 0x23) = uVar1;
  return;
}


