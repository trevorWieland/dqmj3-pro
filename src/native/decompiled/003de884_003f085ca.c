#include "003de884_003f085ca.h"



undefined4 fn_003e0ab8(int *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_0089568c,DAT_00895690,DAT_00895694);
  iVar2 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  if (iVar2 == 1) {
    pcVar3 = (char *)&DAT_003e0b58;
  }
  else {
    pcVar3 = (char *)&DAT_003e0b6c;
  }
  uVar4 = fn_0022f750(pcVar3);
  fn_0022cd58(param_1,uVar4);
  bVar1 = iVar2 != 1;
  uVar4 = extraout_r1;
  if (bVar1) {
    uVar4 = 2;
  }
  param_1[0x27] = *(int *)(param_1[0x1d] + 0x10);
  if (!bVar1) {
    iVar2 = fn_00154ac8(0x33f,uVar4);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  fn_003e0b80(param_1,uVar4);
  return 1;
}



undefined2 fn_003de884(int *param_1)

{
  short sVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int local_40 [11];
  
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_008954fc,DAT_00895500,DAT_00895504);
  sVar1 = *(short *)(param_1[0x26] + 0x1c);
  fn_0022cdb4(param_1,sVar1 != 0);
  *(short *)(param_1 + 0x2d) = sVar1;
  fn_0022cdb4(param_1,sVar1 != 0);
  uVar3 = 0;
  if ((short)param_1[0x2d] != 0) {
    iVar4 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
    uVar9 = *(undefined4 *)(iVar4 + 0x10);
    iVar5 = fn_0068897c(uVar9,DAT_00895508);
    param_1[0x2e] = iVar5;
    iVar5 = fn_0068897c(uVar9,DAT_0089550c);
    param_1[0x2f] = iVar5;
    iVar5 = fn_0068897c(uVar9,DAT_00895510);
    param_1[0x30] = iVar5;
    iVar5 = fn_0068897c(uVar9,DAT_00895514);
    param_1[0x31] = iVar5;
    uVar9 = fn_0022730c((int)(short)param_1[0x2d]);
    fn_0022f818(local_40,0x15,uVar9,0);
    fn_00190d50(param_1[0x2e],local_40);
    uVar9 = fn_0023002c(uVar9);
    fn_00190d50(param_1[0x2f],uVar9);
    uVar9 = fn_00227328((int)(short)param_1[0x2d]);
    uVar6 = fn_0016a7c4();
    fn_00190d50(param_1[0x30],uVar6);
    uVar9 = fn_0022f6e4(uVar9);
    fn_00190d50(param_1[0x31],uVar9);
    uVar9 = fn_00689220(iVar4,(char *)&DAT_003debe0);
    iVar5 = fn_00145b00(0xd4,&DAT_00812c8c);
    piVar7 = (int *)0x0;
    if (iVar5 != 0) {
      local_40[0] = param_1[0x12];
      piVar7 = (int *)fn_002b44c0(iVar5,param_1[1],uVar9,1);
    }
    piVar8 = (int *)param_1[0x2a];
    if (piVar8 != piVar7) {
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      param_1[0x2a] = (int)piVar7;
    }
    (**(code **)(*(int *)param_1[0x2a] + 0x10))();
    fn_002b427c(param_1[0x2a],(int)(short)param_1[0x2d]);
    fn_002b4348(param_1[0x2a],(int)*(char *)(param_1[0x26] + 0x1e));
    iVar5 = param_1[0x2a];
    uVar2 = fn_001f84ac(param_1[0x26] + 0xac);
    *(undefined1 *)(iVar5 + 0x3f) = uVar2;
    *(undefined1 *)(param_1[0x2a] + 0x45) = 1;
    uVar9 = fn_00689220(iVar4,(char *)&DAT_003debec);
    iVar5 = fn_00145b00(0xd4,&DAT_00812c8c);
    piVar7 = (int *)0x0;
    if (iVar5 != 0) {
      local_40[0] = param_1[0x12];
      piVar7 = (int *)fn_002b44c0(iVar5,param_1[1],uVar9,1);
    }
    piVar8 = (int *)param_1[0x2b];
    if (piVar8 != piVar7) {
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      param_1[0x2b] = (int)piVar7;
    }
    (**(code **)(*(int *)param_1[0x2b] + 0x10))();
    fn_002b4060(param_1[0x2b],*(undefined4 *)(param_1[0x26] + 0x45c));
    *(undefined1 *)(param_1[0x2b] + 0x1d) = 1;
    fn_002b325c(param_1[0x2b],3);
    uVar9 = fn_00689220(iVar4,(char *)&DAT_003debf8);
    iVar4 = fn_00145b00(0xd4,&DAT_00812c8c);
    piVar7 = (int *)0x0;
    if (iVar4 != 0) {
      local_40[0] = param_1[0x12];
      piVar7 = (int *)fn_002b44c0(iVar4,param_1[1],uVar9,1);
    }
    piVar8 = (int *)param_1[0x2c];
    if (piVar8 != piVar7) {
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      param_1[0x2c] = (int)piVar7;
    }
    (**(code **)(*(int *)param_1[0x2c] + 0x10))();
    fn_002b4060(param_1[0x2c],*(undefined4 *)(param_1[0x26] + 0x460));
    *(undefined1 *)(param_1[0x2c] + 0x1d) = 1;
    fn_002b325c(param_1[0x2c],3);
    uVar3 = 1;
  }
  return uVar3;
}


