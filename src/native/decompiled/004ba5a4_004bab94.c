#include "004ba5a4_004bab94.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


undefined4 fn_004bab94(int param_1)

{
  longlong lVar1;
  uint uVar2;
  int local_10 [2];
  
  if (*(uint *)(param_1 + 0x1c) == 0) {
    fn_00735644();
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x1c) * 1000000;
    fn_00735640((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  }
  fn_0013d0fc(local_10);
  uVar2 = local_10[0] - *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x18) = uVar2;
  if ((*(uint *)(param_1 + 8) < uVar2) && (*(uint *)(param_1 + 8) != 0xffffffff)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    if ((*(short *)(param_1 + 4) != 1) && (*(short *)(param_1 + 4) == 2)) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_004bab70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  fn_0074a528(param_1,local_8);
  return local_8[0];
}



bool fn_004bab34(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00455e10(param_2);
  if (iVar1 != 0) {
    local_10 = *(undefined4 *)(param_2 + 0x44);
    fn_0015ef4c(param_1,&local_10,4);
  }
  return iVar1 != 0;
}



undefined4 fn_004bab04(int param_1)

{
  if ((*(uint *)(param_1 + 0x2c) & 1) != 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x14))(*(int **)(param_1 + 0x28),param_1);
  }
  return 1;
}



void fn_004baa80(int param_1,byte *param_2,undefined2 *param_3,uint param_4)

{
  int iVar1;
  uint local_18;
  
  local_18 = param_4;
  fn_0074a4c8(param_1,&local_18);
  *param_2 = (byte)local_18 >> 7;
  *param_3 = (short)(local_18 & 0x7f);
  if ((local_18 & 0x7f) == 0x7f) {
    iVar1 = *(int *)(param_1 + 8);
    if ((uint)(*(int *)(iVar1 + 0x10) - *(int *)(param_1 + 0xc)) < 2) {
      *(undefined1 *)(param_1 + 4) = 1;
      *param_3 = 0;
    }
    else {
      *param_3 = *(undefined2 *)
                  (*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + *(int *)(param_1 + 0xc));
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
    }
  }
  return;
}



void fn_004ba978(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  undefined1 *local_1c;
  char local_18 [4];
  uint local_14 [2];
  
  local_18[0] = -1;
  fn_0074a4c8(param_1,local_18);
  if (local_18[0] == '\0') {
    iVar2 = *(int *)(param_1 + 8);
    if ((uint)(*(int *)(iVar2 + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
      local_14[0] = 0;
    }
    else {
      puVar3 = (uint *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0xc) + *(int *)(param_1 + 0xc));
      local_14[0] = *puVar3 & 0xffffff | (uint)*(byte *)((int)puVar3 + 3) << 0x18;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    }
    fn_004b8d4c(auStack_24,local_14);
    fn_004b8d90(param_2,auStack_24);
    return;
  }
  if (local_18[0] == '\x01') {
    local_1c = (undefined1 *)0x10001;
    uVar1 = fn_004b8d4c(auStack_28,&local_1c);
    fn_004b8d90(param_2,uVar1);
    return;
  }
  local_1c = &DAT_80010001;
  uVar1 = fn_004b8d4c(auStack_28,&local_1c);
  fn_004b8d90(param_2,uVar1);
  return;
}



undefined4 fn_004ba948(int param_1)

{
  if ((*(uint *)(param_1 + 0x2c) & 1) != 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))(*(int **)(param_1 + 0x28),param_1);
  }
  return 1;
}



undefined4 fn_004ba934(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  fn_0074a528(param_1,local_8);
  return local_8[0];
}



void fn_004ba860(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uStack_28 = *(undefined4 *)(param_2 + 0x28);
  local_30 = *(undefined4 *)(param_2 + 0x20);
  uStack_2c = *(undefined4 *)(param_2 + 0x24);
  local_20 = local_30;
  uStack_1c = uStack_2c;
  local_18 = uStack_28;
  iVar1 = fn_006d3b8c(&local_30);
  if (iVar1 == 0) {
    local_24 = (uint)((unsigned int)(local_24) >> 8) & 0xffffff << 8;
    fn_0015ef4c(param_1,&local_24,1);
    local_14 = local_30;
    fn_0015ef4c(param_1,&local_14,4);
  }
  else {
    local_24 = CONCAT31(((unsigned int)(local_24) >> 8) & 0xffffff,1);
    fn_0015ef4c(param_1,&local_24,1);
  }
  local_24 = param_3;
  fn_0015ef4c(param_1,&local_24,4);
  iVar1 = fn_006d3b8c(&local_20);
  if (iVar1 != 0) {
    fn_004b7244(param_1,param_4);
  }
  return;
}



