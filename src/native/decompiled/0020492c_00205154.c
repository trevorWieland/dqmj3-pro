#include "0020492c_00205154.h"



void fn_00205154(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 unaff_r4;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x84) == '\0') {
    iVar1 = (int)*(char *)(param_1 + 0x35);
    uVar3 = iVar1 - 0x10;
    bVar4 = 3 < uVar3;
    if (bVar4) {
      uVar3 = iVar1 - 0x18;
    }
    if (((!bVar4 || uVar3 < 4) || (iVar1 == 0x20 || iVar1 == 0x22)) &&
       (*(char *)(param_1 + 0x68) == '\x01')) {
      fn_002cda84(DAT_00897844);
      return;
    }
  }
  if (*(char *)(param_1 + 0x85) == '\0') {
    iVar1 = (int)*(char *)(param_1 + 0x35);
    uVar3 = iVar1 - 0x10;
    bVar4 = 3 < uVar3;
    if (bVar4) {
      uVar3 = iVar1 - 0x18;
    }
    if (((!bVar4 || uVar3 < 4) || (iVar1 == 0x20 || iVar1 == 0x22)) &&
       (iVar1 = fn_00182964(*(undefined1 *)(param_1 + 0x68)), iVar1 != 0)) {
      fn_002ea95c(DAT_00897848);
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  uVar3 = param_1;
  if (iVar1 != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x34);
  }
  if (iVar1 != 0 && uVar3 != 0) {
    fn_001594e4(DAT_008977e4,iVar1,1,param_4,unaff_r4);
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  uVar2 = fn_0017481c(DAT_008977e4);
  fn_00254430(uVar2,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



void fn_002050ac(int param_1,uint param_2)

{
  int iVar1;
  int local_18 [2];
  int iStack_10;
  uint local_c;
  
  iStack_10 = param_1;
  local_c = param_2;
  fn_0079d450(param_1 + 0x6c,&local_c);
  iVar1 = fn_0017481c(DAT_008977e4);
  if (((int)local_c < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= local_c))
  {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + local_c * 0x34;
  }
  fn_0069eb10(*(undefined4 *)(param_1 + 4),iVar1,0);
  local_18[0] = fn_005ef148(*(undefined4 *)(param_1 + 4));
  local_18[0] = local_18[0] + -1;
  fn_0079d450(param_1 + 0x78,local_18);
  return;
}



undefined4 fn_00204e00(int *param_1,int param_2,int param_3,int *param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  
  *(undefined1 *)(param_1 + 0x21) = param_5;
  *(undefined1 *)((int)param_1 + 0x85) = 1;
  *(char *)(param_1 + 0x1a) = (char)param_2;
  iVar1 = fn_0017481c(DAT_008977e4);
  if ((char)param_1[0x21] == '\0') {
    iVar2 = (int)*(char *)((int)param_1 + 0x35);
    uVar5 = iVar2 - 0x10;
    bVar8 = 3 < uVar5;
    if (bVar8) {
      uVar5 = iVar2 - 0x18;
    }
    if (((bVar8 && 3 < uVar5) && (iVar2 != 0x20 && iVar2 != 0x22)) ||
       ((char)param_1[0x1a] != '\x01')) goto LAB_00204e74;
    uVar3 = fn_002cd904(DAT_00897844);
  }
  else {
LAB_00204e74:
    uVar3 = fn_002539f0(iVar1,param_2,1);
  }
  (**(code **)(*param_1 + 0x18))(param_1,1);
  iVar2 = param_4[1];
  iVar6 = param_4[2];
  param_1[0x11] = *param_4;
  param_1[0x12] = iVar2;
  param_1[0x13] = iVar6;
  uVar3 = (**(code **)(*param_1 + 0x24))(param_1,uVar3);
  if ((char)param_1[0x21] == '\0') {
    iVar2 = (int)*(char *)((int)param_1 + 0x35);
    uVar5 = iVar2 - 0x10;
    bVar8 = 3 < uVar5;
    if (bVar8) {
      uVar5 = iVar2 - 0x18;
    }
    if (((!bVar8 || uVar5 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) &&
       ((char)param_1[0x1a] == '\x01')) goto LAB_00204fd8;
  }
  iVar2 = fn_00253b7c(iVar1,param_2);
  if (iVar2 != -1) {
    uVar4 = fn_002541e4(iVar1,iVar2,0);
    uVar5 = param_1[2];
    if (((int)uVar5 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= uVar5)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + uVar5 * 4);
    }
    if (((int)uVar5 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= uVar5)) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar1 + 4) + uVar5 * 0x34;
    }
    fn_00294440(iVar6,uVar7,uVar4,param_3);
    fn_00254430(iVar1,iVar2);
  }
LAB_00204fd8:
  if (param_2 == 0x1b) {
    fn_001f825c();
    uVar4 = DAT_008987bc;
    uVar7 = fn_001c235c(DAT_008977e4);
    fn_002026fc(uVar4,uVar7);
    iVar1 = fn_00661800(uVar4,param_3 + 0x38,0,0xff);
    param_1[0x19] = iVar1;
    fn_00661d0c(uVar4,iVar1,param_1[1]);
    uVar4 = fn_00156f24(uVar4,param_1[0x19]);
    fn_00154a48(uVar4,1);
    if (param_1[0x19] != -1) {
      uVar4 = fn_00156f24(DAT_008987bc);
      fn_002028d0(uVar4,2);
    }
  }
  return uVar3;
}



void fn_00204dcc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 100) == -1) {
    return;
  }
  uVar1 = fn_00156f24(DAT_008987bc);
  fn_002028d0(uVar1,param_2);
  return;
}



