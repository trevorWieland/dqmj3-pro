#include "00386c88_00387810ba.h"



void fn_00387640(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_0022f584((&DAT_00895aa8)[param_2],0);
  uVar2 = fn_0016ba34(DAT_00897800,DAT_00898230,(&PTR_s_HelpMessage0001_00895ac0)[param_2],0);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar1,uVar2);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_00387200(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    (**(code **)(**(int **)(param_1 + iVar1 * 4 + 0xec) + 0x14))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  fn_003979d0(param_1);
  return;
}



void fn_0038719c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003871cc(iVar1,param_1);
  return;
}



void fn_003871cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_007c747c,1);
  *puVar1 = &DAT_0082a330;
  return;
}


