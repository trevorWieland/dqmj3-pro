#include "004e4b44_004e5460.h"



undefined4 * fn_004e5460(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = &DAT_00856898;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e14(0x14,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_004ed164();
  }
  puVar1[0x11] = uVar2;
  return puVar1;
}



int fn_004e5398(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(DAT_008bf504 + 0x38) + 0x24))
                    (*(int **)(DAT_008bf504 + 0x38),*(undefined4 *)(param_1 + 0x44));
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x40) = param_2;
    fn_004ed13c(param_2);
    fn_004ed050(*(undefined4 *)(param_1 + 0x40));
    fn_004efcf4(*(undefined4 *)(DAT_008bf504 + 0x38),1);
    iVar1 = DAT_008bf504;
    *(undefined1 *)(DAT_008bf504 + 0x81) = 0;
    *(undefined1 *)(*(int *)(iVar1 + 0x14) + 0x1f15) = 1;
    *(code **)(param_1 + 0x24) = fn_004e51dc;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalConnectNetworkJob::WaitConnectNetwork";
    iVar1 = 0;
  }
  return iVar1;
}



void fn_004e535c(int param_1)

{
  char *pcVar1;
  
  fn_004ed158(*(undefined4 *)(param_1 + 0x44));
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed098(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



uint fn_004e51dc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
    *(char **)(param_1 + 0x2c) = "LocalConnectNetworkJob::WaitForCancel";
    *(code **)(param_1 + 0x24) = fn_004e50ec;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        fn_004ed098(iVar3,*(undefined4 *)(pcVar2 + 4));
        *(undefined4 *)(param_1 + 0x40) = 0;
        return unaff_r5 & 0xff00 | 1;
      }
      if (cVar1 == '\x04') {
        fn_004ed098(iVar3,*(undefined4 *)(pcVar2 + 4));
        *(undefined4 *)(param_1 + 0x40) = 0;
        return unaff_r5 & 0xff00 | 1;
      }
      return param_4 & 0xff00 | 1;
    }
    pcVar2 = (char *)fn_006d897c(*(undefined4 *)(DAT_008bf504 + 0x38));
    if (pcVar2 == (char *)0x0) {
      *(char **)(param_1 + 0x2c) = "LocalConnectNetworkJob::ProcessSucceeded";
      *(code **)(param_1 + 0x24) = fn_004e513c;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return unaff_r5 & 0xff00;
    }
  }
  return (uint)pcVar2 & 0xff00 | 5;
}



uint fn_004e513c(int param_1)

{
  uint unaff_r5;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) == '\0') {
    fn_004ed0e4(*(int *)(param_1 + 0x40),0);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  if (**(char **)(param_1 + 0x44) == '\x01') {
    fn_004ed158();
  }
  *(code **)(param_1 + 0x24) = fn_004e50ec;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LocalConnectNetworkJob::WaitForCancel";
  return unaff_r5 & 0xff00;
}



uint fn_004e50ec(int param_1)

{
  char cVar1;
  uint unaff_r5;
  
  cVar1 = **(char **)(param_1 + 0x44);
  if ((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') {
    fn_004ed068(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  return 5;
}



undefined4 * fn_004e50b4(undefined4 *param_1)

{
  *param_1 = &DAT_00856840;
  if (param_1[5] != 0) {
    fn_00656b7c(param_1[5]);
  }
  return param_1;
}



undefined4 * fn_004e5044(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_00856840;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(0x14,uVar1);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_004ed164();
  }
  param_1[5] = uVar1;
  return param_1;
}



undefined4 fn_004e4e74(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  fn_00158f6c(*(undefined4 *)(param_1 + 0x1c),*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c));
  fn_00158f6c(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x44));
  uVar2 = 0;
  do {
    uVar1 = uVar2 + 1 & 0xff;
    if ((uVar1 != 0) && (uVar1 < 0xd)) {
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar1 * 0x10 + -0x10) = 0;
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar1 * 0x10 + -0xf) = 0xff;
      *(undefined2 *)(*(int *)(param_1 + 4) + uVar1 * 0x10 + -0xe) =
           *(undefined2 *)(*(int *)(DAT_008bf504 + 0x14) + 0x42);
      puVar3 = (undefined4 *)(uVar1 * 0x10 + -8 + *(int *)(param_1 + 4));
      *puVar3 = *(undefined4 *)(param_1 + 0x48);
      puVar3[1] = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc);
  uVar2 = 1;
  do {
    uVar1 = uVar2 & 0xff;
    if ((uVar1 != 0) && (uVar1 < 0xd)) {
      *(undefined2 *)(*(int *)(param_1 + 8) + uVar1 * 2 + -2) =
           *(undefined2 *)(*(int *)(DAT_008bf504 + 0x14) + 0x42);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xd);
  return 0;
}



