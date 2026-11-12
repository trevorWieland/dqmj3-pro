#include "001159c4_0011611c.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_0011611c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 8) == param_1) {
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    if (*(int **)(*param_1 + 0xc) == param_1) {
      *(undefined4 *)(*param_1 + 0xc) = 0;
    }
    if (*param_1 != 0) {
      *param_1 = 0;
    }
  }
  return;
}



void fn_00116114(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    if (*(int **)(iVar2 + 8) == piVar1) {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    if (*(int **)(*piVar1 + 0xc) == piVar1) {
      *(undefined4 *)(*piVar1 + 0xc) = 0;
    }
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
  }
  return;
}



void fn_0011609c(int param_1)

{
  fn_00127888();
  *(undefined4 *)(param_1 + 0x610) = 0;
  *(undefined4 *)(param_1 + 0x614) = 0;
  *(undefined4 *)(param_1 + 0x618) = 0;
  *(undefined1 *)(param_1 + 0x61c) = 1;
  *(undefined1 *)(param_1 + 0x61d) = 1;
  *(undefined1 *)(param_1 + 0x61e) = 7;
  *(undefined1 *)(param_1 + 0x61f) = 7;
  *(undefined2 *)(param_1 + 0x628) = 1;
  *(undefined1 *)(param_1 + 0x62a) = 1;
  fn_0017821c(param_1 + 0x62c,&DAT_007d859c,0x60);
  return;
}



void fn_00116020(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar1 = fn_00127904(param_2,param_3);
    uVar1 = fn_00126190(uVar1,4);
    fn_00127a7c(param_1,uVar1,param_2,param_3);
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}



void fn_00115fec(undefined4 param_1,undefined4 param_2)

{
  fn_00126180(param_1,0x4000259);
  DAT_0089a91c = param_2;
  return;
}



void fn_00115fd8(void)

{
  DAT_0089a569 = 1;
  return;
}



int fn_00115d78(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  fn_00114818(4);
  iVar1 = fn_00125188();
  if (iVar1 != 0) {
    fn_00125150(1);
  }
  while( true ) {
    fn_00125694();
    iVar2 = fn_00125c68(param_1);
    fn_001257a8();
    if ((iVar2 != -0x375f3010 && iVar2 != -0x1f5f33f8) && iVar2 != -0x375f33fe) break;
    fn_0012d6a4(10000000,0);
  }
  if (iVar1 == 0) {
    iVar1 = fn_00125188();
    if (iVar1 != 0) {
      fn_00125150(1);
    }
  }
  else {
    iVar1 = fn_00125188();
    if (iVar1 == 0) {
      fn_00114788(1);
    }
  }
  if (iVar2 == -0x375f3004) {
    iVar2 = 0;
  }
  return iVar2;
}



int fn_00115c6c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  fn_00115e64(0);
  fn_00114818(5);
  iVar1 = fn_00125188();
  if (iVar1 != 0) {
    fn_00125150(1);
  }
  while( true ) {
    fn_00125694();
    iVar2 = fn_00125c30(param_1);
    fn_001257a8();
    if ((iVar2 != -0x375f3010 && iVar2 != -0x1f5f33f8) && iVar2 != -0x375f33fe) break;
    fn_0012d6a4(10000000,0);
  }
  if (iVar1 == 0) {
    iVar1 = fn_00125188();
    if (iVar1 != 0) {
      fn_00125150(1);
    }
  }
  else {
    iVar1 = fn_00125188();
    if (iVar1 == 0) {
      fn_00114788(1);
    }
  }
  iVar1 = fn_001147cc();
  if ((iVar1 != 0) && (iVar2 == -0x375f3004)) {
    iVar2 = 0;
  }
  return iVar2;
}



int fn_00115e64(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint local_30 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  iVar2 = fn_001147cc();
  if (iVar2 != 0) {
    fn_00125694();
    iVar2 = fn_001259a0(0x400,local_30);
    if (iVar2 < 0) {
      fn_00123b08(iVar2,0x115ea8);
    }
    fn_001257a8();
    if ((local_30[0] & 0xff) == 0) {
      return 0;
    }
  }
  iVar2 = fn_0013e078();
  if (iVar2 != 0) {
    fn_00125694();
    iVar2 = fn_001259a0(0x200,local_30);
    if (iVar2 < 0) {
      fn_00123b08(iVar2,0x115eec);
    }
    fn_001257a8();
    if ((char)local_30[0] == '\0') {
      return 0;
    }
  }
  fn_00114818(3);
  while( true ) {
    fn_00125694();
    iVar2 = fn_00125b80(param_1);
    fn_001257a8();
    if ((iVar2 != -0x375f3010 && iVar2 != -0x1f5f33f8) && iVar2 != -0x375f33fe) break;
    fn_0012d6a4(10000000,0);
  }
  if (iVar2 == 0) {
    local_28 = DAT_0089a558;
    uStack_24 = DAT_0089a55c;
    local_30[0] = 0;
    uVar1 = fn_001152bc(0,0,0);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = uVar1;
    }
  }
  return iVar2;
}



void fn_00115be0(void)

{
  int iVar1;
  
  fn_00114818(0xe);
  while( true ) {
    fn_00125694();
    iVar1 = fn_00125c00();
    fn_001257a8();
    if ((iVar1 != -0x375f3010 && iVar1 != -0x1f5f33f8) && iVar1 != -0x375f33fe) break;
    fn_0012d6a4(10000000,0);
  }
  return;
}



int fn_00115a44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_001147cc();
  if ((iVar1 == 0) && (iVar1 = fn_0013e078(), iVar1 == 0)) {
    iVar2 = -0x375f33fc;
  }
  else {
    iVar1 = fn_001147cc(iVar1);
    if (iVar1 != 0) {
      DAT_0089a541 = 1;
      fn_001250c8();
      fn_00124bf8();
      fn_00124c04();
    }
    fn_00125510(param_1);
    fn_001150b0(0);
    iVar1 = fn_00125188();
    if (iVar1 != 0) {
      fn_00125150(1);
    }
    while( true ) {
      fn_00125694();
      iVar2 = fn_00125b30(param_1,param_2,param_3,param_4);
      fn_001257a8();
      if ((iVar2 != -0x375f3010 && iVar2 != -0x1f5f33f8) && iVar2 != -0x375f33fe) break;
      fn_0012d6a4(10000000,0);
    }
    if (iVar1 == 0) {
      iVar1 = fn_00125188();
      if (iVar1 != 0) {
        fn_00125150(1);
      }
    }
    else {
      iVar1 = fn_00125188();
      if (iVar1 == 0) {
        fn_00114788(1);
      }
    }
    if (iVar2 < 0) {
      fn_0015e590(iVar2,0x115b8c);
    }
    fn_0011509c();
  }
  return iVar2;
}



void fn_00115a18(void)

{
  fn_0012542c(4,0,0,0,0,0);
  return;
}



void fn_001159fc(void)

{
  fn_00114838(0);
  fn_00115778(1);
  fn_0012542c(4,0,0,0,0,0);
  return;
}



int fn_001159c4(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_0089a541 == '\0') {
    return 0;
  }
  DAT_0089a541 = 0;
  iVar1 = fn_0013ddc8();
  if (iVar1 == 0) {
    return 0x202bf8;
  }
  piVar2 = (int *)fn_001502a4(iVar1);
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x1a0000;
  iVar1 = *piVar2;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}


