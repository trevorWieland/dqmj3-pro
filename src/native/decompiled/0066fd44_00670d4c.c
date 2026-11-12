#include "0066fd44_00670d4c.h"



bool fn_00670d4c(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



void fn_00670a88(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00859c58;
  fn_00100414(param_1 + 0x14f,&DAT_004d0ef4,0xa18,3);
  *param_1 = &DAT_00859e58;
  uVar1 = param_1[0x18];
  uVar2 = uVar1;
  if ((uint)param_1[0x19] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x19]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x1a] - uVar1) >> 2,0);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_00670a48(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) != 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,5);
  }
  return bVar1;
}



undefined4 fn_00670804(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    fn_00673b84(param_1);
    (**(code **)(*param_1 + 0x30))(param_1,4);
  }
  return 1;
}



undefined * fn_00670620(void)

{
  undefined4 uVar1;
  
  fn_0066eb80(DAT_00898840,3);
  uVar1 = fn_0066b1ac();
  fn_004d5518(uVar1,&DAT_008cfeb8);
  return &DAT_008cfeb8;
}



bool fn_00670598(int *param_1)

{
  bool bVar1;
  
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,2);
    return true;
  }
  fn_00673ce8(param_1,2);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



undefined4 fn_00670548(int *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x30))(param_1,3);
  uVar1 = fn_0066eb80(DAT_00898840,10);
  fn_00670f78();
  fn_0067127c(uVar1);
  return 1;
}



undefined4 fn_006703a8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_18;
  
  uVar3 = DAT_00898840;
  iVar1 = param_1[0x12];
  local_18 = param_4;
  if (iVar1 == 0) {
    fn_0066eb80(DAT_00898840,3);
    fn_0066680c();
    (**(code **)(*param_1 + 0x34))(param_1,1);
  }
  else if (iVar1 == 1) {
    iVar1 = fn_0066eb80(DAT_00898840,3);
    if ((*(byte *)(iVar1 + 0x4c) & 1) != 0) {
      piVar2 = (int *)fn_0066eb80(uVar3,7);
      iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2);
      if (iVar1 == 0) {
        fn_006734c4(piVar2);
      }
      (**(code **)(*param_1 + 0x34))(param_1,2);
    }
  }
  else if (iVar1 == 2) {
    iVar1 = fn_0066eb80(DAT_00898840,7);
    if ((*(byte *)(iVar1 + 0x4c) & 1) != 0) {
      local_18 = 0x4d8;
      uVar3 = fn_004c4c60(&local_18);
      uVar3 = fn_004c4b48(uVar3);
      uVar3 = fn_004d4f00(uVar3);
      fn_004d49e4(uVar3);
      param_1[0x13] = param_1[0x13] | 1;
      (**(code **)(*param_1 + 0x34))(param_1,3);
    }
  }
  else if ((iVar1 == 3) && (iVar1 = fn_00673be8(param_1), iVar1 == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return 0;
}



void fn_0067021c(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 6;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



bool fn_006701e0(int *param_1)

{
  bool bVar1;
  
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



undefined4 fn_006700a0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1[0x13] & 4U) == 0) {
    if ((param_1[0x13] & 1U) != 0) {
      (**(code **)(*param_1 + 0x30))(param_1,7);
      return 1;
    }
  }
  else {
    fn_00673ce8(param_1,7);
    (**(code **)(*param_1 + 0x30))(param_1,6);
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_0066fe10(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [8];
  int local_20;
  
  fn_00673cb8();
  switch(param_1[0x11]) {
  default:
    goto switchD_0066fe28_caseD_0;
  case 1:
    iVar2 = fn_0066f334(param_1);
    break;
  case 2:
    if ((param_1[0x12] != 0) || (iVar2 = fn_00673be8(param_1), iVar2 != 0))
    goto switchD_0066fe28_caseD_0;
    goto LAB_00670064;
  case 3:
    iVar2 = fn_0066ed9c(param_1);
    break;
  case 4:
    iVar2 = 0;
    if (param_1[0x12] == 0) {
      param_1[0x13] = param_1[0x13] & 0xfffffff7;
      iVar2 = fn_0066f464(param_1);
joined_r0x0066ffc8:
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x34))(param_1,1);
      }
    }
    else if (param_1[0x12] == 1) {
      param_1[0x13] = param_1[0x13] | 8;
      iVar1 = fn_00673be8(param_1);
joined_r0x0066ff90:
      iVar2 = 0;
      if (iVar1 == 0) {
        iVar2 = 0;
        (**(code **)(*param_1 + 0x30))(param_1,0);
      }
    }
    break;
  case 5:
    iVar2 = 0;
    if (param_1[0x12] == 0) {
      param_1[0x13] = param_1[0x13] & 0xfffffff7;
      iVar2 = fn_0066fa6c(param_1);
      goto joined_r0x0066ffc8;
    }
    if (param_1[0x12] == 1) {
      param_1[0x13] = param_1[0x13] | 8;
      iVar1 = fn_00673be8(param_1);
      goto joined_r0x0066ff90;
    }
    break;
  case 6:
    if (param_1[0x12] == 0) {
      iVar2 = fn_0052c6ec();
      if (iVar2 != 0) {
        fn_0052d320();
      }
LAB_00670024:
      (**(code **)(*param_1 + 0x34))(param_1,1);
      goto switchD_0066fe28_caseD_0;
    }
    if (param_1[0x12] != 1) goto switchD_0066fe28_caseD_0;
    iVar2 = fn_00673be8(param_1);
    goto joined_r0x00670060;
  case 7:
    if (param_1[0x12] == 0) {
      iVar2 = fn_0052c6ec();
      if (iVar2 != 0) {
        fn_0052da7c();
      }
      param_1[0x13] = 0;
      goto LAB_00670024;
    }
    if (param_1[0x12] != 1) goto switchD_0066fe28_caseD_0;
    iVar2 = fn_00673be8(param_1);
joined_r0x00670060:
    if (iVar2 == 0) {
LAB_00670064:
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
    goto switchD_0066fe28_caseD_0;
  }
  if (iVar2 != 0) {
    fn_00119b40(auStack_28);
    (**(code **)(*param_1 + 0x24))(param_1,auStack_28);
    if (local_20 != 0) {
      fn_0066e870(DAT_00898840,auStack_28);
    }
  }
switchD_0066fe28_caseD_0:
  fn_0066f670(param_1);
  return 1;
}



bool fn_0066fd88(int *param_1)

{
  bool bVar1;
  
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,3);
    return true;
  }
  fn_00673ce8(param_1,3);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



undefined4 fn_0066fd44(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    fn_00673b84(param_1);
    (**(code **)(*param_1 + 0x30))(param_1,2);
  }
  return 1;
}