void fn_004e4e24(int param_1)

{
  if (*(int *)(param_1 + 0xc) - 0x100000U < 0x3ff00000) {
    fn_004e45d0();
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),0);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}



void fn_004e4d9c(int param_1,uint param_2)

{
  if ((param_2 != 0) && (param_2 < 0xd)) {
    *(undefined2 *)(*(int *)(param_1 + 8) + param_2 * 2 + -2) =
         *(undefined2 *)(*(int *)(DAT_008bf504 + 0x14) + 0x42);
  }
  return;
}



void fn_004e4d78(int param_1,uint param_2,undefined2 param_3)

{
  if ((param_2 != 0) && (param_2 < 0xd)) {
    *(undefined2 *)(*(int *)(param_1 + 8) + param_2 * 2 + -2) = param_3;
  }
  return;
}



undefined4 fn_004e4d64(int param_1)

{
  fn_004ed158(*(undefined4 *)(param_1 + 0x14));
  return 0;
}



undefined1 * fn_004e4b44(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  
  if (((*(char *)(param_1 + 0x10) != '\0') ||
      (iVar2 = fn_006d897c(*(undefined4 *)(param_1 + 0xc)), iVar2 != 0)) ||
     (*(char *)(DAT_008bf504 + 0x98) != '\0')) {
    return &DAT_e0a14827;
  }
  fn_004dee18();
  iVar2 = fn_006d88c8(*(undefined4 *)(param_1 + 0xc));
  if (iVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),1);
  }
  uVar3 = (uint)*(byte *)(*(int *)(DAT_008bf504 + 0x14) + 0xf);
  if ((uVar3 != 0) && (uVar3 < 0xd)) {
    *(undefined2 *)(*(int *)(param_1 + 8) + uVar3 * 2 + -2) =
         *(undefined2 *)(*(int *)(DAT_008bf504 + 0x14) + 0x42);
  }
  uVar11 = 0xff;
  if ((uVar3 != 0) && (uVar3 < 0xd)) {
    *(undefined1 *)(*(int *)(param_1 + 4) + uVar3 * 0x10 + -0x10) = 0;
    *(undefined1 *)(*(int *)(param_1 + 4) + uVar3 * 0x10 + -0xf) = 0xff;
    *(undefined2 *)(*(int *)(param_1 + 4) + uVar3 * 0x10 + -0xe) =
         *(undefined2 *)(*(int *)(DAT_008bf504 + 0x14) + 0x42);
    puVar7 = (undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 0x10 + -8);
    *puVar7 = *(undefined4 *)(param_1 + 0x48);
    puVar7[1] = 0;
  }
  iVar2 = 0;
  iVar8 = 0xc;
  do {
    if (*(char *)(*(int *)(param_1 + 4) + iVar2 * 0x10 + 1) != -1) {
      *(undefined1 *)(*(int *)(param_1 + 4) + iVar2 * 0x10) = 1;
    }
    iVar1 = DAT_008bf504;
    iVar8 = iVar8 + -1;
    iVar2 = iVar2 + 1;
  } while (iVar8 != 0);
  *(undefined1 *)(*(int *)(DAT_008bf504 + 0x14) + 0x1f15) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  uVar3 = (uint)*(byte *)(*(int *)(iVar1 + 0x14) + 0xe);
  if (uVar3 != 0xff) {
    uVar10 = (uint)*(byte *)(*(int *)(iVar1 + 0x14) + 0xf);
    if (uVar10 != 0xff) {
      iVar2 = fn_006d5cf0();
      if (iVar2 == 0) {
        uVar4 = fn_006d67fc(*(undefined4 *)(DAT_008bf504 + 0x14),0);
      }
      else {
        uVar4 = fn_006d6690();
      }
      uVar5 = 0;
      do {
        if ((uVar10 != uVar5 + 1) && ((uVar4 & 1 << (uVar5 & 0xff)) != 0)) {
          uVar11 = uVar5 + 1 & 0xff;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0xc);
    }
    if (uVar11 == uVar3) {
      uVar9 = 1;
      goto LAB_004e4d30;
    }
  }
  uVar9 = 0;
LAB_004e4d30:
  puVar6 = (undefined1 *)
           fn_004e4624(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14),uVar9);
  if ((int)puVar6 < 0) {
    return puVar6;
  }
  fn_004efcf4(*(undefined4 *)(param_1 + 0xc),0);
  return (undefined1 *)0x0;
}


