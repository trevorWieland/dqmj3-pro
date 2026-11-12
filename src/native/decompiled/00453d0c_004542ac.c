#include "00453d0c_004542ac.h"

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


undefined4 fn_00454244(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0013c598();
  if (iVar1 < 0) {
    iVar1 = fn_00453fdc();
    if (iVar1 < 0) {
      iVar1 = fn_004540e0();
      if (iVar1 < 0) {
        uVar2 = 0xd90103ea;
      }
      else {
        *param_1 = 2;
        uVar2 = 0;
      }
      return uVar2;
    }
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  return 0;
}



void fn_0045418c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = fn_0014e3f4();
    fn_00170704();
    if (0 < DAT_008bfb50) {
      DAT_008bfb50 = DAT_008bfb50 + -1;
    }
    if ((DAT_008bfb50 == 0) && (DAT_008bfb48 != '\0')) {
      DAT_008bfb48 = '\0';
      if (DAT_008bfb54 != 0) {
        svc_0x23();
        if (DAT_008bfb54 < 0) {
          fn_00146594();
        }
        DAT_008bfb54 = 0;
      }
    }
    fn_001707b4(uVar1);
    return;
  }
  if (param_1 == 1) {
    uVar1 = fn_0014e3f4();
    fn_00170704();
    if (0 < DAT_008c072c) {
      DAT_008c072c = DAT_008c072c + -1;
    }
    if ((DAT_008c072c == 0) && (DAT_008c0728 != '\0')) {
      DAT_008c0728 = '\0';
      iVar2 = fn_00453f24(&DAT_008c3c2c);
      if (-1 < iVar2) {
        DAT_008bfb54 = 0;
      }
    }
    fn_001707b4(uVar1);
    return;
  }
  if (param_1 != 2) {
    return;
  }
  uVar1 = fn_0014e3f4();
  fn_00170704();
  if (0 < DAT_008c0724) {
    DAT_008c0724 = DAT_008c0724 + -1;
  }
  if ((DAT_008c0724 == 0) && (iVar2 = fn_00453f24(&DAT_008c3c28), -1 < iVar2)) {
    DAT_008bfb54 = 0;
    DAT_008c3c2c = 0;
  }
  fn_001707b4(uVar1);
  return;
}



undefined4 fn_004540e0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0014e3f4();
  fn_00170704();
  if (DAT_008c0724 == 0) {
    iVar2 = fn_00454084(&DAT_008c3c28,(char *)&DAT_0087147d);
    if (iVar2 < 0) {
      if (iVar2 == -0x26defc05) {
        fn_001707b4(uVar1);
        return 0xd92103fb;
      }
    }
    else {
      DAT_008c3c2c = DAT_008c3c28;
      DAT_008bfb54 = DAT_008c3c28;
    }
  }
  DAT_008c0724 = DAT_008c0724 + 1;
  fn_001707b4(uVar1);
  return 0;
}



undefined4 fn_00453fdc(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0014e3f4();
  fn_00170704();
  if (DAT_008c072c == 0) {
    iVar2 = fn_00454084(&DAT_008c3c2c,(char *)&DAT_00871483);
    if (iVar2 < 0) {
      if (iVar2 == -0x26defc05) {
        fn_001707b4(uVar1);
        return 0xd92103fb;
      }
    }
    else {
      DAT_008c0728 = 1;
      DAT_008bfb54 = DAT_008c3c2c;
    }
  }
  DAT_008c072c = DAT_008c072c + 1;
  fn_001707b4(uVar1);
  return 0;
}



int fn_00454084(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0013db70();
  if (iVar1 < 0) {
    fn_00146594();
  }
  if (*param_1 == 0) {
    uVar2 = fn_002febd8(param_2);
    iVar1 = fn_0014fe94(param_1,param_2,uVar2,0);
    if (iVar1 < 0) {
      iVar1 = -0x26defc05;
    }
  }
  else {
    iVar1 = -0x275efc07;
  }
  return iVar1;
}



int fn_00453f24(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = -0x275efc09;
  }
  else {
    svc_0x23();
    if (iVar1 < 0) {
      fn_00146594();
    }
    *param_1 = 0;
  }
  return iVar1;
}



uint fn_00453e70(void)

{
  int iVar1;
  uint local_c8 [50];
  
  iVar1 = fn_0014e494(local_c8,0xc0,0xc0000);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x453e90);
  }
  return (local_c8[0] & 0x10) >> 4;
}



void fn_00453e48(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_0014e494(param_1,4,0xb0000);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x453e60);
    return;
  }
  return;
}



undefined8 fn_00453e0c(void)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = 0;
  uStack_c = 0;
  iVar1 = fn_0014e494(&local_10,8,0x90000);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x453e38);
  }
  return CONCAT44(uStack_c,local_10);
}



undefined8 fn_00453de4(undefined4 param_1)

{
  int iVar1;
  undefined8 local_10 [2];
  
  iVar1 = fn_004542ac(param_1,local_10);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x453dfc);
  }
  return local_10[0];
}



undefined8 fn_00453ddc(void)

{
  int iVar1;
  undefined8 auStack_10 [2];
  
  iVar1 = fn_004542ac(0,auStack_10);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x453dfc);
  }
  return auStack_10[0];
}



int fn_004542ac(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x30040;
  *(undefined4 *)(iVar3 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008bfb54;
  if (-1 < DAT_008bfb54) {
    uVar2 = *(undefined4 *)(iVar3 + 0x8c);
    *param_2 = *(undefined4 *)(iVar3 + 0x88);
    param_2[1] = uVar2;
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



uint fn_00453da4(void)

{
  int iVar1;
  uint local_c8 [50];
  
  iVar1 = fn_0014e494(local_c8,0xc0,0xc0000);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x453dc4);
  }
  return (local_c8[0] & 0x20) >> 5;
}



undefined * fn_00453d8c(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 < 7) {
    puVar1 = (&PTR_DAT_008bfb58)[param_1];
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool fn_00453d0c(void)

{
  ushort uVar1;
  int iVar2;
  uint in_r3;
  uint local_10;
  
  local_10 = in_r3;
  iVar2 = fn_0014e494(&local_10,4,0xd0000);
  if (iVar2 < 0) {
    fn_0015e590(iVar2,0x453d28);
  }
  fn_00170704(&DAT_008e3254);
  iVar2 = fn_0044ce6c(&DAT_0088a000);
  uVar1 = _DAT_0088c02c;
  if (iVar2 < 0) {
    fn_001707b4(&DAT_008e3254);
    return false;
  }
  fn_001707b4(&DAT_008e3254);
  return (uint)uVar1 <= (local_10 & 0xffff);
}


