#include "0012e714_004ad878bab.h"



uint fn_002283ec(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_38 [40];
  
  uVar2 = 0;
  if (param_1 != 0) {
    fn_00522550(auStack_38);
    iVar1 = (**(code **)(*DAT_00897894 + 0x30))(DAT_00897894,auStack_38,param_1);
    if (iVar1 != 0) {
      iVar1 = fn_005222ac(auStack_38,&DAT_008cddb4,0x2000);
      if (-1 < iVar1) {
        iVar1 = fn_002273f0(&DAT_008cddb4,0);
        uVar2 = (uint)(iVar1 != 0);
        if (iVar1 != 0) goto LAB_00228464;
      }
      fn_00522220(auStack_38);
      fn_002279b4(DAT_00897894,(char *)&DAT_0086a0bc);
    }
  }
LAB_00228464:
  if ((param_1 & -uVar2) == 0) {
    if (param_1 == 0) {
      uVar2 = 1;
    }
    fn_00158f6c(&DAT_008cddb4,0x2000);
    param_1 = 0;
  }
  DAT_008978a0 = param_1;
  return uVar2;
}


