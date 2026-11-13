#include "005f8170_005f90ccab.h"



void fn_005f8b9c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 auStack_440 [1068];
  
  piVar5 = *(int **)(param_1 + 0xe8);
  uVar4 = *(uint *)(param_1 + 0x108);
  uVar2 = piVar5[1] - *piVar5;
  iVar3 = (int)((longlong)(int)uVar2 * -0x99fc267 + ((ulonglong)uVar2 << 0x20) >> 0x20);
  if ((uint)((iVar3 >> 10) - (iVar3 >> 0x1f)) <= uVar4) {
    iVar3 = (int)((longlong)(int)uVar2 * -0x99fc267 + ((ulonglong)uVar2 << 0x20) >> 0x20);
    fn_002ff628(9,&DAT_008c761b,&DAT_008c761b,uVar4,(iVar3 >> 10) - (iVar3 >> 0x1f));
  }
  fn_0017821c(auStack_440,*piVar5 + uVar4 * 0x428,0x428);
  iVar3 = param_1 + param_2 * 2;
  iVar1 = fn_0057a2dc(param_1,auStack_440,(int)*(short *)(iVar3 + 0x11c));
  if (iVar1 == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  *(int *)(*(int *)(param_1 + 0x104) + 0x10) = param_2;
  *(int *)(*(int *)(param_1 + 0x104) + 0x14) = (int)*(short *)(iVar3 + 0x11c);
  fn_0068ab44(param_1,0x100094b);
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0x10c) = 1;
  return;
}



void fn_005f8b6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x128,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005f8d44(iVar1,param_1);
  return;
}



void fn_005f8aa4(int param_1)

{
  fn_0057a784();
  *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10) = 0;
  fn_00689824(param_1);
  *(undefined1 *)(param_1 + 0x10c) = 2;
  return;
}



void fn_005f88fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int local_488;
  undefined4 local_484;
  undefined1 auStack_480 [1064];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  piVar5 = *(int **)(param_1 + 0xe8);
  uVar6 = *(uint *)(param_1 + 0x108);
  uVar3 = piVar5[1] - *piVar5;
  iVar4 = (int)((longlong)(int)uVar3 * -0x99fc267 + ((ulonglong)uVar3 << 0x20) >> 0x20);
  if ((uint)((iVar4 >> 10) - (iVar4 >> 0x1f)) <= uVar6) {
    iVar4 = (int)((longlong)(int)uVar3 * -0x99fc267 + ((ulonglong)uVar3 << 0x20) >> 0x20);
    local_488 = (iVar4 >> 10) - (iVar4 >> 0x1f);
    fn_002ff628(9,&DAT_008c761b,&DAT_008c761b,uVar6);
  }
  fn_0017821c(auStack_480,*piVar5 + uVar6 * 0x428,0x428);
  iVar4 = 0;
  if (0 < *(short *)(param_1 + 0x126)) {
    do {
      iVar1 = param_1 + iVar4 * 2;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      fn_0022f818(&local_58,0x15,(int)*(short *)(iVar1 + 0x11c),0);
      fn_0031b78c(param_1,iVar4,0,&local_58);
      uVar2 = fn_006f4104(param_1 + 0xe4,auStack_480,(int)*(short *)(iVar1 + 0x11c));
      fn_002c3df8(param_1,iVar4,4,uVar2);
      iVar1 = fn_0057a2dc(param_1,auStack_480,(int)*(short *)(iVar1 + 0x11c));
      if (iVar1 == 0) {
        local_484 = DAT_00891b9c;
        fn_002c37e0(param_1,iVar4,&local_484);
      }
      else {
        local_488 = DAT_00891b94;
        fn_002c37e0(param_1,iVar4,&local_488);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(short *)(param_1 + 0x126));
  }
  return;
}


