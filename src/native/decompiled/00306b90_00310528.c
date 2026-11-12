#include "00306b90_00310528.h"



undefined4 fn_00310528(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  wchar16 *pwStack_48;
  char *pcStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined1 local_16;
  
  fn_002c330c(&pwStack_48);
  local_40 = 2;
  uStack_3c = 0;
  local_34 = 2;
  local_38 = 0;
  pwStack_48 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_44 = (char *)&DAT_00310720;
  uVar1 = fn_0022f750((char *)&DAT_00310734);
  fn_00147974(&local_2c,uVar1);
  fn_00147974(&local_28,&DAT_00310748);
  fn_00147974(&local_24,&DAT_00310748);
  fn_00147974(&local_20,&DAT_00310748);
  local_16 = 1;
  local_1c = 0;
  fn_002c29a0(param_1,&pwStack_48);
  iVar3 = 0;
  do {
    uVar1 = fn_0022f750((&DAT_007c7a68)[iVar3 * 2]);
    fn_0031b78c(param_1,iVar3,0,uVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  fn_00689930(param_1,0xbf,0);
  if (local_20 != &DAT_008f9cf4) {
    piVar2 = local_20 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
    }
  }
  if (local_24 != &DAT_008f9cf4) {
    piVar2 = local_24 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  if (local_28 != &DAT_008f9cf4) {
    piVar2 = local_28 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar2 = local_2c + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  return 1;
}



void fn_0030f93c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = &DAT_008222a0;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  return;
}



undefined4 fn_00308c20(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  wchar16 *pwStack_48;
  char *pcStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  
  fn_005f3c48(2);
  fn_005f3aac(2);
  fn_002c330c(&pwStack_48);
  uVar5 = 0;
  pwStack_48 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_44 = (char *)&DAT_00308e00;
  uStack_40 = 2;
  uStack_3c = 0;
  uVar1 = fn_0022f750((char *)&DAT_00308e14);
  fn_00147974(&local_2c,uVar1);
  local_1c = 0;
  local_1b = 1;
  uVar1 = fn_0022f750(&DAT_00308e28);
  fn_00147974(&local_20,uVar1);
  uVar1 = fn_002c29a0(param_1,&pwStack_48);
  do {
    uVar2 = fn_0022f750((&DAT_007c76ac)[uVar5]);
    fn_0031b78c(param_1,uVar5,0,uVar2);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  fn_00689878(param_1,0x90);
  if (local_20 != &DAT_008f9cf4) {
    piVar3 = local_20 + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
    }
  }
  if (local_24 != &DAT_008f9cf4) {
    piVar3 = local_24 + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  if (local_28 != &DAT_008f9cf4) {
    piVar3 = local_28 + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar3 = local_2c + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  return uVar1;
}



undefined4 fn_00307e30(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 100),DAT_00893c80,&DAT_003081f0,1,1);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar1,DAT_00893c84,&DAT_003081f8,0,1,0);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  puVar6 = *(undefined4 **)(param_1 + 0x18);
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar2 == &DAT_00893d20) goto LAB_00307ec4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_00307ec4:
  *(undefined4 **)(param_1 + 0x68) = puVar6;
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x70));
  piVar7 = *(int **)(iVar3 + 0x10);
  piVar4 = (int *)fn_00172c98(iVar3,(char *)&DAT_00308200);
  iVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_0030820c,1);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  uVar1 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0030821c,1);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  puVar6 = *(undefined4 **)(param_1 + 0x18);
  if (puVar6 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar2 == &DAT_00893d20) goto LAB_00307f54;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_00307f54:
  uVar1 = puVar6[2];
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_00308228,1);
  if (piVar4 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar6 == &DAT_0089a930) goto LAB_00307fb0;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00307fb0:
  *(int **)(param_1 + 0x74) = piVar4;
  fn_006c44c0(uVar1);
  uVar5 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x74),uVar5);
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_00308238,1);
  if (piVar4 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar6 == &DAT_0089a930) goto LAB_00308024;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00308024:
  *(int **)(param_1 + 0x78) = piVar4;
  fn_006c4288(uVar1);
  uVar5 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x78),uVar5);
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_00308244,1);
  if (piVar4 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar6 == &DAT_0089a930) goto LAB_00308094;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00308094:
  *(int **)(param_1 + 0x7c) = piVar4;
  fn_006c4410(uVar1);
  uVar5 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x7c),uVar5);
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_00308254,1);
  if (piVar4 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar6 == &DAT_0089a930) goto LAB_00308104;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00308104:
  *(int **)(param_1 + 0x80) = piVar4;
  fn_006c4628(uVar1);
  uVar5 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x80),uVar5);
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_00308264,1);
  if (piVar4 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar6 == &DAT_0089a930) goto LAB_00308174;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00308174:
  *(int **)(param_1 + 0x84) = piVar4;
  fn_006c4374(uVar1);
  uVar5 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x84),uVar5);
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_00308274,1);
  if (piVar4 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar6 == &DAT_0089a930) goto LAB_003081e8;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_003081e8:
  *(int **)(param_1 + 0x88) = piVar4;
  fn_006c4568(uVar1);
  uVar5 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x88),uVar5);
  piVar4 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_00308320,1);
  if (piVar4 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar6 == &DAT_0089a930) goto LAB_003082f0;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_003082f0:
  *(int **)(param_1 + 0x8c) = piVar4;
  fn_006c4304(uVar1);
  uVar1 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x8c),uVar1);
  return 1;
}



void fn_00307d64(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 8);
  fn_0037cb88(uVar1,param_2);
  fn_006c44c0(uVar1);
  uVar2 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x74),uVar2);
  fn_006c4288(uVar1);
  uVar2 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x78),uVar2);
  fn_006c4410(uVar1);
  uVar2 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x7c),uVar2);
  fn_006c4628(uVar1);
  uVar2 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x80),uVar2);
  fn_006c4374(uVar1);
  uVar2 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x84),uVar2);
  fn_006c4568(uVar1);
  uVar2 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x88),uVar2);
  fn_006c4304(uVar1);
  uVar1 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0x8c),uVar1);
  return;
}



void fn_00306b90(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 == 0) {
    param_3 = (int)*(short *)(param_1 + 0x50);
  }
  if (param_2 == 0 && param_3 == *(short *)(param_1 + 0x52)) {
    iVar2 = (int)*(short *)(param_1 + 0x54);
    bVar4 = iVar2 == *(short *)(param_1 + 0x56);
    if (bVar4) {
      iVar2 = (int)*(char *)(param_1 + 0x5c);
    }
    if (bVar4 && iVar2 == *(char *)(param_1 + 0x5d)) {
      return;
    }
  }
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x5d) == 0) {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    fn_0018a618(&local_2c,5,4,DAT_008936c8,(int)*(short *)(param_1 + 0x52));
    fn_00190d50(uVar3,&local_2c);
  }
  else {
    uVar1 = fn_0022f5a8();
    fn_00190d50(uVar3,uVar1);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  if (*(char *)(param_1 + 0x5d) == '\0') {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    fn_0018a618(&local_2c,5,4,DAT_008936c8,(int)*(short *)(param_1 + 0x56));
    fn_00190d50(uVar3,&local_2c);
  }
  else {
    uVar1 = fn_0022f5a8();
    fn_00190d50(uVar3,uVar1);
  }
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x52),(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x56),(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = (fVar6 / fVar5) * 100.0;
  iVar2 = fn_001854ac(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x24));
  *(float *)(iVar2 + 0x10) = fVar5;
  return;
}


