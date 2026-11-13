#include "001bd368_001bdd60.h"



/* WARNING: Removing unreachable block (ram,0x001bdd88) */

int fn_001bdd60(void)

{
  int iVar1;
  
  if (DAT_008bf5f4 == '\0') {
    iVar1 = 0x80;
  }
  else {
    iVar1 = 0x200;
  }
  return iVar1 * iVar1 * 3 + 0x340e0;
}



undefined4 * fn_001bdd44(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (DAT_008bf6c6 != '\0') {
    puVar1 = &DAT_008e9aa5;
  }
  return puVar1;
}



undefined8 fn_001bd660(int param_1,undefined *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffff38;
  if (param_1 == 0x15) {
    param_2 = &UNK_001bdac0;
  }
  else if (param_1 < 0x16) {
    switch(param_1) {
    case 1:
      param_2 = &UNK_0086eaec;
      break;
    case 2:
      param_2 = &UNK_0086e744;
      break;
    case 3:
      param_2 = &UNK_0086e78c;
      break;
    case 5:
      param_2 = &UNK_001bd8d0;
      break;
    case 6:
      param_2 = &UNK_0086ea50;
      break;
    case 7:
      param_2 = &UNK_0086e6ec;
      break;
    case 8:
      param_2 = &UNK_001bd914;
      break;
    case 9:
      param_2 = &UNK_0086e92c;
      break;
    case 10:
      param_2 = &UNK_0086e99c;
      break;
    case 0xb:
      param_2 = &UNK_001bd938;
      break;
    case 0xc:
      param_2 = &UNK_001bd974;
      break;
    case 0xd:
      param_2 = &UNK_0086e858;
      break;
    case 0x10:
      param_2 = &UNK_0086e9fc;
      break;
    case 0x11:
      param_2 = &UNK_0086e8c8;
      break;
    case 0x13:
      param_2 = &UNK_001bd9b8;
      break;
    case 0x14:
      param_2 = &UNK_001bdaa8;
    }
  }
  else if (param_1 == 0x39) {
    param_2 = &UNK_001bdcf0;
  }
  else if (param_1 < 0x3a) {
    switch(param_1) {
    case 0x32:
      param_2 = &UNK_001bdb2c;
      break;
    case 0x33:
      param_2 = &UNK_001bdb54;
      break;
    case 0x34:
      param_2 = &UNK_001bdb80;
      break;
    case 0x35:
      param_2 = &UNK_001bdb9c;
      break;
    case 0x36:
      param_2 = &UNK_001bdc80;
      break;
    case 0x37:
      param_2 = &UNK_001bdca4;
      break;
    case 0x38:
      param_2 = &UNK_001bdcc4;
    }
  }
  else if (param_1 == 0x3d) {
    param_2 = &UNK_001bdd2c;
  }
  else if (param_1 < 0x3e) {
    if (param_1 == 0x3a) {
      param_2 = &UNK_0086eaa0;
    }
    else if (param_1 == 0x3b) {
      param_2 = &UNK_0086e7d4;
      uVar1 = 0xfffffe6a;
    }
    else if (param_1 == 0x3c) {
      param_2 = &UNK_001bdd10;
    }
  }
  else if (param_1 == 0x3f3) {
    param_2 = &UNK_001bdb14;
    uVar1 = 0xfffffe6f;
  }
  else if (param_1 == 0x3f8) {
    param_2 = &UNK_001bdb08;
    uVar1 = 0xfffffe6e;
  }
  else if (param_1 == 0x3f9) {
    param_2 = &UNK_001bdaf8;
    uVar1 = 0xfffffe6e;
  }
  return CONCAT44(param_2,uVar1);
}



undefined4 fn_001bd64c(undefined4 param_1)

{
  fn_007437c8(param_1,1);
  return 1;
}



undefined4 fn_001bd5d8(undefined4 param_1)

{
  int iVar1;
  uint local_18;
  int *local_14;
  
  local_14 = (int *)fn_00166e14(param_1,1);
  local_18 = 0x5000002;
  fn_00173d1c(param_1,&local_18);
  if (((local_18 & 0x8000000) != 0) &&
     (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_14 + 8))();
  }
  return 1;
}



undefined4 fn_001bd5c8(void)

{
  fn_00743258();
  return 0;
}



undefined4 fn_001bd58c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  fn_00742020(param_1,*piVar1 != 0x1000001);
  return 0;
}



void fn_001bd368(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  puVar1 = &local_60;
  local_60 = DAT_008e9960 | 0x80000000;
  if (DAT_008e994c == '\0') {
    fn_0017821c(&local_60,&DAT_007e1124,0x50);
    local_58 = param_1[3];
    uVar2 = 0x50;
    local_50 = param_1[2];
    local_4c = param_1[1];
    local_48 = *param_1;
    local_44 = param_1[7];
    local_40 = param_1[6];
    local_3c = param_1[5];
    local_38 = param_1[4];
    local_34 = param_1[0xb];
    local_30 = param_1[10];
    local_2c = param_1[9];
    local_28 = param_1[8];
    local_24 = param_1[0xf];
    local_20 = param_1[0xe];
    local_1c = param_1[0xd];
    local_18 = param_1[0xc];
  }
  else {
    local_5c = 0xf02c0;
    uStack_54 = 0xff02c1;
    local_58 = *param_1;
    fn_00734b4c(&local_60,0x10,1);
    fn_00734b4c(param_1 + 1,0x3c,1);
    puVar1 = (uint *)&DAT_007e0a4c;
    uVar2 = 4;
  }
  fn_00734b4c(puVar1,uVar2,1);
  return;
}


