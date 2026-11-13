#include "002d6900_002d6e84.h"



bool fn_002d6e84(int param_1)

{
  return param_1 == 0x18b;
}



undefined1 fn_002d6dd4(short *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  do {
    uVar6 = (uint)(short)(&DAT_007c3494)[iVar5 * 4];
    if ((int)uVar6 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar6 & 1;
      iVar3 = 0;
      if (uVar2 != 0) {
        do {
          if ((short *)(int)*(short *)((&DAT_007c3490)[iVar5 * 2] + iVar3 * 2) == param_1)
          goto LAB_002d6e48;
          iVar3 = (int)(short)((short)iVar3 + 1);
        } while (iVar3 < (int)uVar2);
      }
    }
    for (; (int)uVar2 < (int)uVar6; uVar2 = (uint)(short)((short)uVar2 + 2)) {
      psVar4 = (short *)((&DAT_007c3490)[iVar5 * 2] + uVar2 * 2);
      sVar1 = *psVar4;
      if ((short *)(int)sVar1 != param_1) {
        psVar4 = (short *)(int)psVar4[1];
      }
      if ((short *)(int)sVar1 == param_1 || psVar4 == param_1) {
LAB_002d6e48:
        return (&DAT_007c3496)[iVar5 * 8];
      }
    }
    iVar5 = iVar5 + 1;
    if (0xd < iVar5) {
      return 0;
    }
  } while( true );
}



undefined4 fn_002d6d34(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [12];
  
  fn_002d7624(auStack_10,param_1);
  uVar1 = fn_006c6a38(auStack_c);
  switch(uVar1) {
  case 0:
  case 1:
    return 3;
  case 2:
    return 4;
  case 3:
    return 5;
  case 4:
    return 6;
  default:
    return 0;
  }
}



void fn_002d6cb0(int param_1,undefined2 *param_2,uint param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  
  puVar5 = (undefined2 *)(DAT_008923d8 + param_1 * 10);
  if (0 < (int)(param_3 - 1)) {
    puVar3 = puVar5;
    puVar4 = param_2 + -1;
    if ((param_3 & 1) == 0) {
      puVar3 = puVar5 + 1;
      *param_2 = puVar5[1];
      puVar4 = param_2;
    }
    uVar2 = puVar3[1];
    for (iVar6 = (int)(param_3 - 1) >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar1 = puVar3[2];
      puVar4[1] = uVar2;
      uVar2 = puVar3[3];
      puVar4 = puVar4 + 2;
      *puVar4 = uVar1;
      puVar3 = puVar3 + 2;
    }
  }
  if (-1 < (int)(param_3 - 1)) {
    param_2[param_3 - 1] = puVar5[param_3];
  }
  return;
}



int fn_002d6c94(int param_1)

{
  return (int)*(short *)(DAT_008923d8 + param_1 * 10);
}



int fn_002d6c68(void)

{
  return (int)(short)DAT_008923dc;
}



undefined4 fn_002d6bd8(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_002d6c5c,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 10;
  iVar2 = 0;
  DAT_008923dc = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008923dc = 0;
  }
  DAT_008923d8 = param_1;
  return 1;
}



int fn_002d6bb8(int param_1)

{
  return (int)*(short *)(DAT_008923d0 + (param_1 - DAT_008923cc) * 0x20 + 0xc);
}



int fn_002d6b98(int param_1)

{
  return (int)*(short *)(DAT_008923d0 + (param_1 - DAT_008923cc) * 0x20 + 10);
}



int fn_002d6b60(int param_1)

{
  return (int)*(short *)(DAT_008923d0 + (param_1 - DAT_008923cc) * 0x20 + 0xe);
}



undefined4 fn_002d6a94(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_002d6b54), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 0;
  if ((param_3 - 4 & 0x1f) == 0) {
    iVar1 = param_1;
  }
  DAT_008923d0 = iVar1;
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008923d4 = 0;
  }
  else {
    DAT_008923d4 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4),0x20,0);
  }
  iVar2 = 0;
  if (0 < DAT_008923d4) {
    do {
      if (*(short *)(iVar1 + iVar2 * 0x20) != 0) {
        DAT_008923cc = *(undefined2 *)(iVar1 + iVar2 * 0x20);
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_008923d4);
  }
  return 1;
}



void fn_002d6a2c(undefined4 *param_1)

{
  *param_1 = &DAT_008201b8;
  if (param_1[1] != 0) {
    fn_002feef8();
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    fn_002feef8();
    param_1[2] = 0;
  }
  param_1[3] = 0;
  fn_002feef8();
  fn_002feef8(param_1[1]);
  fn_002feef8(param_1);
  return;
}



void fn_002d697c(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0 && *(int *)(param_1 + 0xc) != 2) {
    fn_0017821c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(*(int *)(DAT_00897804 + 0xc) + 4),
                 0x1db7c);
    fn_0017821c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(*(int *)(DAT_00897804 + 0x18) + 4),
                 0xc88);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  return;
}



void fn_002d6960(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  
  fn_002d69e8(*(undefined4 *)(param_1 + 0x48));
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(int *)(iVar1 + 0xc) != 0 && *(int *)(iVar1 + 0xc) != 2) {
    fn_0017821c(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(*(int *)(DAT_00897804 + 0xc) + 4),
                 0x1db7c,param_4,unaff_r4);
    fn_0017821c(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(*(int *)(DAT_00897804 + 0x18) + 4),0xc88
                );
    *(undefined4 *)(iVar1 + 0xc) = 2;
  }
  return;
}



void fn_002d69e8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    param_2 = *(int *)(param_1 + 8);
  }
  if (iVar1 != 0 && param_2 != 0) {
    fn_00301f50(iVar1,0x1db7c);
    fn_00301f50(*(undefined4 *)(param_1 + 8),0xc88);
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return;
}



void fn_002d691c(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    fn_002feef8();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_002feef8();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void fn_002d6900(int param_1)

{
  int iVar1;
  
  fn_002d6810(*(undefined4 *)(param_1 + 0x40));
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(int *)(iVar1 + 4) != 0) {
    fn_002feef8();
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    fn_002feef8();
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  return;
}


