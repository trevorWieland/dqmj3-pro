#include "001ae660_001b5afc.h"

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


void fn_001b5afc(void)

{
  int *piVar1;
  
  piVar1 = DAT_00899eb8;
  DAT_00899eb4 = 0;
  svc_0x24();
  if (*DAT_00899eb8 < 0) {
    fn_0015e294();
  }
  *(undefined1 *)(piVar1 + 1) = 1;
  piVar1 = DAT_00899eb8;
  fn_0015e304(DAT_00899eb8);
  if (*piVar1 != 0) {
    svc_0x23();
    *piVar1 = 0;
  }
  piVar1 = DAT_00899eb8;
  fn_0015e304(DAT_00899eb8);
  if (*piVar1 != 0) {
    svc_0x23();
    *piVar1 = 0;
  }
  fn_007407d4(DAT_00899eb8);
  return;
}



void fn_001b4c18(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar3;
  
  if (param_3 != 0) {
    unaff_r5 = 0x1021;
    unaff_r4 = 0xffff;
  }
  param_1 = param_1 & 0xffff;
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      iVar2 = 4;
      do {
        if ((param_1 & 0x8000) == 0) {
          uVar1 = unaff_r4 & param_1 << 1;
        }
        else {
          uVar1 = (unaff_r5 ^ param_1 << 1) & 0xffff;
        }
        if ((uVar1 & 0x8000) == 0) {
          param_1 = unaff_r4 & uVar1 << 1;
        }
        else {
          param_1 = (unaff_r5 ^ uVar1 << 1) & 0xffff;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar3 = uVar3 + 1;
      param_1 = param_1 ^ *param_2;
      param_2 = param_2 + 1;
    } while (uVar3 < param_3);
  }
  return;
}



void fn_001b10b8(uint param_1)

{
  if (DAT_008bf604 != 0) {
    *(uint *)(DAT_008bf604 + 0xc4) = 1 << (param_1 & 0xff) | *(uint *)(DAT_008bf604 + 0xc4);
  }
  return;
}



int fn_001b01a4(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 4;
  if (((DAT_008bf50f != '\0') && (iVar1 = fn_00184b48((char *)&DAT_001b0294), iVar1 != 0)) &&
     (iVar3 = fn_00184cd0((char *)&DAT_001b02ac,(char *)&DAT_001b0294,0xffffffff), iVar3 == 0)) {
    iVar1 = fn_00192114();
    iVar3 = 4;
    *(uint *)(iVar1 + 0xc4) = *(uint *)(iVar1 + 0xc4) & 4;
    iVar1 = fn_00191f08();
    if (((iVar1 != 0) &&
        ((iVar1 = fn_00191f08(), iVar1 == 0 ||
         (iVar1 = fn_00192114(), *(char *)(iVar1 + 0xc0) == '\0')))) && (DAT_008bf51c != 0)) {
      puVar2 = (undefined4 *)(DAT_008bf51c + 0xe4d4);
      *(undefined4 *)(DAT_008bf51c + 0xe4c8) = 0;
      *puVar2 = &LAB_001c0bcc;
      iVar3 = DAT_008bf514;
      *(undefined1 *)(DAT_008bf514 + 0x12) = 0;
      *(undefined1 *)(iVar3 + 0x13) = 1;
      fn_00184c6c(iVar3,fn_001bf270);
      iVar3 = fn_001851bc();
      if (iVar3 == 10) {
        iVar3 = fn_0018501c();
      }
    }
  }
  return iVar3;
}



void fn_001afb18(undefined4 param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  fn_001b0398();
  ppuVar1 = (undefined **)fn_001af8e0();
  if (DAT_008bf520 != 0) {
    ppuVar1 = &PTR_FUN_007e09d0;
  }
  puVar2 = (undefined4 *)(*(code *)*ppuVar1)(param_1,param_2);
  *puVar2 = ppuVar1;
  fn_001ad654(puVar2 + 0xb,(char *)&DAT_001afd54,0x104);
  DAT_008bf514 = puVar2;
  puVar2 = (undefined4 *)fn_001c04c4(param_1,param_2,0xe560);
  DAT_008bf51c = puVar2;
  *(undefined1 *)(puVar2 + 0x3930) = 0;
  *(undefined1 *)((int)puVar2 + 0xe4c1) = 0;
  puVar2[0x3936] = 0;
  puVar2[0x3937] = 0;
  puVar2[0x3935] = 0;
  *puVar2 = 0x474f4643;
  puVar2[1] = puVar2[1] & 0x1ff | 0x100;
  *(undefined1 *)(puVar2 + 1) = 0;
  fn_00301f50(puVar2 + 2,0x23f0);
  puVar3 = puVar2 + 0x8fe;
  *puVar3 = 0x45484643;
  *(undefined2 *)(puVar2 + 0x8ff) = 0xffff;
  *(undefined2 *)((int)puVar2 + 0x23fe) = 0xffff;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    *(undefined4 *)((int)puVar3 + iVar4 * 0xe + 8) = 0;
    *(undefined4 *)((int)puVar3 + iVar4 * 0xe + 0xc) = 0;
    *(undefined4 *)((int)puVar3 + iVar4 * 0xe + 0x10) = 0;
    *(undefined2 *)((int)puVar3 + iVar4 * 0xe + 0x14) = 0;
    *(ushort *)((int)puVar3 + iVar4 * 0xe + 0x12) =
         *(ushort *)((int)puVar3 + iVar4 * 0xe + 0x12) | 0x7fff;
    *(undefined2 *)((int)puVar3 + iVar4 * 0xe + 0x14) = 0x7fff;
    iVar4 = iVar5;
  } while (iVar5 < 3000);
  fn_00301f50(puVar2 + 0x3204,0xe);
  fn_0018513c(0,puVar2,0xc820);
  iVar4 = fn_001c04c4(param_1,param_2,0x2a2c);
  DAT_008bf518 = iVar4;
  *(undefined4 *)(iVar4 + 0x2a04) = 0;
  *(undefined1 *)(iVar4 + 0x2a08) = 0;
  *(undefined4 *)(iVar4 + 0x2a10) = 0;
  *(undefined4 *)(iVar4 + 0x2a18) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x2a1c) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x2a20) = 0;
  *(undefined4 *)(iVar4 + 0x2a24) = 0;
  *(undefined4 *)(iVar4 + 0x2a28) = 0;
  fn_00301f50(puVar2 + 0x3208,0x1ca0);
  puVar2[0x3208] = 0x41524643;
  iVar4 = 0;
  DAT_008e970c = 6;
  do {
    fn_001af874(&DAT_008e9710 + iVar4 * 0x5c,iVar4);
    fn_001af844(&DAT_008e971c + iVar4 * 0x5c,iVar4);
    fn_001af0d8(&DAT_008e9710 + iVar4 * 0x5c);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  DAT_008bf50c = 0;
  return;
}



