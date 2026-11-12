#include "0052c610_0052cc74.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


undefined4 fn_0052cc74(int param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 local_20;
  undefined1 local_1c [4];
  
  fn_00170704(&DAT_008e3304);
  bVar2 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar2) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    return 0;
  }
  if (param_1 == 0) {
    local_20 = 0;
  }
  else {
    fn_0052d734(param_1,param_2,local_1c,&local_20);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = local_1c[0];
    }
  }
  return local_20;
}



undefined4 fn_0052cc10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  fn_00170704(&DAT_008e3304);
  bVar3 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar3) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    return 0xd8a0c7f8;
  }
  uVar2 = fn_0052d6fc(param_1);
  return uVar2;
}



void fn_0052cbf0(void)

{
  fn_0052cdd0();
  return;
}



undefined4
fn_0052cab4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 local_18;
  
  local_18 = param_4;
  fn_00170704(&DAT_008e3304);
  bVar2 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar2) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    return 0;
  }
  local_18 = 0;
  fn_0052d5e0(&local_18,*param_1);
  return local_18;
}



void fn_0052c8f4(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined1 auStack_148 [8];
  int local_140;
  
  iVar1 = fn_0052cb58();
  if (-1 < iVar1) {
    fn_00170704();
    bVar4 = DAT_0089a64c == 0;
    fn_001707b4(&DAT_008e3304);
    if ((bVar4) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
      iVar1 = -0x275f3808;
    }
    else {
      iVar1 = fn_0052d414(auStack_148);
    }
    if ((-1 < iVar1) && (uVar2 = 0, param_3 != 0)) {
      do {
        if ((local_140 == 0) || (local_140 != *(int *)(param_1 + uVar2 * 0x30 + 8))) {
          puVar3 = (undefined4 *)(param_1 + uVar2 * 0x30);
          *(undefined1 *)((int)puVar3 + 0x2d) = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          puVar3[10] = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_3);
    }
  }
  return;
}



undefined4 fn_0052cb58(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  fn_00170704(&DAT_008e3304);
  bVar3 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar3) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    uVar2 = 0xd8a0c7f8;
  }
  else {
    uVar2 = 0xe0e0c7f6;
    if (param_1 != 0 && param_2 != 0) {
      if (param_3 < 0x65) {
        uVar2 = fn_0052d570(param_1,param_2,param_3);
        return uVar2;
      }
      uVar2 = 0xe0e0c7e9;
    }
  }
  return uVar2;
}



undefined4 fn_0052c888(void)

{
  int iVar1;
  bool bVar2;
  undefined4 local_20 [5];
  
  fn_00170704(&DAT_008e3304);
  bVar2 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar2) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    return 0;
  }
  iVar1 = fn_0052d464(local_20);
  if (iVar1 < 0) {
    local_20[0] = 0;
  }
  return local_20[0];
}



int fn_0052c7e8(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  fn_00170704(&DAT_008e3304);
  bVar6 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar6) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    iVar1 = -0x275f3808;
  }
  else {
    iVar1 = -0x1f1f380a;
    if (param_1 != 0 && param_2 != (undefined4 *)0x0) {
      if (param_4 < 0x65) {
        iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
        *(undefined **)(iVar3 + 0x80) = &DAT_00110080;
        *(undefined4 *)(iVar3 + 0x84) = param_3;
        *(uint *)(iVar3 + 0x88) = param_4;
        iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
        uVar4 = *(undefined4 *)(iVar2 + 0x180);
        uVar5 = *(undefined4 *)(iVar2 + 0x184);
        *(uint *)(iVar2 + 0x180) = param_4 << 0x12 | 2;
        *(int *)(iVar2 + 0x184) = param_1;
        iVar1 = DAT_008bfbd4;
        svc_0x32();
        *(undefined4 *)(iVar2 + 0x180) = uVar4;
        *(undefined4 *)(iVar2 + 0x184) = uVar5;
        if (-1 < iVar1) {
          *param_2 = *(undefined4 *)(iVar3 + 0x88);
          iVar1 = *(int *)(iVar3 + 0x84);
        }
        return iVar1;
      }
      iVar1 = -0x1f1f3817;
    }
  }
  return iVar1;
}



undefined4 fn_0052c728(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  fn_00170704(&DAT_008e3304);
  bVar3 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar3) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    uVar2 = 0xd8a0c7f8;
  }
  else if (param_2 == 0) {
    uVar2 = 0xe0e0c7f6;
  }
  else {
    fn_00170704(&DAT_008e32f8);
    local_50 = *param_1;
    uStack_4c = param_1[1];
    uStack_44 = param_1[3];
    uStack_40 = param_1[4];
    uStack_3c = param_1[5];
    uStack_38 = param_1[6];
    uStack_34 = param_1[7];
    local_30 = param_1[8];
    uStack_2c = param_1[9];
    uStack_28 = param_1[10];
    local_48 = DAT_0089a650;
    uVar2 = fn_0052d4ac(&local_50,param_2);
    fn_001707b4(&DAT_008e32f8);
  }
  return uVar2;
}



bool fn_0052c6ec(void)

{
  bool bVar1;
  
  fn_00170704(&DAT_008e3304);
  bVar1 = DAT_0089a64c != 0;
  fn_001707b4(&DAT_008e3304);
  return bVar1;
}



undefined4 fn_0052c674(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  fn_00170704(&DAT_008e3304);
  bVar3 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar3) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    uVar2 = 0xd8a0c7f8;
  }
  else {
    if (param_1 != 0) {
      uVar2 = fn_0052d3b8(param_1,0x20);
      return uVar2;
    }
    uVar2 = 0xe0e0c7f6;
  }
  return uVar2;
}



int fn_0052c610(void)

{
  int iVar1;
  undefined4 in_r3;
  bool bVar2;
  undefined4 local_10;
  
  local_10 = in_r3;
  fn_00170704(&DAT_008e3304);
  bVar2 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar2) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    return 0;
  }
  iVar1 = fn_0052d37c(&local_10);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)(char)local_10;
  }
  return iVar1;
}



bool fn_0052cb1c(void)

{
  bool bVar1;
  
  fn_00170704(&DAT_008e3304);
  bVar1 = DAT_008bfbd0 != 0;
  fn_001707b4(&DAT_008e3304);
  return bVar1;
}


