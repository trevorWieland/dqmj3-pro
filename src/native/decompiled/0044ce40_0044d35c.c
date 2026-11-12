#include "0044ce40_0044d35c.h"



void fn_0044d35c(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,
                 uint param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0x10) - uVar2;
  iVar4 = *(int *)(param_1 + 0x14) -
          (*(int *)(param_1 + 0xc) + (uint)(*(uint *)(param_1 + 0x10) < uVar2));
  iVar5 = param_4 + (uint)CARRY4(param_3,param_6);
  bVar6 = uVar3 < param_3 + param_6;
  if ((int)(iVar4 - (iVar5 + (uint)bVar6)) < 0 !=
      (SBORROW4(iVar4,iVar5) != SBORROW4(iVar4 - iVar5,(uint)bVar6))) {
    param_6 = uVar3 - param_3;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  iVar4 = iVar5;
  if (iVar5 == 0) {
    iVar4 = 2;
  }
  if (iVar5 < 0) {
    if (iVar4 < -8) {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
    }
  }
  else if (0 < iVar5) {
    if (iVar4 < 9) {
      iVar4 = 3;
    }
    else {
      iVar4 = 4;
    }
  }
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + iVar4 * 4 + 0xc);
  (**(code **)*puVar1)
            (puVar1,param_2,param_3 + uVar2,
             param_4 + *(int *)(param_1 + 0xc) + (uint)CARRY4(param_3,uVar2),param_5,param_6);
  return;
}



void fn_0044d30c(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x34))(param_1);
  iVar1 = param_1[1];
  fn_00170704(iVar1 + 0xe8);
  *param_1 = *(int *)(iVar1 + 0xdc);
  *(int **)(iVar1 + 0xdc) = param_1;
  *(int *)(iVar1 + 0xe4) = *(int *)(iVar1 + 0xe4) + -1;
  fn_001707b4(iVar1 + 0xe8);
  return;
}



int fn_0044d1e4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *local_20;
  undefined4 local_1c [2];
  
  piVar2 = *(int **)(param_1 + 4);
  iVar1 = param_1;
  if (param_2 == 0) {
    iVar1 = 2;
  }
  if (param_2 < 0) {
    if (param_2 < -8) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else if (0 < param_2) {
    if (param_2 < 9) {
      iVar1 = 3;
    }
    else {
      iVar1 = 4;
    }
  }
  if (piVar2[iVar1 + 3] == 0) {
    local_1c[0] = 0;
    iVar1 = (**(code **)(*piVar2 + 0x44))(piVar2,local_1c);
    if (iVar1 < 0) goto LAB_0044d2e0;
    local_20 = (int *)0x0;
    iVar1 = (**(code **)(*piVar2 + 0x3c))(piVar2,&local_20,local_1c[0]);
    if (iVar1 < 0) goto LAB_0044d2e0;
    iVar1 = (**(code **)(*local_20 + 0x18))(local_20,param_2);
    if (iVar1 < 0) {
      (**(code **)(*local_20 + 0x30))();
      goto LAB_0044d2e0;
    }
    iVar1 = 0;
    if (param_2 == 0) {
      iVar1 = 2;
    }
    if (param_2 < 0) {
      if (param_2 < -8) {
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
      }
    }
    else if (0 < param_2) {
      if (param_2 < 9) {
        iVar1 = 3;
      }
      else {
        iVar1 = 4;
      }
    }
    piVar2[iVar1 + 3] = (int)local_20;
  }
  iVar1 = 0;
LAB_0044d2e0:
  if (-1 < iVar1) {
    *(int *)(param_1 + 0x18) = param_2;
    iVar1 = 0;
  }
  return iVar1;
}



