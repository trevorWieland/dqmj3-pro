#include "0030fd30_00310d20a.h"



void fn_003100dc(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005f40b4(param_1,1);
  *puVar1 = &DAT_0082232c;
  return;
}



void fn_0030fffc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  uVar1 = fn_00176d68();
  fn_006dcca4(uVar1,0,local_2c,0,0);
  fn_0017fe34();
  fn_00176d68(param_1);
  fn_00545310();
  iVar2 = fn_00176d68(param_1);
  *(undefined4 *)(iVar2 + 0x294) = 0x3951b717;
  iVar2 = fn_00176d68(param_1);
  uVar3 = 0xc08926e9;
  uVar4 = 0x41200000;
  *(undefined4 *)(iVar2 + 0x58) = 0xc08926e9;
  *(undefined4 *)(iVar2 + 0x68) = 0x41200000;
  *(undefined4 *)(iVar2 + 0x78) = 0x428c79db;
  *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x800;
  uVar1 = fn_00176d68(param_1);
  local_20 = 0x4234f3b6;
  local_28 = uVar3;
  uStack_24 = uVar4;
  fn_005456f4(uVar1,&local_28);
  return;
}



undefined4 * fn_0030ffcc(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  *param_1 = puVar1;
  return param_1;
}



undefined4 fn_0030ff18(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  uVar1 = fn_0068eb30(DAT_008977e8);
  iVar2 = fn_002647b8(uVar1,param_2);
  if (iVar2 == -1) {
    uVar1 = 0;
  }
  else {
    iVar3 = fn_00145b00(0x38,&DAT_00812c8c);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = fn_0067f7b0();
    }
    iVar3 = *piVar5;
    if (iVar3 != iVar4) {
      if (iVar3 != 0) {
        fn_001446c0(iVar3);
        fn_002feef8();
      }
      *piVar5 = iVar4;
    }
    uVar1 = fn_0068eb30(DAT_008977e8);
    uVar1 = fn_00265604(uVar1,iVar2);
    fn_0067d424(*piVar5,uVar1);
    uVar1 = fn_0068eb30(DAT_008977e8);
    fn_00265538(uVar1,iVar2);
    uVar1 = 1;
  }
  return uVar1;
}



void fn_0030feb8(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &DAT_0082231c;
  if (param_1[8] != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1[8]);
    param_1[8] = 0xffffffff;
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_0030fe48(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = &DAT_0082231c;
  param_1[1] = &DAT_008592a0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[8] = 0xffffffff;
  param_1[5] = param_2;
  param_1[4] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[6] = 0x96;
  iVar1 = fn_00163868(600);
  param_1[7] = iVar1 + 0x4b0;
  return param_1;
}



void fn_0030fd30(int *param_1)

{
  *(int *)(*(int *)(*param_1 + 0x30) + 0x18) = *(int *)(*(int *)(*param_1 + 0x30) + 0x18) + 0x3c;
  return;
}


