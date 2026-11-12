#include "00394e34_00395468ab.h"



void fn_0039528c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003952bc(iVar1,param_1);
  return;
}



void fn_0039525c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004111d0();
  puVar1[0x34] = 0;
  *puVar1 = &DAT_0082b67c;
  return;
}



void fn_00395208(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x144))(param_1);
  iVar2 = param_1[0x34];
  *(undefined4 *)(iVar2 + 0x558) = 0;
  *(uint *)(iVar2 + 0x55c) = uVar1 & 0xffff;
  *(undefined4 *)(iVar2 + 0x560) = 0;
  *(undefined4 *)(iVar2 + 0x564) = 0;
  *(undefined1 *)(param_1[0x34] + 0x568) = 0;
  return;
}



void fn_00395110(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x144))(param_1);
  iVar2 = fn_006ccfd4(param_1,uVar1);
  if (iVar2 == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  fn_006899f4(param_1,0x83,0);
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0x83);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008939d8) goto LAB_0039519c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0039519c:
  *(undefined1 *)(puVar3 + 2) = 0;
  puVar3[3] = 0;
  puVar3[4] = uVar1 & 0xffff;
  puVar3[5] = 0;
  puVar3[6] = 0;
  fn_00410d14(param_1,param_2);
  fn_0068ab44(param_1,0x100094b);
  return;
}


