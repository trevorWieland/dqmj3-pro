#include "00246494_00246970.h"



bool fn_00246970(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    if (param_2 < 4) {
      uVar1 = 0x32;
    }
    else if (param_2 < 10) {
      uVar1 = 0x4b;
    }
    else {
      uVar1 = 100;
    }
  }
  else {
    uVar1 = 0x78;
  }
  return uVar1 <= param_1 && 99 < param_1;
}



bool fn_00246924(int param_1)

{
  byte bVar1;
  
  if ((*(ushort *)(param_1 + 0x40) & 0x7ff) >> 10 == 0) {
    if (*(byte *)(param_1 + 0x3c) < 4) {
      bVar1 = 0x32;
    }
    else if (*(byte *)(param_1 + 0x3c) < 10) {
      bVar1 = 0x4b;
    }
    else {
      bVar1 = 100;
    }
  }
  else {
    bVar1 = 0x78;
  }
  return bVar1 <= *(byte *)(param_1 + 0x2e) && 99 < *(byte *)(param_1 + 0x2e);
}



void fn_00246880(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  
  uVar1 = fn_00163868(0x15);
  VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  fn_006f9f20();
  if (param_1 < 0x65) {
    return;
  }
  VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  fn_006f9f20();
  return;
}



undefined4 fn_00246858(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (param_1 < 4) {
      uVar1 = 0x32;
    }
    else if (param_1 < 10) {
      uVar1 = 0x4b;
    }
    else {
      uVar1 = 100;
    }
  }
  else {
    uVar1 = 0x78;
  }
  return uVar1;
}



undefined4 fn_00246824(int param_1)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 0x40) & 0x7ff) >> 10 == 0) {
    if (*(byte *)(param_1 + 0x3c) < 4) {
      uVar1 = 0x32;
    }
    else if (*(byte *)(param_1 + 0x3c) < 10) {
      uVar1 = 0x4b;
    }
    else {
      uVar1 = 100;
    }
  }
  else {
    uVar1 = 0x78;
  }
  return uVar1;
}



bool fn_002467dc(int param_1)

{
  byte bVar1;
  
  if ((*(ushort *)(param_1 + 0x40) & 0x7ff) >> 10 == 0) {
    if (*(byte *)(param_1 + 0x3c) < 4) {
      bVar1 = 0x32;
    }
    else if (*(byte *)(param_1 + 0x3c) < 10) {
      bVar1 = 0x4b;
    }
    else {
      bVar1 = 100;
    }
  }
  else {
    bVar1 = 0x78;
  }
  return *(byte *)(param_1 + 0x2e) < bVar1;
}



undefined4 fn_002467b4(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x79) {
    uVar1 = fn_002cd49c((int)(char)((char)param_1 + -1));
  }
  return uVar1;
}



undefined4 fn_002466b8(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  fn_0017821c(auStack_50,param_1 + param_2 * 0x44,0x44);
  uVar1 = 0xffffffff;
  switch(param_3) {
  case 1:
    uVar1 = local_4c;
    break;
  case 2:
    uVar1 = local_48;
    break;
  case 3:
    uVar1 = local_44;
    break;
  case 4:
    uVar1 = local_40;
    break;
  case 5:
    uVar1 = local_3c;
    break;
  case 6:
    uVar1 = local_38;
    break;
  case 7:
    uVar1 = local_34;
    break;
  case 8:
    uVar1 = local_30;
    break;
  case 9:
    uVar1 = local_2c;
    break;
  case 10:
    uVar1 = local_28;
    break;
  case 0xb:
    uVar1 = local_24;
    break;
  case 0xc:
    uVar1 = local_20;
    break;
  case 0xd:
    uVar1 = local_1c;
    break;
  case 0xe:
    uVar1 = local_18;
    break;
  case 0xf:
    uVar1 = local_14;
    break;
  case 0x10:
    uVar1 = local_10;
  }
  return uVar1;
}



void fn_002465c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0081d5b4;
  if (param_1[6] != -1) {
    fn_00159f34(param_1[3]);
    param_1[6] = 0xffffffff;
  }
  if (param_1[7] != -1) {
    fn_00159f34(param_1[3]);
    param_1[7] = 0xffffffff;
  }
  if (param_1[8] != -1) {
    fn_00159f34(param_1[3]);
    param_1[8] = 0xffffffff;
  }
  if (param_1[9] != -1) {
    fn_00159f34(param_1[3]);
    param_1[9] = 0xffffffff;
  }
  if (param_1[10] != -1) {
    fn_00159f34(param_1[3]);
    param_1[10] = 0xffffffff;
  }
  fn_0016a43c(param_1[3],param_1[5]);
                    /* WARNING: Subroutine does not return */
  fn_001482f4(param_1[3],param_1[4]);
}



void fn_00246494(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &PTR_FUN_0081d5b4;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00110518();
  }
  param_1[3] = uVar2;
  param_1[5] = 0xffffffff;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  iVar1 = fn_00145b00(0x24,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_002916ec();
  }
  param_1[0x20] = uVar2;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((int)param_1 + 0x8d) = 0;
  *(undefined1 *)((int)param_1 + 0x8e) = 1;
  *(undefined1 *)((int)param_1 + 0x8f) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x27] = 0;
  param_1[0x2c] = 0;
  param_1[0x28] = 0;
  param_1[0x2d] = 0;
  param_1[0x29] = 0;
  param_1[0x2e] = 0;
  param_1[0x2a] = 0;
  param_1[0x2f] = 0;
  param_1[0x2b] = 0;
  param_1[0x30] = 0;
  return;
}


