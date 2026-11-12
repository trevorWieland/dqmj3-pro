#include "0051f170_0051f868.h"



undefined4 fn_0051f868(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [24];
  
  puVar1 = (undefined4 *)fn_004c49c0(auStack_20,*(undefined4 *)(param_1 + 4));
  *puVar1 = &DAT_008573a0;
  uVar2 = fn_0051fa50(auStack_20,param_2);
  fn_004c4a24(auStack_20);
  return uVar2;
}



int fn_0051f81c(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10;
  
  if (DAT_008c0382 != '\0') {
    local_10 = DAT_008c038c;
    iVar1 = fn_00520934(&local_10,param_1);
    if (iVar1 != -0x36dfe7e6) {
      return iVar1;
    }
  }
  return -0x1f5eec08;
}



undefined4
fn_0051f754(int param_1,uint param_2,undefined1 param_3,undefined1 param_4,undefined2 param_5,
            int param_6,uint param_7)

{
  if (param_6 == 0) {
    if (param_7 != 0) {
      return 0xe0e113f6;
    }
  }
  else if (200 < param_7) {
    return 0xe10113e9;
  }
  fn_001694e4(param_1 + 0xc,0x7e435a,3);
  *(undefined1 *)(param_1 + 0x14) = param_3;
  *(undefined1 *)(param_1 + 0x1d) = param_4;
  *(undefined1 *)(param_1 + 0xf) = 0x15;
  *(uint *)(param_1 + 0x10) =
       param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
       param_2 >> 0x18;
  *(undefined2 *)(param_1 + 0x16) = 0x80;
  *(char *)(param_1 + 0x3f) = (char)param_7;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  fn_00301f50(param_1 + 0x40,200);
  fn_001694e4(param_1 + 0x40,param_6,param_7);
  *(undefined2 *)(param_1 + 6) = param_5;
  *(undefined1 *)(param_1 + 8) = 1;
  return 0;
}



void fn_0051f718(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  fn_001694e4(param_1 + 0xc,param_2,0xfc);
  fn_001694e4(param_1,param_4,6);
  *(undefined2 *)(param_1 + 6) = param_3;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



int fn_0051f5ac(ushort *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ushort local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  ushort local_28 [4];
  
  fn_00170704(&DAT_008ec46c);
  if (DAT_008c0382 == '\0') {
    fn_001707b4(&DAT_008ec46c);
    return -0x1f5eec08;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  fn_00170704(&DAT_008ec46c);
  local_30 = DAT_008c038c;
  iVar1 = fn_005208a0(&local_30,&local_58,param_2);
  if (iVar1 == -0x36dfe7e6) {
    fn_0015e590(0xc920181a,0x51f648);
  }
  fn_001707b4(&DAT_008ec46c);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 6) = local_50;
    *(undefined4 *)(param_1 + 8) = uStack_4c;
    *(undefined4 *)(param_1 + 10) = uStack_48;
    *(undefined4 *)(param_1 + 0xc) = uStack_44;
    *(undefined4 *)(param_1 + 0xe) = uStack_40;
    *(undefined4 *)(param_1 + 0x10) = uStack_3c;
    param_1[0x12] = local_38;
    local_30 = local_58;
    uStack_2c = uStack_54;
    fn_0044f5d8(local_28);
    fn_00166824(param_1,&local_30);
    *param_1 = *param_1 ^ local_28[0];
    param_1[1] = param_1[1] ^ local_28[0];
    param_1[2] = param_1[2] ^ local_28[0];
    param_1[3] = param_1[3] ^ local_28[0];
    param_1[4] = local_38 ^ local_28[0];
    param_1[5] = local_28[0];
  }
  fn_001707b4(&DAT_008ec46c);
  return iVar1;
}



int fn_0051f53c(void)

{
  undefined4 in_r3;
  int iVar1;
  undefined4 local_10;
  
  local_10 = in_r3;
  fn_00170704(&DAT_008ec46c);
  if (DAT_008c0382 == '\0') {
    iVar1 = -0x1f5eec08;
  }
  else {
    local_10 = DAT_008c038c;
    iVar1 = fn_00520818(&local_10);
    if (iVar1 == -0x36dfe7e6) {
      fn_0015e590(0xc920181a,0x51f588);
    }
  }
  fn_001707b4(&DAT_008ec46c);
  return iVar1;
}



