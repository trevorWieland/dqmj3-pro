#include "single_0074041c_2.h"



undefined4 fn_0074041c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_2c [16];
  
  uVar3 = 0;
  if (param_2 == 0) {
    uVar3 = fn_001b8438(1,0xfffffe6d,(char *)&DAT_007d5eef);
    return uVar3;
  }
  fn_00158f6c(param_2,0x100);
  DAT_00899eb0 = 0;
  iVar1 = fn_00741220(0x78);
  puVar2 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_0048cc04(iVar1,0);
  }
  DAT_00899eac = puVar2;
  iVar1 = fn_00741220(8);
  puVar2 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_00482070();
  }
  DAT_00899ea8 = puVar2;
  fn_00481eb0(auStack_2c,puVar2,DAT_00899eac,param_1,param_3,param_2,1);
  fn_004b8d90(&DAT_008d188c,auStack_2c);
  iVar1 = fn_006d3b8c(&DAT_008d188c);
  if (iVar1 == 0) {
    uVar3 = fn_001b8438(1,0xfffffe6e,(char *)&DAT_007d5eef);
    DAT_00899eb0 = DAT_00899ea8[1];
    (**(code **)*DAT_00899ea8)();
    fn_007407d4(DAT_00899ea8);
    (**(code **)*DAT_00899eac)();
    fn_007407d4(DAT_00899eac);
    DAT_00899ea8 = (undefined4 *)0x0;
    DAT_00899eac = (undefined4 *)0x0;
  }
  return uVar3;
}


