#include "single_001a531c_r.h"


extern undefined4 register0x00000054;

longlong fn_001a531c(undefined4 *param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_lr;
  undefined8 in_d8;
  undefined8 in_d9;
  undefined8 in_d10;
  undefined8 in_d11;
  undefined8 in_d12;
  undefined8 in_d13;
  undefined8 in_d14;
  undefined8 in_d15;
  
  *param_1 = unaff_r8;
  param_1[1] = unaff_r9;
  param_1[2] = unaff_r10;
  param_1[3] = unaff_r11;
  param_1[4] = in_lr;
  param_1[5] = unaff_r4;
  param_1[6] = unaff_r5;
  param_1[7] = unaff_r6;
  param_1[8] = unaff_r7;
  param_1[9] = register0x00000054;
  param_1[10] = param_1 + 10;
  *(undefined8 *)(param_1 + 0xb) = in_d8;
  *(undefined8 *)(param_1 + 0xd) = in_d9;
  *(undefined8 *)(param_1 + 0xf) = in_d10;
  *(undefined8 *)(param_1 + 0x11) = in_d11;
  *(undefined8 *)(param_1 + 0x13) = in_d12;
  *(undefined8 *)(param_1 + 0x15) = in_d13;
  *(undefined8 *)(param_1 + 0x17) = in_d14;
  *(undefined8 *)(param_1 + 0x19) = in_d15;
  return ZEXT48(param_1 + 0x1b) << 0x20;
}


