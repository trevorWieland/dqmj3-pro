#include "004e3754_004e4288bba.h"



uint fn_004e3f3c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint unaff_r4;
  uint uVar4;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (**(char **)(param_1 + 0x44) == '\x01') {
      fn_004ed158();
    }
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitForCancel";
    *(code **)(param_1 + 0x24) = fn_004e3754;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r4 & 0xff00;
  }
  piVar2 = *(int **)(DAT_008bf504 + 0x18);
  bVar1 = false;
  uVar4 = 0;
  if (*(int *)(DAT_008bf504 + 0x10) != 0) {
    do {
      iVar3 = fn_004de804(DAT_008bf504,uVar4);
      if (iVar3 == 0) break;
      iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2);
      if (iVar3 != 0) {
        *(uint *)(param_1 + 0x4c) = uVar4;
        bVar1 = true;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(DAT_008bf504 + 0x10));
    if (bVar1) {
      *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::ConnectNetwork";
      *(code **)(param_1 + 0x24) = fn_004e37a4;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return param_4 & 0xff00;
    }
  }
  *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::ScanNetwork";
  *(code **)(param_1 + 0x24) = fn_004e3444;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_4 & 0xff00;
}


