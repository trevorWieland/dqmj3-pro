#include "00106ba0_00107254b.h"



void fn_00107254(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar1 = (int *)fn_00145b00(8,&DAT_00812c8c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = 0;
    piVar1[1] = 0;
    uVar2 = fn_00166ad8(0x20000);
    uVar3 = fn_0010faac(0x20000);
    iVar4 = fn_00145b00(8,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      piVar5 = (int *)fn_0010d788(iVar4,uVar2,uVar3,4,0,0,param_1);
    }
    piVar6 = (int *)*piVar1;
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      *piVar1 = (int)piVar5;
    }
    uVar2 = fn_00166ad8(0x30000);
    uVar3 = fn_0010faac(0x30000);
    iVar4 = fn_00145b00(8,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      piVar5 = (int *)fn_0010d788(iVar4,uVar2,uVar3,4,0,0,param_1);
    }
    piVar6 = (int *)piVar1[1];
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      piVar1[1] = (int)piVar5;
    }
  }
  piVar5 = DAT_0089a514;
  if (DAT_0089a514 != piVar1) {
    if (DAT_0089a514 != (int *)0x0) {
      if ((int *)DAT_0089a514[1] != (int *)0x0) {
        (**(code **)(*(int *)DAT_0089a514[1] + 4))();
      }
      piVar6 = (int *)*piVar5;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
      fn_002feef8(piVar5);
    }
    DAT_0089a514 = piVar1;
  }
  return;
}



undefined4 * fn_00107170(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = &DAT_008588b4;
  param_1[1] = 0;
  piVar1 = (int *)fn_00145b00(0x18,&DAT_00812c8c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[4] = (int)&DAT_008588a0;
    piVar1[3] = 0;
    piVar1[5] = 0;
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  piVar3 = (int *)param_1[1];
  if (piVar3 != piVar1) {
    if (piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[3];
      if (piVar2 == piVar3 + 4) {
        piVar3[3] = 0;
      }
      else {
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
        piVar3[3] = 0;
      }
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 4))();
      }
      *piVar3 = 0;
      if ((int *)piVar3[2] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[2] + 4))();
      }
      piVar3[2] = 0;
      fn_002feef8(piVar3);
    }
    param_1[1] = piVar1;
  }
  return param_1;
}



void fn_001070c4(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  iVar1 = piVar3[1];
  piVar3[1] = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    if ((int *)*piVar3 != (int *)0x0) {
      (**(code **)(*(int *)*piVar3 + 4))();
    }
    *piVar3 = 0;
    piVar3[1] = 0;
  }
  piVar3 = *(int **)(param_1 + 4);
  if (((int *)piVar3[3] != (int *)0x0) && (*piVar3 == 0)) {
    iVar1 = (**(code **)(*(int *)piVar3[3] + 8))();
    piVar3[2] = iVar1;
    piVar2 = (int *)piVar3[3];
    if (piVar2 != piVar3 + 4 && piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    piVar3[3] = 0;
  }
  piVar3 = (int *)piVar3[2];
  if (piVar3 == (int *)0x0) {
    return;
  }
  if (*(char *)piVar3[1] == '\0') {
    iVar1 = (**(code **)(*piVar3 + 8))(piVar3);
    *(char *)piVar3[1] = (char)iVar1;
    if (iVar1 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0010d990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



undefined4 fn_0010706c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  piVar3[5] = param_2;
  if (piVar3[3] == 0) {
    piVar3[3] = (int)(piVar3 + 4);
    if (piVar3[2] != 0 && param_3 != 0) {
      iVar2 = 1;
      if ((param_3 != 1) && (param_3 == 2)) {
        iVar2 = 2;
      }
      *piVar3 = piVar3[2];
      piVar3[1] = iVar2;
    }
    uVar1 = 1;
    piVar3[2] = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_00106f78(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10 [2];
  
  if (param_1 != 0) {
    fn_00114788(0);
  }
  fn_00125694();
  fn_001147a8();
  iVar1 = fn_0010c1d0();
  if (iVar1 < 0) {
    fn_00123b08(iVar1,0x106fa0);
  }
  fn_001257a8();
  iVar1 = fn_001147cc();
  if ((iVar1 != 0) && (uVar2 = fn_001147a8(), (uVar2 & 0x20) == 0)) {
    fn_00114818(0x62);
    uVar3 = fn_0010beb0();
    local_18 = DAT_0089a558;
    uStack_14 = DAT_0089a55c;
    uVar3 = fn_001152bc(&local_1c,uVar3,0x1000,local_10,0);
    fn_0010c084(local_1c);
    fn_0010be7c(local_10[0]);
    fn_0010be9c();
    fn_0010bebc(uVar3);
  }
  return;
}


