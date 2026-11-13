#include "005beae4_005c0650bb.h"



void fn_005c0650(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x134,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005c18a8(iVar1,param_1);
  return;
}



void fn_005c05a4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006e92b4();
  if (iVar1 != 0) {
    fn_0068ab44(param_1,0x100094c);
    fn_0074879c(param_1,DAT_00898214,(char *)&DAT_005c04d8,0,1,1,0);
    fn_00748978(param_1,0);
    *(undefined1 *)(param_1 + 0x10a) = 0x13;
  }
  return;
}



void fn_005c0488(int param_1)

{
  fn_0074879c(param_1,DAT_00898214,(char *)&DAT_005c04d8,0,1,1,0);
  fn_00748978(param_1,0);
  *(undefined1 *)(param_1 + 0x10a) = 0x13;
  return;
}



void fn_005bffb4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(*(int *)(param_1 + 300) + 8) = 0;
  fn_0074876c(param_1);
  iVar2 = *(int *)(param_1 + 0x11c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
    for (iVar1 = *(int *)(iVar2 + 8); iVar1 != iVar3; iVar1 = iVar1 + 0x14) {
      fn_001588d4(iVar1 + 4);
    }
    iVar1 = *(int *)(iVar2 + 8);
    fn_001008c4(iVar1,(*(int *)(iVar2 + 0x10) - iVar1) / 0x14,0);
    fn_002feef8(*(undefined4 *)(iVar2 + 4));
    fn_002feef8(iVar2);
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  fn_0042b8fc(*(undefined4 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x124));
  fn_0042b8fc(*(undefined4 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x128));
  return;
}


