#include "single_00300420_r.h"


extern undefined4 INFINITY;

void fn_00300420(float *param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int local_28 [7];
  
  dVar2 = *param_2;
  fn_0019bd60(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),local_28);
  dVar3 = 0.0;
  local_28[0] = local_28[0] + 0x7e;
  if ((local_28[0] < 1) && (dVar2 != 0.0)) {
    fVar1 = (float)dVar2;
    if (fVar1 == 0.0) {
      fn_00300420(2,0);
    }
  }
  else if (local_28[0] < 0xff) {
    fVar1 = (float)dVar2;
  }
  else {
    fn_00102ca2(2);
    if (dVar3 <= dVar2) {
      fVar1 = INFINITY;
    }
    else {
      fVar1 = -INFINITY;
    }
  }
  *param_1 = fVar1;
  return;
}


