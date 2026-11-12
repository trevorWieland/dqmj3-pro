#include "003bfab0_003c178ca.h"



void fn_003c0ef8(int param_1,int param_2)

{
  int iVar1;
  
  fn_003e5aa8();
  if (param_2 == 0) {
    fn_006899f4(param_1,0x8f,0);
    return;
  }
  if (param_2 == 1) {
    iVar1 = (int)*(short *)(*(int *)(param_1 + 0xb0) + 8);
    fn_00242324(*(undefined4 *)(DAT_00897804 + 0x18),iVar1,0);
    iVar1 = fn_002298d8(*(undefined4 *)(DAT_00897804 + 0x14),iVar1);
    *(undefined4 *)(param_1 + 0xb8) = 1;
    *(int *)(param_1 + 0xc4) = -iVar1;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  else if (param_2 == 2) {
    fn_006899f4(param_1,0x8d,0);
    return;
  }
  return;
}



void fn_003c0ec8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x100,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c0fcc(iVar1,param_1);
  return;
}



void fn_003c0638(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_003c067c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003c067c:
  *(undefined1 *)(puVar1 + 6) = 2;
  return;
}



void fn_003c05e4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_003c062c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003c062c:
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x003c0128) */
/* WARNING: Removing unreachable block (ram,0x003c0164) */

void fn_003c00f8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_0039c4c8();
  puVar2 = *(undefined4 **)(param_1 + 0xac);
  for (puVar1 = *(undefined4 **)(param_1 + 0xa8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1);
  }
  puVar2 = *(undefined4 **)(param_1 + 0xb8);
  for (puVar1 = *(undefined4 **)(param_1 + 0xb4); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x14))();
  }
  return;
}



undefined4 fn_003bfcf0(int *param_1)

{
  fn_0039bdf4();
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00894e18,DAT_00894e1c,DAT_00894e20);
  fn_0039be98(param_1);
  fn_003bfe38(param_1);
  return 1;
}



void fn_003bfab0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  *param_1 = &PTR_FUN_0082f898;
  do {
    fn_00148348(param_1[0x19],*(undefined4 *)(param_1[0x36] + iVar3 * 4));
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  if (param_1[0x3c] != -1) {
    fn_00148348(param_1[0x19]);
    param_1[0x3c] = 0xffffffff;
  }
  if (param_1[0x3a] != -1) {
    fn_00148348(param_1[0x19]);
    param_1[0x3a] = 0xffffffff;
  }
  if (param_1[0x3b] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(param_1[0x19]);
  }
  if (param_1[0x39] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(param_1[0x19]);
  }
  piVar4 = (int *)param_1[0x2a];
  if ((int *)param_1[0x2b] != piVar4) {
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0x18))();
        if ((int *)*piVar4 != (int *)0x0) {
          (**(code **)(*(int *)*piVar4 + 4))();
        }
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
    } while ((int *)param_1[0x2b] != piVar4);
  }
  fn_0022ccb4(param_1);
  uVar1 = param_1[0x36];
  uVar2 = uVar1;
  if ((uint)param_1[0x37] <= uVar1) {
    for (; uVar2 != param_1[0x37]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x38] - uVar1) >> 2,0);
  uVar1 = param_1[0x33];
  uVar2 = uVar1;
  if ((uint)param_1[0x34] <= uVar1) {
    for (; uVar2 != param_1[0x34]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x35] - uVar1) >> 2,0);
  uVar1 = param_1[0x30];
  uVar2 = uVar1;
  if ((uint)param_1[0x31] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x31]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x32] - uVar1) >> 2,0);
  if ((int *)param_1[0x2d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2d] + 4))();
  }
  uVar1 = param_1[0x2a];
  uVar2 = uVar1;
  if ((uint)param_1[0x2b] <= uVar1) {
    for (; uVar2 != param_1[0x2b]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x2c] - uVar1) >> 2,0);
  uVar1 = param_1[0x27];
  uVar2 = uVar1;
  if ((uint)param_1[0x28] <= uVar1) {
    for (; uVar2 != param_1[0x28]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x29] - uVar1) >> 2,0);
  fn_0039b600(param_1);
  return;
}


