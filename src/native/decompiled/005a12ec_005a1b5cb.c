#include "005a12ec_005a1b5cb.h"



void fn_005a1b5c(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((char)param_1[0x1f] != '\0') {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  fn_0068ab44(param_1,0x1000950);
  iVar1 = param_1[0x4c];
  param_1[0x4c] = iVar1 + 1;
  if (iVar1 + 1 == 3) {
    param_1[0x4c] = 0;
  }
  (**(code **)(*param_1 + 0x1a8))(param_1,0);
  (*(code *)**(undefined4 **)param_1[0x2c])((undefined4 *)param_1[0x2c],0);
  if (*param_2 == 4) {
    uVar2 = fn_002e3e9c(param_1[0x2c],param_2[1],param_2[2]);
                    /* WARNING: Could not recover jumptable at 0x005a1c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 400))(param_1,uVar2);
    return;
  }
  return;
}



void fn_005a19cc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  fn_002c2070();
  if (param_2 == 4) {
    iVar1 = fn_0043100c(param_1,param_3);
    if (iVar1 == 0) {
      if ((char)param_1[0x1f] == '\0') {
        param_1[0x49] = 4;
        param_1[0x4b] = param_3;
        (**(code **)(*param_1 + 0x110))(param_1,7,1,0,1);
        return;
      }
      fn_0042fdf8(param_1,param_3);
      fn_0068ab44(param_1,0x100094f);
      return;
    }
  }
  else {
    if (param_2 == 5) {
      if ((char)param_1[0x1f] == '\0') {
        param_1[0x4b] = param_3;
        param_1[0x49] = 5;
        uVar3 = 1;
        uVar2 = (int)*(char *)(param_1[0x46] + 0x24) ^ 1;
        (**(code **)(*param_1 + 0x110))(param_1,7,uVar2,0);
        fn_005a13cc(param_1,uVar2,1,uVar3);
        return;
      }
      (**(code **)(*param_1 + 0x110))(param_1,5,param_3,0,1);
      return;
    }
    if (param_2 == 7) {
      if (param_1[0x49] == 4) {
        fn_0042fdf8(param_1,param_1[0x4b]);
        (**(code **)(*param_1 + 0x110))(param_1,param_1[0x49],param_1[0x4b],0,1);
        return;
      }
      if (param_1[0x49] == 5) {
        (**(code **)(*param_1 + 0x110))(param_1,5,2,0,1);
        return;
      }
      (**(code **)(*param_1 + 0x110))(param_1,5,2,0,1);
    }
  }
  return;
}



void fn_005a18b4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  fn_0022da78(*(int *)(param_1 + 0xb0) + 4,(&DAT_007c7030)[*(int *)(param_1 + 0x130)],param_2);
  uVar1 = fn_0016ba34(DAT_00897800,DAT_00898228,
                       *(undefined4 *)(&DAT_007c703c + *(int *)(param_1 + 0x130) * 4),0);
  fn_00243550(*(undefined4 *)(param_1 + 0xdc),uVar1);
  if (*(int *)(param_1 + 0xf0) == 0) {
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x83) = 0;
  fn_0031f954();
  return;
}



void fn_005a1800(int param_1,int param_2)

{
  if (param_2 == 0) {
    fn_0068ab44(param_1,0x100094b);
    fn_005a12ec(param_1);
    *(undefined1 *)(*(int *)(param_1 + 0x114) + 0x18) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x10) = 0x68;
    fn_006899f4(param_1,0x50,0,1);
    return;
  }
  fn_0068ab44(param_1,0x100094c);
  fn_006899f4(param_1,0,0);
  fn_00689930(param_1,0,0);
  fn_006899f4(param_1,0xd9,0,1);
                    /* WARNING: Could not recover jumptable at 0x005a1864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x114) + 0xc))();
  return;
}



void fn_005a17d4(int *param_1)

{
  (**(code **)(*param_1 + 0x110))(param_1,7,1,0,1);
  return;
}



void fn_005a1728(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x118);
  if (*(char *)(param_1 + 0x7c) == '\x01') {
    if (iVar1 != 0) {
      fn_002b1f48(iVar1,0);
      fn_002b1f0c(iVar1,1);
    }
    iVar1 = *(int *)(param_1 + 0x11c);
    if (iVar1 != 0) {
      fn_002b1f48(iVar1,0);
      fn_002b1f0c(iVar1,1);
      return;
    }
  }
  else {
    if (iVar1 != 0) {
      fn_002b1f48(iVar1,1);
      fn_002b1f0c(iVar1,0);
    }
    iVar1 = *(int *)(param_1 + 0x11c);
    if (iVar1 != 0) {
      fn_002b1f48(iVar1,1);
      fn_002b1f0c(iVar1,0);
      return;
    }
  }
  return;
}


