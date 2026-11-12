#include "0051493c_00515384.h"



undefined1 * fn_00514f94(int *param_1,int param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char local_20 [8];
  uint local_18;
  int iStack_14;
  
  if (param_2 == 0) {
    puVar2 = (undefined1 *)0xe0e14826;
  }
  else if (*(char *)(param_2 + 0x20) == '\x05') {
    param_1[0x13] = param_2;
    *(undefined1 *)(param_1 + 0x17) = 0;
    local_18 = 0;
    iStack_14 = 0;
    fn_004f01f4(&local_18);
    uVar8 = param_1[0x12];
    puVar3 = (uint *)fn_004f0ce8();
    uVar6 = *puVar3;
    uVar7 = puVar3[1];
    lVar1 = (ulonglong)uVar8 * (ulonglong)uVar6;
    uVar4 = (uint)lVar1;
    param_1[0x10] = uVar4 + local_18;
    param_1[0x11] =
         uVar6 * ((int)uVar8 >> 0x1f) + uVar7 * uVar8 + (int)((ulonglong)lVar1 >> 0x20) + iStack_14
         + (uint)CARRY4(uVar4,local_18);
    (**(code **)(*param_1 + 8))(param_1,1);
    param_1[9] = (int)fn_00515384;
    param_1[10] = 0;
    param_1[0xb] = (int)"DisconnectStationJob::SendDisconnectionRequest";
    if ((((*(int *)(DAT_008bf4d4 + 100) - 0x100000U < 0x3ff00000) &&
         (*(int *)(DAT_008bf4cc + 0xa4) - 0x100000U < 0x3ff00000)) &&
        (iVar5 = fn_006da484(*(int *)(DAT_008bf4d4 + 100),
                              *(undefined1 *)(*(int *)(DAT_008bf4cc + 0xa4) + 0x14),
                              *(undefined1 *)(param_1[0x13] + 0x14),local_20), -1 < iVar5)) &&
       (*(char *)(param_1[0x13] + 0x14) != local_20[0])) {
      param_1[0xb] = (int)"DisconnectStationJob::CutRouteOfRelayConnection";
      param_1[9] = (int)fn_005154d8;
      param_1[10] = 0;
    }
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = &DAT_e0a14827;
  }
  return puVar2;
}



uint fn_00515384(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint unaff_r7;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  if (*(byte *)(iVar2 + 0x14) < 0xc) {
    fn_0050d3a4(*(undefined4 *)(iVar2 + 0x28),*(byte *)(iVar2 + 0x14),0);
  }
  else {
    iVar2 = fn_006d6e30(iVar2 + 4);
    if (iVar2 == 0) {
      *(char **)(param_1 + 0x2c) = "DisconnectStationJob::DisconnectionSucceeded";
      *(code **)(param_1 + 0x24) = fn_005152a8;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return param_4 & 0xff00;
    }
    fn_0050d40c(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x28),*(int *)(param_1 + 0x4c) + 4);
  }
  iVar2 = DAT_008bf49c;
  uVar8 = *(uint *)(param_1 + 0x58);
  puVar9 = (uint *)(DAT_008bf49c + 0x30);
  puVar3 = (uint *)fn_004f0ce8();
  uVar7 = *puVar3;
  uVar5 = puVar3[1];
  lVar1 = (ulonglong)uVar8 * (ulonglong)uVar7;
  uVar4 = (uint)lVar1;
  uVar6 = *puVar9;
  iVar2 = *(int *)(iVar2 + 0x34);
  *(uint *)(param_1 + 0x50) = uVar4 + uVar6;
  *(uint *)(param_1 + 0x54) =
       uVar7 * ((int)uVar8 >> 0x1f) + uVar5 * uVar8 + (int)((ulonglong)lVar1 >> 0x20) + iVar2 +
       (uint)CARRY4(uVar4,uVar6);
  *(undefined1 *)(param_1 + 0x5c) = 1;
  *(char **)(param_1 + 0x2c) = "DisconnectStationJob::WaitForDisconnection";
  *(code **)(param_1 + 0x24) = fn_00515140;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r7 & 0xff00 | 5;
}



uint fn_00515140(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r5;
  uint uVar8;
  uint *puVar9;
  uint unaff_r7;
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    if (*(uint *)(DAT_008bf49c + 0x34) <= *(uint *)(param_1 + 0x44) &&
        (uint)(*(uint *)(param_1 + 0x40) <= *(uint *)(DAT_008bf49c + 0x30)) <=
        *(uint *)(DAT_008bf49c + 0x34) - *(uint *)(param_1 + 0x44)) {
      if ((*(byte *)(*(int *)(param_1 + 0x4c) + 0x14) < 0xc) ||
         (iVar2 = fn_006d6e30(*(int *)(param_1 + 0x4c) + 4), iVar2 != 0)) {
        if (*(uint *)(param_1 + 0x54) < *(uint *)(DAT_008bf49c + 0x34) ||
            *(uint *)(DAT_008bf49c + 0x34) - *(uint *)(param_1 + 0x54) <
            (uint)(*(uint *)(param_1 + 0x50) <= *(uint *)(DAT_008bf49c + 0x30))) {
          iVar2 = *(int *)(param_1 + 0x4c);
          if (*(byte *)(iVar2 + 0x14) < 0xc) {
            fn_0050d3a4(*(undefined4 *)(iVar2 + 0x28),*(byte *)(iVar2 + 0x14),0);
          }
          else {
            fn_0050d40c(*(undefined4 *)(iVar2 + 0x28),iVar2 + 4);
          }
          iVar2 = DAT_008bf49c;
          uVar8 = *(uint *)(param_1 + 0x58);
          puVar9 = (uint *)(DAT_008bf49c + 0x30);
          puVar3 = (uint *)fn_004f0ce8();
          uVar6 = *puVar3;
          uVar5 = puVar3[1];
          lVar1 = (ulonglong)uVar8 * (ulonglong)uVar6;
          uVar4 = (uint)lVar1;
          uVar7 = *puVar9;
          iVar2 = *(int *)(iVar2 + 0x34);
          *(uint *)(param_1 + 0x50) = uVar7 + uVar4;
          *(uint *)(param_1 + 0x54) =
               iVar2 + uVar6 * ((int)uVar8 >> 0x1f) +
                       uVar5 * uVar8 + (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar7,uVar4);
        }
        return unaff_r7 & 0xff00 | 5;
      }
    }
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x20) = 6;
  *(char **)(param_1 + 0x2c) = "DisconnectStationJob::DisconnectionSucceeded";
  *(code **)(param_1 + 0x24) = fn_005152a8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r5 & 0xff00;
}



