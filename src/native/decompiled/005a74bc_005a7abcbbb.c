#include "005a74bc_005a7abcbbb.h"



void fn_005a7abc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  iVar2 = fn_00145b00(0x3c,&DAT_00812c8c,param_3,param_4,param_4);
  uVar3 = 0;
  if (iVar2 != 0) {
    VectorSignedToFloat((int)*(char *)(*(int *)(param_1 + 0x40) + 0xe0),(byte)(in_fpscr >> 0x16) & 3
                       );
    uVar3 = fn_0060917c(iVar2,*(undefined4 *)(param_1 + 0x60),0);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  fn_00578d34(*(undefined4 *)(param_1 + 0x40),param_3,1,0);
  fn_006090e8(*(undefined4 *)(param_1 + 0x48),param_3);
  fn_005797d8(uVar4,param_4,(int)*(char *)(*(int *)(param_1 + 0x40) + 0xe0));
  uVar1 = fn_00608fe0(*(undefined4 *)(param_1 + 0x48),param_4);
  *(undefined1 *)(param_2 + 0x34) = uVar1;
  *(undefined1 *)(param_2 + 0x35) = 1;
  uVar3 = fn_006ef104(*(undefined4 *)(param_1 + 0x48));
  uVar3 = fn_006e8314(param_1,1,0,uVar3);
  fn_005a789c(param_1,param_3,uVar3,1,0);
  return;
}