int fn_0044d104(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_10 [8];
  
  if (*param_1 == 0) {
    iVar4 = param_1[2];
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 4);
      iVar2 = iVar1;
      if (iVar1 == 0) {
        iVar2 = 2;
      }
      if (iVar1 < 0) {
        if (iVar2 < -8) {
          iVar2 = 0;
        }
        else {
          iVar2 = 1;
        }
      }
      else if (0 < iVar1) {
        if (iVar2 < 9) {
          iVar2 = 3;
        }
        else {
          iVar2 = 4;
        }
      }
      puVar3 = *(undefined4 **)(iVar4 + iVar2 * 4 + 0xc);
      iVar4 = (**(code **)*puVar3)(puVar3,auStack_10,param_1[3] + param_3,0,param_5,param_6);
      if (iVar4 < 0) {
        return iVar4;
      }
    }
  }
  else {
    fn_00301a9c(param_5,*param_1 + param_3);
  }
  return 0;
}



int fn_0044ce6c(undefined4 **param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 ***local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int *local_58;
  undefined4 local_54;
  int local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 ***local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  
  local_70 = &local_44;
  local_64 = 0;
  local_68 = &DAT_0085251c;
  local_48 = 1;
  uStack_40 = 1;
  local_24 = DAT_0089a670;
  local_6c = 1;
  local_44 = local_70;
  iVar2 = fn_0044e2a4(&local_24,&local_50,3);
  if (iVar2 < 0) {
    local_68 = &DAT_0085251c;
    if (local_60 != 0 || local_5c != 0) {
      uVar3 = fn_006ceaf4(&local_68);
      local_54 = (undefined4)uVar3;
      fn_0044e304(&local_54,(int)((ulonglong)uVar3 >> 0x20),local_60,local_5c);
    }
  }
  else {
    local_64 = DAT_0089a670;
    local_60 = local_50;
    local_5c = iStack_4c;
    local_3c = 2;
    uStack_38 = 0x6e6f6369;
    uStack_34 = 0;
    puStack_20 = &local_3c;
    local_24 = 2;
    uStack_1c = 0xc;
    iVar2 = fn_0044de48(&local_68,&local_58,&local_24,1);
    if (iVar2 < 0) {
      local_68 = &DAT_0085251c;
      if (local_60 != 0 || local_5c != 0) {
        uVar3 = fn_006ceaf4(&local_68);
        local_30 = (undefined4)uVar3;
        fn_0044e304(&local_30,(int)((ulonglong)uVar3 >> 0x20),local_60,local_5c);
      }
    }
    else {
      local_6c = 0x36c0;
      local_70 = (undefined4 ***)param_1;
      iVar2 = (**(code **)*local_58)(local_58,auStack_18,0,0);
      if (-1 < iVar2) {
        (**(code **)(*local_58 + 0x30))();
        iVar1 = local_5c;
        iVar2 = local_60;
        if (local_60 != 0 || local_5c != 0) {
          uVar3 = fn_006ceaf4(&local_68);
          local_70 = (undefined4 ***)uVar3;
          fn_0044e304(&local_70,(int)((ulonglong)uVar3 >> 0x20),iVar2,iVar1);
          local_60 = 0;
          local_5c = 0;
        }
        iVar1 = local_5c;
        iVar2 = local_60;
        local_64 = 0;
        local_68 = &DAT_0085251c;
        if (local_60 != 0 || local_5c != 0) {
          uVar3 = fn_006ceaf4(&local_68);
          local_70 = (undefined4 ***)uVar3;
          fn_0044e304(&local_70,(int)((ulonglong)uVar3 >> 0x20),iVar2,iVar1);
        }
        return 0;
      }
      (**(code **)(*local_58 + 0x30))();
      if (local_60 != 0 || local_5c != 0) {
        uVar3 = fn_006ceaf4(&local_68);
        local_2c = (undefined4)uVar3;
        fn_0044e304(&local_2c,(int)((ulonglong)uVar3 >> 0x20),local_60,local_5c);
        local_60 = 0;
        local_5c = 0;
      }
      local_64 = 0;
      local_68 = &DAT_0085251c;
      if (local_5c != 0 || local_60 != 0) {
        uVar3 = fn_006ceaf4(&local_68);
        local_28 = (undefined4)uVar3;
        fn_0044e304(&local_28,(int)((ulonglong)uVar3 >> 0x20),local_60,local_5c);
      }
    }
  }
  return iVar2;
}



int fn_0044ce40(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  return in_stack_00000004 * 0x20 + in_stack_00000008 * 0x18;
}


