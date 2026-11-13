#include "single_006f9fb0_r.h"


extern undefined4 INFINITY;

void fn_006f9fb0(void)

{
  uint in_r3;
  float in_s0;
  float fVar1;
  uint local_8 [2];
  
  if ((uint)((int)in_s0 * 2) < 0x7e921fb6) {
    if ((uint)((int)in_s0 * 2) < 0x73000001 && (int)in_s0 * -2 != -0x73000000) {
      local_8[0] = 0xffffffff;
    }
    else {
      local_8[0] = 0;
    }
  }
  else if ((uint)ABS(in_s0) < 0x46490e49) {
    if (((uint)in_s0 & 0x80000000) == 0) {
      fVar1 = (in_s0 * 0.63661975 + 8388608.0) - 8388608.0;
    }
    else {
      fVar1 = (in_s0 * 0.63661975 - 8388608.0) + 8388608.0;
    }
    local_8[0] = (int)fVar1 & 3;
    in_s0 = (((in_s0 - fVar1 * 1.5703125) - fVar1 * 0.0004837513) - fVar1 * 7.5495336e-08) -
            fVar1 * 2.563344e-12;
  }
  else {
    local_8[0] = in_r3;
    fn_006fb118(local_8);
  }
  if ((int)local_8[0] < 0) {
    if (ABS(in_s0) == INFINITY) {
      fn_00102ca2(1);
      return;
    }
    return;
  }
  if ((local_8[0] & 1) == 0) {
    if ((local_8[0] & 2) == 0) {
      return;
    }
  }
  else if ((local_8[0] & 2) != 0) {
    return;
  }
  return;
}


