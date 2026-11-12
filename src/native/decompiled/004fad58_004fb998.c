#include "004fad58_004fb998.h"



void fn_004fb998(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0;
  fn_00158f6c(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x40));
  fn_00158f6c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x40) << 2);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}



void fn_004fb6cc(int param_1)

{
  fn_0051117c(*(undefined4 *)(DAT_008bf4d4 + 100),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



uint fn_004fb54c(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r7;
  undefined8 uVar5;
  
  bVar1 = *(byte *)(DAT_008bf4e0 + 99);
  if (0xb < bVar1) {
    return DAT_008bf4e0 & 0xff00 | 1;
  }
  (**(code **)(*param_1 + 0x14))(param_1,*(code **)(*param_1 + 0x14),0x10000000,0);
  iVar4 = *(int *)(DAT_008bf4d4 + 100);
  iVar2 = fn_00512aa8(iVar4,param_1[0x14],param_1[0x10],0);
  if (-1 < iVar2) {
    uVar5 = fn_00511b60(iVar4,param_1[0x13],param_1[0x10] * param_1[0x10],param_1[0x16],
                         param_1 + 0x17,bVar1,param_1[0x18]);
    if (-1 < (int)uVar5) {
      uVar3 = 0;
      *(int *)(iVar4 + 0x24) = param_1[0x11];
      *(int *)(iVar4 + 0x20) = param_1[0x12];
      param_1[0x16] = 0;
      iVar2 = fn_004f6eec(*(undefined4 *)(DAT_008bf4e0 + 0x4c),(int)((ulonglong)uVar5 >> 0x20),
                           0x10000000,0);
      if (iVar2 == 0) {
        param_1[9] = (int)fn_004fb6f8;
        param_1[10] = 0;
        param_1[0xb] = (int)"RelayRouteManageJob::WaitAllDirectConnectionReport";
        return uVar3 & 0xff00 | 5;
      }
      param_1[0x12] = param_1[0x12] + 1;
    }
  }
  return unaff_r7 & 0xff00 | 1;
}



uint fn_004fb6f8(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  
  uVar13 = (uint)*(byte *)(DAT_008bf4e0 + 99);
  if (0xb < uVar13) {
    return DAT_008bf4e0 & 0xff00 | 1;
  }
  bVar1 = true;
  uVar10 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    do {
      if (uVar10 != uVar13) {
        iVar2 = fn_006d92e4(DAT_008bf4e0,uVar10 & 0xff);
        iVar3 = *(int *)(*(int *)(param_1 + 0x54) + uVar10 * 4);
        if (iVar2 == 0) {
          if (iVar3 != 0) goto LAB_004fb774;
        }
        else if (iVar3 == 0) {
LAB_004fb774:
          bVar1 = false;
        }
      }
      uVar4 = *(uint *)(param_1 + 0x40);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar4);
    if (!bVar1) goto LAB_004fb940;
  }
  uVar15 = *(uint *)(param_1 + 0x68);
  uVar10 = *(uint *)(param_1 + 0x6c);
  uVar11 = 0;
  uVar9 = *(uint *)(DAT_008bf49c + 0x30);
  uVar4 = *(uint *)(DAT_008bf49c + 0x34);
  iVar2 = *(int *)(param_1 + 0x40) * uVar13;
  if (*(int *)(param_1 + 0x40) != 0) {
    do {
      uVar12 = 0;
      iVar3 = fn_0050b080(DAT_008bf4cc,uVar11 & 0xff);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0x20) == '\x05')) {
        uVar12 = fn_0050fca4(DAT_008c0678,iVar3 + 4);
        uVar12 = uVar12 & 0xffff;
      }
      if ((uVar11 == uVar13) || (iVar5 = fn_006d92e4(DAT_008bf4e0,uVar11 & 0xff), iVar5 == 0)) {
        if (uVar12 == 0) goto LAB_004fb8d8;
LAB_004fb8cc:
        if (uVar12 >> 2 != 0) goto LAB_004fb8d8;
        uVar12 = 1;
      }
      else {
        if (uVar12 == 0) {
          iVar3 = fn_006dbad0(iVar3);
          if (iVar3 == 0) {
            if (uVar10 < uVar4 || uVar4 - uVar10 < (uint)(uVar15 <= uVar9)) {
              fn_004f57bc(*(undefined4 *)(DAT_008bf4e0 + 0x4c),uVar11 & 0xff);
              iVar3 = DAT_008bf49c;
              puVar14 = (uint *)(DAT_008bf49c + 0x30);
              puVar6 = (uint *)fn_004f0ce8();
              uVar7 = (uint)((ulonglong)*puVar6 * 300);
              uVar8 = *puVar14;
              *(uint *)(param_1 + 0x6c) =
                   *(int *)(iVar3 + 0x34) +
                   puVar6[1] * 300 + (int)((ulonglong)*puVar6 * 300 >> 0x20) +
                   (uint)CARRY4(uVar8,uVar7);
              *(uint *)(param_1 + 0x68) = uVar8 + uVar7;
            }
            bVar1 = false;
          }
        }
        else {
          iVar3 = fn_006dbad0(iVar3);
          if (iVar3 == 0) goto LAB_004fb8cc;
          uVar12 = 0;
        }
LAB_004fb8d8:
        uVar12 = uVar12 >> 2;
        if (0xfe < uVar12) {
          uVar12 = 0xff;
        }
      }
      uVar11 = uVar11 + 1;
      *(char *)(*(int *)(param_1 + 0x4c) + iVar2) = (char)uVar12;
      iVar2 = iVar2 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x40));
  }
  uVar4 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x50) + uVar13) = 0x32;
  if (bVar1) {
    *(code **)(param_1 + 0x24) = fn_004fb54c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "RelayRouteManageJob::SendRelayRouteDirections";
    return param_1 & 0xff00;
  }
