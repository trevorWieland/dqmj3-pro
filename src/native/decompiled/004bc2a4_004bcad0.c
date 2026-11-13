#include "004bc2a4_004bcad0.h"



undefined4
fn_004bcad0(int param_1,undefined4 param_2,int param_3,code *param_4,undefined4 param_5,
            undefined1 *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_68;
  undefined2 local_64;
  uint local_60;
  int local_58;
  uint local_50;
  int local_30 [3];
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  if (*(int *)(*(int *)(iVar1 + 0xc) + 0x34) - *(int *)(*(int *)(iVar1 + 0xc) + 0x30) >> 2 != 0) {
    iVar1 = fn_001249d0();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    iVar2 = fn_00169c08(&local_68,0xffff8000);
    if (iVar2 < 0) {
      fn_0015e294();
    }
    if (local_68 != *(int *)(iVar1 + 0x1b4)) {
      return 0;
    }
  }
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  iVar2 = fn_00169c08(&local_68,0xffff8000);
  if (iVar2 < 0) {
    fn_0015e294();
  }
  if (local_68 == *(int *)(iVar1 + 0x1b4)) {
    fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp"
                 ,0x69,0xe000001a,0);
    *param_6 = (char)param_3;
  }
  else {
    fn_004bac20(&local_68,10,param_2);
    local_64 = 2;
    iVar1 = (*param_4)(param_5,0);
    uVar3 = local_60;
    while (iVar1 == param_3) {
      local_60 = uVar3;
      if (uVar3 != 0xffffffff) {
        fn_0013d0fc(local_30);
        local_50 = local_30[0] - local_58;
        if (local_50 < local_60) {
          uVar3 = local_60 - local_50;
        }
        else {
          uVar3 = 0;
        }
      }
      fn_004bd6e4(uVar3);
      iVar2 = fn_004bab94(&local_68,
                           L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp"
                           ,0x72);
      if (iVar2 == 0) break;
      iVar1 = (*param_4)(param_5,0);
      uVar3 = local_60;
    }
    if (iVar1 == param_3) {
      fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp"
                   ,0x79,0xe000000c,0);
    }
    *param_6 = (char)iVar1;
  }
  return 1;
}



void fn_004bc730(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  bool bVar6;
  
  (**(code **)(*(int *)(param_1 + 0x50) + 8))();
  (**(code **)(*(int *)(param_1 + 0xa0) + 8))();
  for (piVar5 = *(int **)(param_1 + 0x110); piVar5 != *(int **)(param_1 + 0x118);
      piVar5 = (int *)piVar5[3]) {
    piVar1 = piVar5 + 1;
    do {
      bVar6 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar6);
    *piVar1 = *piVar1 + 1;
    fn_004b301c(piVar5,3);
    if (*(char *)((int)piVar5 + 0x22) == '\x03') {
      fn_004b301c(piVar5,4);
      if (*(char *)(param_1 + 0x1c8) != '\0') {
        (**(code **)(*piVar5 + 0x14))(piVar5,0);
      }
      iVar3 = param_2[1];
      piVar5[0xc] = *param_2;
      piVar5[0xd] = iVar3;
      (**(code **)(*piVar5 + 8))(piVar5);
      if (*(char *)((int)piVar5 + 0x22) == '\x04') {
        (**(code **)(*piVar5 + 0x1c))(piVar5);
      }
      piVar5[10] = piVar5[10] + 1;
    }
    if (*(char *)((int)piVar5 + 0x22) == '\x05') {
      puVar4 = (uint *)(piVar5 + 1);
      do {
        uVar2 = *puVar4 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar6);
      *puVar4 = uVar2;
      bVar6 = uVar2 == 0;
      if (bVar6) {
        uVar2 = (uint)*(byte *)(piVar5 + 2);
      }
      if (bVar6 && uVar2 == 0) {
        *(undefined1 *)(piVar5 + 2) = 1;
        (**(code **)(*piVar5 + 4))(piVar5);
      }
    }
    else {
      fn_004bdba4(param_1,piVar5,0);
    }
    fn_004b301c(piVar5,0);
  }
  (**(code **)(*(int *)(param_1 + 0xa0) + 0xc))((int *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x004bc7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x50) + 0xc))();
  return;
}



undefined4 fn_004bc44c(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = 0;
  if (DAT_008b637e != '\0') {
    uVar1 = fn_0074cbe4(DAT_008b63d8);
  }
  if (uVar1 == 0) {
    puVar2 = &DAT_008e76a0;
  }
  else {
    if ((uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2) <= uVar1) {
      fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                   ,0x48,0xe0000003,0);
      iVar3 = -1;
      goto LAB_004bc4ac;
    }
    puVar2 = *(undefined4 **)(*DAT_008e76e4 + uVar1 * 4);
  }
  iVar3 = puVar2[4];
  if (iVar3 == 0) {
    return 0;
  }
LAB_004bc4ac:
  if (*(int *)(iVar3 + 0xc) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0xc);
}



void fn_004bc358(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  if (*(char *)((int)param_2 + 0x22) == '\x03') {
    fn_004b301c(param_2,4);
    if (*(char *)(param_1 + 0x1c8) != '\0') {
      (**(code **)(*param_2 + 0x14))(param_2,0);
    }
    iVar1 = param_3[1];
    param_2[0xc] = *param_3;
    param_2[0xd] = iVar1;
    (**(code **)(*param_2 + 8))(param_2);
    if (*(char *)((int)param_2 + 0x22) == '\x04') {
      (**(code **)(*param_2 + 0x1c))(param_2);
    }
    param_2[10] = param_2[10] + 1;
  }
  if (*(char *)((int)param_2 + 0x22) != '\x05') {
    fn_004bdba4(param_1,param_2,0);
    return;
  }
  puVar3 = (uint *)(param_2 + 1);
  do {
    uVar2 = *puVar3 - 1;
    bVar4 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar4);
  *puVar3 = uVar2;
  bVar4 = uVar2 == 0;
  if (bVar4) {
    uVar2 = (uint)*(byte *)(param_2 + 2);
  }
  if (bVar4 && uVar2 == 0) {
    *(undefined1 *)(param_2 + 2) = 1;
                    /* WARNING: Could not recover jumptable at 0x004bc444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 4))();
    return;
  }
  return;
}



undefined4 * fn_004bc2a4(undefined4 *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  
  *param_1 = &DAT_00855d98;
  if ((int *)param_1[0x46] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x46] + 4))();
    param_1[0x46] = 0;
  }
  piVar1 = (int *)param_1[0x36];
  if (piVar1 != (int *)0x0) {
    param_3 = -1;
    param_4 = (uint *)(piVar1 + 1);
  }
  *param_1 = &DAT_00855a38;
  if (piVar1 != (int *)0x0) {
    do {
      uVar2 = *param_4 + param_3;
      bVar3 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar3);
    *param_4 = uVar2;
    bVar3 = uVar2 == 0;
    if (bVar3) {
      uVar2 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar3 && uVar2 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
  }
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  param_1[0x24] = &DAT_0085316c;
  return param_1;
}


