#include "single_006fa128_r.h"


extern undefined4 INFINITY;

void fn_006fa128(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint in_fpscr;
  float in_s0;
  uint uVar5;
  float fVar6;
  
  bVar4 = false;
  if (0x1e500000 < (int)in_s0 * 2 + 0x99000000U) {
    if ((~(uint)in_s0 & 0x7fffffff) >> 0x17 == 0) {
      return;
    }
    if ((uint)((int)in_s0 * 2) < 0x67000001 && (int)in_s0 * -2 != -0x67000000) {
      return;
    }
    if (0x85a00000 < (uint)((int)in_s0 << 1)) {
      fn_00102ca2(2);
      if (((uint)in_s0 & 0x80000000) == 0) {
        return;
      }
      fn_001a878c();
      return;
    }
    bVar4 = true;
  }
  if (((uint)in_s0 & 0x80000000) == 0) {
    fVar6 = 0.5;
  }
  else {
    fVar6 = -0.5;
  }
  uVar5 = (uint)(fVar6 + in_s0 * 5.77078);
  uVar3 = uVar5 & 3;
  fVar6 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (in_s0 - fVar6 * 0.17327881) - fVar6 * 7.986546e-06;
  iVar2 = (int)uVar5 >> 2;
  if (!bVar4) {
    fVar6 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    VectorFloatToUnsigned(fVar6 * 8388608.0 + 1.0653532e+09,3);
    return;
  }
  iVar1 = iVar2 - ((int)uVar5 >> 0x1f) >> 1;
  fVar6 = (float)((iVar2 - iVar1) * 0x800000 + 0x3f800000) *
          (float)(iVar1 * 0x800000 + 0x3f800000) *
          (*(float *)(&DAT_00812ca0 + uVar3 * 4) +
           *(float *)(&DAT_00812cb0 + uVar3 * 4) *
           (fVar6 * (fVar6 * (fVar6 * 0.04168231 + 0.16672924) + 0.49999997) + 0.99999994) * fVar6 +
          *(float *)(&DAT_00812c90 + uVar3 * 4));
  if (fVar6 == 0.0) {
    fn_00102ca2(2);
    fn_001a878c();
    return;
  }
  if (fVar6 == INFINITY) {
    fn_00102ca2(2);
    return;
  }
  iVar2 = fn_001a8760(fVar6);
  if (iVar2 == 4) {
    fn_001a878c();
  }
  return;
}


