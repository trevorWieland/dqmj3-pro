#include "0044db10_0044e254.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_0044e1f8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8080202;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = param_5;
  *(int *)(iVar2 + 0x94) = param_7;
  *(undefined4 *)(iVar2 + 0x98) = param_8;
  *(uint *)(iVar2 + 0xa4) = param_7 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0xa8) = param_6;
  *(undefined4 *)(iVar2 + 0x9c) = param_9;
  *(undefined4 *)(iVar2 + 0xa0) = param_10;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined1 * fn_0044e138(undefined4 *param_1,undefined4 param_2)

{
  undefined4 **ppuVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined4 ***local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 ***local_24;
  undefined4 uStack_20;
  undefined4 **local_1c;
  
  local_38 = &local_24;
  local_28 = 1;
  uStack_20 = 1;
  local_1c = DAT_0089a670;
  uStack_34 = 1;
  local_24 = local_38;
  puVar4 = (undefined1 *)fn_0044e2a4(&local_1c,&local_30,param_2);
  uVar3 = local_2c;
  uVar2 = local_30;
  ppuVar1 = DAT_0089a670;
  if (-1 < (int)puVar4) {
    uVar8 = fn_001587b0(&DAT_008e33ac);
    puVar6 = (undefined *)((ulonglong)uVar8 >> 0x20);
    puVar5 = (undefined4 *)uVar8;
    if (puVar5 == (undefined4 *)0x0) {
      puVar7 = &DAT_d8604659;
    }
    else {
      puVar6 = &DAT_0085251c;
      *puVar5 = &DAT_0085251c;
      puVar5[1] = ppuVar1;
      puVar5[3] = uVar3;
      puVar5[2] = uVar2;
      puVar7 = (undefined1 *)0x0;
    }
    *param_1 = puVar5;
    puVar4 = (undefined1 *)0x0;
    if ((int)puVar7 < 0) {
      local_38 = (undefined4 ***)DAT_0089a670;
      fn_0044e304(&local_38,puVar6,local_30,local_2c);
      puVar4 = puVar7;
    }
  }
  return puVar4;
}



undefined1 * fn_0044e084(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20 [2];
  
  local_20[0] = DAT_0089a670;
  local_2c = 0xc;
  local_30 = param_2;
  puVar4 = (undefined1 *)fn_0044e2a4(local_20,&local_28,7,2);
  uVar3 = uStack_24;
  uVar2 = local_28;
  uVar1 = DAT_0089a670;
  if (-1 < (int)puVar4) {
    uVar8 = fn_001587b0(&DAT_008e33ac);
    puVar6 = (undefined *)((ulonglong)uVar8 >> 0x20);
    puVar5 = (undefined4 *)uVar8;
    if (puVar5 == (undefined4 *)0x0) {
      puVar7 = &DAT_d8604659;
    }
    else {
      puVar6 = &DAT_0085251c;
      *puVar5 = &DAT_0085251c;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5[1] = uVar1;
      puVar7 = (undefined1 *)0x0;
    }
    *param_1 = puVar5;
    puVar4 = (undefined1 *)0x0;
    if ((int)puVar7 < 0) {
      local_30 = DAT_0089a670;
      fn_0044e304(&local_30,puVar6,local_28,uStack_24);
      puVar4 = puVar7;
    }
  }
  return puVar4;
}



undefined4 *
fn_0044df08(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_18;
  
  *param_1 = &DAT_0085251c;
  iVar1 = param_1[2];
  iVar2 = param_1[3];
  if (iVar1 != 0 || iVar2 != 0) {
    local_18 = param_4;
    uVar3 = fn_006ceaf4(param_1);
    local_18 = (undefined4)uVar3;
    fn_0044e304(&local_18,(int)((ulonglong)uVar3 >> 0x20),iVar1,iVar2);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[1] = 0;
  return param_1;
}



undefined1 * fn_0044de48(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  if ((uint)param_3[2] < 0x201) {
    local_24 = 0;
    local_20[0] = fn_006ceaf4(param_1);
    puVar1 = (undefined1 *)
             fn_0044e5a4(local_20,&local_24,0,param_3[2],*(undefined4 *)(param_1 + 8),
                          *(undefined4 *)(param_1 + 0xc),*param_3,param_3[1],param_3[2],param_4,0);
    if (-1 < (int)puVar1) {
      puVar2 = (undefined4 *)fn_001587b0(&DAT_008e33e8);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &DAT_008524d8;
        puVar2[1] = local_24;
      }
      *param_2 = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        svc_0x23();
        puVar1 = &DAT_d8604659;
      }
      else {
        puVar1 = (undefined1 *)0x0;
      }
    }
  }
  else {
    puVar1 = (undefined1 *)0xe0e046bf;
  }
  return puVar1;
}



int fn_0044de20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    svc_0x23();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return param_1;
}



void fn_0044dd90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined4 local_24 [2];
  
  local_24[0] = fn_006ceb3c();
  fn_0044e704(local_24,param_2,param_3,param_4,param_5,param_6,
               param_7 & 0xff | (param_7 & 0xff) << 0x10);
  return;
}



void fn_0044dcc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 local_20 [2];
  
  local_20[0] = fn_006ceb3c();
  fn_0044e680(local_20,param_2,param_3,param_4,param_5,param_6);
  return;
}



void fn_0044dc58(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 local_18;
  
  local_18 = param_4;
  if (param_1[1] != 0) {
    local_18 = fn_006ceb3c(param_1);
    fn_0044e6d8(&local_18);
  }
  (**(code **)(*param_1 + 0x34))(param_1);
  fn_00170704(&DAT_008e3418);
  *param_1 = (int)DAT_008e340c;
  DAT_008e3414 = DAT_008e3414 + -1;
  DAT_008e340c = param_1;
  fn_001707b4(&DAT_008e3418,extraout_r1,param_3,local_18);
  return;
}



void fn_0044dc38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  local_10 = fn_006ceb3c();
  fn_0044e618(&local_10,param_2);
  return;
}



void fn_0044dbbc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_20;
  
  uVar3 = param_2[2];
  if (uVar3 < 0x201) {
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    local_20 = fn_006ceaf4();
    fn_0044e468(&local_20,0,uVar1,uVar2,uVar4,uVar5,uVar3,0);
  }
  return;
}



void fn_0044db6c(int *param_1)

{
  (**(code **)(*param_1 + 0x34))(param_1);
  fn_00170704(&DAT_008e33dc);
  *param_1 = (int)DAT_008e33d0;
  DAT_008e33d8 = DAT_008e33d8 + -1;
  DAT_008e33d0 = param_1;
  fn_001707b4(&DAT_008e33dc);
  return;
}



void fn_0044db10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_24 [2];
  
  uVar3 = param_2[2];
  if (uVar3 < 0x201) {
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    local_24[0] = fn_006ceaf4();
    fn_0044e254(local_24,0,uVar1,uVar2,uVar4,uVar5,uVar3);
  }
  return;
}



int fn_0044e254(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8040142;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = param_5;
  *(int *)(iVar2 + 0x94) = param_7;
  *(uint *)(iVar2 + 0x98) = param_7 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x9c) = param_6;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


