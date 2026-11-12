#include "0029d8c4_002a14f8abb.h"



void fn_0029e160(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_001642a4(uVar1,param_3);
  uVar1 = fn_00182994(DAT_008977e4);
  iVar3 = fn_001657c8(uVar1,(int)(char)param_3);
  if (iVar2 - 1U < 699) {
    iVar2 = fn_00691ab4(iVar2);
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = iVar3 - 0x10;
    }
    if (iVar2 != 0 && uVar4 < 8) {
      uVar1 = fn_00182994(DAT_008977e4);
      iVar2 = fn_00174b78(uVar1,iVar3);
      bVar5 = iVar2 != 0;
      iVar2 = 0;
      if (bVar5) {
        iVar2 = param_1 + -1;
      }
      if (((bVar5 && param_1 != 1) && iVar2 < 0 == (bVar5 && SBORROW4(param_1,1))) &&
         (param_2 == 0 && param_4 == 0)) {
        uVar1 = fn_00182994(DAT_008977e4);
        fn_00164c80(uVar1,0x264,0);
        return;
      }
    }
  }
  return;
}


