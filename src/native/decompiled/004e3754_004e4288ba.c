#include "004e3754_004e4288ba.h"



uint fn_004e3df4(int param_1)

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
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitForCancel";
    *(code **)(param_1 + 0x24) = fn_004e3754;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  if (cVar1 == '\x01') {
    return (uint)pcVar2 & 0xff00 | 5;
  }
  if (cVar1 == '\x02') {
    fn_004ed0e4(iVar3,0);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 0;
    *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x11) = 3;
    return unaff_r5 & 0xff00 | 1;
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



uint fn_004e3c80(int param_1)

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
    *(char **)(param_1 + 0x2c) = "LocalHostMigrationJob::WaitUntilAllClientsConnection";
    *(code **)(param_1 + 0x24) = fn_004e42fc;
    *(undefined4 *)(param_1 + 0x28) = 0;
    fn_004f01f4(param_1 + 0x50);
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