int fn_0051f4b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  fn_00170704(&DAT_008ec46c);
  if (DAT_008c0382 == '\0') {
    iVar2 = -0x1f5eec08;
  }
  else {
    local_10 = DAT_008c038c;
    uVar1 = 2;
    if (param_1 != 0) {
      uVar1 = 6;
    }
    iVar2 = fn_00520a40(&local_10,uVar1,1);
    if (iVar2 == -0x36dfe7e6) {
      fn_0015e590(0xc920181a,0x51f518);
    }
  }
  fn_001707b4(&DAT_008ec46c);
  return iVar2;
}



void fn_0051f45c(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  
  puVar1 = (undefined4 *)
           fn_004c4994(auStack_20,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  uVar3 = local_18;
  *puVar1 = &DAT_00857390;
  iVar2 = fn_004c4950(auStack_20);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  *param_1 = &DAT_00857380;
  param_1[1] = uVar3;
  *(undefined4 *)(param_2 + 8) = local_18;
  return;
}



undefined1 *
fn_0051f2f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
            int param_6,int param_7)

{
  undefined1 *puVar1;
  int local_80;
  undefined4 uStack_7c;
  ushort local_78 [3];
  undefined2 local_72;
  undefined1 auStack_70 [40];
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  fn_00170704(&DAT_008ec46c);
  if (DAT_008c0382 == '\0') {
    puVar1 = (undefined1 *)0xe0a113f8;
  }
  else {
    puVar1 = &DAT_e10113fd;
    if ((param_4 != 0) && (param_5 < 0xe)) {
      if (param_7 == 0 && param_6 == 0) {
        param_7 = 0x6e;
      }
      else if ((param_7 == 0) && (param_6 != 0)) {
        param_7 = 0x14;
      }
      local_78[2] = 0x421;
      if (param_5 != 0) {
        local_78[2] = (ushort)(1 << (param_5 - 1 & 0xff));
      }
      local_78[0] = (ushort)param_6 ^ 1;
      local_78[1] = 3;
      local_80 = -1;
      uStack_7c = 0x1f00ffff;
      fn_0019bc50(auStack_40,&local_80);
      fn_0019bc50(auStack_70,auStack_40);
      local_48 = 0;
      local_72 = (undefined2)param_7;
      local_44 = DAT_008c038c;
      local_80 = param_4;
      uStack_7c = param_3;
      puVar1 = (undefined1 *)fn_005207a0(&local_44,param_1,local_30,local_78);
      if (puVar1 == (undefined1 *)0xc920181a) {
        fn_0015e590(0xc920181a,0x51f404);
      }
    }
  }
  fn_001707b4(&DAT_008ec46c);
  return puVar1;
}



int fn_0051f254(void)

{
  undefined4 in_r3;
  int iVar1;
  undefined4 local_10;
  
  local_10 = in_r3;
  fn_00170704(&DAT_008ec46c);
  if (DAT_008c0382 == '\0') {
    iVar1 = -0x1f5eec08;
  }
  else {
    local_10 = DAT_008c038c;
    iVar1 = fn_00520714(&local_10);
    if (iVar1 == -0x36dfe7e6) {
      fn_0015e590(0xc920181a,0x51f2a0);
    }
  }
  fn_001707b4(&DAT_008ec46c);
  return iVar1;
}



undefined4 fn_0051f170(int *param_1)

{
  int iVar1;
  
  fn_00170704(&DAT_008ec46c);
  if (DAT_008c0382 == '\0') {
    fn_001707b4(&DAT_008ec46c);
    return 0xe0a113f8;
  }
  iVar1 = 0;
  do {
    if ((&DAT_008ec47c)[iVar1 * 3] == 0) break;
    if ((&DAT_008ec488)[iVar1 * 3] == 0) {
      iVar1 = iVar1 + 1;
      break;
    }
    iVar1 = iVar1 + 2;
  } while (iVar1 < 0x10);
  if ((iVar1 < 0x10) && (DAT_008c0384 < 0xfffffff)) {
    DAT_008c0384 = DAT_008c0384 + 1;
    (&DAT_008ec47c)[iVar1 * 3] = DAT_008c0384;
    *param_1 = DAT_008c0384;
    fn_001707b4(&DAT_008ec46c);
    return 0;
  }
  fn_001707b4(&DAT_008ec46c);
  return 0xc86113f3;
}