undefined1 * fn_00514f3c(int param_1)

{
  if ((*(int *)(param_1 + 0xc) - 0x100000U < 0x3ff00000) &&
     (*(int *)(param_1 + 0x10) - 0x100000U < 0x3ff00000)) {
    fn_005185a4(*(int *)(param_1 + 0xc));
    fn_005185a4(*(undefined4 *)(param_1 + 0x10));
    return (undefined1 *)0x0;
  }
  return &DAT_e0a14827;
}



void fn_00514f00(int param_1)

{
  if (*(int *)(param_1 + 0xc) - 0x100000U < 0x3ff00000) {
    fn_00518558();
  }
  if (*(int *)(param_1 + 0x10) - 0x100000U < 0x3ff00000) {
    fn_00518558();
    return;
  }
  return;
}



void fn_00514ed4(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00514ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x40) + 0x28))();
  return;
}



void fn_00514ec0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00514ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 0x40) + 0x28))();
  return;
}



void fn_00514e84(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) - 0x100000U < 0x3ff00000) {
    fn_0050eec4();
  }
  if (0x3fefffff < *(int *)(param_1 + 0xc) - 0x100000U) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x5c);
  if (iVar1 - 1U < 0xfe) {
    DAT_008ee069 = (undefined1)iVar1;
  }
  else {
    DAT_008ee069 = 0xff;
  }
  return;
}



int fn_00514c74(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0085723c;
  iVar1 = fn_00657488(param_1 + 0x11);
  return iVar1 + -0x44;
}



void fn_00514c48(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00518610();
  puVar1[0x20] = 0;
  *puVar1 = &DAT_0085715c;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  return;
}



void fn_00514c1c(int param_1)

{
  fn_00518378();
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



int fn_00514a58(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_1c;
  
  iVar6 = param_1 + 0xc;
  if (*(int *)(param_1 + 0x18) < 1) {
    iVar1 = fn_0050922c(iVar6);
    if (0x3fefffff < iVar1 - 0x100000U) {
      return -0x279eb7d4;
    }
  }
  else {
    iVar1 = fn_0050935c(iVar6,0);
  }
  if (*(int *)(param_1 + 100) - 0x100000U < 0x3ff00000) {
    iVar2 = fn_0050c0f4(*(int *)(param_1 + 100),iVar1);
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x80) + 8))(*(int **)(param_1 + 0x80),iVar1);
  }
  if ((iVar2 < 0) || (iVar3 = fn_00518420(param_1), iVar2 = -0x2e9eb7d8, iVar3 != 0)) {
    return iVar2;
  }
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  uVar4 = *(uint *)(iVar1 + 0x5b8);
  uVar5 = *(uint *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = uVar4 + uVar5;
  *(uint *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + (uint)CARRY4(uVar4,uVar5);
  iVar2 = fn_006d8a04(iVar1);
  if (iVar2 == 0) {
    return -0x269eb7de;
  }
  if (DAT_008c0638 - 0x100000U < 0x3ff00000) {
    iVar2 = fn_004ede84(DAT_008c0638,iVar1 + 0x5d8,iVar1,*(undefined4 *)(iVar1 + 0x5b8),&local_1c);
    if (iVar2 == 0) {
      if (DAT_008ee078 == -1) {
        return -0x269eb7de;
      }
      DAT_008ee078 = DAT_008ee078 + 1;
      return -0x269eb7de;
    }
    *(undefined4 *)(iVar1 + 0x5b8) = local_1c;
  }
  if (DAT_008c0678 - 0x100000U < 0x3ff00000) {
    fn_0051015c(DAT_008c0678,iVar1);
  }
  fn_00509218(iVar6);
  return 0;
}



undefined1 *
fn_0051493c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x80) - 0x100000U < 0x3ff00000) {
    puVar1 = &DAT_e0a14821;
  }
  else if (param_2 - 0x100000U < 0x3ff00000) {
    if (DAT_008bf4a0 != 0) {
      uVar2 = fn_004eea84(DAT_008bf4a0,1);
      fn_004f161c(uVar2,(char *)&DAT_00514a20);
    }
    puVar1 = (undefined1 *)
             fn_0051845c(param_1,(char *)&DAT_00514a40,param_4,param_3,param_5,param_6,1);
    if (-1 < (int)puVar1) {
      if (*(int *)(param_1 + 100) - 0x100000U < 0x3ff00000) {
        *(int *)(*(int *)(param_1 + 100) + 0x14) = param_2;
      }
      *(undefined4 *)(param_1 + 0x8c) = 0;
      puVar1 = (undefined1 *)0x0;
      *(int *)(param_1 + 0x80) = param_2;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
  }
  else {
    puVar1 = (undefined1 *)0xe0e14826;
  }
  return puVar1;
}


