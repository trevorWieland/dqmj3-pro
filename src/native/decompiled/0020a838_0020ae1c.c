#include "0020a838_0020ae1c.h"



int fn_0020ae1c(int param_1)

{
  return (int)*(short *)(DAT_00892438 + param_1 * 0x78 + 0x2e);
}



undefined1 fn_0020ae00(int param_1)

{
  return *(undefined1 *)(DAT_00892438 + param_1 * 0x78 + 0x23);
}



undefined4 fn_0020adac(int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 < 1) || (DAT_00892498 <= param_1)) ||
     (*(char *)(DAT_00892494 + param_1 * 0x40 + 0x10) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_0020ad98(void)

{
  return (int)(short)DAT_00892498;
}



undefined4 fn_0020ad04(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_0020ad8c), iVar1 != 0)) {
    DAT_00892494 = 0;
  }
  else {
    DAT_00892494 = param_1 + 4;
  }
  if ((param_3 - 4 & 0x3f) != 0) {
    DAT_00892494 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_00892498 = 0;
  }
  else {
    DAT_00892498 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4),0x40,0);
  }
  return 1;
}



uint fn_0020ace0(int param_1)

{
  return (*(byte *)(DAT_00892488 + param_1 * 0x50 + 4) & 0xf) >> 3;
}



undefined4 fn_0020aca8(int param_1)

{
  return *(undefined4 *)(DAT_00892488 + param_1 * 0x50 + 0x20);
}



undefined4 fn_0020ac8c(int param_1)

{
  return *(undefined4 *)(DAT_00892488 + param_1 * 0x50 + 8);
}



