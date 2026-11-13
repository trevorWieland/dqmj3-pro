#include "0059d078_0059d8e0.h"



void fn_0059d43c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((char)param_1[3] == '\x03') && (iVar1 = (**(code **)(*param_1 + 0x164))(param_1), iVar1 != 0)
     ) {
    iVar1 = fn_0074919c(param_1,param_2);
    if (iVar1 == 0) {
      fn_0068ab44(param_1,0x100094d);
      return;
    }
    if (param_1[0x43] == 1) {
      param_1[0x48] = param_2;
      if (param_2 == 0) {
        if (*(char *)((int)param_1 + 0x129) == '\0') {
          *(undefined4 *)(param_1[0x17] + 0x38) = 0;
          uVar2 = fn_0022f584((char *)&DAT_0059d594);
          fn_007491f0(param_1,uVar2);
          param_1[0x49] = 0x3c;
        }
        else {
          param_1[0x49] = 0;
        }
        fn_003f71d0(*(undefined4 *)(param_1[0x3c] + 0x40),0x14);
        param_1[0x45] = 2;
        fn_0068ab44(param_1,0x100094b);
        return;
      }
      if (param_2 == 1) {
        *(undefined4 *)(param_1[0x17] + 0x38) = 0;
        uVar2 = fn_0022f584((char *)&DAT_0059d56c);
        fn_007491f0(param_1,uVar2);
        param_1[0x49] = 0x3c;
        fn_003f71d0(*(undefined4 *)(param_1[0x3c] + 0x40),0x15);
        param_1[0x45] = 4;
        fn_0068ab44(param_1,0x100094c);
        return;
      }
    }
  }
  return;
}



void fn_0059d40c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(300,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0059d8e0(iVar1,param_1);
  return;
}



void fn_0059d8e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00444384(param_1,param_2,(char *)&DAT_0059d924,0,0);
  *puVar1 = &DAT_00846220;
  puVar1[0x49] = 0;
  *(undefined1 *)(puVar1 + 0x4a) = 0;
  *(undefined1 *)((int)puVar1 + 0x129) = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  return;
}



void fn_0059d324(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(*(undefined4 *)(param_1 + 0x10c)) {
  default:
    return;
  case 1:
  case 2:
    break;
  case 4:
    iVar2 = fn_003f71f4(*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x40));
    if (iVar2 == 0x15) {
      *(undefined1 *)(param_1 + 0x128) = 1;
      *(undefined1 *)(param_1 + 0x129) = 0;
    }
    return;
  }
  iVar2 = fn_003f71f4(*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x40));
  if (iVar2 == 0x15) {
    *(undefined1 *)(param_1 + 0x128) = 1;
    *(undefined1 *)(param_1 + 0x129) = 0;
  }
  else if (*(char *)(param_1 + 0x128) == '\0') {
    if (iVar2 == 0x14) {
      *(undefined1 *)(param_1 + 0x129) = 1;
    }
    return;
  }
  uVar1 = fn_0022f584((char *)&DAT_0059d3e8,0);
  fn_007491f0(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x124) = 0x3c;
  fn_003f71d0(*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x40),0x15);
  *(undefined4 *)(param_1 + 0x114) = 3;
  return;
}



undefined4 fn_0059d2c8(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00444154();
  *(undefined1 *)(param_1[0x17] + 0x31) = 0;
  fn_003f71d0(*(undefined4 *)(param_1[0x3c] + 0x40),0x13);
  (**(code **)(*param_1 + 0x168))(param_1,1);
  param_1[0x45] = 0;
  return uVar1;
}



void fn_0059d158(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  puVar2 = auStack_18;
  if (param_3 == 0) {
    puVar2 = auStack_14;
    puVar1 = (undefined *)fn_0022f750((char *)&DAT_0059d1a0,param_2,0);
  }
  else {
    puVar1 = &DAT_0059d19c;
  }
  fn_00168a24(param_1,puVar1,puVar2);
  return;
}



void fn_0059d078(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_001296d0(DAT_00898840);
  if (iVar1 == 0) {
    fn_00761018(param_1);
    fn_002d6808(DAT_00897828);
    return;
  }
  return;
}


