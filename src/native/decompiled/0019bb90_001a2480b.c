#include "0019bb90_001a2480b.h"



void fn_001a2480(undefined4 param_1,undefined4 param_2)

{
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  fn_00301d9c(local_10,param_1,param_2);
  return;
}



uint fn_001a23a8(void)

{
  uint uVar1;
  bool bVar2;
  uint in_s0;
  uint in_s1;
  
  if ((-1 < (int)(0x7f800000 - (in_s0 & 0x7fffffff))) &&
     (-1 < (int)(0x7f800000 - (in_s1 & 0x7fffffff)))) {
    bVar2 = in_s0 * -2 != 0x1000000;
    uVar1 = in_s0;
    if (bVar2) {
      uVar1 = in_s1;
    }
    if (!bVar2 || (uVar1 & 0x7fffffff) == 0) {
      uVar1 = fn_00102ca2(1);
      return uVar1;
    }
  }
  uVar1 = fn_001a2990();
  if ((~(uVar1 >> 0x17) & 0xff) == 0) {
    return ~(uVar1 >> 0x17);
  }
  if ((in_s0 & 0x80000000) == (uVar1 & 0x80000000)) {
    return uVar1 & 0x80000000;
  }
  return uVar1 & 0x80000000 | in_s1 & 0x7fffffff;
}



void fn_001a0a94(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = fn_0017f118(param_1,param_3,param_2);
  }
  *(undefined1 *)(iVar1 + 0x44) = 1;
  return;
}


