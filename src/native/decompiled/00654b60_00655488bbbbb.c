#include "00654b60_00655488bbbbb.h"



bool fn_00655488(uint param_1)

{
  uint uVar1;
  uint extraout_r1;
  
  uVar1 = DAT_008bf60c;
  DAT_008bf60c = DAT_008bf610;
  uVar1 = uVar1 ^ uVar1 << 0xb;
  DAT_008bf610 = DAT_008bf614;
  DAT_008bf614 = DAT_008bf618;
  DAT_008bf618 = DAT_008bf618 ^ DAT_008bf618 >> 0x13 ^ uVar1 ^ uVar1 >> 8;
  fn_00169f1c();
  return extraout_r1 < param_1;
}


