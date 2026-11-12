#include "0013c6f8_0013cbe8b.h"



void fn_0013cbe8(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  
  cVar1 = (char)param_1[6];
  if (cVar1 == '\0') {
    fn_00160314(param_2,param_3,param_4,param_5,(int)*param_1,(int)param_1[3]);
    return;
  }
  if (cVar1 == '\x01') {
    fn_001505d4(param_2,param_3,param_4,param_5,(int)param_1[1],(int)param_1[4]);
    return;
  }
  if (cVar1 == '\x02') {
    fn_001506d8(param_2,param_3,param_4,param_5,(int)param_1[2],(int)param_1[5]);
  }
  return;
}



void fn_0013cb9c(short *param_1)

{
  if (*param_1 < 0x28) {
    *param_1 = 0x28;
  }
  if (param_1[1] < 0x24) {
    param_1[1] = 0x24;
  }
  if (0x91 < param_1[3]) {
    param_1[3] = 0x91;
  }
  if (0x91 < param_1[4]) {
    param_1[4] = 0x91;
  }
  if (0x91 < param_1[5]) {
    param_1[5] = 0x91;
  }
  return;
}



void fn_0013cb20(short *param_1,int param_2,int param_3)

{
  char cVar1;
  uint in_fpscr;
  
  cVar1 = (char)param_1[6];
  VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  if (cVar1 == '\0') {
    param_3 = (int)(short)(param_1[3] - *param_1);
  }
  else if (cVar1 == '\x01') {
    param_3 = (int)(short)(param_1[4] - param_1[1]);
  }
  else if (cVar1 == '\x02') {
    param_3 = 0x69;
  }
  if ((param_2 != 0) && (param_2 < param_3)) {
    VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  }
  return;
}



void fn_0013cb18(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint in_fpscr;
  
  cVar1 = *(char *)(param_1 + 0x18);
  VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  if (cVar1 == '\0') {
    param_3 = (int)(short)(*(short *)(param_1 + 0x12) - *(short *)(param_1 + 0xc));
  }
  else if (cVar1 == '\x01') {
    param_3 = (int)(short)(*(short *)(param_1 + 0x14) - *(short *)(param_1 + 0xe));
  }
  else if (cVar1 == '\x02') {
    param_3 = 0x69;
  }
  if ((param_2 != 0) && (param_2 < param_3)) {
    VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  }
  return;
}



void fn_0013ca5c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  *param_1 = param_2;
  param_1[8] = param_5 & 0xff;
  param_1[6] = param_3;
  param_1[7] = param_4;
  fn_0014e784(param_1 + 3,4);
  if (DAT_008c3c30 == '\0') {
    fn_0014e784(&DAT_008f3140,4);
    DAT_008c3c30 = '\x01';
  }
  puVar4 = (uint *)&DAT_008f3140;
  iVar3 = 0;
  do {
    iVar3 = fn_0015e6d8(&DAT_008f3140,iVar3);
    if (iVar3 == 0) goto LAB_0013cb00;
  } while ((param_1 < *(undefined4 **)(iVar3 + 0x18)) || (*(undefined4 **)(iVar3 + 0x1c) <= param_1)
          );
  iVar1 = fn_0015e680(iVar3 + 0xc,param_1);
  if (iVar1 == 0) {
    iVar1 = iVar3;
  }
  puVar4 = (uint *)(iVar1 + 0xc);
LAB_0013cb00:
  puVar2 = (uint *)((uint)*(ushort *)((int)puVar4 + 10) + (int)param_1);
  if (*puVar4 == 0) {
    puVar2[1] = 0;
    *puVar2 = 0;
    *puVar4 = (uint)param_1;
    puVar4[1] = (uint)param_1;
    *(short *)(puVar4 + 2) = (short)puVar4[2] + 1;
    return;
  }
  uVar5 = puVar4[1];
  puVar2[1] = 0;
  *puVar2 = uVar5;
  *(undefined4 **)(puVar4[1] + (uint)*(ushort *)((int)puVar4 + 10) + 4) = param_1;
  puVar4[1] = (uint)param_1;
  *(short *)(puVar4 + 2) = (short)puVar4[2] + 1;
  return;
}



