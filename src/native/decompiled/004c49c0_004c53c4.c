#include "004c49c0_004c53c4.h"



uint fn_004c509c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r4;
  uint uVar5;
  uint unaff_r6;
  undefined8 uVar6;
  
  iVar1 = *(int *)(DAT_008bf4e0 + 0x58);
  if (*(char *)(iVar1 + 0x16) != '\0') {
    *(char **)(param_1 + 0x2c) = "JoinMeshJob::CompleteProcess";
    *(code **)(param_1 + 0x24) = fn_004f1b88;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00;
  }
  *(undefined1 *)(param_1 + 0x70) = 3;
  if (*(uint *)(param_1 + 0x4c) < 2) {
LAB_004c51a8:
    *(char **)(param_1 + 0x2c) = "JoinMeshJob::WaitBandWidthCheck";
    *(code **)(param_1 + 0x24) = fn_004c4ea8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r6 & 0xff00 | 5;
  }
  iVar2 = fn_006db45c(iVar1);
  if (iVar2 == 0) {
    fn_0051a1dc(iVar1);
    return unaff_r4 & 0xff00 | 5;
  }
  uVar4 = 0;
  (**(code **)(*DAT_008c06a0 + 8))(DAT_008c06a0,*(code **)(*DAT_008c06a0 + 8),0x80000000,0);
  uVar5 = 2;
  if (1 < *(uint *)(param_1 + 0x4c)) {
    do {
      uVar6 = fn_006db530(DAT_008c06a0,
                           *(int *)(param_1 + 0x54) + (*(int *)(param_1 + 0x4c) - uVar5) * 0x54);
      uVar3 = (uint)((ulonglong)uVar6 >> 0x20);
      iVar2 = (int)uVar6;
      if (iVar2 != 0) {
        uVar3 = (uint)*(byte *)(iVar2 + 0x14);
      }
      if ((iVar2 != 0 && uVar3 != 0xfd) && (uVar3 != *(byte *)(DAT_008bf4e0 + 99)))
      goto LAB_004c519c;
      uVar5 = uVar5 + 1;
    } while (uVar5 <= *(uint *)(param_1 + 0x4c));
    if (iVar2 != 0) {
LAB_004c519c:
      fn_0051b484(iVar1,*(undefined1 *)(iVar2 + 0x14));
      goto LAB_004c51a8;
    }
  }
  *(code **)(param_1 + 0x24) = fn_004c4ea8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "JoinMeshJob::WaitBandWidthCheck";
  return uVar4 & 0xff00;
}



uint fn_004c4ea8(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint unaff_r5;
  
  uVar2 = *(undefined4 *)(DAT_008bf4e0 + 0x58);
  iVar3 = *(int *)(param_1 + 0x40);
  cVar1 = '\0';
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + 0x10);
  }
  if (iVar3 == 0 || cVar1 == '\0') {
    iVar3 = fn_004f32d4(param_1);
    if ((iVar3 != 0) ||
       ((*(char *)(DAT_008bf4e0 + 0x69) == '\0' && (iVar3 = fn_004f33d4(param_1), iVar3 != 0)))) {
      fn_0051a1dc(uVar2);
      return param_1 & 0xff00 | 1;
    }
    iVar3 = fn_006db3cc(uVar2);
    if (iVar3 == 0) {
      return 5;
    }
    if (*(char *)(DAT_008bf4e0 + 0x69) == '\0') {
      *(char **)(param_1 + 0x2c) = "JoinMeshJob::WaitCheckKickoutJob";
      *(code **)(param_1 + 0x24) = fn_004c5258;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    else {
      *(code **)(param_1 + 0x24) = fn_004c53c4;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) = "JoinMeshJob::WaitCheckHostConnection";
    }
  }
  else {
    fn_0051a1dc(uVar2);
    if (*(char *)(DAT_008bf4e0 + 0x69) != '\0') {
      if ((*(byte *)(DAT_008bf4e0 + 99) < 0xc) &&
         (*(byte *)(DAT_008bf4e0 + 99) == *(byte *)(DAT_008bf4e0 + 0x62))) {
        *(code **)(param_1 + 0x24) = fn_004f3084;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(char **)(param_1 + 0x2c) = "JoinMeshJob::LeaveMeshWithHostMigration";
        goto LAB_004c4ff8;
      }
    }
    *(char **)(param_1 + 0x2c) = "JoinMeshJob::LeaveMesh";
    *(code **)(param_1 + 0x24) = fn_004f373c;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_004c4ff8:
  return unaff_r5 & 0xff00;
}



