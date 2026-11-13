#include "001f23ac_001f2ab8.h"



undefined4 fn_001f2ab8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iStack_24 = 0;
  iStack_20 = 0;
  uStack_1c = 0;
  fn_00163edc(param_1,*(undefined4 *)(param_1 + 0x78),param_3,&iStack_24);
  iVar1 = iStack_20 - iStack_24 >> 0x1f;
  if (((iStack_20 - iStack_24) / 0xc + iVar1 != iVar1) &&
     (iVar1 = fn_00145b00(0x30,&DAT_00812c8c), iVar1 != 0)) {
    iVar1 = fn_00311970(iVar1,param_2,&iStack_24,0,0);
    if (iVar1 != 0) {
      fn_001f25d4(param_1,param_2,iStack_24,0);
      uVar2 = fn_0015a130(param_1,iVar1);
      fn_00168b28(&iStack_24);
      return uVar2;
    }
  }
  fn_00168b28(&iStack_24);
  return 0xffffffff;
}



void fn_001f2700(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 auStack_d0 [8];
  char *local_c8;
  char *local_c4;
  undefined1 auStack_b0 [128];
  undefined1 auStack_30 [12];
  
  fn_00101a50(auStack_b0,0x40,L"rom:/data/Field/Table/Shortcut/%s.nut",param_2);
  fn_00128f40(auStack_d0);
  fn_0012d6e0(auStack_b0,auStack_d0);
  fn_00128f40(auStack_30);
  fn_0012d6e0(L"rom:/data/Field/Table/Shortcut/BitFlagMask.nut",auStack_30);
  local_c4 = (char *)&DAT_001f2aa0;
  local_c8 = (char *)&DAT_001f2aac;
  iVar6 = fn_005f6ce8(auStack_d0,&DAT_001f2a88);
  iVar10 = 0;
  if (0 < iVar6) {
    do {
      uVar7 = fn_005f6d74(auStack_d0,&DAT_001f2a88,iVar10);
      iVar8 = fn_005f6d74(auStack_30,&DAT_001f2a88,iVar10);
      if (iVar8 == 0) {
        uVar9 = fn_00154ac8(iVar10);
        fn_00144834(iVar10,uVar9 | uVar7);
      }
      else if (iVar10 - 0x293U < 6) {
        uVar9 = fn_00154ac8(iVar10);
        fn_00144834(iVar10,uVar9 & uVar7);
      }
      else {
        fn_00144834(iVar10,uVar7);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar6);
  }
  iVar6 = fn_005f6ce8(auStack_d0,&DAT_001f2a8c);
  iVar10 = 0;
  if (0 < iVar6) {
    do {
      uVar2 = fn_00128e7c(auStack_d0,&DAT_001f2a8c,iVar10);
      iVar8 = fn_005f6d74(auStack_30,&DAT_001f2a8c,iVar10);
      if (iVar8 != 0) {
        fn_00163d68(iVar10,uVar2);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar6);
  }
  iVar6 = fn_005f6ce8(auStack_d0,&DAT_001f2a90);
  iVar10 = 0;
  if (0 < iVar6) {
    do {
      sVar4 = fn_00128e7c(auStack_d0,&DAT_001f2a90,iVar10);
      sVar5 = fn_00128e7c(auStack_d0,&DAT_001f2a90,iVar10 + 1);
      if (sVar5 < 1) {
        fn_002297bc(*(undefined4 *)(DAT_00897804 + 0x14),(int)sVar4,(int)-sVar5,1);
      }
      else {
        fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14));
      }
      iVar10 = iVar10 + 2;
    } while (iVar10 < iVar6);
  }
  uVar11 = *(undefined4 *)(DAT_00897804 + 0x20);
  iVar6 = fn_005f6ce8(auStack_d0,(char *)&DAT_001f2a98);
  iVar10 = 0;
  if (0 < iVar6) {
    do {
      cVar3 = fn_00128e7c(auStack_d0,(char *)&DAT_001f2a98,iVar10);
      iVar8 = fn_002e2dc8(uVar11,(int)cVar3);
      if (iVar8 == 0) {
        *(undefined1 *)(param_1 + 0xf9a) = 1;
        fn_002e2df0(*(undefined4 *)(DAT_00897804 + 0x20),(int)cVar3);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar6);
  }
  iVar6 = fn_005f6ce8(auStack_d0,local_c4);
  iVar10 = 0;
  if (0 < iVar6) {
    do {
      sVar4 = fn_00128e7c(auStack_d0,local_c4,iVar10);
      sVar5 = 0;
      iVar8 = 0;
      do {
        iVar1 = iVar8 * 0x10;
        iVar8 = (int)(short)((short)iVar8 + 1);
        if (*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x18) + 4) + iVar1 + 8) == sVar4) {
          sVar5 = sVar5 + 1;
        }
      } while (iVar8 < 100);
      if (sVar5 == 0) {
        sVar5 = fn_00128e7c(auStack_d0,local_c4,iVar10 + 1);
        fn_00242324(*(undefined4 *)(DAT_00897804 + 0x18),(int)sVar4,(int)sVar5);
      }
      iVar10 = iVar10 + 2;
    } while (iVar10 < iVar6);
  }
  iVar6 = fn_005f6ce8(auStack_d0,local_c8);
  iVar10 = 0;
  if (0 < iVar6) {
    do {
      uVar2 = fn_00128e7c(auStack_d0,local_c8,iVar10);
      fn_002e2c68(*(undefined4 *)(DAT_00897804 + 0x20),uVar2);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar6);
  }
  fn_00128fc4(auStack_30);
  fn_00128fc4(auStack_d0);
  return;
}



