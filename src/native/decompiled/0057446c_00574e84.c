#include "0057446c_00574e84.h"



void fn_00574e84(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00311508(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
  if (iVar1 == 0) {
    fn_0031154c(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
    fn_0015b0f8();
    *(undefined1 *)(param_1 + 0x119) = 7;
    uVar2 = fn_0022f584(DAT_00898ae0,0);
    fn_0068974c(param_1,uVar2,0,1);
    iVar1 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar1 + 0x38) = 0x100094b;
    *(undefined1 *)(iVar1 + 0x5f) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x118) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2 ==
      *(int *)(*(int *)(param_1 + 0x104) + 0x10)) {
    *(undefined1 *)(param_1 + 0x119) = 8;
    uVar2 = fn_0022f584(DAT_00898ae4,0);
    fn_0068974c(param_1,uVar2,0,1);
    iVar1 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar1 + 0x38) = 0x100094b;
    *(undefined1 *)(iVar1 + 0x5f) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x118) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x120) + (*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2) < 500
     ) {
    *(undefined1 *)(param_1 + 0x119) = 10;
    uVar2 = fn_0022f584(DAT_00898aec,0);
    fn_0068974c(param_1,uVar2,1,1);
    iVar1 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar1 + 0x38) = 0x100094b;
    *(undefined1 *)(iVar1 + 0x5f) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x118) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 9) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x119) = 9;
  uVar2 = fn_0022f584(DAT_00898ae8,0);
  fn_0068974c(param_1,uVar2,0,1);
  iVar1 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar1 + 0x38) = 0x100094b;
  *(undefined1 *)(iVar1 + 0x5f) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x118) = 1;
  return;
}



undefined1 * fn_005748c4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = param_2[3];
  local_20 = param_2[4];
  local_1c = *(undefined2 *)(param_2 + 5);
  iVar1 = fn_006c4734(&local_30);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  else if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  else if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 0x28) = 2;
  }
  iVar1 = fn_006c40c8(&local_30);
  if ((iVar1 != 0) && (iVar1 == 1)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80;
  }
  iVar1 = fn_006c41e4(&local_30);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  else if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x29) = 2;
  }
  else if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  *(undefined1 *)(param_1 + 0x2a) = 0;
  iVar1 = fn_006c476c(&local_30);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x2b) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x2b) = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  iVar1 = fn_006c41b0(&local_30);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  else if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  else if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 0x2c) = 2;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x44d;
  iVar1 = fn_006c4120(&local_30);
  if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x849) = 1;
  }
  else {
    iVar1 = fn_006c4120(&local_30);
    if (iVar1 == 2) {
      *(undefined1 *)(param_1 + 0x849) = 2;
    }
  }
  return (undefined1 *)&local_30;
}



int fn_0057481c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  fn_0017821c(param_1 + 0x54,param_2 + 0x54,0x3c0);
  *(undefined1 *)(param_1 + 0x414) = *(undefined1 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_2 + 0x418);
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_2 + 0x41c);
  uVar1 = *(undefined4 *)(param_2 + 0x424);
  uVar2 = *(undefined4 *)(param_2 + 0x428);
  uVar3 = *(undefined4 *)(param_2 + 0x42c);
  uVar4 = *(undefined4 *)(param_2 + 0x430);
  uVar5 = *(undefined4 *)(param_2 + 0x434);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x420);
  *(undefined4 *)(param_1 + 0x424) = uVar1;
  *(undefined4 *)(param_1 + 0x428) = uVar2;
  *(undefined4 *)(param_1 + 0x42c) = uVar3;
  *(undefined4 *)(param_1 + 0x430) = uVar4;
  *(undefined4 *)(param_1 + 0x434) = uVar5;
  fn_0017821c(param_1 + 0x438,param_2 + 0x438,0x1e);
  *(undefined1 *)(param_1 + 0x456) = *(undefined1 *)(param_2 + 0x456);
  fn_0017821c(param_1 + 0x458,param_2 + 0x458,0x60);
  return param_1;
}