LAB_004fb940:
  return uVar4 & 0xff00 | 5;
}



longlong fn_004fb1d0(int *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1;
  undefined8 uVar4;
  
  if (0x3fefffff < param_2 - 0x100000U || 0x3fefffff < param_4 - 0x100000U) {
    iVar2 = param_4;
    if (DAT_008c0630 != 0) {
      iVar2 = 8;
    }
LAB_004fb344:
    return CONCAT44(iVar2,0xe0e14826);
  }
  uVar3 = param_3 - 0x100000;
  if (uVar3 < 0x3ff00000) {
    iVar2 = param_1[0x10];
    if (iVar2 != 0) {
      if (DAT_008c0630 != 0) {
        iVar2 = 8;
      }
      goto LAB_004fb344;
    }
    uVar4 = fn_006d96e0(DAT_008bf4e8);
    uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 == 5) {
      puVar1 = (undefined1 *)0xd8a14825;
    }
    else {
      puVar1 = (undefined1 *)(**(code **)(*param_1 + 0x1c))(param_1,param_3,param_4);
      uVar3 = (uint)puVar1 & 0x80000000;
      if (-1 < (int)uVar3) {
        param_1[0x10] = param_2;
        fn_004ed050(param_2);
        (**(code **)(*param_1 + 8))(param_1,1);
        return (ulonglong)extraout_r1 << 0x20;
      }
    }
  }
  else {
    if (DAT_008c0630 != 0) {
      uVar3 = 8;
    }
    puVar1 = &DAT_e0a14827;
  }
  return CONCAT44(uVar3,puVar1);
}



void fn_004fb15c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0051cf84();
  *puVar1 = &DAT_00856e78;
  iVar2 = fn_00508048(puVar1 + 6);
  *(undefined1 *)(iVar2 + 0x18) = 0xfd;
  *(undefined4 *)(iVar2 + 0x1c) = 2000;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x28) = 0;
  *(undefined1 *)(iVar2 + 0x29) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  return;
}



