#include "00308b84_003dbca4.h"



undefined4 fn_003dbca4(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_1c [2];
  
  uVar5 = 1;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  switch(uVar1) {
  case 2:
    uVar5 = 0;
    break;
  case 3:
    if (*(char *)((int)param_1 + 10) == '\0') {
      fn_00227398();
    }
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    switch(param_1[1]) {
    case 1:
      fn_003dcb88(param_1,1,5,0,0);
      break;
    case 2:
      fn_003dcb88(param_1,1,7,0,0);
      break;
    case 3:
    case 5:
switchD_003dbd5c_caseD_3:
      fn_003dcb88(param_1,1,10,0,0);
      break;
    case 4:
      fn_003dcb88(param_1,1,10,0,0);
      *(undefined1 *)((int)param_1 + 0xb) = 1;
      break;
    case 6:
      fn_003dcb88(param_1,1,0x15,0,0);
    }
    break;
  case 4:
    if (*(char *)((int)param_1 + 10) == '\0') {
      fn_00682a8c();
    }
    DAT_00897a2c = 0;
    fn_003db960(param_1,1);
    fn_003db9f0(param_1,1,2,7,(int)(char)param_1[2]);
    fn_003db9f0(param_1,1,0,0,0);
    goto switchD_003dc880_caseD_6;
  case 5:
    if (DAT_00897a2d == 0) {
      fn_003dcb88(param_1,1,6,0,0);
      return 1;
    }
    fn_003db960(param_1,0xffffffff);
    iVar3 = (**(code **)(*DAT_00897894 + 0x18))(DAT_00897894,0);
    if (iVar3 == 0) goto LAB_003dc068;
    fn_003db9f0(param_1,1,9,0,0);
    param_1[0x38] = 1;
    goto switchD_003dc880_caseD_6;
  case 6:
    iVar3 = (**(code **)(*DAT_00897894 + 0x18))(DAT_00897894,0);
    if (iVar3 != 0) {
      fn_0022806c(DAT_00897894);
      iVar3 = fn_00227c88();
      DAT_00897a2d = iVar3 == 2;
    }
    if ((DAT_00897a2c & ~DAT_00897a2d) != 0) goto switchD_003dbd5c_caseD_3;
    goto LAB_003dc1c8;
  case 7:
    iVar3 = fn_00154ac8(0x322);
    if (iVar3 != 0) {
      DAT_00897a2c = 1;
      fn_003dcb88(param_1,1,10,0,0);
      return 1;
    }
    goto LAB_003dc1c8;
  case 8:
    uVar2 = (**(code **)(*DAT_00897894 + 0x18))(DAT_00897894,0);
    if (uVar2 != 0) {
      fn_0022806c(DAT_00897894);
      iVar3 = fn_00227c88();
      DAT_00897a2d = iVar3 == 2;
    }
    if ((((int)(char)DAT_00897a2c | uVar2) & ~(int)(char)DAT_00897a2d) != 0)
    goto switchD_003dbd5c_caseD_3;
LAB_003dc1c8:
    fn_003dcb88(param_1,1,4,0,0);
    *(undefined1 *)(param_1 + 2) = 0;
    break;
  case 9:
    if ((*(char *)((int)param_1 + 0xb) != '\0') ||
       (iVar3 = (**(code **)(*DAT_00897894 + 0x18))(DAT_00897894,0), iVar3 == 0 && DAT_00897a2c == 0
       )) {
      fn_003db960(param_1,0xffffffff);
      fn_003db9f0(param_1,1,2,1,param_1[0x39]);
      goto LAB_003dc068;
    }
    fn_003db960(param_1,0xffffffff);
    fn_003db9f0(param_1,1,2,2,param_1[0x38]);
    DAT_00897a2c = 0;
    fn_003db9f0(param_1,1,0x13,0,0);
    fn_003db9f0(param_1,1,0x16,0,0);
    fn_003db9f0(param_1,1,2,6,0);
    fn_003db9f0(param_1,1,0x17,0,0);
    fn_003db9f0(param_1,1,2,1,0x1a);
    fn_003db9f0(param_1,1,4,0,0);
    fn_003db9f0(param_1,0,2,1,0x1b);
    fn_003db9f0(param_1,0,4,0,0);
    goto switchD_003dc880_caseD_6;
  case 10:
    iVar3 = fn_00453d0c();
    if (iVar3 == 0) {
      fn_003db960(param_1,0xffffffff);
      fn_003db9f0(param_1,1,2,2,2);
      fn_003db9f0(param_1,1,2,4,1);
      fn_003db9f0(param_1,1,0xc,0,0);
      fn_003db9f0(param_1,0,9,0,0);
      param_1[0x39] = 3;
      param_1[0x38] = 4;
      param_1[0x33] = 1;
      param_1[0x35] = (param_1[0x35] + 1) % 8;
    }
    else {
      fn_003dcb88(param_1,1,0xf,0,0);
    }
    break;
  case 0xc:
    fn_005f3c94(DAT_00897850);
    fn_003db9f0(param_1,1,2,4,1);
    fn_003db9f0(param_1,1,0xd,0,0);
    param_1[0x33] = 1;
    param_1[0x35] = (param_1[0x35] + 1) % 8;
    break;
  case 0xd:
    iVar3 = fn_0066e42c(DAT_00897850);
    if (iVar3 == 0) {
      return 1;
    }
    fn_003db960(param_1,1);
    fn_003db9f0(param_1,1,2,4,0);
    iVar3 = fn_00453d0c();
    if (iVar3 == 0) {
      fn_003db9f0(param_1,1,9,0,0);
      iVar3 = 4;
      iVar4 = 3;
      goto LAB_003dc6d8;
    }
    fn_003db9f0(param_1,1,0xf,0,0);
    goto switchD_003dc880_caseD_6;
  case 0xf:
    iVar3 = fn_0044c9fc();
    if (iVar3 == 0) {
      param_1[0x38] = 6;
      param_1[0x39] = 5;
      fn_003dcb88(param_1,1,9,0,0);
    }
    else {
      fn_003dcb88(param_1,1,0x10,0,0);
    }
    break;
  case 0x10:
    iVar3 = fn_006a7b90(param_1 + 0x3b,&DAT_007ce538);
    if (iVar3 == -6) {
      local_1c[0] = 7;
    }
    else if (iVar3 < -5) {
      if (iVar3 == -10) {
        local_1c[0] = 0xb;
      }
      else if (iVar3 < -9) {
        if (iVar3 == -100) {
          local_1c[0] = 0xe;
        }
        else if (iVar3 == -0xc) {
          local_1c[0] = 0xd;
        }
        else {
          if (iVar3 != -0xb) goto switchD_003dc578_default;
          local_1c[0] = 0xc;
        }
      }
      else if (iVar3 == -9) {
        local_1c[0] = 10;
      }
      else if (iVar3 == -8) {
        local_1c[0] = 9;
      }
      else {
        if (iVar3 != -7) goto switchD_003dc578_default;
        local_1c[0] = 8;
      }
    }
    else {
      switch(iVar3) {
      case 0:
        local_1c[0] = 0;
        break;
      case -5:
        local_1c[0] = 5;
        break;
      case -4:
        local_1c[0] = 4;
        break;
      case -3:
        local_1c[0] = 3;
        break;
      case -2:
        local_1c[0] = 2;
        break;
      case -1:
        local_1c[0] = 1;
        break;
      default:
switchD_003dc578_default:
        local_1c[0] = 0x11;
      }
    }
    if (((local_1c[0] == 0) && (iVar3 = (**(code **)*DAT_00897894)(), iVar3 == 0)) &&
       (iVar3 = (**(code **)(*DAT_00897894 + 4))(DAT_00897894,0x1acb,0x100000), iVar3 == 0)) {
      if (DAT_00897898 == -0x375f07c0) {
        local_1c[0] = 0x10;
      }
      else {
        local_1c[0] = 0x11;
      }
      if (DAT_00897898 < 0) {
        fn_0015e590(DAT_00897898,0x3dc690);
      }
    }
    param_1[0x3a] = 0x3c;
    DAT_00897a2e = 0;
    fn_003db960(param_1,0xffffffff);
    if (local_1c[0] == 5) {
LAB_003dc7f0:
      fn_003db9f0(param_1,1,9,0,0);
      iVar3 = 8;
      iVar4 = 7;
    }
    else if (local_1c[0] < 6) {
      if (local_1c[0] == 0) {
        fn_003db9f0(param_1,1,0x18,0,0);
        *(undefined1 *)(param_1 + 2) = 1;
        goto switchD_003dc880_caseD_6;
      }
      if ((local_1c[0] == 1 || local_1c[0] == 2) || local_1c[0] == 4) goto LAB_003dc7f0;
LAB_003dc6b8:
      fn_003db9f0(param_1,1,9,0,0);
      iVar3 = 0x18;
      iVar4 = 0x17;
    }
    else if (local_1c[0] == 0xc) {
      *(undefined1 *)((int)param_1 + 9) = 1;
      fn_003db9f0(param_1,1,2,2,10);
      fn_003db9f0(param_1,1,2,5,1);
      fn_003db9f0(param_1,1,0x11,0,0);
      fn_003db9f0(param_1,0,9,0,0);
      iVar3 = 0xc;
      iVar4 = 0xb;
    }
    else if (local_1c[0] == 0xd) {
      fn_003db9f0(param_1,1,2,2,9);
      fn_003db9f0(param_1,1,2,5,1);
      fn_003db9f0(param_1,1,0x11,0,0);
      fn_003db9f0(param_1,0,9,0,0);
      iVar3 = 0xc;
      iVar4 = 0xb;
    }
    else {
      if (local_1c[0] != 0x10) goto LAB_003dc6b8;
      fn_003db9f0(param_1,1,9,0,0);
      iVar3 = 0x19;
      iVar4 = 0x16;
    }
LAB_003dc6d8:
    param_1[0x38] = iVar3;
    param_1[0x39] = iVar4;
    goto switchD_003dc880_caseD_6;
  case 0x11:
    if (param_1[0x3a] != 0) {
      param_1[0x3a] = param_1[0x3a] + -1;
    }
    iVar3 = fn_003dba54(local_1c,param_1 + 0x3b);
    if (iVar3 == 0) {
      return 1;
    }
    if (param_1[0x3a] != 0) {
      return 1;
    }
    fn_003db960(param_1,0xffffffff);
    switch(local_1c[0]) {
    case 0:
      if (*(char *)((int)param_1 + 9) == '\0') {
        fn_003db9f0(param_1,1,2,1,0xe);
      }
      else {
        fn_003db9f0(param_1,1,2,1,0xf);
      }
      fn_003db9f0(param_1,1,0x18,0,0);
      *(undefined1 *)(param_1 + 2) = 1;
      goto switchD_003dc880_caseD_6;
    case 1:
    case 2:
    case 4:
    case 5:
      uVar1 = 0x10;
      break;
    case 3:
      uVar1 = 0x12;
      break;
    default:
      goto switchD_003dc880_caseD_6;
    case 7:
      uVar1 = 0x11;
      break;
    case 8:
    case 0xc:
    case 0xd:
    case 0x11:
      uVar1 = 0x13;
      break;
    case 0x10:
      uVar1 = 0x15;
    }
    fn_003db9f0(param_1,1,2,1,uVar1);
    iVar3 = (**(code **)(*DAT_00897894 + 0x18))(DAT_00897894,0);
    if (iVar3 == 0) {
      if (param_1[1] != 2 && param_1[1] != 3) {
        fn_003db9f0(param_1,1,2,1,0x14);
      }
LAB_003dc068:
      fn_003db9f0(param_1,1,4,0,0);
    }
    else {
      fn_003db9f0(param_1,1,9,0,0);
      param_1[0x38] = 0x19;
      param_1[0x39] = 0x14;
    }
switchD_003dc880_caseD_6:
    param_1[0x33] = 1;
    param_1[0x35] = (param_1[0x35] + 1) % 8;
    break;
  case 0x12:
    iVar3 = (**(code **)(*DAT_00897894 + 0x18))(DAT_00897894,0);
    if (iVar3 != 0) {
      return 1;
    }
    goto switchD_003dc234_caseD_fffffffb;
  case 0x13:
    fn_00227ba0(DAT_00897894,0);
    param_1[param_1[0x33] + 0x34] = (param_1[param_1[0x33] + 0x34] + 1) % 8;
    break;
  case 0x14:
    fn_002277d8(DAT_00897894,0);
  case 0x17:
switchD_003dbcc8_caseD_17:
    param_1[param_1[0x33] + 0x34] = (param_1[param_1[0x33] + 0x34] + 1) % 8;
    break;
  case 0x15:
    iVar3 = fn_00453d0c();
    if (((iVar3 != 0) && (iVar3 = fn_0044c9fc(), iVar3 != 0)) &&
       (iVar3 = fn_006a7b90(param_1 + 0x3b,&DAT_007ce538), -6 < iVar3)) {
      switch(iVar3) {
      case 0:
        iVar3 = (**(code **)*DAT_00897894)();
        if (iVar3 != 0) {
          *(undefined1 *)(param_1 + 2) = 1;
        }
        fn_003dcb88(param_1,1,4,0,0);
        return 1;
      }
    }
switchD_003dc234_caseD_fffffffb:
    fn_003dcb88(param_1,1,4,0,0);
    break;
  case 0x16:
    if (param_1[1] == 1) {
      fn_0026a324(DAT_00897818);
    }
    fn_00144834(0x322,(int)(char)DAT_00897a2c);
    goto switchD_003dbcc8_caseD_17;
  case 0x18:
    fn_003db960(param_1,0xffffffff);
    if (param_1[1] == 1) {
      fn_003db9f0(param_1,1,0x14,0,0);
    }
    goto LAB_003dc068;
  }
  return uVar5;
}



undefined4 fn_00308b84(void)

{
  undefined4 local_10;
  
  local_10 = 0x8c000000;
  fn_00163988(DAT_00897808,&local_10,1);
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  return 1;
}


