#include "0050ef30_0050f758.h"



int fn_0050f758(int *param_1)

{
  int iVar1;
  int in_stack_00000004;
  
  param_1[0x12] = in_stack_00000004;
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (-1 < iVar1) {
    *(undefined1 *)(param_1[0x15] + 0x52) = 0;
    param_1[9] = (int)fn_0050f7e8;
    param_1[10] = 0;
    param_1[0xb] = (int)"ConnectStationJob::SendRelayConnectionRequest";
    iVar1 = 0;
  }
  return iVar1;
}



undefined1 *
fn_0050ef30(int *param_1,int param_2,undefined4 *param_3,int param_4,undefined1 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_3 + -0x40000 < (undefined4 *)0x3ff00000) {
    (**(code **)*param_3)(param_3,*(code **)*param_3,0x80000000,0);
    puVar1 = (undefined4 *)param_1[0x15];
    if (puVar1 + -0x40000 < (undefined4 *)0x3ff00000) {
      (**(code **)*puVar1)(puVar1,*(code **)*puVar1,0x80000000,0);
    }
    iVar2 = fn_006d88c8(param_1);
    if ((iVar2 != 0) && (iVar2 = fn_006d88c8(param_1), iVar2 != 5)) {
      (**(code **)(*param_1 + 0x14))(param_1,*(code **)(*param_1 + 0x14),0x80000,0);
      return &DAT_e0a14827;
    }
    if (param_2 != 0) {
      param_1[0x14] = param_2;
      fn_004ed050(param_2);
      param_1[0x15] = (int)param_3;
      fn_004ed810(param_3 + 1,param_4 + 8);
      *(undefined1 *)(param_1 + 0x16) = param_5;
      (**(code **)(*param_1 + 8))(param_1,1);
      *(undefined1 *)(param_1[0x15] + 0x52) = 1;
      param_1[9] = (int)fn_0050f57c;
      param_1[10] = 0;
      param_1[0xb] = (int)"ConnectStationJob::SendConnectionRequest";
      return (undefined1 *)0x0;
    }
  }
  return (undefined1 *)0xe0e14826;
}



uint fn_0050f57c(int param_1,uint param_2)

{
  longlong lVar1;
  byte *pbVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint extraout_r1;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  uint unaff_r5;
  uint uVar9;
  uint *puVar10;
  uint unaff_r7;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  pbVar2 = *(byte **)(param_1 + 0x50);
  if (pbVar2 != (byte *)0x0) {
    param_2 = (uint)pbVar2[0x10];
  }
  if (pbVar2 != (byte *)0x0 && param_2 != 0) {
    uVar5 = (uint)*pbVar2;
    if ((uVar5 != 2 && uVar5 != 3) && (uVar5 != 4)) {
      fn_004ed068();
      uVar5 = extraout_r1;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar3 = *(int *)(param_1 + 0x54);
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0x20) == '\x04')) {
      *(undefined1 *)(iVar3 + 0x20) = 6;
    }
    return uVar5 & 0xff00 | 1;
  }
  if (*(char *)(*(int *)(param_1 + 0x54) + 0x50) == '\0') {
    local_20 = 0;
    uStack_1c = 0;
    fn_004f01f4(&local_20);
    cVar6 = -2;
    fn_00169c20(local_20,uStack_1c,0xfe,0);
    *(char *)(*(int *)(param_1 + 0x54) + 0x50) = cVar6 + '\x02';
  }
  iVar3 = fn_0050f9a0(param_1);
  if (iVar3 == 0) {
    *(char **)(param_1 + 0x2c) = "ConnectStationJob::ConnectionFailed";
    *(code **)(param_1 + 0x24) = fn_0050f320;
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar5 = unaff_r5 & 0xff00;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54);
    if (0xb < *(byte *)(iVar3 + 0x14)) {
      uVar7 = *(undefined4 *)(DAT_008bf4d4 + 0xc);
      *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(DAT_008bf4d4 + 8);
      *(undefined4 *)(iVar3 + 0x5c) = uVar7;
    }
    *(undefined1 *)(param_1 + 0x59) = 0;
    iVar3 = DAT_008bf49c;
    uVar9 = *(uint *)(param_1 + 0x48);
    puVar10 = (uint *)(DAT_008bf49c + 0x30);
    puVar4 = (uint *)fn_004f0ce8();
    lVar1 = (ulonglong)uVar9 * (ulonglong)*puVar4;
    uVar5 = (uint)lVar1;
    uVar8 = *puVar10;
    *(uint *)(param_1 + 0x44) =
         *puVar4 * ((int)uVar9 >> 0x1f) + puVar4[1] * uVar9 + (int)((ulonglong)lVar1 >> 0x20) +
         *(int *)(iVar3 + 0x34) + (uint)CARRY4(uVar5,uVar8);
    *(uint *)(param_1 + 0x40) = uVar5 + uVar8;
    *(char **)(param_1 + 0x2c) = "ConnectStationJob::WaitRequestAck";
    *(code **)(param_1 + 0x24) = fn_0050f08c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar5 = unaff_r7 & 0xff00 | 5;
  }
  return uVar5;
}



