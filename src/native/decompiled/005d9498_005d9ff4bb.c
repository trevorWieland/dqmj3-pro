#include "005d9498_005d9ff4bb.h"



void fn_005d9ff4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_3d0 [240];
  undefined1 auStack_2e0 [240];
  undefined1 auStack_1f0 [240];
  undefined1 auStack_100 [240];
  
  uVar1 = fn_0022f584((char *)&DAT_005da094,0);
  fn_007491f0(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x134) = 0x1e;
  fn_0042bbec(auStack_3d0);
  iVar2 = *(int *)(param_1 + 0xf4);
  fn_0017821c(auStack_3d0,iVar2 + 0x15c,0xf0);
  fn_0017821c(auStack_2e0,iVar2 + 0x24c,0xf0);
  fn_0017821c(auStack_1f0,iVar2 + 0x33c,0xf0);
  fn_0017821c(auStack_100,iVar2 + 0x42c,0xf0);
  fn_003b70e8(*(undefined4 *)(param_1 + 0x100),auStack_3d0,2);
  *(undefined4 *)(param_1 + 0x114) = 0xb;
  return;
}



void fn_005d9f00(int param_1)

{
  undefined4 uVar1;
  char *local_30 [4];
  char *pcStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  char *pcStack_14;
  
  fn_003f71d0(*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x40),6);
  if (DAT_00893090 == 0) {
    fn_00749130(param_1,DAT_00898214,(char *)&DAT_005d9fd4,0,1,1,0);
    DAT_00893090 = DAT_00893090 + 1;
    uVar1 = 4;
  }
  else {
    if (*(int *)(param_1 + 300) != 0) {
      local_30[0] = "";
      local_30[1] = "MenuMessageWirelessExchange0017";
      local_30[2] = "MenuMessageWirelessExchange0018";
      local_30[3] = "MenuMessageWirelessExchange0019";
      pcStack_20 = "MenuMessageWirelessExchange0021";
      pcStack_1c = "MenuMessageWirelessExchange0022";
      pcStack_18 = "MenuMessageWirelessExchange0033";
      pcStack_14 = "MenuMessageWirelessExchange0020";
      fn_00749130(param_1,DAT_00898214,local_30[*(int *)(param_1 + 300)],0,1,1,0);
      *(undefined4 *)(param_1 + 0x114) = 4;
      *(undefined4 *)(param_1 + 300) = 0;
      return;
    }
    uVar1 = 5;
  }
  *(undefined4 *)(param_1 + 0x114) = uVar1;
  return;
}



undefined4 fn_005d9e64(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00444154();
  fn_00689efc(param_1,0x3b,0);
  *(undefined1 *)(param_1[0x17] + 0x31) = 0;
  fn_003f71d0(*(undefined4 *)(param_1[0x3c] + 0x40),5);
  if (*(char *)(param_1[0x3d] + 0x8e4) == '\0') {
    param_1[0x45] = 1;
    (**(code **)(*param_1 + 0x168))(param_1,0);
  }
  else {
    param_1[0x45] = 5;
    *(undefined1 *)(param_1[0x3d] + 0x8e4) = 0;
    (**(code **)(*param_1 + 0x168))(param_1,1);
  }
  return uVar1;
}


