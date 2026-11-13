#include "005e6a90_005e6ee4ba.h"



void fn_005e6c08(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + 5);
    if (cVar1 == '\0') {
      if (param_3 == 0) {
        uVar2 = fn_005ea33c(param_2);
        fn_00780e38(iVar3,uVar2,*(undefined4 *)(param_1 + 0x18));
      }
      else {
        uVar2 = fn_005ea33c(param_2);
        fn_00780fc0(iVar3,uVar2,param_3,*(undefined4 *)(param_1 + 0x18));
      }
    }
    else if (cVar1 == '\x01') {
      uVar2 = fn_005ea5fc();
      fn_00780a7c(iVar3,uVar2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    }
    else if (cVar1 == '\x02') {
      uVar2 = fn_005ea4fc();
      fn_006e0868(*(undefined4 *)(param_1 + 0x14),uVar2,*(undefined4 *)(param_1 + 0x18));
    }
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  fVar7 = 1.0;
  fVar4 = 0.0;
  if (cVar1 == '\0') {
    fVar6 = *(float *)(iVar3 + 8);
    if (fVar6 == 0.0) {
      return;
    }
    fVar5 = *(float *)(param_1 + 4) + *(float *)(param_1 + 8);
    if ((*(byte *)(iVar3 + 4) & 1) == 0) {
      if (fVar6 < fVar5) {
        fVar4 = fVar6;
      }
      else if (0.0 <= fVar5) {
        fVar4 = fVar5;
      }
      goto LAB_005e6d68;
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return;
      }
      fVar7 = *(float *)(param_1 + 4) + *(float *)(param_1 + 8);
      if (*(float *)(param_1 + 0xc) < fVar7) {
        fVar4 = *(float *)(param_1 + 0xc);
      }
      else if (0.0 <= fVar7) {
        fVar4 = fVar7;
      }
      goto LAB_005e6d68;
    }
    fVar6 = *(float *)(param_1 + 0xc);
    fVar5 = *(float *)(param_1 + 4) + *(float *)(param_1 + 8);
    if (fVar6 <= 0.0) goto LAB_005e6d68;
  }
  if (fVar5 < 0.0) {
    fVar4 = -fVar5 / fVar6;
    fn_006fa358();
    fVar5 = fVar5 + (fVar4 + fVar7) * fVar6;
  }
  fn_001a23a8();
  fVar4 = fVar5;
LAB_005e6d68:
  *(float *)(param_1 + 4) = fVar4;
  return;
}



void fn_005e6bc4(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0xc,4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = &DAT_00858b34;
    puVar1[1] = param_2;
  }
  return;
}



void fn_005e6b9c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_005e4644(*(undefined4 *)(param_1 + 8));
  fn_00541328(uVar1,param_2);
  return;
}


