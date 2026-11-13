#include "001797c4_0017a088.h"



undefined4 fn_0017a088(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2[1] == param_1 + 0x24) {
    piVar2 = *(int **)(param_1 + 0x30);
    piVar1 = (int *)0x0;
    if (piVar2 == param_2) {
      *(int *)(param_1 + 0x30) = param_2[2];
    }
    else {
      piVar1 = piVar2;
      for (piVar2 = (int *)piVar2[2]; piVar2 != param_2; piVar2 = (int *)piVar2[2]) {
        piVar1 = piVar2;
      }
      piVar1[2] = param_2[2];
    }
    if (*(int **)(param_1 + 0x34) == param_2) {
      *(int **)(param_1 + 0x34) = piVar1;
    }
    param_2[2] = 0;
    param_2[1] = 0;
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}



uint fn_00179fc4(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((int)param_2 < 0) ||
      ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34) <= param_2)) ||
     (iVar1 = fn_00173a34(*(int *)(param_1 + 4) + param_2 * 0x34,param_3), iVar1 == 0)) {
    return 0;
  }
  uVar3 = 1;
  uVar2 = 1;
  iVar1 = fn_00191228(*(int *)(param_1 + 4) + param_2 * 0x34);
  if (iVar1 != 0) {
    uVar3 = fn_00185320(*(int *)(param_1 + 4) + param_2 * 0x34);
  }
  iVar1 = fn_00191218(*(int *)(param_1 + 4) + param_2 * 0x34);
  if (iVar1 != 0) {
    uVar2 = fn_001852ac(*(int *)(param_1 + 4) + param_2 * 0x34);
  }
  return uVar3 & uVar2;
}



uint fn_00179dc0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  
  if (((int)param_2 < 0) ||
     ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34) <= param_2)) {
    return 0;
  }
  puVar1 = (undefined4 *)fn_00145b00(0x20,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    piVar4 = puVar1 + 1;
    *puVar1 = &DAT_008213bc;
    *piVar4 = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    *(undefined1 *)((int)puVar1 + 0x1d) = 0xbc;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    piVar2 = (int *)fn_00100fc6(0xc,0);
    iVar3 = fn_00100fc6(0x300,0);
    piVar2[2] = iVar3;
    *piVar2 = *piVar4;
    piVar2[1] = 0x20;
    *piVar4 = (int)piVar2;
    puVar5 = (undefined1 *)piVar2[2];
    puVar1[3] = puVar5;
    puVar1[4] = puVar5 + 0x300;
    puVar1[3] = puVar5 + 0x18;
    *(undefined4 *)(puVar5 + 8) = 0;
    *(undefined4 *)(puVar5 + 0xc) = 0;
    *puVar5 = 0;
    puVar1[5] = puVar5;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)(puVar1[5] + 8) = puVar1[5];
    *(undefined4 *)(puVar1[5] + 0xc) = puVar1[5];
  }
  *(undefined4 **)(*(int *)(param_1 + 0x10) + param_2 * 4) = puVar1;
  iVar3 = fn_0018921c(puVar1,param_3);
  if (iVar3 == 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0x10) + param_2 * 4);
    piVar4 = (int *)*piVar2;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *piVar2 = 0;
    return 0;
  }
  if (((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34) <= param_2) ||
     (iVar3 = fn_00173a34(*(int *)(param_1 + 4) + param_2 * 0x34,param_3), iVar3 == 0)) {
    return 0;
  }
  uVar7 = 1;
  uVar6 = 1;
  iVar3 = fn_00191228(*(int *)(param_1 + 4) + param_2 * 0x34);
  if (iVar3 != 0) {
    uVar7 = fn_00185320(*(int *)(param_1 + 4) + param_2 * 0x34);
  }
  iVar3 = fn_00191218(*(int *)(param_1 + 4) + param_2 * 0x34);
  if (iVar3 != 0) {
    uVar6 = fn_001852ac(*(int *)(param_1 + 4) + param_2 * 0x34);
  }
  return uVar7 & uVar6;
}



