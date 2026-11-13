#include "004f96d4_004fa260ba.h"



undefined4 fn_004f9de4(int *param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  
  (**(code **)(*param_1 + 0x18))(param_1);
  if (((char)param_1[0x17] == '\x01') || (iVar1 = fn_006d897c(param_1), iVar1 != 0)) {
    return 0;
  }
  (**(code **)(*param_1 + 8))(param_1,1);
  *(undefined1 *)(param_1 + 0x16) = param_2;
  iVar1 = fn_006d897c(*(undefined4 *)(DAT_008bf4e0 + 8));
  if (iVar1 != 0) {
    if (*(byte *)(param_1 + 0x16) - 3 < 0x15) {
      uVar2 = *(byte *)(param_1 + 0x16) - 3 & 0xff;
      if (uVar2 == 1) {
        iVar1 = -0x275eb712;
      }
      else if (uVar2 == 2) {
        iVar1 = -0x275eb711;
      }
      else if (uVar2 == 3) {
        iVar1 = -0x275eb710;
      }
      else {
        iVar1 = -0x275eb70f;
      }
      param_1[0x1e] = iVar1;
    }
    else {
      param_1[0x1e] = -0x275eb720;
    }
    *(undefined1 *)(param_1 + 0x1d) = 1;
    iVar1 = fn_006d897c(*(undefined4 *)(DAT_008bf4e0 + 0x14));
    if (iVar1 == 0) {
      iVar1 = fn_005059c0(DAT_008bf4e0);
      if (iVar1 == 3) {
        param_1[0xb] = (int)(char *)&DAT_004f9f4c;
        param_1[9] = (int)fn_004fa138;
        param_1[10] = 0;
        return 1;
      }
      param_1[9] = (int)fn_004f9f98;
      param_1[10] = 0;
      param_1[0xb] = (int)"KickoutManageJob::ClientFinalize";
      return 1;
    }
  }
  param_1[9] = (int)fn_004fa138;
  param_1[10] = 0;
  param_1[0xb] = (int)(char *)&DAT_004f9f4c;
  iVar1 = fn_006d897c(*(undefined4 *)(DAT_008bf4e0 + 0xc));
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  return 1;
}



uint fn_004f9f98(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint unaff_r5;
  
  *(undefined1 *)(DAT_008bf4e0 + 0x65) = 3;
  fn_00505a04();
  if ((*(char *)(param_1 + 0x74) != '\0') &&
     (iVar1 = fn_006d897c(*(undefined4 *)(DAT_008bf4e0 + 8)), iVar1 != 0)) {
    fn_004f3498(*(undefined4 *)(DAT_008bf4e0 + 8),*(undefined4 *)(param_1 + 0x78));
    (**(code **)(**(int **)(DAT_008bf4e0 + 8) + 8))(*(int **)(DAT_008bf4e0 + 8),1);
  }
  iVar1 = 0;
  uVar2 = 0;
  do {
    iVar4 = iVar1 + 1;
    uVar2 = uVar2 + 2;
    *(undefined1 *)(param_1 + iVar1 * 2 + 0x40) = 0xfd;
    iVar1 = iVar1 + 2;
    *(undefined1 *)(param_1 + iVar4 * 2 + 0x40) = 0xfd;
  } while (uVar2 < 0xc);
  if (*(char *)(param_1 + 0x5c) != '\x01') {
    fn_004ed068(param_1 + 0x5c);
  }
  pcVar3 = *(char **)(param_1 + 0x70);
  if (pcVar3 != (char *)0x0) {
    if (*pcVar3 == '\x01') {
      fn_004ed0e4(pcVar3,0);
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined1 *)(param_1 + 0x74) = 0;
  return unaff_r5 & 0xff00 | 1;
}


