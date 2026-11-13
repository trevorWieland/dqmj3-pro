#include "001c80ac_001c8a44a.h"



undefined4 fn_001c8398(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar5 = (int *)param_3[8];
  iVar1 = param_1;
  piVar6 = param_3;
  while (piVar5 != param_3 + 8) {
    piVar3 = (int *)*piVar5;
    fn_002e32b0(*(undefined4 *)(param_1 + 0x6c),piVar5[-1]);
    fn_00150c1c(param_3 + 7,piVar5);
    fn_002feef8(piVar5 + -1);
    piVar5 = piVar3;
  }
  piVar5 = (int *)param_3[5];
  while (piVar3 = piVar5, piVar3 != param_3 + 5) {
    iVar4 = piVar3[-4];
    piVar5 = (int *)*piVar3;
    piVar2 = (int *)0x0;
    if (0 < iVar4) {
      do {
        fn_001f68a4(*(undefined4 *)(param_1 + 100),piVar3[-5]);
        piVar2 = (int *)((int)piVar2 + 1);
        piVar3[-4] = piVar3[-4] + -1;
      } while ((int)piVar2 < iVar4);
    }
    if (piVar3[-1] != 0) {
      piVar2 = piVar3 + -5;
    }
    if (piVar3[-1] != 0 && param_3 != (int *)0x0) {
      fn_0054be60(param_3[3]);
      if (piVar2[4] != 0) {
        iVar4 = fn_0054a620(piVar2[4] + 8);
        fn_002feef8(iVar4 + -8);
      }
      piVar2[4] = 0;
    }
    fn_0017d90c(param_3 + 4,piVar3);
    if (piVar3 != (int *)&NotUsed) {
      if (piVar3[-1] != 0) {
        iVar4 = fn_0054a620(piVar3[-1] + 8);
        fn_002feef8(iVar4 + -8);
        piVar3[-1] = 0;
      }
      iVar4 = fn_002fedf4(piVar3 + -2);
      iVar4 = fn_001588d4(iVar4 + -4);
      fn_002feef8(iVar4 + -8);
    }
  }
  piVar5 = (int *)*(int *)(param_1 + 0x2c);
  while (piVar3 = piVar5, piVar3 != (int *)(param_1 + 0x2c)) {
    piVar5 = (int *)*piVar3;
    if (piVar3[-4] == *param_3) {
      fn_0054a6c8(piVar3[-1],piVar3[-2],*param_3,param_4,iVar1,param_2,piVar6);
      fn_0017d90c(param_1 + 0x28,piVar3);
      if (piVar3 != (int *)0x14) {
        iVar4 = fn_001588d4(piVar3 + -3);
        fn_002feef8(iVar4 + -8);
      }
    }
  }
  piVar5 = (int *)*(int *)(param_1 + 0x5c);
  while (piVar6 = piVar5, piVar6 != (int *)(param_1 + 0x5c)) {
    piVar5 = (int *)*piVar6;
    if ((piVar6[-2] == param_3[3]) && (fn_0017d90c(param_1 + 0x58), piVar6 != (int *)0x18)) {
      iVar1 = fn_002fedf4(piVar6 + -4);
      fn_002feef8(iVar1 + -8);
    }
  }
  fn_0017d90c(param_2,param_3 + 0xb);
  if (param_3 != (int *)0x0) {
    if ((int *)param_3[3] != (int *)0x0) {
      (**(code **)(*(int *)param_3[3] + 8))();
    }
    param_3[3] = 0;
    iVar1 = fn_001588d4(param_3 + 2);
    iVar1 = fn_002fedf4(iVar1 + -4);
    fn_002feef8(iVar1 + -4);
  }
  return 1;
}



void fn_001c8258(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [12];
  
  uVar4 = CONCAT44(param_5,param_6);
  uVar1 = fn_002fed80(auStack_28,param_2,&local_30);
  iVar2 = fn_00745f78(param_1,*(undefined4 *)(param_1 + 8),param_1 + 8,uVar1);
  fn_002fedf4(auStack_28);
  if (iVar2 == 0) {
    uVar1 = fn_0011ced8(param_1);
    iVar2 = fn_00145b00(0x34,&DAT_00812c8c);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_0011c200(iVar2,uVar1,param_2,param_3);
    }
    fn_0017d948(param_1 + 4,param_1 + 8,iVar2 + 0x2c);
    uVar3 = fn_0011dd90(*(undefined4 *)(param_1 + 0x68),DAT_00898158);
    fn_0012d750(param_1,uVar1,uVar3,DAT_00898160);
    uVar3 = fn_0011dd90(*(undefined4 *)(param_1 + 0x68),DAT_0089815c);
    fn_0012d750(param_1,uVar1,uVar3,PTR_s_break_font_L_bffnt_00898164);
  }
  local_30 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_2c = (undefined4)uVar4;
  fn_0011c298(param_1,iVar2,param_3,param_4);
  return;
}



void fn_001c8228(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  fn_0016a318(param_1,param_2,*(undefined4 *)(param_2 + 0x20),param_3,param_4,param_5,0);
  return;
}



undefined4
fn_001c8124(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 local_2c;
  undefined1 local_2b;
  
  uVar4 = CONCAT44(param_5,param_6);
  iVar1 = fn_00145b00(0x3c,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_00172cfc();
  }
  iVar1 = fn_0019d91c(param_1,param_2,0x626c7974);
  if (iVar1 != 0) {
    local_2c = 1;
    local_2b = 0;
    iVar1 = fn_00172be0(piVar3,param_2,iVar1,0,*(undefined4 *)(param_1 + 0x74),&local_2c);
    if (iVar1 != 0) {
      uVar2 = fn_0016a318(param_1,piVar3,param_3,param_4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar4
                           ,1);
      return uVar2;
    }
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return 0xffffffff;
}



undefined4 fn_001c80ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = fn_00167500(param_1,*(undefined4 *)(param_1 + 8),param_1 + 8,param_2);
  if (iVar1 != 0) {
    for (piVar4 = *(int **)(iVar1 + 0x20); piVar4 != (int *)(iVar1 + 0x20); piVar4 = (int *)*piVar4)
    {
      iVar2 = fn_002e3334(*(undefined4 *)(param_1 + 0x6c),piVar4[-1],param_3);
      if (iVar2 != 0) {
        iVar1 = fn_002e32fc(*(undefined4 *)(param_1 + 0x6c),piVar4[-1]);
        if (iVar1 == 0) {
          return 0;
        }
        uVar3 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(iVar1 + 4),param_3);
        return uVar3;
      }
    }
  }
  return 0;
}


