#include "006dc524_006dce70bbb.h"



void fn_006dce70(int param_1)

{
  if (*(int **)(param_1 + 0xc) == (int *)0x0) {
    fn_00171688();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006dce8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  return;
}



void fn_006dcdb8(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 uint *param_6,uint *param_7)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = (uint *)(**(code **)(**(int **)(param_1 + 0x260) + 0x14))();
  if ((puVar1 != (uint *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
    puVar1 = (uint *)0x0;
  }
  fVar2 = (float)puVar1[3];
  fVar5 = (float)puVar1[4];
  fVar4 = (float)puVar1[6];
  fVar3 = (float)puVar1[5];
  if (param_2 != (float *)0x0) {
    *param_2 = fVar3 - fVar5 * fVar2 * 0.5;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar3 + fVar5 * fVar2 * 0.5;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar4 - fVar5 * 0.5;
  }
  if (param_5 != (float *)0x0) {
    *param_5 = fVar4 + fVar5 * 0.5;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = puVar1[1];
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = puVar1[2];
  }
  return;
}


