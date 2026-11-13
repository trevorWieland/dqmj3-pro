#include "006eb6a0_006ebc80b.h"



void fn_006ebc80(int *param_1)

{
  uint uVar1;
  undefined1 local_10 [16];
  
  uVar1 = (uint)*(byte *)(*param_1 + 0x1b);
  if (uVar1 != 0xff) {
    fn_00781894(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),local_10);
  }
  return;
}



byte fn_006ebc60(int *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*param_1 + 0x19);
  if ((1 < bVar1) && (bVar1 != 2)) {
    bVar1 = 3;
  }
  return bVar1;
}



void fn_006ebc14(int *param_1)

{
  uint uVar1;
  undefined1 local_10 [16];
  
  uVar1 = (uint)*(byte *)(*param_1 + 0x1d);
  if (uVar1 != 0xff) {
    fn_00781894(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),local_10);
  }
  return;
}



void fn_006ebbe8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_8 [2];
  
  uVar1 = (uint)*(byte *)(*param_1 + 0x22);
  if (uVar1 != 0xff) {
    local_8[0] = param_4;
    fn_00781854(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),local_8);
  }
  return;
}



void fn_006ebb9c(int *param_1)

{
  uint uVar1;
  undefined1 local_10 [16];
  
  uVar1 = (uint)*(byte *)(*param_1 + 0x1d);
  if (uVar1 != 0xff) {
    fn_00781894(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),local_10);
  }
  return;
}



void fn_006ebb4c(int *param_1)

{
  uint uVar1;
  undefined1 auStack_28 [40];
  
  uVar1 = (uint)*(byte *)(*param_1 + 0x1a);
  if (uVar1 != 0xff) {
    fn_00781324(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),auStack_28);
  }
  return;
}



void fn_006ebaf0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_8 [2];
  
  uVar1 = (uint)*(byte *)(*param_1 + 0x1f);
  if (uVar1 != 0xff) {
    local_8[0] = param_4;
    fn_00781854(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),local_8);
  }
  return;
}



void fn_006ebaac(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_8 [2];
  
  uVar1 = (uint)*(byte *)(*param_1 + 0x20);
  if (uVar1 != 0xff) {
    local_8[0] = param_4;
    fn_00781854(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),local_8);
  }
  return;
}



int fn_006eba9c(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4 + 4;
}



int fn_006eba7c(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)fn_005ea5ec(**(undefined4 **)(param_1 + 4));
  return *piVar1 + param_3 * 4 + 4;
}


