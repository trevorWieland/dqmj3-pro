#include "005154d8_00515aa8.h"



int fn_00515aa8(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar1 = fn_00509758(param_1);
  if (iVar1 != 0) {
    iVar4 = 0;
    uVar3 = 0xb < *(byte *)(param_1 + 0x13d);
    if (((!(bool)uVar3) && (param_2 < 0xc)) &&
       (iVar2 = fn_0050b080(DAT_008bf4cc,param_2), iVar2 - 0x100000U < 0x3ff00000)) {
      iVar4 = fn_00515608(iVar2 + 0x38);
      uVar3 = *(undefined1 *)(iVar2 + 0x50);
    }
    *(ushort *)(iVar1 + 6) = (ushort)(iVar4 << 8) | (ushort)((uint)iVar4 >> 8);
    *(undefined1 *)(iVar1 + 5) = uVar3;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | param_3;
  }
  return iVar1;
}



undefined4 fn_005159e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_008bf4cc;
  iVar2 = fn_0050b144(DAT_008bf4cc,param_2 + 0x5d8);
  if (iVar2 - 0x100000U < 0x3ff00000) {
    if ((1 < *(byte *)(param_2 + 5)) &&
       (*(byte *)(iVar2 + 0x51) != 0 && *(byte *)(param_2 + 5) != *(byte *)(iVar2 + 0x51))) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x13d) < 0xc) &&
       (iVar3 = fn_0051562c(iVar2 + 0x38,
                             *(ushort *)(param_2 + 6) << 8 | *(ushort *)(param_2 + 6) >> 8),
       iVar3 == 0)) {
      return 0;
    }
    if (((*(char *)(param_1 + 0x13d) != *(char *)(iVar1 + 0xa8)) &&
        (*(char *)(iVar2 + 0x20) == '\x05')) && (*(char *)(iVar2 + 0x14) == -3)) {
      return 0;
    }
  }
  return *(undefined4 *)(param_2 + 0x5b8);
}



undefined4
fn_005157b0(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,undefined4 param_6
            ,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_b0;
  uint local_ac;
  undefined1 local_a8 [4];
  uint local_a4 [23];
  uint local_48;
  uint local_44;
  int iStack_34;
  undefined4 local_30;
  uint uStack_2c;
  int local_28;
  
  uVar9 = (ulonglong)param_5;
  if (((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x10c) == 0)) &&
     (local_48 = (param_4 + 0x13U & 0xfffffffc) + 4, local_48 <= *(uint *)(param_1 + 0x104))) {
    uVar7 = *(int *)(param_1 + 0x108) - local_48;
    iStack_34 = param_1;
    local_30 = param_2;
    uStack_2c = param_3;
    local_28 = param_4;
    fn_00515fe0(param_1);
    if (*(char *)(param_1 + 0x13d) != -3) {
      uVar5 = 0;
      uVar8 = 0;
      local_44 = 0;
      fn_00101a1c(local_a8,&LAB_006f9404,8,0xc);
      iVar6 = 0;
      if (*(int *)(param_1 + 0x148) - 0x100000U < 0x3ff00000) {
        do {
          if ((param_3 & 1 << (uVar5 & 0xff)) != 0) {
            uVar4 = uVar5 & 0xff;
            iVar2 = fn_006da484(*(undefined4 *)(param_1 + 0x148),*(undefined1 *)(param_1 + 0x13d),
                                 uVar4,&local_b0);
            if (-1 < iVar2) {
              if (*(char *)(param_1 + 0x13d) != (char)local_b0) {
                if ((char)local_b0 == -3) {
                  iVar2 = fn_006d6e30(param_1 + 0x14c);
                  uVar4 = 1 << uVar4;
                  if (iVar2 != 0) {
                    local_44 = local_44 | uVar4;
                  }
                }
                else {
                  fn_006da4e0(*(undefined4 *)(param_1 + 0x148),*(char *)(param_1 + 0x13d),
                               (char)local_b0,&local_ac);
                  uVar1 = 1 << (local_b0 & 0xff);
                  uVar4 = local_ac & param_3;
                  if (uVar1 == uVar4) {
                    uVar8 = uVar8 | uVar1;
                  }
                  else {
                    local_a8[iVar6 * 8] = (char)local_b0;
                    local_a4[iVar6 * 2] = uVar4;
                    iVar6 = iVar6 + 1;
                  }
                }
                param_3 = param_3 & ~uVar4;
                goto LAB_00515928;
              }
            }
            param_3 = param_3 & ~(1 << uVar4);
          }
LAB_00515928:
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 0xc);
      }
      else {
        local_44 = 0;
        uVar8 = param_3;
      }
      fn_00517020(param_1 + 0xc,param_6,param_7);
      local_b0 = (uint)uVar9;
      fn_00516e40(param_1 + 0xc,local_30,local_28,param_8);
      local_b0 = (uint)uVar9;
      fn_005162c8(param_1,uVar8,local_48,uVar7);
      local_b0 = (uint)uVar9;
      iVar2 = 0;
      if (0 < iVar6) {
        do {
          local_ac = (uint)uVar9;
          local_b0 = uVar7;
          fn_005167a4(param_1,local_a8[iVar2 * 8],local_a4[iVar2 * 2],local_48);
          local_b0 = (uint)uVar9;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar6);
      }
      fn_005165d8(param_1,local_44,local_48,uVar7);
      uVar3 = fn_0050a29c(param_1);
      return uVar3;
    }
  }
  return 0;
}



