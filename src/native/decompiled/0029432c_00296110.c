#include "0029432c_00296110.h"



bool fn_00296110(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x2c) == 0;
  if (bVar1) {
    param_1 = *(int *)(param_1 + 0x34);
  }
  return bVar1 && param_1 == 0;
}



void fn_00296090(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = fn_0067a1d0(param_2);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_002feca8(*(int *)(param_1 + 0x2c) + -8);
  }
  iVar3 = *(int *)(param_1 + 0x30);
  puVar2 = (undefined4 *)fn_001287d4(iVar3 * 0x128 + 8,&DAT_00812c8c);
  uVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x128;
    puVar2[1] = iVar3;
    uVar1 = fn_00101a1c(puVar2 + 2,&LAB_0066e074,0x128,iVar3);
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  fn_0067a1a8(param_2,uVar1);
  return;
}



void fn_00296058(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_002feca8(*(int *)(param_1 + 0x2c) + -8);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_002feca8(*(int *)(param_1 + 0x34) + -8);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



void fn_00295fec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    uVar2 = fn_001287d4(0x4f216,&DAT_00812c8c);
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + iVar1 + 700) = uVar2;
  } while (iVar3 < 3);
  return;
}



void fn_00295fc4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00615ee4();
  fn_0010706c(uVar1,&LAB_006a78b0,2);
  *(undefined1 *)(param_1 + 0x29) = 1;
  return;
}



void fn_00295fb8(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x2c8) = param_3;
  return;
}



bool fn_00295fa4(int param_1,int param_2)

{
  return *(int *)(param_1 + param_2 * 4 + 0x2c8) != 0;
}



