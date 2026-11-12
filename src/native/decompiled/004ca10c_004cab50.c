#include "004ca10c_004cab50.h"



undefined1 * fn_004cab50(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [24];
  undefined1 auStack_20 [8];
  
  fn_004c5bf4();
  iVar1 = fn_004c5f48(param_1);
  if ((iVar1 == 0) || (iVar2 = fn_004d52e0(DAT_008bf4f4), iVar2 != 2)) {
    uVar3 = fn_004c5f18(param_1);
    uVar3 = fn_004ed440(auStack_20,uVar3);
    iVar1 = fn_004ed440(auStack_38,uVar3);
    *(undefined4 *)(iVar1 + 8) = 0x65;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    fn_004c58dc(param_1,iVar1,5);
    return auStack_20;
  }
  uVar3 = fn_004ed440(auStack_20,iVar1);
  iVar1 = fn_004ed440(auStack_38,uVar3);
  *(undefined4 *)(iVar1 + 8) = 0x65;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  fn_004c58dc(param_1,iVar1,5);
  return auStack_20;
}



undefined4 fn_004ca908(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_58 [12];
  undefined2 local_4c;
  undefined2 local_40;
  uint local_30;
  int iStack_2c;
  undefined2 local_1c;
  uint local_18;
  int local_14;
  
  fn_004c5f04(param_1,param_2,0x10000,0);
  fn_004c5814(param_1,param_1 + 1000);
  iVar2 = fn_006d6d58(param_1 + 1000);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x40c) == '\0') {
    uVar4 = fn_00468c28();
    fn_006d1198(auStack_58,uVar4);
    local_40 = fn_004c5be8(param_1);
    local_4c = *(undefined2 *)(param_1 + 0x1c);
    uVar4 = fn_00468c28();
    fn_00468e80(uVar4,auStack_58);
    local_30 = 0;
    iStack_2c = 0;
    fn_004f01f4(&local_30);
    iVar2 = local_30 - *(uint *)(param_1 + 0x410);
    iVar5 = iStack_2c - (*(int *)(param_1 + 0x414) + (uint)(local_30 < *(uint *)(param_1 + 0x410)));
    puVar3 = (undefined4 *)fn_004f0ce8();
    DAT_008ed90c = fn_0011c134(iVar2,iVar5,*puVar3,puVar3[1]);
    fn_0045fbe8(auStack_58);
  }
  else {
    fn_004ceee8(*(undefined4 *)(param_1 + 0x408),param_1 + 0x3b8,param_1 + 0x3e0);
    local_18 = 0;
    local_14 = 0;
    fn_004f01f4(&local_18);
    iVar2 = local_18 - *(uint *)(param_1 + 0x410);
    iVar5 = local_14 - (*(int *)(param_1 + 0x414) + (uint)(local_18 < *(uint *)(param_1 + 0x410)));
    puVar3 = (undefined4 *)fn_004f0ce8();
    uVar1 = fn_0011c134(iVar2,iVar5,*puVar3,puVar3[1]);
    iVar2 = fn_004cc270(*(int *)(*(int *)(DAT_008bf4f4 + 0x20) + 0xa0) + 0x120,param_1 + 0x3b8);
    if (iVar2 == 0) {
      iVar2 = fn_0013d5c4(auStack_58);
      *(undefined4 *)(iVar2 + 0x28) = 0;
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      *(undefined4 *)(iVar2 + 0x30) = 0;
      *(undefined4 *)(iVar2 + 0x34) = 0;
      fn_0050d1a0(auStack_58,param_1 + 0x3b8);
      local_1c = uVar1;
      fn_004cc15c(*(int *)(*(int *)(DAT_008bf4f4 + 0x20) + 0xa0) + 0x120,auStack_58);
      fn_0050d178(auStack_58);
    }
    else {
      *(undefined2 *)(iVar2 + 0x3c) = uVar1;
    }
  }
  return 1;
}



