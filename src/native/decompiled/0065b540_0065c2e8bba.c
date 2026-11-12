#include "0065b540_0065c2e8bba.h"



void fn_0065bef0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0065bf20(iVar1,param_1);
  return;
}



undefined4 fn_0065bebc(short *param_1,short *param_2)

{
  if ((*param_1 < *param_2) || ((*param_1 <= *param_2 && (param_1[1] < param_2[1])))) {
    return 1;
  }
  return 0;
}


