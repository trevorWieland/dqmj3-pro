#include "004f96d4_004fa260bbba.h"



uint fn_004fa138(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint unaff_r6;
  bool bVar5;
  
  iVar4 = DAT_008bf4e0;
  if (*(byte *)(DAT_008bf4e0 + 99) < 0xc) {
    uVar1 = fn_006d9250(DAT_008bf4e0);
    bVar5 = uVar1 == 0xd8a148f8;
    if (bVar5) {
      uVar1 = (uint)*(byte *)(param_1 + 0x74);
    }
    if (!bVar5 || uVar1 != 0) {
      iVar2 = fn_004f40c0(*(undefined4 *)(iVar4 + 0xc),param_1 + 0x5c);
      uVar3 = *(undefined4 *)(iVar4 + 0xc);
      if (iVar2 == 0) {
        iVar4 = fn_004f3eb4(uVar3,param_1 + 0x5c);
        if (iVar4 == 0) {
          return 5;
        }
      }
      else {
        fn_004efcf4(uVar3,0);
      }
      *(char **)(param_1 + 0x2c) = "KickoutManageJob::ClientWaitLeaveMesh";
      *(undefined1 **)(param_1 + 0x24) = &LAB_004fa080;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return unaff_r6 & 0xff00 | 5;
    }
  }
  *(code **)(param_1 + 0x24) = fn_004f9f98;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "KickoutManageJob::ClientFinalize";
  return param_4 & 0xff00;
}