uint fn_004c53c4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r5;
  
  iVar2 = *(int *)(param_1 + 0x40);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x10);
  }
  if (iVar2 == 0 || cVar1 == '\0') {
    uVar3 = fn_004f32d4(param_1);
    if (uVar3 != 0) {
      return uVar3 & 0xff00 | 1;
    }
    uVar3 = DAT_008bf4e0;
    if ((*(char *)(*(int *)(DAT_008bf4e0 + 0x20) + 0x6f) != '\0') ||
       (uVar3 = fn_006d897c(*(undefined4 *)(DAT_008bf4e0 + 0x30)), uVar3 != 0)) {
      return uVar3 & 0xff00 | 5;
    }
    iVar2 = fn_0050b080(DAT_008bf4cc,*(undefined1 *)(DAT_008bf4e0 + 0x62));
    if ((iVar2 == 0) || (*(char *)(iVar2 + 0x20) != '\x05')) {
      return unaff_r5 & 0xff00 | 5;
    }
    *(char **)(param_1 + 0x2c) = "JoinMeshJob::CompleteProcess";
    *(code **)(param_1 + 0x24) = fn_004f1b88;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00;
  }
  if (*(char *)(DAT_008bf4e0 + 0x69) != '\0') {
    if ((*(byte *)(DAT_008bf4e0 + 99) < 0xc) &&
       (*(byte *)(DAT_008bf4e0 + 99) == *(byte *)(DAT_008bf4e0 + 0x62))) {
      *(char **)(param_1 + 0x2c) = "JoinMeshJob::LeaveMeshWithHostMigration";
      *(code **)(param_1 + 0x24) = fn_004f3084;
      *(undefined4 *)(param_1 + 0x28) = 0;
      goto LAB_004c544c;
    }
  }
  *(char **)(param_1 + 0x2c) = "JoinMeshJob::LeaveMesh";
  *(code **)(param_1 + 0x24) = fn_004f373c;
  *(undefined4 *)(param_1 + 0x28) = 0;
LAB_004c544c:
  return unaff_r5 & 0xff00;
}



uint fn_004c5258(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r5;
  
  iVar2 = *(int *)(param_1 + 0x40);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x10);
  }
  if (iVar2 == 0 || cVar1 == '\0') {
    uVar3 = fn_004f32d4(param_1);
    if (uVar3 != 0) {
      return uVar3 & 0xff00 | 1;
    }
    uVar3 = fn_006d897c(*(undefined4 *)(DAT_008bf4e0 + 0x30));
    if (uVar3 == 0) {
      *(char **)(param_1 + 0x2c) = "JoinMeshJob::CompleteProcess";
      *(code **)(param_1 + 0x24) = fn_004f1b88;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return unaff_r5 & 0xff00;
    }
    return uVar3 & 0xff00 | 5;
  }
  if (*(char *)(DAT_008bf4e0 + 0x69) != '\0') {
    if ((*(byte *)(DAT_008bf4e0 + 99) < 0xc) &&
       (*(byte *)(DAT_008bf4e0 + 99) == *(byte *)(DAT_008bf4e0 + 0x62))) {
      *(code **)(param_1 + 0x24) = fn_004f3084;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) = "JoinMeshJob::LeaveMeshWithHostMigration";
      goto LAB_004c52d8;
    }
  }
  *(char **)(param_1 + 0x2c) = "JoinMeshJob::LeaveMesh";
  *(code **)(param_1 + 0x24) = fn_004f373c;
  *(undefined4 *)(param_1 + 0x28) = 0;
