#include "005ee840_005eef64aa.h"



void fn_005ee9b0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_2,8,4);
  if (iVar1 != 0) {
    fn_005eea1c(iVar1,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
                 (int)*(char *)(param_1 + 7),param_1[6],*(undefined1 *)((int)param_1 + 0x1d));
  }
  return;
}



void fn_005ee918(uint *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,int param_6
                 )

{
  uint uVar1;
  
  *param_1 = param_3 | param_2 << 0x10;
  param_1[1] = *(uint *)(&DAT_007e1ab0 + param_6 * 4);
  param_1[2] = 0;
  param_1[3] = *(uint *)(&DAT_007e1abc + param_6 * 4);
  uVar1 = fn_0015fa88(param_4);
  param_1[4] = uVar1 >> 3;
  param_1[5] = *(uint *)(&DAT_007e1ac8 + param_6 * 4);
  param_1[6] = param_5;
  param_1[7] = *(uint *)(&DAT_007e1ad4 + param_6 * 4);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  param_1[0xb] = 0xf023d;
  return;
}



undefined4 * fn_005ee840(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *param_1 = &DAT_00858d98;
  puVar3 = (undefined4 *)param_1[0xe];
  if ((puVar3 != (undefined4 *)0x0) && (*(char *)(param_1 + 0xf) != '\0')) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
  }
  param_1[0xe] = 0;
  uVar1 = param_1[8];
  uVar2 = uVar1;
  if ((uint)param_1[9] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[9]);
  }
  fn_001008c4(uVar1,(int)(param_1[10] - uVar1) >> 2,0);
  uVar1 = param_1[5];
  uVar2 = uVar1;
  if ((uint)param_1[6] <= uVar1) {
    for (; uVar2 != param_1[6]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[7] - uVar1) >> 2,0);
  return param_1;
}


