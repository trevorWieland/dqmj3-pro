#include "005ea3f0_005ea69c.h"



void fn_005ea69c(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x148) + 0x8c) + param_2 * 4);
  if (*piVar1 != 0) {
    fn_005e7e54();
    fn_002feef8();
    *piVar1 = 0;
  }
  return;
}



undefined4 fn_005ea654(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x148);
  if (*(int *)(*(int *)(iVar3 + 0x8c) + param_2 * 4) == 0) {
    iVar1 = fn_00145b00(4,&DAT_00812c8c);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = fn_005e7d54();
    }
    *(undefined4 *)(*(int *)(iVar3 + 0x8c) + param_2 * 4) = uVar2;
  }
  return *(undefined4 *)(*(int *)(iVar3 + 0x8c) + param_2 * 4);
}



undefined4 fn_005ea648(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(**(int **)(param_1 + 4) + 0x148);
  if (*(int *)(*(int *)(iVar3 + 0x8c) + param_2 * 4) == 0) {
    iVar1 = fn_00145b00(4,&DAT_00812c8c);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = fn_005e7d54();
    }
    *(undefined4 *)(*(int *)(iVar3 + 0x8c) + param_2 * 4) = uVar2;
  }
  return *(undefined4 *)(*(int *)(iVar3 + 0x8c) + param_2 * 4);
}



void fn_005ea63c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x148) + 0x9c) = param_2;
  return;
}



void fn_005ea624(int param_1,int param_2)

{
  undefined4 in_s0;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x148) + 0x4c) + param_2 * 0x18 + 4) = in_s0;
  return;
}



void fn_005ea608(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x148) + 0x4c) + param_2 * 0x18 + 0x10) = *param_3;
  return;
}



int fn_005ea5fc(int param_1)

{
  return *(int *)(param_1 + 0x148) + 4;
}



int fn_005ea5d8(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 0x148) + 0x18) + param_2 * 0x40 + 0x10;
}



void fn_005ea590(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  ushort *puVar1;
  undefined4 uVar2;
  
  puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x148) + 4) + param_2 * 0x158);
  uVar2 = param_4[1];
  *(undefined4 *)(puVar1 + param_3 * 0xc + 0x7e) = *param_4;
  *(undefined4 *)(puVar1 + param_3 * 0xc + 0x80) = uVar2;
  *puVar1 = *(ushort *)(&DAT_007d6210 + param_3 * 2) | *puVar1;
  return;
}



void fn_005ea508(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ushort *puVar4;
  ushort uVar5;
  
  iVar1 = *(int *)(param_1 + 0x148);
  uVar2 = 0;
  if (*(int *)(iVar1 + 0x58) - *(int *)(iVar1 + 0x54) >> 3 != 0) {
    do {
      piVar3 = (int *)(*(int *)(iVar1 + 0x54) + uVar2 * 8);
      if (-1 < *piVar3) {
        puVar4 = (ushort *)(*(int *)(iVar1 + 4) + uVar2 * 0x158);
        uVar5 = *puVar4;
        if ((*(byte *)(*(int *)(iVar1 + 4) + piVar3[1] * 0x158) & 0x1f) >> 4 == 0) {
          uVar5 = uVar5 & 0xffef;
        }
        else {
          uVar5 = uVar5 | 0x10;
        }
        *puVar4 = uVar5;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(iVar1 + 0x58) - *(int *)(iVar1 + 0x54) >> 3));
  }
  return;
}



int fn_005ea4fc(int param_1)

{
  return *(int *)(param_1 + 0x148) + 0x30;
}



int fn_005ea4e8(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 0x148) + 0x20) + param_2 * 0x30;
}



void fn_005ea480(undefined4 *param_1,char *param_2)

{
  if (*param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x005ea4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined4 **)(param_2 + 0x18))(*(undefined4 **)(param_2 + 0x18),*param_1);
    return;
  }
  if ((*(byte *)(*(int *)(param_2 + 0xc) + 2) & 3) == 1) {
    fn_005ead14(*(undefined4 *)(*(int *)(param_2 + 0x10) + 0x148),*param_1,param_1[1],
                 *(int *)(param_2 + 0xc),*(int *)(param_2 + 0x10) + 0x8c);
    return;
  }
  fn_005ec738();
  return;
}



void fn_005ea454(int param_1,int param_2,undefined4 *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x148) + 4) + param_2 * 0x158);
  *(undefined4 *)(puVar1 + 0x1c) = *param_3;
  *puVar1 = *puVar1 | 0x400;
  return;
}



void fn_005ea448(int param_1,int param_2,undefined4 *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(int *)(*(int *)(**(int **)(param_1 + 4) + 0x148) + 4) + param_2 * 0x158);
  *(undefined4 *)(puVar1 + 0x1c) = *param_3;
  *puVar1 = *puVar1 | 0x400;
  return;
}



void fn_005ea41c(int param_1,int param_2,undefined4 *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x148) + 4) + param_2 * 0x158);
  *(undefined4 *)(puVar1 + 0x1a) = *param_3;
  *puVar1 = *puVar1 | 0x400;
  return;
}



void fn_005ea3f0(int param_1,int param_2,undefined4 *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x148) + 4) + param_2 * 0x158);
  *(undefined4 *)(puVar1 + 0x18) = *param_3;
  *puVar1 = *puVar1 | 0x400;
  return;
}


