#include "004ccd94_004cef10.h"



short fn_004cef10(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_48 [12];
  short local_3c;
  undefined1 local_22;
  
  iVar2 = DAT_008c06a0;
  iVar6 = *(int *)(DAT_008bf4e0 + 0x14);
  if (iVar6 != 0) {
    if (*(char *)(iVar6 + 0xa4) == '\0') {
      piVar5 = (int *)(DAT_008c06a0 + 0x58);
      iVar6 = fn_006da264(DAT_008c06a0 + 0x5c);
      sVar1 = 0;
      if (iVar6 != 0) {
        pcVar3 = *(code **)(*piVar5 + 0x20);
        (*pcVar3)(piVar5,pcVar3,0x10000,0);
        iVar6 = fn_004d5aac(iVar2 + 0x5c);
        if (iVar6 == 0) {
          iVar6 = fn_004d4ef0(iVar2 + 0x84);
          sVar1 = 0;
          if ((iVar6 != 0) && (sVar1 = *(short *)(iVar2 + 0x90), *(short *)(iVar2 + 0x68) == sVar1))
          {
            return 0;
          }
        }
        else {
          sVar1 = *(short *)(iVar2 + 0x68);
        }
      }
      return sVar1;
    }
    (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),0x10000,0);
    uVar7 = *(uint *)(iVar6 + 0x88);
    uVar4 = 0;
    if (uVar7 != 0) {
      do {
        if ((uVar4 < *(uint *)(iVar6 + 0x88)) &&
           (piVar5 = (int *)(*(int *)(iVar6 + 0x70) + uVar4 * 0x54), piVar5 != (int *)0x0)) {
          iVar2 = fn_006da264(piVar5 + 1,param_2);
          if (iVar2 != 0) {
            (**(code **)(*piVar5 + 0x20))(piVar5,*(code **)(*piVar5 + 0x20),0x10000,0);
            iVar2 = fn_004d4edc(piVar5 + 1);
            if (iVar2 == 0) {
              return (short)piVar5[0xe];
            }
            return 0;
          }
          if (*(char *)((int)param_2 + 0x26) != '\0') {
            iVar2 = fn_004d4edc(piVar5 + 1);
            if (iVar2 == 0) {
              fn_0050d0fc(auStack_48,piVar5 + 1);
              local_22 = 1;
              local_3c = (short)piVar5[0xe];
              iVar2 = fn_006da264(auStack_48,param_2);
              if (iVar2 != 0) {
                (**(code **)(*piVar5 + 0x20))(piVar5,*(code **)(*piVar5 + 0x20),0x10000,0);
                sVar1 = local_3c;
                fn_0050d178(auStack_48);
                return sVar1;
              }
            }
            else {
              fn_0050d0fc(auStack_48,piVar5 + 1);
              local_22 = 1;
              local_3c = (short)param_2[3];
              iVar2 = fn_006da264(auStack_48,param_2);
              if (iVar2 != 0) {
                (**(code **)(*piVar5 + 0x20))(piVar5,*(code **)(*piVar5 + 0x20),0x10000,0);
                fn_0050d178(auStack_48);
                return 0;
              }
            }
            fn_0050d178(auStack_48);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar7);
    }
    *(undefined1 *)(param_1 + 0x4c4) = 1;
  }
  return 0;
}



void fn_004cd750(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  code *pcVar4;
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [80];
  undefined4 local_54;
  undefined1 auStack_50 [40];
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = DAT_008c06a0;
  fn_00124e48(auStack_a8);
  iVar2 = fn_006db908(uVar1,param_2,auStack_a8);
  if (iVar2 < 0) {
LAB_004cd7b0:
    fn_0051811c(auStack_a8);
    return;
  }
  iVar2 = 1;
  pcVar4 = *(code **)(DAT_008bf4d4 + 0x78);
  if (pcVar4 != (code *)0x0) {
    iVar3 = fn_0051c788(param_2,&local_54);
    if (iVar3 < 0) goto LAB_004cd7b0;
    if (*(char *)(DAT_008bf4d4 + 0x80) != '\0') {
      local_28 = 0;
      local_24 = 0;
      iVar3 = fn_006d9d3c(*(undefined4 *)(DAT_008bf4d4 + 0x7c),&local_28,local_54);
      if ((-1 < iVar3) && (iVar3 = (*pcVar4)(&local_28), iVar3 == 1)) {
        iVar2 = 0;
      }
    }
  }
  fn_0013d5c4(auStack_50);
  fn_0050d1a0(auStack_50,auStack_a4);
  fn_0050d060(auStack_50,param_2 + 4);
  fn_004c7e40(*(undefined4 *)(DAT_008bf4f4 + 0x20),auStack_50,iVar2);
  if ((iVar2 != 0) && (iVar2 = fn_006d9268(DAT_008bf4e0,extraout_r1,0x8000,0), iVar2 == 0)) {
    fn_004c80ac(*(undefined4 *)(DAT_008bf4f4 + 0x20),auStack_50);
  }
  fn_0050d178(auStack_50);
  fn_0051811c(auStack_a8);
  return;
}



uint fn_004ccd94(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_r5;
  uint uVar10;
  uint uVar11;
  uint unaff_r7;
  int iVar12;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  cVar1 = *(char *)(param_1 + 0xe0);
  if (cVar1 == '\x01') {
    uVar8 = *(uint *)(DAT_008bf4f4 + 0x34);
    iVar3 = fn_004d4edc(DAT_008c06a0 + 8);
    if (iVar3 != 0) {
      uVar8 = uVar8 + *(int *)(DAT_008bf4f4 + 0x38);
    }
    if ((*(char *)(*(int *)(param_1 + 0x54) + 0x14) == -2) ||
       (iVar3 = fn_004d4edc(param_1 + 0x88), iVar3 != 0)) {
      uVar8 = uVar8 + *(int *)(DAT_008bf4f4 + 0x38);
    }
    puVar5 = (uint *)fn_004f0ce8();
    uVar9 = *puVar5;
    uVar10 = puVar5[1];
    lVar2 = (ulonglong)uVar8 * (ulonglong)uVar9;
    uVar11 = (uint)lVar2;
    local_38 = 0;
    local_34 = 0;
    fn_004f01f4(&local_38);
    *(uint *)(param_1 + 0xd8) = local_38 + uVar11;
    *(uint *)(param_1 + 0xdc) =
         local_34 + uVar9 * ((int)uVar8 >> 0x1f) + uVar10 * uVar8 + (int)((ulonglong)lVar2 >> 0x20)
         + (uint)CARRY4(local_38,uVar11);
    *(char **)(param_1 + 0x2c) = "NexConnectStationJob::waitForNatTraversalCompleted";
    uVar9 = 0;
    *(code **)(param_1 + 0x24) = fn_004cd128;
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar8 = unaff_r7 & 0xff00;
  }
  else {
    if ((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') {
      *(char **)(param_1 + 0x2c) = "NexConnectStationJob::waitForNatTraversalCompleted";
      *(code **)(param_1 + 0x24) = fn_004cd128;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return param_4 & 0xff00;
    }
    if (*(char *)(*(int *)(param_1 + 0x54) + 0x14) == -2) {
      local_38 = 0;
      local_34 = 0;
      fn_004f01f4(&local_38);
      if (*(uint *)(param_1 + 0xdc) <= local_34 &&
          (uint)(local_38 <= *(uint *)(param_1 + 0xd8)) <= *(uint *)(param_1 + 0xdc) - local_34) {
        if (*(int *)(param_1 + 0xf8) < 1) {
          fn_004ed098(*(undefined4 *)(param_1 + 0x50),0xd8a148f2,0x8000,0);
          if ((*(char *)(param_1 + 0x82) == '\0') &&
             (iVar3 = fn_004cc270(*(int *)(*(int *)(DAT_008bf4f4 + 0x20) + 0xa0) + 0x120,
                                   param_1 + 0x5c), iVar3 != 0)) {
            local_30 = 0;
            local_2c = 0;
            fn_004f01f4(&local_30);
            iVar4 = local_30 - *(uint *)(iVar3 + 0x30);
            iVar12 = local_2c -
                     (*(int *)(iVar3 + 0x34) + (uint)(local_30 < *(uint *)(iVar3 + 0x30)));
            puVar6 = (undefined4 *)fn_004f0ce8();
            uVar7 = fn_0011c134(iVar4,iVar12,*puVar6,puVar6[1]);
            *(undefined4 *)(iVar3 + 0x38) = uVar7;
          }
          fn_004c8c60(*(undefined4 *)(DAT_008bf4f4 + 0x20),param_1 + 0x5c,0xd8a148f2,0);
          fn_004c7e40(*(undefined4 *)(DAT_008bf4f4 + 0x20),param_1 + 0x5c,1);
          *(code **)(param_1 + 0x24) = fn_0050f320;
          *(undefined4 *)(param_1 + 0x28) = 0;
          *(char **)(param_1 + 0x2c) = "ConnectStationJob::ConnectionFailed";
          return 0;
        }
        iVar3 = *(int *)(param_1 + 0xf8) + -1;
        *(int *)(param_1 + 0xf8) = iVar3;
        if ((DAT_008bf4e0 == 0) || (iVar4 = fn_006d92b8(), iVar4 == 0)) {
          DAT_008edd60 = '\x01' - (char)iVar3;
        }
        puVar5 = (uint *)fn_004f0ce8();
        uVar8 = *puVar5;
        uVar9 = puVar5[1];
        uVar10 = (uint)((ulonglong)uVar8 * 15000);
        local_30 = 0;
        local_2c = 0;
        fn_004f01f4(&local_30);
        *(uint *)(param_1 + 0xd8) = local_30 + uVar10;
        *(uint *)(param_1 + 0xdc) =
             local_2c + uVar9 * 15000 + (int)((ulonglong)uVar8 * 15000 >> 0x20) +
             (uint)CARRY4(local_30,uVar10);
        return unaff_r7 & 0xff00 | 0x640004;
      }
    }
    uVar9 = 0x640000;
    uVar8 = unaff_r5 & 0xff00 | 4;
  }
  return uVar8 | uVar9;
}



uint fn_004cd128(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint unaff_r5;
  uint uVar7;
  uint unaff_r6;
  int iVar8;
  uint local_38;
  uint uStack_34;
  uint local_30;
  int iStack_2c;
  
  iVar2 = fn_004ce2f4(*(undefined4 *)(*(int *)(DAT_008bf4f4 + 0x20) + 0xa0),
                       *(undefined4 *)(param_1 + 0x78));
  if (iVar2 != 0) {
    *(char **)(param_1 + 0x2c) = "NexConnectStationJob::resolveCurrentAddress";
    *(code **)(param_1 + 0x24) = fn_004cccd0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00;
  }
  local_38 = 0;
  uStack_34 = 0;
  fn_004f01f4(&local_38);
  if ((uStack_34 < *(uint *)(param_1 + 0xdc) ||
       *(uint *)(param_1 + 0xdc) - uStack_34 < (uint)(local_38 <= *(uint *)(param_1 + 0xd8))) &&
     (*(char *)(param_1 + 0xe0) == '\x01')) {
    return unaff_r5 & 0xff00 | 0x640004;
  }
  if (0 < *(int *)(param_1 + 0xf4)) {
    iVar2 = *(int *)(param_1 + 0xf4) + -1;
    *(int *)(param_1 + 0xf4) = iVar2;
    if ((DAT_008bf4e0 == 0) || (iVar3 = fn_006d92b8(), iVar3 == 0)) {
      if (DAT_008edb12 == -1) {
        DAT_008edb12 = '\x01';
      }
      else {
        DAT_008edb12 = DAT_008edb12 + '\x01';
      }
      DAT_008edd61 = '\x01' - (char)iVar2;
    }
    fn_004ed068(param_1 + 0xe0);
    fn_004ed13c(param_1 + 0xe0);
    fn_004c7e40(*(undefined4 *)(DAT_008bf4f4 + 0x20),param_1 + 0x5c,1);
    *(char **)(param_1 + 0x2c) = "NexConnectStationJob::prepareNatTraversal";
    *(code **)(param_1 + 0x24) = fn_004cc9d8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r6 & 0xff00 | 0x640004;
  }
  cVar1 = *(char *)(param_1 + 0xe0);
  uVar7 = *(uint *)(param_1 + 0xe4);
  uVar6 = local_38;
  if (cVar1 == '\x03') {
    uVar6 = 0xd8a148f2;
  }
  if (cVar1 != '\x03' || uVar7 != uVar6) {
    if (cVar1 == '\x03') {
      uVar6 = 0xd8a148c1;
    }
    if (cVar1 == '\x03' && uVar7 == uVar6) {
      uVar5 = *(undefined4 *)(param_1 + 0x50);
    }
    else {
      iVar2 = fn_004d52e0(DAT_008bf4f4,uVar6,*(uint *)(param_1 + 0xd8) - local_38);
      if ((iVar2 != 2) || (iVar2 = fn_004d4edc(param_1 + 0x88), iVar2 == 0)) {
        iVar2 = fn_004d52e0(DAT_008bf4f4);
        if ((iVar2 == 2) && (iVar2 = fn_004d4ef0(param_1 + 0x88), iVar2 != 0)) {
          uVar7 = 0xd8a148ec;
          fn_004ed098(*(undefined4 *)(param_1 + 0x50),0xd8a148ec);
        }
        else {
          iVar2 = fn_004d52e0(DAT_008bf4f4);
          if ((iVar2 == 1) && (iVar2 = fn_004d4edc(param_1 + 0x88), iVar2 != 0)) {
            uVar7 = 0xd8a148eb;
            fn_004ed098(*(undefined4 *)(param_1 + 0x50),0xd8a148eb);
          }
          else {
            iVar2 = fn_004d52e0(DAT_008bf4f4);
            if ((iVar2 == 1) && (iVar2 = fn_004d4ef0(param_1 + 0x88), iVar2 != 0)) {
              uVar7 = 0xd8a148ea;
              fn_004ed098(*(undefined4 *)(param_1 + 0x50),0xd8a148ea);
            }
            else {
              uVar7 = 0xd8a148e7;
              fn_004ed098(*(undefined4 *)(param_1 + 0x50),0xd8a148e7);
            }
          }
        }
        goto LAB_004cd4e4;
      }
      uVar6 = 0xd8a148ed;
      uVar5 = *(undefined4 *)(param_1 + 0x50);
      uVar7 = uVar6;
    }
    fn_004ed098(uVar5,uVar6);
  }
  else {
    fn_004ed098(*(undefined4 *)(param_1 + 0x50),0xd8a148f2);
    if ((*(char *)(param_1 + 0x82) == '\0') &&
       (iVar2 = fn_004cc270(*(int *)(*(int *)(DAT_008bf4f4 + 0x20) + 0xa0) + 0x120,param_1 + 0x5c),
       iVar2 != 0)) {
      local_30 = 0;
      iStack_2c = 0;
      fn_004f01f4(&local_30);
      iVar3 = local_30 - *(uint *)(iVar2 + 0x30);
      iVar8 = iStack_2c - (*(int *)(iVar2 + 0x34) + (uint)(local_30 < *(uint *)(iVar2 + 0x30)));
      puVar4 = (undefined4 *)fn_004f0ce8();
      uVar5 = fn_0011c134(iVar3,iVar8,*puVar4,puVar4[1]);
      *(undefined4 *)(iVar2 + 0x38) = uVar5;
    }
    fn_004c8c60(*(undefined4 *)(DAT_008bf4f4 + 0x20),param_1 + 0x5c,0xd8a148f2,0);
  }
LAB_004cd4e4:
  fn_004c8c60(*(undefined4 *)(DAT_008bf4f4 + 0x20),param_1 + 0x5c,uVar7);
  fn_004c7e40(*(undefined4 *)(DAT_008bf4f4 + 0x20),param_1 + 0x5c,1);
  *(char **)(param_1 + 0x2c) = "ConnectStationJob::ConnectionFailed";
  *(code **)(param_1 + 0x24) = fn_0050f320;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}


