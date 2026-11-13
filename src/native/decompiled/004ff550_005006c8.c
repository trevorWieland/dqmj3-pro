#include "004ff550_005006c8.h"



undefined4 fn_005006c8(int *param_1)

{
  *(int **)(*(int *)(DAT_008bf4e0 + 0x4c) + 0x14) = param_1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0xfd;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  (**(code **)(*param_1 + 8))(param_1,1);
  param_1[9] = (int)&LAB_004ff9f8;
  param_1[10] = 0;
  param_1[0xb] = (int)"ProcessJoinRequestJob::InitialStep";
  return 1;
}



void fn_00500648(int param_1)

{
  uint uVar1;
  
  if (DAT_008c0690 != 0) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      fn_005196a0();
    }
    uVar1 = 0;
    do {
      fn_005196a0(DAT_008c0690,*(undefined4 *)(param_1 + uVar1 * 4 + 0x50));
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 3;
  *(undefined1 *)(param_1 + 0x78) = 0xfd;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



void fn_00500560(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x78) == param_2) {
    *(undefined1 *)(param_1 + 0x7b) = 1;
  }
  return;
}



uint fn_00500268(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r6;
  uint unaff_r7;
  undefined1 auStack_70 [80];
  
  uVar3 = 0;
  *(undefined1 *)(param_1 + 0x79) = 1;
  iVar1 = fn_0050b144(DAT_008bf4cc,param_1 + 0x68,0x80000000,0);
  if (iVar1 == 0) {
LAB_005003a4:
    *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::InitialStep";
    *(undefined1 **)(param_1 + 0x24) = &LAB_004ff9f8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return uVar3 & 0xff00;
  }
  if (*(char *)(iVar1 + 0x20) != '\x05') {
    *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::InitialStep";
    *(undefined1 **)(param_1 + 0x24) = &LAB_004ff9f8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r7 & 0xff00;
  }
  iVar2 = fn_005055c4(DAT_008bf4e0,iVar1);
  if (iVar2 != 0xff) {
    *(char *)(param_1 + 0x7a) = (char)iVar2;
    *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::SendDenyingJoinResponse";
    *(code **)(param_1 + 0x24) = fn_00500574;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return uVar3 & 0xff00;
  }
  if (*(int *)(DAT_008bf4e0 + 0x3c) != 0) {
    iVar1 = fn_00519260(DAT_008c0674,iVar1,auStack_70);
    if (iVar1 < 0) goto LAB_005003a4;
    iVar1 = (**(code **)(DAT_008bf4e0 + 0x3c))(auStack_70);
    if ((iVar1 == 0) || ((DAT_008bf4e8 != 0 && (iVar1 = fn_006d93cc(DAT_008bf4e8,0), iVar1 == 0))))
    {
      *(undefined1 *)(param_1 + 0x7a) = 1;
      if (DAT_008ee140 == -1) {
        DAT_008ee140 = '\x01';
      }
      else {
        DAT_008ee140 = DAT_008ee140 + '\x01';
      }
      *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::SendDenyingJoinResponse";
      *(code **)(param_1 + 0x24) = fn_00500574;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return uVar3 & 0xff00;
    }
  }
  *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::SendJoinResponse";
  *(code **)(param_1 + 0x24) = fn_004ffc74;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r6 & 0xff00;
}



uint fn_00500574(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint unaff_r5;
  
  if (*(int *)(DAT_008bf4cc + 0xa4) == 0) {
    *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::InitialStep";
    *(undefined1 **)(param_1 + 0x24) = &LAB_004ff9f8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00;
  }
  fn_004f6c28(*(undefined4 *)(DAT_008bf4e0 + 0x4c),param_1 + 0x68,*(undefined1 *)(param_1 + 0x7a));
  iVar1 = fn_0050b144(DAT_008bf4cc,param_1 + 0x68);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x20) = 6;
  }
  *(undefined1 **)(param_1 + 0x24) = &LAB_004ff9f8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::InitialStep";
  return unaff_r5 & 0xff00;
}



uint fn_004ffb1c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r7;
  uint in_r12;
  
  uVar3 = 0;
  uVar2 = 0;
  do {
    uVar1 = fn_006db318(DAT_008c0690,*(undefined4 *)(param_1 + uVar2 * 4 + 0x50));
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 | uVar1;
  } while (uVar2 < 3);
  if (uVar3 == 0) {
    *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::JoinSucceeded";
    *(code **)(param_1 + 0x24) = fn_004ffa8c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r7 & 0xff00;
  }
  if ((*(uint *)(DAT_008bf49c + 0x34) <= *(uint *)(param_1 + 0x44) &&
       (uint)(*(uint *)(param_1 + 0x40) <= *(uint *)(DAT_008bf49c + 0x30)) <=
       *(uint *)(DAT_008bf49c + 0x34) - *(uint *)(param_1 + 0x44)) &&
     (*(char *)(param_1 + 0x7b) == '\0')) {
    return in_r12 & 0xff00 | 5;
  }
  uVar2 = 0;
  do {
    iVar4 = param_1 + uVar2 * 4;
    fn_005196a0(DAT_008c0690,*(undefined4 *)(iVar4 + 0x50));
    uVar2 = uVar2 + 1;
    *(undefined4 *)(iVar4 + 0x50) = 0;
  } while (uVar2 < 3);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::InitialStep";
  *(undefined1 **)(param_1 + 0x24) = &LAB_004ff9f8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r7 & 0xff00;
}



uint fn_004ffa8c(int param_1)

