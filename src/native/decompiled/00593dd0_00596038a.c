#include "00593dd0_00596038a.h"



void fn_00594b70(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
  uVar1 = fn_0022f584(param_2,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_00594ac0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    pcVar1 = *(code **)(param_1 + 0x68);
    if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
      pcVar1 = *(code **)(pcVar1 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x6c) >> 1)));
    }
    (*pcVar1)();
    uVar2 = *(uint *)(param_1 + 0x7c);
    iVar4 = *(int *)(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x78);
    *(int *)(param_1 + 0x70) = iVar4;
    *(uint *)(param_1 + 0x6c) = uVar2;
    *(uint *)(param_1 + 0x74) = uVar3;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    if ((iVar4 == *(int *)(param_1 + 0x68)) &&
       (((iVar4 == 0 && (((*(byte *)(param_1 + 0x74) | uVar2) & 1) == 0)) || (uVar3 == uVar2)))) {
      iVar4 = *(int *)(param_1 + 0x84) + 1;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x84) = iVar4;
  }
  return;
}



void fn_00594a90(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x88,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00594be4(iVar1,param_1);
  return;
}



void fn_00594a08(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1[0x17] + 0x31) != '\x01') {
    return;
  }
  puVar2 = (undefined4 *)param_1[6];
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00897100) goto LAB_00594a5c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00594a5c:
  *(undefined1 *)(puVar2 + 4) = 3;
                    /* WARNING: Could not recover jumptable at 0x00594a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,0,0);
  return;
}



undefined4 fn_005945a8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00897100) goto LAB_005945ec;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005945ec:
  *(undefined1 *)(puVar2 + 4) = 0;
  *(code **)(param_1 + 0x78) = fn_00594630;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(code **)(param_1 + 0x70) = fn_00594630;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(code **)(param_1 + 0x68) = fn_00594630;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return 1;
}



void fn_00593dd0(undefined4 *param_1,undefined4 param_2)

{
  param_1[2] = param_2;
  *param_1 = &DAT_00844f94;
  param_1[3] = &DAT_00859390;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 1;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 1;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = &DAT_008593a0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0xa5) = 0;
  *(undefined1 *)((int)param_1 + 0xa6) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return;
}


