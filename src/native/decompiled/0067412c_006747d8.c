#include "0067412c_006747d8.h"



undefined4 fn_006747d8(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint local_18;
  
  iVar2 = param_1[0x12];
  local_18 = param_4;
  if (iVar2 == 0) {
    local_18 = fn_006d9250(DAT_008bf4e0);
    if ((local_18 & 0x80000000) == 0) {
      iVar2 = fn_0066e17c(DAT_00898840);
    }
    else {
      iVar2 = fn_004da684(&local_18);
      if (iVar2 != 6) goto LAB_006748b4;
      iVar2 = fn_0066e17c(DAT_00898840);
    }
    if (iVar2 != 0) {
      fn_00504fe0(DAT_008bf4e0);
    }
    (**(code **)(*param_1 + 0x34))(param_1,1);
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
    iVar2 = fn_00505aec();
    if (iVar2 == 0) {
      uVar1 = fn_0066e17c(DAT_00898840);
    }
    else {
      uVar1 = fn_005058bc(DAT_008bf4e0);
      uVar1 = uVar1 & 0x80000000;
    }
    if (uVar1 != 0) {
      return 0;
    }
LAB_006748b4:
    param_1[0x13] = param_1[0x13] & 0xffffffd3;
    (**(code **)(*param_1 + 0x34))(param_1,2);
  }
  return 0;
}