ulonglong fn_004fad58(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined4 local_28;
  
  iVar2 = DAT_008bf4e0;
  iVar6 = DAT_008bf4d4;
  if (DAT_008bf4e0 - 0x100000U < 0x3ff00000) {
    bVar10 = *(char *)(param_1 + 0x40) != '\0';
    iVar3 = 0;
    if (bVar10) {
      iVar3 = *(int *)(param_1 + 0x34);
    }
    if (bVar10 && 0 < iVar3) {
      local_28 = param_4;
      if (*(char *)(param_1 + 0x41) == '\0') {
        fn_004fab6c(param_1);
        uVar7 = *(undefined4 *)(iVar6 + 0xc);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar6 + 8);
        *(undefined4 *)(param_1 + 0x3c) = uVar7;
        *(undefined1 *)(param_1 + 0x41) = 1;
      }
      else {
        uVar8 = *(uint *)(param_1 + 0x38);
        uVar4 = *(uint *)(DAT_008bf4d4 + 8);
        iVar9 = *(int *)(DAT_008bf4d4 + 0xc);
        iVar3 = *(int *)(param_1 + 0x3c);
        puVar5 = (undefined4 *)fn_004f0ce8();
        uVar11 = fn_0011c134(uVar4 - uVar8,iVar9 - (iVar3 + (uint)(uVar4 < uVar8)),*puVar5,
                              puVar5[1]);
        iVar9 = (int)((ulonglong)uVar11 >> 0x20);
        uVar4 = *(uint *)(param_1 + 0x34);
        bVar10 = uVar4 < (uint)uVar11;
        iVar3 = (int)uVar4 >> 0x1f;
        if ((int)(iVar3 - (iVar9 + (uint)bVar10)) < 0 !=
            (SBORROW4(iVar3,iVar9) != SBORROW4(iVar3 - iVar9,(uint)bVar10))) {
          fn_004fab6c(param_1);
          uVar7 = *(undefined4 *)(iVar6 + 0xc);
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar6 + 8);
          *(undefined4 *)(param_1 + 0x3c) = uVar7;
        }
      }
    }
    param_2 = *(int *)(param_1 + 0x10) - 0x100000;
    if (param_2 < 0x3ff00000) {
      local_28 = *(undefined4 *)(param_1 + 0xc);
      puVar5 = (undefined4 *)fn_0050953c(*(int *)(param_1 + 0x10),&local_28);
      uVar12 = (**(code **)(*(int *)*puVar5 + 0x2c))();
      while ((int)uVar12 == 0) {
        iVar6 = fn_006d9a38(puVar5);
        bVar1 = *(byte *)(iVar2 + 99);
        bVar10 = bVar1 == 0xb;
        if (bVar1 < 0xc) {
          bVar10 = bVar1 == *(byte *)(iVar2 + 0x62);
        }
        if (bVar10) {
          uVar11 = fn_004f0d34(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x14),
                                *(undefined4 *)(*(int *)(iVar6 + 4) + 0x18));
          fn_004fafb0(param_1,*(undefined1 *)(*(int *)(iVar6 + 4) + 1),(int)uVar11,
                       (int)((ulonglong)uVar11 >> 0x20));
        }
        else {
          fn_004fa440(param_1,iVar6);
        }
        (**(code **)(*(int *)*puVar5 + 0x30))((int *)*puVar5);
        uVar12 = (**(code **)(*(int *)*puVar5 + 0x2c))();
      }
      return uVar12 & 0xffffffff00000000;
    }
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    param_2 = 8;
  }
  return CONCAT44(param_2,&DAT_e0a14827);
}



undefined1 * fn_004fafb0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_2 < 0xc) {
    piVar3 = *(int **)(param_1 + 0x10);
    if (((int *)0x3fefffff < piVar3 + -0x40000) ||
       (lVar4 = fn_006d9728(param_1 + 0x18), lVar4 == -1)) {
      return &DAT_e0a14827;
    }
    local_38 = fn_004f0d34(param_3,param_4);
    fn_006d9728(param_1 + 0x18);
    local_30 = fn_004f0d34();
    local_3c = *(undefined4 *)(param_1 + 0xc);
    iVar2 = (**(code **)(*piVar3 + 0x10))(piVar3,&local_3c,param_2,0x10,0);
    puVar1 = (undefined1 *)0x0;
    if (iVar2 != 0) {
      fn_001694d4(iVar2,&local_38);
      puVar1 = (undefined1 *)fn_0050a490(piVar3);
      return puVar1;
    }
  }
  else {
    puVar1 = (undefined1 *)0xe0e14826;
  }
  return puVar1;
}


