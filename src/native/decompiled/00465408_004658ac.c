#include "00465408_004658ac.h"



void fn_004658ac(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5,int *param_6,
                 int param_7)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *local_70;
  undefined2 local_6c;
  undefined4 *puStack_34;
  int *piStack_30;
  int iStack_2c;
  int local_28;
  
  if (param_7 == -1) {
    param_7 = 10000000;
  }
  puStack_34 = param_1;
  piStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  iVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  if ((((iVar2 == 0) && ((char)param_2[0x2f] != '\0')) ||
      (iVar2 = (**(code **)(*param_2 + 0x20))(param_2), iVar2 != 0)) ||
     (iVar2 = (**(code **)(*param_2 + 0x2c))(param_2), iVar2 != 0)) {
    *param_1 = 0x80050002;
    param_1[1] = &DAT_007dba44;
    param_1[2] = 0x71;
    return;
  }
  *(undefined1 *)(param_2 + 0x2c) = 0;
  (**(code **)(*param_2 + 0x58))(param_2,1);
  if (param_3 == 0) {
    param_2[0x7c] = 0;
  }
  else {
    piVar6 = (int *)(param_3 + 4);
    do {
      bVar8 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar8);
    *piVar6 = *piVar6 + 1;
    param_2[0x7c] = param_3;
  }
  param_2[0x7d] = param_5;
  param_2[0x7b] = local_28;
  param_2[0x7e] = *param_6;
  iVar2 = fn_001249d0();
  if (*(char *)(iVar2 + 0x30) == '\0') {
    uVar3 = *(undefined4 *)(param_2[0x2b] + 0x118);
  }
  else {
    iVar2 = fn_001249d0();
    param_7 = *(int *)(iVar2 + 0x38) + DAT_008b6428;
    uVar3 = *(undefined4 *)(param_2[0x2b] + 0x118);
  }
  fn_004b86b4(uVar3,param_7);
  iVar2 = param_2[0x2b];
  if ((char)param_2[0x1b] == '\0') {
    fn_0014ea80(param_2 + 2);
  }
  iVar4 = param_2[3];
  uVar3 = *(undefined4 *)(iVar4 + 8);
  uVar9 = *(undefined4 *)(iVar4 + 0xc);
  uVar10 = *(undefined4 *)(iVar4 + 0x10);
  uVar11 = *(undefined4 *)(iVar4 + 0x14);
  uVar12 = *(undefined4 *)(iVar4 + 0x18);
  uVar13 = *(undefined4 *)(iVar4 + 0x1c);
  *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(iVar2 + 0xe4) = uVar3;
  *(undefined4 *)(iVar2 + 0xe8) = uVar9;
  *(undefined4 *)(iVar2 + 0xec) = uVar10;
  *(undefined4 *)(iVar2 + 0xf0) = uVar11;
  *(undefined4 *)(iVar2 + 0xf4) = uVar12;
  *(undefined4 *)(iVar2 + 0xf8) = uVar13;
  fn_00460784(param_2,param_2[0x2b]);
  bVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  *(byte *)(param_2 + 0x9b) = bVar1 ^ 1;
  if (param_5 == 0) {
    iVar2 = fn_001249d0();
    if (*(char *)(iVar2 + 0x30) == '\0') {
      fn_004bac20(&local_70,0x32);
      local_6c = 2;
      do {
        iVar2 = (**(code **)(*param_2 + 0x20))(param_2);
        if ((iVar2 == 0) || (iVar2 = fn_001249d0(), *(char *)(iVar2 + 0x30) != '\0')) break;
        fn_004bd9a4();
        iVar2 = fn_004bab94(&local_70,
                             L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp"
                            );
      } while (iVar2 != 0);
    }
    else {
      fn_004bac20(&local_70,0x32);
      local_6c = 2;
      iVar2 = (**(code **)(*param_2 + 0x20))(param_2);
      while (iVar2 != 0) {
        fn_004bd9a4();
        iVar2 = fn_004bab94(&local_70,
                             L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp"
                            );
        if (iVar2 == 0) break;
        iVar2 = (**(code **)(*param_2 + 0x20))(param_2);
      }
    }
    local_70 = &DAT_00855cd4;
    piVar6 = (int *)param_2[0x7c];
    if (piVar6 != (int *)0x0) {
      puVar7 = (uint *)(piVar6 + 1);
      do {
        uVar5 = *puVar7 - 1;
        bVar8 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar8);
      *puVar7 = uVar5;
      bVar8 = uVar5 == 0;
      if (bVar8) {
        uVar5 = (uint)*(byte *)(piVar6 + 2);
      }
      if (bVar8 && uVar5 == 0) {
        *(undefined1 *)(piVar6 + 2) = 1;
        (**(code **)(*piVar6 + 4))();
      }
    }
    param_2[0x7c] = 0;
    param_2[0x7b] = 0;
    param_2[0x7d] = 0;
    iVar2 = (**(code **)(*param_2 + 0x2c))(param_2);
    if (iVar2 == 0) {
      (**(code **)(*param_2 + 0x58))(param_2,0);
      uVar3 = 0x80050008;
      goto LAB_00465bec;
    }
  }
  uVar3 = 0x10001;
