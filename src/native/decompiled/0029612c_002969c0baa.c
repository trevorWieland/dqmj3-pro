#include "0029612c_002969c0baa.h"



undefined4 fn_00296468(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  fn_006f5e08(auStack_20,DAT_00897850);
  fn_006d3d30(&local_28,auStack_20);
  local_30 = local_28;
  uStack_2c = uStack_24;
  iVar1 = fn_006bec60(*(undefined4 *)(DAT_00897804 + 0x40));
  uVar2 = fn_0011a314(&local_30);
  uVar3 = fn_0011a3c4(&local_30);
  uVar4 = fn_0011a36c(&local_30);
  iVar5 = fn_00114150(uVar4,uVar3,uVar2);
  if ((iVar1 + 0x1e < iVar5) &&
     (iVar1 = fn_006bec60(*(undefined4 *)(DAT_00897804 + 0x40)), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


