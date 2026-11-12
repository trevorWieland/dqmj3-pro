#include "005acd7c_005adb8cba.h"



void fn_005ad910(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 auStack_440 [1068];
  
  if (param_2 != 0) {
    fn_00689824(param_1,0);
    *(undefined1 *)(param_1 + 0x10c) = 2;
    fn_0068ab44(param_1,0x100094c);
    return;
  }
  piVar5 = *(int **)(param_1 + 0xe8);
  uVar6 = *(uint *)(param_1 + 0x108);
  uVar2 = piVar5[1] - *piVar5;
  iVar3 = (int)((longlong)(int)uVar2 * -0x99fc267 + ((ulonglong)uVar2 << 0x20) >> 0x20);
  if ((uint)((iVar3 >> 10) - (iVar3 >> 0x1f)) <= uVar6) {
    iVar3 = (int)((longlong)(int)uVar2 * -0x99fc267 + ((ulonglong)uVar2 << 0x20) >> 0x20);
    fn_002ff628(9,&DAT_008c761b,&DAT_008c761b,uVar6,(iVar3 >> 10) - (iVar3 >> 0x1f));
  }
  fn_0017821c(auStack_440,*piVar5 + uVar6 * 0x428,0x428);
  sVar1 = *(short *)(*(int *)(param_1 + 0x104) + 0x14);
  iVar3 = fn_0057a2dc(param_1,auStack_440);
  if ((iVar3 == 0) || (iVar3 = fn_006c2a50(param_1 + 0xe4), iVar3 < 1)) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  uVar4 = fn_0057a228(param_1,*(undefined4 *)(param_1 + 0x108));
  fn_0035ca80(param_1 + 0xe4,*(undefined4 *)(param_1 + 0xe8),uVar4,(int)sVar1,1,0);
  fn_0057a634(param_1);
  fn_0035c240(param_1 + 0xe4);
  fn_0035be50(param_1 + 0xe4);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_005ad8e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x120,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005adb8c(iVar1,param_1);
  return;
}


