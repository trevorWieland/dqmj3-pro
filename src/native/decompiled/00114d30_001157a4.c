#include "00114d30_001157a4.h"

static void svc_0x18(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x18 }
#endif
}

static void svc_0x19(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x19 }
#endif
}

static void svc_0x3(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x3 }
#endif
}


int fn_001157a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_001147cc();
  if ((iVar1 == 0) && (iVar1 = fn_0013e078(), iVar1 == 0)) {
    iVar2 = -0x375f33fc;
  }
  else {
    iVar1 = fn_0013e078(iVar1);
    if (iVar1 == 0) {
      iVar1 = fn_001147cc();
      if (iVar1 != 0) {
        DAT_0089a541 = 1;
        fn_001250c8();
        fn_00124bf8();
        fn_00124c04();
        iVar1 = fn_00189e18();
        if (iVar1 != 0) {
          fn_00123a2c();
          DAT_0089a544 = 1;
        }
        fn_001150b0(0);
        fn_00125d60();
      }
    }
    else {
      iVar1 = fn_00189e18();
      if (iVar1 != 0) {
        fn_00123a2c();
        DAT_0089a544 = 1;
      }
      fn_001150b0(0);
    }
    iVar1 = fn_00125188();
    if (iVar1 != 0) {
      fn_00125150(1);
    }
    while( true ) {
      fn_00125694();
      iVar2 = fn_00125ae0(param_1,param_2,param_3,param_4);
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
      fn_0015e590(iVar2,0x115948);
    }
    fn_0011509c();
    iVar1 = fn_001147cc();
    if (iVar1 != 0) {
      iVar2 = fn_00125864(param_1);
    }
    iVar1 = fn_0013e078();
    if ((iVar1 != 0) && (iVar1 = fn_001251b8(), iVar1 == 0)) {
      svc_0x3();
    }
  }
  return iVar2;
}



void fn_00115778(undefined4 param_1)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_1;
  fn_0012542c(7,auStack_8,4,0,0,0);
  return;
}



void fn_001156f4(undefined4 param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  fn_00125694();
  iVar1 = fn_00125a70(param_1,local_2c,&local_28,&local_24,local_20);
  if (iVar1 < 0) {
    fn_00123b08(iVar1,0x115738);
  }
  fn_001257a8();
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = local_2c[0];
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_28;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_24;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_20[0];
  }
  return;
}



void fn_00115288(undefined4 param_1,undefined1 param_2)

{
  undefined4 local_10;
  undefined1 local_c;
  
  local_10 = param_1;
  local_c = param_2;
  fn_0012542c(5,&local_10,8,0,0,0);
  return;
}



int fn_00115128(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  
  fn_00125694();
  local_30 = auStack_20;
  iVar1 = fn_00125a70(0xffffffff,auStack_28,auStack_24,&local_2c);
  if (iVar1 < 0) {
    fn_00123b08(iVar1,0x115164);
  }
  fn_001257a8();
  iVar1 = fn_001147cc();
  if (iVar1 != 0) {
    while( true ) {
      fn_00125694();
      iVar1 = fn_001259a0(local_2c,&local_30);
      if (iVar1 < 0) {
        fn_00123b08(iVar1,0x1151a0);
      }
      fn_001257a8();
      if (((uint)local_30 & 0xff) != 0) break;
      fn_0012d6a4(10000000,0);
    }
    DAT_0089a541 = 1;
    fn_001250c8();
    fn_00125864(local_2c);
    fn_00124bf8();
    fn_00124c04();
  }
  iVar1 = fn_00189e18();
  if (iVar1 != 0) {
    fn_00123a2c();
    DAT_0089a544 = 1;
  }
  fn_001150b0(0);
  fn_00125d60();
  fn_00125694();
  iVar1 = fn_00125a1c(param_1,param_2,param_3);
  if (iVar1 < 0) {
    fn_00123b08(iVar1,0x115240);
  }
  fn_001257a8();
  fn_0011509c();
  return iVar1;
}



void fn_001150b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    if (DAT_0089a543 == '\0') {
      return;
    }
    DAT_0089a543 = 0;
    iVar1 = fn_00125074();
    iVar3 = -0x275fd5fb;
    if (iVar1 != -0x275fd5fb) {
      iVar3 = -0x26ffe409;
    }
    if (iVar1 == -0x275fd5fb || iVar1 == iVar3) {
      return;
    }
    uVar2 = 0x115110;
  }
  else {
    DAT_0089a543 = 1;
    iVar1 = fn_0012500c();
    uVar2 = 0x1150d4;
  }
  if (iVar1 < 0) {
    fn_00123b08(iVar1,uVar2);
    return;
  }
  return;
}



