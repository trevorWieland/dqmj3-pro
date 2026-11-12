#include "0044fc98_004500e4.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


int fn_004500e4(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_0089a613 != '\0') {
    if (DAT_0089a614 != '\0') {
      iVar1 = fn_00454af0();
      if (iVar1 < 0) {
        return iVar1;
      }
      DAT_0089a615 = 0;
      DAT_0089a614 = '\0';
    }
    iVar1 = fn_00452864();
    if (iVar1 < 0) {
      return iVar1;
    }
    fn_00452630();
    DAT_0089a613 = '\0';
  }
  return iVar1;
}



int fn_00450058(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_0089a614 == '\0') {
    iVar1 = -0x375ef410;
  }
  else if (DAT_0089a615 == '\0') {
    fn_00170704(&DAT_008e3230);
    iVar1 = fn_00454ad0(0);
    if (iVar1 < 0) {
      fn_001707b4(&DAT_008e3230);
      return iVar1;
    }
    fn_0012d6a4(16000000,0);
    DAT_0089a615 = '\x01';
    fn_001707b4(&DAT_008e3230);
  }
  return iVar1;
}



int fn_00450024(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0;
  iVar1 = fn_00452968(&local_10);
  if (-1 < iVar1) {
    *param_1 = local_10;
  }
  return iVar1;
}



uint fn_00450018(uint param_1,uint param_2)

{
  return param_2 | (param_1 & 0xff0fffff) << 8;
}



undefined1 * fn_0044ff38(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)0xc8a10bf0;
  if ((DAT_0089a613 != '\0') || (iVar1 = fn_00452620(), iVar1 != 0)) {
    fn_00170704(&DAT_008e3230);
    puVar2 = (undefined1 *)0x0;
    if (param_1 != 0) {
      iVar1 = fn_00452620();
      if (iVar1 == 0 && DAT_0089a617 == '\0') {
        puVar2 = &DAT_c8810bea;
        goto LAB_0044ffd8;
      }
      puVar2 = (undefined1 *)fn_00452e94(0xe);
    }
    if (DAT_0089a614 == '\0') {
      fn_001707b4(&DAT_008e3230);
      return (undefined1 *)0xc8a10bf0;
    }
    if (DAT_0089a615 != '\0') {
      puVar2 = (undefined1 *)fn_00454ab0(0);
      if ((int)puVar2 < 0) {
LAB_0044ffd8:
        fn_001707b4(&DAT_008e3230);
        return puVar2;
      }
      DAT_0089a615 = '\0';
    }
    fn_001707b4(&DAT_008e3230);
  }
  return puVar2;
}



int fn_0044fd88(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_28;
  int local_24;
  
  iVar3 = -0x375ef410;
  if ((DAT_0089a613 != '\0') || (iVar1 = fn_00452620(), iVar1 != 0)) {
    fn_00170704(&DAT_008e3230);
    if (DAT_0089a614 == '\0') {
      fn_001707b4(&DAT_008e3230);
      return -0x375ef410;
    }
    if (DAT_0089a615 == '\0') {
      iVar1 = fn_00454ad0(0);
      if (iVar1 < 0) {
        fn_001707b4(&DAT_008e3230);
        return iVar1;
      }
      fn_0012d6a4(16000000,0);
      DAT_0089a615 = '\x01';
    }
    if (param_2 == 0) {
      iVar4 = 0;
      local_28 = 0;
      iVar1 = fn_004529a4(&local_28);
      uVar2 = 0;
      if (-1 < iVar1) {
        uVar2 = local_28;
      }
      if (param_1 == 0) {
        iVar1 = fn_00452e58(0xb);
      }
      else {
        iVar1 = fn_00452e58(0xc);
      }
      while( true ) {
        svc_0x24();
        if (-((int)uVar2 >> 0x1f) != 0) {
          fn_0015e294(uVar2,-((int)uVar2 >> 0x1f),1000000000,0);
        }
        if (((uVar2 & 0x3ff) != 0x3fe) || (fn_00452774(&local_24), local_24 == 1))
        goto LAB_0044ff04;
        if (0x3c < iVar4) break;
        iVar4 = iVar4 + 1;
      }
      iVar1 = iVar3;
LAB_0044ff04:
      if (uVar2 != 0) {
        svc_0x23();
      }
    }
    else if (param_1 == 0) {
      iVar1 = fn_00452e58(0xb);
    }
    else {
      iVar1 = fn_00452e58(0xc);
    }
    fn_001707b4(&DAT_008e3230);
    iVar3 = iVar1;
  }
  return iVar3;
}



int fn_0044fd18(void)

{
  int iVar1;
  
  fn_00452610();
  iVar1 = 0;
  if (DAT_0089a613 == '\0') {
    iVar1 = fn_004528c4();
    if (iVar1 < 0) {
      return iVar1;
    }
    fn_00452888();
    iVar1 = fn_0010b500();
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_0089a614 = 1;
    fn_001237bc();
    DAT_0089a617 = fn_00453c94();
    fn_0013c674();
    DAT_0089a613 = '\x01';
  }
  return iVar1;
}



undefined4 fn_0044fcfc(void)

{
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  fn_0051e230(local_8);
  return local_8[0];
}



uint fn_0044fc98(int *param_1)

{
  uint uVar1;
  int local_10;
  
  local_10 = 0;
  if (*param_1 == 0) {
    uVar1 = fn_00158ef8(&local_10);
    if (-1 < (int)uVar1) {
      *param_1 = local_10;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xe0a0183b;
  }
  if (((uVar1 & 0x7e00000) != 0x600000) && ((int)uVar1 < 0)) {
    fn_0015e294(uVar1);
  }
  return uVar1;
}


