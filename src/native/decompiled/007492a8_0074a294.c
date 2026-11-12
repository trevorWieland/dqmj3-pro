#include "007492a8_0074a294.h"



void fn_0074a294(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int extraout_r1;
  
  piVar2 = param_1 + 0xc;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  while( true ) {
    piVar2 = param_1 + 5;
    fn_00170704(piVar2);
    if ((uint)param_1[10] < (uint)param_1[8]) break;
    fn_001707b4(piVar2);
    fn_0014ded0(param_1 + 3);
  }
  fn_00169f1c(param_1[9] + param_1[8] + -1);
  param_1[9] = extraout_r1;
  *(undefined4 *)(*param_1 + extraout_r1 * 4) = param_2;
  param_1[10] = param_1[10] + 1;
  if (0 < param_1[0xb]) {
    fn_0014df84(param_1 + 1,1);
  }
  fn_001707b4(piVar2);
  param_1 = param_1 + 0xc;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + -1;
  return;
}



void fn_0074a1f8(code *param_1,undefined4 *param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_28 = *param_2;
  local_24 = param_2[1];
  local_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  local_14 = param_2[5];
  local_10 = param_2[6];
  (*param_1)(&local_28);
  return;
}



undefined4 fn_0074a064(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = 0;
  uVar3 = 0;
  iVar5 = 0;
  do {
    uVar6 = (uint)*(char *)(param_1 + iVar5);
    if (uVar6 == 0x3a) goto LAB_0074a0a8;
    uVar1 = uVar4 >> 0x18;
    iVar5 = iVar5 + 1;
    uVar4 = uVar6 | uVar4 << 8;
    uVar3 = uVar1 | uVar3 << 8 | (int)uVar6 >> 0x1f;
  } while (iVar5 < 8);
  uVar4 = 0;
  uVar3 = 0;
LAB_0074a0a8:
  if (uVar4 != 0 || uVar3 != 0) {
    iVar5 = 0;
    do {
      if (uVar3 == (&DAT_008e3474)[iVar5 * 4] && uVar4 == (&DAT_008e3470)[iVar5 * 4]) {
        puVar2 = &DAT_008e3470 + iVar5 * 4;
LAB_0074a0f8:
        if (puVar2 == (undefined4 *)0x0) {
          return 0;
        }
        return puVar2[2];
      }
      if ((&DAT_008e3484)[iVar5 * 4] == uVar3 && uVar4 == (&DAT_008e3480)[iVar5 * 4]) {
        puVar2 = &DAT_008e3480 + iVar5 * 4;
        goto LAB_0074a0f8;
      }
      iVar5 = iVar5 + 2;
    } while (iVar5 < 0x20);
  }
  return 0;
}



int * fn_00749f8c(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *local_18;
  
  local_18 = param_4;
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  piVar4 = *(int **)(iVar1 + 0x10);
  fn_006ce3b4(&local_18,param_1 + 0xc,param_2);
  piVar4 = (int *)(**(code **)(*piVar4 + 0x2c))(piVar4,local_18,1);
  if (piVar4 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_0074a004;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0074a004:
  if (local_18 != &DAT_008f9d04) {
    piVar3 = (int *)(local_18 + -0xc);
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9cf8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_18 + -0xc,*(int *)(local_18 + -8) + 0xe,0);
    }
  }
  return piVar4;
}



int * fn_00749eb4(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *local_18;
  
  local_18 = param_4;
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  piVar4 = *(int **)(iVar1 + 0x10);
  fn_006ce3b4(&local_18,param_1 + 0xc,param_2);
  piVar4 = (int *)(**(code **)(*piVar4 + 0x2c))(piVar4,local_18,1);
  if (piVar4 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar2 == &DAT_0089a924) goto LAB_00749f2c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00749f2c:
  if (local_18 != &DAT_008f9d04) {
    piVar3 = (int *)(local_18 + -0xc);
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9cf8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_18 + -0xc,*(int *)(local_18 + -8) + 0xe,0);
    }
  }
  return piVar4;
}



undefined4 * fn_00749e80(undefined4 *param_1)

{
  *param_1 = &DAT_00831d74;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xc))();
  }
  return param_1;
}



void fn_00749824(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0082d2ac;
  if (param_1[0x3b] != 0) {
    fn_002feef8(param_1[0x3b]);
  }
  uVar1 = param_1[0x37];
  uVar2 = uVar1;
  if ((uint)param_1[0x38] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x38]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x39] - uVar1) >> 4,0);
  fn_00397fa0(param_1);
  return;
}



void fn_00749820(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0082d2ac;
  if (param_1[0x3b] != 0) {
    fn_002feef8(param_1[0x3b]);
  }
  uVar1 = param_1[0x37];
  uVar2 = uVar1;
  if ((uint)param_1[0x38] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x38]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x39] - uVar1) >> 4,0);
  fn_00397fa0(param_1);
  return;
}



void fn_007495b0(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  fn_00397ecc();
  piVar2 = *(int **)(param_1 + 0xec);
  uVar1 = piVar2[2];
  if (uVar1 != 0) {
    if ((uint)piVar2[1] < uVar1) {
      piVar2[1] = piVar2[1] + 1;
    }
    else if (*(char *)((int)piVar2 + 0xd) == '\0') {
      piVar2[1] = uVar1;
    }
    else {
      piVar2[1] = 0;
      piVar2[2] = 0;
      *(undefined1 *)(*piVar2 + 0x30) = 1;
      fn_0036c340(*piVar2);
    }
  }
  if ((char)piVar2[3] != '\0') {
    *(undefined1 *)(*piVar2 + 0x30) = 0;
    *(undefined1 *)(piVar2 + 3) = 0;
  }
  return;
}



void fn_007493b8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((char)param_1[3] != '\x03') {
    return;
  }
  iVar1 = fn_006ba284(param_1);
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  iVar1 = 0;
  if (((int)uVar3 < 0) || ((uint)(param_1[0x38] - param_1[0x37] >> 4) <= uVar3)) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[0x37] + uVar3 * 0x10;
  }
  if (*(int *)(iVar2 + 8) == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  iVar2 = fn_006ba284(param_1);
  iVar4 = fn_006ba274(param_1);
  uVar3 = iVar2 * iVar4 + param_2;
  if ((-1 < (int)uVar3) && (uVar3 < (uint)(param_1[0x38] - param_1[0x37] >> 4))) {
    iVar1 = param_1[0x37] + uVar3 * 0x10;
  }
  uVar5 = *(undefined4 *)(iVar1 + 8);
  fn_006899f4(param_1,uVar5,(int)*(char *)(iVar1 + 0xc),(int)*(char *)(iVar1 + 0xd));
  (**(code **)(*param_1 + 0x13c))(param_1,uVar5);
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00749314(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_10;
  
  if ((char)param_1[0x36] != '\0') {
    local_10 = param_4;
    (**(code **)(*param_1 + 0x14c))(&local_10,param_1,param_2);
    puVar3 = local_10;
    if (local_10[-1] == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    fn_007495c8(param_1,param_2,puVar3);
    if (local_10 != &DAT_008f9cf4) {
      piVar1 = local_10 + -3;
      iVar2 = *piVar1;
      if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
      }
    }
  }
  return;
}



void fn_007492a8(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1[0x34] == 0) {
    fn_00689878(param_1,0);
  }
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x144))(param_1);
  fn_006899f4(param_1,param_1[0x34],uVar2,uVar1);
  fn_0068ab44(param_1,0x100094c);
  return;
}


