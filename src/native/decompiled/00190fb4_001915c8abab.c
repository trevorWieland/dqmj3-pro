#include "00190fb4_001915c8abab.h"



uint fn_001911c4(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  uint local_10;
  undefined4 uStack_c;
  uint local_8 [2];
  
  puVar1 = &local_10;
  fVar2 = 10.0;
  uStack_c = param_1;
  local_8[0] = param_2;
  fn_001a4a80();
  iVar3 = VectorFloatToUnsigned(fVar2 + 0.1,3);
  local_10 = iVar3 - 1U;
  if (local_8[0] <= iVar3 - 1U) {
    puVar1 = local_8;
  }
  return *puVar1;
}