int fn_00179c8c(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  if (-1 < iVar1) {
    uVar6 = 0;
    if (param_3 != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(*param_3 + 8))(param_3);
      do {
        if (puVar2 == &DAT_0089a850) goto LAB_00179cf4;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    param_3 = (int *)0x0;
LAB_00179cf4:
    iVar3 = fn_00182d34(param_1[2],param_2);
    if ((iVar3 < 0) || (iVar3 = fn_001793c4(param_2), iVar3 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(ushort *)(iVar3 + 4);
    }
    iVar3 = fn_00182d34(param_1[2],param_2);
    if ((-1 < iVar3) && (iVar3 = fn_001793c4(param_2), iVar3 != 0)) {
      uVar6 = (uint)*(ushort *)(iVar3 + 4);
    }
    piVar5 = *(int **)(param_1[3] + iVar1 * 4);
    (**(code **)(*piVar5 + 0x4c))(piVar5,(uVar4 & 4) >> 2);
    piVar5 = *(int **)(param_1[3] + iVar1 * 4);
    (**(code **)(*piVar5 + 0x50))(piVar5,(uVar6 & 8) >> 3);
    piVar5 = *(int **)(param_1[3] + iVar1 * 4);
    (**(code **)(*piVar5 + 0x54))(piVar5,param_3,param_4,param_5,0);
  }
  return iVar1;
}



void fn_00179bfc(void)

{
  undefined4 in_r3;
  
  switch(in_r3) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
  }
  fn_00179ac8();
  return;
}



int fn_00179ac8(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  if (-1 < iVar1) {
    uVar6 = 0;
    if (param_3 != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(*param_3 + 8))(param_3);
      do {
        if (puVar2 == &DAT_0089a850) goto LAB_00179b30;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    param_3 = (int *)0x0;
LAB_00179b30:
    iVar3 = fn_00182d34(param_1[2],param_2);
    if ((iVar3 < 0) || (iVar3 = fn_001793c4(param_2), iVar3 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(ushort *)(iVar3 + 4);
    }
    iVar3 = fn_00182d34(param_1[2],param_2);
    if ((-1 < iVar3) && (iVar3 = fn_001793c4(param_2), iVar3 != 0)) {
      uVar6 = (uint)*(ushort *)(iVar3 + 4);
    }
    piVar5 = *(int **)(param_1[3] + iVar1 * 4);
    (**(code **)(*piVar5 + 0x4c))(piVar5,(uVar4 & 4) >> 2);
    piVar5 = *(int **)(param_1[3] + iVar1 * 4);
    (**(code **)(*piVar5 + 0x50))(piVar5,(uVar6 & 8) >> 3);
    piVar5 = *(int **)(param_1[3] + iVar1 * 4);
    (**(code **)(*piVar5 + 0x54))(piVar5,param_3,param_4,param_5,1);
  }
  return iVar1;
}



void fn_00179a80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_c;
  
  iVar2 = param_1;
  local_c = param_2;
  uVar1 = fn_0017484c(DAT_008977e4);
  if ((int)(char)local_c - 0x20U < 2) {
    uVar1 = fn_00175dcc();
  }
  else {
    uVar1 = fn_00175d88(uVar1,&local_c,param_3,param_4,iVar2);
  }
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return;
}



undefined4 fn_00179a14(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00164a34();
  if (((iVar1 == 0) || (iVar1 = fn_00145b00(0x18,&DAT_00812c8c), iVar1 == 0)) ||
     (iVar1 = fn_0015c980(iVar1,param_2,0), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = fn_0015a130(param_1);
  return uVar2;
}



undefined4 fn_00179990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00164a34(param_1,param_3);
  if (iVar1 != 0) {
    local_10 = param_3;
    iVar1 = fn_00164a34(param_1,param_3);
    if ((((iVar1 != 0) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
        (iVar1 = fn_00165bb4(iVar1,&local_10), iVar1 != 0)) &&
       (iVar1 = fn_0017fde4(*(undefined4 *)(iVar1 + 4)), iVar1 != 0)) {
      uVar2 = fn_00159fa4(param_1,param_2,iVar1,local_10);
      return uVar2;
    }
  }
  return 0xffffffff;
}



void fn_00179928(int *param_1)

{
  int in_s0;
  
  fn_0017fde4(param_1[1]);
  fn_0017fc3c();
  (**(code **)(*param_1 + 0x18))(param_1,0x3f7fffff < in_s0);
                    /* WARNING: Could not recover jumptable at 0x0017998c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))(param_1,0x3f7fffff < in_s0);
  return;
}



int fn_001797c4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x84) == '\0') {
    iVar1 = (int)*(char *)(param_1 + 0x35);
    uVar3 = iVar1 - 0x10;
    bVar4 = 3 < uVar3;
    if (bVar4) {
      uVar3 = iVar1 - 0x18;
    }
    if (((!bVar4 || uVar3 < 4) || (iVar1 == 0x20 || iVar1 == 0x22)) &&
       (*(char *)(param_1 + 0x68) == '\x01')) {
      uVar3 = *(uint *)(param_1 + 8);
      if ((int)uVar3 < 0) {
        return 0;
      }
      iVar1 = *(int *)(DAT_00897844 + 4);
      if ((uint)((*(int *)(DAT_00897844 + 8) - iVar1) / 0x34) <= uVar3) {
        return 0;
      }
      goto LAB_00179908;
    }
  }
  if (*(char *)(param_1 + 0x85) == '\0') {
    iVar1 = (int)*(char *)(param_1 + 0x35);
    uVar3 = iVar1 - 0x10;
    bVar4 = 3 < uVar3;
    if (bVar4) {
      uVar3 = iVar1 - 0x18;
    }
    if (((!bVar4 || uVar3 < 4) || (iVar1 == 0x20 || iVar1 == 0x22)) &&
       (iVar1 = fn_00182964(*(undefined1 *)(param_1 + 0x68)), iVar1 != 0)) {
      uVar3 = *(uint *)(param_1 + 8);
      if ((int)uVar3 < 0) {
        return 0;
      }
      iVar1 = *(int *)(DAT_00897848 + 4);
      if ((uint)((*(int *)(DAT_00897848 + 8) - iVar1) / 0x34) <= uVar3) {
        return 0;
      }
      goto LAB_00179908;
    }
  }
  iVar2 = fn_0017481c(DAT_008977e4);
  uVar3 = *(uint *)(param_1 + 8);
  if (((int)uVar3 < 0) ||
     (iVar1 = *(int *)(iVar2 + 4), (uint)((*(int *)(iVar2 + 8) - iVar1) / 0x34) <= uVar3)) {
    return 0;
  }
LAB_00179908:
  return iVar1 + uVar3 * 0x34;
}


