#include "00445ff8_00447fb4a.h"



void fn_00446bc4(void)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250();
}



void fn_00446ad0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_00446b78);
  iVar2 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_00446b80);
  iVar3 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_00446b88);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
  uVar4 = fn_00446a48(param_1,param_2);
  iVar1 = fn_006b860c(*(undefined4 *)(DAT_00897804 + 0xc),uVar4);
  if (iVar1 == 0) {
    pcVar5 = (char *)&DAT_00446bac;
  }
  else {
    pcVar5 = (char *)&DAT_00446b94;
  }
  uVar4 = fn_0022f584(pcVar5,0);
  fn_00190d50(iVar3,uVar4);
  return;
}



int fn_00446a48(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = fn_006ba284();
  uVar3 = param_2 + iVar2 * 7;
  uVar1 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 1;
  if (uVar1 <= uVar3) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar3,uVar1);
  }
  return (int)*(short *)(*(int *)(param_1 + 0xec) + uVar3 * 2);
}



undefined4 * fn_004469c8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0083e678;
  *(undefined1 *)(puVar1 + 0x2d) = 0;
  puVar2 = (undefined4 *)fn_001f74d8(puVar1,0x46);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951b8) goto LAB_00446a24;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00446a24:
  puVar1[0x2c] = puVar2;
  return puVar1;
}



void fn_00446670(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_002c3d68();
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00894498) goto LAB_004466b8;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_004466b8:
  fn_006899f4(param_1,puVar2[3],0,1);
  fn_005c19d0(puVar2);
  return;
}



void fn_00446560(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  
  pbVar1 = (byte *)fn_006ba018(*(undefined4 *)(DAT_00897804 + 0x10));
  if ((*pbVar1 & 1) == 0) {
    uVar2 = fn_0022f584((char *)&DAT_00446650,0);
    fn_0058c9a8(*(undefined4 *)(param_1 + 0xb0),uVar2);
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x3f0) = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x3f4) = 0xffffffff;
    fn_00445904(*(undefined4 *)(param_1 + 0xb0));
    return;
  }
  fn_0058c9a8(*(undefined4 *)(param_1 + 0xb0),pbVar1 + 4);
  uVar2 = fn_006ba02c(*(undefined4 *)(DAT_00897804 + 0x10),param_2);
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x3f0) = uVar2;
  uVar2 = fn_006ba084(*(undefined4 *)(DAT_00897804 + 0x10),param_2);
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x3f4) = uVar2;
  fn_00445904(*(undefined4 *)(param_1 + 0xb0));
  uVar3 = 0;
  do {
    if (*(int *)(pbVar1 + uVar3 * 4 + 0x1c) != 0) {
      uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      fn_00445884(*(undefined4 *)(param_1 + 0xb0),uVar2);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return;
}



void fn_00445ff8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0083e664;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  *(undefined1 *)((int)puVar1 + 10) = 0;
  *(undefined1 *)((int)puVar1 + 0xb) = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0xe) = 0;
  return;
}


