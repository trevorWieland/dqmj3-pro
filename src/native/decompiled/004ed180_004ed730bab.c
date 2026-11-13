#include "004ed180_004ed730bab.h"



void fn_004ed514(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}



void fn_004ed504(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 8);
  param_1[1] = (char)param_2;
  return;
}



uint fn_004ed4f8(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  return *param_3 & 0x3fc00;
}