void fn_00295a48(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00615ee4();
  fn_0010706c(uVar1,&LAB_006a78b0,2);
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



undefined4 * fn_00294720(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_0081e4dc;
  fn_0028e434(puVar1[4],&DAT_007c9a44);
  fn_0028e434(puVar1[5],&DAT_007c9a94);
  fn_0028e434(puVar1[3],&DAT_007c9df0);
  return puVar1;
}



void fn_00294690(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int local_30 [4];
  
  iVar2 = 0;
  do {
    local_30[0] = 0;
    local_30[1] = 1;
    local_30[2] = 3;
    local_30[3] = 5;
    iVar1 = local_30[param_1];
    if ((-1 < iVar2) && (iVar1 != 0)) {
      puVar3 = (undefined1 *)(param_2 + iVar2 * 6);
      *puVar3 = 1;
      fn_002eb5ac(local_30,iVar2,iVar1 + -1);
      *(short *)(puVar3 + 2) = (short)((uint)local_30[0] >> 0x10);
      puVar3[1] = (char)((uint)local_30[0] >> 8);
      *(short *)(puVar3 + 4) = (short)local_30[1];
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return;
}



void fn_00294630(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 local_10 [4];
  undefined2 local_c;
  
  if (param_1 < 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined1 *)(param_3 + param_1 * 6);
  *puVar1 = 1;
  fn_002eb5ac(local_10,param_1,param_2 + -1);
  *(short *)(puVar1 + 2) = ((*(unsigned int *)((unsigned char *)local_10 + 2)) & 0xffff);
  puVar1[1] = local_10[1];
  *(undefined2 *)(puVar1 + 4) = local_c;
  return;
}



undefined4 fn_00294610(int param_1)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  local_10[1] = 1;
  local_10[2] = 3;
  local_10[3] = 5;
  return local_10[param_1];
}



void fn_00294598(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_20 [8];
  
  iVar2 = 0;
  do {
    cVar1 = *(char *)(param_1 + iVar2);
    if ((-1 < iVar2) && (cVar1 != 0)) {
      puVar3 = (undefined1 *)(param_2 + iVar2 * 6);
      *puVar3 = 1;
      fn_002eb5ac(local_20,iVar2,cVar1 + -1);
      *(short *)(puVar3 + 2) = ((*(unsigned int *)((unsigned char *)local_20 + 2)) & 0xffff);
      puVar3[1] = local_20[1];
      *(short *)(puVar3 + 4) = ((*(unsigned int *)((unsigned char *)local_20 + 4)) & 0xffff);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return;
}



void fn_002943bc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_54 [2];
  undefined2 auStack_52 [15];
  char cStack_34;
  undefined1 uStack_33;
  undefined2 uStack_32;
  undefined2 uStack_30;
  char cStack_2e;
  undefined1 uStack_2d;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  char cStack_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  undefined2 uStack_24;
  char cStack_22;
  undefined1 uStack_21;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  char cStack_1c;
  undefined1 uStack_1b;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  
  uVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 0xc));
  fn_0018921c(*(undefined4 *)(param_1 + 0x40),uVar1);
  uVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 0xc));
  fn_00173a34(*(undefined4 *)(param_1 + 0x14),uVar1);
  iVar2 = fn_00191228(*(undefined4 *)(param_1 + 0x14));
  if (iVar2 != 0) {
    fn_00185320(*(undefined4 *)(param_1 + 0x14));
  }
  iVar2 = fn_00191218(*(undefined4 *)(param_1 + 0x14));
  if (iVar2 != 0) {
    fn_001852ac(*(undefined4 *)(param_1 + 0x14));
  }
  uVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 0x1c));
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  fn_00301a9c(&cStack_34,param_1 + 0x20,0x1e);
  if (cStack_34 != '\0') {
    auStack_54[0] = 4;
    auStack_54[1] = uStack_33;
    auStack_52[0] = uStack_32;
    auStack_52[1] = uStack_30;
  }
  uVar5 = (uint)(cStack_34 != '\0');
  uVar4 = uVar5;
  if (cStack_2e != '\0') {
    uVar4 = uVar5 + 1;
    auStack_54[uVar5 * 6] = 0xd;
    auStack_54[uVar5 * 6 + 1] = uStack_2d;
    auStack_52[uVar5 * 3] = uStack_2c;
    auStack_52[uVar5 * 3 + 1] = uStack_2a;
  }
  uVar5 = uVar4;
  if (cStack_28 != '\0') {
    uVar5 = uVar4 + 1;
    auStack_54[uVar4 * 6] = 10;
    auStack_54[uVar4 * 6 + 1] = uStack_27;
    auStack_52[uVar4 * 3] = uStack_26;
    auStack_52[uVar4 * 3 + 1] = uStack_24;
  }
  uVar4 = uVar5;
  if (cStack_22 != '\0') {
    uVar4 = uVar5 + 1;
    auStack_54[uVar5 * 6] = 0xf;
    auStack_54[uVar5 * 6 + 1] = uStack_21;
    auStack_52[uVar5 * 3] = uStack_20;
    auStack_52[uVar5 * 3 + 1] = uStack_1e;
  }
  uVar5 = uVar4;
  if (cStack_1c != '\0') {
    uVar5 = uVar4 + 1;
    auStack_54[uVar4 * 6] = 8;
    auStack_54[uVar4 * 6 + 1] = uStack_1b;
    auStack_52[uVar4 * 3] = uStack_1a;
    auStack_52[uVar4 * 3 + 1] = uStack_18;
  }
  fn_003119e0(uVar6,uVar3,uVar1,auStack_54,uVar5);
  return;
}



void fn_0029432c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 local_20 [8];
  
  fn_00301a9c(param_2,&DAT_007ba154,0x1e);
  uVar2 = 0;
  do {
    iVar1 = (int)*(char *)(param_1 + uVar2 + 0xc4);
    if (iVar1 != 0) {
      puVar3 = (undefined1 *)(param_2 + uVar2 * 6);
      *puVar3 = 1;
      fn_002eb5ac(local_20,uVar2,iVar1 + -1);
      *(short *)(puVar3 + 2) = ((*(unsigned int *)((unsigned char *)local_20 + 2)) & 0xffff);
      puVar3[1] = local_20[1];
      *(short *)(puVar3 + 4) = ((*(unsigned int *)((unsigned char *)local_20 + 4)) & 0xffff);
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 5);
  return;
}