LAB_004c52d8:
  return unaff_r5 & 0xff00;
}



undefined4 fn_004c4dfc(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,1);
  if (DAT_008bf4f0 == '\0') {
    param_1[9] = (int)fn_004f2a08;
    param_1[10] = 0;
    param_1[0xb] = (int)"JoinMeshJob::StartConnectingToHost";
  }
  else {
    param_1[9] = (int)fn_004f2a08;
    param_1[10] = 0;
    param_1[0xb] = (int)"JoinMeshJob::StartConnectingToHost";
  }
  DAT_008ed91c = *(undefined4 *)(DAT_008bf4f4 + 0x10);
  return 1;
}



undefined1 * fn_004c4c60(uint *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *local_20;
  char *local_1c;
  
  if (DAT_008bf4ec == '\0') {
    puVar1 = (undefined1 *)0xe0e14826;
    if ((*param_1 < 0x555) && (iVar2 = fn_004ef2bc(DAT_008c0634,*param_1 - 0x1c), -1 < iVar2)) {
      DAT_008ed910 = (undefined2)*param_1;
      local_1c = "pia inet heap";
      local_20 = &DAT_00859700;
      fn_004ed230(6,0,&local_20);
      DAT_008bf4ec = 1;
      return (undefined1 *)0x0;
    }
  }
  else {
    puVar1 = &DAT_e0a14821;
  }
  return puVar1;
}



longlong fn_004c4b48(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint extraout_r1;
  
  if (DAT_008bf4ec == '\0') {
    puVar1 = &DAT_e0a1482b;
  }
  else {
    if (DAT_008bf4ed == '\0') {
      fn_004ed204(6);
      DAT_008bf4ed = 1;
      return (ulonglong)extraout_r1 << 0x20;
    }
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    puVar1 = &DAT_e0a14827;
  }
  return CONCAT44(param_2,puVar1);
}



undefined4 * fn_004c4af8(void)

{
  int iVar1;
  
  if (((DAT_008bf4a8 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008bf4a8), iVar1 != 0)) {
    DAT_008bf4b8 = 0xfffffffe;
    DAT_008bf4bc = 0xffffffff;
  }
  return &DAT_008bf4b8;
}



undefined4 * fn_004c4aa8(void)

{
  int iVar1;
  
  if (((DAT_008bf4ac & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008bf4ac), iVar1 != 0)) {
    DAT_008bf4c0 = 0xffffffff;
    DAT_008bf4c4 = 0xffffffff;
  }
  return &DAT_008bf4c0;
}



undefined4 fn_004c4a50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 auStack_10 [8];
  
  fn_0019bc50(param_1,0x1ff81060);
  local_18 = 0;
  local_14 = 0;
  fn_0019bc50(auStack_10,&local_18);
  iVar1 = fn_001010c8(param_1,auStack_10,6);
  if (iVar1 == 0) {
    uVar2 = 0xc9606fef;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 * fn_004c4a24(undefined4 *param_1)

{
  *param_1 = &DAT_00855e10;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



undefined4 * fn_004c49c0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  
  param_1[1] = param_2;
  puVar1 = param_1 + 2;
  bVar3 = puVar1 == (undefined4 *)0x0;
  if (bVar3) {
    puVar1 = (undefined4 *)0x0;
  }
  *param_1 = &DAT_00855e10;
  if (!bVar3) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &DAT_00855e30;
  }
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + 0x14);
    puVar1[1] = param_2 + *(int *)(param_2 + 0x18);
    puVar1[2] = uVar2;
  }
  return param_1;
}


