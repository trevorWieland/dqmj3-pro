#include "0045616c_004566f8a.h"



undefined4 fn_00456400(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 uStack_10;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/CallContext.cpp"
                 ,0xdb,0xe000000e,0);
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\0') {
      local_18 = &DAT_80010001;
      local_14 = &DAT_007dba44;
      uStack_10 = 0x71;
      fn_00455e8c(param_1,0,&local_18);
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      piVar4 = *(int **)(param_1 + 0x24);
      piVar3 = (int *)*piVar4;
      while (piVar2 = piVar3, piVar2 != piVar4) {
        piVar3 = *(int **)(param_1 + 0x24);
        if (piVar2 != *(int **)(param_1 + 0x24)) {
          piVar3 = (int *)*piVar2;
          *(int *)piVar2[1] = *piVar2;
          *(int *)(*piVar2 + 4) = piVar2[1];
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
          *piVar2 = *(int *)(param_1 + 0x18);
          *(int **)(param_1 + 0x18) = piVar2;
        }
      }
      if (*(int **)(param_1 + 0x50) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x50) + 4))();
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      return 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}



int fn_004562e0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_58;
  char *local_54;
  undefined1 local_50 [4];
  undefined2 local_4c;
  uint local_48;
  int local_40;
  uint local_38;
  char local_18 [8];
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_54 = local_18;
    local_18[0] = '\0';
    local_58 = param_1;
    iVar2 = fn_004bcad0(param_2 != 0,param_2,0,&DAT_004562dc);
    if (iVar2 != 0) {
      return (int)local_18[0];
    }
    fn_004bac20(local_50,10,param_2);
    local_4c = 2;
    cVar1 = *(char *)(param_1 + 0x10);
    uVar3 = local_48;
    while (cVar1 == '\x01') {
      local_48 = uVar3;
      if (uVar3 != 0xffffffff) {
        fn_0013d0fc(&local_58);
        local_38 = local_58 - local_40;
        if (local_38 < local_48) {
          uVar3 = local_48 - local_38;
        }
        else {
          uVar3 = 0;
        }
      }
      fn_004bd6e4(uVar3);
      iVar2 = fn_004bab94(local_50,
                           L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/CallContext.cpp"
                           ,0x1a4);
      if (iVar2 == 0) break;
      uVar3 = local_48;
      cVar1 = *(char *)(param_1 + 0x10);
    }
  }
  cVar1 = *(char *)(param_1 + 0x10);
  if ((cVar1 == '\x02' || cVar1 == '\x03') || (cVar1 == '\x04')) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



void fn_0045616c(int param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *param_3;
  if (param_4 == 0) {
    iVar6 = **(int **)(param_1 + 0x24);
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 == (int *)0x0) {
      piVar1 = *(int **)(param_1 + 0x1c);
      if (piVar1 == *(int **)(param_1 + 0x20)) {
        if (*(int *)(param_1 + 0x14) == 0) {
          uVar5 = 0x20;
        }
        else {
          uVar2 = *(uint *)(*(int *)(param_1 + 0x14) + 4);
          uVar5 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
          if (uVar5 < uVar2 + 0x20) {
            uVar5 = uVar2 + 0x20;
          }
        }
        puVar3 = (undefined4 *)fn_0015ece0(0xc);
        uVar4 = fn_0015ece0(uVar5 << 4);
        puVar3[2] = uVar4;
        *puVar3 = *(undefined4 *)(param_1 + 0x14);
        puVar3[1] = uVar5;
        *(undefined4 **)(param_1 + 0x14) = puVar3;
        piVar1 = (int *)puVar3[2];
        *(int **)(param_1 + 0x1c) = piVar1;
        *(int **)(param_1 + 0x20) = piVar1 + uVar5 * 4;
      }
      *(int **)(param_1 + 0x1c) = piVar1 + 4;
    }
    else {
      *(int *)(param_1 + 0x18) = *piVar1;
    }
  }
  else {
    piVar1 = *(int **)(param_1 + 0x18);
    iVar6 = *(int *)(param_1 + 0x24);
    if (piVar1 == (int *)0x0) {
      piVar1 = *(int **)(param_1 + 0x1c);
      if (piVar1 == *(int **)(param_1 + 0x20)) {
        if (*(int *)(param_1 + 0x14) == 0) {
          uVar5 = 0x20;
        }
        else {
          uVar2 = *(uint *)(*(int *)(param_1 + 0x14) + 4);
          uVar5 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
          if (uVar5 < uVar2 + 0x20) {
            uVar5 = uVar2 + 0x20;
          }
        }
        puVar3 = (undefined4 *)fn_0015ece0(0xc);
        uVar4 = fn_0015ece0(uVar5 << 4);
        puVar3[2] = uVar4;
        *puVar3 = *(undefined4 *)(param_1 + 0x14);
        puVar3[1] = uVar5;
        *(undefined4 **)(param_1 + 0x14) = puVar3;
        piVar1 = (int *)puVar3[2];
        *(int **)(param_1 + 0x1c) = piVar1;
        *(int **)(param_1 + 0x20) = piVar1 + uVar5 * 4;
      }
      *(int **)(param_1 + 0x1c) = piVar1 + 4;
    }
    else {
      *(int *)(param_1 + 0x18) = *piVar1;
    }
  }
  if (piVar1 + 2 != (int *)0x0) {
    piVar1[2] = param_2;
    piVar1[3] = iVar7;
  }
  *piVar1 = iVar6;
  piVar1[1] = *(int *)(iVar6 + 4);
  **(undefined4 **)(iVar6 + 4) = piVar1;
  *(int **)(iVar6 + 4) = piVar1;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}


