#include "006f9298_006fa128ba.h"



void fn_006f9cac(void)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  float in_s0;
  float in_s1;
  float fVar4;
  float fVar5;
  
  uVar1 = 0xe8000000;
  bVar3 = 0xe4ffffff < (int)in_s0 * 2 + 0xe8000000U;
  if (!bVar3) {
    uVar1 = (int)in_s1 * 2 + 0xe8000000;
  }
  fVar5 = in_s0;
  fVar4 = in_s1;
  if (bVar3 || 0xe4ffffff < uVar1) {
    if (0xff000000 < (uint)((int)in_s0 << 1) || 0xff000000 < (uint)((int)in_s1 << 1)) {
      return;
    }
    if ((((uint)in_s0 | (uint)in_s1) & 0x7fffffff) == 0) {
      in_s1 = (float)((uint)in_s1 | 0x7f800000);
    }
    else {
      if ((int)in_s0 * -2 != 0x1000000 || (int)in_s1 * -2 != 0x1000000) {
        if ((int)in_s0 * -2 == 0x1000000 || ABS(in_s1) == 0.0) {
          in_s0 = (float)((uint)in_s0 | 0x7f800000);
          in_s1 = (float)((uint)in_s1 & 0x80000000);
        }
        else if (-1 < (int)(((uint)in_s1 ^ (uint)in_s0) << 1)) {
          if ((int)in_s1 * 2 < 0) {
            fVar5 = 2.3283064e-10;
          }
          else {
            fVar5 = 4.2949673e+09;
          }
          in_s0 = in_s0 * fVar5;
          in_s1 = in_s1 * fVar5;
          fVar5 = in_s0;
          fVar4 = in_s1;
        }
        goto LAB_006f9cd4;
      }
      in_s0 = (float)((uint)in_s0 & 0xbfffffff);
      in_s1 = (float)((uint)in_s1 & 0xbfffffff);
    }
    fVar5 = in_s0;
    fVar4 = in_s1;
  }
LAB_006f9cd4:
  iVar2 = ((uint)ABS(in_s0) >> 0x17) - ((uint)ABS(in_s1) >> 0x17);
  if (0x1b < iVar2) {
    return;
  }
  if (-0x1b < iVar2) {
    return;
  }
  if (((uint)in_s1 & 0x80000000) != 0) {
    return;
  }
  iVar2 = fn_001a8760(fVar5 / fVar4);
  if (iVar2 == 4) {
    fn_001a878c();
  }
  return;
}



void fn_006f9b80(void)

{
  float in_s0;
  
  if ((int)in_s0 * 2 + 0x9a000000U < 0x19000001) {
    if (0x7e000000 < (uint)((int)in_s0 << 1)) {
      fn_0074397c((1.0 - ABS(in_s0)) * 0.5);
    }
    return;
  }
  if ((uint)((int)in_s0 * 2) < 0x66000001 && (int)in_s0 * -2 != -0x66000000) {
    return;
  }
  if ((uint)((int)in_s0 << 1) < 0xff000001) {
    fn_00102ca2(1);
    return;
  }
  return;
}



void fn_006f9528(undefined4 *param_1,undefined1 param_2)

{
  undefined2 uVar1;
  
  uVar1 = CONCAT11(param_2,param_2);
  *param_1 = CONCAT22(uVar1,uVar1);
  *(undefined2 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((int)param_1 + 6) = param_2;
  return;
}