undefined4 fn_001f2670(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if ((-1 < (int)param_3) && (param_3 < 0x50)) {
    iVar1 = *(int *)(param_1 + param_3 * 0x2c + 0x8c);
    if ((iVar1 != 0) && (iVar1 = fn_0017fde4(*(undefined4 *)(iVar1 + 0xe4)), iVar1 != 0)) {
      uVar2 = fn_001ceba8(param_1,param_2,iVar1,param_4,&local_24);
      return uVar2;
    }
  }
  return 0xffffffff;
}



void fn_001f2644(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_s0;
  
  *(undefined1 *)(param_1 + 0xe60) = 1;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0xe64) = *param_2;
  *(undefined4 *)(param_1 + 0xe68) = uVar1;
  *(undefined4 *)(param_1 + 0xe6c) = uVar2;
  fn_0017fe34();
  *(undefined4 *)(param_1 + 0xe70) = in_s0;
  return;
}



void fn_001f25d4(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  
  param_1 = param_1 + param_2 * 0x2c;
  if (param_4 == 0) {
    if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
       (piVar1 = *(int **)(param_1 + 0x8c), piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x001f263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x10))(piVar1,param_3);
      return;
    }
  }
  else if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
          (piVar1 = *(int **)(param_1 + 0x8c), piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x001f2614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0xd0))();
    return;
  }
  return;
}



int fn_001f2598(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_18 [2];
  
  local_18[0] = fn_006abd58(param_1,param_3);
  if (local_18[0] == 0) {
    return -1;
  }
  local_18[0] = local_18[0] + 0x2c;
  if (*(int *)(param_1 + 0x40) == 0) {
    local_18[0] = -1;
  }
  else {
    uVar1 = fn_001747a8(param_2);
    local_18[0] = fn_0023de00(*(undefined4 *)(param_1 + 0x40),uVar1);
    if (-1 < local_18[0]) {
      fn_0017811c(param_1 + 0x50,local_18);
    }
  }
  return local_18[0];
}



void fn_001f2574(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f72b4(DAT_008977e0);
  if (param_2 == 0) {
    if (*(int *)(iVar1 + 0x30) != -1) {
      fn_00159f34(*(undefined4 *)(iVar1 + 4));
      *(undefined4 *)(iVar1 + 0x30) = 0xffffffff;
      fn_0021b654(iVar1,7,(char *)&DAT_0021d828,0);
      return;
    }
  }
  else if (*(int *)(iVar1 + 0x30) == -1) {
    fn_0021b654(iVar1,6,(char *)&DAT_0021d81c,1);
    return;
  }
  return;
}



void fn_001f2560(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xe4c) == 0) {
    return;
  }
  if ((param_2 < 0x40) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xe4c) + param_2 * 4 + 4), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0xb) = param_3;
  }
  return;
}



void fn_001f2538(int param_1)

{
  fn_001ceb94();
  *(undefined1 *)(param_1 + 0xf91) = 0;
  *(undefined1 *)(param_1 + 0xf90) = 0;
  *(undefined1 *)(param_1 + 0xf92) = 0;
  *(undefined1 *)(param_1 + 0xf93) = 0;
  *(undefined1 *)(param_1 + 0xf95) = 0;
  return;
}



void fn_001f24a4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  uVar3 = param_2 * 0xb;
  iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
  if (iVar1 != 0) {
    uVar3 = (uint)*(byte *)(iVar1 + 0xdc);
  }
  if (iVar1 != 0 && uVar3 != 0) {
    uVar2 = fn_0017fde4(*(undefined4 *)(iVar1 + 0xe4));
    iVar4 = 0;
    iVar1 = fn_006ebee0();
    if (0 < iVar1) {
      do {
        fn_006ebf54(uVar2,iVar4);
        fn_005ea624(uVar2,iVar4);
        iVar4 = iVar4 + 1;
        iVar1 = fn_006ebee0(uVar2);
      } while (iVar4 < iVar1);
    }
  }
  return;
}



uint fn_001f23ac(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_s0;
  
  uVar3 = 0;
  while (((-1 < (int)uVar3 && (uVar3 < 0x50)) && (*(int *)(param_1 + uVar3 * 0x2c + 0x8c) != 0))) {
    uVar3 = uVar3 + 1;
    if (0x4f < (int)uVar3) {
      return 0xffffffff;
    }
  }
  if (uVar3 == 0xffffffff) {
    return 0xffffffff;
  }
  fn_006f74f4(DAT_008977e0);
  piVar1 = (int *)fn_006c2e50();
  if (piVar1 == (int *)0x0) {
    return 0xffffffff;
  }
  uVar2 = fn_006f7a70(DAT_008977e0);
  uVar2 = fn_002fe310(uVar2,piVar1,0xffffffff);
  (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
  piVar1[99] = in_s0;
  param_1 = param_1 + uVar3 * 0x2c;
  *(int **)(param_1 + 0x8c) = piVar1;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x9c) = 2;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  return uVar3;
}


