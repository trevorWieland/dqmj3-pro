#include "007401e4_0074833caba.h"



undefined4 fn_007412a4(code *param_1,code *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00741210();
  if (iVar1 != 0 || DAT_00899ec4 != 0) {
    uVar2 = fn_001b8438(1,0xfffffe6e,(char *)&DAT_007d5f9c);
    return uVar2;
  }
  if (param_1 == (code *)0x0) {
    param_1 = fn_002fecec;
  }
  if (param_2 == (code *)0x0) {
    param_2 = fn_0030233c;
  }
  DAT_00899ebc = param_1;
  DAT_00899ec0 = param_2;
  return 0;
}


