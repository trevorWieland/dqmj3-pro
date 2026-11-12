#include "002255b4_002266b4b.h"



int fn_002266b4(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = fn_006f7a9c(DAT_008977e0);
    if ((int)param_3 < 0) {
      return 0;
    }
    iVar1 = *(int *)(iVar2 + 4);
    iVar2 = *(int *)(iVar2 + 8) - iVar1;
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    if ((int)param_3 < 0) {
      return 0;
    }
    iVar1 = *(int *)(DAT_00897848 + 4);
    iVar2 = *(int *)(DAT_00897848 + 8) - iVar1;
  }
  if (param_3 < (uint)(iVar2 / 0x34)) {
    return iVar1 + param_3 * 0x34;
  }
  return 0;
}



void fn_0022664c(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 in_s0;
  
  if (*(char *)(param_1 + 0x243) == '\0') {
    iVar1 = *(int *)(param_1 + 0x184);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x17c);
  }
  if (iVar1 != 0) {
    fn_0017fde4();
    fn_0017fc3c();
  }
  iVar1 = (int)*(char *)(param_1 + 0x194);
  bVar2 = iVar1 != -1;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x180);
  }
  if (bVar2 && iVar1 != 0) {
    fn_0017fde4();
    fn_0017fc3c();
  }
  *(undefined4 *)(param_1 + 0xf8) = in_s0;
  return;
}



undefined4 fn_00226124(int param_1,int param_2)

{
  int iVar1;
  
  fn_006f7a48(DAT_008977e0);
  iVar1 = fn_006a7dc8();
  if ((((((iVar1 != 0) && (*(char *)(param_2 + 0xdc) == '\0')) &&
        (*(char *)(param_1 + 0x58) != '\0')) &&
       ((*(char *)(param_1 + 0x23f) == '\0' &&
        (iVar1 = fn_006aa6e0(*(undefined4 *)(param_1 + 0x228)), iVar1 == 0)))) &&
      ((iVar1 = fn_006a9938(param_2), iVar1 != 0 || (iVar1 = fn_006a99b0(param_2), iVar1 != 0))))
     && (((iVar1 = fn_006a9938(param_1), iVar1 != 0 || (iVar1 = fn_006a99b0(param_1), iVar1 != 0))
         && (*(char *)(param_1 + 0x58) != '\0')))) {
    iVar1 = fn_006a9c40(param_2,param_1,0,0);
    if (iVar1 != 0) {
      fn_00223a90(param_1,param_2);
      return 1;
    }
  }
  return 0;
}



undefined4 fn_00225f7c(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,1);
  fn_002263ac(param_1);
  param_1[0x4e] = param_1[0x4e] & 0xfffffffd;
  fn_001da640(param_1);
  fn_002241e4(param_1);
  fn_006b2428(param_1,0);
  return 1;
}



void fn_002263ac(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar1 = fn_00154ac8(0x18);
  if ((iVar1 != 0) && (iVar1 = fn_006f7a20(DAT_008977e0), iVar1 == 0)) {
    puVar7 = (uint *)(param_1 + 0x69);
    iVar1 = fn_006a7f8c(puVar7);
    if (iVar1 == 0) {
      uVar2 = fn_006f7a9c(DAT_008977e0);
      fn_002795c8(&local_30,uVar2);
      *puVar7 = local_30;
      param_1[0x6a] = iStack_2c;
      param_1[0x6b] = iStack_28;
    }
    if (param_1[0x5f] == 0) {
      iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
      piVar3 = (int *)0x0;
      if (iVar1 != 0) {
        piVar3 = (int *)fn_005e846c();
      }
      piVar6 = (int *)param_1[0x5f];
      if (piVar6 != piVar3) {
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
        param_1[0x5f] = (int)piVar3;
        piVar6 = piVar3;
      }
      iVar1 = fn_006f7a9c(DAT_008977e0);
      uVar4 = *puVar7;
      if (((int)uVar4 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= uVar4))
      {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 4) + uVar4 * 0x34;
      }
      iVar1 = fn_0069ee38(piVar6,iVar1,0);
      if (iVar1 == 0) {
        return;
      }
      if (param_1[0x6a] != -1) {
        iVar1 = fn_006f7a9c(DAT_008977e0);
        uVar4 = param_1[0x6a];
        if (((int)uVar4 < 0) ||
           ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= uVar4)) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 + 4) + uVar4 * 0x34;
        }
        fn_0069eb10(piVar6,iVar1,0);
      }
      uVar2 = fn_0017fde4(param_1[0x5f]);
      fn_0017fc28(uVar2,1);
    }
    if (param_1[0x39] == param_1[0x61]) {
      uVar2 = fn_0017fde4(param_1[0x5f]);
      fn_002cd6b0(uVar2,0);
      fn_001cac64(0);
      (**(code **)(*param_1 + 0x20))(param_1);
      uVar2 = fn_0017fde4(param_1[0x61]);
      fn_00224680(param_1,uVar2);
      iVar1 = fn_0017fde4(param_1[0x5f]);
      if ((char)param_1[0x8f] == '\0') {
        if (iVar1 == 0) {
          if (*(char *)((int)param_1 + 0x243) == '\0') {
            iVar1 = param_1[0x61];
          }
          else {
            iVar1 = param_1[0x5f];
          }
          iVar1 = fn_0017fde4(iVar1);
        }
        iVar5 = fn_006ebf84(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),iVar1);
        if (iVar5 == 0) {
          fn_001969a4(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),iVar1);
          *(undefined1 *)(param_1 + 0x8f) = 1;
        }
      }
      uVar2 = fn_00242bd4(0x18d);
      local_30 = 0;
      fn_0022455c(param_1,param_1[0x5f],uVar2,param_1[0x69]);
    }
    *(undefined1 *)((int)param_1 + 0x243) = 1;
  }
  return;
}


