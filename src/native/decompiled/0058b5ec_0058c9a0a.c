#include "0058b5ec_0058c9a0a.h"



void fn_0058bc04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_108 [240];
  
  iVar1 = fn_00269b38(DAT_00897818);
  if (iVar1 == 2) {
    iVar1 = fn_002e8cf0();
    fn_00301f50(auStack_108,0xf0);
    fn_0017821c(iVar1 + 0x150,auStack_108,0xf0);
    fn_0017821c(iVar1 + 0x240,auStack_108,0xf0);
    fn_0017821c(iVar1 + 0x330,auStack_108,0xf0);
    fn_0017821c(iVar1 + 0x420,auStack_108,0xf0);
    fn_0017821c(iVar1 + 0x514,auStack_108,0xf0);
    fn_0017821c(iVar1 + 0x604,auStack_108,0xf0);
    fn_0017821c(iVar1 + 0x6f4,auStack_108,0xf0);
    fn_0017821c(iVar1 + 0x7e4,auStack_108,0xf0);
    fn_0042f204(*(undefined4 *)(param_1 + 0xf8),0);
    uVar2 = 0x11;
  }
  else {
    iVar1 = fn_00269864(DAT_00897818);
    if (iVar1 == 0) {
      return;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x104) + 8) = 0;
    fn_001296e8(DAT_00898840);
    uVar2 = 0x12;
  }
  *(undefined4 *)(param_1 + 0x114) = uVar2;
  return;
}



undefined1 * fn_0058b968(int param_1)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  fn_0020bbc4(auStack_18,*(int *)(param_1 + 0x134) + *(int *)(param_1 + 300) * 0xf0);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_006bfdb4(auStack_14,&local_30,0xc);
  fn_0015b0dc(&local_30);
  fn_00749130(param_1,DAT_00898214,(char *)&DAT_0058b9f8,0,1,1,0);
  return auStack_18;
}



void fn_0058b7bc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x130)) {
    uVar8 = 0;
    do {
      fn_0020bbc4(auStack_30,*(int *)(param_1 + 0x134) + iVar6 * 0xf0);
      local_48 = uVar8;
      local_44 = uVar8;
      local_40 = uVar8;
      local_3c = uVar8;
      local_38 = uVar8;
      local_34 = uVar8;
      fn_006bfdb4(auStack_2c,&local_48,0xc);
      uVar7 = *(undefined4 *)(DAT_00897804 + 0xc);
      iVar1 = fn_006bf5e0(auStack_2c);
      iVar2 = fn_006b846c(uVar7);
      if (iVar2 == iVar1) {
        fn_0028ad24(uVar7);
      }
      iVar2 = fn_002e80c4(iVar1);
      if (iVar2 != 0) {
        fn_002e8160(iVar1);
      }
      iVar2 = fn_0028af90(uVar7,iVar1);
      if (iVar2 == 0) {
        iVar2 = fn_0028b0f8(uVar7,iVar1);
        if (iVar2 != 0) {
          iVar2 = -1;
          iVar5 = 0;
          do {
            iVar3 = fn_006b8538(uVar7,iVar5);
            if (iVar3 == iVar1) {
              iVar2 = iVar5;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 4);
          fn_0028a9cc(uVar7,iVar2);
        }
      }
      else {
        iVar2 = -1;
        iVar5 = 0;
        do {
          iVar3 = fn_00144df4(uVar7,iVar5);
          if (iVar3 == iVar1) {
            iVar2 = iVar5;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 4);
        fn_0028b7e4(uVar7,iVar2);
      }
      piVar4 = (int *)fn_006c001c(auStack_2c);
      if (*piVar4 != 0) {
        fn_0028abc4(uVar7);
      }
      fn_0028a68c(uVar7,iVar1,1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x130));
  }
  return;
}



void fn_0058b668(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  if ((*(int *)(param_1 + 0x124) < 1) &&
     (iVar1 = fn_003f71f4(*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x40)), iVar1 == 0xc)) {
    local_28 = 1;
    local_24 = 1;
    uStack_20 = 0;
    fn_00749130(param_1,DAT_00898214,(char *)&DAT_0058b78c,0);
    iVar1 = fn_002e8cf0();
    iVar4 = 0;
    uVar3 = 0;
    *(int *)(param_1 + 0x134) = iVar1 + 0x150;
    do {
      fn_0020bbc4(&local_28,*(int *)(param_1 + 0x134) + uVar3 * 0xf0);
      iVar2 = fn_006bf5e0(&local_24);
      if (iVar2 != 0) {
        iVar4 = iVar4 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    *(int *)(param_1 + 0x130) = iVar4;
    iVar4 = 0;
    *(int *)(param_1 + 0x140) = iVar1 + 0x514;
    uVar3 = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    do {
      fn_0020bbc4(&local_28,*(int *)(param_1 + 0x140) + uVar3 * 0xf0);
      iVar1 = fn_006bf5e0(&local_24);
      if (iVar1 != 0) {
        iVar4 = iVar4 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    *(undefined4 *)(param_1 + 0x114) = 5;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(int *)(param_1 + 0x13c) = iVar4;
  }
  return;
}



undefined4 fn_0058b5ec(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00444154();
  fn_003f71d0(*(undefined4 *)(param_1[0x3c] + 0x40),10);
  *(undefined1 *)(param_1[0x41] + 8) = 1;
  *(undefined1 *)(param_1[0x17] + 0x31) = 0;
  (**(code **)(*param_1 + 0x168))(param_1,1);
  fn_00689efc(param_1,0x3b,0);
  fn_0042f204(param_1[0x3e],0);
  param_1[0x45] = 1;
  return uVar1;
}


