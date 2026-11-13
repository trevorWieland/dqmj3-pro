#include "003045c0_00304d48aab.h"



void fn_0030488c(int *param_1,uint *param_2)

{
  int iVar1;
  
  if (*param_2 < *(uint *)(*param_1 + 0xc)) {
    iVar1 = *(int *)(*(int *)(*param_1 + 8) + *param_2 * 4);
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    fn_00303370(param_1);
  }
  return;
}


