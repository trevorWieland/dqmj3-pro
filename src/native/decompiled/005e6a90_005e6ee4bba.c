#include "005e6a90_005e6ee4bba.h"



void fn_005e6d00(int param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  fVar6 = 1.0;
  fVar3 = 0.0;
  if (cVar1 == '\0') {
    fVar5 = *(float *)(iVar2 + 8);
    if (fVar5 == 0.0) {
      return;
    }
    fVar4 = *(float *)(param_1 + 4) + *(float *)(param_1 + 8);
    if ((*(byte *)(iVar2 + 4) & 1) == 0) {
      if (fVar5 < fVar4) {
        fVar3 = fVar5;
      }
      else if (0.0 <= fVar4) {
        fVar3 = fVar4;
      }
      goto LAB_005e6d68;
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return;
      }
      fVar6 = *(float *)(param_1 + 4) + *(float *)(param_1 + 8);
      if (*(float *)(param_1 + 0xc) < fVar6) {
        fVar3 = *(float *)(param_1 + 0xc);
      }
      else if (0.0 <= fVar6) {
        fVar3 = fVar6;
      }
      goto LAB_005e6d68;
    }
    fVar5 = *(float *)(param_1 + 0xc);
    fVar4 = *(float *)(param_1 + 4) + *(float *)(param_1 + 8);
    if (fVar5 <= 0.0) goto LAB_005e6d68;
  }
  if (fVar4 < 0.0) {
    fVar3 = -fVar4 / fVar5;
    fn_006fa358();
    fVar4 = fVar4 + (fVar3 + fVar6) * fVar5;
  }
  fn_001a23a8();
  fVar3 = fVar4;
LAB_005e6d68:
  *(float *)(param_1 + 4) = fVar3;
  return;
}


