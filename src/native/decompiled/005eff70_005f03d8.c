#include "005eff70_005f03d8.h"



void fn_005f03d8(int param_1)

{
  undefined4 in_s0;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x30) = in_s0;
  return;
}



void fn_005f039c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 8) = *param_2;
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  *(undefined4 *)(iVar1 + 0x10) = uVar3;
  return;
}



void fn_005f0370(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if ((float)piVar1[0xb] < (float)piVar1[0xc]) {
    piVar1[0xb] = (int)((float)piVar1[0xb] + *(float *)(*piVar1 + 0x240));
  }
  return;
}



void fn_005f0330(undefined4 *param_1)

{
  *param_1 = &DAT_00858e2c;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  fn_002feef8(param_1);
  return;
}



void fn_005f02f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar6;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  uVar2 = fn_00117984();
  fn_005efee0(uVar2,param_3);
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 4);
  iVar1 = fn_006eb610(*(undefined4 *)(iVar3 + 0xc));
  uVar2 = fn_006eb278(param_2);
  fn_005e2a6c(uVar2,0,iVar1);
  fn_005e5e5c(param_2,0);
  fn_005e5f50(param_2,iVar1 + 0x1a8,iVar1 + 0x148,param_3);
  fn_005e1b70(uVar2,param_3);
  fn_005ea270(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
  piVar4 = *(int **)(*(int *)(iVar3 + 8) + 4);
  iVar1 = *piVar4;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x94) = 0;
  *(undefined4 *)(iVar1 + 0x98) = 0;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  *(undefined4 *)(iVar1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xa4) = 0;
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xb8) = 0;
  fn_005ec694(*piVar4,param_2,param_3,(undefined4 *)(iVar1 + 0xb0),unaff_r4,unaff_r5,unaff_r6,in_lr
              );
  fn_005ec718(*piVar4,param_2,param_3);
  fn_005ec610(*piVar4,param_2,param_3);
  iVar1 = *piVar4;
  piVar4 = *(int **)(iVar1 + 0x148);
  uVar5 = *(uint *)(*piVar4 + 0x60);
  uVar6 = *(uint *)(*piVar4 + 100);
  if ((char)piVar4[0xe] != '\0' && uVar5 < uVar6) {
    do {
      if (((uint)*(byte *)(piVar4[0xc] + (uint)(*(ushort *)(uVar5 + 4) >> 3)) &
          1 << (*(ushort *)(uVar5 + 4) & 7)) != 0) {
        fn_005eb2f8(piVar4,param_2,param_3,iVar1,iVar1 + 0x8c,uVar5);
      }
      uVar5 = uVar5 + 0x38;
    } while (uVar5 < uVar6);
  }
  return;
}



undefined4 * fn_005f022c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 == (int *)0x0) {
    param_3 = (int *)fn_00118290();
  }
  puVar1 = (undefined4 *)(**(code **)(*param_3 + 8))(param_3,8,4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00858e2c;
    puVar1[1] = 0;
    iVar2 = fn_00145b00(0x1c,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)fn_005e9568(iVar2,param_1,param_2,param_3);
      *piVar3 = (int)&DAT_00858e1c;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[6] = 0;
    }
    piVar4 = (int *)puVar1[1];
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      puVar1[1] = piVar3;
    }
  }
  return puVar1;
}



void fn_005eff8c(int param_1)

{
  fn_005f005c(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
  return;
}



void fn_005f005c(int param_1)

{
  undefined4 uVar1;
  float in_s0;
  float fVar2;
  float in_s1;
  float in_s2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 auStack_2c [28];
  
  fVar5 = 0.0;
  fVar6 = 1.0;
  *(float *)(param_1 + 0x10) = in_s0;
  *(float *)(param_1 + 0x14) = in_s1;
  *(float *)(param_1 + 0x18) = in_s2;
  if (in_s0 < 0.0) {
    fVar7 = 1.0;
  }
  else {
    fVar7 = 0.0;
  }
  if (in_s1 < 0.0) {
    fVar9 = 1.0;
  }
  else {
    fVar9 = fVar5;
  }
  fVar2 = ABS(in_s0);
  fVar3 = ABS(in_s1);
  if (in_s2 < 0.0) {
    fVar8 = 1.0;
  }
  else {
    fVar8 = 0.0;
  }
  fVar4 = ABS(in_s2);
  fn_005eff9c(param_1,local_38);
  fn_005eff9c(param_1,local_34);
  fn_005eff9c(param_1,local_30);
  local_48 = fVar2;
  local_44 = fVar5;
  local_40 = fVar5;
  local_3c = fVar3;
  fn_006dc544(auStack_2c,&local_48);
  fn_005ea348(*(undefined4 *)(param_1 + 8),0,auStack_2c);
  local_48 = fVar5;
  local_44 = fVar6;
  local_40 = fVar5;
  local_3c = fVar4;
  fn_006dc544(auStack_2c,&local_48);
  fn_005ea380(*(undefined4 *)(param_1 + 8),0,auStack_2c);
  uVar1 = fn_006eba7c(*(undefined4 *)(param_1 + 8),0,0);
  fn_005e8e44(uVar1,8);
  fn_005e8e50(uVar1,local_38[0],local_34[0]);
  uVar1 = fn_006eba7c(*(undefined4 *)(param_1 + 8),0,1);
  fn_005e8e44(uVar1,8);
  fn_005e8e50(uVar1,0,local_30[0]);
  local_40 = fVar8;
  local_48 = fVar7;
  local_44 = fVar9;
  local_3c = fVar6;
  fVar5 = local_48;
  fVar7 = local_40;
  fn_006dc544(auStack_2c,&local_48);
  fn_005ea3e4(*(undefined4 *)(param_1 + 8),0,auStack_2c);
  local_40 = fVar6 - fVar7;
  local_48 = fVar6 - fVar5;
  local_44 = fVar6 - fVar9;
  local_3c = fVar6;
  fn_006dc544(auStack_2c,&local_48);
  fn_005ea448(*(undefined4 *)(param_1 + 8),0,auStack_2c);
  return;
}



void fn_005eff9c(undefined4 param_1,undefined1 *param_2)

{
  float in_s0;
  
  if (in_s0 == 0.0) {
    *param_2 = 0;
  }
  else if (in_s0 == 1.0) {
    *param_2 = 0;
  }
  else {
    if (in_s0 != 2.0) {
      if (in_s0 == 4.0) {
        *param_2 = 2;
        return;
      }
      if ((int)in_s0 < 0x3f800000) {
        *param_2 = 0;
        return;
      }
      if (0x3fffffff < (int)in_s0) {
        if ((int)in_s0 < 0x40800000) {
          *param_2 = 2;
        }
        return;
      }
    }
    *param_2 = 1;
  }
  return;
}



float * fn_005eff70(float *param_1)

{
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  float in_s4;
  float in_s5;
  
  *param_1 = in_s0;
  param_1[1] = in_s1;
  param_1[2] = in_s0 + in_s2;
  param_1[3] = in_s1 + in_s3;
  param_1[4] = in_s4;
  param_1[5] = in_s5;
  return param_1;
}


