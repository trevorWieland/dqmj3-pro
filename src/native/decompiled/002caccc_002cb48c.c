#include "002caccc_002cb48c.h"



void fn_002cb48c(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_38 [7];
  
  uVar4 = 0;
  local_38[0] = 0x14;
  local_38[1] = 0x11;
  local_38[2] = 0x10;
  local_38[3] = 0x12;
  local_38[4] = 0x13;
  local_38[5] = 0x15;
  switch(param_2) {
  case 0:
    uVar4 = 0x14;
    break;
  case 1:
    uVar4 = 0x11;
    break;
  case 2:
    uVar4 = 0x10;
    break;
  case 3:
    uVar4 = 0x12;
    break;
  case 4:
    uVar4 = 0x13;
    break;
  case 5:
    uVar4 = 0x15;
  }
  uVar5 = 0;
  do {
    uVar6 = local_38[uVar5];
    uVar1 = *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68) >> 2;
    if (uVar1 <= uVar6) {
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar6,uVar1);
    }
    puVar2 = local_38 + uVar5;
    uVar5 = uVar5 + 1;
    iVar3 = *(int *)(*(int *)(param_1 + 0x68) + uVar6 * 4);
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | *puVar2 == uVar4;
  } while (uVar5 < 6);
  return;
}



void fn_002cb420(int param_1,int param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + param_2 * 4 + 0x38);
  uVar1 = *(int *)(iVar2 + 0x6c) - *(int *)(iVar2 + 0x68) >> 2;
  if (uVar1 < 0xc) {
    fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,0xb,uVar1);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x68) + 0x2c);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | param_3;
  return;
}



undefined4 * fn_002cb3ec(undefined4 *param_1)

{
  *param_1 = &DAT_0081fba8;
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  return param_1;
}



void fn_002cb3c0(undefined4 *param_1)

{
  param_1[2] = 0;
  *param_1 = &DAT_0081fba8;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = 0;
  return;
}



void fn_002cb37c(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x10) != param_2) {
    *(char *)(param_1 + 0x10) = (char)param_2;
    fn_001caa40(*(undefined4 *)(param_1 + 0xc),param_2);
    if (param_2 != 0) {
      fn_00245510(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
      return;
    }
  }
  return;
}



