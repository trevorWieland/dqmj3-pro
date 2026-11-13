#include "006ca788_006caf20.h"



void fn_006caf20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006b7eb4(*(undefined4 *)(DAT_00897804 + 0x24),param_2,1,0);
  uVar2 = fn_006b8068(*(undefined4 *)(DAT_00897804 + 0x24),param_2,1,0);
  fn_00300f74(iVar1 * 100,uVar2);
  return;
}



void fn_006caee4(void)

{
  fn_006b7eb4(*(undefined4 *)(DAT_00897804 + 0x24));
  return;
}



undefined4 fn_006caec4(void)

{
  int iVar1;
  
  iVar1 = fn_006bc48c(*(undefined4 *)(DAT_00897804 + 0x58));
  return *(undefined4 *)(iVar1 + 8);
}



undefined4 fn_006caea4(void)

{
  int iVar1;
  
  iVar1 = fn_006bc48c(*(undefined4 *)(DAT_00897804 + 0x58));
  return *(undefined4 *)(iVar1 + 4);
}



int fn_006cae80(void)

{
  float in_s0;
  
  fn_006b6434(*(undefined4 *)(DAT_00897804 + 8));
  return (int)in_s0;
}



undefined4 fn_006cae54(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined4 *)fn_002b0a98(*(undefined4 *)(DAT_00897804 + 100));
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
  }
  return uVar2;
}



undefined2 fn_006cae20(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  return *puVar1;
}



int fn_006cad7c(void)

{
  undefined4 uVar1;
  ushort local_30;
  ushort local_2e;
  ushort local_2c;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  
  uVar1 = fn_006b870c(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_00166824(&local_30,uVar1);
  uVar1 = fn_006b8724(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_00166824(&local_20,uVar1);
  uVar1 = fn_006b8700(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_00166824(&local_18,uVar1);
  return (uint)local_2c + (uint)local_2e + (uint)local_30 + (uint)local_1c +
         (uint)local_20 + (uint)local_1e + (uint)local_14 + (uint)local_18 + (uint)local_16;
}



undefined2 fn_006cad18(void)

{
  return *(undefined2 *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x2b8);
}



int fn_006cacc0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x24);
  iVar1 = fn_006b7dc4(uVar2,1);
  uVar2 = fn_006b7bc4(uVar2,1);
  fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = (float)VectorSignedToFloat(iVar1 * 100,(byte)(in_fpscr >> 0x16) & 3);
  return (int)(fVar4 / fVar3);
}



int fn_006cac68(void)

{
  int iVar1;
  
  iVar1 = fn_006bc48c(*(undefined4 *)(DAT_00897804 + 0x58));
  return (int)*(char *)(iVar1 + 0x1a);
}



undefined1 fn_006cac54(void)

{
  return *(undefined1 *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 700);
}



undefined2 fn_006cac20(void)

{
  undefined4 uVar1;
  undefined2 local_10 [8];
  
  uVar1 = fn_006b86f4(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_00166824(local_10,uVar1);
  return local_10[0];
}



undefined4 fn_006cac04(undefined4 param_1,int param_2)

{
  if (param_2 == 9) {
    param_2 = 7;
  }
  return *(undefined4 *)(*(int *)(*(int *)(DAT_00897804 + 0x1c) + 4) + param_2 * 0x84 + 0xb0);
}



int fn_006cab80(void)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x24);
  iVar1 = fn_006b7d54(uVar2);
  uVar2 = fn_006b7b7c(uVar2);
  fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = (float)VectorSignedToFloat(iVar1 * 100,(byte)(in_fpscr >> 0x16) & 3);
  return (int)(fVar4 / fVar3);
}



int fn_006cab5c(void)

{
  float in_s0;
  
  fn_006b6328(*(undefined4 *)(DAT_00897804 + 8));
  return (int)in_s0;
}



undefined4 fn_006caab8(void)

{
  return *(undefined4 *)(*(int *)(DAT_00897804 + 4) + 0x20);
}



int fn_006caa68(void)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x24);
  iVar1 = fn_006b7ca4(uVar2);
  uVar2 = fn_006b7aec(uVar2);
  fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = (float)VectorSignedToFloat(iVar1 * 100,(byte)(in_fpscr >> 0x16) & 3);
  return (int)(fVar4 / fVar3);
}



int fn_006caa18(void)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x24);
  iVar1 = fn_006b7c34(uVar2);
  uVar2 = fn_006b7aa8(uVar2);
  fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = (float)VectorSignedToFloat(iVar1 * 100,(byte)(in_fpscr >> 0x16) & 3);
  return (int)(fVar4 / fVar3);
}



bool fn_006ca8cc(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = *(float **)(param_2 + 0x100);
  fVar4 = (*(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x16c)) -
          (*(float *)(param_2 + 0x20) + *pfVar1);
  fVar3 = (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x170)) -
          (*(float *)(param_2 + 0x24) + pfVar1[1]);
  fVar2 = (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x174)) -
          (*(float *)(param_2 + 0x28) + pfVar1[2]);
  return (int)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) < 0x44610001;
}



/* WARNING: Removing unreachable block (ram,0x006ca884) */

uint fn_006ca788(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  uint local_28 [5];
  
  iVar2 = fn_006c9754();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x24) + *(short *)(iVar2 + 2) * 0x40;
  }
  iVar3 = fn_006c9754(param_1,param_2);
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x3c),(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 0x60),(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = fVar5 * fVar6 * 0.1;
  iVar2 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
  if (*(char *)(iVar2 + 7) == '\0') {
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + **(short **)(param_1 + 0x54) * 0x40);
joined_r0x006ca824:
    if (sVar1 == param_2) {
      fVar5 = fVar5 * 5.0;
      fn_006f9f20();
      goto LAB_006ca868;
    }
  }
  else if (*(char *)(iVar2 + 7) == '\x02') {
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + **(short **)(param_1 + 0x54) * 0x40);
    goto joined_r0x006ca824;
  }
  fn_006fa358();
LAB_006ca868:
  local_28[0] = (uint)fVar5;
  puVar4 = local_28 + 1;
  local_28[1] = 9999999;
  local_28[2] = 0;
  if ((int)local_28[0] < 0) {
    puVar4 = local_28 + 2;
  }
  if (local_28[0] < 0x80000000) {
    puVar4 = local_28;
  }
  if (9999999 < (int)*puVar4) {
    puVar4 = local_28 + 1;
  }
  return *puVar4;
}


