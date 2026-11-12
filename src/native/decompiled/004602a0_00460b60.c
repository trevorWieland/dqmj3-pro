#include "004602a0_00460b60.h"



void fn_00460b60(int param_1,int param_2,undefined2 param_3,undefined1 param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  undefined1 auStack_28 [12];
  
  if ((*(byte *)(param_2 + 0x1c) & 4) == 0) {
    iVar1 = fn_0015ece0(0x150);
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)fn_004bc1a4(iVar1,param_1,2,0x2000,param_2,0);
    }
  }
  else {
    iVar1 = fn_00455040(0x150,0);
    if (iVar1 == 0) {
      return;
    }
    piVar2 = (int *)fn_00491934(iVar1,param_1,2,0x2000,param_2,0);
    if (piVar2 == (int *)0x0) {
      return;
    }
    if (((*(ushort *)(piVar2 + 0xf) & 0x40) != 0) && (piVar2[0x46] == 0)) {
      pcVar3 = *(code **)(*piVar2 + 4);
      goto LAB_00460be0;
    }
  }
  *(undefined1 *)(piVar2 + 9) = *(undefined1 *)(param_1 + 0x14c);
  *(undefined2 *)(piVar2 + 0x11) = param_3;
  *(undefined1 *)(piVar2 + 0x21) = param_4;
  fn_0045fd08(auStack_28,param_1,piVar2);
  puVar5 = (uint *)(piVar2 + 1);
  do {
    uVar4 = *puVar5 - 1;
    bVar6 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar6);
  *puVar5 = uVar4;
  bVar6 = uVar4 == 0;
  if (bVar6) {
    uVar4 = (uint)*(byte *)(piVar2 + 2);
  }
  if (!bVar6 || uVar4 != 0) {
    return;
  }
  *(undefined1 *)(piVar2 + 2) = 1;
  pcVar3 = *(code **)(*piVar2 + 4);
LAB_00460be0:
  (*pcVar3)(piVar2);
  return;
}



