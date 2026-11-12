#include "004e3754_004e4288a.h"



uint fn_004e3ba4(int param_1)

{
  uint uVar1;
  uint unaff_r5;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (**(char **)(param_1 + 0x44) == '\x01') {
      fn_004ed158();
    }
    *(code **)(param_1 + 0x24) = fn_004e3754;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitForCancel";
    return unaff_r5 & 0xff00;
  }
  uVar1 = fn_006d67e4(*(undefined4 *)(DAT_008bf504 + 0x14));
  if (uVar1 == 0) {
    fn_004ed0e4(*(undefined4 *)(param_1 + 0x40),0);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  return uVar1 & 0xff00 | 5;
}



uint fn_004e3a4c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint unaff_r5;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (**(char **)(param_1 + 0x44) == '\x01') {
      fn_004ed158();
    }
    *(code **)(param_1 + 0x24) = fn_004e3754;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitForCancel";
    return unaff_r5 & 0xff00;
  }
  if (*(char *)(DAT_008bf504 + 0x98) != '\0') {
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitForCancel";
    *(code **)(param_1 + 0x24) = fn_004e3754;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00;
  }
  uVar1 = fn_006d58fc();
  if (uVar1 == 0) {
    uVar1 = fn_004ddab0(DAT_008bf504,*(undefined4 *)(param_1 + 0x44));
    uVar1 = uVar1 & 0x80000000;
    if (-1 < (int)uVar1) {
      *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitDisconnectNetwork";
      *(code **)(param_1 + 0x24) = fn_004e40e4;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return param_4 & 0xff00 | 5;
    }
  }
  return uVar1 & 0xff00 | 5;
}



uint fn_004e38dc(int param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint unaff_r5;
  
  uVar3 = *(uint *)(param_1 + 0x40);
  pcVar2 = *(char **)(param_1 + 0x44);
  cVar1 = *pcVar2;
  if (*(char *)(uVar3 + 0x10) != '\0') {
    if (cVar1 == '\x01') {
      fn_004ed158();
    }
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitForCancel";
    *(code **)(param_1 + 0x24) = fn_004e3754;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  if (cVar1 == '\x01') {
    return (uint)pcVar2 & 0xff00 | 5;
  }
  if (cVar1 == '\x02') {
    *(undefined1 *)(DAT_008bf504 + 0x81) = 0;
    *(code **)(param_1 + 0x24) = fn_004e3f3c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::SearchNewHostNetwork";
    return uVar3 & 0xff00;
  }
  if (cVar1 == '\x03' || cVar1 == '\x04') {
    fn_004ed098(uVar3,*(undefined4 *)(pcVar2 + 4));
    *(undefined4 *)(param_1 + 0x40) = 0;
    fn_004e4288(param_1);
    return unaff_r5 & 0xff00 | 1;
  }
  fn_004ed098(uVar3,&DAT_e0a14827);
  *(undefined4 *)(param_1 + 0x40) = 0;
  fn_004e4288(param_1);
  return unaff_r5 & 0xff00 | 1;
}



uint fn_004e37a4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint unaff_r5;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (**(char **)(param_1 + 0x44) == '\x01') {
      fn_004ed158();
    }
    *(code **)(param_1 + 0x24) = fn_004e3754;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitForCancel";
    return unaff_r5 & 0xff00;
  }
  uVar1 = fn_004de804(DAT_008bf504,*(undefined4 *)(param_1 + 0x4c));
  uVar1 = (**(code **)(**(int **)(DAT_008bf504 + 0x18) + 0x18))
                    (*(int **)(DAT_008bf504 + 0x18),uVar1);
  iVar2 = fn_004dcbf8(DAT_008bf504,*(undefined4 *)(param_1 + 0x44),uVar1);
  if (iVar2 < 0) {
    return 5;
  }
  *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitConnectNetwork";
  *(code **)(param_1 + 0x24) = fn_004e3df4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_4 & 0xff00 | 5;
}



uint fn_004e3754(int param_1)

{
  uint unaff_r5;
  
  if (**(char **)(param_1 + 0x44) == '\x01') {
    return 5;
  }
  fn_004e4288(param_1);
  fn_004ed068(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}


