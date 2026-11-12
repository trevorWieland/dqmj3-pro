#include "004bcca0_004bd1e0.h"



undefined4
fn_004bd1e0(int param_1,undefined4 param_2,code *param_3,undefined4 param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int local_78;
  undefined2 local_74;
  uint local_70;
  int local_68;
  uint local_60;
  int local_40 [3];
  int iStack_34;
  undefined4 uStack_30;
  code *pcStack_2c;
  undefined4 local_28;
  
  if (param_1 == 0) {
    return 0;
  }
  iStack_34 = param_1;
  uStack_30 = param_2;
  pcStack_2c = param_3;
  local_28 = param_4;
  iVar2 = fn_001249d0();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  if (*(int *)(*(int *)(iVar2 + 0xc) + 0x34) - *(int *)(*(int *)(iVar2 + 0xc) + 0x30) >> 2 != 0) {
    iVar2 = fn_001249d0();
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    iVar3 = fn_00169c08(&local_78,0xffff8000);
    if (iVar3 < 0) {
      fn_0015e294();
    }
    if (local_78 != *(int *)(iVar2 + 0x1b4)) {
      return 0;
    }
  }
  iVar2 = fn_001249d0();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  iVar3 = fn_00169c08(&local_78,0xffff8000);
  if (iVar3 < 0) {
    fn_0015e294();
  }
  if (local_78 == *(int *)(iVar2 + 0x1b4)) {
    fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp"
                 ,0x93,0xe000001a,0);
    *param_5 = 0x8001000b;
    param_5[1] = &DAT_007dba44;
    param_5[2] = 0x71;
    return 1;
  }
  fn_004bac20(&local_78,10,param_2);
  local_74 = 2;
  do {
    cVar1 = (*param_3)(local_28,0);
    if (cVar1 == '\0') {
      puVar5 = &DAT_80010001;
    }
    else {
      puVar5 = (undefined1 *)0x10001;
    }
    iVar2 = fn_004bab94(&local_78,
                         L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp"
                         ,0xa0,L"PreventRegularBlockCall");
    if (iVar2 == 0) break;
    uVar4 = local_70;
    if (local_70 != 0xffffffff) {
      fn_0013d0fc(local_40);
      local_60 = local_40[0] - local_68;
      if (local_60 < local_70) {
        uVar4 = local_70 - local_60;
      }
      else {
        uVar4 = 0;
      }
    }
    fn_004bd6e4(uVar4);
  } while ((int)puVar5 < 0);
  if ((int)puVar5 < 0) {
    fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp"
                 ,0xa9,0xe000000c,0);
    *param_5 = 0x8001000b;
    param_5[1] = &DAT_007dba44;
    param_5[2] = 0x71;
  }
  else {
    *param_5 = puVar5;
    param_5[1] = &DAT_007dba44;
    param_5[2] = 0xa2;
  }
  return 1;
}



void fn_004bd178(int param_1)

{
  fn_004bc8d0(*(undefined4 *)(param_1 + 0x3c),100,0);
  if (DAT_008b63f4 == 0) {
    fn_00735644();
    return;
  }
  fn_00735640((int)((ulonglong)DAT_008b63f4 * 1000000),
               (int)((ulonglong)DAT_008b63f4 * 1000000 >> 0x20));
  return;
}



