#include "001cef28_001cf63c.h"



void fn_001cf63c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  uVar1 = fn_001481c8(param_2,DAT_0088fee0,&DAT_001cf6c8,1,1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = fn_001923e0(*(undefined4 *)(param_1 + 4),PTR_s_turn_signal_bflyt_0088fee4,0,1,0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 4),uVar1);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = fn_001828f0(uVar1,(char *)&DAT_001cf6d0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  iVar2 = fn_001828f0(*(undefined4 *)(param_1 + 0x18),(char *)&DAT_001cf6d8);
  *(int *)(param_1 + 0x28) = iVar2;
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  return;
}



void fn_001cf574(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  if (iVar1 == 0) {
    iVar1 = param_1[3];
    param_1[3] = iVar1 + 1;
    if (param_1[2] < iVar1 + 1) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return;
}



undefined4 * fn_001cf0d8(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint local_20;
  uint local_1c;
  
  *param_1 = &DAT_0081bd80;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  piVar1 = (int *)fn_00100fc6(0xc,0);
  iVar2 = fn_00100fc6(0xc,0);
  piVar1[2] = iVar2;
  *piVar1 = param_1[0x14];
  piVar1[1] = 1;
  param_1[0x14] = piVar1;
  iVar2 = piVar1[2];
  param_1[0x16] = iVar2;
  param_1[0x17] = iVar2 + 0xc;
  param_1[0x18] = iVar2;
  param_1[0x16] = iVar2 + 0xc;
  *(int *)iVar2 = iVar2;
  puVar10 = param_1 + 1;
  *(undefined4 *)(param_1[0x18] + 4) = param_1[0x18];
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x69) = 0;
  *(undefined1 *)((int)param_1 + 0x6a) = 0;
  *(undefined1 *)((int)param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0x21;
  local_20 = 0x1e;
  if ((uint)((int)(param_1[3] - param_1[1]) >> 2) < 0x1e) {
    uVar11 = (int)(param_1[2] - param_1[1]) >> 2;
    local_1c = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_1c < uVar11 + 0x20) {
      local_1c = uVar11 + 0x20;
    }
    puVar8 = &local_1c;
    if (local_1c < 0x1f) {
      puVar8 = &local_20;
    }
    uVar11 = *puVar8;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar9 = (undefined4 *)param_1[2];
    puVar4 = puVar3;
    for (puVar7 = (undefined4 *)*puVar10; puVar7 != puVar9; puVar7 = puVar7 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar7;
      }
      puVar4 = puVar4 + 1;
    }
    uVar5 = *puVar10;
    uVar6 = uVar5;
    if ((uint)param_1[2] < uVar5) {
      do {
        uVar6 = uVar6 + 4;
      } while (uVar6 != param_1[2]);
    }
    fn_001008c4(uVar5,(int)(param_1[3] - uVar5) >> 2,0);
    uVar6 = *puVar10;
    param_1[1] = puVar3;
    param_1[2] = (param_1[2] - uVar6 & 0xfffffffc) + (int)puVar3;
    param_1[3] = puVar3 + uVar11;
  }
  local_20 = 0x3c;
  puVar10 = param_1 + 0x11;
  if ((uint)((int)(param_1[0x13] - param_1[0x11]) >> 2) < 0x3c) {
    uVar11 = (int)(param_1[0x12] - param_1[0x11]) >> 2;
    local_1c = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_1c < uVar11 + 0x20) {
      local_1c = uVar11 + 0x20;
    }
    puVar8 = &local_1c;
    if (local_1c < 0x3d) {
      puVar8 = &local_20;
    }
    uVar11 = *puVar8;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar9 = (undefined4 *)param_1[0x12];
    puVar4 = puVar3;
    for (puVar7 = (undefined4 *)*puVar10; puVar7 != puVar9; puVar7 = puVar7 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar7;
      }
      puVar4 = puVar4 + 1;
    }
    uVar5 = *puVar10;
    uVar6 = uVar5;
    if ((uint)param_1[0x12] < uVar5) {
      do {
        uVar6 = uVar6 + 4;
      } while (uVar6 != param_1[0x12]);
    }
    fn_001008c4(uVar5,(int)(param_1[0x13] - uVar5) >> 2,0);
    uVar6 = *puVar10;
    *puVar10 = (uint)puVar3;
    param_1[0x12] = (param_1[0x12] - uVar6 & 0xfffffffc) + (int)puVar3;
    param_1[0x13] = puVar3 + uVar11;
  }
  fn_00158f6c((int)param_1 + 0x1e,0x20);
  return param_1;
}



void fn_001cf08c(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 == 0) || (uVar1 = fn_002febd8(param_2), 0x1f < uVar1)) {
    fn_00158f6c(param_1 + 0x1e,0x20);
    return;
  }
  fn_001782b8(param_1 + 0x1e,param_2,0x20);
  fn_001cf55c(param_1);
  return;
}



void fn_001cf068(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_001cf028(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00163e50(param_1,param_2,0);
  if (iVar1 != 0) {
    fn_001639b8(param_2);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



bool fn_001cef44(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((char)param_1[7] != '\0') {
    return true;
  }
  if (*(char *)((int)param_1 + 0x1e) == '\0') {
    return false;
  }
  iVar1 = param_1[5];
  iVar2 = 1;
  if (0 < iVar1) {
    iVar1 = iVar1 + -1;
    param_1[5] = iVar1;
  }
  if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x70))(param_1), iVar1 == 0)) {
    iVar1 = fn_006edf18(param_1[4]);
    if (iVar1 == 0) {
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1,(int)param_1 + 0x1e);
    }
    else {
      iVar1 = fn_006edf18(param_1[4]);
      if (iVar1 == 2) {
        iVar2 = fn_005f6628(param_1[4]);
      }
    }
  }
  (**(code **)(*param_1 + 0x34))(param_1);
  bVar3 = (char)param_1[7] != '\0' || iVar2 != 1;
  if (bVar3) {
    (**(code **)(*param_1 + 0x6c))(param_1);
  }
  return bVar3;
}



bool fn_001cef28(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  fn_0025a4e4(param_1[0x3a2]);
  if ((char)param_1[7] != '\0') {
    return true;
  }
  if (*(char *)((int)param_1 + 0x1e) == '\0') {
    return false;
  }
  iVar1 = param_1[5];
  iVar2 = 1;
  if (0 < iVar1) {
    iVar1 = iVar1 + -1;
    param_1[5] = iVar1;
  }
  if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x70))(param_1), iVar1 == 0)) {
    iVar1 = fn_006edf18(param_1[4]);
    if (iVar1 == 0) {
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1,(int)param_1 + 0x1e);
    }
    else {
      iVar1 = fn_006edf18(param_1[4]);
      if (iVar1 == 2) {
        iVar2 = fn_005f6628(param_1[4]);
      }
    }
  }
  (**(code **)(*param_1 + 0x34))(param_1);
  bVar3 = (char)param_1[7] != '\0' || iVar2 != 1;
  if (bVar3) {
    (**(code **)(*param_1 + 0x6c))(param_1);
  }
  return bVar3;
}