void fn_00204d5c(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint local_18;
  
  if (*(char *)(param_1 + 0x68) != '\x01' && *(char *)(param_1 + 0x68) != '\x1b') {
    return;
  }
  uVar1 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
  local_18 = param_4;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,param_2);
    local_18 = uVar1;
  }
  fn_0017fd10(param_1,*(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4),param_3,local_18);
  return;
}



void fn_00204cec(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_006a7b84(DAT_008977e4);
  uVar2 = fn_0023ddec(uVar1,5);
  fn_0023dd30(uVar1,uVar2);
  fn_001639b8((char *)&DAT_00204d50);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00204ca4(int *param_1)

{
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)((int)param_1 + 0x41) = 1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  (**(code **)(*param_1 + 0x14))(param_1,1);
  fn_00179928(param_1);
  return;
}



void fn_00204c40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_c;
  
  piVar3 = param_1;
  uStack_c = param_2;
  uVar1 = fn_0017484c(DAT_008977e4);
  iVar2 = fn_00182e2c(uVar1,&uStack_c);
  param_1[0x16] = iVar2;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)((int)param_1 + 0x41) = 1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  (**(code **)(*param_1 + 0x14))(param_1,1,*(code **)(*param_1 + 0x14),param_4,piVar3);
  fn_00179928(param_1);
  return;
}



void fn_00204c04(int param_1)

{
  uint local_10;
  uint local_c [3];
  
  if (*(int *)(param_1 + 0x50) == 0) {
    return;
  }
  local_c[0] = (uint)*(byte *)(*(int *)(param_1 + 0x50) + 0x35);
  local_10 = (uint)*(byte *)(param_1 + 0x35);
  fn_001596d8(&local_10,local_c,1);
  return;
}



bool fn_00204bd0(undefined4 param_1)

{
  float in_s0;
  float fVar1;
  
  fn_006add1c();
  fVar1 = in_s0;
  fn_006add3c(param_1);
  return in_s0 <= fVar1;
}



undefined4 fn_0020492c(int *param_1,int param_2,int param_3,int *param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x85) = param_5;
  *(char *)(param_1 + 0x1a) = (char)param_2;
  iVar1 = fn_0017481c(DAT_008977e4);
  if (*(char *)((int)param_1 + 0x85) == '\0') {
    iVar2 = (int)*(char *)((int)param_1 + 0x35);
    uVar5 = iVar2 - 0x10;
    bVar8 = 3 < uVar5;
    if (bVar8) {
      uVar5 = iVar2 - 0x18;
    }
    if (((bVar8 && 3 < uVar5) && (iVar2 != 0x20 && iVar2 != 0x22)) ||
       (iVar2 = fn_00182964((char)param_1[0x1a]), iVar2 == 0)) goto LAB_00204a0c;
    uVar3 = fn_001cacc4(param_2);
    uVar3 = fn_002ea880(DAT_00897848,uVar3);
  }
  else {
LAB_00204a0c:
    uVar3 = fn_001cacc4(param_2);
    uVar3 = fn_00253af8(iVar1,uVar3,1);
  }
  (**(code **)(*param_1 + 0x18))(param_1,1);
  iVar2 = param_4[1];
  iVar6 = param_4[2];
  param_1[0x11] = *param_4;
  param_1[0x12] = iVar2;
  param_1[0x13] = iVar6;
  uVar3 = (**(code **)(*param_1 + 0x24))(param_1,uVar3);
  if (*(char *)((int)param_1 + 0x85) == '\0') {
    iVar2 = (int)*(char *)((int)param_1 + 0x35);
    uVar5 = iVar2 - 0x10;
    bVar8 = 3 < uVar5;
    if (bVar8) {
      uVar5 = iVar2 - 0x18;
    }
    if (((!bVar8 || uVar5 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) &&
       (iVar2 = fn_00182964((char)param_1[0x1a]), iVar2 != 0)) goto LAB_00204b2c;
  }
  iVar2 = fn_00253b7c(iVar1,param_2);
  if (iVar2 != -1) {
    uVar4 = fn_002541e4(iVar1,iVar2,0);
    uVar5 = param_1[2];
    if (((int)uVar5 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= uVar5)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + uVar5 * 4);
    }
    if (((int)uVar5 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= uVar5)) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar1 + 4) + uVar5 * 0x34;
    }
    fn_00294440(iVar6,uVar7,uVar4,param_3);
    fn_00254430(iVar1,iVar2);
  }
LAB_00204b2c:
  if (param_2 == 0x1b) {
    fn_001f825c();
    uVar4 = DAT_008987bc;
    uVar7 = fn_001c235c(DAT_008977e4);
    fn_002026fc(uVar4,uVar7);
    iVar1 = fn_00661800(uVar4,param_3 + 0x38,0,0xff);
    param_1[0x19] = iVar1;
    fn_00661d0c(uVar4,iVar1,param_1[1]);
    uVar4 = fn_00156f24(uVar4,param_1[0x19]);
    fn_00154a48(uVar4,1);
    if (param_1[0x19] != -1) {
      uVar4 = fn_00156f24(DAT_008987bc);
      fn_002028d0(uVar4,2);
    }
  }
  return uVar3;
}