{
  int iVar1;
  uint unaff_r5;
  
  iVar1 = DAT_008bf4e0;
  if (*(char *)(param_1 + 0x7b) == '\0') {
    *(short *)(DAT_008bf4e0 + 0x5c) = *(short *)(DAT_008bf4e0 + 0x5c) + 1;
    fn_004f5004(*(undefined4 *)(iVar1 + 0x4c),1);
  }
  *(undefined1 **)(param_1 + 0x24) = &LAB_004ff9f8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "ProcessJoinRequestJob::InitialStep";
  return unaff_r5 & 0xff00;
}



void fn_004ff9b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &DAT_00856ee4;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 1000;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  return;
}



undefined4 fn_004ff7e4(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  uint local_20;
  int iStack_1c;
  
  if ((char)param_1[0x13] == '\0') {
    piVar5 = *(int **)(DAT_008bf4e0 + 0x14);
    if ((char)piVar5[0x29] != '\0') {
      fn_004feb10(piVar5);
      (**(code **)(*piVar5 + 8))(piVar5,0);
    }
    piVar5 = *(int **)(DAT_008bf4e0 + 0x20);
    uVar2 = DAT_008bf4e0;
    if (piVar5 != (int *)0x0) {
      uVar2 = (uint)*(byte *)((int)piVar5 + 0x6f);
    }
    if (piVar5 != (int *)0x0 && uVar2 != 0) {
      fn_00502890(piVar5);
      (**(code **)(*piVar5 + 8))(piVar5,0);
    }
    uVar6 = *(undefined4 *)(DAT_008bf4e0 + 0xc);
    iVar3 = fn_006d88c8(uVar6);
    if ((iVar3 != 4) && (iVar3 = fn_006d88c8(uVar6), iVar3 != 1)) {
      piVar5 = *(int **)(DAT_008bf4e0 + 8);
      iVar3 = fn_006d897c(piVar5);
      if (iVar3 == 0) {
        local_20 = 0;
        iStack_1c = 0;
        fn_004f01f4(&local_20);
        uVar7 = param_1[0x12];
        puVar4 = (uint *)fn_004f0ce8();
        lVar1 = (ulonglong)uVar7 * (ulonglong)*puVar4;
        uVar2 = (uint)lVar1;
        param_1[0x11] =
             *puVar4 * ((int)uVar7 >> 0x1f) + puVar4[1] * uVar7 + (int)((ulonglong)lVar1 >> 0x20) +
             iStack_1c + (uint)CARRY4(uVar2,local_20);
        param_1[0x10] = uVar2 + local_20;
        *(undefined1 *)(param_1 + 0x13) = 1;
        fn_00505a04(DAT_008bf4e0,3);
        (**(code **)(*param_1 + 8))(param_1,1);
        param_1[9] = (int)fn_004ff730;
        param_1[10] = 0;
        param_1[0xb] = (int)"ProcessDestroyMeshJob::SendDestroyResponse";
        return 1;
      }
      fn_004f3498(piVar5,0xd8a148e1);
      (**(code **)(*piVar5 + 8))(piVar5,1);
      *(undefined1 *)(param_1 + 0x13) = 1;
      return 0;
    }
  }
  return 0;
}



ulonglong fn_004ff730(int param_1)

{
  int iVar1;
  undefined4 unaff_r5;
  
  if (((0xb < *(byte *)(DAT_008bf4e0 + 0x62)) ||
      (iVar1 = fn_004f5e18(*(undefined4 *)(DAT_008bf4e0 + 0x4c)), iVar1 != 0)) ||
     (iVar1 = *(uint *)(DAT_008bf49c + 0x30) - *(uint *)(param_1 + 0x40),
     *(uint *)(param_1 + 0x44) < *(uint *)(DAT_008bf49c + 0x34) ||
     *(uint *)(DAT_008bf49c + 0x34) - *(uint *)(param_1 + 0x44) <
     (uint)(*(uint *)(param_1 + 0x40) <= *(uint *)(DAT_008bf49c + 0x30)))) {
    iVar1 = 0;
    *(undefined1 **)(param_1 + 0x24) = &LAB_004ff6a8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "ProcessDestroyMeshJob::CleanupMesh";
  }
  return CONCAT44(iVar1,unaff_r5) & 0xffffffff0000ff00 | 5;
}



void fn_004ff550(int param_1)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = DAT_008bf4e8;
  local_20 = *(undefined4 *)(DAT_008bf4e8 + 0x74);
  uStack_1c = *(undefined4 *)(DAT_008bf4e8 + 0x78);
  iVar2 = fn_006d8ea0(param_1,&local_20);
  if (iVar2 == 0) {
    fn_00507214(iVar1,&local_20);
    fn_00506fdc(iVar1,local_20,uStack_1c);
    fn_004ff380(param_1,&local_20,1);
  }
  local_28 = *(int *)(iVar1 + 0x7c);
  local_24 = *(int *)(iVar1 + 0x80);
  iVar2 = fn_006d8ea0(param_1,&local_28);
  if ((iVar2 == 0) && (iVar2 = *(int *)(param_1 + 0xc), iVar2 != param_1 + 8)) {
    do {
      if ((*(int *)(iVar2 + 0xc) == local_28) && (*(int *)(iVar2 + 0x10) == local_24)) {
        if (*(char *)(iVar2 + 10) != '\0') {
          fn_00507214(iVar1,&local_28);
          fn_00506fdc(iVar1,local_28,local_24);
          fn_004ff380(param_1,&local_28,1);
        }
        break;
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != param_1 + 8);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != param_1 + 8) {
    do {
      if (*(char *)(iVar2 + 0xb) == '\0') {
        fn_00507214(iVar1,iVar2 + 0xc);
        fn_00506fdc(iVar1,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10));
        *(undefined1 *)(iVar2 + 0xb) = 1;
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != param_1 + 8);
  }
  return;
}


