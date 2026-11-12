#include "00141554_00141a04a.h"



void fn_001417a4(void)

{
  fn_00301f50(&DAT_008f252c,0x200);
  DAT_008f252c = &LAB_00152614;
  DAT_008f2530 = &LAB_001525b0;
  DAT_008f2534 = &DAT_00152610;
  DAT_008f2538 = &LAB_00152594;
  DAT_008f253c = fn_00152574;
  return;
}



void fn_00141734(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1a8) != 0) {
    fn_0017ea58();
    fn_0018b010(*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined1 *)(param_1 + 0x138) = 0;
    *(undefined1 *)(param_1 + 0x139) = 0;
    if (*(code **)(param_1 + 0x1a0) != (code *)0x0) {
      (**(code **)(param_1 + 0x1a0))(param_1,0,*(undefined4 *)(param_1 + 0x1a4));
    }
    if (*(char *)(param_1 + 0x13a) != '\0') {
      *(undefined1 *)(param_1 + 0x13a) = 0;
      uVar1 = fn_00152724();
      fn_00173100(uVar1,param_1);
      return;
    }
  }
  return;
}



void fn_00141708(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 2;
    (&DAT_008f2750)[iVar1] = 0xffff;
    (&DAT_008f2752)[iVar1] = 0xffff;
    iVar1 = iVar2;
  } while (iVar2 < 0x10);
  return;
}



int fn_001416fc(undefined4 param_1,int param_2)

{
  return param_2 * 0x60;
}



void fn_00141684(char *param_1,int param_2,uint param_3)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  
  if (*param_1 == '\0') {
    iVar2 = 0;
    iVar1 = param_3 * -0x55555555;
    param_3 = param_3 / 0x60;
    if (param_3 != 0) {
      do {
        if (param_2 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = fn_00152630(param_2,iVar1);
        }
        fn_0017d948(param_1 + 0x10,param_1 + 0x14,iVar1 + 0x58);
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 0x60;
        iVar1 = extraout_r1;
      } while (iVar2 < (int)param_3);
    }
    *(uint *)(param_1 + 0x20) = param_3;
    *param_1 = '\x01';
    *(uint *)(param_1 + 0x1c) = param_3;
  }
  return;
}



void fn_00141640(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 0) {
    return;
  }
  param_1[1] = param_3;
  param_1[3] = param_4;
  *param_1 = param_2;
  uVar1 = fn_00169f1c(param_3,param_4);
  param_1[5] = 0;
  param_1[2] = uVar1 & 0xffffffe0;
  param_1[4] = 0;
  return;
}



void fn_00141554(char *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == '\0') {
    iVar4 = 0;
    do {
      fn_0014f5e8((int)(char)iVar4,param_1 + iVar4 * 4 + 0x6c,param_1 + iVar4 * 4 + 0x274);
      fn_0015f38c((int)(char)iVar4,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    iVar2 = 0;
    iVar4 = 0;
    do {
      iVar3 = iVar2 + 1;
      iVar4 = iVar4 + 2;
      pcVar1 = param_1 + iVar2 * 4 + 0x74;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      iVar2 = iVar2 + 2;
      pcVar1 = param_1 + iVar3 * 4 + 0x74;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    } while (iVar4 < 0x80);
    *(undefined4 **)(param_1 + 0x78) = &DAT_008c05e8;
    *(undefined4 **)(param_1 + 0x7c) = &DAT_008c05ec;
    *(undefined4 **)(param_1 + 0x80) = &DAT_008c05f0;
    *(undefined4 **)(param_1 + 0x84) = &DAT_008c05f4;
    *(undefined4 **)(param_1 + 0x88) = &DAT_008c05f8;
    fn_0014f600();
    iVar4 = fn_0014fbd8();
    if (iVar4 == 0) {
      param_1[1] = '\0';
    }
    else if (iVar4 == 1) {
      param_1[1] = '\x01';
    }
    else if (iVar4 == 2) {
      param_1[1] = '\x02';
    }
    *param_1 = '\x01';
  }
  return;
}


