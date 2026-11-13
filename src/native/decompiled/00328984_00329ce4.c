#include "00328984_00329ce4.h"



void fn_00329ce4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [12];
  
  fn_002c3e78();
  iVar1 = fn_006be118(*(undefined4 *)(param_1 + 0x160));
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = fn_006be0f4(*(undefined4 *)(param_1 + 0x160),iVar3);
      fn_0031b78c(param_1,iVar3,0,iVar2 + 4);
      fn_00291a64(iVar2,auStack_20);
      fn_0039e574(param_1,iVar3,auStack_20);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_00329bf0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
    uVar2 = fn_0022f584((char *)&DAT_00329cc0,0);
    fn_0068974c(param_1,uVar2,1);
    *(undefined4 *)(param_1 + 0x168) = 0xd9;
    *(undefined1 *)(param_1 + 0x164) = 2;
    return;
  }
  fn_0068ab44(param_1,0x100094b);
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0xd8);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_0089666c) goto LAB_00329c8c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_00329c8c:
  puVar3[5] = param_2;
  fn_006899f4(param_1,0xd8,1);
  fn_00689d04(param_1,0);
  *(undefined4 *)(*(int *)(param_1 + 0x158) + 8) = param_2;
  return;
}



void fn_00329bc0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x16c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00329e64(iVar1,param_1);
  return;
}



void fn_00329b94(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



void fn_00329adc(int param_1)

{
  undefined4 uVar1;
  
  fn_006be118(*(undefined4 *)(param_1 + 0x160));
  fn_0015b0f8();
  uVar1 = fn_0022f584((char *)&DAT_00329b1c,0);
  fn_0068974c(param_1,uVar1,0,1);
  *(undefined1 *)(param_1 + 0x164) = 1;
  return;
}



void fn_003297d4(undefined4 param_1)

{
  fn_0039e5ac();
  fn_002c4100(param_1);
  return;
}



void fn_00328ee4(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_10 [4];
  undefined1 auStack_c [12];
  
  if (param_3 == 0) {
    fn_00168a24(param_1,&LAB_00328f1c,auStack_c);
    return;
  }
  fn_00168a24(param_1,&LAB_00328f1c,auStack_10);
  return;
}



undefined4 fn_00328d5c(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_00328db4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00328db4:
  DAT_0089660c = puVar1;
  puVar1 = (undefined4 *)fn_00689c1c(param_1,0x80);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008964f4) goto LAB_00328dfc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00328dfc:
  param_1[0x42] = (int)puVar1;
  *(undefined4 *)(param_1[0x17] + 0x38) = 0;
  fn_0074879c(param_1,DAT_00898214,(char *)&DAT_00328e44,1,1,1,0);
  return 1;
}



void fn_00328ca0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00823db4;
  if (param_1[0x32] != 0) {
    fn_002feef8(param_1[0x32]);
  }
  fn_0036e274(param_1);
  fn_002feef8();
  return;
}



void fn_00328c1c(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  fn_0036e174();
  piVar2 = *(int **)(param_1 + 200);
  uVar1 = piVar2[2];
  if (uVar1 != 0) {
    if ((uint)piVar2[1] < uVar1) {
      piVar2[1] = piVar2[1] + 1;
    }
    else if (*(char *)((int)piVar2 + 0xd) == '\0') {
      piVar2[1] = uVar1;
    }
    else {
      piVar2[1] = 0;
      piVar2[2] = 0;
      *(undefined1 *)(*piVar2 + 0x30) = 1;
      fn_0036c340(*piVar2);
    }
  }
  if ((char)piVar2[3] != '\0') {
    *(undefined1 *)(*piVar2 + 0x30) = 0;
    *(undefined1 *)(piVar2 + 3) = 0;
  }
  return;
}



void fn_00328be0(int param_1)

{
  fn_00328800(*(undefined4 *)(param_1 + 200));
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_00328bb4(int param_1)

{
  fn_002c4100();
  if (*(int *)(param_1 + 200) != 0) {
    fn_002feef8(*(int *)(param_1 + 200));
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_00328b80(undefined4 *param_1)

{
  *param_1 = &DAT_00823ca4;
  if (param_1[0x19] != 0) {
    fn_002feef8(param_1[0x19]);
  }
  fn_0068ad5c(param_1);
  return;
}



void fn_00328b40(undefined4 *param_1)

{
  *param_1 = &DAT_00823ca4;
  if (param_1[0x19] != 0) {
    fn_002feef8(param_1[0x19]);
  }
  fn_0068ad5c(param_1);
  fn_002feef8();
  return;
}



void fn_00328aac(int param_1)

{
  fn_00328874(*(undefined4 *)(param_1 + 100));
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_00328a70(int param_1)

{
  fn_00328800(*(undefined4 *)(param_1 + 100));
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_00328a48(int param_1)

{
  if (*(int *)(param_1 + 100) != 0) {
    fn_002feef8(*(int *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}



void fn_00328a30(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  return;
}



void fn_00328a1c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(**(int **)(param_1 + 0xcc) + 0x38) = param_2;
  return;
}



void fn_00328984(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0xcc);
  *(undefined4 *)(iVar1 + 0x38) = param_2;
  *(undefined1 *)(iVar1 + 0x5f) = 1;
  return;
}


