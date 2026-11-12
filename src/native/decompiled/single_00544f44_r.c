#include "single_00544f44_r.h"


extern undefined4 _local_3c;

int * fn_00544f44(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 **ppuVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *local_40;
  char local_3c;
  undefined3 uStack_3b;
  undefined4 *local_38;
  char local_34;
  undefined4 *local_30;
  char local_2c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    ppuVar5 = (undefined4 **)(param_1 + 0x10);
    puVar1 = (undefined4 *)fn_0054460c(param_2);
    _local_3c = CONCAT31(uStack_3b,1);
    local_40 = puVar1;
    if (ppuVar5 != &local_40) {
      local_40 = *ppuVar5;
      _local_3c = CONCAT31(uStack_3b,*(undefined1 *)(param_1 + 0x14));
      *ppuVar5 = puVar1;
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
    puVar1 = local_40;
    if ((local_40 != (undefined4 *)0x0) && (local_3c != '\0')) {
      (**(code **)*local_40)(local_40);
      piVar2 = (int *)puVar1[1];
      (**(code **)(*piVar2 + 0xc))(piVar2,puVar1);
    }
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    ppuVar5 = (undefined4 **)(param_1 + 0x18);
    puVar1 = (undefined4 *)fn_005448f0(param_2);
    _local_3c = CONCAT31(uStack_3b,1);
    local_40 = puVar1;
    if (ppuVar5 != &local_40) {
      local_40 = *ppuVar5;
      _local_3c = CONCAT31(uStack_3b,*(undefined1 *)(param_1 + 0x1c));
      *ppuVar5 = puVar1;
      *(undefined1 *)(param_1 + 0x1c) = 1;
    }
    puVar1 = local_40;
    if ((local_40 != (undefined4 *)0x0) && (local_3c != '\0')) {
      (**(code **)*local_40)(local_40);
      piVar2 = (int *)puVar1[1];
      (**(code **)(*piVar2 + 0xc))(piVar2,puVar1);
    }
  }
  iVar6 = 200;
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,200,4);
  puVar1 = puVar3;
  do {
    iVar6 = iVar6 + -1;
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  } while (iVar6 != 0);
  piVar2 = puVar3 + 0x2f;
  iVar6 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))();
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = iVar6 - (int)piVar2;
  }
  piVar2 = puVar3 + 0x30;
  iVar6 = (**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = iVar6 - (int)piVar2;
  }
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x10))();
  iVar6 = *piVar2;
  if (iVar6 == -0x80000000) {
    puVar3[0x2d] = 0;
  }
  else if (iVar6 == 0x20000000) {
    puVar3[0x2d] = 2;
  }
  else if (iVar6 == 0x40000000) {
    puVar3[0x2d] = 1;
  }
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
  iVar6 = *piVar2;
  if (iVar6 == -0x80000000) {
    puVar3[0x2e] = 1;
  }
  else if (iVar6 == 0x20000000) {
    puVar3[0x2e] = 0;
  }
  else if (iVar6 == 0x40000000) {
    puVar3[0x2e] = 2;
  }
  *puVar3 = 0x4000000a;
  puVar3[4] = 0;
  puVar3[1] = 0x4e465443;
  puVar3[2] = 0x7010000;
  puVar3[5] = 0;
  puVar3[3] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0x3f800000;
  puVar3[0xd] = 0x3f800000;
  puVar3[0xe] = 0x3f800000;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar1 = (undefined4 *)fn_00171688();
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  uVar10 = puVar1[4];
  uVar11 = puVar1[5];
  uVar12 = puVar1[6];
  uVar13 = puVar1[7];
  puVar3[0x21] = *puVar1;
  puVar3[0x22] = uVar7;
  puVar3[0x23] = uVar8;
  puVar3[0x24] = uVar9;
  puVar3[0x25] = uVar10;
  puVar3[0x26] = uVar11;
  puVar3[0x27] = uVar12;
  puVar3[0x28] = uVar13;
  uVar7 = puVar1[9];
  uVar8 = puVar1[10];
  uVar9 = puVar1[0xb];
  puVar3[0x29] = puVar1[8];
  puVar3[0x2a] = uVar7;
  puVar3[0x2b] = uVar8;
  puVar3[0x2c] = uVar9;
  puVar3[6] = puVar3[6] | 1;
  iVar6 = (**(code **)(*param_2 + 8))(param_2,0x29c,4);
  if (iVar6 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    local_38 = *(undefined4 **)(param_1 + 0x18);
    local_34 = *(char *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x18) = 0;
    local_30 = *(undefined4 **)(param_1 + 0x10);
    local_2c = *(char *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x10) = 0;
    local_40 = (undefined4 *)&DAT_00000001;
    piVar2 = (int *)fn_00545cd8(iVar6,param_2,puVar3,param_1,&local_30,&local_38);
    puVar1 = local_30;
    if ((local_30 != (undefined4 *)0x0) && (local_2c != '\0')) {
      (**(code **)*local_30)(local_30);
      piVar4 = (int *)puVar1[1];
      (**(code **)(*piVar4 + 0xc))(piVar4,puVar1);
    }
    puVar1 = local_38;
    if ((local_38 != (undefined4 *)0x0) && (local_34 != '\0')) {
      (**(code **)*local_38)(local_38);
      piVar4 = (int *)puVar1[1];
      (**(code **)(*piVar4 + 0xc))(piVar4,puVar1);
    }
  }
  (**(code **)(*piVar2 + 0x24))(piVar2,param_2);
  return piVar2;
}


