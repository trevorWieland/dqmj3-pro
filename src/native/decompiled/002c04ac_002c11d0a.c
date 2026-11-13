#include "002c04ac_002c11d0a.h"



void fn_002c07e4(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int local_20;
  int iStack_1c;
  
  local_20 = param_3;
  iStack_1c = param_4;
  if ((0 < param_1[0x19]) && (iVar1 = fn_002c11d0(param_1,0,0,param_4,param_1,param_2), iVar1 != 0)
     ) {
    fn_0066042c(iVar1,0);
    fn_002e3e30(iVar1);
  }
  if (0 < param_2) {
    iVar1 = fn_002c11d0(param_1,0);
    param_1[0x19] = param_2;
    iVar2 = fn_002c11d0(param_1,0);
    if (iVar2 != 0) {
      fn_0066042c(iVar2,1);
      if (((param_4 == 0) && (iVar1 != 0)) && ((iVar1 != iVar2 || (param_1[0x2d] == iVar2)))) {
        fn_002bfbb4(param_1,&local_20,iVar2,iVar1);
      }
      param_1[0x31] = local_20;
      if ((char)param_1[0x1f] == '\0') {
        local_20 = fn_006a833c(*(undefined4 *)(iVar2 + 0x10));
      }
      fn_002e3fac(iVar2,local_20);
      if ((char)param_1[0x1f] == '\x01') {
        (**(code **)(*param_1 + 0x160))(param_1,local_20,param_1[0x19]);
      }
      else {
        (**(code **)(*param_1 + 0x15c))(param_1,local_20,1,param_1[0x19]);
      }
    }
  }
  iVar1 = (**(code **)(*param_1 + 0x170))(param_1);
  fn_0025e31c(param_1[0x26],iVar1 != 0);
  if (param_5 != 0) {
    fn_0068ab44(param_1,0x100094e);
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



void fn_002c07c0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



void fn_002c07a4(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



void fn_002c075c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  undefined1 uVar1;
  int iVar2;
  
  *param_1 = param_5;
  param_1[1] = param_3;
  param_1[2] = param_4;
  iVar2 = fn_002e3e9c(param_2,param_3,param_4);
  param_1[3] = iVar2;
  if ((param_6 == 0) && (iVar2 != 0)) {
    uVar1 = fn_0068b2a8();
    *(undefined1 *)(param_1 + 4) = uVar1;
  }
  return;
}



undefined4 fn_002c04ac(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = fn_00172c98(param_2,(char *)&DAT_002c0578);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00145b00(0x2c,&DAT_00812c8c);
    piVar4 = (int *)0x0;
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1);
      piVar4 = (int *)fn_0034632c(iVar2,uVar3);
    }
    piVar5 = (int *)param_1[0x2b];
    if (piVar5 != piVar4) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x20))(piVar5);
      }
      param_1[0x2b] = (int)piVar4;
    }
    fn_00345db8(param_1[0x2b],iVar1,param_1,param_1[0x12],param_3,(int)*(char *)(param_4 + 0x40),
                 (int)*(char *)(param_4 + 0x3c),(int)*(char *)(param_4 + 0x3d),
                 (int)*(char *)(param_4 + 0x3f),(int)*(char *)(param_4 + 0x41));
    uVar3 = 1;
  }
  return uVar3;
}


