#include "00506c38_005075f4aba.h"



undefined4 * fn_00506d3c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00856fbc;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
    param_1[3] = 0;
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
    param_1[4] = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
    param_1[5] = 0;
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
    param_1[6] = 0;
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
    param_1[7] = 0;
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
    param_1[8] = 0;
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
    param_1[9] = 0;
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))();
    param_1[10] = 0;
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 4))();
    param_1[0xb] = 0;
  }
  iVar1 = *(int *)(DAT_008bf4d4 + 100);
  if (iVar1 != 0) {
    *(undefined4 *)(DAT_008bf4d4 + 100) = 0;
    fn_00512de8(iVar1);
    fn_004ecfd0(iVar1);
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 4))();
    param_1[0xc] = 0;
  }
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))();
    param_1[0xd] = 0;
  }
  if (param_1[0x1d] != 0) {
    fn_0050c738(DAT_008bf4d4 + 0x10);
    param_1[0x1d] = 0;
  }
  iVar1 = 0;
  if (*(char *)(param_1 + 0x1a) != '\0') {
    iVar1 = param_1[0x15];
  }
  if (*(char *)(param_1 + 0x1a) != '\0' && iVar1 != 0) {
    fn_0051b440(param_1[0x16]);
    fn_0050c738(DAT_008bf4d4 + 0x10,param_1[0x15]);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  if (param_1[0x13] - 0x100000 < 0x3ff00000) {
    fn_004f8204();
  }
  if (DAT_008bf4d4 != 0) {
    fn_0050c738(DAT_008bf4d4 + 0x10,param_1[0x12]);
    fn_0050c7f0(DAT_008bf4d4 + 0x10);
    fn_0051d9f0(DAT_008bf4d4,&DAT_e0a14827);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (param_1[0x15] == 0) {
    param_1[0x16] = 0;
  }
  if ((int *)param_1[0x21] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x21] + 4))();
    param_1[0x21] = 0;
  }
  return param_1;
}


