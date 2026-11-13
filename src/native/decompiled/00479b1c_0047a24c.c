#include "00479b1c_0047a24c.h"



undefined4 * fn_0047a24c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  bool bVar4;
  
  *param_1 = &DAT_0085354c;
  if (*(char *)(param_1 + 3) != '\0') {
    piVar2 = (int *)param_1[1];
    iVar1 = piVar2[6];
    piVar2[6] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      bVar4 = (short)piVar2[5] == 8;
      if (bVar4) {
        uVar3 = 4;
      }
      else {
        uVar3 = 0x10;
      }
      if (bVar4) {
        iVar1 = (**(code **)(*piVar2 + 0x30))(piVar2,uVar3);
      }
      else {
        iVar1 = (**(code **)(*piVar2 + 0x30))();
      }
      if (iVar1 != 0) {
        (**(code **)(*piVar2 + 0x14))(piVar2,uVar3);
        *(undefined2 *)(piVar2 + 5) = uVar3;
      }
    }
  }
  return param_1;
}



void fn_0047a130(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *local_54;
  undefined *local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [4];
  undefined2 local_44;
  
  fn_0047a2ec(param_2);
  local_4c = 0x6a;
  local_54 = &DAT_80010001;
  local_50 = &DAT_007dba44;
  iVar1 = fn_004bd1e0(param_3 != 0,param_3,&DAT_001c1300,param_2,&local_54);
  if (iVar1 != 0) {
    *param_1 = local_54;
    param_1[1] = local_50;
    param_1[2] = local_4c;
    return;
  }
  fn_004bac20(auStack_48,10);
  local_44 = 2;
  do {
    iVar1 = (**(code **)(*param_2 + 0x38))(param_2);
    if (iVar1 == 0x40) break;
    iVar1 = fn_004bab94(auStack_48,
                         L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/SystemComponent.cpp"
                        );
  } while (iVar1 != 0);
  iVar1 = (**(code **)(*param_2 + 0x38))(param_2);
  if (iVar1 == 0x40) {
    uVar2 = 0x10001;
  }
  else {
    uVar2 = 0x8001000b;
  }
  param_1[2] = 0x71;
  param_1[1] = &DAT_007dba44;
  *param_1 = uVar2;
  return;
}



ushort fn_00479edc(int *param_1)

{
  ushort uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x18))(param_1);
  uVar1 = *(ushort *)(param_1 + 5);
  if (uVar1 == 4) {
    return 4;
  }
  if (uVar1 < 5) {
    if (uVar1 == 1) goto LAB_00479f60;
    if (uVar1 != 2) {
      return uVar1;
    }
    iVar2 = (**(code **)(*param_1 + 0x24))(param_1);
    if (iVar2 == 0) goto LAB_00479fe8;
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1,4);
  }
  else {
    if (uVar1 == 8) {
      return 8;
    }
    if (uVar1 != 0x40) {
      return uVar1;
    }
LAB_00479f60:
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1,2);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x14))(param_1,2);
      *(undefined2 *)(param_1 + 5) = 2;
    }
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    if (iVar2 == 0) goto LAB_00479fe8;
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1,4);
  }
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x14))(param_1,4);
    *(undefined2 *)(param_1 + 5) = 4;
  }
LAB_00479fe8:
  return *(ushort *)(param_1 + 5);
}



int * fn_00479ea0(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *param_1;
  bVar2 = iVar1 == 0;
  if (!bVar2) {
    iVar1 = iVar1 + -4;
    bVar2 = iVar1 == 0;
  }
  if (!bVar2) {
    if (*(code **)(iVar1 + -8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(iVar1 + -8))();
    }
  }
  return param_1;
}



undefined4 * fn_00479e68(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 * 3;
  *param_1 = 0;
  param_1[1] = param_2;
  if (0 < param_2) {
    piVar1 = (int *)fn_0015ece0(param_2 + 4);
    *piVar1 = param_2;
    *param_1 = piVar1 + 1;
  }
  return param_1;
}



void fn_00479da4(int *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  bool bVar5;
  
  iVar2 = *param_1;
  bVar5 = iVar2 == 0;
  if (!bVar5) {
    iVar2 = iVar2 + -4;
    bVar5 = iVar2 == 0;
  }
  if (!bVar5) {
    if (*(code **)(iVar2 + -8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(iVar2 + -8))();
    }
  }
  iVar2 = 1;
  uVar1 = *param_2;
  puVar3 = param_2;
  while (uVar1 != 0) {
    if (uVar1 < 0x80) {
      iVar2 = iVar2 + 1;
    }
    else if (uVar1 < 0x800) {
      iVar2 = iVar2 + 2;
    }
    else {
      iVar2 = iVar2 + 3;
    }
    puVar3 = puVar3 + 1;
    uVar1 = *puVar3;
  }
  param_1[1] = iVar2;
  piVar4 = (int *)fn_0015ece0(iVar2 + 4);
  *piVar4 = iVar2;
  *param_1 = (int)(piVar4 + 1);
  fn_00173bf4(param_2,piVar4 + 1,param_1[1]);
  if (param_3 != 0) {
    *(undefined1 *)(*param_1 + param_1[1] + -1) = 0;
  }
  return;
}



void fn_00479d74(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  fn_0017fe44(*param_1);
  if (param_4 != 0) {
    *(undefined2 *)(param_2 + param_3 * 2 + -2) = 0;
  }
  return;
}



void fn_00479d5c(undefined4 *param_1)

{
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  return;
}



void fn_00479cd8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004b3044();
  *puVar1 = &PTR_FUN_00853510;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x13] = &DAT_00853500;
  puVar1[0x16] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x12] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  return;
}



void fn_00479c98(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  fn_0013d0fc(&local_18);
  *(undefined4 *)(param_1 + 0x40) = local_18;
  *(undefined4 *)(param_1 + 0x44) = uStack_14;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0xc);
  return;
}



void fn_00479c28(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  do {
    (**(code **)(*param_1 + 0x30))(param_1);
    if (*(char *)((int)param_1 + 0x22) != '\x04') {
      return;
    }
    fn_001249d0();
    piVar2 = (int *)((int)param_1 + (param_1[0x15] >> 1));
    if ((param_1[0x15] & 1U) == 0) {
      pcVar1 = (code *)param_1[0x14];
    }
    else {
      pcVar1 = *(code **)(*piVar2 + param_1[0x14]);
    }
    (*pcVar1)(piVar2);
    param_1[0x12] = param_1[0x12] + 1;
  } while (*(char *)((int)param_1 + 0x22) == '\x04');
  return;
}



void fn_00479b9c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    fn_00479b1c(param_1);
    return;
  }
  fn_004b301c(param_1,3);
  fn_0013d0fc(&local_18);
  *(undefined4 *)(param_1 + 0x40) = local_18;
  *(undefined4 *)(param_1 + 0x44) = uStack_14;
  iVar1 = param_3[2];
  *(int *)(param_1 + 0x50) = param_3[1];
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x58) = param_3[3];
  if (param_3 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00479c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 4))(param_3);
  return;
}



void fn_00479b1c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 *local_18;
  
  piVar2 = (int *)(param_1 + 4);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  local_18 = param_4;
  local_18 = (undefined4 *)fn_0015ece0(0x14);
  if (local_18 != (undefined4 *)0x0) {
    local_18[2] = fn_00479a70;
    local_18[3] = 0;
    local_18[4] = param_3;
    *local_18 = &DAT_00855bb4;
    local_18[1] = param_1;
  }
  fn_0045616c(param_2,fn_004a3d10,&local_18,1);
  return;
}


