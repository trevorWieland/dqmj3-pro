#include "003bfab0_003c178cba.h"



void fn_003c15ec(int param_1,short param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  
  fn_0020bbc4(auStack_18,*(undefined4 *)(param_1 + 0x100));
  sVar1 = fn_006ba284(param_1);
  sVar2 = fn_006ba274(param_1);
  param_2 = sVar1 * sVar2 + param_2;
  iVar3 = fn_006aed20(auStack_18,param_2);
  if (iVar3 == 0) {
    iVar3 = 2;
  }
  else if (iVar3 == 1) {
    iVar3 = 0;
  }
  else if (iVar3 == 2) {
    iVar3 = 1;
  }
  fn_0020b55c(auStack_18,param_2,iVar3);
  fn_0068ab44(param_1,0x100094b);
  fn_003c12f4(param_1);
  return;
}



void fn_003c15bc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x200,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c1708(iVar1,param_1);
  return;
}



void fn_003c0fcc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003fedc0();
  *puVar1 = &DAT_0082fc28;
  return;
}


