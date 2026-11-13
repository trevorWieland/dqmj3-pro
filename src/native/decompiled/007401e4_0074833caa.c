#include "007401e4_0074833caa.h"



void fn_007401e4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 == 0 || param_3 == 0) || param_2 == 0) {
    fn_001b8438(1,0xfffffe6d,(char *)&DAT_007d5edf);
    return;
  }
  iVar1 = fn_00740a4c();
  piVar2 = (int *)fn_00741220(0x10);
  if (iVar1 == 0 || piVar2 == (int *)0x0) {
    fn_007407d4();
    fn_00740adc(iVar1);
    fn_001b8438(1,0xfffffe6f,(char *)&DAT_007d5edf);
    return;
  }
  piVar2[3] = param_2;
  *piVar2 = param_3;
  piVar2[1] = param_4;
  fn_001ba680(param_1);
  fn_001b4928(0);
  iVar3 = fn_00740ee8(iVar1,(char *)&DAT_007402bc,fn_001b586c,piVar2);
  if (iVar3 != 0) {
    fn_007407d4(piVar2);
    fn_00740adc(iVar1);
  }
  fn_001b8438(1,iVar3,(char *)&DAT_007d5edf);
  return;
}



void fn_00740adc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)*(int *)(param_1 + 0x20);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    fn_007407d4(piVar1[1]);
    fn_007407d4(piVar1);
    piVar1 = (int *)iVar2;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  fn_007407d4(*(undefined4 *)(param_1 + 0x18));
  fn_007407d4(*(undefined4 *)(param_1 + 0x10));
  fn_007407d4(param_1);
  return;
}


