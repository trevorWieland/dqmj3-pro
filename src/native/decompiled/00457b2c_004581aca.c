#include "00457b2c_004581aca.h"



int fn_00457ca4(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,int param_5)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  undefined1 local_40 [12];
  undefined1 auStack_34 [16];
  int local_24;
  
  (**(code **)(*param_1 + 0x44))(param_1);
  local_40[0] = param_4;
  piVar2 = (int *)fn_0047edec(param_1 + 0x15,param_2,local_40);
  (**(code **)(*param_1 + 0x48))(param_1);
  if (piVar2 == (int *)0x0) {
    piVar5 = (int *)0x0;
    piVar2 = piVar5;
  }
  else {
    piVar5 = (int *)(**(code **)(*piVar2 + 0x90))(piVar2);
    piVar2 = piVar2 + 0x42;
  }
  uVar1 = *(ushort *)(param_5 + 0x3c) & 0xf;
  bVar6 = uVar1 != 1;
  if (!bVar6) {
    uVar1 = (ushort)*(byte *)(param_5 + 0x24);
  }
  if ((bVar6 || uVar1 != 1) || (1 < (*(uint *)(param_5 + 0x8c) & 0xff))) {
    uVar3 = (**(code **)(*(int *)param_1[0x3c] + 0x10))
                      ((int *)param_1[0x3c],param_5,(char)param_1[1]);
  }
  else {
    uVar3 = 4;
  }
  local_24 = 0;
  iVar4 = (**(code **)(*(int *)param_1[0x3c] + 0x14))
                    ((int *)param_1[0x3c],param_5,uVar3,piVar5,param_1 + 0x27,piVar2,auStack_34);
  if (iVar4 != 3) {
    if (((local_24 == *(int *)(param_5 + 0x38)) &&
        (iVar4 = fn_001010c8(auStack_34,param_5 + 0x28), iVar4 == 0)) ||
       ((*(ushort *)(param_5 + 0x3c) & 0xf) == 5)) {
      iVar4 = 1;
    }
    else {
      iVar4 = 2;
    }
  }
  return iVar4;
}



void fn_00457c18(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_008b6389 == '\0') {
    if (*(int *)(param_2 + 0x80) != 0) {
      *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + -1;
    }
    fn_004580f4(param_1);
    return;
  }
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + -1;
  }
  fn_004580f4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00457c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



int fn_00457b2c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  sVar4 = *(short *)(param_1 + 0x98);
  if (sVar4 == 0) {
    sVar4 = *(short *)(*(int *)(param_1 + 0xc) + 0xb0);
  }
  iVar2 = fn_00457df4(param_1,param_2,sVar4,1);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x80) = *(int *)(iVar2 + 0x80) + 1;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return iVar2;
}