undefined4 fn_0020abd0(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_0020ac80,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar3 = 0x50;
  iVar4 = 0;
  iVar1 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar3 != 0 || iVar4 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    iVar1 = 0;
  }
  DAT_00892488 = param_1;
  DAT_0089248c = iVar1;
  DAT_00892490 = 0;
  if (0 < iVar1) {
    piVar2 = (int *)(param_1 + 0x24);
    do {
      iVar3 = *piVar2;
      piVar2 = piVar2 + 0x14;
      if (iVar3 != 0) {
        iVar5 = iVar5 + 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    DAT_00892490 = iVar5;
  }
  return 1;
}



undefined4 fn_0020abb4(int param_1)

{
  return *(undefined4 *)(DAT_00892488 + param_1 * 0x50 + 0xc);
}



void fn_0020a838(void)

{
  fn_0020a848();
  fn_002feef8();
  return;
}



int fn_0020a848(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  
  *param_1 = (int)&PTR_FUN_0081c418;
  fn_0012d73c(param_1[0x39]);
  uVar9 = 0;
  do {
    piVar11 = (int *)(param_1[0x25] + (uVar9 & 0xff) * 4);
    piVar2 = (int *)*piVar11;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *piVar11 = 0;
    puVar8 = (undefined4 *)(param_1[0x22] + (uVar9 & 0xff) * 4);
    fn_002feef8(*puVar8);
    uVar9 = uVar9 + 1;
    *puVar8 = 0;
  } while ((int)uVar9 < 2);
  if (param_1[0x3d] != 0) {
    fn_00359fb8();
    if ((int *)param_1[0x3d] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x3d] + 4))();
      param_1[0x3d] = 0;
    }
  }
  if (param_1[0x3c] != 0) {
    fn_00359fb8();
    if ((int *)param_1[0x3c] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x3c] + 4))();
      param_1[0x3c] = 0;
    }
  }
  if (param_1[0x3b] != 0) {
    fn_0038e30c();
    if ((int *)param_1[0x3b] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x3b] + 4))();
      param_1[0x3b] = 0;
    }
  }
  fn_00158f50(param_1);
  piVar11 = (int *)param_1[0x25];
  piVar2 = (int *)*piVar11;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  *piVar11 = 0;
  puVar8 = (undefined4 *)param_1[0x22];
  fn_002feef8(*puVar8);
  *puVar8 = 0;
  param_1[0x21] = 0;
  iVar3 = fn_00174864(DAT_008977e4);
  if (iVar3 != 0) {
    fn_0015a9bc();
  }
  (**(code **)(*param_1 + 0x44))(param_1);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  fn_001c2b7c(1);
  fn_001cedc8(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  param_1[0x20] = 0;
  fn_00788f48(param_1 + 0x1d);
  if (param_1[0x3f] != 0) {
    fn_0015c8b8();
    fn_002feef8();
  }
  if ((int *)param_1[0x3d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3d] + 4))();
  }
  if ((int *)param_1[0x3c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3c] + 4))();
  }
  if ((int *)param_1[0x3b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3b] + 4))();
  }
  if ((int *)param_1[0x2e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2e] + 4))();
  }
  uVar6 = param_1[0x2b];
  uVar9 = uVar6;
  if ((uint)param_1[0x2c] <= uVar6) {
    for (; uVar9 != param_1[0x2c]; uVar9 = uVar9 + 0x10) {
    }
  }
  fn_001008c4(uVar6,(int)(param_1[0x2d] - uVar6) >> 4,0);
  iVar3 = fn_00168b28(param_1 + 0x28);
  uVar6 = *(uint *)(iVar3 + -0xc);
  uVar9 = uVar6;
  if (*(uint *)(iVar3 + -8) <= uVar6) {
    for (; uVar9 != *(uint *)(iVar3 + -8); uVar9 = uVar9 + 4) {
    }
  }
  fn_001008c4(uVar6,(int)(*(int *)(iVar3 + -4) - uVar6) >> 2,0);
  uVar6 = *(uint *)(iVar3 + -0x18);
  uVar7 = *(uint *)(iVar3 + -0x14);
  uVar9 = uVar6;
  if (uVar6 < uVar7) {
    if (0 < (int)(uVar7 - uVar6)) {
      for (iVar4 = (int)(uVar7 - uVar6) >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      }
    }
  }
  else {
    for (; uVar9 != uVar7; uVar9 = uVar9 + 4) {
    }
  }
  fn_001008c4(uVar6,(int)(*(int *)(iVar3 + -0x10) - uVar6) >> 2,0);
  puVar10 = *(undefined4 **)(iVar3 + -0x28);
  for (puVar8 = *(undefined4 **)(iVar3 + -0x2c); puVar8 != puVar10; puVar8 = puVar8 + 0x18) {
    (**(code **)*puVar8)(puVar8);
  }
  iVar4 = *(int *)(iVar3 + -0x2c);
  fn_001008c4(iVar4,(*(int *)(iVar3 + -0x24) - iVar4) / 0x60,0);
  *(undefined4 *)(iVar3 + -0xa0) = &DAT_0081bd80;
  fn_001484b4((undefined4 *)(iVar3 + -0xa0));
  fn_0012d73c(*(undefined4 *)(iVar3 + -0x88));
  if (*(int **)(iVar3 + -0x90) != (int *)0x0) {
    (**(code **)(**(int **)(iVar3 + -0x90) + 4))();
    *(undefined4 *)(iVar3 + -0x90) = 0;
  }
  piVar2 = *(int **)(iVar3 + -0x40);
  piVar11 = (int *)(iVar3 + -0x50);
  if (piVar2 != (int *)0x0) {
    piVar5 = (int *)*piVar2;
    while (piVar5 != piVar2) {
      piVar1 = *(int **)(iVar3 + -0x40);
      if (piVar5 != piVar1) {
        piVar1 = (int *)*piVar5;
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
        *(int *)(iVar3 + -0x3c) = *(int *)(iVar3 + -0x3c) + -1;
        *piVar5 = *(int *)(iVar3 + -0x4c);
        *(int **)(iVar3 + -0x4c) = piVar5;
      }
      piVar5 = piVar1;
    }
    puVar8 = *(undefined4 **)(iVar3 + -0x40);
    *puVar8 = *(undefined4 *)(iVar3 + -0x4c);
    *(undefined4 **)(iVar3 + -0x4c) = puVar8;
    piVar2 = (int *)*piVar11;
    while (piVar2 != (int *)0x0) {
      *piVar11 = *piVar2;
      fn_001008c4(piVar2[2],piVar2[1],0);
      fn_001008c4(piVar2,1,0);
      piVar2 = (int *)*piVar11;
    }
    *(undefined4 *)(iVar3 + -0x4c) = 0;
    *(undefined4 *)(iVar3 + -0x48) = 0;
    *(undefined4 *)(iVar3 + -0x44) = 0;
  }
  uVar6 = *(uint *)(iVar3 + -0x5c);
  uVar9 = uVar6;
  if (*(uint *)(iVar3 + -0x58) <= uVar6) {
    for (; uVar9 != *(uint *)(iVar3 + -0x58); uVar9 = uVar9 + 4) {
    }
  }
  fn_001008c4(uVar6,(int)(*(int *)(iVar3 + -0x54) - uVar6) >> 2,0);
  if (*(int **)(iVar3 + -0x90) != (int *)0x0) {
    (**(code **)(**(int **)(iVar3 + -0x90) + 4))();
  }
  uVar6 = *(uint *)(iVar3 + -0x9c);
  uVar9 = uVar6;
  if (*(uint *)(iVar3 + -0x98) < uVar6) {
    do {
      uVar9 = uVar9 + 4;
    } while (uVar9 != *(uint *)(iVar3 + -0x98));
  }
  fn_001008c4(uVar6,(int)(*(int *)(iVar3 + -0x94) - uVar6) >> 2,0);
  return iVar3 + -0xa0;
}


