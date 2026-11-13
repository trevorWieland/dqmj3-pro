#include "00761910_00761d64.h"



void fn_00761d64(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  fn_00748448();
  iVar1 = (**(code **)(*param_1 + 0x1c4))(param_1);
  if (iVar1 != 0) {
    return;
  }
  if (param_1[0x39] == 0xc) {
    return;
  }
  (**(code **)(*param_1 + 0x158))(param_1);
  if ((char)param_1[0x45] != '\0') {
    if (param_1[0x39] == 0xb) {
      if (param_1[0x3b] < 0x1f) {
        param_1[0x3b] = param_1[0x3b] + 1;
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00761e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c0))(param_1);
      return;
    }
    if (param_1[0x39] == 6) {
      iVar1 = param_1[0x3b];
      param_1[0x3b] = iVar1 + 1;
      if (iVar1 + 1 < 0x97) {
        return;
      }
      (**(code **)(*param_1 + 0x1bc))(param_1);
      param_1[0x39] = 0xb;
      return;
    }
    iVar1 = fn_0077f7d0(*(undefined4 *)(*(int *)(param_1[0x40] + 0x3c) + 4),1);
    if ((iVar1 != 0) && (iVar1 = fn_0040f628(*(undefined4 *)(param_1[0x40] + 0x3c)), iVar1 == 2)) {
      *(undefined1 *)(param_1[0x17] + 0x31) = 0;
      fn_0074804c(param_1,DAT_00898214,s_MenuMessageWirelessBattle0011_008c630c);
      param_1[0x39] = 6;
      *(undefined4 *)(param_1[0x3c] + 0xc) = 0;
      return;
    }
  }
  (**(code **)(*param_1 + 0x154))(param_1);
  switch(param_1[0x39]) {
  case 0:
    (**(code **)(*param_1 + 0x164))(param_1);
    break;
  case 1:
    (**(code **)(*param_1 + 0x168))(param_1);
    break;
  case 2:
    (**(code **)(*param_1 + 0x16c))(param_1);
    break;
  case 3:
    (**(code **)(*param_1 + 0x170))(param_1);
    break;
  case 4:
    (**(code **)(*param_1 + 0x174))(param_1);
    break;
  case 5:
    (**(code **)(*param_1 + 0x178))(param_1);
    break;
  case 6:
    (**(code **)(*param_1 + 0x17c))(param_1);
    break;
  case 7:
    (**(code **)(*param_1 + 0x180))(param_1);
    break;
  case 8:
    iVar1 = (**(code **)(*param_1 + 0x188))(param_1);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x1b8))(param_1);
    }
    break;
  case 9:
    iVar1 = (**(code **)(*param_1 + 0x184))(param_1);
    if (iVar1 == 0) break;
    iVar1 = 10;
    goto LAB_00761fc0;
  case 10:
    iVar1 = (**(code **)(*param_1 + 0x18c))(param_1);
    if (iVar1 == 0) break;
    iVar1 = 0xc;
LAB_00761fc0:
    param_1[0x39] = iVar1;
  }
  if (((*(char *)((int)param_1 + 0x116) == '\x01') &&
      (iVar1 = fn_006896fc(param_1,param_1[0x34]), iVar1 != 0)) &&
     (iVar1 = fn_006896fc(param_1,param_1[0x34]), *(char *)(iVar1 + 0x1d) == '\0')) {
    iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(param_1[1] + 0x18) + 0xc),0x48);
    if (iVar1 != 0) {
      uVar2 = fn_006f6a38();
      iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(param_1[1] + 0x18) + 0xc),0x48);
      if ((*(char *)(iVar1 + 0xc) == '\x03') && ((uVar2 & 0x100000) != 0)) {
        *(undefined1 *)(param_1[0x3e] + 0x18) = 1;
        return;
      }
    }
    iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(param_1[1] + 0x18) + 0xc),0x48);
    if (iVar1 != 0) {
      uVar2 = fn_006f6a38();
      iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(param_1[1] + 0x18) + 0xc),0x48);
      if ((*(char *)(iVar1 + 0xc) == '\x03') && ((uVar2 & 0x200000) != 0)) {
        *(undefined1 *)(param_1[0x3e] + 0x18) = 2;
        return;
      }
    }
  }
  return;
}



