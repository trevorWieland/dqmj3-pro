#include "00667390_00668000.h"



undefined4 fn_00668000(int *param_1)

{
  undefined4 uVar1;
  
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)(param_1 + 0x13) & 0x10) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  fn_00673ce8(param_1,4);
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



undefined4 fn_00667c3c(int *param_1)

{
  undefined4 uVar1;
  
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)(param_1 + 0x13) & 0x10) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  fn_00673ce8(param_1,7);
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



void fn_00667c00(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 3;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



undefined4 fn_00667bc8(int *param_1)

{
  (**(code **)(*param_1 + 0x30))(param_1,0xb);
  return 1;
}



int fn_00667390(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_130 [256];
  undefined1 local_30 [8];
  undefined1 auStack_28 [16];
  
  uVar2 = DAT_00898840;
  iVar4 = 0;
  iVar5 = 0;
  switch(param_1[0x12]) {
  case 0:
    piVar3 = (int *)fn_0066eb80(DAT_00898840,2);
    iVar4 = (**(code **)(*piVar3 + 0x2c))(piVar3);
    if (iVar4 == 0) {
      fn_0066fd88(piVar3);
    }
    (**(code **)(*param_1 + 0x34))(param_1,1);
    break;
  case 1:
    iVar4 = fn_0066eb80(DAT_00898840,2);
    if ((*(byte *)(iVar4 + 0x4c) & 4) != 0) {
      fn_0066eb80(uVar2,6);
      fn_006701e0();
      (**(code **)(*param_1 + 0x34))(param_1,2);
    }
    break;
  case 2:
    iVar4 = fn_0066eb80(DAT_00898840,6);
    if ((*(byte *)(iVar4 + 0x4c) & 1) != 0) {
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x13] = param_1[0x13] | 2;
      (**(code **)(*param_1 + 0x34))(param_1,3);
    }
    break;
  case 3:
    bVar7 = (*(byte *)(param_1 + 0x13) & 2) == 0;
    if (bVar7) {
      iVar5 = param_1[0x1b];
    }
    if (bVar7 && iVar5 == 0) {
      fn_006d1828(auStack_28,param_1[0x21]);
      local_30[0] = 1;
      iVar1 = fn_006d3b54(auStack_28,local_30);
      if (iVar1 == 0) {
        iVar5 = -1;
        uVar2 = fn_0045a590();
        iVar4 = fn_00482b9c();
        param_1[0x1d] = iVar4;
        param_1[0x1e] = 1;
        *(undefined1 *)(param_1 + 0x1f) = 1;
        fn_0045a3b0(uVar2,auStack_130,0x80);
        fn_0045a5b0();
      }
      else {
        uVar2 = fn_0066eb80(uVar2,6);
        fn_00670370(uVar2,0x1acb00,param_1[0x21]);
        fn_00473c88(param_1[0x21],&DAT_00898858);
        iVar1 = fn_001287d4(0xe8,&DAT_00812c8c);
        param_1[0x22] = iVar1;
        piVar3 = (int *)0x0;
        if (iVar1 != 0) {
          piVar3 = (int *)fn_004a0ebc();
        }
        param_1[0x23] = (int)piVar3;
        (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(param_1[0x21] + 0x78));
        iVar1 = fn_001287d4(0x54,&DAT_00812c8c);
        param_1[0x24] = iVar1;
        piVar3 = (int *)0x0;
        if (iVar1 != 0) {
          piVar3 = (int *)fn_00468ad4();
        }
        param_1[0x25] = (int)piVar3;
        (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(param_1[0x21] + 0x78));
        iVar1 = fn_001287d4(0x78,&DAT_00812c8c);
        param_1[0x28] = iVar1;
        piVar3 = (int *)0x0;
        if (iVar1 != 0) {
          piVar3 = (int *)fn_0075189c();
        }
        param_1[0x29] = (int)piVar3;
        (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(param_1[0x21] + 0x78));
        iVar6 = param_1[0x29];
        iVar1 = fn_001249d0();
        if (iVar1 != 0) {
          iVar4 = *(int *)(iVar1 + 0xc);
        }
        piVar3 = (int *)(iVar4 + 0x50);
        (**(code **)(*piVar3 + 8))();
        *(undefined4 *)(iVar6 + 0x60) = 0xf;
        (**(code **)(*piVar3 + 0xc))(piVar3);
        param_1[0x13] = param_1[0x13] | 0x10;
      }
      (**(code **)(*param_1 + 0x34))(param_1,4);
    }
    break;
  case 4:
    iVar4 = fn_00673be8(param_1);
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
  }
  return iVar5;
}


