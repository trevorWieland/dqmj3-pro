#include "0039e134_0039e774.h"



void fn_0039e774(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = 0;
  uVar2 = *(uint *)(param_1 + 300);
  *(undefined4 *)(param_1 + 300) = 0;
  iVar3 = *(int *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x130) = 0;
  uVar1 = uVar4;
  if (uVar2 < uVar4) {
    do {
      uVar1 = uVar1 + 8;
    } while (uVar1 != uVar2);
  }
  fn_002feef8(uVar4,(int)(iVar3 - uVar4) >> 3,0);
  return;
}



void fn_0039e754(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x138) + param_2 * 4);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  return;
}



void fn_0039e714(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x128) + param_2 * 8);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x128) + param_2 * 8 + 4);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  return;
}



void fn_0039e6a8(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    uVar2 = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x138) + param_2 * 4);
    if (iVar1 != 0) {
      param_3 = (uint)*(byte *)(iVar1 + 0x44);
    }
    if (iVar1 != 0 && (param_3 & 1) != 0) {
      uVar2 = fn_0068af9c();
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x138) + param_2 * 4);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
      fn_0068b010(iVar1,uVar2 ^ 1);
      return;
    }
  }
  return;
}



void fn_0039e5e0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_30 [32];
  
  uVar2 = 0;
  do {
    fn_001028d4(auStack_30,(char *)&DAT_0039e66c,uVar2);
    uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),auStack_30);
    iVar3 = param_1 + uVar2 * 0xc;
    *(undefined4 *)(iVar3 + 0xb0) = uVar1;
    fn_001028d4(auStack_30,(char *)&DAT_0039e680,uVar2);
    uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),auStack_30);
    *(undefined4 *)(iVar3 + 0xb4) = uVar1;
    fn_001028d4(auStack_30,(char *)&DAT_0039e694,uVar2);
    uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),auStack_30);
    uVar2 = uVar2 + 1;
    *(undefined4 *)(iVar3 + 0xb8) = uVar1;
  } while (uVar2 < 10);
  return;
}



void fn_0039e5ac(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    fn_00229d54(param_1 + uVar1 * 0xc + 0xb0,3);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  return;
}



void fn_0039e574(int param_1,int param_2,undefined4 param_3)

{
  undefined1 local_10 [8];
  
  local_10[0] = 0;
  fn_00229ae0(param_1 + param_2 * 0xc + 0xb0,3,param_3,0,1,local_10);
  return;
}



void fn_0039e548(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x138) + param_2 * 4);
  if (iVar1 == 0) {
    return;
  }
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  fn_0068b010(iVar1,param_3);
  return;
}



void fn_0039e4e4(int param_1,int param_2,int param_3,byte param_4)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  
  bVar1 = 0;
  bVar3 = 0;
  if (param_3 != 0) {
    bVar1 = param_4 ^ 1;
    bVar3 = param_4;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x128) + param_2 * 8);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x44) = bVar3 | *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x128) + param_2 * 8 + 4);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | bVar1;
  }
  return;
}



void fn_0039e4cc(void)

{
  DAT_0089283c = 0;
  DAT_00892840 = 0;
  return;
}



int fn_0039e4a4(char param_1,undefined4 param_2)

{
  short sVar1;
  
  sVar1 = fn_002466b8(DAT_0089283c,(int)(char)(param_1 + -1),param_2);
  return (int)sVar1;
}



void fn_0039e3b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0039e3e0(iVar1,param_1);
  return;
}



void fn_0039e3e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_00893ae0,1);
  *puVar1 = &DAT_0082cedc;
  return;
}



void fn_0039e3ac(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0082bdd0;
  iVar1 = fn_0059e2ac(param_1 + 0x2c);
  fn_002c471c(iVar1 + -0xb0);
  return;
}



void fn_0039e374(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x3a] = 0;
  *puVar1 = &PTR_FUN_0082cd94;
  puVar1[0x3b] = 0;
  *(undefined1 *)(puVar1 + 0x3c) = 0;
  return;
}



void fn_0039e370(int param_1)

{
  fn_0059e110(param_1 + 0xb0);
  fn_002c4304(param_1);
  return;
}



void fn_0039e35c(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_0039e1c4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *local_44;
  undefined1 auStack_40 [52];
  
  iVar1 = fn_0028af90(*(undefined4 *)(DAT_00897804 + 0xc),**(undefined4 **)(param_1[0x39] + 8));
  if (iVar1 == 0) {
    uVar2 = fn_00230a84(1,0);
  }
  else {
    uVar2 = fn_00230a84(0,0);
  }
  fn_00231074(&local_44,*(undefined4 *)(param_1[0x39] + 8),0);
  fn_00101a50(auStack_40,0x18,L"%ls%ls",uVar2,local_44);
  (**(code **)(*param_1 + 0x13c))(param_1,1,0,auStack_40);
  if (local_44 != &DAT_008f9cf4) {
    piVar3 = local_44 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  return;
}



void fn_0039e134(int *param_1)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),(int)*(short *)(param_1[0x39] + 0x10));
  fn_0018a618(&local_28,0xc,0xb,&DAT_0039e1b8,uVar1);
  (**(code **)(*param_1 + 0x13c))(param_1,0,1,&local_28);
  return;
}


