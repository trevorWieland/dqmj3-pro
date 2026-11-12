#include "0060b818_0060c160aa.h"



bool fn_0060b950(int param_1,int param_2)

{
  return *(short *)(param_1 + 8) < *(short *)(param_2 + 8);
}



void fn_0060b818(int param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_18;
  
  local_18 = param_4;
  fn_00117984();
  fn_0010fa20();
  uVar1 = fn_006eb278();
  fn_005e19d4(uVar1,*(undefined4 *)(param_1 + 4));
  fVar2 = 1.0;
  fVar5 = *param_3;
  fVar4 = 0.0;
  if (1.0 < fVar5) {
    fVar5 = fVar2;
  }
  else if (fVar5 < 0.0) {
    fVar5 = fVar4;
  }
  uVar6 = VectorFloatToUnsigned(fVar5 * 255.0 + 0.5,3);
  fVar5 = param_3[1];
  if (1.0 < fVar5) {
    fVar5 = fVar2;
  }
  else if (fVar5 < 0.0) {
    fVar5 = fVar4;
  }
  uVar7 = VectorFloatToUnsigned(fVar5 * 255.0 + 0.5,3);
  fVar5 = param_3[2];
  if (1.0 < fVar5) {
    fVar5 = fVar2;
  }
  else if (fVar5 < 0.0) {
    fVar5 = fVar4;
  }
  uVar8 = VectorFloatToUnsigned(fVar5 * 255.0 + 0.5,3);
  fVar5 = param_3[3];
  if (fVar5 <= 1.0) {
    if (fVar5 < 0.0) {
      fVar2 = fVar4;
    }
    else {
      fVar2 = fVar5;
    }
  }
  uVar3 = VectorFloatToUnsigned(fVar2 * 255.0 + 0.5,3);
  local_18 = CONCAT13((char)uVar3,CONCAT12((char)uVar8,CONCAT11((char)uVar7,(char)uVar6)));
  fn_005e19b8(uVar1,&local_18);
  return;
}


