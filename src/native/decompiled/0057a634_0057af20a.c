#include "0057a634_0057af20a.h"



void fn_0057a8d4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_008417f8;
  param_1[0x39] = &DAT_00841944;
  uVar1 = param_1[0x44];
  uVar2 = uVar1;
  if ((uint)param_1[0x45] < uVar1) {
    do {
      uVar2 = uVar2 + 0x428;
    } while (uVar2 != param_1[0x45]);
  }
  iVar3 = (int)((longlong)(int)(param_1[0x46] - uVar1) * -0x99fc267 +
                ((ulonglong)(param_1[0x46] - uVar1) << 0x20) >> 0x20);
  fn_001008c4(uVar1,(iVar3 >> 10) - (iVar3 >> 0x1f),0);
  fn_00397a78(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_0057a7f0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  *(undefined1 *)((int)puVar1 + 0xf5) = 1;
  *puVar1 = &PTR_FUN_008417f8;
  puVar1[0x39] = &DAT_00841944;
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*param_2)(param_2);
    do {
      if (puVar2 == &DAT_00891a10) {
        puVar2 = param_2;
        goto LAB_0057a868;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0057a868:
  puVar1[0x3e] = puVar2;
  piVar3 = (int *)param_2[6];
  if (piVar3 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar2 == &DAT_00891a14) goto LAB_0057a8a4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0057a8a4:
  puVar1[0x40] = 0;
  puVar1[0x3f] = piVar3;
  puVar1[0x42] = 0;
  *(undefined1 *)(puVar1 + 0x43) = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  return puVar1;
}



void fn_0057a7ec(int param_1)

{
  fn_0059e110(param_1 + 0xb0);
  fn_002c4304(param_1);
  return;
}



void fn_0057a794(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = fn_006f6a5c();
  uVar2 = fn_006f6ab4(param_1);
  if ((uVar2 & 0x100000) == 0 || (uVar2 & 0x200000) == 0) {
    if ((uVar1 & 0x100000) == 0) {
      if ((uVar1 & 0x200000) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x100) + 0x18) = 2;
        return;
      }
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x100) + 0x18) = 1;
    }
  }
  return;
}



void fn_0057a784(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



undefined1 * fn_0057a634(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_490 [266];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
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
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
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
  local_2c = 0;
  piVar3 = (int *)param_1[0x3a];
  uVar4 = *(uint *)(param_1[0x41] + 8);
  uVar5 = piVar3[1] - *piVar3;
  iVar6 = (int)((longlong)(int)uVar5 * -0x99fc267 + ((ulonglong)uVar5 << 0x20) >> 0x20);
  if ((uint)((iVar6 >> 10) - (iVar6 >> 0x1f)) <= uVar4) {
    iVar6 = (int)((longlong)(int)uVar5 * -0x99fc267 + ((ulonglong)uVar5 << 0x20) >> 0x20);
    fn_002ff628(9,&DAT_008c761b,&DAT_008c761b,uVar4,(iVar6 >> 10) - (iVar6 >> 0x1f));
  }
  fn_0017821c(local_490,*piVar3 + uVar4 * 0x428,0x428);
  fn_0020bbc4(auStack_28,local_490[0]);
  uVar1 = fn_006c0114(auStack_24);
  uVar2 = fn_006bf5c8(auStack_24);
  fn_0018a618(&local_68,0x20,0x1f,L"%4d/%4d",uVar2,uVar1);
  (**(code **)(*param_1 + 0x13c))(param_1,0,1,&local_68);
  return auStack_28;
}


