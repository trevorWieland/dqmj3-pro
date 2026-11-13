#include "00190fb4_001915c8aa.h"



void fn_001910ec(int param_1)

{
  uint in_fpscr;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
    VectorSignedToFloat(*(int *)(param_1 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(int *)(param_1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  }
  return;
}



uint fn_00190fe0(short *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar6 = *(uint **)(param_1 + 2);
  puVar5 = puVar6 + (uint)(ushort)puVar6[1] * 3;
  if (*param_1 != 0) {
    puVar4 = puVar5;
    if (*puVar5 < *puVar6) {
      do {
        uVar3 = *puVar4 >> 3;
        if ((uVar3 < param_3) && (((int)*(char *)(param_2 + uVar3) >> (*puVar4 & 7) & 1U) != 0)) {
          uVar1 = *(ushort *)((int)puVar4 + 6);
        }
        else {
          uVar1 = (ushort)puVar4[1];
        }
        puVar5 = puVar6 + (uint)uVar1 * 3;
        uVar3 = *puVar4;
        puVar4 = puVar5;
      } while (*puVar5 < uVar3);
    }
    if ((puVar5[2] != 0) && (iVar2 = fn_003035b0(), iVar2 == 0)) {
      return ((int)puVar5 - (int)(puVar6 + 3)) / 0xc & 0xffff;
    }
  }
  return 0xffff;
}



uint fn_00190fb4(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  
  iVar6 = **(int **)(param_1 + 0x148);
  uVar2 = fn_002febd8(param_2);
  puVar7 = *(uint **)(iVar6 + 0x3c);
  puVar5 = puVar7 + (uint)(ushort)puVar7[1] * 3;
  if (*(short *)(iVar6 + 0x38) != 0) {
    puVar4 = puVar5;
    if (*puVar5 < *puVar7) {
      do {
        uVar3 = *puVar4 >> 3;
        if ((uVar3 < uVar2) && (((int)*(char *)(param_2 + uVar3) >> (*puVar4 & 7) & 1U) != 0)) {
          uVar1 = *(ushort *)((int)puVar4 + 6);
        }
        else {
          uVar1 = (ushort)puVar4[1];
        }
        puVar5 = puVar7 + (uint)uVar1 * 3;
        uVar3 = *puVar4;
        puVar4 = puVar5;
      } while (*puVar5 < uVar3);
    }
    if ((puVar5[2] != 0) && (iVar6 = fn_003035b0(), iVar6 == 0)) {
      return ((int)puVar5 - (int)(puVar7 + 3)) / 0xc & 0xffff;
    }
  }
  return 0xffff;
}


