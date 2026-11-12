#include "00455a9c_004560ac.h"



void fn_00456074(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  local_10 = *param_2;
  uStack_c = param_2[1];
  local_8 = param_2[2];
  fn_00455e8c(param_1,2,&local_10,1);
  return;
}



void fn_00456044(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  local_10 = *param_2;
  uStack_c = param_2[1];
  local_8 = param_2[2];
  fn_00455e8c(param_1,3,&local_10,1);
  return;
}



undefined4 fn_00455e10(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar2 = fn_004560ac(param_1);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  iVar2 = fn_001249d0();
  uVar4 = fn_0048a82c(*(undefined4 *)(iVar2 + 0x10),param_1);
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



undefined4 fn_004560ac(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 uStack_10;
  
  iVar2 = fn_001249d0();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\x01') {
    (**(code **)(*piVar4 + 0xc))(piVar4);
    return 0;
  }
  if ((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') {
    fn_00456400(param_1);
  }
  local_18 = &DAT_80010001;
  local_14 = &DAT_007dba44;
  uStack_10 = 0x71;
  fn_00455e8c(param_1,1,&local_18,0);
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return 1;
}



undefined4 fn_00455d14(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  undefined1 *local_18;
  undefined *puStack_14;
  undefined4 uStack_10;
  
  cVar1 = (char)param_1[4];
  if ((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x04') {
    if ((cVar1 != '\x01') || ((param_2 != 2 && param_2 != 3) && param_2 != 4)) {
      return 0;
    }
    piVar3 = param_1 + 1;
    do {
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = *piVar3 + 1;
    local_18 = &DAT_80010001;
    puStack_14 = &DAT_007dba44;
    uStack_10 = 0x71;
    fn_00455e8c(param_1,param_2,&local_18,0);
    if ((int *)param_1[0x14] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x14] + 8))();
    }
    puVar4 = (uint *)(param_1 + 1);
    do {
      uVar2 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar2;
    bVar5 = uVar2 == 0;
    if (bVar5) {
      uVar2 = (uint)*(byte *)(param_1 + 2);
    }
    if (bVar5 && uVar2 == 0) {
      *(undefined1 *)(param_1 + 2) = 1;
      (**(code **)(*param_1 + 4))();
    }
  }
  return 1;
}



void fn_00455e8c(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  code *local_28;
  int local_24;
  int iStack_20;
  
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  if ((param_2 != 1) && (param_2 == 0)) {
    param_1[0x10] = 0x71;
    param_1[0xe] = (int)&DAT_80010001;
    param_1[0xf] = (int)&DAT_007dba44;
  }
  if (((char)param_1[4] == '\x01') && (param_1[0x11] != 0)) {
    iVar1 = fn_001249d0();
    fn_00489f34(*(undefined4 *)(iVar1 + 0x10),param_1[0x11]);
    param_1[0x11] = 0;
  }
  local_28 = (code *)*param_3;
  local_24 = param_3[1];
  iStack_20 = param_3[2];
  (**(code **)(*param_1 + 0xc))(param_1,param_2,&local_28,param_4);
  *(char *)(param_1 + 4) = (char)param_2;
  if (param_4 != 0) {
    param_1[0xe] = *param_3;
    param_1[0xf] = param_3[1];
    param_1[0x10] = param_3[2];
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  if ((param_2 == 2 || param_2 == 3) || param_2 == 4) {
    for (piVar2 = *(int **)param_1[9]; piVar2 != (int *)param_1[9]; piVar2 = (int *)*piVar2) {
      local_28 = (code *)piVar2[2];
      local_24 = piVar2[3];
      (*local_28)(param_1,&local_24);
    }
    (**(code **)(*param_1 + 0x10))(param_1);
    if ((param_1[3] & 2U) != 0) {
      puVar4 = (uint *)(param_1 + 1);
      do {
        uVar3 = *puVar4 - 1;
        bVar5 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar5);
      *puVar4 = uVar3;
      bVar5 = uVar3 == 0;
      if (bVar5) {
        uVar3 = (uint)*(byte *)(param_1 + 2);
      }
      if (bVar5 && uVar3 == 0) {
        *(undefined1 *)(param_1 + 2) = 1;
                    /* WARNING: Could not recover jumptable at 0x00456030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 4))();
        return;
      }
    }
  }
  return;
}



undefined4 fn_00455cf0(undefined4 param_1)

{
  fn_0014e7cc();
  return param_1;
}



undefined4 fn_00455cd8(undefined4 param_1,int param_2)

{
  fn_0015e9d8(param_1,*(undefined4 *)(param_2 + 4));
  return param_1;
}



int fn_00455c50(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &DAT_008527ec;
  iVar1 = fn_0014f3a4(param_1 + 3);
  iVar1 = fn_0014f308(iVar1 + 0x1c);
  iVar1 = fn_0014f308(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(undefined1 *)(iVar1 + 0x22) = 0;
  puVar2 = (undefined4 *)fn_0015ece0(0x20);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_008528bc;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 2;
  }
  *(undefined4 **)(iVar1 + -0x40) = puVar2;
  fn_0015e9d8(iVar1 + -0x44,param_2);
  return iVar1 + -0x44;
}



void fn_00455c28(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [16];
  
  fn_00455124(auStack_10,param_1,L"type",param_2);
  return;
}



undefined4 fn_00455a9c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_30;
  int local_2c;
  undefined1 auStack_28 [4];
  
  if (*(char *)(param_1 + 100) == '\0') {
    fn_0014ea80();
  }
  if (param_3 == 0) {
    iVar2 = fn_00785b1c(param_1 + 0x28,param_2);
    if (iVar2 == 1) goto LAB_00455c18;
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    while (iVar5 != 0) {
      iVar1 = fn_00190ef0(iVar5 + 0x10,param_2);
      if (iVar1 == 0) {
        iVar2 = iVar5;
        iVar5 = *(int *)(iVar5 + 8);
      }
      else {
        iVar5 = *(int *)(iVar5 + 0xc);
      }
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    while (iVar1 != 0) {
      iVar3 = fn_00190ef0(param_2,iVar1 + 0x10);
      if (iVar3 == 0) {
        iVar1 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar5 = iVar1;
        iVar1 = *(int *)(iVar1 + 8);
      }
    }
    iVar1 = 0;
    iVar3 = iVar2;
    while (iVar3 != iVar5) {
      iVar1 = iVar1 + 1;
      iVar4 = *(int *)(iVar3 + 0xc);
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar4 = *(int *)(iVar3 + 4);
        if (iVar3 == *(int *)(iVar4 + 0xc)) {
          do {
            iVar3 = iVar4;
            iVar4 = *(int *)(iVar3 + 4);
          } while (iVar3 == *(int *)(iVar4 + 0xc));
        }
        if (*(int *)(iVar3 + 0xc) != iVar4) {
          iVar3 = iVar4;
        }
      }
      else {
        do {
          iVar3 = iVar4;
          iVar4 = *(int *)(iVar3 + 8);
        } while (*(int *)(iVar3 + 8) != 0);
      }
    }
    local_30 = iVar5;
    local_2c = iVar2;
    fn_00168014(auStack_28,param_1 + 0xc,&local_2c,&local_30);
  }
  else {
    iVar1 = fn_00785b1c(param_1 + 0x44,param_2);
  }
  if (iVar1 != 1) {
    return 0;
  }
LAB_00455c18:
  *(undefined1 *)(param_1 + 0x65) = 0;
  return 1;
}


