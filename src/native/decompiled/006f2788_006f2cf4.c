#include "006f2788_006f2cf4.h"



undefined4 fn_006f2cf4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  if (*(char *)(param_2 + 0x5c) < '\x01') {
    iVar2 = 0;
    if (*(char *)(param_2 + 0x120) != '\0') {
      do {
        pbVar3 = (byte *)(param_2 + 0x120) + iVar2 * 2 + 4;
        iVar1 = fn_00163a00((int)*(short *)pbVar3);
        if ((iVar1 == param_3) && (iVar1 = fn_00692050((int)*(short *)pbVar3), iVar1 != 0)) {
          return 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(byte *)(param_2 + 0x120));
    }
  }
  return 0;
}



bool fn_006f2afc(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar3 == 0) {
    uVar7 = 0x14;
  }
  else {
    uVar7 = 0x10;
  }
  iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar3 == 0) {
    uVar8 = 0x18;
  }
  else {
    uVar8 = 0x14;
  }
  iVar3 = 0;
  iVar9 = 0;
  if (uVar7 < uVar8) {
    do {
      iVar4 = fn_006f14a4(param_1,uVar7);
      if (iVar4 != 0) {
        uVar5 = 0;
        do {
          uVar6 = 0;
          do {
            if ((&DAT_007eff00)[uVar6 * 2] == *(short *)(iVar4 + uVar5 * 2 + 0x284)) {
              sVar1 = (&DAT_007eff02)[uVar6 * 2];
              goto LAB_006f2bac;
            }
            uVar6 = uVar6 + 1 & 0xff;
          } while (uVar6 < 0xb);
          uVar5 = uVar5 + 1 & 0xff;
        } while (uVar5 < 0x4c);
        sVar1 = 100;
LAB_006f2bac:
        iVar9 = (int)(short)(sVar1 + (short)iVar9);
        iVar3 = (int)(short)((short)iVar3 + 1);
      }
      uVar7 = (uint)(char)((char)uVar7 + '\x01');
    } while ((int)uVar7 < (int)uVar8);
    if (iVar3 < 1) goto LAB_006f2bec;
    sVar1 = fn_00300f74(iVar9,iVar3);
  }
  else {
LAB_006f2bec:
    sVar1 = 0;
  }
  iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar3 == 0) {
    uVar7 = 0x10;
  }
  else {
    uVar7 = 0x14;
  }
  iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar3 == 0) {
    uVar8 = 0x14;
  }
  else {
    uVar8 = 0x18;
  }
  iVar3 = 0;
  iVar9 = 0;
  if (uVar7 < uVar8) {
    do {
      iVar4 = fn_006f14a4(param_1,uVar7);
      if (iVar4 != 0) {
        uVar5 = 0;
        do {
          uVar6 = 0;
          do {
            if ((&DAT_007eff00)[uVar6 * 2] == *(short *)(iVar4 + uVar5 * 2 + 0x284)) {
              sVar2 = (&DAT_007eff02)[uVar6 * 2];
              goto LAB_006f2c98;
            }
            uVar6 = uVar6 + 1 & 0xff;
          } while (uVar6 < 0xb);
          uVar5 = uVar5 + 1 & 0xff;
        } while (uVar5 < 0x4c);
        sVar2 = 100;
LAB_006f2c98:
        iVar9 = (int)(short)(sVar2 + (short)iVar9);
        iVar3 = (int)(short)((short)iVar3 + 1);
      }
      uVar7 = (uint)(char)((char)uVar7 + '\x01');
    } while ((int)uVar7 < (int)uVar8);
    if (0 < iVar3) {
      sVar2 = fn_00300f74(iVar9,iVar3);
      goto LAB_006f2cdc;
    }
  }
  sVar2 = 0;
LAB_006f2cdc:
  return sVar2 <= sVar1;
}



undefined4 fn_006f2ac8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f30a8(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7b) < '\x01')) {
    return 0;
  }
  return 1;
}



undefined4 fn_006f2a94(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f3500(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7e) < '\x01')) {
    return 0;
  }
  return 1;
}



undefined4 fn_006f2a60(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f31f4(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7c) < '\x01')) {
    return 0;
  }
  return 1;
}



undefined4 fn_006f2a2c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f34d4(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7f) < '\x01')) {
    return 0;
  }
  return 1;
}



undefined4 fn_006f29f8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f34b4(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7d) < '\x01')) {
    return 0;
  }
  return 1;
}



bool fn_006f29d4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00182944(0x12);
  return *(char *)(param_2 + 0x6d) <= iVar1;
}



bool fn_006f29b0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00182924(0x12);
  return iVar1 <= *(char *)(param_2 + 0x6d);
}



uint fn_006f295c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  if (*(char *)(param_2 + 0x120) != '\0') {
    do {
      iVar1 = fn_006924c4((int)*(short *)((byte *)(param_2 + 0x120) + iVar2 * 2 + 4));
      if (0 < iVar1) {
        uVar3 = 1;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_2 + 0x120));
  }
  return uVar3 ^ 1;
}



bool fn_006f2910(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00182944(3);
  return *(char *)(param_2 + 0x5e) <= iVar1;
}



bool fn_006f28ec(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00182924(3);
  return iVar1 <= *(char *)(param_2 + 0x5e);
}



bool fn_006f28c8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00182924(10);
  return iVar1 <= *(char *)(param_2 + 0x65);
}



uint fn_006f2840(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = 0;
  if (*(char *)(param_2 + 0x120) != '\0') {
    do {
      iVar3 = (int)*(short *)((byte *)(param_2 + 0x120) + iVar2 * 2 + 4);
      iVar1 = fn_001639e4(iVar3);
      if ((iVar1 == 0x2a) && (iVar1 = fn_00691af0(iVar3,0), iVar1 == 5)) {
        uVar4 = 1;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_2 + 0x120));
  }
  return uVar4 ^ 1;
}



bool fn_006f2808(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00182944(2);
  return *(char *)(param_2 + 0x5d) <= iVar1;
}



bool fn_006f27e4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00182924(2);
  return iVar1 <= *(char *)(param_2 + 0x5d);
}



bool fn_006f27ac(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00182944(4);
  return *(char *)(param_2 + 0x5f) <= iVar1;
}



bool fn_006f2788(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00182924(4);
  return iVar1 <= *(char *)(param_2 + 0x5f);
}


