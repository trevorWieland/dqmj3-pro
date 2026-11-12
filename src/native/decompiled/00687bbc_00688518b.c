#include "00687bbc_00688518b.h"



int fn_00688518(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = param_1 == 0;
  iVar1 = param_1;
  if (0 < param_1) {
    iVar1 = DAT_00893140 - param_1;
    bVar2 = DAT_00893140 == param_1;
    param_4 = DAT_00893140;
  }
  if (bVar2 || iVar1 < 0 != (0 < param_1 && SBORROW4(param_4,param_1))) {
    param_1 = 0;
  }
  return (int)*(short *)(DAT_0089313c + param_1 * 0x2c + 0x10);
}



undefined1 fn_006884e8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = param_1 == 0;
  iVar1 = param_1;
  if (0 < param_1) {
    iVar1 = DAT_00893140 - param_1;
    bVar2 = DAT_00893140 == param_1;
    param_4 = DAT_00893140;
  }
  if (bVar2 || iVar1 < 0 != (0 < param_1 && SBORROW4(param_4,param_1))) {
    param_1 = 0;
  }
  return *(undefined1 *)(DAT_0089313c + param_1 * 0x2c + 0x2a);
}



undefined4 fn_00688458(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_006884dc,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 0x2c;
  iVar2 = 0;
  DAT_00893140 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_00893140 = 0;
  }
  DAT_0089313c = param_1;
  return 1;
}



void fn_006883f0(undefined4 *param_1)

{
  *param_1 = &DAT_00850fb8;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[4] = 0xffff;
  param_1[3] = 0xffffffff;
  param_1[5] = 0xffff;
  param_1[6] = 0xffff;
  return;
}


