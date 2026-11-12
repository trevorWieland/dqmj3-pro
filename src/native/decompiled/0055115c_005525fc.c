#include "0055115c_005525fc.h"



void fn_005525fc(int param_1,int param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  if (param_2 != 0) {
    fn_0019559c(param_1 + 0xc4);
  }
  *(undefined2 *)(param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xaa) = 0;
  *(undefined2 *)(param_1 + 0xac) = 0;
  *(undefined2 *)(param_1 + 0xae) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined2 *)(param_1 + 0xb2) = 0;
  iVar2 = fn_00194ee4(0x84,4);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_00555604();
  }
  *(int *)(param_1 + 0xd4) = iVar3;
  if (iVar3 != 0) {
    fn_005548fc(iVar3,param_2,param_2,param_2,0,0,0,0,0,0);
  }
  *(undefined1 *)(param_1 + 0xcd) = 0;
  iVar3 = fn_00194ee4(param_4 << 3,4);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar5 = 0;
    if (param_4 != 0) {
      do {
        puVar6 = (undefined1 *)(iVar3 + uVar5 * 8);
        uVar5 = uVar5 + 1;
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 4) = 0;
        }
      } while (uVar5 < param_4);
    }
  }
  *(int *)(param_1 + 0xd0) = iVar3;
  if (iVar3 != 0) {
    *(char *)(param_1 + 0xcd) = (char)param_4;
  }
  iVar3 = 0;
  if (*(char *)(param_1 + 0xcd) != '\0') {
    do {
      iVar4 = fn_00194ee4(0x84,4);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = fn_00555604();
      }
      *(int *)(*(int *)(param_1 + 0xd0) + iVar3 * 8 + 4) = iVar2;
      if (iVar2 != 0) {
        uVar1 = *(undefined1 *)(param_3 + iVar3);
        fn_005548fc(iVar2,uVar1,uVar1,uVar1,0,0,0,0,0,0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0xcd));
  }
  return;
}



undefined4 * fn_00552520(undefined4 *param_1,undefined4 *param_2)

{
  param_1[2] = param_1[2] & 0xffffff80 | 0x90;
  if (param_2 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
    *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)param_2 + 6);
    *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)(param_2 + 2);
    param_1[2] = (*(byte *)((int)param_2 + 9) & 3) << 0x10 | param_1[2] & 0xfffcffff;
    param_1[3] = param_2[4];
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 3);
    *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0xe);
    fn_0019fbd8();
  }
  fn_0019fbd8(param_1);
  return param_1;
}



void fn_00551c70(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)(param_1 + 8); piVar1 = (int *)*piVar1) {
    (**(code **)(piVar1[-1] + 0x14))(piVar1 + -1);
  }
  for (piVar1 = *(int **)(param_1 + 0x2c); piVar1 != (int *)(param_1 + 0x2c);
      piVar1 = (int *)*piVar1) {
    (**(code **)(*(int *)piVar1[2] + 0x24))();
  }
  return;
}



void fn_00551be8(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)(param_1 + 8); piVar1 = (int *)*piVar1) {
    (**(code **)(piVar1[-1] + 0x14))(piVar1 + -1);
    (**(code **)(piVar1[-1] + 0xc))(piVar1 + -1);
  }
  for (piVar1 = *(int **)(param_1 + 0x2c); piVar1 != (int *)(param_1 + 0x2c);
      piVar1 = (int *)*piVar1) {
    (**(code **)(*(int *)piVar1[2] + 0x2c))();
  }
  return;
}



void fn_00551a3c(int param_1,undefined4 param_2)

{
  undefined1 auStack_90 [136];
  
  fn_0017d96c(auStack_90,0x88,0x87,(char *)&DAT_007d8878,*(undefined4 *)(param_1 + 0x20),param_2);
  (**(code **)(**(int **)(param_1 + 0x24) + 0xc))(*(int **)(param_1 + 0x24),0x616e696d,auStack_90,0)
  ;
  return;
}



void fn_00551660(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)(param_1 + 8); piVar1 = (int *)*piVar1) {
    (**(code **)(piVar1[-1] + 0xc))(piVar1 + -1);
  }
  for (piVar1 = *(int **)(param_1 + 0x2c); piVar1 != (int *)(param_1 + 0x2c);
      piVar1 = (int *)*piVar1) {
    (**(code **)(*(int *)piVar1[2] + 0x28))();
  }
  return;
}