undefined4 fn_004ca874(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int local_10;
  
  local_10 = param_4;
  uVar1 = fn_004c5be8();
  if ((uVar1 == 0) && (*(uint *)(param_1 + 0x14) < 4)) {
    return 1;
  }
  if (((uVar1 < DAT_008c361c) && (*(char *)(param_1 + 0x40c) != '\0')) &&
     (*(uint *)(param_1 + 0x14) < 4)) {
    local_10 = -0x181c0001;
    local_10 = fn_004c6158(param_1);
    if (-1 < local_10) {
      return 1;
    }
    fn_004ed4f8(0x8000,0,&local_10);
  }
  else {
    DAT_008c361c = (ushort)uVar1;
  }
  return 0;
}



undefined1 * fn_004ca178(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(code **)(param_1 + 0x24) = fn_004c9ee8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepPreTest";
  fn_004edddc(param_1,1);
  *(undefined4 *)(param_1 + 0x40) = param_2;
  iVar1 = fn_004ed050(param_2);
  if (iVar1 == 0) {
    return &DAT_e0a14827;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  return (undefined1 *)0x0;
}



void fn_004ca10c(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x20))();
  if (iVar1 == 0) {
    *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepEnd";
    *(code **)(param_1 + 0x24) = fn_004ca28c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x44) + 0x10))();
  *(code **)(param_1 + 0x24) = fn_004ca6f8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepStart";
  return;
}



uint fn_004ca6f8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r7;
  bool bVar9;
  uint local_20;
  int iStack_1c;
  
  iVar2 = fn_004c7eb8(*(undefined4 *)(param_1 + 0x48));
  if (iVar2 == 0) {
    piVar6 = *(int **)(param_1 + 0x44);
    iVar2 = (**(code **)(*piVar6 + 0x24))(piVar6);
    uVar7 = iVar2 + piVar6[5] * 500;
    puVar3 = (uint *)fn_004f0ce8();
    uVar4 = *puVar3;
    uVar5 = puVar3[1];
    lVar1 = (ulonglong)uVar7 * (ulonglong)uVar4;
    uVar8 = (uint)lVar1;
    local_20 = 0;
    iStack_1c = 0;
    fn_004f01f4(&local_20);
    bVar9 = CARRY4(local_20,uVar8);
    local_20 = local_20 + uVar8;
    iStack_1c = iStack_1c +
                uVar4 * ((int)uVar7 >> 0x1f) + uVar5 * uVar7 + (int)((ulonglong)lVar1 >> 0x20) +
                (uint)bVar9;
    *(uint *)(param_1 + 0x50) = local_20;
    *(int *)(param_1 + 0x54) = iStack_1c;
    fn_004c5ed0(*(undefined4 *)(param_1 + 0x44));
    (**(code **)(**(int **)(param_1 + 0x44) + 0x14))();
    *(code **)(param_1 + 0x24) = fn_004ca300;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepSend";
    return unaff_r7 & 0xff00;
  }
  *(code **)(param_1 + 0x24) = fn_004ca28c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepEnd";
  return param_4 & 0xff00;
}



