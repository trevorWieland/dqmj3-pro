#include "0066ae1c_0066bdc0.h"



bool fn_0066bdc0(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x13) & 0x10) != 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,3);
  }
  return bVar1;
}



bool fn_0066bd38(int *param_1)

{
  bool bVar1;
  
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,2);
    return true;
  }
  fn_00673ce8(param_1,2);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



undefined4 fn_0066bcf4(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    fn_00673b84(param_1);
    (**(code **)(*param_1 + 0x30))(param_1,0x1e);
  }
  return 1;
}



undefined4 fn_0066bcd4(void)

{
  return DAT_00898850;
}



undefined4 fn_0066bcb4(void)

{
  return DAT_0089884c;
}



int fn_0066b930(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = DAT_00898840;
  iVar3 = 0;
  switch(param_1[0x12]) {
  case 0:
    iVar2 = fn_0066eb80(DAT_00898840,6);
    if ((*(byte *)(iVar2 + 0x4c) & 2) == 0) {
      fn_00670598();
    }
    (**(code **)(*param_1 + 0x34))(param_1,1);
    break;
  case 1:
    iVar2 = fn_0066eb80(DAT_00898840,6);
    if ((*(byte *)(iVar2 + 0x4c) & 2) != 0) {
      DAT_00898844 = 0;
      DAT_00898848 = 0;
      DAT_0089884c = 0;
      DAT_00898850 = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x13] = param_1[0x13] | 2;
      (**(code **)(*param_1 + 0x34))(param_1,2);
    }
    break;
  case 2:
    bVar4 = (*(byte *)(param_1 + 0x13) & 2) == 0;
    if (bVar4) {
      iVar3 = param_1[0x1b];
    }
    if (bVar4 && iVar3 == 0) {
      *(undefined4 *)(DAT_008bf4f4 + 0x10) = DAT_00898848;
      *(undefined1 *)(DAT_00898840 + 0x4d) = 0;
      param_1[0x1c] = 1;
      param_1[0x1b] = 0;
      param_1[0x13] = param_1[0x13] | 2;
      (**(code **)(*param_1 + 0x34))(param_1,3);
    }
    break;
  case 3:
    bVar4 = (*(byte *)(param_1 + 0x13) & 2) == 0;
    if (bVar4) {
      iVar3 = param_1[0x1b];
    }
    if (bVar4 && iVar3 == 0) {
      iVar1 = fn_0066eb80(DAT_00898840,9);
      fn_004d5774(param_1 + 0x15e,iVar1 + 0x80);
      param_1[0x13] = param_1[0x13] | 0x20;
      fn_0066eb80(iVar2,0xb);
      fn_00673ff8();
      (**(code **)(*param_1 + 0x34))(param_1,4);
    }
    break;
  case 4:
    iVar2 = fn_0066eb80(DAT_00898840,0xb);
    if ((*(byte *)(iVar2 + 0x4c) & 4) != 0) {
      (**(code **)(*param_1 + 0x34))(param_1,5);
    }
    break;
  case 5:
    iVar2 = fn_00673be8(param_1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
  }
  return iVar3;
}



undefined4 fn_0066b1e0(int *param_1)

{
  undefined4 uVar1;
  
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)(param_1 + 0x13) & 0x10) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  fn_00673ce8(param_1,5);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    fn_00673ce8(param_1,2);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    uVar1 = 0;
    if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,1);
      uVar1 = 1;
    }
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,2);
    uVar1 = 1;
  }
  return uVar1;
}



