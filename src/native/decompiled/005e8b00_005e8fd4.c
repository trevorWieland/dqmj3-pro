#include "005e8b00_005e8fd4.h"



void fn_005e8fd4(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == '\0') {
    if (*(undefined2 **)(param_2 + 0xc) != (undefined2 *)0x0 && *(int *)(param_2 + 0x10) != 0) {
      iVar1 = fn_00183660(*(int *)(param_2 + 0x10),**(undefined2 **)(param_2 + 0xc));
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0x108);
      }
      if ((iVar1 != 0 && iVar2 != 0) && (iVar2 = fn_001030bc(iVar2,(char *)&DAT_005e903c), iVar2 != 0)) {
        return;
      }
    }
  }
  fn_005ea480(param_1,param_2);
  return;
}



void fn_005e8fb8(undefined4 *param_1,int *param_2,int param_3)

{
  *param_1 = *(undefined4 *)(*(int *)(*(int *)(*param_2 + 0x30) + 0x78) + param_3 * 4);
  return;
}



int * fn_005e8f88(int *param_1)

{
  if (*param_1 != 0) {
    fn_002feef8();
    *param_1 = 0;
  }
  fn_002feef8(*param_1);
  return param_1;
}



undefined4 * fn_005e8f2c(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = 0;
  puVar1 = (undefined1 *)fn_00145b00(4,&DAT_00812c8c);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = 1;
  }
  if ((undefined1 *)*param_1 != puVar1) {
    fn_002feef8();
    *param_1 = puVar1;
  }
  return param_1;
}



void fn_005e8f10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006dcfbc(*param_1,*param_2);
  *param_2 = uVar1;
  return;
}



int * fn_005e8ee0(int *param_1)

{
  if (*param_1 != 0) {
    fn_002feef8();
    *param_1 = 0;
  }
  fn_002feef8(*param_1);
  return param_1;
}



void fn_005e8e60(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 5) = param_2;
  *(undefined1 *)(iVar1 + 6) = param_3;
  *(undefined1 *)(iVar1 + 7) = param_4;
  *(undefined1 *)(iVar1 + 8) = param_5;
  *(undefined1 *)(iVar1 + 9) = param_6;
  *(undefined1 *)(iVar1 + 10) = param_7;
  return;
}



void fn_005e8e50(int *param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 0x19) = param_2;
  *(undefined1 *)(iVar1 + 0x1a) = param_3;
  return;
}



void fn_005e8e30(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *param_1;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar1 + 0x1c) = *param_2;
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  *(undefined4 *)(iVar1 + 0x24) = uVar3;
  *(undefined4 *)(iVar1 + 0x28) = uVar4;
  return;
}



void fn_005e8e18(int *param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 4) = param_2;
  *(undefined1 *)(iVar1 + 0xc) = param_2;
  *(undefined1 *)(iVar1 + 0x14) = param_2;
  *(undefined1 *)(iVar1 + 0x18) = param_2;
  return;
}



void fn_005e8d9c(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = param_2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = param_2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  return;
}



void fn_005e8bb0(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint *puVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  
  pbVar2 = (byte *)*param_1;
  if ((*pbVar2 & 1) != 0) {
    uVar3 = fn_006dd37c(pbVar2 + 4,*param_2);
    *param_2 = uVar3;
  }
  if ((*pbVar2 & 2) != 0) {
    uVar3 = fn_006dd2dc(pbVar2 + 0xc,*param_2);
    *param_2 = uVar3;
  }
  if ((*pbVar2 & 4) != 0) {
    uVar3 = fn_006dd2a0(pbVar2 + 0x14,*param_2);
    *param_2 = uVar3;
  }
  if ((*pbVar2 & 8) != 0) {
    uVar3 = fn_006dd340(pbVar2 + 0x18,*param_2);
    *param_2 = uVar3;
  }
  if ((*pbVar2 & 0x10) != 0) {
    fVar8 = *(float *)(pbVar2 + 0x1c);
    fVar5 = 1.0;
    fVar7 = 0.0;
    puVar4 = (uint *)*param_2;
    uVar1 = *(ushort *)(&DAT_007e1ae0 + (char)pbVar2[0x14] * 2);
    if (1.0 < fVar8) {
      fVar8 = fVar5;
    }
    else if (fVar8 < 0.0) {
      fVar8 = fVar7;
    }
    uVar9 = VectorFloatToUnsigned(fVar8 * 255.0 + 0.5,3);
    fVar8 = *(float *)(pbVar2 + 0x20);
    if (1.0 < fVar8) {
      fVar8 = fVar5;
    }
    else if (fVar8 < 0.0) {
      fVar8 = fVar7;
    }
    uVar10 = VectorFloatToUnsigned(fVar8 * 255.0 + 0.5,3);
    fVar12 = *(float *)(pbVar2 + 0x24);
    fVar8 = fVar5;
    if (fVar12 <= 1.0) {
      if (fVar12 < 0.0) {
        fVar8 = fVar7;
      }
      else {
        fVar8 = fVar12;
      }
    }
    uVar11 = VectorFloatToUnsigned(fVar8 * 255.0 + 0.5,3);
    fVar8 = *(float *)(pbVar2 + 0x28);
    if (fVar8 <= 1.0) {
      if (fVar8 < 0.0) {
        fVar5 = fVar7;
      }
      else {
        fVar5 = fVar8;
      }
    }
    iVar6 = VectorFloatToUnsigned(fVar5 * 255.0 + 0.5,3);
    *puVar4 = uVar9 & 0xff | (uVar10 & 0xff) << 8 | (uVar11 & 0xff) << 0x10 | iVar6 << 0x18;
    puVar4[1] = uVar1 + 3 | 0xf0000;
    *param_2 = puVar4 + 2;
  }
  return;
}



void fn_005e8b80(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 0xd) = param_2;
  *(undefined1 *)(iVar1 + 0xe) = param_3;
  *(undefined1 *)(iVar1 + 0xf) = param_4;
  *(undefined1 *)(iVar1 + 0x10) = param_5;
  *(undefined1 *)(iVar1 + 0x11) = param_6;
  *(undefined1 *)(iVar1 + 0x12) = param_7;
  return;
}



void fn_005e8b70(int *param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 0x15) = param_2;
  *(undefined1 *)(iVar1 + 0x16) = param_3;
  return;
}



void fn_005e8b54(undefined4 *param_1,int *param_2,int param_3)

{
  *param_1 = *(undefined4 *)(*(int *)(*(int *)(*param_2 + 0x30) + 0x60) + param_3 * 4);
  return;
}



void fn_005e8b38(undefined4 *param_1,int *param_2,int param_3)

{
  *param_1 = *(undefined4 *)(*(int *)(*(int *)(*param_2 + 0x30) + 0x6c) + param_3 * 4);
  return;
}



void fn_005e8b2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



void fn_005e8b00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00858ae8;
  fn_002feef8(param_1[7]);
  fn_005df880(param_1);
  fn_002feef8();
  return;
}


