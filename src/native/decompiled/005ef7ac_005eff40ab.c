#include "005ef7ac_005eff40ab.h"



void fn_005efe1c(undefined4 *param_1)

{
  *param_1 = &DAT_00858dcc;
  if (param_1[1] != 0) {
    fn_005efbc4();
    fn_002feef8();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_005efdbc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &DAT_00858dcc;
  param_1[1] = 0;
  iVar1 = fn_00145b00(0x54,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_005efae4();
  }
  iVar1 = param_1[1];
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_005efbc4(iVar1);
      fn_002feef8();
    }
    param_1[1] = iVar2;
  }
  return param_1;
}



undefined4 * fn_005efbc4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  fn_005ef7ac();
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 4))();
  }
  iVar1 = param_1[0x10];
  piVar5 = param_1 + 0xc;
  if (iVar1 != 0) {
    local_18 = *(undefined4 *)(iVar1 + 8);
    local_14 = iVar1;
    fn_007740a4(auStack_10,piVar5,&local_18,&local_14);
    iVar1 = param_1[0x10];
    *(undefined4 *)(iVar1 + 0xc) = param_1[0xd];
    param_1[0xd] = iVar1;
    piVar2 = (int *)*piVar5;
    while (piVar2 != (int *)0x0) {
      *piVar5 = *piVar2;
      fn_001008c4(piVar2[2],piVar2[1],0);
      fn_001008c4(piVar2,1,0);
      piVar2 = (int *)*piVar5;
    }
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 4))();
  }
  uVar3 = param_1[8];
  uVar4 = uVar3;
  if ((uint)param_1[9] < uVar3) {
    do {
      uVar4 = uVar4 + 0xc;
    } while (uVar4 != param_1[9]);
  }
  fn_001008c4(uVar3,(int)(param_1[10] - uVar3) / 0xc,0);
  uVar3 = param_1[5];
  uVar4 = uVar3;
  if ((uint)param_1[6] < uVar3) {
    do {
      uVar4 = uVar4 + 0xc;
    } while (uVar4 != param_1[6]);
  }
  fn_001008c4(uVar3,(int)(param_1[7] - uVar3) / 0xc,0);
  uVar3 = param_1[2];
  uVar4 = uVar3;
  if ((uint)param_1[3] < uVar3) {
    do {
      uVar4 = uVar4 + 0xc;
    } while (uVar4 != param_1[3]);
  }
  fn_001008c4(uVar3,(int)(param_1[4] - uVar3) / 0xc,0);
  puVar6 = (undefined4 *)*param_1;
  if ((puVar6 != (undefined4 *)0x0) && (*(char *)(param_1 + 1) != '\0')) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*(int *)puVar6[1] + 0xc))((int *)puVar6[1],puVar6);
  }
  return param_1;
}