void fn_004bcf50(undefined4 param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  
  (**(code **)(DAT_008e778c + 8))();
  if (DAT_008b637e == '\0') {
    uVar5 = 0;
  }
  else {
    puVar1 = (uint *)fn_001775e8(DAT_008b63d8);
    uVar5 = *puVar1;
  }
  puVar2 = &DAT_008e778c;
  (**(code **)(DAT_008e778c + 8))();
  if ((uVar5 == 0) ||
     ((uVar5 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2) &&
      (*(int *)(*DAT_008e76e4 + uVar5 * 4) != 0)))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  if (bVar6) {
    iVar3 = fn_001249d0();
    if (iVar3 != 0) {
      puVar2 = *(undefined4 **)(iVar3 + 0xc);
    }
    if ((iVar3 != 0 && puVar2 != (undefined4 *)0x0) &&
       (*(int *)(puVar2[3] + 0x34) - *(int *)(puVar2[3] + 0x30) >> 2 == 0)) {
      fn_00170704(&DAT_008e7794);
      fn_004746b0();
      iVar3 = fn_001249d0();
      if (iVar3 == 0) {
        iVar3 = fn_0015ece0(0x78);
        if (iVar3 != 0) {
          fn_004b3cbc();
        }
      }
      else {
        iVar3 = fn_001249d0();
        piVar4 = (int *)(iVar3 + 4);
        do {
          bVar6 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar6);
        *piVar4 = *piVar4 + 1;
      }
      fn_001707b4(&DAT_008e7794);
      (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
      fn_004bc8d0(puVar2,param_1,0);
      fn_00170704(&DAT_008e7794);
      piVar4 = (int *)fn_001249d0();
      puVar1 = (uint *)(piVar4 + 1);
      do {
        uVar5 = *puVar1 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar1);
      } while (!bVar6);
      *puVar1 = uVar5;
      bVar6 = uVar5 == 0;
      if (bVar6) {
        uVar5 = (uint)*(byte *)(piVar4 + 2);
      }
      if (bVar6 && uVar5 == 0) {
        *(undefined1 *)(piVar4 + 2) = 1;
        (**(code **)(*piVar4 + 4))();
      }
      if (DAT_008b63e8 == 0) {
        DAT_008b637c = 0;
      }
      fn_004747a4();
      fn_001707b4(&DAT_008e7794);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004bd030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  return;
}



undefined4 fn_004bcca0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  bool bVar10;
  int *local_5c;
  uint local_58;
  uint uStack_54;
  int *local_48 [4];
  int local_38;
  undefined1 auStack_34 [8];
  int *local_2c [2];
  
  uVar9 = 0;
  fn_0013d0fc(&local_58);
  (**(code **)(*(int *)(param_1 + 0x50) + 8))();
  (**(code **)(*(int *)(param_1 + 0x78) + 8))();
  iVar6 = *(int *)(*(int *)(param_1 + 0x100) + 8);
  while (iVar6 != *(int *)(param_1 + 0x100)) {
    piVar8 = *(int **)(iVar6 + 0x18);
    if ((((*(char *)(param_1 + 0x120) == '\0') ||
         (iVar2 = (**(code **)(*piVar8 + 0x20))(piVar8), iVar2 == 0)) &&
        (*(char *)((int)piVar8 + 0x22) != '\x05')) &&
       (uStack_54 <= *(uint *)(iVar6 + 0x14) &&
        (uint)(*(uint *)(iVar6 + 0x10) <= local_58) <= uStack_54 - *(uint *)(iVar6 + 0x14))) break;
    iVar2 = *(int *)(iVar6 + 0xc);
    if (*(int *)(iVar6 + 0xc) == 0) {
      iVar2 = *(int *)(iVar6 + 4);
      iVar5 = iVar6;
      if (iVar6 == *(int *)(iVar2 + 0xc)) {
        do {
          iVar5 = iVar2;
          iVar2 = *(int *)(iVar5 + 4);
        } while (iVar5 == *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(iVar5 + 0xc) != iVar2) {
        iVar5 = iVar2;
      }
    }
    else {
      do {
        iVar5 = iVar2;
        iVar2 = *(int *)(iVar5 + 8);
      } while (*(int *)(iVar5 + 8) != 0);
    }
    local_38 = iVar6;
    fn_007689d8(auStack_34,param_1 + 0xf0);
    iVar6 = iVar5;
    if (*(char *)((int)piVar8 + 0x22) == '\x01') {
      fn_004b301c(piVar8,3);
      fn_004bdba4(param_1,piVar8,0);
      uVar9 = 1;
    }
    else {
      puVar4 = (uint *)(piVar8 + 1);
      do {
        uVar3 = *puVar4 - 1;
        bVar10 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar10);
      *puVar4 = uVar3;
      bVar10 = uVar3 == 0;
      if (bVar10) {
        uVar3 = (uint)*(byte *)(piVar8 + 2);
      }
      if (bVar10 && uVar3 == 0) {
        *(undefined1 *)(piVar8 + 2) = 1;
        (**(code **)(*piVar8 + 4))(piVar8);
      }
    }
  }
  piVar8 = *(int **)(param_1 + 0xe0);
  if (piVar8 != *(int **)(param_1 + 0xe8)) {
    do {
      cVar1 = *(char *)((int)piVar8 + 0x22);
      if (cVar1 == '\x02') {
        (**(code **)(*piVar8 + 0x10))(piVar8);
        cVar1 = *(char *)((int)piVar8 + 0x22);
      }
      if (cVar1 == '\x02') {
        piVar7 = (int *)piVar8[3];
      }
      else if (cVar1 == '\x03') {
        local_5c = piVar8;
        fn_00754688(local_48,param_1 + 0xdc,&local_5c);
        piVar7 = local_48[0];
        fn_004bdba4(param_1,piVar8,0);
        uVar9 = 1;
      }
      else {
        piVar7 = piVar8;
        if (cVar1 == '\x05') {
          local_48[0] = piVar8;
          fn_00754688(local_2c,param_1 + 0xdc,local_48);
          piVar7 = local_2c[0];
          puVar4 = (uint *)(piVar8 + 1);
          do {
            uVar3 = *puVar4 - 1;
            bVar10 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar10);
          *puVar4 = uVar3;
          bVar10 = uVar3 == 0;
          if (bVar10) {
            uVar3 = (uint)*(byte *)(piVar8 + 2);
          }
          if (bVar10 && uVar3 == 0) {
            *(undefined1 *)(piVar8 + 2) = 1;
            (**(code **)(*piVar8 + 4))(piVar8);
          }
        }
      }
      piVar8 = piVar7;
    } while (piVar7 != *(int **)(param_1 + 0xe8));
  }
  (**(code **)(*(int *)(param_1 + 0x78) + 0xc))((int *)(param_1 + 0x78));
  (**(code **)(*(int *)(param_1 + 0x50) + 0xc))((int *)(param_1 + 0x50));
  return uVar9;
}


