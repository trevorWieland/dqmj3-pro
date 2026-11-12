#include "004e3754_004e4288bbba.h"



uint fn_004e40e4(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint unaff_r5;
  
  iVar3 = *(int *)(param_1 + 0x40);
  pcVar2 = *(char **)(param_1 + 0x44);
  cVar1 = *pcVar2;
  if (*(char *)(iVar3 + 0x10) != '\0') {
    if (cVar1 == '\x01') {
      fn_004ed158();
    }
    *(code **)(param_1 + 0x24) = fn_004e3754;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitForCancel";
    return unaff_r5 & 0xff00;
  }
  if (cVar1 == '\x01') {
    return (uint)pcVar2 & 0xff00 | 5;
  }
  if (cVar1 == '\x02') {
    if (*(char *)(param_1 + 0x48) == '\0') {
      fn_004f01f4(param_1 + 0x58);
      *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::ScanNetwork";
      *(code **)(param_1 + 0x24) = fn_004e3444;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    else {
      *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::CreateNetwork";
      *(code **)(param_1 + 0x24) = fn_004e3630;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    return unaff_r5 & 0xff00;
  }
  if (cVar1 == '\x03' || cVar1 == '\x04') {
    fn_004ed098(iVar3,*(undefined4 *)(pcVar2 + 4));
    *(undefined4 *)(param_1 + 0x40) = 0;
    fn_004e4288(param_1);
    return unaff_r5 & 0xff00 | 1;
  }
  fn_004ed098(iVar3,&DAT_e0a14827);
  *(undefined4 *)(param_1 + 0x40) = 0;
  fn_004e4288(param_1);
  return unaff_r5 & 0xff00 | 1;
}