void fn_004ba7d4(undefined4 param_1,int param_2,uint param_3)

{
  byte local_18 [4];
  undefined4 uStack_14;
  int iStack_10;
  uint local_c;
  
  local_18[0] = 0;
  uStack_14 = param_1;
  iStack_10 = param_2;
  local_c = param_3;
  if ((param_3 & 0xffff) < 0x7f) {
    if (param_2 != 0) {
      local_18[0] = 0x80;
    }
    local_18[0] = local_18[0] | (byte)param_3 & 0x7f;
    fn_0015ef4c(param_1,local_18,1);
    return;
  }
  if (param_2 != 0) {
    local_18[0] = 0x80;
  }
  local_18[0] = local_18[0] | 0x7f;
  fn_0015ef4c(param_1,local_18,1);
  fn_0015ef4c(param_1,&local_c,2);
  return;
}



void fn_004ba7c4(undefined4 param_1,uint param_2,int param_3)

{
  byte abStack_18 [4];
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  
  abStack_18[0] = 0;
  uStack_14 = param_1;
  iStack_10 = param_3;
  uStack_c = param_2;
  if ((param_2 & 0xffff) < 0x7f) {
    if (param_3 != 0) {
      abStack_18[0] = 0x80;
    }
    abStack_18[0] = abStack_18[0] | (byte)param_2 & 0x7f;
    fn_0015ef4c(param_1,abStack_18,1);
    return;
  }
  if (param_3 != 0) {
    abStack_18[0] = 0x80;
  }
  abStack_18[0] = abStack_18[0] | 0x7f;
  fn_0015ef4c(param_1,abStack_18,1);
  fn_0015ef4c(param_1,&uStack_c,2);
  return;
}



void fn_004ba7ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  
  uStack_c = param_2;
  fn_0015ef4c(param_1,&uStack_c,4,param_4,param_1);
  return;
}



uint fn_004ba5ac(void)

{
  longlong lVar1;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  undefined8 uVar2;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint local_a4;
  undefined *local_a0 [22];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  char local_38;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  int iStack_24;
  
  local_a4 = 0xab377987;
  local_b8 = 0x7839d088;
  uStack_b4 = 0x24f8d82;
  local_b0 = 0x889ef409;
  uStack_ac = 0xf831237;
  local_a8 = 0x89797343;
  fn_00114248(&local_28);
  lVar1 = (ulonglong)(local_28 - DAT_0089a638) * 1000000;
  local_30 = (undefined4)lVar1;
  local_2c = (iStack_24 - (DAT_0089a63c + (uint)(local_28 < DAT_0089a638))) * 1000000 +
             (int)((ulonglong)lVar1 >> 0x20);
  uVar2 = fn_00129f6c(&local_30,local_2c,0xd7b634db,0x431bde82,0x12);
  local_b8 = (uint)uVar2 ^ local_b8;
  uStack_b4 = (uint)((ulonglong)uVar2 >> 0x20) ^ uStack_b4;
  svc_0x28();
  local_b0 = local_b8 ^ local_b0;
  uStack_ac = uStack_b4 ^ uStack_ac;
  if (DAT_008b63a0 == '\0') {
    fn_001237bc();
    uVar2 = fn_00453de4(0);
    DAT_008b653c = (uint)((ulonglong)uVar2 >> 0x20);
    DAT_008b6538 = (uint)uVar2;
    fn_0013c674();
    DAT_008b63a0 = '\x01';
  }
  local_a8 = DAT_008b6538 ^ local_a8;
  local_a4 = DAT_008b653c ^ local_a4;
  local_a0[0] = &DAT_0085748c;
  local_38 = '\0';
  fn_00160094(local_a0);
  if (local_38 == '\0') {
    fn_001600c4(local_a0,&local_b8,0x18);
  }
  if (local_38 == '\0') {
    fn_00160190(local_a0,&uStack_48);
    local_38 = '\x01';
  }
  if (local_38 != '\0') {
    unaff_r4 = uStack_48;
    unaff_r5 = uStack_44;
    unaff_r6 = uStack_40;
    unaff_r7 = uStack_3c;
  }
  return unaff_r4 ^ unaff_r5 ^ unaff_r6 ^ unaff_r7;
}



undefined4 fn_004ba5a4(undefined4 param_1)

{
  return param_1;
}