void fn_005515b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar1 == &DAT_0089a930) {
        if ((piVar2 != (int *)0x0) &&
           (*(byte *)(piVar2 + 0x34) = *(byte *)(piVar2 + 0x34) | (piVar2[0x32] != param_2) << 2,
           piVar2[0x32] != param_2)) {
          piVar2[0x32] = param_2;
        }
        break;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  for (piVar3 = (int *)piVar2[5]; piVar3 != piVar2 + 5; piVar3 = (int *)*piVar3) {
    fn_0054c478(piVar3 + -1,param_2);
  }
  return;
}



void fn_00551540(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_28 [28];
  
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_0054cc7c(auStack_28,param_2,param_1);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x40))(*(int **)(param_1 + 0x10),auStack_28,param_3);
  }
  return;
}



void fn_00551350(void)

{
  fn_0010c3ec();
  fn_002feef8();
  return;
}



void fn_00551300(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_2,param_4);
  *(undefined4 *)(param_3 + 0xb0) = 0;
  *(int **)(param_3 + 0xc0) = param_1;
  if ((param_4 & 1) == 0) {
    fn_00560ac4(param_1,uVar1,param_3 + 4);
    return;
  }
  return;
}



void fn_005512a4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x614) = 0;
  *(undefined4 *)(param_1 + 0x618) = 0;
  *(undefined4 *)(param_1 + 0x610) = 0;
  *(undefined1 *)(param_1 + 0x61e) = 7;
  *(undefined1 *)(param_1 + 0x61c) = 1;
  *(undefined1 *)(param_1 + 0x61d) = 1;
  *(undefined2 *)(param_1 + 0x628) = 1;
  *(undefined1 *)(param_1 + 0x62a) = 1;
  uVar1 = fn_0054f1dc(param_1);
  fn_00561428(param_1,uVar1,param_3);
  return;
}



void fn_00551268(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar1 = *(byte *)(param_1 + 0x33);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  iVar2 = param_1 + (uint)bVar1 * 0x10;
  uVar6 = *param_3;
  uVar7 = param_3[1];
  uVar3 = VectorUnsignedToFloat(bVar1 + 0x20,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x600) = uVar3;
  *(undefined4 *)(iVar2 + 0x3f8) = uVar4;
  *(undefined4 *)(iVar2 + 0x3fc) = uVar5;
  *(undefined4 *)(iVar2 + 0x400) = uVar6;
  *(undefined4 *)(iVar2 + 0x404) = uVar7;
  *(byte *)(param_1 + 0x33) = bVar1 + 1;
  return;
}



void fn_00551240(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_4);
  *(undefined4 *)(param_3 + 0xc0) = 0;
  *(undefined4 *)(param_3 + 0xb0) = 0;
  return;
}



void fn_005511c8(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar4 = param_2[1];
  iVar1 = param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10;
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar2 = param_2[2];
  uVar3 = param_2[7];
  *(undefined4 *)(iVar1 + 0x1f8) = *param_2;
  uVar9 = param_2[8];
  *(undefined4 *)(iVar1 + 0x1fc) = uVar4;
  uVar4 = param_2[9];
  *(undefined4 *)(iVar1 + 0x200) = uVar2;
  uVar2 = param_2[10];
  uVar10 = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x214) = uVar3;
  *(undefined4 *)(iVar1 + 0x218) = uVar9;
  *(undefined4 *)(iVar1 + 0x21c) = uVar4;
  *(undefined4 *)(iVar1 + 0x220) = uVar2;
  *(undefined4 *)(iVar1 + 0x224) = uVar10;
  *(undefined4 *)(iVar1 + 0x204) = uVar5;
  *(undefined4 *)(iVar1 + 0x208) = uVar6;
  *(undefined4 *)(iVar1 + 0x20c) = uVar7;
  *(undefined4 *)(iVar1 + 0x210) = uVar8;
  uVar2 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x5fc) = uVar2;
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) + 3;
  return;
}



int fn_0055115c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined ***pppuStack_1c;
  undefined **ppuStack_18;
  int local_14;
  int iStack_10;
  undefined4 uStack_c;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_4 + 0xc0);
  }
  if ((param_2 != 0 && iVar1 != 0) && (*(int *)(param_3 + 0x10) != 0)) {
    *(int *)(param_4 + 0xb0) = param_3;
    pppuStack_1c = &ppuStack_18;
    ppuStack_18 = &PTR_LAB_007d8604;
    local_14 = param_2;
    iStack_10 = param_4;
    uStack_c = param_1;
    fn_0075ec20(&pppuStack_1c,*(undefined4 *)(param_3 + 0x10));
    *(undefined4 *)(param_4 + 0xb0) = 0;
    param_2 = local_14;
  }
  return param_2;
}