void fn_00761d00(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[0x47];
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      fn_0025190c(param_1[0x44]);
      iVar1 = 2;
LAB_00761d34:
      param_1[0x47] = iVar1;
    }
    else if (iVar1 == 2) {
      iVar1 = fn_00251a3c(param_1[0x44]);
      if (iVar1 != 0) {
        iVar1 = 3;
        goto LAB_00761d34;
      }
      fn_00251a50(param_1[0x44]);
    }
  }
  fn_00748448();
  iVar1 = (**(code **)(*param_1 + 0x1c4))(param_1);
  if (iVar1 != 0) {
    return;
  }
  if (param_1[0x39] == 0xc) {
    return;
  }
  (**(code **)(*param_1 + 0x158))(param_1);
  if ((char)param_1[0x45] != '\0') {
    if (param_1[0x39] == 0xb) {
      if (param_1[0x3b] < 0x1f) {
        param_1[0x3b] = param_1[0x3b] + 1;
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00761e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c0))(param_1);
      return;
    }
    if (param_1[0x39] == 6) {
      iVar1 = param_1[0x3b];
      param_1[0x3b] = iVar1 + 1;
      if (iVar1 + 1 < 0x97) {
        return;
      }
      (**(code **)(*param_1 + 0x1bc))(param_1);
      param_1[0x39] = 0xb;
      return;
    }
    iVar1 = fn_0077f7d0(*(undefined4 *)(*(int *)(param_1[0x40] + 0x3c) + 4),1);
    if ((iVar1 != 0) && (iVar1 = fn_0040f628(*(undefined4 *)(param_1[0x40] + 0x3c)), iVar1 == 2)) {
      *(undefined1 *)(param_1[0x17] + 0x31) = 0;
      fn_0074804c(param_1,DAT_00898214,s_MenuMessageWirelessBattle0011_008c630c);
      param_1[0x39] = 6;
      *(undefined4 *)(param_1[0x3c] + 0xc) = 0;
      return;
    }
  }
  (**(code **)(*param_1 + 0x154))(param_1);
  switch(param_1[0x39]) {
  case 0:
    (**(code **)(*param_1 + 0x164))(param_1);
    break;
  case 1:
    (**(code **)(*param_1 + 0x168))(param_1);
    break;
  case 2:
    (**(code **)(*param_1 + 0x16c))(param_1);
    break;
  case 3:
    (**(code **)(*param_1 + 0x170))(param_1);
    break;
  case 4:
    (**(code **)(*param_1 + 0x174))(param_1);
    break;
  case 5:
    (**(code **)(*param_1 + 0x178))(param_1);
    break;
  case 6:
    (**(code **)(*param_1 + 0x17c))(param_1);
    break;
  case 7:
    (**(code **)(*param_1 + 0x180))(param_1);
    break;
  case 8:
    iVar1 = (**(code **)(*param_1 + 0x188))(param_1);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x1b8))(param_1);
    }
    break;
  case 9:
    iVar1 = (**(code **)(*param_1 + 0x184))(param_1);
    if (iVar1 == 0) break;
    iVar1 = 10;
    goto LAB_00761fc0;
  case 10:
    iVar1 = (**(code **)(*param_1 + 0x18c))(param_1);
    if (iVar1 == 0) break;
    iVar1 = 0xc;
LAB_00761fc0:
    param_1[0x39] = iVar1;
  }
  if (((*(char *)((int)param_1 + 0x116) == '\x01') &&
      (iVar1 = fn_006896fc(param_1,param_1[0x34]), iVar1 != 0)) &&
     (iVar1 = fn_006896fc(param_1,param_1[0x34]), *(char *)(iVar1 + 0x1d) == '\0')) {
    iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(param_1[1] + 0x18) + 0xc),0x48);
    if (iVar1 != 0) {
      uVar2 = fn_006f6a38();
      iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(param_1[1] + 0x18) + 0xc),0x48);
      if ((*(char *)(iVar1 + 0xc) == '\x03') && ((uVar2 & 0x100000) != 0)) {
        *(undefined1 *)(param_1[0x3e] + 0x18) = 1;
        return;
      }
    }
    iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(param_1[1] + 0x18) + 0xc),0x48);
    if (iVar1 != 0) {
      uVar2 = fn_006f6a38();
      iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(param_1[1] + 0x18) + 0xc),0x48);
      if ((*(char *)(iVar1 + 0xc) == '\x03') && ((uVar2 & 0x200000) != 0)) {
        *(undefined1 *)(param_1[0x3e] + 0x18) = 2;
        return;
      }
    }
  }
  return;
}



