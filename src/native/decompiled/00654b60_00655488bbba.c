#include "00654b60_00655488bbba.h"



bool fn_006553d0(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_008bf60c;
  DAT_008bf60c = DAT_008bf610;
  uVar1 = uVar1 ^ uVar1 << 0xb;
  DAT_008bf610 = DAT_008bf614;
  DAT_008bf614 = DAT_008bf618;
  DAT_008bf618 = DAT_008bf618 ^ DAT_008bf618 >> 0x13 ^ uVar1 ^ uVar1 >> 8;
  return DAT_008bf618 % 100 < param_1;
}


