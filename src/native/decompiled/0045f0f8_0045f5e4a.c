#include "0045f0f8_0045f5e4a.h"



void fn_0045f2bc(void)

{
  int iVar1;
  
  iVar1 = fn_0045f2ec();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0045f2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



undefined4 * fn_0045f2ec(undefined4 *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  
  *param_1 = &DAT_00852ce0;
  puVar1 = (undefined4 *)param_1[1];
  bVar2 = puVar1 == param_1 + 4;
  if (!bVar2) {
    puVar1 = puVar1 + -1;
    bVar2 = puVar1 == (undefined4 *)0x0;
  }
  if (!bVar2) {
    if ((code *)puVar1[-2] == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*(code *)puVar1[-2])();
    }
  }
  return param_1;
}



void fn_0045f27c(undefined4 *param_1)

{
  param_1[1] = param_1 + 4;
  param_1[2] = 0x100;
  *param_1 = &DAT_00852ce0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)((int)param_1 + 0x211) = 1;
  *(undefined1 *)((int)param_1 + 0x212) = 1;
  param_1[3] = param_1 + 4;
  return;
}



void fn_0045f228(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = param_1 + 0x10;
  bVar3 = iVar1 == iVar2;
  if (!bVar3) {
    iVar1 = iVar1 + -4;
    bVar3 = iVar1 == 0;
  }
  if (!bVar3) {
    if (*(code **)(iVar1 + -8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(iVar1 + -8))();
    }
  }
  *(undefined4 *)(param_1 + 8) = 0x100;
  *(int *)(param_1 + 4) = iVar2;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



int fn_0045f0f8(int param_1)

{
  int iVar1;
  
  fn_0045f188(param_1,0x20);
  if ((*(char *)(param_1 + 0x210) != '\0') && (*(char *)(param_1 + 0x211) != '\0')) {
    fn_0010313a(*(undefined4 *)(param_1 + 0xc),&DAT_007dbc50);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  iVar1 = fn_00101a50(*(undefined4 *)(param_1 + 0xc),0x20);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1 * 2;
  return param_1;
}



void fn_0045f188(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *(int *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0xc) - iVar5 >> 1;
  if (uVar4 < (uint)(param_2 + iVar1)) {
    for (; uVar4 < (uint)(param_2 + iVar1); uVar4 = uVar4 + (uVar4 >> 1)) {
    }
    puVar2 = (uint *)fn_0015ece0(uVar4 * 2 + 4);
    *puVar2 = uVar4;
    *(uint **)(param_1 + 4) = puVar2 + 1;
    *(uint *)(param_1 + 8) = uVar4;
    fn_00301a9c(*(undefined4 *)(param_1 + 4),iVar5,iVar1 * 2 + 2);
    iVar3 = param_1 + 0x10;
    bVar6 = iVar5 == iVar3;
    if (!bVar6) {
      iVar3 = iVar5 + -4;
      bVar6 = iVar3 == 0;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 4) + iVar1 * 2;
    if (!bVar6) {
      if (*(code **)(iVar3 + -8) == (code *)0x0) {
        fn_0030233c();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0045f218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar3 + -8))();
      return;
    }
  }
  return;
}


