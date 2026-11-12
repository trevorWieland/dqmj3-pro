#include "0051c788_00538628ab.h"



void fn_0051d8e4(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_008bf4d4 + -0x40000 < (undefined4 *)0x3ff00000) {
    fn_0051e00c();
    puVar1 = DAT_008bf4d4;
    if (DAT_008bf4d4 != (undefined4 *)0x0) {
      *DAT_008bf4d4 = &DAT_00857348;
      fn_0050bc40();
      if (puVar1[0x1f] != 0) {
        fn_0050afe0();
        fn_004ecfd0();
      }
      fn_0051332c();
      fn_0051c494();
      fn_0050ffac();
      fn_00519230();
      fn_00519904();
      fn_0051ba98();
      fn_00518bc8();
      fn_0050b7b8();
      iVar2 = fn_0050cf00(puVar1 + 4);
      fn_004ecfd0(iVar2 + -0x10);
      DAT_008bf4d4 = (undefined4 *)0x0;
    }
  }
  return;
}


