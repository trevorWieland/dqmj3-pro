#include "002b4d9c_002b5488.h"



void fn_002b5488(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_20 [4];
  
  iVar1 = fn_003a6898(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  local_20[0] = fn_006c5d50(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
  fn_004228d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),
               *(undefined4 *)(*(int *)(param_1 + 8) + 0x14),local_20);
  fn_003a7cf0(param_1,param_2,4);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_002b5424(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x38c) == '\0') {
    return;
  }
  iVar1 = fn_00182988(DAT_008977e4);
  iVar1 = fn_006b89f8(iVar1 + 0x38c);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  iVar1 = fn_00182988(DAT_008977e4);
  fn_002a19f8(iVar1 + 0x38c);
  return;
}



void fn_002b52e8(int param_1)

{
  int *piVar1;
  
  fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
  fn_003a5bbc(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0,1);
  fn_003773f4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x78);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,1);
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x7c);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,0,1);
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x84);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,0,1);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,1);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x14);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,0);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x18);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,0);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,0);
  fn_001f749c(*(undefined4 *)(*(int *)(param_1 + 4) + 4),0,0);
  *(undefined1 *)(param_1 + 0xd) = 1;
  return;
}



void fn_002b4fc8(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + param_2 * 4);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | (byte)param_3;
  iVar1 = *(int *)(param_1 + 0x3c) + param_2;
  uVar3 = iVar1 % 0x20;
  bVar4 = (int)uVar3 < 0;
  if (bVar4) {
    uVar3 = uVar3 + 0x20;
  }
  puVar2 = (uint *)(*(int *)(param_1 + 0x38) +
                   ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1b)) >> 5) * 4);
  if (bVar4) {
    puVar2 = puVar2 + -1;
  }
  uVar3 = 1 << (uVar3 & 0xff);
  if (param_3 == 0) {
    uVar3 = *puVar2 & ~uVar3;
  }
  else {
    uVar3 = uVar3 | *puVar2;
  }
  *puVar2 = uVar3;
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + param_2 * 4);
  *(byte *)(iVar1 + 0x44) = (byte)param_3 | *(byte *)(iVar1 + 0x44) & 0xfe;
  fn_0025e378(*(undefined4 *)(param_1 + 0x24),
               *(int *)(*(int *)(param_1 + 0x14) + param_2 * 4) + 0x3c);
  return;
}



void fn_002b4f00(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],DAT_008937e8,1);
  param_1[8] = iVar1;
  iVar1 = fn_00145b00(0x5c,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1);
    piVar3 = (int *)fn_0025e920(iVar1,uVar2,param_1[8]);
  }
  piVar4 = (int *)param_1[9];
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[9] = (int)piVar3;
  }
  (**(code **)(*(int *)param_1[9] + 0x10))((int *)param_1[9],param_1[4]);
  fn_0025e4dc(param_1[9],1);
  fn_0069e710(param_1);
  return;
}



void fn_002b4e7c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0081ed68;
  fn_001008c4(param_1[0xe],(int)(param_1[0x12] - param_1[0xe]) >> 2,0);
  uVar1 = param_1[10];
  uVar2 = uVar1;
  if ((uint)param_1[0xb] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0xb]);
  }
  fn_001008c4(uVar1,(int)(param_1[0xc] - uVar1) >> 2,0);
  fn_002b5260(param_1);
  fn_002feef8();
  return;
}



void fn_002b5260(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0081eda4;
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  uVar1 = param_1[5];
  uVar2 = uVar1;
  if ((uint)param_1[6] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[6]);
  }
  fn_001008c4(uVar1,(int)(param_1[7] - uVar1) >> 2,0);
  fn_0069e808(param_1);
  return;
}



undefined4 * fn_002b4d9c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 in_stack_00000000;
  undefined4 uVar5;
  
  uVar5 = 4;
  puVar1 = (undefined4 *)fn_002b5060();
  *puVar1 = &DAT_0081ed68;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar4 = 4;
  puVar1[10] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0);
  iVar4 = puVar1[10];
  iVar3 = iVar4 + 0x80;
  puVar1[0xb] = iVar4 + 0x10;
  puVar1[0xc] = iVar3;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  iVar4 = fn_00100fc6(4,0,iVar3,puVar1 + 0xb,in_stack_00000000,uVar5);
  puVar1[0x12] = iVar4 + 4;
  puVar1[0xe] = iVar4;
  puVar1[0xf] = 0;
  puVar1[0x10] = iVar4;
  puVar1[0x11] = 4;
  *(undefined4 *)puVar1[0xe] = 0;
  return puVar1;
}



undefined4 * fn_002b5060(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint local_28;
  uint local_24;
  
  local_28 = in_stack_00000000;
  puVar1 = (undefined4 *)fn_0069e7cc();
  puVar10 = (undefined4 *)0x0;
  *puVar1 = &DAT_0081eda4;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar9 = puVar1 + 5;
  puVar1[9] = 0;
  if (in_stack_00000004 != 0) {
    local_28 = in_stack_00000004;
    uVar11 = (int)(puVar1[6] - *puVar9) >> 2;
    local_24 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_24 < uVar11 + 0x20) {
      local_24 = uVar11 + 0x20;
    }
    puVar2 = &local_24;
    if (local_24 <= in_stack_00000004) {
      puVar2 = &local_28;
    }
    uVar11 = *puVar2;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar7 = puVar3;
    for (puVar5 = (undefined4 *)*puVar9; puVar5 != (undefined4 *)0x0; puVar5 = puVar5 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar5;
      }
      puVar7 = puVar7 + 1;
    }
    puVar5 = (undefined4 *)((-*puVar9 & 0xfffffffc) + (int)puVar3);
    for (uVar6 = in_stack_00000004; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
    }
    puVar7 = (undefined4 *)puVar1[6];
    puVar5 = puVar3 + in_stack_00000004 + ((int)-*puVar9 >> 2);
    if (puVar7 != (undefined4 *)0x0) {
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar10;
        }
        puVar10 = puVar10 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar10 != puVar7);
    }
    uVar4 = *puVar9;
    uVar8 = puVar1[6];
    uVar6 = uVar4;
    if (uVar8 < uVar4) {
      do {
        uVar6 = uVar6 + 4;
      } while (uVar6 != uVar8);
    }
    fn_001008c4(uVar4,(int)(puVar1[7] - uVar4) >> 2,0);
    puVar1[7] = puVar3 + uVar11;
    puVar1[6] = puVar3 + ((int)(uVar8 - uVar4) >> 2) + in_stack_00000004;
    *puVar9 = (uint)puVar3;
  }
  return puVar1;
}


