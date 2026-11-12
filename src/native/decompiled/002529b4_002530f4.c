#include "002529b4_002530f4.h"



void fn_002530f4(void)

{
  DAT_008923ac = 0;
  DAT_008923b0 = 0;
  return;
}



int fn_002530dc(int param_1)

{
  return (int)*(short *)(DAT_008923ac + param_1 * 4);
}



int fn_002530c4(int param_1)

{
  return (int)*(short *)(DAT_008923ac + param_1 * 4 + 2);
}



undefined4 fn_00253030(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_002530b8), iVar1 != 0)) {
    DAT_008923ac = 0;
  }
  else {
    DAT_008923ac = param_1 + 4;
  }
  if ((param_3 - 4 & 3) != 0) {
    DAT_008923ac = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008923b0 = 0;
  }
  else {
    DAT_008923b0 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4),4,0);
  }
  return 1;
}



int fn_00252fdc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uStack_10;
  
  uStack_10 = param_1;
  iVar1 = fn_00174858(DAT_008977e4);
  uVar2 = fn_0017484c(DAT_008977e4);
  iVar3 = fn_00175d88(uVar2,&uStack_10);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = fn_001748ec();
    iVar1 = (int)*(char *)(iVar1 + 0x59);
    if ((iVar1 != 0) && (bVar5 = iVar1 == iVar4, iVar4 = iVar1, bVar5)) {
      iVar4 = 0;
    }
  }
  return iVar4;
}



int fn_00252f88(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uStack_10;
  
  uStack_10 = param_1;
  iVar1 = fn_00174858(DAT_008977e4);
  uVar2 = fn_0017484c(DAT_008977e4);
  iVar3 = fn_00175dcc(uVar2,&uStack_10);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = fn_001748ec();
    iVar1 = (int)*(char *)(iVar1 + 0x58);
    if ((iVar1 != 0) && (bVar5 = iVar1 == iVar4, iVar4 = iVar1, bVar5)) {
      iVar4 = 0;
    }
  }
  return iVar4;
}



void fn_00252d4c(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 auStack_1180 [4];
  char *local_117c;
  undefined1 local_1160;
  bool local_938;
  undefined4 local_8a4;
  undefined4 local_8a0;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  *param_2 = 4;
  uStack_38 = param_1;
  puStack_34 = param_2;
  local_30 = param_3;
  uStack_2c = param_4;
  fn_0011d89c(auStack_1180);
  local_1160 = 8;
  iVar1 = fn_002043cc(DAT_00897840,local_30);
  iVar2 = fn_00204404(DAT_00897840);
  iVar3 = fn_002043cc(DAT_00897840,local_30);
  bVar5 = *(char *)(iVar3 + 0x10) == '\x02';
  if (bVar5) {
    local_938 = true;
  }
  else {
    local_938 = *(int *)(iVar2 + 4) < *(int *)(iVar1 + 4);
    local_8a4 = *(undefined4 *)(iVar2 + 8);
    local_8a0 = *(undefined4 *)(iVar1 + 8);
  }
  fn_00252eb8(auStack_1180,param_2);
  uVar4 = fn_002043cc(DAT_00897840,local_30);
  fn_00251f18(auStack_1180,uVar4,bVar5);
  local_117c = "bf_A01_00";
  uVar4 = fn_00154ae0(DAT_008977e4);
  fn_001d448c(uVar4,auStack_1180);
  fn_00202fd8(&LAB_002f8abc);
  uVar4 = fn_00615ee4();
  fn_0010706c(uVar4,&LAB_00202fe8,2);
  *(undefined4 *)(DAT_00897828 + 0x68) = param_5;
  iVar1 = DAT_00897840;
  *(undefined1 *)(DAT_00897840 + 0x35) = 1;
  *(char *)(iVar1 + 0x36) = (char)param_4;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00252d20) */

uint fn_00252cb8(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  float in_s0;
  uint uVar3;
  float in_s1;
  uint uVar4;
  uint local_10 [2];
  uint local_8 [2];
  
  uVar3 = VectorFloatToUnsigned(in_s0 * 100.0,3);
  uVar4 = VectorFloatToUnsigned(in_s1 * 100.0,3);
  iVar2 = (uVar3 & 0xffff) / 5 + (uVar4 & 0xffff) / 5;
  if (param_2 == 0) {
    local_8[0] = (uint)(byte)(&DAT_007c4fdc)[param_1] + iVar2;
  }
  else {
    local_8[0] = iVar2 + 3;
  }
  local_10[0] = 100;
  local_8[1] = 0;
  puVar1 = local_8;
  if (100 < local_8[0]) {
    puVar1 = local_10;
  }
  return *puVar1;
}



