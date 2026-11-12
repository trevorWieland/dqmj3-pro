#include "00289518_00289cc0a.h"



void fn_002898fc(int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x20);
  *(int *)(param_1 + 0x14) = iVar4;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x18) = uVar3;
  *(uint *)(param_1 + 0x10) = uVar1;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  if ((iVar4 == *(int *)(param_1 + 0x1c)) &&
     (((iVar4 == 0 && (((*(byte *)(param_1 + 0x18) | uVar1) & 1) == 0)) || (uVar3 == uVar1)))) {
    iVar4 = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x28) = iVar4;
  if ((*(int *)(param_1 + 0xc) == 0) &&
     ((*(uint *)(param_1 + 0x10) & 1) == 0 || *(uint *)(param_1 + 0x10) == 0)) {
    return;
  }
  pcVar2 = *(code **)(param_1 + 0xc);
  if ((*(uint *)(param_1 + 0x10) & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x10) >> 1)));
  }
  (*pcVar2)();
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return;
}



void fn_00289788(int param_1,int param_2,undefined4 param_3)

{
  *(int *)(param_1 + 4) = param_2;
  *(uint *)(param_2 + 0x138) = *(uint *)(param_2 + 0x138) | 2;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(code **)(param_1 + 0x1c) = fn_00289648;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(code **)(param_1 + 0x14) = fn_00289648;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(code **)(param_1 + 0xc) = fn_00289648;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00289648(int param_1)

{
  if (*(int *)(param_1 + 0x30) < 0x1e) {
    return;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 4) == 0) {
    (**(code **)(_Reset + 0x44))(0,0xe,4,0);
  }
  else {
    fn_001e6a50(*(int *)(param_1 + 4),0xe);
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00289518(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar1 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x80ec);
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 != 0) {
      iVar2 = fn_006aba74(iVar3);
      if (iVar2 != 0) {
        fn_00259878(iVar3);
      }
      fn_002cd59c();
      fn_0023dd30(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar1);
    }
  }
  if (0x1d < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(code **)(param_1 + 0x1c) = fn_002895bc;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



void fn_002895bc(int param_1)

{
  undefined4 local_48 [15];
  
  fn_002897e0(param_1,0);
  if (9 < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    fn_00699648(DAT_008977e0,0xffffffff,1,1,0x14);
    fn_0011a24c(local_48);
    local_48[0] = fn_003199b4(*(undefined4 *)(param_1 + 0x38));
    fn_006983e4(DAT_008977e0);
    *(code **)(param_1 + 0x1c) = fn_002896cc;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



void fn_002896cc(int param_1)

{
  int iVar1;
  
  fn_002897e0(param_1,0);
  iVar1 = fn_006f73a0(DAT_008977e0,1);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x20))();
    (**(code **)(**(int **)(param_1 + 4) + 0xd8))();
    *(uint *)(*(int *)(param_1 + 4) + 0x138) = *(uint *)(*(int *)(param_1 + 4) + 0x138) & 0xfffffffd
    ;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  return;
}



undefined4 fn_002897e0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  float in_s0;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  fVar7 = *(float *)(param_1 + 0x2c);
  if (fVar7 == 0.0) {
    uVar1 = 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    fVar6 = *(float *)(iVar2 + 0x38);
    fVar5 = *(float *)(iVar2 + 0x40);
    if (param_2 != 0) {
      fVar6 = fVar6 - fVar7;
      fVar5 = fVar5 - fVar7;
    }
    fVar8 = *(float *)(iVar2 + 0xf8);
    uVar9 = 0;
    bVar3 = fVar6 == 0.0;
    bVar4 = 0.0 <= fVar6;
    *(float *)(param_1 + 0x2c) = fVar7 + in_s0;
    if (bVar4 && !bVar3) {
      bVar3 = fVar5 == 0.0;
      bVar4 = 0.0 <= fVar5;
    }
    if ((!bVar4 || bVar3) || (fVar8 - fVar7 <= 0.0)) {
      uVar1 = 1;
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
        DAT_008f9e2c = uVar9;
        DAT_008f9e30 = uVar9;
        DAT_008f9e34 = uVar9;
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar9;
    }
    else {
      uVar1 = 0;
    }
    if (param_2 != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
    }
    (**(code **)(**(int **)(param_1 + 4) + 0xd8))();
  }
  return uVar1;
}