int fn_00515774(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00509b04();
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x148) = 0;
    fn_004ed714(param_1 + 0x14c);
    *(undefined1 *)(param_1 + 0x13d) = 0xfd;
    *(undefined4 *)(param_1 + 0x140) = 0;
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  return iVar1;
}



void fn_00515764(undefined4 *param_1)

{
  *param_1 = &DAT_008571a0;
  return;
}



undefined4 fn_00515738(int param_1)

{
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}



undefined4 fn_0051562c(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0xe) != '\0') {
      if (*(short *)(param_1 + 0xc) == -1) {
        *(undefined2 *)(param_1 + 0xc) = 0xffff;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      else {
        *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
      }
    }
    uVar3 = 1;
  }
  else {
    sVar1 = (short)param_2 - *(ushort *)(param_1 + 6);
    uVar4 = (uint)sVar1;
    if (0 < (int)uVar4) {
      uVar5 = -(uint)*(ushort *)(param_1 + 6) & 0xffff;
      if (uVar5 != 0 && (int)uVar5 < (int)uVar4) {
        uVar4 = (uint)(short)(sVar1 + -1);
      }
      if (*(char *)(param_1 + 0xe) != '\0') {
        uVar2 = *(ushort *)(param_1 + 8);
        uVar5 = uVar2 + uVar4;
        if (uVar5 < 0xffff) {
          *(short *)(param_1 + 8) = (short)uVar5;
          *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + (short)uVar4 + -1;
        }
        else {
          *(undefined1 *)(param_1 + 0xe) = 0;
          *(undefined2 *)(param_1 + 8) = 0xffff;
          *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + (-1 - uVar2);
        }
      }
      uVar5 = *(uint *)(param_1 + 0x10);
      if (CARRY4(uVar5,uVar4)) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        *(uint *)(param_1 + 0x14) = ~uVar5 + *(int *)(param_1 + 0x14);
      }
      else {
        *(uint *)(param_1 + 0x14) = (uVar4 - 1) + *(int *)(param_1 + 0x14);
        *(uint *)(param_1 + 0x10) = uVar5 + uVar4;
      }
      *(short *)(param_1 + 6) = (short)param_2;
      return 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}



short fn_00515608(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 4) + 1;
  *(short *)(param_1 + 4) = sVar1;
  if (sVar1 == 0) {
    sVar1 = 1;
    *(undefined2 *)(param_1 + 4) = 1;
  }
  return sVar1;
}



void fn_00515604(undefined4 *param_1)

{
  *param_1 = &DAT_00856ce8;
  return;
}



void fn_005155a4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &PTR_FUN_00857178;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 4000;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x16] = 500;
  puVar1[0x15] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  return;
}



void fn_0051557c(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



uint fn_005154d8(int param_1)

{
  byte bVar1;
  uint unaff_r5;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x4c) + 0x14);
  if (bVar1 < 0xc) {
    fn_0050d3a4(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x28),bVar1,1);
    fn_0050d3a4(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x28),
                 *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x14),1);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x20) = 6;
  *(code **)(param_1 + 0x24) = fn_005152a8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "DisconnectStationJob::DisconnectionSucceeded";
  return unaff_r5 & 0xff00 | 5;
}


