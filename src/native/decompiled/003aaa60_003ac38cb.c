#include "003aaa60_003ac38cb.h"



void fn_003ac38c(undefined4 *param_1)

{
  *param_1 = &DAT_0082e0ec;
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 4))();
  }
  fn_00315fd0(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_003ac350(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_00315f18();
  *puVar1 = &DAT_0082e0ec;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_003d35c0();
  }
  puVar1[0x10] = uVar3;
  return puVar1;
}



void fn_003ac2d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_00315e18();
  if (param_5 != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x30) + param_4 * 4);
    fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar2);
    iVar1 = fn_0020ccb0();
    if (iVar1 != 0) {
      fn_003d308c(*(undefined4 *)(param_1 + 0x40),param_3,uVar2,0);
      return;
    }
  }
  fn_004231f0(*(undefined4 *)(param_1 + 0x40),param_3,0,param_5);
  return;
}



void fn_003ac250(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_00315b0c();
  iVar1 = fn_00145b00(0x30,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00441974(iVar1,param_3,param_6,1,param_4);
  }
  fn_00315bb4(param_1,uVar2);
  fn_003d31b0(*(undefined4 *)(param_1 + 0x40),param_5,&PTR_s_color_mon_list_00_00890c30,10);
  return;
}



void fn_003abb70(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003ac02c(iVar1,param_1);
  return;
}


