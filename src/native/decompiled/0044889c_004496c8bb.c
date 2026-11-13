#include "0044889c_004496c8bb.h"



void fn_004496c8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0083eb64;
  uVar1 = param_1[0x3e];
  uVar2 = uVar1;
  if ((uint)param_1[0x3f] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x3f]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x40] - uVar1) >> 2,0);
  fn_00397a78(param_1);
  fn_002feef8();
  return;
}



void fn_00449688(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0xffffffff;
  *puVar1 = &DAT_0083eb64;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  puVar1[0x3b] = 0xffffffff;
  puVar1[0x3c] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x3d) = 0xff;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  return;
}



void fn_00449270(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942d0) goto LAB_004492c0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_004492c0:
  fn_0036c658(puVar1,0);
  uVar3 = fn_0025f988(DAT_00897800,(char *)&DAT_0044939c);
  fn_0036c13c(puVar1,uVar3);
  *(undefined1 *)(puVar1 + 0xc) = 1;
  fn_00689bd0(param_1,0x48,0);
  *(undefined1 *)(param_1 + 0xe8) = 1;
  iVar4 = fn_006ba284(param_1);
  uVar5 = iVar4 * 9 + param_2;
  if (((int)uVar5 < 0) ||
     ((uint)(*(int *)(param_1 + 0xfc) - *(int *)(param_1 + 0xf8) >> 2) <= uVar5)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xf8) + uVar5 * 4);
  }
  fn_002e2ecc(*(undefined4 *)(DAT_00897804 + 0x5c),(int)*(char *)(param_1 + 0xf4),uVar3);
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x95);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894c6c) goto LAB_0044938c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0044938c:
  puVar1[0x280] = 0;
  return;
}


