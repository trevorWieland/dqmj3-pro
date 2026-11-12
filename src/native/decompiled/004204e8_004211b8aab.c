#include "004204e8_004211b8aab.h"



void fn_004208a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x3a] = 0;
  puVar1[0x39] = 0xffffffff;
  *puVar1 = &DAT_0083a8c8;
  return;
}



void fn_00420764(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_60 [2];
  undefined1 auStack_58 [64];
  
  fn_003979f0();
  iVar2 = fn_006ba284(param_1);
  if (iVar2 != *(int *)(param_1 + 0xe4)) {
    iVar2 = 0;
    iVar5 = 0;
    iVar3 = fn_006ba284(param_1);
    local_60[0] = *(int *)(param_1 + 0xe8) + iVar3 * -9;
    piVar7 = &DAT_007c7a20;
    if (local_60[0] < 9) {
      piVar7 = local_60;
    }
    if (0 < *piVar7) {
      do {
        iVar6 = DAT_0089783c + 0x3c;
        iVar3 = fn_006ba284(param_1);
        sVar1 = *(short *)(iVar6 + (iVar3 * 9 + iVar5 + iVar2) * 2 + 10);
        while (sVar1 == 0) {
          iVar2 = iVar2 + 1;
          iVar3 = fn_006ba284(param_1);
          sVar1 = *(short *)(iVar6 + (iVar3 * 9 + iVar5 + iVar2) * 2 + 10);
        }
        fn_00231700(auStack_58,0x20,(int)sVar1,0);
        fn_0031b78c(param_1,iVar5,0,auStack_58);
        iVar5 = iVar5 + 1;
        iVar3 = fn_006ba284(param_1);
        local_60[0] = *(int *)(param_1 + 0xe8) + iVar3 * -9;
        piVar7 = &DAT_007c7a20;
        if (local_60[0] < 9) {
          piVar7 = local_60;
        }
      } while (iVar5 < *piVar7);
    }
    uVar4 = fn_006ba284(param_1);
    *(undefined4 *)(param_1 + 0xe4) = uVar4;
  }
  return;
}