undefined4 fn_001af0f4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 auStack_240 [272];
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar4 = auStack_240;
  fn_001930b8();
  local_20 = 0;
  local_1c = 0;
  fn_00102388(&local_20);
  while ((iVar1 = fn_0010239a(param_1,0x105,&local_20), iVar1 != 0 &&
         (iVar2 = fn_00101ce8(puVar4,param_1,iVar1,&local_20), iVar2 != 0))) {
    puVar4 = puVar4 + 1;
    param_1 = param_1 + iVar1;
  }
  *puVar4 = 0;
  uVar3 = fn_0044d6e4(auStack_240);
  if (((int)uVar3 < 0) &&
     ((((uVar3 & 0x3fc00) != 0x4400 || ((uVar3 & 0x3ff) < 100)) || (0xb3 < (uVar3 & 0x3ff))))) {
    return 0xb;
  }
  return 0;
}



undefined4 fn_001af038(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 4;
  iVar1 = fn_00191f08();
  if ((iVar1 != 0) &&
     ((iVar1 = fn_00191f08(), iVar1 == 0 ||
      (iVar1 = fn_00192114(), *(char *)(iVar1 + 0xc0) == '\0')))) {
    if (DAT_008bf51c != 0) {
      puVar2 = (undefined4 *)(DAT_008bf51c + 0xe4d4);
      *(undefined4 *)(DAT_008bf51c + 0xe4c8) = param_1;
      *puVar2 = &LAB_001c0bcc;
      iVar1 = DAT_008bf514;
      *(undefined1 *)(DAT_008bf514 + 0x12) = 0;
      *(undefined1 *)(iVar1 + 0x13) = 1;
      fn_00184c6c(iVar1,fn_001bf270);
      uVar3 = fn_001851bc();
    }
  }
  return uVar3;
}



undefined4 fn_001ae660(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint local_26c [5];
  undefined2 auStack_258 [2];
  int local_254;
  int local_250 [134];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  
  uVar5 = 3;
  local_28 = param_1;
  iVar1 = fn_001b02c8();
  if (iVar1 == 0) {
    local_26c[0] = 0;
    local_26c[1] = 0;
    local_26c[2] = 0;
    local_26c[3] = 0;
    local_26c[4] = 0;
    pcVar4 = (char *)&DAT_001ae7f8;
    puVar3 = auStack_258;
    local_38 = 0;
    local_34 = 0;
    fn_00102388(&local_38);
    while ((iVar1 = fn_0010239a(pcVar4,0x105,&local_38), iVar1 != 0 &&
           (iVar2 = fn_00101ce8(puVar3,pcVar4,iVar1,&local_38), iVar2 != 0))) {
      puVar3 = puVar3 + 1;
      pcVar4 = pcVar4 + iVar1;
    }
    *puVar3 = 0;
    local_26c[3] = 0;
    local_26c[4] = 0;
    local_26c[1] = 0;
    local_26c[2] = 0;
    iVar1 = fn_0014d6cc(local_26c,auStack_258,1);
    if (-1 < iVar1) {
      iVar1 = fn_001560d8(local_26c,local_250);
      if (iVar1 < 0) {
        fn_0015e590(iVar1,0x1ae754);
      }
      iVar1 = fn_0014d9ec(local_26c,&local_254,local_28,local_250[0]);
      if ((-1 < iVar1) && (local_254 == local_250[0])) {
        uVar5 = 0;
      }
      if ((local_26c[0] & 0xfffffffe) != 0) {
        if ((local_26c[0] & 1) != 0) {
          fn_00146594();
        }
        fn_0015cf8c(local_26c[0] & 0xfffffffe);
        local_26c[0] = 0;
      }
    }
    if (iVar1 < 0) {
      fn_0015e590(iVar1,0x1ae7bc);
    }
    if ((local_26c[0] & 0xfffffffe) != 0) {
      if ((local_26c[0] & 1) != 0) {
        fn_00146594();
      }
      fn_0015cf8c(local_26c[0] & 0xfffffffe);
    }
  }
  return uVar5;
}


