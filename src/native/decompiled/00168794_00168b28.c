#include "00168794_00168b28.h"



uint * fn_00168b28(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 0xc) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) / 0xc,0);
  return param_1;
}



undefined4 * fn_00168a24(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint local_24 [2];
  
  uVar1 = fn_00100b58(param_2);
  if (uVar1 == 0) {
    puVar2 = &DAT_008f9cf4;
  }
  else {
    puVar3 = local_24 + 1;
    if (0x20 < uVar1) {
      puVar3 = local_24;
    }
    local_24[0] = uVar1;
    local_24[1] = 0x20;
    uVar5 = *puVar3;
    if (0xfffffff1 < uVar5) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
    }
    if (uVar5 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar5);
    }
    if (uVar5 == 0) {
      puVar2 = &DAT_008f9ce8;
    }
    else {
      puVar2 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      *puVar2 = 0;
      puVar2[1] = uVar5;
      puVar2[2] = uVar1;
      puVar4 = (undefined2 *)((int)puVar2 + uVar1 * 2 + 0xc);
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    puVar2 = puVar2 + 3;
  }
  *param_1 = puVar2;
  fn_00301a9c(puVar2,param_2,uVar1 << 1);
  return param_1;
}



undefined4 * fn_00168984(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  
  if (0xfffffff1 < param_2) {
    fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,param_2,0xfffffff1);
  }
  if (param_2 < param_3) {
    fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,param_3,param_2);
  }
  if (param_2 == 0) {
    puVar1 = &DAT_008f9ce8;
  }
  else {
    puVar1 = (undefined4 *)fn_00100fc6((param_2 + 8) * 2,0);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    puVar2 = (undefined2 *)((int)puVar1 + param_3 * 2 + 0xc);
    *puVar1 = 0;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  return puVar1;
}



void fn_00168948(int param_1)

{
  uint in_fpscr;
  
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
    VectorSignedToFloat(*(int *)(param_1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(int *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
  }
  return;
}



void fn_001688cc(int *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    iVar4 = param_1[1] << 1;
    if (iVar4 == 0) {
      iVar4 = 4;
    }
    iVar1 = fn_0018388c(*param_1,param_1[2] << 3,iVar4 << 3);
    *param_1 = iVar1;
    param_1[2] = iVar4;
  }
  puVar2 = (uint *)(*param_1 + param_1[1] * 8);
  bVar5 = puVar2 == (uint *)0x0;
  if (bVar5) {
    puVar2 = (uint *)0x0;
  }
  param_1[1] = param_1[1] + 1;
  if (!bVar5) {
    *puVar2 = *param_2;
    uVar3 = param_2[1];
    puVar2[1] = uVar3;
    if ((*puVar2 & 0x8000000) != 0) {
      *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
    }
  }
  return;
}



undefined1 * fn_00168794(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  puVar7 = param_2;
  for (; param_2 != (undefined1 *)0x0; param_2 = *(undefined1 **)(param_2 + 8)) {
    puVar5 = (undefined1 *)param_1[1];
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)param_1[2];
      if (puVar5 == (undefined1 *)param_1[3]) {
        if (*param_1 == 0) {
          uVar6 = 0x20;
        }
        else {
          uVar1 = *(uint *)(*param_1 + 4);
          uVar6 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar6 < uVar1 + 0x20) {
            uVar6 = uVar1 + 0x20;
          }
        }
        piVar2 = (int *)fn_0015ece0(0xc);
        iVar3 = fn_0015ece0(uVar6 * 0x1c);
        piVar2[2] = iVar3;
        *piVar2 = *param_1;
        piVar2[1] = uVar6;
        *param_1 = (int)piVar2;
        puVar5 = (undefined1 *)piVar2[2];
        param_1[3] = (int)(puVar5 + uVar6 * 0x1c);
        param_1[2] = (int)(puVar5 + 0x1c);
      }
      else {
        param_1[2] = (int)(puVar5 + 0x1c);
      }
    }
    else {
      param_1[1] = *(int *)(puVar5 + 0xc);
    }
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)(puVar5 + 8) = 0;
    *(undefined4 *)(puVar5 + 0xc) = 0;
    *puVar5 = 0;
    if ((undefined4 *)(puVar5 + 0x10) != (undefined4 *)0x0) {
      *(undefined **)(puVar5 + 0x10) = &DAT_00855a94;
      fn_0015e6f0(puVar5 + 0x14,*(undefined4 *)(param_2 + 0x14));
      *(undefined4 *)(puVar5 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    *(undefined1 **)(param_3 + 8) = puVar5;
    *(undefined1 **)(puVar5 + 4) = param_3;
    if (puVar7 == param_2) {
      puVar7 = puVar5;
    }
    *puVar5 = *param_2;
    uVar4 = fn_00168794(param_1,*(undefined4 *)(param_2 + 0xc),puVar5);
    *(undefined4 *)(puVar5 + 0xc) = uVar4;
    param_3 = puVar5;
  }
  *(undefined4 *)(param_3 + 8) = 0;
  return puVar7;
}


