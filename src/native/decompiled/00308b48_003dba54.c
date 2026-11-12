#include "00308b48_003dba54.h"



undefined4 fn_003dba54(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (DAT_00897a2e != '\0') {
    *param_1 = DAT_00897a30;
    return 1;
  }
  fn_005f3aac(4);
  local_20 = 0x141000;
  uStack_1c = 0;
  iVar1 = fn_001c43dc(param_2,L"rom:/data/ExtSaveData/break.icn",&DAT_007ce538,&DAT_007ce548,
                       &DAT_007ce544,&local_20,0);
  if (iVar1 == 1) {
    return 0;
  }
  if (iVar1 == 2) {
    iVar1 = (**(code **)(*DAT_00897894 + 4))(DAT_00897894,0x1acb,0x100000);
    if (iVar1 == 0) {
      if (DAT_00897898 == -0x375f07c0) {
        uVar2 = 0x10;
      }
      else {
        uVar2 = 0x11;
      }
      *param_1 = uVar2;
      if (DAT_00897898 < 0) {
        fn_0015e590(DAT_00897898,0x3dbb80);
      }
    }
    else {
      *param_1 = 0;
    }
    goto LAB_003dbc18;
  }
  iVar1 = (int)*(char *)(param_2 + 6);
  if (iVar1 == -6) {
    uVar2 = 7;
  }
  else if (iVar1 < -5) {
    if (iVar1 == -10) {
      uVar2 = 0xb;
    }
    else if (iVar1 < -9) {
      if (iVar1 == -100) {
        uVar2 = 0xe;
      }
      else if (iVar1 == -0xc) {
        uVar2 = 0xd;
      }
      else {
        if (iVar1 != -0xb) goto switchD_003dbbc0_default;
        uVar2 = 0xc;
      }
    }
    else if (iVar1 == -9) {
      uVar2 = 10;
    }
    else if (iVar1 == -8) {
      uVar2 = 9;
    }
    else {
      if (iVar1 != -7) goto switchD_003dbbc0_default;
      uVar2 = 8;
    }
  }
  else {
    switch(iVar1) {
    case 0:
      uVar2 = 0;
      break;
    case -5:
      uVar2 = 5;
      break;
    case -4:
      uVar2 = 4;
      break;
    case -3:
      uVar2 = 3;
      break;
    case -2:
      uVar2 = 2;
      break;
    case -1:
      uVar2 = 1;
      break;
    default:
switchD_003dbbc0_default:
      uVar2 = 0x11;
    }
  }
  *param_1 = uVar2;
LAB_003dbc18:
  fn_001076bc(4);
  DAT_00897a30 = *param_1;
  DAT_00897a2e = 1;
  return 1;
}



void fn_00308b48(void)

{
  undefined4 local_10;
  
  local_10 = 0;
  fn_00163988(DAT_00897808,&local_10,1);
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  return;
}


