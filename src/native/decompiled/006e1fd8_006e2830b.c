#include "006e1fd8_006e2830b.h"



void fn_006e2830(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_90 [16];
  float local_80;
  float local_7c;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_4c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  fVar3 = 0.0;
  if (*(int *)(param_2 + 0xb4) == 0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    return;
  }
  fn_00191580(auStack_90);
  local_6c = *(undefined4 *)(param_2 + 0xb4);
  local_80 = fVar3;
  local_7c = fVar3;
  if (*(int *)(param_2 + 0xb4) != 0) {
    fn_0055fa10(auStack_90);
    local_58 = *(undefined4 *)(param_2 + 0xc0);
    local_5c = *(undefined4 *)(param_2 + 0xc4);
    if ((*(byte *)(param_2 + 0xd0) & 0x40) == 0) {
      local_60 = 0x7f7fffff;
    }
    else {
      local_60 = *(undefined4 *)(param_2 + 0x3c);
    }
  }
  if (*(int *)(param_2 + 200) != 0) {
    local_4c = *(int *)(param_2 + 200);
  }
  local_30 = fVar3;
  local_2c = fVar3;
  local_28 = fVar3;
  local_24 = fVar3;
  fn_00781b58(auStack_90,&local_30,*(undefined4 *)(param_2 + 0xa4),*(undefined2 *)(param_2 + 0xce))
  ;
  fVar1 = local_28 - local_30;
  fVar2 = local_24 - local_2c;
  local_38 = fVar1;
  local_34 = fVar2;
  fn_006e1f68(param_2);
  fVar4 = fVar2;
  fVar5 = fVar1;
  fn_006e2784(param_2,param_2 + 0x3c,0);
  fVar3 = fVar1;
  fVar6 = fVar2;
  fn_006e2784(param_2,&local_38,1);
  local_2c = fVar4 - (fVar6 - fVar2);
  local_30 = (fVar3 - fVar1) + fVar5;
  local_28 = local_30 + local_38;
  local_24 = local_2c - local_34;
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  param_1[3] = local_24;
  fn_001915c4(auStack_90);
  return;
}



void fn_006e2784(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xd1);
  if (((bVar1 & 3) == 0) && (param_3 != 0)) {
    fn_006f9f20();
  }
  if (((bVar1 & 0xf) >> 2 == 0) && (param_3 != 0)) {
    fn_006f9f20();
  }
  return;
}


