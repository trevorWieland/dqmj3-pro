#include "002cfe10_002d088cb.h"



void fn_002d088c(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  (**(code **)(*(int *)param_1[0x1d] + 8))((int *)param_1[0x1d],param_1);
  piVar4 = (int *)param_1[0x1e];
  if (piVar4 != (int *)0x0) {
    param_1[0x1e] = 0;
    piVar1 = (int *)param_1[0x1d];
    if (piVar1 != piVar4) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      param_1[0x1d] = (int)piVar4;
    }
  }
  fn_001cc890(param_1);
  if (param_1[0x22] != -1) {
    uVar2 = fn_0068c7e8(DAT_008977e8);
    iVar3 = fn_006b4cd0(uVar2,param_1[0x22]);
    if (iVar3 != 0) {
      param_1[0x22] = -1;
    }
  }
  if ((char)param_1[0x23] != '\0') {
    (**(code **)(*param_1 + 0x40))(param_1,0x9c50,0);
    *(undefined1 *)(param_1 + 0x23) = 0;
  }
  fn_002d0060(param_1);
  param_1[5] = param_1[2];
  param_1[6] = param_1[3];
  param_1[7] = param_1[4];
  fn_002cfe10(param_1);
  return;
}



void fn_002d0724(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  float *pfVar5;
  float local_88;
  int local_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  int local_74;
  float fStack_70;
  int local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 auStack_58 [76];
  
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002cfa2c();
  }
  piVar4 = (int *)param_1[0x1e];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[0x1e] = (int)piVar2;
  }
  (**(code **)(*param_1 + 0x40))(param_1,0x9c46,0);
  local_80 = 0;
  local_7c = 0.0;
  local_78 = 0;
  local_74 = 0;
  fStack_70 = 100.0;
  local_6c = 0;
  local_68 = (float)param_1[2] + 0.0;
  local_64 = (float)param_1[3] + 100.0;
  local_60 = (float)param_1[4] + 0.0;
  fn_0068e960(DAT_008977e8);
  uVar3 = fn_00664c4c();
  fn_0023b858(uVar3,0,&local_68,&local_80,auStack_58);
  local_74 = param_1[2];
  local_6c = param_1[4];
  local_88 = (float)param_1[3];
  local_84 = local_6c;
  local_5c = local_7c + 1.0;
  pfVar5 = &local_88;
  if ((float)param_1[3] < local_7c + 1.0) {
    pfVar5 = &local_5c;
  }
  fStack_70 = *pfVar5;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_74);
  return;
}



void fn_002d0620(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  iVar2 = fn_0068c694(DAT_008977e8);
  iVar2 = fn_006ebf84(*(undefined4 *)(iVar2 + 0x24),uVar1);
  if (iVar2 != 0) {
    uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
    iVar2 = fn_0068c694(DAT_008977e8);
    fn_00162d54(*(undefined4 *)(iVar2 + 0x24),uVar1);
    iVar2 = fn_0068c694(DAT_008977e8);
    fn_00162d44(*(undefined4 *)(iVar2 + 0x24));
  }
  puVar8 = *(undefined4 **)(param_1 + 0x80);
  for (puVar7 = *(undefined4 **)(param_1 + 0x7c); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    (**(code **)(*(int *)*puVar7 + 8))((int *)*puVar7,param_1);
  }
  uVar5 = *(uint *)(param_1 + 0x7c);
  uVar6 = *(uint *)(param_1 + 0x80);
  if (uVar5 != uVar6) {
    uVar3 = uVar5;
    if (uVar6 <= uVar5) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar6);
    }
    *(uint *)(param_1 + 0x80) = uVar6 - (uVar6 - uVar5 & 0xfffffffc);
  }
  if (*(int *)(param_1 + 0x88) != -1) {
    piVar4 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar4 + 0xc))(piVar4,*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  }
  return;
}


