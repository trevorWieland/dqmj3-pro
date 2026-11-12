#include "006caf88_006cb974.h"



undefined2 fn_006cb974(void)

{
  int iVar1;
  
  iVar1 = fn_006b86f4(*(undefined4 *)(DAT_00897804 + 0x30));
  return *(undefined2 *)(iVar1 + 2);
}



undefined4 fn_006cb910(undefined4 param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_00660e2c((int)param_2);
  if ((iVar1 == 6 || iVar1 == 7) || (iVar1 == 8 || iVar1 == 9)) {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_006cb7f8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_28;
  
  local_28 = param_4;
  iVar2 = fn_006cb760();
  if (iVar2 != 4) {
    iVar2 = 0;
    iVar5 = 0;
    iVar4 = 0;
    iVar6 = param_2 + 1;
    do {
      local_28 = 0x10100;
      iVar3 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
      if ((iVar3 == 1) && (iVar3 = fn_00154ac8(0x792), iVar3 == 0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,uVar1);
      uVar1 = fn_00154ac8(0x311);
      local_28 = CONCAT13(uVar1,(undefined3)local_28);
      if (*(char *)((int)&local_28 + iVar4) == '\0') {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar2 = iVar2 + 1;
      }
      bVar7 = SBORROW4(iVar2,iVar6);
      iVar3 = iVar2 - iVar6;
      if (iVar2 != iVar6) {
        bVar7 = SBORROW4(iVar4 + 1,4);
        iVar3 = iVar4 + -3;
        iVar4 = iVar4 + 1;
      }
    } while (iVar3 < 0 != bVar7);
    param_2 = param_2 + iVar5;
  }
  return param_2;
}



int fn_006cb760(void)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_28;
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    local_28 = 0x10100;
    iVar3 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
    if ((iVar3 == 1) && (iVar3 = fn_00154ac8(0x792), iVar3 == 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,uVar2);
    uVar2 = fn_00154ac8(0x311);
    local_28 = CONCAT13(uVar2,(undefined3)local_28);
    pcVar1 = (char *)((int)&local_28 + iVar4);
    iVar4 = iVar4 + 1;
    if (*pcVar1 != '\0') {
      iVar5 = iVar5 + 1;
    }
  } while (iVar4 < 4);
  return iVar5;
}



void fn_006cb720(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006b8328(*(undefined4 *)(DAT_00897804 + 0x24),1);
                    /* WARNING: Could not recover jumptable at 0x006cb758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,param_2,uVar1);
  return;
}



void fn_006cb6e0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006b8328(*(undefined4 *)(DAT_00897804 + 0x24),0);
                    /* WARNING: Could not recover jumptable at 0x006cb718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,param_2,uVar1);
  return;
}



void fn_006cb6a0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006b8328(*(undefined4 *)(DAT_00897804 + 0x24),2);
                    /* WARNING: Could not recover jumptable at 0x006cb6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,param_2,uVar1);
  return;
}



void fn_006cb654(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006b7bc4(*(undefined4 *)(DAT_00897804 + 0x24),1);
                    /* WARNING: Could not recover jumptable at 0x006cb68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,param_2,uVar1);
  return;
}



void fn_006cb618(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006b7b7c(*(undefined4 *)(DAT_00897804 + 0x24));
                    /* WARNING: Could not recover jumptable at 0x006cb64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,param_2,uVar1);
  return;
}



void fn_006cb5dc(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006b7aec(*(undefined4 *)(DAT_00897804 + 0x24));
                    /* WARNING: Could not recover jumptable at 0x006cb610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,param_2,uVar1);
  return;
}



void fn_006cb5a0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006b7aa8(*(undefined4 *)(DAT_00897804 + 0x24));
                    /* WARNING: Could not recover jumptable at 0x006cb5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,param_2,uVar1);
  return;
}



undefined4 fn_006cb254(int *param_1)

{
  return (&DAT_00893d54)[*param_1];
}



bool fn_006cb0bc(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)fn_006b873c(*(undefined4 *)(DAT_00897804 + 0x30));
  return *pcVar1 != '\0';
}



undefined4 fn_006cb09c(void)

{
  int iVar1;
  
  iVar1 = fn_006b873c(*(undefined4 *)(DAT_00897804 + 0x30));
  return *(undefined4 *)(iVar1 + 4);
}



bool fn_006cb074(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)fn_006b8718(*(undefined4 *)(DAT_00897804 + 0x30));
  return *pcVar1 != '\0';
}



undefined4 fn_006cb054(void)

{
  int iVar1;
  
  iVar1 = fn_006b8718(*(undefined4 *)(DAT_00897804 + 0x30));
  return *(undefined4 *)(iVar1 + 4);
}



undefined2 fn_006cb040(void)

{
  return *(undefined2 *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x2ba);
}



undefined4 fn_006cb030(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



void fn_006cafe4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006b7f9c(*(undefined4 *)(DAT_00897804 + 0x24),1,0);
  fn_00300f74(iVar1 * 100,*(undefined4 *)(param_1 + 4));
  return;
}



void fn_006cafd0(void)

{
  fn_006b8068(*(undefined4 *)(DAT_00897804 + 0x24));
  return;
}



void fn_006cafbc(void)

{
  fn_006b7f9c(*(undefined4 *)(DAT_00897804 + 0x24));
  return;
}



undefined2 fn_006caf88(void)

{
  undefined4 uVar1;
  undefined1 auStack_10 [2];
  undefined2 local_e;
  
  uVar1 = fn_006b86f4(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_00166824(auStack_10,uVar1);
  return local_e;
}


