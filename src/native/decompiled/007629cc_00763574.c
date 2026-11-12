#include "007629cc_00763574.h"



void fn_00763574(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((char)param_1[3] == '\x03') {
    bVar2 = param_2 == 0;
    if (-1 < param_2) {
      bVar2 = *(char *)(param_1[0x17] + 0x31) == '\0';
    }
    if (bVar2) {
      iVar1 = fn_0074919c(param_1,param_2);
      if (iVar1 == 0) {
        fn_0068ab44(param_1,0x100094d);
        return;
      }
      param_1[0x42] = param_2;
      switch(param_1[0x41]) {
      case 0:
        *(int *)(param_1[0x44] + 0xc) = param_2;
        switch(*(undefined1 *)((int)param_1 + param_1[0x42] + 0xf9)) {
        case 0:
                    /* WARNING: Could not recover jumptable at 0x0076363c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x19c))(param_1);
          return;
        case 1:
                    /* WARNING: Could not recover jumptable at 0x00763650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1a0))(param_1);
          return;
        case 2:
                    /* WARNING: Could not recover jumptable at 0x00763664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1a4))(param_1);
          return;
        case 3:
                    /* WARNING: Could not recover jumptable at 0x00763678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1a8))(param_1);
          return;
        case 4:
                    /* WARNING: Could not recover jumptable at 0x0076368c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1ac))(param_1);
          return;
        case 5:
                    /* WARNING: Could not recover jumptable at 0x007636a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1b0))(param_1);
          return;
        case 6:
                    /* WARNING: Could not recover jumptable at 0x007636b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1b4))(param_1);
          return;
        case 7:
          (**(code **)(*param_1 + 0x1b8))(param_1);
          *(undefined4 *)(param_1[0x44] + 0xc) = 0;
          return;
        default:
          return;
        }
      case 8:
                    /* WARNING: Could not recover jumptable at 0x007636e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1bc))(param_1);
        return;
      }
    }
  }
  return;
}



void fn_00763498(int param_1)

{
  undefined1 auStack_8f0 [2272];
  
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00749130(param_1,DAT_00898214,s_MenuMessageWiFiBattle0009_008c664c,0,1,0,0);
  fn_00290734(auStack_8f0);
  fn_0017821c(*(int *)(param_1 + 0x118) + 0x1c,auStack_8f0,0x8d8);
  *(undefined1 *)(*(int *)(param_1 + 0x118) + 0x903) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x118) + 0x904) = 0;
  fn_0068993c(param_1,*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4),0,0);
  *(undefined4 *)(param_1 + 0x104) = 5;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_007633a4(int param_1)

{
  undefined1 auStack_11c8 [2264];
  undefined1 auStack_8f0 [2264];
  
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00749130(param_1,DAT_00898214,s_MenuMessageWiFiBattle0008_008c6632,0,1,0,0);
  fn_0017821c(auStack_8f0,*(int *)(param_1 + 0x110) + 0x14,0x8d8);
  fn_0017821c(auStack_11c8,auStack_8f0,0x8d8);
  fn_0017821c(*(int *)(param_1 + 0x118) + 0x1c,auStack_11c8,0x8d8);
  *(undefined1 *)(*(int *)(param_1 + 0x118) + 0x903) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x118) + 0x904) = 1;
  fn_0068993c(param_1,*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4),0,0);
  *(undefined4 *)(param_1 + 0x104) = 4;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00763310(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00749130(param_1,DAT_00898214,s_MenuMessageWirelessBattle0009_008c6614,0,1,0,0);
  fn_0068993c(param_1,0x7a,*(undefined4 *)(param_1 + 0xf4),0,0);
  *(undefined4 *)(param_1 + 0x104) = 2;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00763140(int param_1)

{
  fn_0040f564(*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x3c),2);
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00749218(param_1,DAT_00898214,s_MenuMessageWirelessBattle0010_008c65f6);
  *(undefined4 *)(param_1 + 0x104) = 6;
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_0076303c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_r4;
  
  iVar1 = fn_006c41e4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x120) + 0x3c) + 8));
  if (iVar1 != 2) {
    fn_00763080(param_1,0x39);
    return;
  }
  iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc),0x48);
  if (iVar1 != 0) {
    uVar2 = fn_006f6a38();
    iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc),0x48);
    if ((*(char *)(iVar1 + 0xc) == '\x03') && ((uVar2 & 0x20000) != 0)) goto LAB_007630f8;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x9c) + 0xa8))();
  if (iVar1 < 0) {
    return;
  }
LAB_007630f8:
  *(undefined4 *)(param_1 + 0x104) = 0;
  fn_0068993c(param_1,0x3a,0xe7,0,0,unaff_r4);
  fn_00689bd0(param_1,0,0);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_00763080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc),0x48,param_3,
                       param_4,param_4);
  if (iVar1 != 0) {
    uVar2 = fn_006f6a38();
    iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc),0x48);
    if ((*(char *)(iVar1 + 0xc) == '\x03') && ((uVar2 & 0x20000) != 0)) goto LAB_007630f8;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x9c) + 0xa8))();
  if (iVar1 < 0) {
    return;
  }
LAB_007630f8:
  *(undefined4 *)(param_1 + 0x104) = 0;
  fn_0068993c(param_1,param_2,param_3,0);
  fn_00689bd0(param_1,0,0);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_00762b00(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_002cd348(param_1[0x4b]);
  iVar1 = fn_002cc950(param_1[0x4b]);
  if (iVar1 != 0) {
    uVar2 = fn_002cc950();
    fn_00749130(param_1,DAT_00898214,uVar2,0,1,1,0);
    fn_002ccba8(param_1[0x4b]);
    return;
  }
  iVar1 = fn_002cd334(param_1[0x4b]);
  if ((iVar1 != 0) && (*(char *)((int)param_1 + 0x135) == '\0')) {
    *(undefined1 *)(param_1[0x17] + 0x31) = 0;
    fn_00749218(param_1,DAT_00898214,s_MenuMessageWirelessBattle0018_008c65d8);
    *(undefined1 *)((int)param_1 + 0x135) = 1;
    return;
  }
  if ((*(char *)((int)param_1 + 0x135) == '\x01') &&
     (iVar1 = (**(code **)(*param_1 + 0x1c0))(param_1), iVar1 != 0)) {
    *(undefined1 *)((int)param_1 + 0x135) = 0;
    param_1[0x41] = 8;
  }
  return;
}



void fn_00762a70(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[0x42];
  if ((uint)(param_1[0x38] - param_1[0x37] >> 4) <= uVar1) {
    fn_002ff628(9,&DAT_008c7624,&DAT_008c7624,uVar1);
  }
  uVar2 = *(undefined4 *)(param_1[0x37] + uVar1 * 0x10 + 8);
  fn_006899f4(param_1,uVar2,1);
  (**(code **)(*param_1 + 0x13c))(param_1,uVar2);
  param_1[0x41] = 1;
  fn_0068ab44(param_1,0x100094b);
  return;
}



undefined4 fn_00762a30(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00251a3c(*(undefined4 *)(param_1 + 0x130));
  if (iVar1 == 0) {
    fn_00251a50(*(undefined4 *)(param_1 + 0x130));
    return 0;
  }
  fn_007631a8(param_1,*(undefined4 *)(param_1 + 0xf4));
  return 1;
}



void fn_007631a8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_1ab0 [1784];
  undefined1 auStack_13b8 [240];
  int local_12c8 [60];
  undefined1 auStack_11d8 [336];
  undefined1 auStack_1088 [960];
  undefined1 local_cc8;
  undefined1 auStack_cc4 [964];
  undefined1 auStack_900 [2264];
  
  fn_00290734(auStack_900);
  fn_005db3a4(*(undefined4 *)(param_1 + 0x114),auStack_900);
  fn_0017821c(auStack_1ab0,*(int *)(param_1 + 0x110) + 0x14,0x8d8);
  fn_0017821c(auStack_11d8,auStack_1ab0,0x8d8);
  iVar3 = 0;
  do {
    fn_0037047c(local_12c8,*(undefined4 *)(*(int *)(param_1 + 0x110) + 0x10),iVar3);
    fn_0017821c(auStack_1088 + iVar3 * 0xf0,local_12c8,0xf0);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x110) + 0x10);
    fn_0037047c(auStack_13b8,uVar2,iVar3);
    fn_0017821c(local_12c8,auStack_13b8,0xf0);
    iVar1 = fn_003705c4(uVar2);
    if (iVar1 == local_12c8[0]) {
      local_cc8 = (undefined1)iVar3;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  iVar3 = 0;
  do {
    fn_003704e8(local_12c8,*(undefined4 *)(*(int *)(param_1 + 0x110) + 0x10),iVar3);
    fn_0017821c(auStack_cc4 + iVar3 * 0xf0,local_12c8,0xf0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  fn_005db3d0(*(undefined4 *)(param_1 + 0x114),auStack_11d8);
  *(undefined1 *)(*(int *)(param_1 + 0x114) + 0xb) = 0;
  fn_0068993c(param_1,0xd8,param_2,0,0);
  return;
}



void fn_007629f4(int param_1)

{
  fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x44));
  fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x48));
  if (*(int *)(param_1 + 0x128) == 0) {
    return;
  }
  fn_005f6270();
  return;
}



void fn_007629cc(int param_1)

{
  fn_00251df0(*(undefined4 *)(param_1 + 0x130),0);
  *(undefined4 *)(param_1 + 0x104) = 9;
  return;
}


