#include "00579dec_0057a4f8b.h"



void fn_0057a4f8(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 auStack_478 [1064];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  piVar5 = (int *)param_1[0x3a];
  uVar4 = *(uint *)(param_1[0x41] + 8);
  uVar2 = piVar5[1] - *piVar5;
  iVar3 = (int)((longlong)(int)uVar2 * -0x99fc267 + ((ulonglong)uVar2 << 0x20) >> 0x20);
  if ((uint)((iVar3 >> 10) - (iVar3 >> 0x1f)) <= uVar4) {
    iVar3 = (int)((longlong)(int)uVar2 * -0x99fc267 + ((ulonglong)uVar2 << 0x20) >> 0x20);
    fn_002ff628(9,&DAT_008c761b,&DAT_008c761b,uVar4,(iVar3 >> 10) - (iVar3 >> 0x1f));
  }
  fn_0017821c(auStack_478,*piVar5 + uVar4 * 0x428,0x428);
  uVar1 = fn_006f4104(param_1 + 0x39,auStack_478,(int)*(short *)(param_1[0x41] + 0x14));
  fn_0018a618(&local_50,0x20,0x1f,&DAT_0057a62c,uVar1);
  (**(code **)(*param_1 + 0x13c))(param_1,1,1,&local_50);
  return;
}



void fn_0057a3dc(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *local_43c;
  undefined4 local_438 [266];
  
  piVar4 = (int *)param_1[0x3a];
  uVar3 = *(uint *)(param_1[0x41] + 8);
  uVar1 = piVar4[1] - *piVar4;
  iVar2 = (int)((longlong)(int)uVar1 * -0x99fc267 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 10) - (iVar2 >> 0x1f)) <= uVar3) {
    iVar2 = (int)((longlong)(int)uVar1 * -0x99fc267 + ((ulonglong)uVar1 << 0x20) >> 0x20);
    fn_002ff628(9,&DAT_008c761b,&DAT_008c761b,uVar3,(iVar2 >> 10) - (iVar2 >> 0x1f));
  }
  fn_0017821c(local_438,*piVar4 + uVar3 * 0x428,0x428);
  fn_00231074(&local_43c,local_438[0],0);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,local_43c);
  if (local_43c != &DAT_008f9cf4) {
    piVar4 = local_43c + -3;
    iVar2 = *piVar4;
    if ((iVar2 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_43c + -3,local_43c[-2] + 8,0);
    }
  }
  return;
}



void fn_0057a3c4(void)

{
  fn_0022f750((char *)&DAT_0057a3cc);
  return;
}



void fn_0057a348(int *param_1)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  fn_0022f818(&local_38,0x15,(int)*(short *)(param_1[0x41] + 0x14),0);
  (**(code **)(*param_1 + 0x13c))(param_1,1,0,&local_38);
  return;
}



undefined4 fn_0057a2dc(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  fn_0020bbc4(auStack_20,*param_2);
  iVar1 = fn_006bf5c8(auStack_1c);
  iVar2 = fn_006f4104(param_1 + 0xe4,param_2,param_3);
  if (iVar1 < iVar2) {
    return 0;
  }
  return 1;
}



uint fn_0057a228(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = **(uint **)(param_1 + 0xe8);
  uVar3 = (*(uint **)(param_1 + 0xe8))[1];
  uVar2 = 0;
  if (uVar1 < uVar3) {
    uVar3 = uVar3 - uVar1;
    iVar5 = (int)((longlong)(int)uVar3 * -0x99fc267 + ((ulonglong)uVar3 << 0x20) >> 0x20);
    iVar4 = 1;
    if (1 < ((iVar5 >> 10) - (iVar5 >> 0x1f)) + 1) {
      while (uVar2 < param_2) {
        iVar4 = iVar4 + 1;
        iVar5 = (int)((longlong)(int)uVar3 * -0x99fc267 + ((ulonglong)uVar3 << 0x20) >> 0x20);
        uVar1 = uVar1 + 0x428;
        uVar2 = uVar2 + 1;
        if (((iVar5 >> 10) - (iVar5 >> 0x1f)) + 1 <= iVar4) {
          return uVar1;
        }
      }
    }
  }
  else {
    for (; (uVar1 != uVar3 && (uVar2 < param_2)); uVar2 = uVar2 + 1) {
      uVar1 = uVar1 + 0x428;
    }
  }
  return uVar1;
}



undefined4 fn_0057a168(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_0057a1b0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0057a1b0:
  *(undefined4 **)(param_1 + 0x100) = puVar1;
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xdb);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00891a8c) {
        puVar3 = puVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  *(undefined4 **)(param_1 + 0x104) = puVar3;
  fn_0035c408(param_1 + 0x110);
  *(int *)(param_1 + 0xe8) = param_1 + 0x110;
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(*(int *)(param_1 + 0x104) + 8);
  return 1;
}