void fn_002529b4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,uint param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint local_1b30 [24];
  char local_1ad0;
  undefined1 auStack_1acc [1197];
  undefined1 local_161f;
  char local_161e;
  int local_1258;
  undefined1 auStack_1250 [4];
  char *local_124c;
  undefined1 local_1230;
  bool local_a08;
  undefined4 local_974;
  undefined4 local_970;
  undefined1 local_96c;
  undefined1 auStack_96a [24];
  undefined1 auStack_952 [30];
  undefined1 auStack_934 [960];
  undefined1 auStack_574 [960];
  undefined1 uStack_1b4;
  undefined1 local_1b3;
  undefined1 auStack_1b0 [96];
  short sStack_150;
  undefined1 local_14e;
  undefined1 auStack_148 [288];
  
  uVar7 = (ulonglong)param_7;
  if (param_6 != 0) {
    iVar2 = fn_002043cc(DAT_00897840,param_3);
    iVar3 = fn_002043cc(DAT_00897840,param_4);
    fn_0011d89c(auStack_1250);
    local_1230 = 8;
    if (*(char *)(iVar3 + 0x10) == '\x02') {
      local_a08 = true;
    }
    else {
      local_a08 = *(int *)(iVar2 + 4) < *(int *)(iVar3 + 4);
    }
    local_96c = (undefined1)param_6;
    fn_00252eb8(auStack_1250,param_2);
    cVar1 = *(char *)(iVar2 + 0x10);
    local_1258 = iVar2 + 0x7a8;
    fn_0017821c(local_1b30,local_1258,0x8d8);
    fn_00101a50(auStack_96a,0xc,local_1b30);
    if (cVar1 != '\x02') {
      iVar5 = 0;
      do {
        fn_002fa418(auStack_148,iVar2,iVar5);
        fn_0017821c(auStack_574 + iVar5 * 0xf0,auStack_148,0xf0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
      uStack_1b4 = *(undefined1 *)(local_1258 + 0x510);
    }
    iVar5 = 0;
    do {
      fn_002fa3b4(auStack_148,iVar2,iVar5);
      fn_0017821c(auStack_934 + iVar5 * 0xf0,auStack_148,0xf0);
      uVar6 = (undefined4)uVar7;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    local_1b3 = local_1ad0 != '\0';
    fn_0017821c(auStack_1b0,auStack_1acc,0x60);
    sStack_150 = (short)local_161e;
    local_14e = local_161f;
    fn_0029432c(local_1b30,auStack_952);
    fn_00251f18(auStack_1250,iVar3);
    local_974 = *(undefined4 *)(iVar2 + 8);
    if (*(char *)(iVar3 + 0x10) != '\x02') {
      local_970 = *(undefined4 *)(iVar3 + 8);
    }
    local_124c = "bf_A01_00";
    uVar4 = fn_00154ae0(DAT_008977e4);
    fn_001d448c(uVar4,auStack_1250);
    fn_00202fd8(&LAB_002f8abc);
    uVar4 = fn_00615ee4();
    fn_0010706c(uVar4,&LAB_00202fe8,2);
    *(undefined4 *)(DAT_00897828 + 0x68) = uVar6;
    iVar2 = DAT_00897840;
    *(undefined1 *)(DAT_00897840 + 0x35) = 1;
    *(char *)(iVar2 + 0x36) = (char)param_5;
    return;
  }
  local_1b30[0] = param_7;
  if (*(char *)(DAT_00897840 + 4) == param_3) {
    fn_0025266c(param_1,param_2,param_4,param_5);
    return;
  }
  fn_0025266c(param_1,param_2,param_3,param_5);
  return;
}



void fn_00252eb8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x44d;
  iVar1 = fn_006c40c8(param_2);
  if (iVar1 == 1) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80;
  }
  iVar1 = fn_006c41e4(param_2);
  if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x29) = 2;
  }
  else {
    iVar1 = fn_006c41e4(param_2);
    if (iVar1 == 2) {
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x849) = 1;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
  iVar1 = fn_006c476c(param_2);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x2b) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x2b) = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  iVar1 = fn_006c41b0(param_2);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  else if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  else if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 0x2c) = 2;
  }
  return;
}


