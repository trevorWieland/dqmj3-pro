#include "004c87f0_004cccd0a.h"



void fn_004ca82c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &DAT_00855f68;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x11] = 0;
  return;
}



int fn_004c9af8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = &DAT_00855f20;
  param_1[1] = 0;
  iVar1 = fn_004c63a8(param_1 + 2);
  iVar1 = fn_004d1288(iVar1 + 0x18);
  *(undefined **)(iVar1 + 0x58) = &DAT_00856cac;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  iVar1 = fn_00101a1c(iVar1 + 0x60,fn_0015f180,8,4);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x28) = 0;
  *(undefined2 *)(iVar1 + 0x2a) = 0;
  iVar1 = fn_004cad7c(iVar1 + 0x30);
  iVar1 = fn_004cc0c4(iVar1 + 0x418);
  iVar1 = fn_004ed164(iVar1 + 0x3c8);
  iVar1 = fn_004ed164(iVar1 + 0x14);
  iVar1 = fn_004ed164(iVar1 + 0x14);
  iVar1 = fn_0048cc04(iVar1 + 0x20,0);
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e14(0x68,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_0013ce04();
  }
  *(undefined4 *)(iVar1 + -0xc) = uVar2;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e14(0x68,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_0013ce04();
  }
  *(undefined4 *)(iVar1 + -8) = uVar2;
  return iVar1 + -0x8d8;
}



uint fn_004c87f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint extraout_r1;
  undefined1 auStack_48 [36];
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar4 = uVar2 - 0x100000;
  if (uVar4 < 0x3ff00000) {
    if (*(char *)(uVar2 + 0x10) != '\0') {
      if (DAT_008c0630 != 0) {
        uVar4 = 4;
        param_3 = 0;
      }
      uVar2 = fn_004ed068(*(undefined4 *)(param_1 + 4),uVar4,param_3);
LAB_004c8c4c:
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
    iVar3 = fn_004b7748();
    uVar2 = 0;
    if (((iVar3 != 0) && (uVar2 = *(uint *)(iVar3 + 0x90), 0xfffff < uVar2)) &&
       ((iVar3 = fn_004b7748(), iVar3 == 0 || (uVar2 = *(uint *)(iVar3 + 0x90), uVar2 < 0x40000000)
        ))) {
      iVar3 = fn_004b7748();
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar3 + 0x90);
      }
      fn_006d1198(auStack_48,uVar5);
      fn_004c62f0(param_1 + 8,auStack_48);
      fn_0045fbe8(auStack_48);
      if (DAT_008bf4f0 == '\0') {
        sVar1 = *(short *)(param_1 + 0xc);
        uVar2 = extraout_r1;
        if (sVar1 != 0) {
          uVar2 = (uint)*(byte *)(param_1 + 0x10);
        }
        if (sVar1 != 0 && uVar2 != 2) {
          *(short *)(param_1 + 0xaa) = sVar1;
        }
      }
      else {
        sVar1 = fn_00468fb0();
        *(short *)(param_1 + 0xaa) = sVar1 + 1;
      }
      if (DAT_008c0630 != 0) {
        fn_00468fb0(DAT_008c0630,2);
      }
      iVar3 = fn_004d52f0(DAT_008bf4f4,*(undefined2 *)(param_1 + 0xaa));
      if (iVar3 < 0) {
        uVar2 = fn_004ed098(*(undefined4 *)(param_1 + 4),iVar3);
        *(undefined4 *)(param_1 + 4) = 0;
        return uVar2;
      }
      iVar3 = fn_004c83a4(param_1);
      if (iVar3 < 0) {
        uVar2 = fn_004ed098(*(undefined4 *)(param_1 + 4),iVar3);
        *(undefined4 *)(param_1 + 4) = 0;
        return uVar2;
      }
      if (DAT_008bf4f0 == '\0') {
        if (*(int *)(param_1 + 0xa0) == 0) {
          uVar2 = fn_004ed098(*(undefined4 *)(param_1 + 4),&DAT_e0a14827);
          goto LAB_004c8c4c;
        }
        fn_004d02a0();
      }
      *(undefined1 *)(param_1 + 0xa8) = 4;
      fn_004ed0e4(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 4) = 0;
      DAT_008ed908 = *(undefined1 *)(param_1 + 0x10);
      DAT_008ed90b = *(byte *)(DAT_008c06a0 + 0x2d);
      DAT_008ed909 = *(undefined1 *)(param_1 + 0x11);
      if (*(char *)(param_1 + 0x18) != '\0') {
        DAT_008ed90b = DAT_008ed90b | 0x80;
      }
      DAT_008ed90a = (undefined1)*(undefined4 *)(param_1 + 0x14);
      DAT_008eda24 = *(undefined2 *)(param_1 + 0xe);
      DAT_008eda26 = *(undefined2 *)(param_1 + 0xc);
      DAT_008ed900 = *(undefined4 *)(DAT_008c06a0 + 0x10);
      DAT_008ed904 = *(undefined4 *)(DAT_008c06a0 + 0x38);
      DAT_008ed918 = fn_004ed478(*(undefined4 *)(DAT_008c06a0 + 0x1c));
      DAT_008ed920 = *(undefined4 *)(DAT_008bf4f4 + 4);
      DAT_008ed924 = DAT_008b6386;
      iVar3 = fn_004b7748();
      if (iVar3 == 0) {
        return 0;
      }
      uVar2 = *(int *)(iVar3 + 0x90) - 0x100000;
      if (uVar2 < 0x3ff00000) {
        DAT_008ed928 = DAT_008b6430;
        DAT_008ed92c = DAT_008b643c;
        DAT_008ed930 = DAT_008b6440;
        DAT_008ed934 = DAT_008b6387;
        DAT_008ed935 = DAT_008b6393;
        return (uint)DAT_008b6393;
      }
      return uVar2;
    }
  }
  if (DAT_008c0630 != 0) {
    uVar2 = DAT_008c0630;
  }
  return uVar2;
}