LAB_00465bec:
  *param_1 = uVar3;
  param_1[1] = &DAT_007dba44;
  param_1[2] = 0x71;
  return;
}



void fn_00465808(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  if (*(int *)(param_1 + 0xa8) != 0) {
    fn_00472008(*(int *)(param_1 + 4) + 0x14);
    piVar3 = *(int **)(param_1 + 0xa8);
    puVar5 = (uint *)(piVar3 + 1);
    do {
      uVar4 = *puVar5 - 1;
      bVar6 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar6);
    *puVar5 = uVar4;
    bVar6 = uVar4 == 0;
    if (bVar6) {
      uVar4 = (uint)*(byte *)(piVar3 + 2);
    }
    if (bVar6 && uVar4 == 0) {
      *(undefined1 *)(piVar3 + 2) = 1;
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004658a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}



void fn_00465720(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  
  fn_0045c054(param_1 + 0x200);
  if ((*(ushort *)(param_2 + 0x3c) & 0x20) == 0) {
    fn_00460a24(param_1,*(undefined4 *)(param_2 + 0xd8),param_2);
    return;
  }
  iVar1 = fn_0046521c(param_1,param_2);
  if (iVar1 != 0) {
    fn_00460a24(param_1,*(undefined4 *)
                          (*(int *)(param_1 + 0x130) + (uint)*(byte *)(param_2 + 0x84) * 4),param_2)
    ;
    *(undefined1 *)(*(int *)(param_1 + 0x13c) + (uint)*(byte *)(param_2 + 0x84)) = 1;
    piVar2 = *(int **)(*(int *)(param_1 + 0x130) + (uint)*(byte *)(param_2 + 0x84) * 4);
    puVar4 = (uint *)(piVar2 + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar3;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(piVar2 + 2);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(piVar2 + 2) = 1;
      (**(code **)(*piVar2 + 4))();
    }
    *(undefined4 *)(*(int *)(param_1 + 0x130) + (uint)*(byte *)(param_2 + 0x84) * 4) = 0;
  }
  return;
}



void fn_00465408(int param_1,int param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  
  uVar2 = *(ushort *)(param_2 + 0x3c) & 0xf;
  if (uVar2 == 1) {
    iVar3 = fn_0015ece0(0x150);
    piVar11 = (int *)0x0;
    if (iVar3 != 0) {
      piVar11 = (int *)fn_004bc1a4(iVar3,param_1,*(ushort *)(param_2 + 0x3c) & 0xf,0x10,
                                    *(undefined4 *)(param_2 + 0xd8),0);
    }
    uVar1 = *(undefined1 *)(param_2 + 0x24);
    *(undefined1 *)(param_1 + 0x14c) = uVar1;
    *(undefined1 *)(piVar11 + 9) = uVar1;
    uVar7 = *(uint *)(param_2 + 0x8c);
    *(uint *)(param_1 + 0x150) = uVar7;
    *(undefined4 *)(param_1 + 0x158) = 0;
    uVar5 = uVar7 & 0xff;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    if (uVar5 != 0) {
      uVar9 = 0x1000000;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0x1000000;
      if (1 < uVar5) {
        *(undefined4 *)(param_1 + 0x158) = 0x3000000;
        *(undefined4 *)(param_1 + 0x15c) = 0;
        uVar9 = 0x7000000;
        *(undefined4 *)(param_1 + 0x15c) = 0;
        *(undefined4 *)(param_1 + 0x158) = 0x7000000;
      }
      if (2 < uVar5) {
        uVar9 = uVar9 | 0x8000000;
        *(uint *)(param_1 + 0x158) = uVar9;
      }
      if (3 < uVar5) {
        *(uint *)(param_1 + 0x158) = uVar9 | 0x10000000;
      }
    }
    *(uint *)(param_1 + 0x158) = uVar7 >> 8 | *(uint *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
    fn_00463d8c(param_1,*(undefined1 *)(param_2 + 0x67));
    piVar11[0x23] = *(int *)(param_1 + 0x150);
    *(char *)((int)piVar11 + 0x67) = (char)*(undefined2 *)(param_1 + 0x104);
    fn_00460dac(param_1,piVar11);
  }
  else {
    if (((uVar2 == 2) && (*(int *)(param_2 + 0xd8) != 0)) &&
       ((*(byte *)(*(int *)(param_2 + 0xd8) + 0x1c) & 4) != 0)) {
      iVar3 = fn_00455040(0x150,0);
      if (iVar3 == 0) {
        return;
      }
      piVar11 = (int *)fn_00491934(iVar3,param_1,*(ushort *)(param_2 + 0x3c) & 0xf,0x10,0,0);
      if (piVar11 == (int *)0x0) {
        return;
      }
      if (((*(ushort *)(piVar11 + 0xf) & 0x40) != 0) && (piVar11[0x46] == 0)) {
        pcVar6 = *(code **)(*piVar11 + 4);
        goto LAB_004655b4;
      }
    }
    else {
      iVar3 = fn_0015ece0(0x150);
      if (iVar3 == 0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)fn_004bc1a4(iVar3,param_1,*(ushort *)(param_2 + 0x3c) & 0xf,0x10,0,0);
      }
    }
    *(undefined1 *)(piVar11 + 9) = *(undefined1 *)(param_1 + 0x14c);
  }
  *(undefined2 *)(piVar11 + 0x11) = *(undefined2 *)(param_2 + 0x44);
  *(undefined1 *)(piVar11 + 0x19) = *(undefined1 *)(param_2 + 100);
  *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) + 1;
  fn_0045fd08(auStack_38,param_1,piVar11);
  if ((*(ushort *)(piVar11 + 0xf) & 0xf) == 3) {
    iVar3 = 0;
    do {
      iVar4 = fn_0015ece0(0x150);
      if (iVar4 == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)fn_004bc1a4(iVar4,param_1,3,0x10,0,0);
      }
      *(undefined2 *)(piVar10 + 0x11) = *(undefined2 *)(param_2 + 0x44);
      *(undefined1 *)(piVar10 + 0x19) = *(undefined1 *)(param_2 + 100);
      *(undefined1 *)(piVar10 + 9) = *(undefined1 *)(param_1 + 0x14c);
      fn_0045fd08(auStack_2c,param_1,piVar10);
      puVar8 = (uint *)(piVar10 + 1);
      do {
        uVar5 = *puVar8 - 1;
        bVar12 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar12);
      *puVar8 = uVar5;
      bVar12 = uVar5 == 0;
      if (bVar12) {
        uVar5 = (uint)*(byte *)(piVar10 + 2);
      }
      if (bVar12 && uVar5 == 0) {
        *(undefined1 *)(piVar10 + 2) = 1;
        (**(code **)(*piVar10 + 4))(piVar10);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  puVar8 = (uint *)(piVar11 + 1);
  do {
    uVar5 = *puVar8 - 1;
    bVar12 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar12);
  *puVar8 = uVar5;
  bVar12 = uVar5 == 0;
  if (bVar12) {
    uVar5 = (uint)*(byte *)(piVar11 + 2);
  }
  if (!bVar12 || uVar5 != 0) {
    return;
  }
  *(undefined1 *)(piVar11 + 2) = 1;
  pcVar6 = *(code **)(*piVar11 + 4);
LAB_004655b4:
  (*pcVar6)(piVar11);
  return;
}


