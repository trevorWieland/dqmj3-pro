#include "006dc524_006dce70ba.h"



uint * fn_006dcd10(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(**(code **)(**(int **)(param_1 + 600) + 0x14))();
  if ((puVar1 != (uint *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
    puVar1 = (uint *)0x0;
  }
  return puVar1 + 5;
}



void fn_006dcca4(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint *puVar1;
  
  puVar1 = (uint *)(**(code **)(**(int **)(param_1 + 0x260) + 0x14))();
  if ((puVar1 != (uint *)0x0) && ((*puVar1 & 0x20000000) == 0)) {
    puVar1 = (uint *)0x0;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = puVar1[4];
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = puVar1[3];
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = puVar1[1];
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = puVar1[2];
  }
  return;
}



uint * fn_006dcc74(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(**(code **)(**(int **)(param_1 + 600) + 0x14))();
  if ((puVar1 != (uint *)0x0) && ((*puVar1 & 0x20000000) == 0)) {
    puVar1 = (uint *)0x0;
  }
  return puVar1 + 2;
}


