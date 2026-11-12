#include "00185098_001854aca.h"



void fn_0018522c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_001851bc();
  if (iVar1 == 0) {
    fn_001921a8(param_1,DAT_008bf51c + 0xc820,0x1ca0,0xc820,1,&DAT_00192164);
  }
  return;
}



void fn_0018513c(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint unaff_r4;
  uint unaff_r6;
  uint uVar4;
  
  *(ushort *)(param_2 + (param_3 - 2)) = 0;
  if (param_3 != 0) {
    unaff_r4 = 0x1021;
    unaff_r6 = 0xffff;
  }
  param_1 = param_1 & 0xffff;
  uVar4 = 0;
  pbVar2 = param_2;
  if (param_3 != 0) {
    do {
      iVar3 = 4;
      do {
        if ((param_1 & 0x8000) == 0) {
          uVar1 = unaff_r6 & param_1 << 1;
        }
        else {
          uVar1 = (unaff_r4 ^ param_1 << 1) & 0xffff;
        }
        if ((uVar1 & 0x8000) == 0) {
          param_1 = unaff_r6 & uVar1 << 1;
        }
        else {
          param_1 = (unaff_r4 ^ uVar1 << 1) & 0xffff;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar4 = uVar4 + 1;
      param_1 = param_1 ^ *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (uVar4 < param_3);
  }
  *(ushort *)(param_2 + (param_3 - 2)) =
       (ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff;
  return;
}



void fn_00185098(byte *param_1,byte *param_2,int param_3,byte *param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 != param_2) {
    fn_0017821c(param_1,param_2,0x48);
  }
  if (param_3 == 0) {
    *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xfc01;
  }
  if (param_4 == (byte *)0x0) {
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
  }
  else if (param_1 + 0x48 != param_4) {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)param_4;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_4 + 4);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_4 + 8);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_4 + 0xc);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_4 + 0x10);
  }
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(ushort *)(param_1 + 0x5e) = 0;
  uVar1 = 0;
  uVar5 = 0;
  pbVar3 = param_1;
  do {
    iVar4 = 4;
    uVar2 = uVar1;
    do {
      if ((uVar2 & 0x8000) == 0) {
        uVar1 = (uVar2 & 0x7fff) << 1;
      }
      else {
        uVar1 = (uVar2 << 1 ^ 0x1021) & 0xffff;
      }
      if ((uVar1 & 0x8000) == 0) {
        uVar2 = (uVar1 & 0x7fff) << 1;
      }
      else {
        uVar2 = (uVar1 << 1 ^ 0x1021) & 0xffff;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar5 = uVar5 + 1;
    uVar1 = uVar2 ^ *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (uVar5 < 0x60);
  *(ushort *)(param_1 + 0x5e) = (ushort)((uVar1 & 0xff) << 8) | (ushort)(uVar2 >> 8);
  return;
}


