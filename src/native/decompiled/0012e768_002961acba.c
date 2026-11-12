#include "0012e768_002961acba.h"



undefined4 * fn_00146e50(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_0089a520 == (code *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)(*DAT_0089a520)(0x10000,0x100,0,0x1cc);
    if (puVar4 != (undefined4 *)0x0) {
      fn_00301f50(puVar4,0x1cc);
      puVar4[1] = 0x2600;
      puVar4[2] = 0x2901;
      *puVar4 = 0x2600;
      puVar4[3] = 0x2901;
      puVar4[10] = 0;
      puVar4[9] = 0;
      puVar4[0xb] = 0;
      puVar4[5] = 0xfffffc18;
      puVar4[8] = 0;
      puVar4[7] = 0;
      iVar2 = 0;
      iVar1 = 0;
      puVar4[6] = 0;
      do {
        iVar3 = iVar2 + 1;
        puVar4[iVar2 * 0x11 + 0x1d] = param_1;
        iVar1 = iVar1 + 2;
        iVar2 = iVar2 + 2;
        puVar4[iVar3 * 0x11 + 0x1d] = param_1;
      } while (iVar1 < 6);
    }
  }
  return puVar4;
}


