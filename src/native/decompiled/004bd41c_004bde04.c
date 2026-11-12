#include "004bd41c_004bde04.h"



void fn_004bde04(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x34) - *(int *)(*(int *)(param_1 + 0xc) + 0x30) >> 2 == 0)
  {
    fn_004bc8d0(param_1);
    return;
  }
  return;
}



undefined4 fn_004bdc0c(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *extraout_r1;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  int *local_28;
  undefined1 auStack_24 [8];
  
  piVar1 = (int *)(param_1 + 0x50);
  uVar10 = 0;
  (**(code **)(*piVar1 + 8))();
  (**(code **)(*(int *)(param_1 + 0x78) + 8))();
  piVar7 = *(int **)(param_1 + 0x100);
  piVar3 = (int *)piVar7[2];
  piVar5 = extraout_r1;
  while( true ) {
    if (piVar3 != piVar7) {
      piVar5 = (int *)piVar3[6];
    }
    if (piVar3 == piVar7 || piVar5 == param_2) break;
    piVar5 = (int *)piVar3[3];
    if ((int *)piVar3[3] == (int *)0x0) {
      piVar5 = (int *)piVar3[1];
      if (piVar3 == (int *)piVar5[3]) {
        do {
          piVar3 = piVar5;
          piVar5 = (int *)piVar3[1];
        } while (piVar3 == (int *)piVar5[3]);
      }
      if ((int *)piVar3[3] != piVar5) {
        piVar3 = piVar5;
      }
    }
    else {
      do {
        piVar3 = piVar5;
        piVar5 = (int *)piVar3[2];
      } while (piVar5 != (int *)0x0);
      piVar5 = (int *)0x0;
    }
  }
  if (piVar3 == piVar7) {
    piVar3 = *(int **)(param_1 + 0xcc);
    piVar6 = *(int **)(param_1 + 0xd4);
    piVar5 = (int *)(param_1 + 0xd4);
    while( true ) {
      if (piVar3 != piVar6) {
        piVar7 = piVar3;
      }
      if (piVar3 == piVar6 || piVar3 == param_2) break;
      piVar3 = (int *)piVar7[3];
    }
    if (piVar3 == piVar6) {
      piVar7 = *(int **)(param_1 + 0xe0);
      piVar3 = *(int **)(param_1 + 0xe8);
      while( true ) {
        if (piVar7 != piVar3) {
          piVar5 = piVar7;
        }
        if (piVar7 == piVar3 || piVar7 == param_2) break;
        piVar7 = (int *)piVar5[3];
      }
      if (piVar7 == piVar3) {
        if (*(int **)(param_1 + 4) != param_2) goto LAB_004bddd8;
        *(undefined1 *)(param_1 + 8) = 0;
      }
      else {
        local_28 = piVar7;
        fn_00754688(auStack_24,param_1 + 0xdc,&local_28);
      }
    }
    else {
      local_28 = piVar3;
      fn_00754688(auStack_24,param_1 + 200,&local_28);
    }
  }
  else {
    local_28 = piVar3;
    fn_007689d8(auStack_24,param_1 + 0xf0,&local_28);
    iVar9 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
    iVar2 = fn_006d0df8(iVar9);
    *(undefined1 *)(**(int **)(iVar9 + 0x2c) + iVar2) = 1;
  }
  uVar10 = 1;
  puVar8 = (uint *)(param_2 + 1);
  do {
    uVar4 = *puVar8 - 1;
    bVar11 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar11);
  *puVar8 = uVar4;
  bVar11 = uVar4 == 0;
  if (bVar11) {
    uVar4 = (uint)*(byte *)(param_2 + 2);
  }
  if (bVar11 && uVar4 == 0) {
    *(undefined1 *)(param_2 + 2) = 1;
    (**(code **)(*param_2 + 4))(param_2);
  }
LAB_004bddd8:
  (**(code **)(*(int *)(param_1 + 0x78) + 0xc))((int *)(param_1 + 0x78));
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return uVar10;
}



