#include "003c3c74_003c4a5caa.h"



void fn_003c4014(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x104,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c4280(iVar1,param_1);
  return;
}



void fn_003c3f5c(int param_1)

{
  fn_002c3d68();
  (**(code **)(**(int **)(param_1 + 0x100) + 0xc))();
  fn_006899f4(param_1,0xd7,1);
  return;
}



void fn_003c3c74(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = param_1[0x3a];
  if (iVar2 == 0) {
    iVar2 = fn_006cb994(param_1);
    if (iVar2 != 0) {
      fn_003e6f38(param_1);
      iVar2 = 1;
LAB_003c3e50:
      param_1[0x3a] = iVar2;
      return;
    }
  }
  else if (iVar2 == 1) {
    iVar2 = fn_006f6a6c(param_1);
    if (iVar2 == 1) {
      iVar2 = (**(code **)(*param_1 + 0x154))(param_1);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1[0x40] + 0x18) = 1;
        fn_006899f4(param_1,0xd8,1,1);
        fn_003e6b34(param_1,5);
        return;
      }
      iVar2 = (**(code **)(*param_1 + 0x14c))(param_1);
      iVar3 = fn_002940c0();
      bVar1 = 0;
      if (iVar3 != 0) {
        bVar1 = *(byte *)(iVar2 + 0xa74);
      }
      if ((iVar3 == 0 || (bVar1 & 2) == 0) || (*(short *)(iVar2 + 0xa72) == 0)) {
        fn_001f7cac(param_1,1,0);
        goto LAB_003c3cb0;
      }
      uVar4 = (**(code **)(*param_1 + 0x14c))(param_1);
      fn_003e7084(param_1,uVar4);
      param_1[0x3a] = 2;
    }
  }
  else if (iVar2 == 2) {
    iVar2 = fn_006f6a6c(param_1);
    if (iVar2 != 0) {
      if (iVar2 == 2) {
        uVar4 = (**(code **)(*param_1 + 0x14c))(param_1);
        fn_003e6fc0(param_1,uVar4);
        iVar2 = 3;
        goto LAB_003c3e50;
      }
      if (iVar2 == 3) {
        uVar4 = fn_00689b18(param_1);
        iVar2 = (**(code **)(*param_1 + 0x14c))(param_1);
        fn_00292108((int)*(short *)(iVar2 + 0xa72),uVar4,0xd8);
        *(undefined1 *)(param_1[0x40] + 0x18) = 2;
        fn_003e6b34(param_1,5);
        return;
      }
    }
  }
  else if ((iVar2 == 3) && (iVar2 = fn_006f6a6c(param_1), iVar2 == 1)) {
LAB_003c3cb0:
    fn_003e6b34(param_1,4);
    return;
  }
  return;
}


