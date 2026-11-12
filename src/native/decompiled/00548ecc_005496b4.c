#include "00548ecc_005496b4.h"



void fn_005493fc(uint param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_1 = param_1 & 0x70000;
  fVar3 = SQRT(param_4[1] * param_4[1] + param_4[5] * param_4[5] + param_4[9] * param_4[9]);
  fVar1 = SQRT(*param_4 * *param_4 + param_4[4] * param_4[4] + param_4[8] * param_4[8]);
  fVar2 = SQRT(param_4[2] * param_4[2] + param_4[6] * param_4[6] + param_4[10] * param_4[10]);
  param_2[3] = param_3[1] * param_4[7] + param_3[2] * param_4[0xb] +
               param_3[3] + *param_3 * param_4[3];
  param_2[7] = param_3[5] * param_4[7] + param_3[6] * param_4[0xb] +
               param_3[7] + param_3[4] * param_4[3];
  param_2[0xb] = param_3[9] * param_4[7] + param_3[10] * param_4[0xb] +
                 param_3[0xb] + param_3[8] * param_4[3];
  if (param_1 == 0x50000) {
    fn_00549290(param_2,param_5);
  }
  else if (param_1 < 0x50001) {
    if (param_1 == 0x20000) {
      fn_00549614(param_2);
    }
    else if (param_1 == 0x30000) {
      fn_00548f3c(param_2);
    }
    else if (param_1 == 0x40000) {
      fn_00548ecc(param_2,param_5);
    }
  }
  else if (param_1 == 0x60000) {
    fn_005496b4(param_2);
  }
  else if (param_1 == 0x70000) {
    fn_005490e4(param_2);
  }
  *param_2 = *param_2 * fVar1;
  param_2[1] = param_2[1] * fVar3;
  param_2[2] = param_2[2] * fVar2;
  param_2[4] = param_2[4] * fVar1;
  param_2[5] = param_2[5] * fVar3;
  param_2[6] = param_2[6] * fVar2;
  param_2[8] = param_2[8] * fVar1;
  param_2[9] = param_2[9] * fVar3;
  param_2[10] = param_2[10] * fVar2;
  return;
}



void fn_005496b4(float *param_1,float *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_3 + 0x14);
  fVar4 = *(float *)(param_3 + 0x24);
  fVar5 = 0.0;
  local_30 = *param_2 * fVar2 + param_2[1] * fVar3 + param_2[2] * fVar4;
  local_2c = param_2[4] * fVar2 + param_2[5] * fVar3 + param_2[6] * fVar4;
  local_28 = param_2[8] * fVar2 + param_2[9] * fVar3 + param_2[10] * fVar4;
  local_20 = -local_30;
  local_1c = 0.0;
  local_24 = local_2c;
  iVar1 = fn_00549868(&local_30);
  if (iVar1 == 0) {
    local_2c = 1.0;
    local_24 = 1.0;
    local_30 = fVar5;
    local_28 = fVar5;
    local_20 = fVar5;
  }
  fVar2 = local_24 * local_24 + local_20 * local_20;
  local_1c = fVar5;
  if (fVar2 == fVar5) {
    local_24 = 1.0;
    local_38 = -local_28;
    local_3c = fVar5;
    local_34 = fVar5;
    local_20 = fVar5;
  }
  else {
    fVar2 = 1.0 / SQRT(fVar2);
    local_20 = local_20 * fVar2;
    local_24 = local_24 * fVar2;
    fn_00525ce4(&local_3c,&local_24,&local_30);
  }
  *param_1 = local_24;
  param_1[1] = local_30;
  param_1[2] = local_3c;
  param_1[4] = local_20;
  param_1[5] = local_2c;
  param_1[6] = local_38;
  param_1[8] = local_1c;
  param_1[9] = local_28;
  param_1[10] = local_34;
  return;
}



void fn_00549614(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *param_2 * *(float *)(param_3 + 4) + param_2[1] * *(float *)(param_3 + 0x14) +
          param_2[2] * *(float *)(param_3 + 0x24);
  fVar5 = 1.0;
  fVar4 = param_2[4] * *(float *)(param_3 + 4) + param_2[5] * *(float *)(param_3 + 0x14) +
          param_2[6] * *(float *)(param_3 + 0x24);
  fVar3 = 0.0;
  fVar1 = fVar2 * fVar2 + fVar4 * fVar4;
  if (fVar1 != 0.0) {
    fVar5 = 1.0 / SQRT(fVar1);
    fVar3 = fVar2 * fVar5;
    fVar5 = fVar4 * fVar5;
  }
  *param_1 = fVar5;
  param_1[5] = fVar5;
  param_1[1] = fVar3;
  param_1[10] = 1.0;
  param_1[2] = 0.0;
  param_1[6] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[4] = -fVar3;
  return;
}



