#include "005200f4_00520840.h"

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


int fn_00520840(int *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00110040;
  *(int *)(iVar2 + 0x84) = param_4;
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar3 = *(undefined4 *)(iVar5 + 0x180);
  uVar4 = *(undefined4 *)(iVar5 + 0x184);
  *(uint *)(iVar5 + 0x180) = param_4 << 0xe | 2;
  *(undefined4 *)(iVar5 + 0x184) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  *(undefined4 *)(iVar5 + 0x180) = uVar3;
  *(undefined4 *)(iVar5 + 0x184) = uVar4;
  if (-1 < iVar1) {
    *param_3 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00520818(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xa0000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_005207a0(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4,undefined4 param_5,
                undefined1 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x220402;
  *(int *)(iVar2 + 0x84) = param_3;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[4];
  uVar7 = param_4[5];
  uVar8 = param_4[6];
  uVar9 = param_4[7];
  *(undefined4 *)(iVar2 + 0x88) = *param_4;
  *(undefined4 *)(iVar2 + 0x8c) = uVar3;
  *(undefined4 *)(iVar2 + 0x90) = uVar4;
  *(undefined4 *)(iVar2 + 0x94) = uVar5;
  *(undefined4 *)(iVar2 + 0x98) = uVar6;
  *(undefined4 *)(iVar2 + 0x9c) = uVar7;
  *(undefined4 *)(iVar2 + 0xa0) = uVar8;
  *(undefined4 *)(iVar2 + 0xa4) = uVar9;
  uVar3 = param_4[8];
  uVar4 = param_4[9];
  uVar5 = param_4[10];
  uVar6 = param_4[0xb];
  *(undefined4 *)(iVar2 + 0xb8) = param_4[0xc];
  *(undefined4 *)(iVar2 + 0xbc) = param_5;
  *(undefined4 *)(iVar2 + 0xa8) = uVar3;
  *(undefined4 *)(iVar2 + 0xac) = uVar4;
  *(undefined4 *)(iVar2 + 0xb0) = uVar5;
  *(undefined4 *)(iVar2 + 0xb4) = uVar6;
  *(undefined1 *)(iVar2 + 0xc0) = param_6;
  *(undefined4 *)(iVar2 + 200) = param_2;
  *(uint *)(iVar2 + 0xc4) = param_3 << 4 | 0xc;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052073c(int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1e0084;
  *(undefined1 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x90) = param_2;
  *(int *)(iVar2 + 0x88) = param_5;
  *(undefined4 *)(iVar2 + 0x8c) = 0x420402;
  *(uint *)(iVar2 + 0x94) = param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x98) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00520714(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x80000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_005206c0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_001d0044;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(int *)(iVar2 + 0x84) = param_4;
  *(undefined4 *)(iVar2 + 0x88) = 0x420402;
  *(uint *)(iVar2 + 0x90) = param_4 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x94) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00520688(int *param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x50040;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052061c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 *param_6,undefined2 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x1400c0;
  *(undefined4 *)(iVar3 + 0x84) = param_2;
  *(int *)(iVar3 + 0x88) = param_4;
  *(undefined4 *)(iVar3 + 0x8c) = param_5;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar2 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *puVar4 = param_4 << 0x10 | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  *puVar4 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (-1 < iVar1) {
    *param_6 = *(undefined4 *)(iVar3 + 0x88);
    *param_7 = *(undefined2 *)(iVar3 + 0x8c);
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



void fn_005205b0(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 ushort param_5)

{
  ushort local_28 [4];
  ushort *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  fn_0044f5d8(local_28);
  fn_00166824(param_1,&uStack_18);
  param_1[4] = param_5 ^ local_28[0];
  param_1[5] = local_28[0];
  *param_1 = *param_1 ^ local_28[0];
  param_1[1] = param_1[1] ^ local_28[0];
  param_1[2] = param_1[2] ^ local_28[0];
  param_1[3] = param_1[3] ^ local_28[0];
  return;
}



int fn_00520478(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  
  local_20 = param_4;
  fn_00170704();
  if (DAT_008c0382 == '\0') {
    fn_001707b4(&DAT_008ec46c);
    return -0x1f5eec08;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      if ((&DAT_008ec47c)[iVar2 * 3] == iVar1) break;
      if ((&DAT_008ec488)[iVar2 * 3] == iVar1) {
        iVar2 = iVar2 + 1;
        break;
      }
      iVar2 = iVar2 + 2;
    } while (iVar2 < 0x10);
    if (iVar2 < 0x10) {
      local_20 = DAT_008c038c;
      iVar1 = fn_00520bb4(&local_20,*param_1,param_2);
      if (iVar1 < 0) {
        if (iVar1 == -0x36dfe7e6) {
          fn_0015e590(0xc920181a,0x520580);
        }
      }
      else {
        (&DAT_008ec480)[iVar2 * 0xc] = 0;
        (&DAT_008ec47c)[iVar2 * 3] = 0;
        if ((&DAT_008ec478)[iVar2 * 3] != 0) {
          svc_0x23();
          (&DAT_008ec478)[iVar2 * 3] = 0;
        }
        *param_1 = 0;
      }
      fn_001707b4(&DAT_008ec46c);
      return iVar1;
    }
  }
  fn_001707b4(&DAT_008ec46c);
  return -0x1efeec16;
}



undefined4 fn_005201f4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [8];
  
  fn_006f94d0(auStack_10);
  iVar1 = fn_004c4a50(auStack_10);
  if (iVar1 < 0) {
    uVar2 = 0xe10113ea;
  }
  else {
    fn_0019bc50(param_1,auStack_10);
    uVar2 = 0;
  }
  return uVar2;
}



void fn_005200f4(void)

{
  int iVar1;
  int in_r3;
  int iVar2;
  int local_20;
  
  local_20 = in_r3;
  fn_00170704(&DAT_008ec46c);
  if (DAT_008c0382 == '\0') {
    fn_001707b4(&DAT_008ec46c);
    return;
  }
  DAT_008c0382 = 0;
  iVar2 = 0;
  do {
    iVar1 = (&DAT_008ec478)[iVar2 * 3];
    (&DAT_008ec480)[iVar2 * 0xc] = 0;
    (&DAT_008ec47c)[iVar2 * 3] = 0;
    if (iVar1 != 0) {
      svc_0x23();
      (&DAT_008ec478)[iVar2 * 3] = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  DAT_008c0384 = 0;
  if (*DAT_008c0390 != 0) {
    svc_0x23();
    *DAT_008c0390 = 0;
  }
  local_20 = DAT_008c038c;
  fn_00520bfc(&local_20);
  if (DAT_008c0388 != 0) {
    svc_0x23();
    DAT_008c0388 = 0;
  }
  if (DAT_008c038c != 0) {
    svc_0x23();
    DAT_008c038c = 0;
  }
  fn_0015e228(&DAT_008ec538);
  fn_00171598();
  fn_001707b4(&DAT_008ec46c);
  return;
}


