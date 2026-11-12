#include "005f143c_005f1d84.h"



bool fn_005f1d84(float *param_1,float *param_2)

{
  float in_s0;
  float in_s1;
  
  return (*param_1 - *param_2) * (*param_1 - *param_2) +
         (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
         (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) < (in_s0 + in_s1) * (in_s0 + in_s1);
}



undefined4 fn_005f1c78(float *param_1,float *param_2,float *param_3)

{
  float in_s0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *param_3 - *param_2;
  fVar1 = param_3[2] - param_2[2];
  fVar3 = param_3[1] - param_2[1];
  fVar8 = SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar1 * fVar1);
  fVar5 = 1.0 / fVar8;
  fVar2 = *param_2 - *param_1;
  fVar4 = param_2[1] - param_1[1];
  fVar7 = param_2[2] - param_1[2];
  fVar1 = fVar6 * fVar5 * fVar2 + fVar3 * fVar5 * fVar4 + fVar1 * fVar5 * fVar7;
  fVar2 = (fVar1 * fVar1 - (fVar2 * fVar2 + fVar4 * fVar4 + fVar7 * fVar7)) + in_s0 * in_s0;
  if (0.0 <= fVar2) {
    fVar2 = SQRT(fVar2);
    fVar3 = fVar2 - fVar1;
    fVar2 = -fVar1 - fVar2;
    if ((((0.0 <= fVar2) && (fVar2 <= fVar8)) || ((0.0 <= fVar3 && (fVar3 <= fVar8)))) ||
       ((fVar2 <= 0.0 && (0.0 <= fVar3)))) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_005f1bcc(void)

{
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar1;
  float in_s3;
  float in_s4;
  float fVar2;
  float in_s5;
  float in_s6;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = in_s5 - in_s3;
  fVar3 = in_s6 - in_s4;
  fVar2 = in_s1 - in_s4;
  fVar1 = (in_s0 - in_s3) * (in_s0 - in_s3);
  fVar5 = fVar4 * (in_s0 - in_s3) + fVar3 * fVar2;
  if (0.0 < fVar5) {
    fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
    if (fVar5 < fVar3) {
      if (in_s2 * in_s2 <= (fVar1 + fVar2 * fVar2) - (fVar5 * fVar5) / fVar3) {
        return 0;
      }
      return 1;
    }
    fVar1 = (in_s0 - in_s5) * (in_s0 - in_s5) + (in_s1 - in_s6) * (in_s1 - in_s6);
  }
  else {
    fVar1 = fVar1 + fVar2 * fVar2;
  }
  if (in_s2 * in_s2 < fVar1) {
    return 0;
  }
  return 1;
}



undefined4 fn_005f1b48(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  float in_s0;
  float fVar3;
  
  fVar3 = *param_3;
  bVar1 = *param_1 - in_s0 == fVar3;
  bVar2 = fVar3 <= *param_1 - in_s0;
  if (!bVar2 || bVar1) {
    bVar1 = fVar3 == *param_2 + in_s0;
    bVar2 = *param_2 + in_s0 <= fVar3;
  }
  if (!bVar2 || bVar1) {
    fVar3 = param_3[1];
    bVar1 = param_1[1] - in_s0 == fVar3;
    bVar2 = fVar3 <= param_1[1] - in_s0;
    if (!bVar2 || bVar1) {
      bVar1 = fVar3 == param_2[1] + in_s0;
      bVar2 = param_2[1] + in_s0 <= fVar3;
    }
    if (!bVar2 || bVar1) {
      fVar3 = param_3[2];
      bVar1 = param_1[2] - in_s0 == fVar3;
      bVar2 = fVar3 <= param_1[2] - in_s0;
      if (!bVar2 || bVar1) {
        bVar1 = fVar3 == param_2[2] + in_s0;
        bVar2 = param_2[2] + in_s0 <= fVar3;
      }
      if (!bVar2 || bVar1) {
        return 1;
      }
    }
  }
  return 0;
}



undefined4 fn_005f1974(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = *param_3;
  bVar1 = *param_1 == fVar3;
  bVar2 = fVar3 <= *param_1;
  if (!bVar2 || bVar1) {
    bVar1 = fVar3 == *param_2;
    bVar2 = *param_2 <= fVar3;
  }
  if (!bVar2 || bVar1) {
    fVar3 = param_3[1];
    bVar1 = param_1[1] == fVar3;
    bVar2 = fVar3 <= param_1[1];
    if (!bVar2 || bVar1) {
      bVar1 = fVar3 == param_2[1];
      bVar2 = param_2[1] <= fVar3;
    }
    if (!bVar2 || bVar1) {
      fVar3 = param_3[2];
      bVar1 = param_1[2] == fVar3;
      bVar2 = fVar3 <= param_1[2];
      if (!bVar2 || bVar1) {
        bVar1 = fVar3 == param_2[2];
        bVar2 = param_2[2] <= fVar3;
      }
      if (!bVar2 || bVar1) {
        return 1;
      }
    }
  }
  return 0;
}



void fn_005f1940(void)

{
  return;
}



undefined4
fn_005f143c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_58 = param_2[1];
  local_54 = param_1[2];
  local_50 = *param_1;
  local_4c = param_1[1];
  local_48 = param_2[2];
  local_44 = *param_3;
  local_40 = param_3[1];
  local_3c = param_1[2];
  local_38 = *param_4;
  local_34 = param_4[1];
  local_30 = param_1[2];
  local_2c = *param_3;
  local_28 = param_1[1];
  local_24 = param_3[2];
  local_20 = *param_4;
  local_1c = param_1[1];
  local_18 = param_4[2];
  iVar1 = fn_005f19e0(param_1,&local_5c,&local_44,&local_38);
  if ((iVar1 == 0) || (iVar1 = fn_005f19e0(param_1,&local_50,&local_2c,&local_20), iVar1 == 0)) {
    local_5c = *param_2;
    local_58 = param_1[1];
    local_54 = param_1[2];
    local_50 = *param_1;
    local_4c = param_2[1];
    local_48 = param_1[2];
    local_44 = *param_3;
    local_40 = param_1[1];
    local_3c = param_3[2];
    local_38 = *param_4;
    local_34 = param_1[1];
    local_30 = param_4[2];
    local_2c = *param_1;
    local_28 = param_3[1];
    local_24 = param_3[2];
    local_20 = *param_1;
    local_1c = param_4[1];
    local_18 = param_4[2];
    iVar1 = fn_005f19e0(param_1,&local_5c,&local_44,&local_38);
    if ((iVar1 == 0) || (iVar1 = fn_005f19e0(param_1,&local_50,&local_2c,&local_20), iVar1 == 0)) {
      local_5c = *param_2;
      local_58 = param_1[1];
      local_54 = param_1[2];
      local_50 = *param_1;
      local_4c = param_1[1];
      local_48 = param_2[2];
      local_44 = *param_3;
      local_40 = param_3[1];
      local_3c = param_1[2];
      local_38 = *param_4;
      local_34 = param_4[1];
      local_30 = param_1[2];
      local_2c = *param_1;
      local_28 = param_3[1];
      local_24 = param_3[2];
      local_20 = *param_1;
      local_1c = param_4[1];
      local_18 = param_4[2];
      iVar1 = fn_005f19e0(param_1,&local_5c,&local_44,&local_38);
      if ((iVar1 == 0) || (iVar1 = fn_005f19e0(param_1,&local_50,&local_2c,&local_20), iVar1 == 0))
      {
        local_5c = *param_2;
        local_58 = param_1[1];
        local_54 = param_2[2];
        local_50 = *param_2;
        local_4c = param_2[1];
        local_48 = param_1[2];
        local_44 = *param_3;
        local_40 = param_3[1];
        local_3c = param_2[2];
        local_38 = *param_4;
        local_34 = param_4[1];
        local_30 = param_2[2];
        local_2c = *param_3;
        local_28 = param_2[1];
        local_24 = param_3[2];
        local_20 = *param_4;
        local_1c = param_2[1];
        local_18 = param_4[2];
        iVar1 = fn_005f19e0(param_2,&local_5c,&local_44,&local_38);
        if ((iVar1 == 0) ||
           (iVar1 = fn_005f19e0(param_2,&local_50,&local_2c,&local_20), iVar1 == 0)) {
          local_5c = *param_1;
          local_58 = param_2[1];
          local_54 = param_2[2];
          local_50 = *param_2;
          local_4c = param_1[1];
          local_48 = param_2[2];
          local_44 = *param_3;
          local_40 = param_2[1];
          local_3c = param_3[2];
          local_38 = *param_4;
          local_34 = param_2[1];
          local_30 = param_4[2];
          local_2c = *param_2;
          local_28 = param_3[1];
          local_24 = param_3[2];
          local_20 = *param_2;
          local_1c = param_4[1];
          local_18 = param_4[2];
          iVar1 = fn_005f19e0(param_2,&local_5c,&local_44,&local_38);
          if ((iVar1 == 0) ||
             (iVar1 = fn_005f19e0(param_2,&local_50,&local_2c,&local_20), iVar1 == 0)) {
            local_5c = *param_1;
            local_58 = param_2[1];
            local_54 = param_2[2];
            local_50 = *param_2;
            local_4c = param_2[1];
            local_48 = param_1[2];
            local_44 = *param_3;
            local_40 = param_3[1];
            local_3c = param_2[2];
            local_38 = *param_4;
            local_34 = param_4[1];
            local_30 = param_2[2];
            local_2c = *param_2;
            local_28 = param_3[1];
            local_24 = param_3[2];
            local_20 = *param_2;
            local_1c = param_4[1];
            local_18 = param_4[2];
            iVar1 = fn_005f19e0(param_2,&local_5c,&local_44,&local_38);
            if ((iVar1 == 0) ||
               (iVar1 = fn_005f19e0(param_2,&local_50,&local_2c,&local_20), iVar1 == 0)) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}



undefined4 fn_005f19e0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *param_1;
  fVar3 = *param_2 - fVar4;
  fVar1 = param_2[1] - param_1[1];
  fVar2 = param_2[2] - param_1[2];
  fVar6 = param_3[2] - param_1[2];
  fVar5 = param_4[2] - param_1[2];
  if ((fVar1 * fVar6 - fVar2 * (param_3[1] - param_1[1])) *
      (fVar1 * fVar5 - fVar2 * (param_4[1] - param_1[1])) +
      (fVar2 * (*param_3 - fVar4) - fVar3 * fVar6) * (fVar2 * (*param_4 - fVar4) - fVar3 * fVar5) +
      (fVar3 * (param_3[1] - param_1[1]) - fVar1 * (*param_3 - fVar4)) *
      (fVar3 * (param_4[1] - param_1[1]) - fVar1 * (*param_4 - fVar4)) < 0.0) {
    fVar3 = *param_4 - *param_3;
    fVar1 = param_4[1] - param_3[1];
    fVar2 = param_4[2] - param_3[2];
    fVar7 = param_1[1] - param_3[1];
    fVar5 = *param_1 - *param_3;
    fVar6 = param_1[2] - param_3[2];
    fVar4 = param_2[2] - param_3[2];
    if ((fVar1 * fVar6 - fVar2 * fVar7) * (fVar1 * fVar4 - fVar2 * (param_2[1] - param_3[1])) +
        (fVar2 * fVar5 - fVar3 * fVar6) * (fVar2 * (*param_2 - *param_3) - fVar3 * fVar4) +
        (fVar3 * fVar7 - fVar1 * fVar5) *
        (fVar3 * (param_2[1] - param_3[1]) - fVar1 * (*param_2 - *param_3)) < 0.0) {
      return 1;
    }
  }
  return 0;
}