void fn_00460a24(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  if ((*(ushort *)(param_3 + 0x3c) & 0x800) != 0) {
    iVar1 = fn_001249d0();
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0xc);
    }
    piVar4 = (int *)(iVar3 + 0x50);
    (**(code **)(*piVar4 + 8))(piVar4);
    if (DAT_008b637e != '\0') {
      fn_001775e8(DAT_008b63d8);
    }
    iVar3 = fn_00170de0(&DAT_008e769c,0xd);
    piVar2 = (int *)0x0;
    if (iVar3 != 0) {
      piVar2 = *(int **)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))
                (piVar2,param_1,param_2,*(undefined2 *)(param_3 + 0x3c),
                 *(undefined1 *)(param_3 + 0x84));
    }
                    /* WARNING: Could not recover jumptable at 0x00460ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar4 + 0xc))(piVar4);
    return;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    return;
  }
  iVar1 = fn_001249d0();
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))(piVar4);
  (**(code **)(**(int **)(param_1 + 0x70) + 8))
            (*(int **)(param_1 + 0x70),param_1,param_2,*(undefined1 *)(param_3 + 0x84));
                    /* WARNING: Could not recover jumptable at 0x00460b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return;
}



void fn_004602a0(int *param_1,int *param_2,int param_3,int *param_4,uint param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  undefined *local_80;
  undefined4 local_7c;
  uint local_78;
  int local_74;
  int local_48;
  int iStack_44;
  int iStack_40;
  int *piStack_34;
  int *piStack_30;
  int local_2c;
  int *piStack_28;
  
  if ((param_2[0x20] == 0) ||
     (piStack_34 = param_1, piStack_30 = param_2, local_2c = param_3, piStack_28 = param_4,
     iVar1 = (**(code **)(*param_2 + 0x2c))(param_2), iVar1 == 0)) {
    param_1[2] = 0x71;
    *param_1 = -0x7ffafffe;
    param_1[1] = (int)&DAT_007dba44;
    return;
  }
  fn_00460c78(param_2);
  (**(code **)(*param_2 + 0x58))(param_2,3);
  param_2[0x7c] = 0;
  param_2[0x7d] = local_2c;
  param_2[0x7b] = 0;
  param_2[0x7e] = *param_4;
  iVar1 = fn_0015ece0(0x150);
  if (iVar1 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    local_80 = (undefined *)0x0;
    local_7c = 0;
    piVar4 = (int *)fn_004bc1a4(iVar1,param_2,3,0x60);
  }
  *(char *)(piVar4 + 9) = (char)param_2[0x53];
  iVar3 = piVar4[0x46];
  iVar1 = fn_001249d0();
  if (*(char *)(iVar1 + 0x30) == '\0') {
    fn_0013d0fc(&local_78);
    if ((int)param_5 < 0) {
      local_74 = local_74 - (((int)-param_5 >> 0x1f) + (uint)(local_78 < -param_5));
    }
    else {
      local_74 = local_74 + ((int)param_5 >> 0x1f) + (uint)CARRY4(local_78,param_5);
    }
    *(uint *)(iVar3 + 0x10) = local_78 + param_5;
    *(int *)(iVar3 + 0x14) = local_74;
    *(uint *)(iVar3 + 0x18) = param_5;
    *(int *)(iVar3 + 0x1c) = (int)param_5 >> 0x1f;
  }
  else {
    iVar1 = fn_001249d0();
    uVar5 = *(int *)(iVar1 + 0x38) + DAT_008b6428;
    fn_0013d0fc(&local_78);
    if ((int)uVar5 < 0) {
      local_74 = local_74 - (((int)-uVar5 >> 0x1f) + (uint)(local_78 < -uVar5));
    }
    else {
      local_74 = local_74 + ((int)uVar5 >> 0x1f) + (uint)CARRY4(local_78,uVar5);
    }
    *(uint *)(iVar3 + 0x10) = local_78 + uVar5;
    *(int *)(iVar3 + 0x14) = local_74;
    *(int *)(iVar3 + 0x1c) = (int)uVar5 >> 0x1f;
    *(uint *)(iVar3 + 0x18) = uVar5;
  }
  *(undefined4 *)(iVar3 + 4) = 500;
  fn_004722b4(param_2[1] + 0x14,piVar4);
  fn_0045fd08(&local_48,param_2);
  if (local_48 < 0) {
    puVar2 = (uint *)(piVar4 + 1);
    do {
      uVar5 = *puVar2 - 1;
      bVar6 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar6);
    *puVar2 = uVar5;
    bVar6 = uVar5 == 0;
    if (bVar6) {
      uVar5 = (uint)*(byte *)(piVar4 + 2);
    }
    if (bVar6 && uVar5 == 0) {
      *(undefined1 *)(piVar4 + 2) = 1;
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    piVar4 = (int *)param_2[0x7c];
    if (piVar4 != (int *)0x0) {
      puVar2 = (uint *)(piVar4 + 1);
      do {
        uVar5 = *puVar2 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar6);
      *puVar2 = uVar5;
      bVar6 = uVar5 == 0;
      if (bVar6) {
        uVar5 = (uint)*(byte *)(piVar4 + 2);
      }
      if (bVar6 && uVar5 == 0) {
        *(undefined1 *)(piVar4 + 2) = 1;
        (**(code **)(*piVar4 + 4))(piVar4);
      }
    }
    param_2[0x7c] = 0;
    param_2[0x7b] = 0;
    param_2[0x7d] = 0;
    *param_1 = local_48;
    param_1[1] = iStack_44;
    param_1[2] = iStack_40;
    return;
  }
  puVar2 = (uint *)(piVar4 + 1);
  do {
    uVar5 = *puVar2 - 1;
    bVar6 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar6);
  *puVar2 = uVar5;
  bVar6 = uVar5 == 0;
  if (bVar6) {
    uVar5 = (uint)*(byte *)(piVar4 + 2);
  }
  if (bVar6 && uVar5 == 0) {
    *(undefined1 *)(piVar4 + 2) = 1;
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  if (local_2c == 0) {
    iVar1 = fn_001249d0();
    if (*(char *)(iVar1 + 0x30) == '\0') {
      fn_004bac20(&local_80,0x32,param_5);
      local_7c = CONCAT22(((unsigned int)(local_7c) >> 16) & 0xffff,2);
      do {
        iVar1 = (**(code **)(*param_2 + 0x24))(param_2);
        if ((iVar1 == 0) || (iVar1 = fn_001249d0(), *(char *)(iVar1 + 0x30) != '\0')) break;
        fn_004bd9a4();
        iVar1 = fn_004bab94(&local_80,
                             L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp"
                             ,0x266);
      } while (iVar1 != 0);
    }
    else {
      fn_004bac20(&local_80,0x32,DAT_008b6428);
      local_7c = CONCAT22(((unsigned int)(local_7c) >> 16) & 0xffff,2);
      iVar1 = (**(code **)(*param_2 + 0x24))(param_2);
      while (iVar1 != 0) {
        fn_004bd9a4();
        iVar1 = fn_004bab94(&local_80,
                             L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp"
                             ,0x25f);
        if (iVar1 == 0) break;
        iVar1 = (**(code **)(*param_2 + 0x24))(param_2);
      }
    }
    local_80 = &DAT_00855cd4;
    piVar4 = (int *)param_2[0x7c];
    if (piVar4 != (int *)0x0) {
      puVar2 = (uint *)(piVar4 + 1);
      do {
        uVar5 = *puVar2 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar6);
      *puVar2 = uVar5;
      bVar6 = uVar5 == 0;
      if (bVar6) {
        uVar5 = (uint)*(byte *)(piVar4 + 2);
      }
      if (bVar6 && uVar5 == 0) {
        *(undefined1 *)(piVar4 + 2) = 1;
        (**(code **)(*piVar4 + 4))(piVar4);
      }
    }
    param_2[0x7c] = 0;
    param_2[0x7b] = 0;
    param_2[0x7d] = 0;
    iVar1 = (**(code **)(*param_2 + 0x1c))(param_2);
    if (iVar1 == 0) {
      (**(code **)(*param_2 + 0x58))(param_2,0);
      param_1[2] = 0x71;
      *param_1 = -0x7ffafff8;
      param_1[1] = (int)&DAT_007dba44;
      return;
    }
  }
  param_1[2] = 0x71;
  *param_1 = 0x10001;
  param_1[1] = (int)&DAT_007dba44;
  return;
}


