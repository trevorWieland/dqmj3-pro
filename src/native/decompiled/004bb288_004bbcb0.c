#include "004bb288_004bbcb0.h"



/* WARNING: Removing unreachable block (ram,0x004bbdb4) */

int fn_004bbcb0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_20;
  int local_1c [2];
  
  puVar1 = (undefined4 *)fn_00454ffc();
  *puVar1 = &DAT_00855d5c;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  puVar1[0x4b] = 200;
  puVar1[0x4a] = 0;
  local_20 = 0x10001;
  iVar2 = fn_004b8d4c(puVar1 + 0x4c,&local_20);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined1 *)(iVar2 + 0x10) = 0;
  *(undefined1 *)(iVar2 + 0x11) = 0;
  iVar5 = iVar2 + -0x130;
  *(undefined1 *)(iVar2 + 0x12) = 0;
  *(undefined **)(iVar2 + 0x14) = &DAT_008535ec;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  iVar3 = fn_00468c28();
  *(undefined1 *)(iVar3 + 0xf9) = 0;
  local_1c[0] = iVar5;
  fn_00473c68(iVar5,&DAT_004bb57c,local_1c);
  iVar3 = fn_0015ecdc(0x1c);
  if (iVar3 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)fn_004b4148();
    *puVar1 = &DAT_00854918;
    *(undefined1 *)((int)puVar1 + 5) = 0;
    iVar3 = fn_0013d40c(puVar1 + 2);
    puVar1 = (undefined4 *)(iVar3 + -8);
    *puVar1 = &DAT_00853930;
    fn_0013d438(iVar3,&DAT_007d94a0);
    *(undefined4 *)(iVar3 + 0x10) = 0x7d6;
    *(undefined4 *)(iVar3 + 8) = 3;
    *(undefined1 *)(iVar3 + 0xc) = 0;
  }
  piVar4 = *(int **)(iVar2 + 0x18);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  *(undefined4 **)(iVar2 + 0x18) = puVar1;
  puVar1 = (undefined4 *)fn_0015ecdc(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00852b24;
    puVar1[1] = iVar5;
  }
  *(undefined4 **)(iVar2 + -0xc) = puVar1;
  return iVar5;
}



void fn_004bbbf0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_3 == 0) {
    local_c = 0x8001000a;
    fn_004b8d4c(param_1,&local_c);
    return;
  }
  iVar2 = *(int *)(param_2 + 0x11c);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x22);
  }
  if (iVar2 != 0 && cVar1 != '\x05') {
    local_c = 0x80010004;
    fn_004b8d4c(param_1,&local_c);
    return;
  }
  iVar2 = fn_00473cb8(param_2,param_3,*(undefined4 *)(param_2 + 0x78));
  if (iVar2 == 0) {
    local_c = 0x8001000d;
    fn_004b8d4c(param_1,&local_c);
    return;
  }
  local_10 = 0x10001;
  fn_004b8d4c(param_1,&local_10);
  return;
}



void fn_004bbbb8(void)

{
  fn_004bb718();
  return;
}



int fn_004bb560(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00853388;
  iVar1 = fn_00170f54(param_1 + 10);
  return iVar1 + -0x28;
}



void fn_004bb538(int param_1)

{
  fn_00170fa4(param_1 + 0x28);
  return;
}



undefined4 * fn_004bb474(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &DAT_00855d20;
  iVar3 = param_1[0xc];
  while (0 < iVar3) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        fn_0015dfc0(param_1[1]);
        if (*(char *)(param_1 + 0xd) != '\0') {
          fn_0013c428(param_1[1]);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
    if (0 < (int)param_1[0xc]) {
      fn_00735640(1000000,0);
    }
    iVar3 = param_1[0xc];
  }
  if (param_1[1] != 0) {
    pcVar1 = *(code **)(param_1[1] + -8);
    if (pcVar1 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar1)();
    }
  }
  param_1[2] = &PTR_LAB_008533fc;
  param_1[3] = &DAT_0085319c;
  return param_1;
}



int fn_004bb3d0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int local_18;
  
  iVar2 = *(int *)(param_2 + 8);
  local_18 = param_4;
  fn_004bad6c(param_1,&local_18,0x20);
  uVar1 = (7 - *(int *)(param_1 + 0x10)) + *(int *)(param_1 + 0xc) * 8 + local_18 * 8;
  bVar3 = uVar1 == *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x14) < uVar1) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    bVar3 = *(char *)(param_1 + 4) == '\0';
  }
  if (bVar3) {
    if (local_18 != 0) {
      fn_0015f0f4(iVar2,*(int *)(iVar2 + 0x18) + local_18);
      fn_004bad6c(param_1,*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x18),local_18 << 3);
    }
    *(int *)(iVar2 + 0x10) = local_18;
  }
  *(int *)(param_2 + 0x14) = *(int *)(*(int *)(param_2 + 8) + 0x10) << 3;
  return param_1;
}



int fn_004bb340(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int local_10;
  
  local_10 = param_4;
  fn_004bad6c(param_1,&local_10,0x20);
  uVar2 = (7 - *(int *)(param_1 + 0x10)) + *(int *)(param_1 + 0xc) * 8 + local_10 * 8;
  bVar3 = uVar2 == *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x14) < uVar2) {
    *(undefined1 *)(param_1 + 4) = 1;
    iVar1 = 1;
  }
  else {
    bVar3 = *(char *)(param_1 + 4) == '\0';
    iVar1 = local_10;
  }
  if (bVar3) {
    if (iVar1 != 0) {
      fn_0015f0f4(param_2,*(int *)(param_2 + 0x18) + iVar1);
      fn_004bad6c(param_1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),local_10 << 3);
    }
    *(int *)(param_2 + 0x10) = local_10;
  }
  return param_1;
}



undefined4 fn_004bb2f0(undefined4 param_1,int param_2)

{
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_2 + 0x10);
  fn_004baf70(param_1,&local_10,0x20);
  if (*(int *)(param_2 + 0x10) != 0) {
    fn_004baf70(param_1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
                 *(int *)(param_2 + 0x10) << 3);
  }
  return param_1;
}



undefined4 * fn_004bb288(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  *param_1 = &DAT_00855d10;
  piVar1 = (int *)param_1[2];
  puVar3 = (uint *)(piVar1 + 1);
  do {
    uVar2 = *puVar3 - 1;
    bVar4 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar4);
  *puVar3 = uVar2;
  bVar4 = uVar2 == 0;
  if (bVar4) {
    uVar2 = (uint)*(byte *)(piVar1 + 2);
  }
  if (bVar4 && uVar2 == 0) {
    *(undefined1 *)(piVar1 + 2) = 1;
    (**(code **)(*piVar1 + 4))();
  }
  param_1[2] = 0;
  return param_1;
}