void fn_0013c920(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined2 *puVar9;
  
  piVar8 = (int *)(param_1 + 0x24);
  puVar9 = (undefined2 *)(*(int *)(param_2 + -0xc) + param_2);
  puVar7 = (undefined2 *)((param_2 + -0x10) - ((*(ushort *)(param_2 + -0xe) & 0x7fff) >> 8));
  iVar2 = *(int *)(param_2 + -8);
  iVar4 = *(int *)(param_2 + -4);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x2c) = iVar4;
  }
  else {
    *(int *)(iVar2 + 0xc) = iVar4;
  }
  if (iVar4 == 0) {
    *(int *)(param_1 + 0x30) = iVar2;
  }
  else {
    *(int *)(iVar4 + 8) = iVar2;
  }
  puVar6 = (undefined2 *)0x0;
  puVar3 = (undefined2 *)0x0;
  puVar5 = (undefined2 *)*piVar8;
  if ((undefined2 *)*piVar8 != (undefined2 *)0x0) {
    do {
      if (puVar7 <= puVar5) {
        if (puVar9 == puVar5) {
          puVar9 = (undefined2 *)((int)puVar5 + *(int *)(puVar5 + 2) + 0x10);
          iVar4 = *(int *)(puVar5 + 4);
          iVar2 = *(int *)(puVar5 + 6);
          if (iVar4 == 0) {
            *piVar8 = iVar2;
          }
          else {
            *(int *)(iVar4 + 0xc) = iVar2;
          }
          if (iVar2 == 0) {
            *(int *)(param_1 + 0x28) = iVar4;
          }
          else {
            *(int *)(iVar2 + 8) = iVar4;
          }
        }
        break;
      }
      puVar1 = (undefined4 *)(puVar5 + 6);
      puVar3 = puVar5;
      puVar5 = (undefined2 *)*puVar1;
    } while ((undefined2 *)*puVar1 != (undefined2 *)0x0);
    puVar6 = puVar3;
    if ((puVar3 != (undefined2 *)0x0) &&
       ((undefined2 *)((int)puVar3 + *(int *)(puVar3 + 2) + 0x10) == puVar7)) {
      puVar6 = *(undefined2 **)(puVar3 + 4);
      iVar2 = *(int *)(puVar3 + 6);
      if (puVar6 == (undefined2 *)0x0) {
        *piVar8 = iVar2;
      }
      else {
        *(int *)(puVar6 + 6) = iVar2;
      }
      puVar7 = puVar3;
      if (iVar2 == 0) {
        *(undefined2 **)(param_1 + 0x28) = puVar6;
      }
      else {
        *(undefined2 **)(iVar2 + 8) = puVar6;
      }
    }
  }
  if (0xf < (uint)((int)puVar9 - (int)puVar7)) {
    *puVar7 = 0x4652;
    puVar7[1] = 0;
    *(uint *)(puVar7 + 2) = ((int)puVar9 - (int)puVar7) - 0x10;
    *(undefined2 **)(puVar7 + 4) = puVar6;
    *(undefined4 *)(puVar7 + 6) = 0;
    if (puVar6 == (undefined2 *)0x0) {
      iVar2 = *piVar8;
      *piVar8 = (int)puVar7;
    }
    else {
      iVar2 = *(int *)(puVar6 + 6);
      *(undefined2 **)(puVar6 + 6) = puVar7;
    }
    *(int *)(puVar7 + 6) = iVar2;
    if (iVar2 == 0) {
      *(undefined2 **)(param_1 + 0x28) = puVar7;
    }
    else {
      *(undefined2 **)(iVar2 + 8) = puVar7;
    }
  }
  return;
}


