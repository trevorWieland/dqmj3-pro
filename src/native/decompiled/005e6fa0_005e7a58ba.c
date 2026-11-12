#include "005e6fa0_005e7a58ba.h"



int * fn_005e780c(int *param_1)

{
  if (*param_1 != 0) {
    fn_002feef8();
    *param_1 = 0;
  }
  fn_002feef8(*param_1);
  return param_1;
}



undefined4 * fn_005e77a4(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = 0;
  puVar1 = (undefined1 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    fn_00548d90();
  }
  if ((undefined1 *)*param_1 != puVar1) {
    fn_002feef8();
    *param_1 = puVar1;
  }
  return param_1;
}



void fn_005e7788(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006dcfe8(*param_1,*param_2);
  *param_2 = uVar1;
  return;
}


