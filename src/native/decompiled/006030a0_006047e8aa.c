#include "006030a0_006047e8aa.h"



void fn_006031a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x20,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006031d4(iVar1,param_1);
  return;
}



void fn_00603160(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x19) = 1;
  if (*(int *)(param_1 + 0x14) != 0) {
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



void fn_006030a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar1 = fn_00145b00(0x3c0,&DAT_00812c8c);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = fn_00101a1c(iVar1,&LAB_0020c1dc,0x20,0x1e);
    }
    if (*(int *)(param_1 + 0x14) != iVar2) {
      fn_002feef8(*(int *)(param_1 + 0x14));
      *(int *)(param_1 + 0x14) = iVar2;
    }
    fn_00301f50(*(undefined4 *)(param_1 + 0x14),0x3c0);
  }
  if (param_2 != 0) {
    fn_0017821c(*(undefined4 *)(param_1 + 0x14),param_2,0x3c0);
    iVar2 = 0;
    do {
      if (*(short *)(param_2 + iVar2 * 0x20) == 0) {
        if (-1 < iVar2) {
          *(int *)(param_1 + 0x1c) = iVar2;
          return;
        }
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    *(undefined4 *)(param_1 + 0x1c) = 0x1e;
  }
  return;
}


