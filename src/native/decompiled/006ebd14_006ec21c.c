#include "006ebd14_006ec21c.h"



undefined4 fn_006ec21c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x40);
  iVar4 = iVar3;
  iVar1 = *(int *)(iVar3 + 4);
  while (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x10) < param_2) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar4 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  uVar2 = 0;
  if ((iVar4 == iVar3) || (param_2 < *(int *)(iVar4 + 0x10))) {
    iVar4 = iVar3;
  }
  if (iVar4 != iVar3) {
    uVar2 = *(undefined4 *)(iVar4 + 0x14);
  }
  return uVar2;
}



undefined4 fn_006ec1e4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (param_2 < (uint)((*(int *)(*(int *)(param_1 + 4) + 0xc) - iVar1) / 0xc)) {
    uVar2 = *(undefined4 *)(iVar1 + param_2 * 0xc);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined1 *
fn_006ec11c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint in_fpscr;
  undefined1 auStack_38 [36];
  
  fn_00117ad8(auStack_38);
  puVar1 = (undefined4 *)(**(code **)*param_3)(param_3);
  VectorSignedToFloat(*puVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(puVar1[1],(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(puVar1[1],(byte)(in_fpscr >> 0x16) & 3);
  fn_001286b4(auStack_38);
  fn_001286a8(auStack_38);
  fn_005e6268(param_2,param_3,auStack_38,param_4);
  return auStack_38;
}



undefined1 * fn_006ec068(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint in_fpscr;
  undefined1 auStack_30 [32];
  
  fn_00117ad8(auStack_30);
  puVar1 = (undefined4 *)(**(code **)*param_3)(param_3);
  VectorSignedToFloat(*puVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(puVar1[1],(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(puVar1[1],(byte)(in_fpscr >> 0x16) & 3);
  fn_001286b4(auStack_30);
  fn_001286a8(auStack_30);
  fn_00117688(param_2,param_3,auStack_30);
  return auStack_30;
}



undefined4 fn_006ebfe8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  while( true ) {
    if (*(undefined4 **)(param_1 + 0x18) == puVar2) {
      return 1;
    }
    iVar1 = fn_005f0750(*puVar2);
    if (iVar1 == 0) break;
    puVar2 = puVar2 + 1;
  }
  return 0;
}



void fn_006ebfa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = fn_00176d68();
  fn_006dcca4(uVar1,param_2,param_3,param_4,param_5);
  return;
}



bool fn_006ebf84(int param_1,int param_2)

{
  return *(int *)(param_2 + 0xc) == *(int *)(*(int *)(param_1 + 4) + 0xc);
}



void fn_006ebf54(void)

{
  return;
}



int fn_006ebf30(int param_1,int param_2,int param_3)

{
  return *(int *)(*(int *)(param_1 + 0x148) + 4) + param_2 * 0x158 + param_3 * 0x18 + 0xfc;
}



int fn_006ebf14(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 0x148) + 4) + param_2 * 0x158 + 0x38;
}



int fn_006ebef8(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 0x148) + 4) + param_2 * 0x158 + 0x24;
}



int fn_006ebeec(int param_1)

{
  return *(int *)(param_1 + 0x148) + 0xc;
}



undefined4 fn_006ebe64(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = *(int *)(**(int **)(param_1 + 0x148) + 0x70);
  iVar4 = iVar2 + (uint)*(ushort *)(**(int **)(param_1 + 0x148) + 0x74) * 100;
  while( true ) {
    if (iVar2 == iVar4) {
      return 0;
    }
    if (*(short *)(iVar2 + 4) == -1) break;
    iVar2 = iVar2 + 100;
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x5c);
  iVar2 = **(int **)(param_1 + 0x148);
  uVar1 = fn_002febd8(uVar3);
  uVar1 = fn_00190fe0(iVar2 + 0x74,uVar3,uVar1);
  return uVar1;
}



bool fn_006ebe40(int param_1,uint param_2)

{
  return (param_2 & ~(uint)*(byte *)(*(int *)(param_1 + 0x148) + 0x98)) == 0;
}



int fn_006ebe08(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x148) + 0x70);
  if (iVar2 != 0) {
    for (iVar1 = *(int *)(*(int *)(iVar2 + 0x148) + 0x70); iVar1 != 0;
        iVar1 = *(int *)(*(int *)(iVar1 + 0x148) + 0x70)) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



bool fn_006ebdf4(int param_1,byte param_2)

{
  return (*(byte *)(*(int *)(param_1 + 0x148) + 0x98) & param_2) != 0;
}



int fn_006ebdd4(int param_1)

{
  return (int)*(char *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x4c);
}



void fn_006ebdc0(void)

{
  return;
}



int fn_006ebdac(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x18;
  }
  return param_1;
}



int fn_006ebd98(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x18;
  }
  return param_1;
}



void fn_006ebd6c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_8 [2];
  
  uVar1 = (uint)*(byte *)(*param_1 + 0x23);
  if (uVar1 != 0xff) {
    local_8[0] = param_4;
    fn_00781854(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),local_8);
  }
  return;
}



void fn_006ebd40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_8 [2];
  
  uVar1 = (uint)*(byte *)(*param_1 + 0x1c);
  if (uVar1 != 0xff) {
    local_8[0] = param_4;
    fn_00781854(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),local_8);
  }
  return;
}



void fn_006ebd14(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_8 [2];
  
  uVar1 = (uint)*(byte *)(*param_1 + 0x21);
  if (uVar1 != 0xff) {
    local_8[0] = param_4;
    fn_00781854(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),local_8);
  }
  return;
}


