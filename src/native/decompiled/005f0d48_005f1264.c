#include "005f0d48_005f1264.h"



undefined4 * fn_005f1264(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = &DAT_00858e7c;
  iVar4 = param_1[1];
  if (iVar4 == 0) {
    return param_1;
  }
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 != &DAT_008f9cf4) {
    piVar2 = puVar1 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      iVar3 = *(int *)(iVar4 + 4);
      fn_001008c4(iVar3 + -0xc,*(int *)(iVar3 + -8) + 8,0);
    }
  }
  fn_002feef8(iVar4);
  return param_1;
}



void fn_005f110c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  fn_005e88b8(piVar1 + 1);
  if ((int *)*piVar1 != (int *)0x0) {
    (**(code **)(*(int *)*piVar1 + 0x10))();
    *piVar1 = 0;
  }
  return;
}



void fn_005f1018(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  
  uVar1 = fn_00118290();
  local_3c = 0x20000;
  local_38 = 0;
  local_40 = 0x8058;
  local_48 = param_3;
  local_44 = param_4;
  piVar2 = (int *)fn_00128114(&local_48,uVar1);
  piVar3 = (int *)*param_1;
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x10))();
    }
    *param_1 = (int)piVar2;
  }
  local_24 = 0;
  local_28 = 0;
  local_23 = 0;
  local_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  iVar4 = (**(code **)(*(int *)*param_1 + 4))();
  local_28 = *(undefined4 *)(iVar4 + 0xc);
  local_23 = 1;
  fn_005e8904(param_1 + 1,&local_34);
  return;
}



void fn_005f0e60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14c;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_143;
  undefined1 local_13e;
  undefined1 local_13b;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [24];
  undefined1 local_90;
  undefined1 local_8f;
  undefined4 local_8c;
  undefined4 local_44;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 4);
  uVar1 = fn_006eb278(param_2);
  fn_005e2a6c(uVar1,0,uVar5);
  fn_005e5e5c(param_2,0);
  fn_005e6114(param_2);
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 100) + 4);
  fn_005e5fbc(param_2,*puVar2);
  uVar5 = 0x3f800000;
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  fn_00117604(param_2,1,&local_28);
  iVar3 = fn_005e5a34(param_2);
  fn_005e5ec0(param_2,iVar3 + 0x1a8,iVar3 + 0x148);
  fn_0012b994();
  fn_005e692c(&local_bc,param_2);
  puVar6 = puVar2 + 2;
  *puVar6 = local_bc;
  puVar2[3] = uStack_b8;
  puVar2[4] = uStack_b4;
  puVar2[5] = uStack_b0;
  puVar2[6] = uStack_ac;
  puVar4 = (undefined4 *)*puVar6;
  *puVar4 = 1;
  puVar4[1] = 0xf0111;
  puVar4[2] = 1;
  puVar4[3] = 0xf0110;
  *puVar6 = puVar4 + 4;
  uVar1 = fn_0016ffac(puVar4 + 4,1);
  *puVar6 = uVar1;
  uVar1 = fn_0016fe54(uVar1,1);
  *puVar6 = uVar1;
  fn_0016fd44(auStack_a8);
  fn_006eb278(param_2);
  fn_006ea01c();
  local_90 = 1;
  local_8f = 0;
  local_8c = puVar2[7];
  local_44 = uVar5;
  uVar1 = fn_006ceb64(auStack_a8,*puVar6,1);
  *puVar6 = uVar1;
  fn_0015d34c(&local_150);
  local_150 = 0;
  local_14c = 0xe;
  local_14f = 4;
  local_147 = 0;
  local_143 = 0xe;
  local_146 = 0;
  local_13e = 0;
  local_13b = 0;
  uVar1 = fn_00176818(&local_150,*puVar6);
  *puVar6 = uVar1;
  fn_005e58ec(param_2,1);
  return;
}



void fn_005f0de8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_90 [24];
  undefined1 local_78;
  undefined4 local_2c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 100) + 4);
  fn_0016fd44(auStack_90);
  local_2c = 0;
  local_78 = 0;
  uVar1 = fn_006ceb64(auStack_90,*(undefined4 *)(iVar2 + 8),1);
  *(undefined4 *)(iVar2 + 8) = uVar1;
  fn_005e68a0(param_2,iVar2 + 8);
  fn_005e581c(param_2);
  fn_005e58ec(param_2,0);
  fn_00117984();
  fn_00117674();
  return;
}



int fn_005f0dd4(int param_1)

{
  return *(int *)(*(int *)(param_1 + 100) + 4) + 8;
}



void fn_005f0d48(undefined4 *param_1)

{
  *param_1 = &DAT_00858e4c;
  if (param_1[1] != 0) {
    fn_00143828();
    fn_002feef8();
  }
  fn_002feef8(param_1);
  return;
}


