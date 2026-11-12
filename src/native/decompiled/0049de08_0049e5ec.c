#include "0049de08_0049e5ec.h"



void fn_0049e5ec(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  *param_1 = &PTR_FUN_00854940;
  piVar1 = (int *)fn_004b7748();
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
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if ((code *)param_1[-2] == (code *)0x0) {
    fn_0030233c(param_1 + -2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0049e65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[-2])();
  return;
}



undefined4 * fn_0049e54c(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = &DAT_00855a78;
  *(undefined1 *)(param_1 + 1) = param_2;
  iVar2 = fn_004b616c();
  *(uint *)(iVar2 + 4) = (uint)*(byte *)(param_1 + 1);
  *param_1 = &PTR_FUN_00854940;
  iVar2 = fn_004b7748();
  if (iVar2 == 0) {
    iVar2 = fn_0015ece0(0x3e4);
    if (iVar2 != 0) {
      fn_004b7d34();
    }
  }
  else {
    iVar2 = fn_004b7748();
    piVar3 = (int *)(iVar2 + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
  }
  param_1[2] = 0;
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}



undefined4 fn_0049e4ac(int param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_004955f0(*(int *)(param_1 + 0xc) + 0x94,param_1,param_2,param_1 + 0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *(undefined1 *)(param_1 + 0x10);
    }
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0049e354(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar5 = 0;
  if (cVar1 == '\0') {
    local_24[0] = 0;
    piVar2 = (int *)local_24;
    if (*(char *)(param_2 + 4) == '\0') {
      piVar2 = &local_28;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,*(char *)(param_2 + 4));
    fn_0015ef4c(param_1,piVar2,1);
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_20 = 0;
    fn_0015ef4c(param_1,&local_20,4);
  }
  fn_00492e98(param_1,param_2 + 8);
  fn_0074ab38(param_1,param_2 + 0xb8);
  fn_0015ef4c(param_1,param_2 + 0xd0,4);
  fn_0015ef4c(param_1,param_2 + 0xd4,4);
  fn_0045f6f0(param_1,param_2 + 0xd8);
  fn_0015ef4c(param_1,param_2 + 0xe0,2);
  local_28 = *(int *)(param_2 + 0xf8);
  fn_0015ef4c(param_1,&local_28,4);
  piVar4 = *(int **)(param_2 + 0xf4);
  for (piVar2 = (int *)*piVar4; piVar2 != piVar4; piVar2 = (int *)*piVar2) {
    fn_004b2b88(param_1,piVar2 + 2);
  }
  fn_0074ab38(param_1,param_2 + 0xfc);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar5);
    local_28 = (iVar3 - iVar5) + -4;
    fn_0015ef4c(param_1,&local_28,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}



void fn_0049e124(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  fn_004be598();
  if (*(char *)(param_1 + 4) != '\0') {
    return;
  }
  *(undefined1 *)(param_2 + 5) = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  uVar5 = 0;
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 8);
    if (*(int *)(iVar2 + 0x10) == *(int *)(param_1 + 0xc)) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_2 + 5) = 0;
    }
    else {
      *(undefined1 *)(param_2 + 5) =
           *(undefined1 *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0xc) + *(int *)(param_1 + 0xc))
      ;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
    iVar2 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar2 + 0x10) - iVar4) < 4) goto LAB_0049e328;
    puVar3 = (uint *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0xc) + iVar4);
    uVar5 = *puVar3 & 0xffffff | (uint)*(byte *)((int)puVar3 + 3) << 0x18;
    *(int *)(param_1 + 0xc) = iVar4 + 4;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(char *)(param_1 + 4) != '\0') {
    return;
  }
  fn_0045f7f0(param_1,param_2 + 8);
  if (*(char *)(param_1 + 4) != '\0') {
    return;
  }
  iVar4 = *(int *)(param_1 + 8);
  if ((uint)(*(int *)(iVar4 + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  else {
    puVar3 = (uint *)(*(int *)(iVar4 + 0x18) + *(int *)(iVar4 + 0xc) + *(int *)(param_1 + 0xc));
    *(uint *)(param_2 + 0x10) = *puVar3 & 0xffffff | (uint)*(byte *)((int)puVar3 + 3) << 0x18;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  if (*(char *)(param_1 + 4) != '\0') {
    return;
  }
  iVar4 = *(int *)(param_1 + 8);
  if (*(int *)(iVar4 + 0x10) == *(int *)(param_1 + 0xc)) {
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x14) =
         *(undefined1 *)(*(int *)(iVar4 + 0x18) + *(int *)(iVar4 + 0xc) + *(int *)(param_1 + 0xc));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  if (*(char *)(param_1 + 4) != '\0') {
    return;
  }
  iVar4 = *(int *)(param_1 + 8);
  if ((uint)(*(int *)(iVar4 + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  else {
    puVar3 = (uint *)(*(int *)(iVar4 + 0x18) + *(int *)(iVar4 + 0xc) + *(int *)(param_1 + 0xc));
    *(uint *)(param_2 + 0x18) = *puVar3 & 0xffffff | (uint)*(byte *)((int)puVar3 + 3) << 0x18;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  if (*(char *)(param_1 + 4) != '\0' || cVar1 != '\0') {
    return;
  }
  uVar5 = iVar2 + uVar5;
  if ((*(uint *)(param_1 + 0xc) <= uVar5) && (uVar5 <= *(uint *)(*(int *)(param_1 + 8) + 0x10))) {
    *(uint *)(param_1 + 0xc) = uVar5;
    return;
  }
LAB_0049e328:
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



void fn_0049e094(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0046b318(param_1,3);
  puVar1[4] = 0;
  *puVar1 = &DAT_008548e4;
  puVar1[5] = 0;
  return;
}



void fn_0049dfbc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = fn_0015ecdc(0x90);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)fn_00471b2c(iVar1,1);
    *puVar2 = &DAT_00854d08;
    iVar3 = fn_004b3438(puVar2 + 0x12,0);
    iVar1 = iVar3 + -0x48;
    *(undefined4 *)(iVar3 + -4) = 0;
    iVar4 = fn_0015ecdc(0x44);
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = fn_004a47f8(iVar4,0);
    }
    *(int *)(iVar3 + -4) = iVar5;
    *(undefined2 *)(iVar5 + 0x20) = 3;
  }
  uVar6 = fn_006d12d8(param_1);
  fn_0047f194(uVar6,3,iVar1);
  iVar1 = fn_0015ecdc(0x44);
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_004a47f8(iVar1,0);
  }
  uVar7 = fn_006d12d8(param_1);
  fn_0047f194(uVar7,3,uVar6);
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  param_1[5] = iVar1;
  fn_004bab84(iVar1,8);
  *(int **)(param_1[5] + 0x40) = param_1;
  return;
}



void fn_0049df44(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(**(int **)(param_1 + 0x14) + 0x78))(*(int **)(param_1 + 0x14),param_2);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x24);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x14) + 0x28))(*(int **)(iVar2 + 0x14),3);
  }
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x24);
  }
  if (param_2 != 0 && iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049dfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(iVar2 + 0x14) + 0x24))
              (*(int **)(iVar2 + 0x14),3,*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}



void fn_0049deb8(int param_1)

{
  fn_004a44f8(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x44));
  return;
}



void fn_0049de24(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [104];
  
  iVar1 = fn_006d12a0(param_1,3);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x44);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x24) = iVar1;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049de80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar3 + 0x34))(piVar3,*(undefined4 *)(*(int *)(param_1 + 8) + 0x10),iVar1 + 8);
      return;
    }
    uVar4 = fn_0013ce04(auStack_78);
    (**(code **)(*piVar3 + 0x34))(piVar3,0,uVar4);
    fn_0013ce98(auStack_78);
  }
  return;
}



void fn_0049de08(int param_1)

{
  fn_004a430c(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x44));
  return;
}