void fn_0011509c(void)

{
  DAT_0089a569 = 0;
  return;
}



void fn_00114d44(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  uint local_28;
  undefined4 uStack_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  fn_00101a1c(&local_1c,&LAB_00125144,4,3);
  local_1c = DAT_008eac10;
  local_18 = DAT_008eac14;
  local_14 = DAT_008eac18;
joined_r0x00114d88:
  do {
    while( true ) {
      while( true ) {
        if (DAT_008bfaf8 != '\0') {
          return;
        }
        local_28 = 0xffffffff;
        uStack_24 = 0xffffffff;
        iVar1 = fn_0011c0e8(&local_20,&local_1c,3,0);
        if (iVar1 < 0) {
          fn_00123b08(iVar1,0x114db4);
        }
        if (DAT_008bfaf8 != '\0') {
          return;
        }
        iVar1 = fn_0013c3d8(&DAT_008bfb0c);
        if (iVar1 == 0) break;
        fn_0012d6a4(10000000,0);
        svc_0x18();
        if ((int)(&DAT_008eac10)[local_20] < 0) {
          fn_0015e294();
        }
      }
      svc_0x19();
      if ((int)(&DAT_008eac10)[local_20] < 0) {
        fn_0015e294();
      }
      if (local_20 != 2) break;
      uVar2 = 0xc;
code_r0x00114f54:
      fn_001251a8(uVar2);
      fn_0015dfc0(&DAT_008bfb0c);
    }
    if (local_20 != 1) {
      if (local_20 == 0) {
        fn_00125694();
        uVar2 = fn_001252e8();
        iVar1 = fn_00125bbc(uVar2,&local_28);
        fn_001257a8();
        if (-1 < iVar1) {
          uVar3 = local_28 & 0xff;
          switch(uVar3) {
          default:
            fn_00146594();
            goto joined_r0x00114d88;
          case 1:
          case 2:
            iVar1 = fn_00125844();
            if (iVar1 == 0) {
              uVar2 = 1;
              if ((local_28 & 0xff) != 1) {
                uVar2 = 2;
              }
              fn_00125854(uVar2);
            }
            if ((DAT_008bfafc == (code *)0x0) || (iVar1 = (*DAT_008bfafc)(DAT_008bfb00), iVar1 != 0)
               ) {
              if ((local_28 & 0xff) == 1) {
                uVar2 = 6;
              }
              else {
                uVar2 = 7;
              }
              goto code_r0x00114f54;
            }
            goto joined_r0x00114d88;
          case 3:
          case 4:
          case 5:
          case 6:
            bVar4 = uVar3 == 3;
            if (bVar4) {
              uVar3 = 1;
            }
            if (bVar4 || uVar3 == 4) {
LAB_00114f9c:
              fn_0012573c(uVar3);
            }
            else {
              if (uVar3 == 5) {
                uVar3 = 2;
                goto LAB_00114f9c;
              }
              if (uVar3 == 6) {
                uVar3 = 3;
                goto LAB_00114f9c;
              }
            }
            if (DAT_008bfafc != (code *)0x0) goto LAB_00115000;
            goto joined_r0x00114d88;
          case 7:
            fn_001251e8();
            fn_0012572c(1);
            fn_00115bd0(1);
            break;
          case 8:
            fn_00125230();
            fn_00115bc0(1);
            break;
          case 9:
            fn_00115bc0(0);
            goto joined_r0x00114d88;
          case 10:
            fn_00125694();
            iVar1 = fn_00125968(0,0x40);
            if (iVar1 < 0) {
              fn_00123b08(iVar1,0x11503c);
            }
            fn_001257a8();
            goto joined_r0x00114d88;
          case 0xb:
            fn_00115bd0(1);
            goto joined_r0x00114d88;
          }
          if (DAT_008bfafc != (code *)0x0) {
LAB_00115000:
            (*DAT_008bfafc)(DAT_008bfb00);
          }
        }
      }
      goto joined_r0x00114d88;
    }
    if ((DAT_008bfafc == (code *)0x0) || (iVar1 = (*DAT_008bfafc)(DAT_008bfb00), iVar1 != 0)) {
      fn_0015dfc0(&DAT_008bfb0c);
    }
  } while( true );
}



void fn_00114d30(void)

{
  DAT_0089a571 = 1;
  return;
}


