#include "00654b60_00655488a.h"



void fn_00654cc4(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + (param_2 >> 3));
  bVar2 = (byte)(1 << (param_2 & 0xff));
  if (param_3 == 0) {
    bVar2 = bVar1 & ~bVar2;
  }
  else {
    bVar2 = bVar2 | bVar1;
  }
  *(byte *)(param_1 + (param_2 >> 3)) = bVar2;
  return;
}



void fn_00654c74(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    uVar2 = (uint)*(short *)(param_1 + iVar1 * 2);
    if (0x21e < uVar2 - 1) {
      return;
    }
    iVar3 = param_1 + ((int)uVar2 >> 3);
    iVar1 = iVar1 + 1;
    *(byte *)(iVar3 + 0x98) = *(byte *)(iVar3 + 0x98) | (byte)(1 << (uVar2 & 7));
  } while (iVar1 < 0x4c);
  return;
}



undefined4 fn_00654c44(void)

{
  return DAT_008bf618;
}



void fn_00654c30(int param_1,int param_2)

{
  param_2 = param_2 + *(int *)(param_1 + 0x14);
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x14) = param_2;
  return;
}



void fn_00654c08(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  fn_00654bf4(param_3,*(undefined4 *)(param_2 + 0x194));
  iVar1 = *(int *)(param_2 + 0x198) + *(int *)(param_3 + 0x14);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(int *)(param_3 + 0x14) = iVar1;
  return;
}



void fn_00654bf4(int param_1,int param_2)

{
  param_2 = param_2 + *(int *)(param_1 + 0x10);
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x10) = param_2;
  return;
}



undefined4 * fn_00654bcc(undefined4 *param_1)

{
  *param_1 = &DAT_008595e8;
  return param_1;
}



undefined4 * fn_00654bc8(undefined4 *param_1)

{
  *param_1 = &DAT_008595e8;
  return param_1;
}



undefined4 *
fn_00654b60(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  *param_1 = &DAT_008595e8;
  *(undefined1 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = param_4;
  param_1[5] = param_5;
  *(undefined1 *)(param_1 + 6) = 0xff;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[8] = param_6;
  *(undefined1 *)(param_1 + 9) = param_7;
  param_1[10] = 0;
  return param_1;
}