undefined4 fn_00674758(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0013d4ec();
  if ((undefined4 *)*puVar1 == param_2) {
    return 0;
  }
  puVar1 = DAT_008cfee8;
  if (DAT_008cfee8 != param_2) {
    puVar1 = DAT_008cfef4;
  }
  if (DAT_008cfee8 != param_2 && puVar1 != param_2) {
    puVar1 = DAT_008cff00;
    if (DAT_008cff00 != param_2) {
      puVar1 = DAT_008cff0c;
    }
    if (DAT_008cff00 != param_2 && puVar1 != param_2) {
      puVar1 = DAT_008cff18;
      if (DAT_008cff18 != param_2) {
        puVar1 = DAT_008cff24;
      }
      if (DAT_008cff18 != param_2 && puVar1 != param_2) {
        puVar1 = &DAT_008cfee8;
        if (DAT_008cff30 != param_2) {
          puVar1 = DAT_008cff3c;
        }
        if (DAT_008cff30 != param_2 && puVar1 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}



undefined4 fn_00674748(void)

{
  return DAT_00898860;
}



int fn_0067450c(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_18;
  
  iVar4 = 0;
  local_18 = param_4;
  switch(param_1[0x12]) {
  case 0:
    if (*(int *)(DAT_00898840 + 0x34) == 1) {
      iVar4 = fn_0066eb80(DAT_00898840,8);
      if ((*(byte *)(iVar4 + 0x4c) & 8) == 0) {
        fn_00671d74();
      }
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 0;
    }
    if (*(int *)(DAT_00898840 + 0x34) != 2) {
      return 0;
    }
    if (*(char *)(DAT_00898840 + 0x4c) == '\0') {
      fn_0066eb80(DAT_00898840,6);
      uVar1 = fn_00670620();
      iVar4 = fn_00675030(param_1,uVar1);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar2 = param_1[0x13] | 8;
    }
    else {
      uVar2 = param_1[0x13] | 0x20;
    }
    param_1[0x13] = uVar2;
    goto LAB_0067462c;
  case 1:
    iVar4 = fn_0066eb80(DAT_00898840,8);
    if ((*(byte *)(iVar4 + 0x4c) & 8) == 0) {
      return 0;
    }
    iVar4 = fn_00675030(param_1,0);
    if (iVar4 != 0) {
      return iVar4;
    }
LAB_0067462c:
    iVar4 = 0;
    (**(code **)(*param_1 + 0x34))(param_1,2);
    break;
  case 2:
    iVar3 = fn_0066eb80(DAT_00898840,9);
    uVar2 = fn_005047d0(DAT_008bf4e0,iVar3 + 0x80);
    if ((uVar2 & 0x80000000) == 0) {
      (**(code **)(*param_1 + 0x34))(param_1,3);
    }
    break;
  case 3:
    iVar3 = fn_005059d4(DAT_008bf4e0);
    if (iVar3 != 0) {
      local_18 = fn_00505b1c(DAT_008bf4e0);
      if ((local_18 & 0x80000000) == 0) {
        param_1[0x13] = param_1[0x13] | 4;
        (**(code **)(*param_1 + 0x34))(param_1,4);
      }
      else {
        iVar4 = -1;
        iVar3 = fn_004daa68(&local_18);
        param_1[0x1c] = 0;
        *(undefined1 *)(param_1 + 0x1d) = 0;
        param_1[0x1b] = iVar3;
        param_1[0x1c] = (uint)(iVar3 != 0);
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
    }
    break;
  case 4:
    iVar3 = fn_00673be8(param_1);
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
  }
  return iVar4;
}



undefined4 fn_006744e4(void)

{
  undefined4 local_10 [4];
  
  fn_006d91b8(local_10,DAT_008bf4e0);
  return local_10[0];
}



undefined4 fn_00674310(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  
  iVar3 = param_1[0x12];
  if (iVar3 == 0) {
    if (*(char *)(DAT_00898840 + 0x3c) == '\x01') {
      fn_0066eb80(DAT_00898840,10);
      fn_00670d4c();
    }
    else {
      fn_0066eb80(DAT_00898840,9);
      fn_006765e8();
    }
    (**(code **)(*param_1 + 0x34))(param_1,1);
  }
  else if (iVar3 == 1) {
    if (*(char *)(DAT_00898840 + 0x3c) == '\x01') {
      iVar3 = fn_0066eb80(DAT_00898840,10);
      bVar1 = *(byte *)(iVar3 + 0x4c);
    }
    else {
      iVar3 = fn_0066eb80(DAT_00898840,9);
      bVar1 = *(byte *)(iVar3 + 0x4c);
    }
    if ((bVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1e) = 0;
      iVar3 = fn_0066eb80(DAT_00898840,9);
      local_1b = 0;
      local_20 = *(undefined4 *)(iVar3 + 0x6c);
      local_1c = 0;
      uVar2 = fn_004f17ac();
      fn_004f1680(uVar2);
      uVar2 = fn_00504998(&local_20);
      fn_00507edc(uVar2);
      *(undefined1 **)(DAT_008bf4e0 + 0x3c) = &LAB_0067c610;
      *(code **)(DAT_008bf4e0 + 0x38) = fn_0067c37c;
      param_1[0x13] = param_1[0x13] | 1;
      (**(code **)(*param_1 + 0x34))(param_1,2);
    }
  }
  else if ((iVar3 == 2) && (iVar3 = fn_00673be8(param_1), iVar3 == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return 0;
}



void fn_00674260(undefined4 param_1,int param_2)

{
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined1 *local_5c;
  undefined4 uStack_58;
  undefined *puStack_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [40];
  
  fn_00674d04(param_1,auStack_30);
  local_68 = 10000;
  uStack_64 = 1000;
  uStack_58 = 0;
  puStack_54 = &DAT_00856d08;
  local_44 = 0xffffffff;
  local_40 = 0;
  uStack_3c = 1000;
  local_38 = 0;
  local_34 = 0;
  local_60 = 0;
  local_5c = auStack_30;
  local_50 = *(undefined1 *)(param_2 + 4);
  local_4c = *(undefined4 *)(param_2 + 8);
  local_48 = *(undefined4 *)(param_2 + 0xc);
  fn_00506138(DAT_008bf4e0,&local_68);
  return;
}



undefined4 fn_006741c8(int *param_1)

{
  byte bVar1;
  bool bVar2;
  
  if ((*(byte *)(param_1 + 0x13) & 0xe) == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,10);
    return 1;
  }
  fn_00673ce8(param_1,10);
  bVar1 = *(byte *)(DAT_008bf4e0 + 99);
  bVar2 = bVar1 == 0xb;
  if (bVar1 < 0xc) {
    bVar2 = bVar1 == *(byte *)(DAT_008bf4e0 + 0x62);
  }
  if (bVar2) {
    (**(code **)(*param_1 + 0x30))(param_1,8);
    return 1;
  }
  (**(code **)(*param_1 + 0x30))(param_1,9);
  return 1;
}



bool fn_0067412c(int *param_1)

{
  bool bVar1;
  
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,5);
    return true;
  }
  fn_00673ce8(param_1,5);
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