uint fn_0050f320(int param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  uint unaff_r5;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if ((iVar1 != 0) && (param_2 = (uint)*(byte *)(iVar1 + 0x20), param_2 == 4)) {
    param_2 = 6;
    *(undefined1 *)(iVar1 + 0x20) = 6;
  }
  pbVar2 = *(byte **)(param_1 + 0x50);
  if (pbVar2 != (byte *)0x0) {
    param_2 = (uint)*pbVar2;
  }
  if ((pbVar2 != (byte *)0x0 && param_2 != 2) && (param_2 != 3 && param_2 != 4)) {
    fn_004ed098(pbVar2,&DAT_e0a14827);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  return unaff_r5 & 0xff00 | 1;
}



uint fn_0050f08c(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint unaff_r5;
  undefined8 uVar6;
  
  uVar6 = fn_006db318(DAT_008c0690,*(undefined4 *)(param_1 + 0x4c));
  uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(char **)(param_1 + 0x2c) = "ConnectStationJob::WaitForConnection";
    *(code **)(param_1 + 0x24) = fn_0050f384;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  pcVar2 = *(char **)(param_1 + 0x50);
  if (pcVar2 != (char *)0x0) {
    uVar4 = (uint)(byte)pcVar2[0x10];
  }
  if (pcVar2 == (char *)0x0 || uVar4 == 0) {
    unaff_r5 = *(uint *)(param_1 + 0x40);
    if (*(uint *)(param_1 + 0x44) < *(uint *)(DAT_008bf49c + 0x34) ||
        *(uint *)(DAT_008bf49c + 0x34) - *(uint *)(param_1 + 0x44) <
        (uint)(unaff_r5 <= *(uint *)(DAT_008bf49c + 0x30))) {
      if (pcVar2 != (char *)0x0) {
        cVar1 = *pcVar2;
        if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
          fn_004ed098(pcVar2,0xd941482d);
        }
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      fn_005196a0(DAT_008c0690,*(undefined4 *)(param_1 + 0x4c));
      *(undefined4 *)(param_1 + 0x4c) = 0;
      iVar3 = *(int *)(param_1 + 0x54);
      if (iVar3 == 0) goto LAB_0050f260;
      cVar1 = *(char *)(iVar3 + 0x20);
    }
    else {
      if (*(char *)(*(int *)(param_1 + 0x54) + 0x20) == '\x05') {
        fn_005196a0(DAT_008c0690,*(undefined4 *)(param_1 + 0x4c));
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(char **)(param_1 + 0x2c) = "ConnectStationJob::ConnectionSucceeded";
        *(code **)(param_1 + 0x24) = fn_0050f4d8;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return unaff_r5 & 0xff00;
      }
      if (*(char *)(param_1 + 0x59) == '\0') {
        return param_3 & 0xff00 | 5;
      }
      if (pcVar2 != (char *)0x0) {
        cVar1 = *pcVar2;
        if ((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x04') {
          if (*(char *)(param_1 + 0x59) == '\x01') {
            fn_004ed098(pcVar2,0xd9614882);
          }
          else {
            if (*(char *)(param_1 + 0x59) == '\x02') {
              uVar5 = 0xd8a14883;
            }
            else {
              uVar5 = 0xd9614881;
            }
            fn_004ed098(pcVar2,uVar5);
          }
        }
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      fn_005196a0(DAT_008c0690,*(undefined4 *)(param_1 + 0x4c));
      *(undefined4 *)(param_1 + 0x4c) = 0;
      iVar3 = *(int *)(param_1 + 0x54);
      if (iVar3 == 0) goto LAB_0050f260;
      cVar1 = *(char *)(iVar3 + 0x20);
    }
  }
  else {
    cVar1 = *pcVar2;
    if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
      fn_004ed068();
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    fn_005196a0(DAT_008c0690,*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
    iVar3 = *(int *)(param_1 + 0x54);
    if (iVar3 == 0) goto LAB_0050f260;
    cVar1 = *(char *)(iVar3 + 0x20);
  }
  if (cVar1 == '\x04') {
    *(undefined1 *)(iVar3 + 0x20) = 6;
  }
LAB_0050f260:
  return unaff_r5 & 0xff00 | 1;
}



uint fn_0050f384(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(char *)(*(int *)(param_1 + 0x54) + 0x20) == '\x05') {
    *(code **)(param_1 + 0x24) = fn_0050f4d8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "ConnectStationJob::ConnectionSucceeded";
    return param_2 & 0xff00;
  }
  pbVar2 = *(byte **)(param_1 + 0x50);
  if (pbVar2 != (byte *)0x0) {
    param_3 = (uint)pbVar2[0x10];
  }
  if (pbVar2 == (byte *)0x0 || param_3 == 0) {
    uVar6 = *(uint *)(param_1 + 0x40);
    uVar7 = *(uint *)(param_1 + 0x44);
    uVar5 = *(uint *)(DAT_008bf49c + 0x30);
    uVar4 = *(uint *)(DAT_008bf49c + 0x34);
    if (uVar4 <= uVar7 && (uint)(uVar6 <= uVar5) <= uVar4 - uVar7) {
      return param_2 & 0xff00 | 5;
    }
    if (pbVar2 != (byte *)0x0) {
      param_2 = (uint)*pbVar2;
      if ((param_2 != 2 && param_2 != 3) && (param_2 != 4)) {
        fn_004ed098(pbVar2,0xd941482d,uVar4 - (uVar7 + (uVar6 > uVar5)),uVar5 - uVar6);
        param_2 = extraout_r1_00;
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x54);
    if (iVar3 == 0) goto LAB_0050f458;
    cVar1 = *(char *)(iVar3 + 0x20);
  }
  else {
    param_2 = (uint)*pbVar2;
    if ((param_2 != 2 && param_2 != 3) && (param_2 != 4)) {
      fn_004ed068();
      param_2 = extraout_r1;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar3 = *(int *)(param_1 + 0x54);
    if (iVar3 == 0) goto LAB_0050f458;
    cVar1 = *(char *)(iVar3 + 0x20);
  }
  if (cVar1 == '\x04') {
    *(undefined1 *)(iVar3 + 0x20) = 6;
  }
LAB_0050f458:
  return param_2 & 0xff00 | 1;
}



uint fn_0050f4d8(int param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  uint extraout_r1;
  uint unaff_r5;
  
  pcVar2 = *(char **)(param_1 + 0x50);
  if (pcVar2 != (char *)0x0) {
    param_2 = (uint)(byte)pcVar2[0x10];
  }
  if (pcVar2 != (char *)0x0 && param_2 != 0) {
    cVar1 = *pcVar2;
    if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
      pcVar2 = (char *)fn_004ed068();
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    return (uint)pcVar2 & 0xff00 | 1;
  }
  if (*(byte *)(*(int *)(param_1 + 0x54) + 0x14) < 0xc) {
    fn_0051da28(DAT_008bf4d4);
    param_2 = extraout_r1;
  }
  pbVar3 = *(byte **)(param_1 + 0x50);
  if (pbVar3 != (byte *)0x0) {
    param_2 = (uint)*pbVar3;
  }
  if ((pbVar3 != (byte *)0x0 && param_2 != 2) && (param_2 != 3 && param_2 != 4)) {
    fn_004ed0e4(pbVar3,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  return unaff_r5 & 0xff00 | 1;
}