undefined4 * fn_00574768(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *param_1 = &DAT_00858808;
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  param_1[7] = uVar6;
  param_1[8] = uVar7;
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  param_1[0x10] = uVar7;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  param_1[0x11] = *(undefined4 *)(param_2 + 0x44);
  param_1[0x12] = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x50);
  param_1[0x13] = *(undefined4 *)(param_2 + 0x4c);
  param_1[0x14] = uVar1;
  fn_0017821c(param_1 + 0x15,param_2 + 0x54,0x3c0);
  *(undefined1 *)(param_1 + 0x105) = *(undefined1 *)(param_2 + 0x414);
  param_1[0x106] = *(undefined4 *)(param_2 + 0x418);
  param_1[0x107] = *(undefined4 *)(param_2 + 0x41c);
  uVar1 = *(undefined4 *)(param_2 + 0x424);
  uVar2 = *(undefined4 *)(param_2 + 0x428);
  uVar3 = *(undefined4 *)(param_2 + 0x42c);
  uVar4 = *(undefined4 *)(param_2 + 0x430);
  uVar5 = *(undefined4 *)(param_2 + 0x434);
  param_1[0x108] = *(undefined4 *)(param_2 + 0x420);
  param_1[0x109] = uVar1;
  param_1[0x10a] = uVar2;
  param_1[0x10b] = uVar3;
  param_1[0x10c] = uVar4;
  param_1[0x10d] = uVar5;
  fn_0017821c(param_1 + 0x10e,param_2 + 0x438,0x1e);
  *(undefined1 *)((int)param_1 + 0x456) = *(undefined1 *)(param_2 + 0x456);
  fn_0017821c(param_1 + 0x116,param_2 + 0x458,0x60);
  return param_1;
}



undefined4 fn_00574694(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  
  iVar4 = 0;
  do {
    iVar3 = 0;
    do {
      if (*(int *)(param_1 + iVar4 * 0x10 + iVar3 * 4 + 4) != 0) {
        uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
        fn_0020bbc4(auStack_28,uVar1);
        piVar2 = (int *)fn_006c001c(auStack_24);
        if (*piVar2 != 0) {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return 0;
}



void fn_0057446c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_40 [36];
  
  fn_00127adc();
  iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar2 = fn_006b84b0(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = fn_00144df4(*(undefined4 *)(DAT_00897804 + 0xc),iVar5);
      uVar4 = (uint)(*(int *)(param_1 + 4) != 0);
      if (*(int *)(param_1 + 8) != 0) {
        uVar4 = uVar4 + 1;
      }
      if (*(int *)(param_1 + 0xc) != 0) {
        uVar4 = uVar4 + 1;
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar4 = uVar4 + 1;
      }
      *(undefined4 *)(param_1 + uVar4 * 4 + 4) = uVar3;
      if (iVar2 == 0) {
        uVar4 = (uint)(*(int *)(param_1 + 0x24) != 0);
        if (*(int *)(param_1 + 0x28) != 0) {
          uVar4 = uVar4 + 1;
        }
        if (*(int *)(param_1 + 0x2c) != 0) {
          uVar4 = uVar4 + 1;
        }
        if (*(int *)(param_1 + 0x30) != 0) {
          uVar4 = uVar4 + 1;
        }
        *(undefined4 *)(param_1 + 0x20 + uVar4 * 4 + 4) = uVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      uVar3 = fn_006b8538(*(undefined4 *)(DAT_00897804 + 0xc),iVar1);
      iVar1 = iVar1 + 1;
      uVar4 = (uint)(*(int *)(param_1 + 0x14) != 0);
      if (*(int *)(param_1 + 0x18) != 0) {
        uVar4 = uVar4 + 1;
      }
      if (*(int *)(param_1 + 0x1c) != 0) {
        uVar4 = uVar4 + 1;
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        uVar4 = uVar4 + 1;
      }
      *(undefined4 *)(param_1 + uVar4 * 4 + 0x14) = uVar3;
      uVar4 = (uint)(*(int *)(param_1 + 0x24) != 0);
      if (*(int *)(param_1 + 0x28) != 0) {
        uVar4 = uVar4 + 1;
      }
      if (*(int *)(param_1 + 0x2c) != 0) {
        uVar4 = uVar4 + 1;
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        uVar4 = uVar4 + 1;
      }
      *(undefined4 *)(param_1 + 0x20 + uVar4 * 4 + 4) = uVar3;
    } while (iVar1 < iVar2);
  }
  uVar3 = fn_006b846c(*(undefined4 *)(DAT_00897804 + 0xc));
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar3 = fn_006b8600(*(undefined4 *)(DAT_00897804 + 0xc));
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = 0;
  fn_00101a50(param_1 + 0x420,0xc,&LAB_0057435c,*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4));
  fn_00301a9c(auStack_40,&DAT_007ba154,0x1e);
  fn_0029432c(*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4),auStack_40);
  fn_00301a9c(param_1 + 0x438,auStack_40,0x1e);
  return;
}


