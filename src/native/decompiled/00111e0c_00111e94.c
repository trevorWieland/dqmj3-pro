#include "00111e0c_00111e94.h"



void fn_00111e94(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  fn_00114248(&local_20);
  local_28 = local_20;
  uStack_24 = uStack_1c;
  uVar1 = fn_0011a36c(&local_28);
  uVar2 = fn_0011a3c4(&local_28);
  iVar3 = fn_0011a314(&local_28);
  uVar4 = fn_00129e2c(&local_28);
  uVar5 = fn_00129e94(&local_28);
  uVar6 = fn_00129f00(&local_28);
  *(uint *)(*param_1 + 0xb08) = uVar1 & 0xffff | (uVar2 & 0xff) << 0x10 | iVar3 << 0x18;
  *(uint *)(*param_1 + 0xb0c) = (uVar6 & 0xff) << 0x10 | uVar4 & 0xff | (uVar5 & 0xff) << 8;
  return;
}



void fn_00111e44(int *param_1)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  fn_001237e4(&local_10);
  local_18 = local_10;
  uStack_14 = uStack_c;
  uVar1 = fn_00129f6c(&local_18,0x1a,0x26d694b3,0x112e0be8,0x1a);
  *(undefined8 *)(*param_1 + 0xb00) = uVar1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00111e38) */

void fn_00111e0c(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0xaf8) = param_2;
  fn_00121630();
  return;
}


