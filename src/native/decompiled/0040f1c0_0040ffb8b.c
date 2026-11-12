#include "0040f1c0_0040ffb8b.h"



void fn_0040ffb8(int param_1)

{
  fn_0068b21c(*(undefined4 *)(param_1 + 0x2c));
  return;
}



void fn_0040ffb0(int param_1)

{
  fn_00190d50(*(undefined4 *)(param_1 + 0x24));
  return;
}



void fn_0040ff54(int param_1)

{
  fn_0069e748();
  fn_0040fe04(param_1,0);
  if (*(char *)(param_1 + 0x30) != *(char *)(param_1 + 0x31)) {
    *(char *)(param_1 + 0x30) = *(char *)(param_1 + 0x31);
  }
  if (*(char *)(param_1 + 0x32) != *(char *)(param_1 + 0x33)) {
    *(char *)(param_1 + 0x32) = *(char *)(param_1 + 0x33);
  }
  if (*(char *)(param_1 + 0x34) != *(char *)(param_1 + 0x35)) {
    *(char *)(param_1 + 0x34) = *(char *)(param_1 + 0x35);
  }
  if (*(char *)(param_1 + 0x36) != *(char *)(param_1 + 0x37)) {
    *(char *)(param_1 + 0x36) = *(char *)(param_1 + 0x37);
  }
  return;
}



undefined4 * fn_0040fd80(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0083843c;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = &DAT_00859350;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  *(undefined1 *)((int)puVar1 + 0x71) = 0;
  *(undefined1 *)((int)puVar1 + 0x72) = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  return puVar1;
}



undefined4 fn_0040f7d0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*(int *)(DAT_00897828 + 0x70) + 8);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(*(int *)(DAT_00897828 + 0x70) + 4);
  iVar2 = fn_0068c7f4(DAT_008977e8);
  if (*(char *)(iVar2 + 1) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0x72) = uVar1;
  *(undefined4 *)(DAT_00897828 + 0x68) = 0xda;
  return 1;
}



void fn_0040f740(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  
  uVar1 = fn_0016ba34(DAT_00897800,param_2,param_3,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,param_4,param_5,1,0,0,1);
  if (param_6 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
  }
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_0040f6fc(undefined4 *param_1)

{
  *param_1 = &DAT_0083842c;
  if (param_1[2] != 0) {
    fn_002feef8(param_1[2]);
    param_1[2] = 0;
  }
  fn_00749e80(param_1);
  fn_002feef8();
  return;
}