bool fn_002cb15c(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_r1;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint local_30;
  undefined4 local_2c [2];
  
  piVar3 = (int *)param_1[3];
  if (param_2 < 0) {
    param_2 = piVar3[0x39];
  }
  local_30 = 0;
  (**(code **)(*piVar3 + 0x28))(piVar3,0,&local_30);
  uVar2 = local_30;
  piVar3 = (int *)param_1[3];
  iVar9 = piVar3[0x33];
  iVar10 = piVar3[0x32];
  iVar4 = (**(code **)(*piVar3 + 0x5c))();
  iVar5 = 1;
  if ((int)uVar2 < param_2) {
    iVar5 = fn_00300f74(param_2 + uVar2 + -1);
  }
  *(int *)(param_1[3] + 200) = iVar5;
  if (param_2 == 0) {
    fn_0025f2d0(param_1[3],0);
    (**(code **)(*(int *)param_1[3] + 0x2c))((int *)param_1[3],0,0);
  }
  else if (param_2 <= (int)(iVar9 * uVar2 + iVar4)) {
    fn_00300f74(param_2 + -1,uVar2);
    if (param_2 <= (int)(iVar9 * uVar2 + extraout_r1)) {
      iVar9 = iVar9 + -1;
    }
    fn_0025f2d0(param_1[3],iVar9);
    (**(code **)(*(int *)param_1[3] + 0x2c))((int *)param_1[3],0,extraout_r1);
  }
  *(int *)(param_1[3] + 0xe4) = param_2;
  local_30 = 0;
  (**(code **)(*(int *)param_1[3] + 0x28))((int *)param_1[3],0,&local_30);
  uVar2 = local_30;
  iVar4 = 0;
  if (0 < (int)local_30) {
    do {
      iVar6 = (**(code **)(*param_1 + 0x14))(param_1,iVar4);
      bVar11 = param_2 == 0;
      iVar7 = *(int *)(param_1[3] + 0xcc);
      iVar8 = uVar2 * iVar7 + iVar4;
      iVar9 = param_2;
      if (0 < param_2) {
        iVar9 = param_2 - iVar8;
        bVar11 = param_2 == iVar8;
      }
      bVar1 = iVar9 < 0 == (0 < param_2 && SBORROW4(param_2,iVar8));
      if (bVar11 || !bVar1) {
        *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
      }
      local_30 = (uint)(!bVar11 && bVar1);
      (**(code **)(*param_1 + 0x18))(param_1,iVar7,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      (**(code **)(*param_1 + 0x28))(param_1,iVar4,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  local_2c[0] = 0;
  (**(code **)(*(int *)param_1[3] + 0x30))((int *)param_1[3],0,local_2c);
  (**(code **)(*param_1 + 0x28))(param_1,local_2c[0],1);
  return iVar10 != iVar5;
}



bool fn_002cb154(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_r1;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  uint uStack_30;
  undefined4 auStack_2c [2];
  
  piVar3 = (int *)param_1[3];
  iVar9 = piVar3[0x39];
  uStack_30 = 0;
  (**(code **)(*piVar3 + 0x28))(piVar3,0,&uStack_30);
  uVar2 = uStack_30;
  piVar3 = (int *)param_1[3];
  iVar10 = piVar3[0x33];
  iVar11 = piVar3[0x32];
  iVar4 = (**(code **)(*piVar3 + 0x5c))();
  iVar5 = 1;
  if ((int)uVar2 < iVar9) {
    iVar5 = fn_00300f74(iVar9 + uVar2 + -1);
  }
  *(int *)(param_1[3] + 200) = iVar5;
  if (iVar9 == 0) {
    fn_0025f2d0(param_1[3],0);
    (**(code **)(*(int *)param_1[3] + 0x2c))((int *)param_1[3],0,0);
  }
  else if (iVar9 <= (int)(iVar10 * uVar2 + iVar4)) {
    fn_00300f74(iVar9 + -1,uVar2);
    if (iVar9 <= (int)(iVar10 * uVar2 + extraout_r1)) {
      iVar10 = iVar10 + -1;
    }
    fn_0025f2d0(param_1[3],iVar10);
    (**(code **)(*(int *)param_1[3] + 0x2c))((int *)param_1[3],0,extraout_r1);
  }
  *(int *)(param_1[3] + 0xe4) = iVar9;
  uStack_30 = 0;
  (**(code **)(*(int *)param_1[3] + 0x28))((int *)param_1[3],0,&uStack_30);
  uVar2 = uStack_30;
  iVar4 = 0;
  if (0 < (int)uStack_30) {
    do {
      iVar6 = (**(code **)(*param_1 + 0x14))(param_1,iVar4);
      bVar12 = iVar9 == 0;
      iVar7 = *(int *)(param_1[3] + 0xcc);
      iVar8 = uVar2 * iVar7 + iVar4;
      iVar10 = iVar9;
      if (0 < iVar9) {
        iVar10 = iVar9 - iVar8;
        bVar12 = iVar9 == iVar8;
      }
      bVar1 = iVar10 < 0 == (0 < iVar9 && SBORROW4(iVar9,iVar8));
      if (bVar12 || !bVar1) {
        *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
      }
      uStack_30 = (uint)(!bVar12 && bVar1);
      (**(code **)(*param_1 + 0x18))(param_1,iVar7,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      (**(code **)(*param_1 + 0x28))(param_1,iVar4,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  auStack_2c[0] = 0;
  (**(code **)(*(int *)param_1[3] + 0x30))((int *)param_1[3],0,auStack_2c);
  (**(code **)(*param_1 + 0x28))(param_1,auStack_2c[0],1);
  return iVar11 != iVar5;
}



void fn_002cad78(int *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint local_28 [2];
  uint *local_20;
  uint local_1c [2];
  
  piVar3 = (int *)param_1[3];
  local_20 = (uint *)0x0;
  (**(code **)(*piVar3 + 0x28))(piVar3,0,&local_20);
  local_28[0] = piVar3[0x33] * (int)local_20 + param_2;
  local_28[1] = 0;
  local_1c[0] = piVar3[0x39] - 1;
  if ((int)local_1c[0] < 0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  puVar2 = local_20;
  if ((int)local_28[0] < 0) {
    puVar2 = local_28 + 1;
  }
  if (local_28[0] < 0x80000000) {
    puVar2 = local_28;
  }
  if ((int)local_1c[0] < (int)*puVar2) {
    puVar2 = local_1c;
  }
  uVar4 = *puVar2;
  param_1[5] = param_1[5] | 4;
  iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,uVar4);
  if (iVar1 == 0) {
    fn_0069e8c8(param_1[2],0x100094d);
    return;
  }
  param_1[5] = param_1[5] | 2;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,uVar4);
  if ((char)param_1[6] == '\0') {
    fn_0069e8c8(param_1[2],0x100094b);
    return;
  }
  return;
}



void fn_002caccc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint local_18;
  
  if (*(char *)(param_1 + 0x11) != '\0') {
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
      local_18 = param_4;
      fn_001caa40(*(undefined4 *)(param_1 + 0xc));
    }
    uVar1 = 0;
    local_18 = 0;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(*(int **)(param_1 + 0xc),0,&local_18);
    if (local_18 != 0) {
      do {
        fn_001c9d80(*(undefined4 *)(param_1 + 0xc),uVar1);
        local_18 = 0;
        uVar1 = uVar1 + 1;
        (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(*(int **)(param_1 + 0xc),0,&local_18);
      } while (uVar1 < local_18);
    }
    fn_002454a4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  return;
}


