#include "004f0700_004f3a74.h"



void fn_004f3a74(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_00856d88;
  fn_004ed068(param_1[0x11]);
  fn_004ed13c(param_1[0x11]);
  if (param_1[0x11] != 0) {
    fn_00656b7c(param_1[0x11]);
  }
  iVar3 = param_1[0x15];
  if (iVar3 != 0) {
    uVar1 = fn_00656b0c(iVar3);
    uVar2 = 0;
    uVar1 = (uint)((ulonglong)uVar1 * 0xc30c30c3 + 0xc30c30c3 >> 0x26);
    if (uVar1 != 0) {
      do {
        (*(code *)**(undefined4 **)(iVar3 + uVar2 * 0x54))(iVar3 + uVar2 * 0x54);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    fn_00656b7c(iVar3);
  }
  iVar3 = param_1[0x16];
  if (iVar3 != 0) {
    fn_00656b0c(iVar3);
    fn_00656b7c(iVar3);
  }
  iVar3 = param_1[0x1b];
  if (iVar3 != 0) {
    fn_00656b0c(iVar3);
    fn_00656b7c(iVar3);
  }
  fn_004ede4c(param_1);
  return;
}



uint fn_004f2a08(int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  int *piVar5;
  uint unaff_r7;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = fn_004f2ff8();
  if (uVar1 != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    return uVar1 & 0xff00 | 1;
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
  uVar1 = fn_0050b370(DAT_008bf4cc);
  iVar2 = fn_0051cae8(uVar1,*(undefined4 *)(DAT_008bf4e0 + 0x50));
  if (iVar2 == 0) {
    fn_006d8a94(param_1);
    pcVar3 = *(char **)(param_1 + 0x40);
    if (pcVar3 != (char *)0x0) {
      cVar4 = *pcVar3;
      if ((cVar4 != '\x02' && cVar4 != '\x03') && (cVar4 != '\x04')) {
        fn_004ed098(pcVar3,0xd8a148e1);
      }
      DAT_008ed96c = 0xd8a148e1;
      DAT_008edb18 = *(undefined4 *)(param_1 + 0x78);
      fn_00505c70(DAT_008bf4e0);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    fn_0051ca8c(uVar1);
    fn_0051c5c8(uVar1);
    fn_0050b66c(DAT_008bf4cc,uVar1);
    return uVar1 & 0xff00 | 1;
  }
  *(undefined1 *)(uVar1 + 0x14) = *(undefined1 *)(DAT_008bf4e0 + 0x62);
  fn_004ed810(uVar1 + 4,*(int *)(param_1 + 0x54) + 8);
  fn_0051b784(DAT_008c06a0,uVar1,*(undefined4 *)(param_1 + 0x54));
  local_28 = 0;
  local_24 = 0;
  fn_004f01f4(&local_28);
  cVar4 = -2;
  fn_00169c20(local_28,local_24,0xfe,0);
  *(char *)(uVar1 + 0x50) = cVar4 + '\x02';
  piVar5 = *(int **)(uVar1 + 0x2c);
  iVar2 = fn_006d88c8(piVar5);
  if ((iVar2 != 0) && (iVar2 = fn_006d88c8(piVar5), iVar2 != 5)) {
    fn_0050faac(piVar5);
    (**(code **)(*piVar5 + 8))(piVar5,1);
  }
  local_24 = *(undefined4 *)(*(int *)(uVar1 + 0x28) + 0x14);
  local_28 = 0;
  iVar2 = fn_0050fb58(piVar5,*(undefined4 *)(param_1 + 0x44),uVar1,*(undefined4 *)(param_1 + 0x54))
  ;
  if (-1 < iVar2) {
    *(undefined1 *)(uVar1 + 0x20) = 2;
    fn_004efcf4(piVar5,0);
    *(code **)(param_1 + 0x24) = fn_004f2cf4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "JoinMeshJob::WaitUntilConnectToHost";
    return unaff_r7 & 0xff00 | 5;
  }
  fn_006d8a94(param_1);
  pcVar3 = *(char **)(param_1 + 0x40);
  if (pcVar3 != (char *)0x0) {
    cVar4 = *pcVar3;
    if ((cVar4 != '\x02' && cVar4 != '\x03') && (cVar4 != '\x04')) {
      fn_004ed098(pcVar3,0xd8a148e1);
    }
    DAT_008ed96c = 0xd8a148e1;
    DAT_008edb18 = *(undefined4 *)(param_1 + 0x78);
    fn_00505c70(DAT_008bf4e0);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  fn_0051ba28(DAT_008c06a0,uVar1);
  fn_0051ca8c(uVar1);
  fn_0051c5c8(uVar1);
  fn_0050b66c(DAT_008bf4cc,uVar1);
  fn_004ed068(*(undefined4 *)(param_1 + 0x44));
  fn_004ed13c(*(undefined4 *)(param_1 + 0x44));
  return uVar1 & 0xff00 | 1;
}



uint fn_004f2800(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint unaff_r5;
  undefined4 uVar4;
  undefined1 local_20;
  undefined1 local_1f;
  undefined4 local_1c;
  
  iVar2 = fn_004f2ff8();
  if (iVar2 != 0) {
    fn_004ed068(*(undefined4 *)(param_1 + 0x44));
    fn_004ed13c(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    DAT_008ed96a = (undefined1)*(int *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
    *(undefined1 **)(param_1 + 0x24) = &LAB_004f2000;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "JoinMeshJob::WaitAllConnection";
    *(undefined1 *)(param_1 + 0x70) = 2;
    return unaff_r5 & 0xff00;
  }
  fn_006d8a94(param_1);
  pcVar3 = *(char **)(param_1 + 0x40);
  if (pcVar3 == (char *)0x0) goto LAB_004f2940;
  cVar1 = *(char *)(param_1 + 0x60);
  if (cVar1 == '\x01') {
    cVar1 = *pcVar3;
    uVar4 = 0xd8a148e0;
    if ((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x04') goto LAB_004f28e0;
  }
  else if (cVar1 == '\0') {
    cVar1 = *pcVar3;
    uVar4 = 0xd8a148e5;
    if ((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x04') goto LAB_004f28e0;
  }
  else if (cVar1 == '\x02') {
    if (*(int *)(DAT_008bf4e0 + 0xa0) != 0) {
      local_20 = 0x14;
      local_1f = 0xfd;
      local_1c = 0;
      (**(code **)**(undefined4 **)(DAT_008bf4e0 + 0xa0))
                (*(undefined4 **)(DAT_008bf4e0 + 0xa0),&local_20);
    }
    pcVar3 = *(char **)(param_1 + 0x40);
    uVar4 = 0xd8a148e1;
    cVar1 = *pcVar3;
    if ((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x04') goto LAB_004f28e0;
  }
  else {
    cVar1 = *pcVar3;
    uVar4 = 0xd8a148e6;
    if ((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x04') {
LAB_004f28e0:
      fn_004ed098(pcVar3,uVar4);
    }
  }
  DAT_008edb18 = *(undefined4 *)(param_1 + 0x78);
  DAT_008ed96c = uVar4;
  fn_00505c70(DAT_008bf4e0);
  *(undefined4 *)(param_1 + 0x40) = 0;
LAB_004f2940:
  fn_004ed068(*(undefined4 *)(param_1 + 0x44));
  fn_004ed13c(*(undefined4 *)(param_1 + 0x44));
  return unaff_r5 & 0xff00 | 1;
}



void fn_004f1514(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  iVar1 = fn_006d8868(param_2);
  if (iVar1 == 0) {
    iVar1 = fn_006d87fc(param_2);
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x48);
      iVar1 = fn_006d8a4c(iVar2 + 0xb8,*(int *)(iVar2 + 200) + param_2,param_3,param_4,unaff_r4,
                           unaff_r5,unaff_r6,in_lr);
      if (iVar1 == 0) {
        return;
      }
      fn_004f0c1c(iVar2 + 0xb8,*(int *)(iVar2 + 200) + param_2);
      return;
    }
  }
  else {
    iVar1 = fn_006d8a4c(param_1 + 4,*(int *)(param_1 + 0x14) + param_2);
    if (iVar1 != 0) {
      fn_004f0c1c(param_1 + 4,*(int *)(param_1 + 0x14) + param_2);
      return;
    }
    iVar1 = fn_006d8a4c(param_1 + 0x18,*(int *)(param_1 + 0x28) + param_2);
    if (iVar1 != 0) {
      fn_004f0c1c(param_1 + 0x18,*(int *)(param_1 + 0x28) + param_2);
      return;
    }
  }
  return;
}



void fn_004f0b78(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  param_3[1] = (int)param_2;
  *param_3 = iVar1;
  *(int **)(*param_2 + 4) = param_3;
  *param_2 = (int)param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}



void fn_004f0ab4(int param_1,int param_2,int *param_3)

{
  *param_3 = param_2;
  param_3[1] = *(int *)(param_2 + 4);
  **(undefined4 **)(param_2 + 4) = param_3;
  *(int **)(param_2 + 4) = param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}



void fn_004f0a20(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 4);
    *(int *)(*piVar1 + 4) = piVar1[1];
    *(int *)piVar1[1] = *piVar1;
    *piVar1 = 0;
    piVar1[1] = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}



undefined4 * fn_004f0700(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0014f590(param_1 + 0x5c4);
  iVar1 = fn_0014f590(iVar1 + 0x14);
  *(undefined4 *)(iVar1 + -0x5d8) = 0x6498ab32;
  *(undefined1 *)(iVar1 + -0x5d4) = 1;
  *(undefined1 *)(iVar1 + -0x5d3) = 0;
  *(undefined2 *)(iVar1 + -0x5d2) = 0;
  *(undefined2 *)(iVar1 + -0x5d0) = 0;
  *(undefined2 *)(iVar1 + -0x5ce) = 0;
  *(undefined4 *)(iVar1 + -0x20) = 0xc;
  *(undefined1 *)(iVar1 + -0x1c) = 0xfd;
  *(undefined4 *)(iVar1 + -0x18) = 0;
  fn_004ed714(iVar1 + -0x14);
  *(undefined1 *)(iVar1 + -4) = 0;
  *(undefined1 *)(iVar1 + -3) = 0;
  fn_004ed714(iVar1);
  *(undefined1 *)(iVar1 + 0x10) = 0;
  return (undefined4 *)(iVar1 + -0x5d8);
}