uint fn_004ca300(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r9;
  int iVar9;
  uint unaff_r10;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  int local_24;
  
  iVar1 = fn_004c7eb8(*(undefined4 *)(param_1 + 0x48));
  if (iVar1 != 0) {
    *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepEnd";
    *(code **)(param_1 + 0x24) = fn_004ca28c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    unaff_r10 = param_4;
LAB_004ca5ac:
    return unaff_r10 & 0xff00;
  }
  local_30 = 0;
  uStack_2c = 0;
  fn_004f01f4(&local_30);
  if (uStack_2c < *(uint *)(param_1 + 0x54) ||
      *(uint *)(param_1 + 0x54) - uStack_2c < (uint)(local_30 <= *(uint *)(param_1 + 0x50))) {
    if (*(char *)(param_1 + 0x60) == '\0') {
      *(undefined1 *)(param_1 + 0x60) = 1;
      fn_004f01f4(param_1 + 0x68,local_30,*(uint *)(param_1 + 0x50) - local_30);
    }
    iVar1 = fn_004c5d5c(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 == 0) {
      puVar4 = (uint *)fn_004f0ce8();
      uVar5 = *puVar4;
      uVar6 = puVar4[1];
      uVar8 = (uint)((ulonglong)uVar5 * 0x14);
      local_28 = 0;
      local_24 = 0;
      fn_004f01f4(&local_28);
      *(uint *)(param_1 + 0x5c) =
           local_24 + uVar6 * 0x14 + (int)((ulonglong)uVar5 * 0x14 >> 0x20) +
           (uint)CARRY4(local_28,uVar8);
      *(uint *)(param_1 + 0x58) = local_28 + uVar8;
      *(code **)(param_1 + 0x24) = fn_004ca5f0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepWait";
      return unaff_r9 & 0xff00;
    }
    iVar1 = fn_004c59a4(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 == 0) {
      puVar4 = (uint *)fn_004f0ce8();
      uVar5 = *puVar4;
      uVar6 = puVar4[1];
      uVar8 = (uint)((ulonglong)uVar5 * 100);
      local_28 = 0;
      local_24 = 0;
      fn_004f01f4(&local_28);
      *(uint *)(param_1 + 0x58) = local_28 + uVar8;
      *(uint *)(param_1 + 0x5c) =
           local_24 + uVar6 * 100 + (int)((ulonglong)uVar5 * 100 >> 0x20) +
           (uint)CARRY4(local_28,uVar8);
      *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepWait";
      *(code **)(param_1 + 0x24) = fn_004ca5f0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return unaff_r9 & 0xff00;
    }
    if (*(char *)(param_1 + 0x61) == '\0') {
      *(undefined1 *)(param_1 + 0x61) = 1;
      iVar9 = *(int *)(param_1 + 0x44);
      local_28 = 0;
      local_24 = 0;
      fn_004f01f4(&local_28);
      iVar1 = local_28 - *(uint *)(param_1 + 0x68);
      iVar7 = local_24 - (*(int *)(param_1 + 0x6c) + (uint)(local_28 < *(uint *)(param_1 + 0x68)));
      puVar2 = (undefined4 *)fn_004f0ce8();
      uVar3 = fn_0011c134(iVar1,iVar7,*puVar2,puVar2[1]);
      *(undefined4 *)(iVar9 + 0x334) = uVar3;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x18))();
    if (iVar1 == 0) {
      puVar4 = (uint *)fn_004f0ce8();
      uVar5 = *puVar4;
      uVar6 = puVar4[1];
      uVar8 = (uint)((ulonglong)uVar5 * 100);
      local_28 = 0;
      local_24 = 0;
      fn_004f01f4(&local_28);
      *(uint *)(param_1 + 0x58) = local_28 + uVar8;
      *(uint *)(param_1 + 0x5c) =
           local_24 + uVar6 * 100 + (int)((ulonglong)uVar5 * 100 >> 0x20) +
           (uint)CARRY4(local_28,uVar8);
      *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepWait";
      *(code **)(param_1 + 0x24) = fn_004ca5f0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      goto LAB_004ca5ac;
    }
  }
  fn_004ca10c(param_1);
  return param_1 & 0xff00;
}



uint fn_004ca5f0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint unaff_r5;
  uint local_18;
  uint local_14;
  
  iVar1 = fn_004c7eb8(*(undefined4 *)(param_1 + 0x48));
  if (iVar1 != 0) {
    *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepEnd";
    *(code **)(param_1 + 0x24) = fn_004ca28c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00;
  }
  local_18 = 0;
  local_14 = 0;
  fn_004f01f4(&local_18);
  if (local_14 < *(uint *)(param_1 + 0x5c) ||
      *(uint *)(param_1 + 0x5c) - local_14 < (uint)(local_18 <= *(uint *)(param_1 + 0x58))) {
    return unaff_r5 & 0xff00 | 0x50004;
  }
  *(code **)(param_1 + 0x24) = fn_004ca300;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepSend";
  return *(uint *)(param_1 + 0x58) - local_18 & 0xff00;
}



uint fn_004ca28c(int param_1)

{
  int iVar1;
  uint unaff_r5;
  
  iVar1 = fn_004c57bc(*(undefined4 *)(param_1 + 0x44));
  if (iVar1 < 0) {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepComplete";
  *(code **)(param_1 + 0x24) = fn_004c9fdc;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r5 & 0xff00 | 6;
}