void fn_00761b74(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((char)param_1[3] == '\x03') {
    bVar2 = param_2 == 0;
    if (-1 < param_2) {
      bVar2 = *(char *)(param_1[0x17] + 0x31) == '\0';
    }
    if (bVar2) {
      iVar1 = fn_00747fd0(param_1,param_2);
      if (iVar1 == 0) {
        fn_0068ab44(param_1,0x100094d);
        return;
      }
      param_1[0x3a] = param_2;
      switch(param_1[0x39]) {
      case 0:
        *(int *)(param_1[0x3c] + 0xc) = param_2;
        switch(*(undefined1 *)((int)param_1 + param_1[0x3a] + 0xd9)) {
        case 0:
                    /* WARNING: Could not recover jumptable at 0x00761c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 400))(param_1);
          return;
        case 1:
                    /* WARNING: Could not recover jumptable at 0x00761c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x194))(param_1);
          return;
        case 2:
                    /* WARNING: Could not recover jumptable at 0x00761c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x198))(param_1);
          return;
        case 3:
                    /* WARNING: Could not recover jumptable at 0x00761c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x19c))(param_1);
          return;
        case 4:
                    /* WARNING: Could not recover jumptable at 0x00761c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1a0))(param_1);
          return;
        case 5:
                    /* WARNING: Could not recover jumptable at 0x00761ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1a4))(param_1);
          return;
        case 6:
                    /* WARNING: Could not recover jumptable at 0x00761cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1a8))(param_1);
          return;
        case 7:
          (**(code **)(*param_1 + 0x1ac))(param_1);
          *(undefined4 *)(param_1[0x3c] + 0xc) = 0;
          return;
        default:
          return;
        }
      case 8:
                    /* WARNING: Could not recover jumptable at 0x00761ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1b0))(param_1);
        return;
      }
    }
  }
  return;
}



void fn_00761a98(int param_1)

{
  undefined1 auStack_8f0 [2272];
  
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00747f28(param_1,DAT_00898214,s_MenuMessageWiFiBattle0009_008c64a0,0,1,0,0);
  fn_00290734(auStack_8f0);
  fn_0017821c(*(int *)(param_1 + 0xf8) + 0x1c,auStack_8f0,0x8d8);
  *(undefined1 *)(*(int *)(param_1 + 0xf8) + 0x903) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xf8) + 0x904) = 0;
  fn_0068993c(param_1,*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),0,0);
  *(undefined4 *)(param_1 + 0xe4) = 5;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_007619a4(int param_1)

{
  undefined1 auStack_11c8 [2264];
  undefined1 auStack_8f0 [2264];
  
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00747f28(param_1,DAT_00898214,s_MenuMessageWiFiBattle0008_008c6486,0,1,0,0);
  fn_0017821c(auStack_8f0,*(int *)(param_1 + 0xf0) + 0x14,0x8d8);
  fn_0017821c(auStack_11c8,auStack_8f0,0x8d8);
  fn_0017821c(*(int *)(param_1 + 0xf8) + 0x1c,auStack_11c8,0x8d8);
  *(undefined1 *)(*(int *)(param_1 + 0xf8) + 0x903) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0xf8) + 0x904) = 1;
  fn_0068993c(param_1,*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),0,0);
  *(undefined4 *)(param_1 + 0xe4) = 4;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00761910(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00747f28(param_1,DAT_00898214,s_MenuMessageWirelessBattle0009_008c6468,0,1,0,0);
  fn_0068993c(param_1,0x7a,*(undefined4 *)(param_1 + 0xd4),0,0);
  *(undefined4 *)(param_1 + 0xe4) = 2;
  fn_0068ab44(param_1,0x100094b);
  return;
}


