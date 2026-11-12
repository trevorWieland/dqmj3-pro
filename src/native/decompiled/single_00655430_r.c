#include "single_00655430_r.h"


extern undefined4 register0x00000054;

/* WARNING: Removing unreachable block (ram,0x00655460) */

bool fn_00655430(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint extraout_r1;
  uint uVar3;
  uint local_c;
  
  uVar1 = DAT_008bf60c;
  local_c = *param_1;
  if ((int)*param_1 < 0) {
    puVar2 = (uint *)((int)register0x00000054 + -8);
  }
  else {
    puVar2 = &local_c;
  }
  uVar3 = *puVar2;
  DAT_008bf60c = DAT_008bf610;
  uVar1 = uVar1 ^ uVar1 << 0xb;
  DAT_008bf610 = DAT_008bf614;
  DAT_008bf614 = DAT_008bf618;
  DAT_008bf618 = DAT_008bf618 ^ DAT_008bf618 >> 0x13 ^ uVar1 ^ uVar1 >> 8;
  fn_00169f1c(DAT_008bf618,param_1[1]);
  return extraout_r1 < uVar3;
}


