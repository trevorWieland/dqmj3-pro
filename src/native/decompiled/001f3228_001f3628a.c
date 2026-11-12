#include "001f3228_001f3628a.h"



undefined4 fn_001f3444(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  if ((iVar1 == 0) || (iVar1 = fn_003755c4(iVar1,param_2,param_3), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = fn_0015a130(param_1);
  return uVar2;
}



void fn_001f3348(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006f75ac(DAT_008977e0);
  fn_00245d34(*(undefined4 *)(iVar1 + 8),1);
  fn_00245d18(*(undefined4 *)(iVar1 + 8));
  fn_00245cd8(*(undefined4 *)(iVar1 + 8));
  fn_0038ff40(iVar1,3,param_3,param_3 == 0,0);
  uVar2 = fn_006f75ac(DAT_008977e0);
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  iVar1 = fn_006f7a20(DAT_008977e0);
  if ((iVar1 == 0) &&
     (iVar1 = fn_0025fa84(DAT_00897800,*(undefined4 *)(param_1 + 0x84),param_2), iVar1 != 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x84);
  }
  uVar3 = fn_0025f9d8(DAT_00897800,uVar3,param_2);
  fn_0038fee8(uVar2,uVar3);
  *(undefined1 *)(param_1 + 0xf90) = 1;
  return;
}



void fn_001f331c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_006f72b4(DAT_008977e0);
  fn_0021b6b4(uVar1,param_2,param_3);
  return;
}



void fn_001f32e4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float in_s0;
  
  uVar1 = fn_006f7a5c(DAT_008977e0);
  fn_001d870c(uVar1,param_2,(int)in_s0);
  return;
}



void fn_001f32d0(undefined4 param_1,int param_2)

{
  fn_00144834(*(undefined4 *)(&DAT_007c1de4 + param_2 * 4),1);
  return;
}



void fn_001f32b4(void)

{
  fn_006f756c(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x006bacf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_00891214 + 0x20))();
  return;
}



void fn_001f3228(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_006b51f8(*(undefined4 *)(DAT_00897804 + 0x1c));
  uVar1 = fn_0026d2c4(param_2,uVar1);
  iVar2 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar1);
  if (iVar2 != -1) {
    fn_0017fe34();
    fn_00697004(DAT_008977e0,iVar2,0xffffffff,param_3);
    *(undefined1 *)(param_1 + 0xf94) = 0;
  }
  return;
}


