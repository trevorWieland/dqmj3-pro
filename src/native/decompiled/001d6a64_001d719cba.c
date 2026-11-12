#include "001d6a64_001d719cba.h"



void fn_001d70a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  float in_s0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_28;
  float local_24;
  undefined4 uStack_20;
  
  fn_00176d68(*(undefined4 *)(param_1 + 4));
  puVar1 = (undefined4 *)fn_006dcd40();
  local_28 = *puVar1;
  local_24 = (float)puVar1[1];
  uStack_20 = puVar1[2];
  iVar2 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  uVar4 = *(undefined4 *)(iVar2 + 0x58);
  uVar5 = *(undefined4 *)(iVar2 + 0x78);
  local_24 = *(float *)(param_1 + 0x158) + in_s0;
  in_s0 = *(float *)(param_1 + 0x154) + in_s0;
  uVar3 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  fn_005456f4(uVar3,&local_28);
  iVar2 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(iVar2 + 0x58) = uVar4;
  *(float *)(iVar2 + 0x68) = in_s0;
  *(undefined4 *)(iVar2 + 0x78) = uVar5;
  *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x800;
  return;
}



void fn_001d7084(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xf4) = *param_2;
  *(undefined4 *)(param_1 + 0xf8) = param_2[1];
  *(undefined4 *)(param_1 + 0xfc) = param_2[2];
  return;
}