void fn_004bdb4c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_0015ecdc(0x88);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_004a2a1c(iVar1,*(undefined4 *)(param_1 + 0x14),param_2,param_3);
  }
  iVar2 = fn_001249d0();
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  if (DAT_008b6389 == '\0') {
    fn_004bde28(iVar1,uVar3,0);
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x78) + 8))();
  fn_004bde28(iVar1,uVar3,0);
                    /* WARNING: Could not recover jumptable at 0x004bdbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 0x78) + 0xc))((int *)(iVar1 + 0x78));
  return;
}



void fn_004bd8d0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  int *local_20;
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)(param_1 + 0x50);
  (**(code **)(*piVar1 + 8))();
  (**(code **)(*(int *)(param_1 + 0xa0) + 8))();
  local_20 = *(int **)(param_1 + 0x110);
  while( true ) {
    bVar4 = local_20 != *(int **)(param_1 + 0x118);
    if (bVar4) {
      param_3 = local_20;
    }
    if (!bVar4 || local_20 == param_2) break;
    local_20 = (int *)param_3[3];
  }
  fn_00754688(auStack_1c,param_1 + 0x10c,&local_20);
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
    (**(code **)(*param_2 + 4))(param_2);
  }
  (**(code **)(*(int *)(param_1 + 0xa0) + 0xc))((int *)(param_1 + 0xa0));
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_004bd80c(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0xa0);
  (**(code **)(*piVar1 + 8))();
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0x118)) {
      *(int *)(param_1 + 0x110) = param_2;
    }
    else {
      *(int *)(*(int *)(param_1 + 0x114) + 0xc) = param_2;
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x114);
    }
    *(int *)(param_1 + 0x114) = param_2;
  }
  else if (*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0x118)) {
    *(int *)(param_1 + 0x110) = param_2;
    *(int *)(param_1 + 0x114) = param_2;
  }
  else {
    *(int *)(param_2 + 0xc) = *(int *)(param_1 + 0x110);
    *(int *)(*(int *)(param_1 + 0x110) + 0x10) = param_2;
    *(int *)(param_1 + 0x110) = param_2;
  }
  *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
                    /* WARNING: Could not recover jumptable at 0x004bd8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



undefined4 fn_004bd41c(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  int local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [4];
  undefined2 local_64;
  uint local_60;
  int local_58;
  uint local_50;
  int local_2c;
  undefined1 auStack_28 [8];
  
  if (param_3 != 0) {
    piVar7 = (int *)(param_1 + 0x78);
    (**(code **)(*(int *)(param_1 + 0x78) + 8))(piVar7);
    iVar2 = *(int *)(*(int *)(param_1 + 0x100) + 8);
    while (iVar2 != *(int *)(param_1 + 0x100)) {
      fn_004b301c(*(undefined4 *)(iVar2 + 0x18),3);
      fn_004bdba4(param_1,*(undefined4 *)(iVar2 + 0x18),0);
      iVar3 = *(int *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar3 = *(int *)(iVar2 + 4);
        if (iVar2 == *(int *)(iVar3 + 0xc)) {
          do {
            iVar2 = iVar3;
            iVar3 = *(int *)(iVar2 + 4);
          } while (iVar2 == *(int *)(iVar3 + 0xc));
        }
        if (*(int *)(iVar2 + 0xc) != iVar3) {
          iVar2 = iVar3;
        }
      }
      else {
        do {
          iVar2 = iVar3;
          iVar3 = *(int *)(iVar2 + 8);
        } while (*(int *)(iVar2 + 8) != 0);
      }
    }
    local_2c = *(int *)(param_1 + 0x100);
    local_6c = *(undefined4 *)(local_2c + 8);
    fn_00769038(auStack_28,param_1 + 0xf0,&local_6c,&local_2c);
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  fn_004bac20(auStack_68,10,param_2);
  local_64 = 2;
  (**(code **)(*(int *)(param_1 + 0x78) + 8))();
  piVar7 = (int *)(param_1 + 0x78);
  (**(code **)(*(int *)(param_1 + 0x78) + 8))();
  iVar2 = *(int *)(param_1 + 0xd8);
  iVar6 = *(int *)(param_1 + 0x104);
  iVar3 = *(int *)(param_1 + 0xec);
  (**(code **)(*piVar7 + 0xc))(piVar7);
  bVar8 = (int)*(char *)(param_1 + 8) + iVar6 + iVar2 + iVar3 != 0;
  if (bVar8) {
    piVar7 = (int *)&DAT_00000001;
  }
  if (!bVar8) {
    piVar7 = (int *)0x0;
  }
  (**(code **)(*(int *)(param_1 + 0x78) + 0xc))((int *)(param_1 + 0x78));
  if (piVar7 != (int *)0x0) {
    do {
      uVar4 = local_60;
      if (local_60 != 0xffffffff) {
        fn_0013d0fc(&local_70);
        local_50 = local_70 - local_58;
        if (local_50 < local_60) {
          uVar4 = local_60 - local_50;
        }
        else {
          uVar4 = 0;
        }
      }
      fn_004bd6e4(uVar4);
      iVar2 = fn_004bab94(auStack_68,
                           L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp"
                           ,0x278,L"GetTotalNumberOfJobs() != 0");
      if (iVar2 == 0) break;
      (**(code **)(*(int *)(param_1 + 0x78) + 8))();
      (**(code **)(*(int *)(param_1 + 0x78) + 8))();
      iVar2 = *(int *)(param_1 + 0xd8);
      iVar6 = *(int *)(param_1 + 0x104);
      iVar3 = *(int *)(param_1 + 0xec);
      (**(code **)(*(int *)(param_1 + 0x78) + 0xc))((int *)(param_1 + 0x78));
      cVar1 = *(char *)(param_1 + 8);
      (**(code **)(*(int *)(param_1 + 0x78) + 0xc))((int *)(param_1 + 0x78));
    } while (iVar6 + iVar2 + iVar3 + (int)cVar1 != 0);
  }
  iVar2 = fn_006d3fc4(param_1);
  uVar5 = 0;
  if (iVar2 != 0) {
    fn_006d3fc4(param_1);
    uVar5 = 5;
  }
  return uVar5;
}



void fn_004bdba4(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_008b6389 == '\0') {
    fn_004bde28(param_1);
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x78) + 8))();
  fn_004bde28(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x004bdbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x78) + 0xc))((int *)(param_1 + 0x78));
  return;
}


