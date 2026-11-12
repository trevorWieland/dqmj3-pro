#include "00145464_0014594c.h"



undefined4 fn_0014594c(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint in_s0;
  
  uVar2 = fn_00156454(*(undefined4 *)(param_1 + 4),param_3);
  puVar3 = (uint *)fn_00156488(uVar2,param_4);
  puVar4 = (uint *)fn_00156448(*(undefined4 *)(param_1 + 4));
  uVar5 = *puVar3;
  if (uVar5 < *puVar4) {
    if (puVar4 + uVar5 * 2 + 1 != (uint *)0x0) {
      *param_2 = puVar4[uVar5 * 2 + 1];
      param_2[1] = puVar4[uVar5 * 2 + 2];
      fn_0015657c(puVar3);
      param_2[5] = in_s0;
      uVar2 = fn_001564c4(puVar3);
      fn_00176fb0(param_2 + 2,uVar2);
      uVar1 = fn_00156500(puVar3);
      *(undefined1 *)((int)param_2 + 0xd) = uVar1;
      uVar1 = fn_00156554(puVar3);
      *(undefined1 *)((int)param_2 + 0xe) = uVar1;
      uVar1 = fn_00156528(puVar3);
      *(undefined1 *)((int)param_2 + 0xf) = uVar1;
      uVar1 = fn_001565f0(puVar3);
      *(undefined1 *)(param_2 + 4) = uVar1;
      return 1;
    }
  }
  return 0;
}



undefined4 fn_0014590c(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 0x2001) {
    param_1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x2001) {
    param_1 = param_1 + 0x20;
  }
  else if (*(short *)(param_1 + 0x2c) == 0x2001) {
    param_1 = param_1 + 0x2c;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}



undefined4 fn_001458cc(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 0x2001) {
    param_1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x2001) {
    param_1 = param_1 + 0x20;
  }
  else if (*(short *)(param_1 + 0x2c) == 0x2001) {
    param_1 = param_1 + 0x2c;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 8);
}



undefined4 fn_00145878(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint in_r12;
  
  puVar3 = (uint *)*param_1;
  if (puVar3 != (uint *)0x0) {
    in_r12 = *puVar3;
  }
  if ((puVar3 != (uint *)0x0 && param_3 < in_r12) &&
     (puVar2 = (undefined4 *)(puVar3[param_3 * 2 + 2] + (int)puVar3), puVar2 != (undefined4 *)0x0))
  {
    *param_2 = *puVar2;
    if (puVar2[2] == -1) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1[1] + puVar2[2];
    }
    param_2[1] = iVar1;
    return 1;
  }
  return 0;
}



undefined4 fn_00145838(int param_1,undefined4 *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = *(uint **)(param_1 + 8);
  uVar3 = 0;
  if (puVar1 != (uint *)0x0) {
    if ((*puVar1 <= param_3) ||
       (puVar2 = (undefined4 *)((int)puVar1 + puVar1[param_3 * 2 + 2]), puVar2 == (undefined4 *)0x0)
       ) {
      return 0;
    }
    uVar3 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar3;
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 fn_00145828(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + 8);
  }
  return uVar1;
}



uint fn_001457bc(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = fn_0015697c(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x34))(piVar2,param_2);
    }
    uVar1 = uVar1 | uVar3;
  }
  return uVar1;
}



uint fn_00145764(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = fn_001568d0(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,param_2,param_3);
    }
    uVar1 = uVar1 | uVar3;
  }
  return uVar1;
}



uint fn_0014570c(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = fn_00156864(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x48))(piVar2,param_2,param_3);
    }
    uVar1 = uVar1 | uVar3;
  }
  return uVar1;
}



uint fn_001456b4(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = fn_0015690c(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x3c))(piVar2,param_2,param_3);
    }
    uVar1 = uVar1 | uVar3;
  }
  return uVar1;
}



uint fn_0014565c(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = fn_001567a4(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,param_2,param_3);
    }
    uVar1 = uVar1 | uVar3;
  }
  return uVar1;
}



uint fn_00145604(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = fn_0015676c(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2,param_2,param_3);
    }
    uVar1 = uVar1 | uVar3;
  }
  return uVar1;
}



uint * fn_00145464(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  
  fVar6 = (float)VectorUnsignedToFloat(param_1[2],(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = fVar6 * 0.5;
  iVar4 = 0;
  if ((ABS(fVar6) == 0.0) || (iVar4 = ((uint)ABS(fVar6) >> 0x17) - 0x40, -1 < iVar4)) {
    uVar5 = ((uint)fVar6 & 0x7fffff) >> 7 | iVar4 << 0x10 | ((uint)fVar6 >> 0x1f) << 0x17;
  }
  else {
    uVar5 = ((uint)fVar6 >> 0x1f) << 0x17;
  }
  fVar6 = (float)VectorUnsignedToFloat(param_1[2],(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = 2.0 / fVar6;
  if (ABS(fVar6) == 0.0) {
    iVar4 = 0;
LAB_00145504:
    uVar1 = (uint)fVar6 & 0x7fffff | iVar4 << 0x17 | ((uint)fVar6 >> 0x1f) << 0x1e;
  }
  else {
    iVar4 = ((uint)ABS(fVar6) >> 0x17) - 0x40;
    if (-1 < iVar4) goto LAB_00145504;
    uVar1 = ((uint)fVar6 >> 0x1f) << 0x1e;
  }
  fVar6 = (float)VectorUnsignedToFloat(param_1[3],(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = fVar6 * 0.5;
  iVar4 = 0;
  if ((ABS(fVar6) == 0.0) || (iVar4 = ((uint)ABS(fVar6) >> 0x17) - 0x40, -1 < iVar4)) {
    uVar3 = ((uint)fVar6 & 0x7fffff) >> 7 | iVar4 << 0x10 | ((uint)fVar6 >> 0x1f) << 0x17;
  }
  else {
    uVar3 = ((uint)fVar6 >> 0x1f) << 0x17;
  }
  fVar6 = (float)VectorUnsignedToFloat(param_1[3],(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = 2.0 / fVar6;
  if (ABS(fVar6) == 0.0) {
    iVar4 = 0;
  }
  else {
    iVar4 = ((uint)ABS(fVar6) >> 0x17) - 0x40;
    if (iVar4 < 0) {
      uVar2 = ((uint)fVar6 >> 0x1f) << 0x1e;
      goto LAB_001455b0;
    }
  }
  uVar2 = (uint)fVar6 & 0x7fffff | iVar4 << 0x17 | ((uint)fVar6 >> 0x1f) << 0x1e;
LAB_001455b0:
  *param_2 = uVar5;
  param_2[1] = 0x70041;
  param_2[2] = uVar1 << 1;
  param_2[3] = 0xf0042;
  param_2[4] = uVar3;
  param_2[5] = 0x70043;
  param_2[6] = uVar2 << 1;
  param_2[7] = 0xf0044;
  param_2[8] = *param_1 | param_1[1] << 0x10;
  param_2[9] = 0xf0068;
  return param_2 + 10;
}