int fn_0066b05c(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  iVar1 = param_1[0x12];
  if (iVar1 == 0) {
    iVar1 = fn_0066eb80(DAT_00898840,6);
    if ((*(byte *)(iVar1 + 0x4c) & 2) == 0) {
      fn_00670598();
    }
    (**(code **)(*param_1 + 0x34))(param_1,1);
  }
  else if (iVar1 == 1) {
    iVar1 = fn_0066eb80(DAT_00898840,6);
    if ((*(byte *)(iVar1 + 0x4c) & 2) != 0) {
      DAT_00898844 = 0;
      DAT_00898848 = 0;
      DAT_0089884c = 0;
      DAT_00898850 = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x13] = param_1[0x13] | 2;
      (**(code **)(*param_1 + 0x34))(param_1,2);
    }
  }
  else if (iVar1 == 2) {
    bVar3 = (*(byte *)(param_1 + 0x13) & 2) == 0;
    if (bVar3) {
      iVar2 = param_1[0x1b];
    }
    if (bVar3 && iVar2 == 0) {
      *(undefined4 *)(DAT_008bf4f4 + 0x10) = DAT_00898848;
      *(undefined1 *)(DAT_00898840 + 0x4d) = 1;
      param_1[0x13] = param_1[0x13] | 0x20;
      (**(code **)(*param_1 + 0x34))(param_1,3);
    }
  }
  else if ((iVar1 == 3) && (iVar1 = fn_00673be8(param_1), iVar1 == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return iVar2;
}



int fn_0066ae1c(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  switch(param_1[0x12]) {
  case 0:
    iVar1 = fn_0066eb80(DAT_00898840,6);
    if ((*(byte *)(iVar1 + 0x4c) & 2) == 0) {
      fn_00670598();
    }
    (**(code **)(*param_1 + 0x34))(param_1,1);
    break;
  case 1:
    iVar1 = fn_0066eb80(DAT_00898840,6);
    if ((*(byte *)(iVar1 + 0x4c) & 2) != 0) {
      DAT_00898844 = 0;
      DAT_00898848 = 0;
      DAT_0089884c = 0;
      DAT_00898850 = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x13] = param_1[0x13] | 2;
      (**(code **)(*param_1 + 0x34))(param_1,2);
    }
    break;
  case 2:
    bVar3 = (*(byte *)(param_1 + 0x13) & 2) != 0;
    if (!bVar3) {
      iVar2 = param_1[0x1b];
    }
    if (bVar3 || iVar2 != 0) {
      return iVar2;
    }
    *(undefined4 *)(DAT_008bf4f4 + 0x10) = DAT_00898848;
    if (*(int *)(*(int *)(param_1[0x23] + 8) + 0xc) != DAT_00898844) {
      *(undefined1 *)(DAT_00898840 + 0x4d) = 0;
      param_1[0x1c] = 1;
      param_1[0x1b] = 0;
      param_1[0x13] = param_1[0x13] | 2;
      (**(code **)(*param_1 + 0x34))(param_1,3);
      return iVar2;
    }
    *(undefined1 *)(DAT_00898840 + 0x4d) = 1;
    param_1[0x13] = param_1[0x13] | 0x20;
    goto LAB_0066b008;
  case 3:
    bVar3 = (*(byte *)(param_1 + 0x13) & 2) == 0;
    if (bVar3) {
      iVar2 = param_1[0x1b];
    }
    if (bVar3 && iVar2 == 0) {
      iVar1 = fn_0066eb80(DAT_00898840,9);
      fn_004d5774(param_1 + 0x15e,iVar1 + 0x80);
      param_1[0x13] = param_1[0x13] | 0x20;
      (**(code **)(*param_1 + 0x34))(param_1,4);
    }
    break;
  case 4:
    iVar1 = fn_0066eb80(DAT_00898840,0xb);
    if ((*(byte *)(iVar1 + 0x4c) & 8) != 0) {
      fn_00673ff8();
      (**(code **)(*param_1 + 0x34))(param_1,5);
    }
    break;
  case 5:
    iVar1 = fn_0066eb80(DAT_00898840,0xb);
    if ((*(byte *)(iVar1 + 0x4c) & 4) == 0) {
      return 0;
    }
LAB_0066b008:
    (**(code **)(*param_1 + 0x34))(param_1,6);
    break;
  case 6:
    iVar1 = fn_00673be8(param_1);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
  }
  return iVar2;
}