void fn_00549290(float *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_1c = *(float *)(param_2 + 4);
  local_18 = *(float *)(param_2 + 0x14);
  fVar3 = 0.0;
  local_14 = 0.0;
  local_20 = -param_1[0xb];
  local_28 = -param_1[3];
  local_24 = -param_1[7];
  iVar1 = fn_00549868(&local_28);
  fVar4 = 1.0;
  if (iVar1 == 0) {
    local_20 = 1.0;
    local_28 = fVar3;
    local_24 = fVar3;
  }
  fn_00525ce4(&local_3c,&local_1c,&local_28);
  iVar1 = fn_00549868(&local_3c);
  if (iVar1 == 0) {
    fVar2 = local_20 * local_20 + fVar3 * fVar3;
    local_34 = fVar3;
    if (fVar2 == fVar3) {
      local_14 = -local_24;
      local_3c = fVar4;
      local_38 = fVar3;
      local_1c = fVar3;
      local_18 = fVar3;
      goto LAB_005493a0;
    }
    fVar4 = fVar4 / SQRT(fVar2);
    local_3c = local_20 * fVar4;
    local_38 = fVar3 * fVar4;
  }
  fn_00525ce4(&local_1c,&local_28,&local_3c);
LAB_005493a0:
  *param_1 = local_3c;
  param_1[1] = local_1c;
  param_1[2] = local_28;
  param_1[4] = local_38;
  param_1[5] = local_18;
  param_1[6] = local_24;
  param_1[8] = local_34;
  param_1[9] = local_14;
  param_1[10] = local_20;
  return;
}



void fn_005490e4(float *param_1,float *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_3 + 0x14);
  fVar4 = *(float *)(param_3 + 0x24);
  local_38 = *param_2 * fVar2 + param_2[1] * fVar3 + param_2[2] * fVar4;
  local_34 = param_2[4] * fVar2 + param_2[5] * fVar3 + param_2[6] * fVar4;
  local_30 = param_2[8] * fVar2 + param_2[9] * fVar3 + param_2[10] * fVar4;
  local_24 = -param_1[3];
  local_20 = -param_1[7];
  local_1c = -param_1[0xb];
  iVar1 = fn_00549868(&local_38);
  fVar2 = 1.0;
  fVar3 = 0.0;
  if (iVar1 == 0) {
    local_38 = 0.0;
    local_34 = 1.0;
    local_30 = 0.0;
  }
  fn_00525ce4(&local_48,&local_38,&local_24);
  iVar1 = fn_00549868(&local_48);
  if (iVar1 == 0) {
    local_44 = -local_38;
    fVar4 = local_34 * local_34 + local_44 * local_44;
    local_40 = fVar3;
    if (fVar4 == fVar3) {
      local_20 = -local_30;
      local_48 = fVar2;
      local_44 = fVar3;
      local_24 = fVar3;
      local_1c = fVar3;
      goto LAB_0054923c;
    }
    fVar2 = fVar2 / SQRT(fVar4);
    local_48 = local_34 * fVar2;
    local_44 = local_44 * fVar2;
  }
  fn_00525ce4(&local_24,&local_48,&local_38);
LAB_0054923c:
  param_1[2] = local_24;
  param_1[4] = local_44;
  *param_1 = local_48;
  param_1[1] = local_38;
  param_1[5] = local_34;
  param_1[6] = local_20;
  param_1[8] = local_40;
  param_1[9] = local_30;
  param_1[10] = local_1c;
  return;
}



void fn_00548f3c(float *param_1,float *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_3 + 0x14);
  fVar4 = *(float *)(param_3 + 0x24);
  local_24 = *param_2 * fVar2 + param_2[1] * fVar3 + param_2[2] * fVar4;
  local_20 = param_2[4] * fVar2 + param_2[5] * fVar3 + param_2[6] * fVar4;
  local_1c = param_2[8] * fVar2 + param_2[9] * fVar3 + param_2[10] * fVar4;
  local_30 = -param_1[0xb];
  local_34 = -param_1[7];
  local_38 = -param_1[3];
  iVar1 = fn_00549868(&local_38);
  fVar2 = 1.0;
  fVar3 = 0.0;
  if (iVar1 == 0) {
    local_38 = 0.0;
    local_34 = 0.0;
    local_30 = 1.0;
  }
  fn_00525ce4(&local_48,&local_24,&local_38);
  iVar1 = fn_00549868(&local_48);
  if (iVar1 == 0) {
    local_40 = -local_38;
    fVar4 = local_30 * local_30 + local_40 * local_40;
    local_44 = fVar3;
    if (fVar4 == fVar3) {
      local_1c = -local_34;
      local_48 = fVar2;
      local_40 = fVar3;
      local_24 = fVar3;
      local_20 = fVar3;
      goto LAB_00549090;
    }
    fVar2 = fVar2 / SQRT(fVar4);
    local_48 = local_30 * fVar2;
    local_40 = local_40 * fVar2;
  }
  fn_00525ce4(&local_24,&local_38,&local_48);
LAB_00549090:
  param_1[2] = local_38;
  param_1[4] = local_44;
  *param_1 = local_48;
  param_1[1] = local_24;
  param_1[5] = local_20;
  param_1[6] = local_34;
  param_1[8] = local_40;
  param_1[9] = local_1c;
  param_1[10] = local_30;
  return;
}



void fn_00548ecc(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 0x14);
  fVar3 = 0.0;
  fVar5 = 1.0;
  fVar2 = fVar1 * fVar1 + fVar4 * fVar4;
  if (fVar2 != 0.0) {
    fVar5 = 1.0 / SQRT(fVar2);
    fVar3 = fVar1 * fVar5;
    fVar5 = fVar4 * fVar5;
  }
  *param_1 = fVar5;
  param_1[1] = fVar3;
  param_1[10] = 1.0;
  param_1[2] = 0.0;
  param_1[5] = fVar5;
  param_1[6] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[4] = -fVar3;
  return;
}


