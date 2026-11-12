#include "001b92b8_001ba490.h"



void fn_001ba490(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  puVar1 = (undefined4 *)fn_007410e0();
  iVar2 = fn_00740b44(param_1);
  if (iVar2 == 0) {
    iVar2 = fn_001c0e78(param_1);
    iVar3 = iVar2;
    if (iVar2 != 0) {
      iVar3 = iVar2 + 0x100;
    }
    if (iVar2 == 0 || iVar3 == -0x31) {
      iVar4 = fn_00740b6c(param_1,(char *)&DAT_001ba528,puVar1[2],0xc,&local_14);
      iVar3 = iVar4;
      if (iVar4 == 0) {
        iVar3 = local_14;
      }
      if (iVar4 != 0 || iVar3 != 0xc) {
        iVar2 = -0x386;
      }
    }
  }
  (*(code *)*puVar1)(iVar2,puVar1[1],param_1);
  fn_007407d4(puVar1);
  fn_00740adc(param_1);
  return;
}



undefined4 fn_001ba474(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_007421a0(param_1,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_001ba430(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  iVar2 = fn_007432e4(param_1);
  if (iVar2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    fn_00173d1c(param_1,uVar1);
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_001ba420(void)

{
  fn_007431cc();
  return 0;
}



undefined4 fn_001ba40c(int param_1)

{
  fn_00173d1c(param_1,param_1 + 0x38);
  return 1;
}



void fn_001ba3b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_001851bc();
  if (iVar1 == 0) {
    fn_001bfa88(param_1,fn_001bedd4);
    return;
  }
  if (*(code **)(DAT_008bf51c + 0xe4dc) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001ba3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_008bf51c + 0xe4dc))(param_1,0);
  return;
}



void fn_001b97f0(int param_1,int param_2,int param_3)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  if (param_3 < 1) {
    return;
  }
  while (sVar1 = *(short *)(param_2 + iVar4 * 2), *(short *)(param_1 + iVar4 * 2) = sVar1,
        sVar1 != 0) {
    iVar4 = iVar4 + 1;
    if (param_3 <= iVar4) {
      return;
    }
  }
  uVar5 = param_3 - (iVar4 + 1);
  if ((int)uVar5 < 1) {
    return;
  }
  puVar2 = (undefined2 *)(param_1 + (iVar4 + 1) * 2);
  puVar3 = puVar2 + -1;
  if ((uVar5 & 1) != 0) {
    *puVar2 = 0;
    puVar3 = puVar2;
  }
  iVar4 = (int)uVar5 >> 1;
  if (iVar4 == 0) {
    return;
  }
  do {
    puVar3[1] = 0;
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 2;
    *puVar3 = 0;
  } while (iVar4 != 0);
  return;
}



undefined4 fn_001b9714(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  iVar1 = fn_0074234c(*(undefined4 *)(iVar1 + 4));
  if (iVar1 == 0) {
    fn_00158128(param_1,&DAT_001b97b8,0xffffffff);
  }
  else if (iVar1 == 1) {
    fn_00158128(param_1,(char *)&DAT_001b97c0,0xffffffff);
  }
  else {
    if (iVar1 != 2) {
      uVar2 = fn_001581d0(param_1,(char *)&DAT_001b97a4);
      return uVar2;
    }
    fn_00158128(param_1,(char *)&DAT_001b97c8,0xffffffff);
  }
  return 1;
}



void fn_001b96c4(int param_1)

{
  if (param_1 != 0) {
    fn_00166824(&DAT_008bf6cc,param_1);
    fn_00166824(&DAT_008e9a80,param_1);
    DAT_008e9a88 = 0;
  }
  DAT_008bf6c4 = param_1 != 0;
  return;
}



undefined4 fn_001b9684(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xfffffe6d;
  }
  uVar1 = fn_002febd8();
  if (uVar1 < 0x80) {
    fn_002fec40(s_http___wi_fi_infralib_square_eni_008bf6d4,param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffe6b;
  }
  return uVar2;
}



void fn_001b963c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    DAT_008e9a89 = *param_1;
    DAT_008e9a8d = param_1[1];
    DAT_008e9a91 = param_1[2];
    DAT_008e9a95 = param_1[3];
  }
  DAT_008bf6c5 = param_1 != (undefined4 *)0x0;
  return;
}



undefined4 * fn_001b93b8(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  puVar2 = (undefined4 *)fn_00145b00(0x20,&DAT_00812c8c);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_007bfd30;
    *(undefined1 *)((int)puVar2 + 5) = 1;
    puVar2[2] = 0;
    puVar2[3] = 0x3f800000;
    uVar1 = fn_006afcbc(*(undefined4 *)(DAT_008977e0 + 0x1c),param_1);
    *(undefined2 *)(puVar2 + 4) = uVar1;
    uVar1 = fn_006afcd4(*(undefined4 *)(DAT_008977e0 + 0x1c),param_1);
    *(undefined2 *)((int)puVar2 + 0x12) = uVar1;
    puVar2[5] = 0;
    puVar3 = (undefined1 *)fn_00145b00(0x20,&DAT_00812c8c);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 1;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 4) = 0xffffffff;
      puVar3[0x1c] = 0;
      *(undefined4 *)(puVar3 + 8) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0xc) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
      pcVar4 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),param_1);
      iVar5 = 0;
      do {
        if ((&DAT_007bfc9c)[iVar5 * 0x14] == *pcVar4) {
          uVar8 = fn_00154ac8((&DAT_007bfcac)[iVar5 * 5]);
          uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
          bVar7 = (int)uVar8 != 0;
          if (bVar7) {
            uVar6 = 0x7928;
          }
          puVar3[0x1c] = (char)uVar8;
          if (!bVar7) {
            *(undefined4 *)(puVar3 + 8) = (&DAT_007bfca0)[iVar5 * 5];
            *(undefined4 *)(puVar3 + 0xc) = (&DAT_007bfca4)[iVar5 * 5];
            uVar6 = (&DAT_007bfca8)[iVar5 * 5];
          }
          *(undefined4 *)(puVar3 + 0x10) = uVar6;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 7);
      iVar5 = 0;
      uVar6 = *(undefined4 *)(DAT_008977e0 + 0x2c);
      do {
        if (-1 < *(int *)(puVar3 + iVar5 * 4 + 8)) {
          fn_002a4648(uVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
    }
    puVar2[6] = puVar3;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
  }
  return puVar2;
}



void fn_001b9374(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x28,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_007bfc1c;
    *(undefined1 *)(puVar1 + 4) = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  return;
}



void fn_001b92b8(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_00145b00(0x90,&DAT_00812c8c);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_0069c2c8();
    *puVar2 = &DAT_0081eb84;
    *(undefined1 *)(puVar2 + 1) = 0x12;
    *(undefined1 *)((int)puVar2 + 5) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0xffffffff;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    *(undefined1 *)((int)puVar2 + 0x19) = 1;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(undefined1 *)(puVar2 + 0xc) = 0;
    *(undefined1 *)((int)puVar2 + 0x31) = 0;
    puVar2[0xd] = 0x42340000;
    *(undefined1 *)(puVar2 + 0x14) = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    *(undefined1 *)(puVar2 + 0x17) = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0xffffffff;
    *(undefined1 *)(puVar2 + 0x20) = 0;
    puVar2[0x22] = 0;
    puVar2[0x21] = 0xffffffff;
    *(undefined1 *)(puVar2 + 0x23) = 0;
  }
  return;
}


