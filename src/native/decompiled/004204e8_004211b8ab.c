#include "004204e8_004211b8ab.h"



undefined4 *
fn_004209dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0016b7d8(param_1,param_3,param_4);
  puVar1[10] = param_2;
  *(undefined1 *)(puVar1 + 0xb) = param_5;
  *puVar1 = &DAT_0083aa58;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_003756a8(iVar2,param_2,param_6,param_7);
  }
  puVar1[0xc] = uVar3;
  return puVar1;
}



void fn_00420988(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fn_00234690();
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  iVar2 = fn_00182994(DAT_008977e4);
  puVar1 = *(undefined4 **)(iVar2 + 0xa0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  return;
}



void fn_00420934(int param_1)

{
  undefined4 uVar1;
  
  fn_00234690();
  uVar1 = fn_00182994(DAT_008977e4);
  fn_0015aabc(uVar1,*(undefined4 *)(param_1 + 0x40));
  return;
}



void fn_004208e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fn_00234690();
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  iVar2 = fn_00182994(DAT_008977e4);
  puVar1 = *(undefined4 **)(iVar2 + 0xa0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  return;
}


