#include "004fb9d4_004fca2c.h"



void fn_004fca2c(int param_1)

{
  DAT_008ee0bc = (short)*(undefined4 *)(param_1 + 0xa8);
  return;
}



void fn_004fca08(int param_1,uint param_2)

{
  if ((param_2 < 0xc) && ((uint)*(byte *)(param_2 + param_1 + 0x60) < *(uint *)(param_1 + 0x6c))) {
    *(undefined1 *)(param_2 + param_1 + 0x60) = 0xff;
  }
  return;
}



void fn_004fc840(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x4c);
    goto LAB_004fc8b0;
  }
  if (*(uint *)(param_1 + 0x88) < 9) {
    uVar3 = 40000;
LAB_004fc884:
    *(undefined4 *)(param_1 + 0x48) = uVar3;
  }
  else {
    if (0xc < *(uint *)(param_1 + 0x88)) {
      uVar3 = 60000;
      goto LAB_004fc884;
    }
    uVar3 = 50000;
    *(undefined4 *)(param_1 + 0x48) = 50000;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  if (*(char *)(DAT_008bf4e0 + 0x67) == '\x02') {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 10000;
  }
LAB_004fc8b0:
  iVar2 = DAT_008bf49c;
  uVar9 = *(uint *)(param_1 + 0x58);
  puVar10 = (uint *)(DAT_008bf49c + 0x30);
  puVar4 = (uint *)fn_004f0ce8();
  lVar1 = (ulonglong)uVar9 * (ulonglong)*puVar4;
  uVar5 = (uint)lVar1;
  uVar6 = *puVar10;
  *(uint *)(param_1 + 0x54) =
       *puVar4 * ((int)uVar9 >> 0x1f) + puVar4[1] * uVar9 + (int)((ulonglong)lVar1 >> 0x20) +
       *(int *)(iVar2 + 0x34) + (uint)CARRY4(uVar5,uVar6);
  *(uint *)(param_1 + 0x50) = uVar5 + uVar6;
  iVar2 = DAT_008bf49c;
  uVar5 = *(uint *)(param_1 + 0x48);
  puVar10 = (uint *)(DAT_008bf49c + 0x30);
  puVar4 = (uint *)fn_004f0ce8();
  lVar1 = (ulonglong)uVar5 * (ulonglong)*puVar4;
  uVar6 = (uint)lVar1;
  uVar9 = *puVar10;
  uVar5 = *puVar4 * ((int)uVar5 >> 0x1f) + puVar4[1] * uVar5 + (int)((ulonglong)lVar1 >> 0x20) +
          *(int *)(iVar2 + 0x34) + (uint)CARRY4(uVar6,uVar9);
  *(uint *)(param_1 + 0x44) = uVar5;
  *(uint *)(param_1 + 0x40) = uVar6 + uVar9;
  if (param_2 == 0) {
    uVar5 = (uint)*(byte *)(param_1 + 0xa6);
  }
  if (param_2 == 0 && uVar5 == 0) {
    uVar8 = *(uint *)(param_1 + 0x4c);
    puVar4 = (uint *)fn_004f0ce8();
    uVar7 = *puVar4;
    uVar6 = puVar4[1];
    lVar1 = (ulonglong)uVar8 * (ulonglong)uVar7;
    uVar5 = (uint)lVar1;
    uVar9 = *(uint *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = uVar9 + uVar5;
    *(uint *)(param_1 + 0x44) =
         *(int *)(param_1 + 0x44) +
         uVar7 * ((int)uVar8 >> 0x1f) + uVar6 * uVar8 + (int)((ulonglong)lVar1 >> 0x20) +
         (uint)CARRY4(uVar9,uVar5);
  }
  return;
}



uint fn_004fc71c(int param_1)

{
  int iVar1;
  uint unaff_r5;
  
  if (*(char *)(param_1 + 0xa6) == '\0') {
    *(undefined1 *)(DAT_008bf4e0 + 0x65) = 6;
    fn_00505a04();
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::CleanupByProcessFailure";
    *(code **)(param_1 + 0x24) = fn_004fe87c;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else if ((*(char *)(param_1 + 0xb0) == '\x01') ||
          (iVar1 = fn_004f40c0(*(undefined4 *)(DAT_008bf4e0 + 0xc),param_1 + 0xb0), iVar1 == 0)) {
    *(undefined1 *)(DAT_008bf4e0 + 0x65) = 2;
    fn_00505a04();
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::CleanupByProcessFailure";
    *(code **)(param_1 + 0x24) = fn_004fe87c;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    fn_004efcf4(*(undefined4 *)(DAT_008bf4e0 + 0xc),0);
    *(undefined1 **)(param_1 + 0x24) = &LAB_004fc984;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::WaitLeaveMesh";
  }
  return unaff_r5 & 0xff00;
}



undefined4 * fn_004fbaac(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &DAT_00856ea4;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  iVar2 = *(int *)(DAT_008bf4d4 + 0x30);
  puVar1[0x10] = iVar2;
  uVar7 = iVar2 * iVar2;
  uVar3 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar7,uVar3);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar4 = 0;
    if (uVar7 != 0) {
      do {
        puVar5 = (undefined1 *)(iVar2 + uVar4);
        uVar4 = uVar4 + 1;
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
      } while (uVar4 < uVar7);
    }
  }
  puVar1[0x13] = iVar2;
  uVar7 = puVar1[0x10];
  uVar3 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar7,uVar3);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar4 = 0;
    if (uVar7 != 0) {
      do {
        puVar5 = (undefined1 *)(iVar2 + uVar4);
        uVar4 = uVar4 + 1;
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
      } while (uVar4 < uVar7);
    }
  }
  puVar1[0x14] = iVar2;
  uVar7 = puVar1[0x10];
  uVar3 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar7 << 2,uVar3);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar4 = 0;
    if (uVar7 != 0) {
      do {
        puVar6 = (undefined4 *)(iVar2 + uVar4 * 4);
        uVar4 = uVar4 + 1;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0;
        }
      } while (uVar4 < uVar7);
    }
  }
  puVar1[0x15] = iVar2;
  fn_00158f6c(puVar1[0x13],puVar1[0x10] * puVar1[0x10]);
  fn_00158f6c(puVar1[0x14],puVar1[0x10]);
  fn_00158f6c(puVar1[0x15],puVar1[0x10] << 2);
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  uVar7 = puVar1[0x10];
  uVar3 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar7,uVar3);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar4 = 0;
    if (uVar7 != 0) {
      do {
        puVar5 = (undefined1 *)(iVar2 + uVar4);
        uVar4 = uVar4 + 1;
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
      } while (uVar4 < uVar7);
    }
  }
  puVar1[0x18] = iVar2;
  fn_00158f6c(puVar1[0x14],puVar1[0x10]);
  return puVar1;
}



undefined4 fn_004fb9d4(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = fn_006d897c();
  if ((((iVar1 == 0) && (param_2 < (uint)param_1[0x10])) && (param_3 != 0)) &&
     (((uint)param_1[0x11] <= param_3 &&
      ((param_1[0x11] != param_3 || (*(uint *)(param_1[0x15] + param_2 * 4) < param_4)))))) {
    iVar1 = *(int *)(DAT_008bf49c + 0x34);
    param_1[0x1a] = *(int *)(DAT_008bf49c + 0x30);
    param_1[0x1b] = iVar1;
    (**(code **)(*param_1 + 8))(param_1,1);
    param_1[9] = (int)fn_004fb6f8;
    param_1[10] = 0;
    param_1[0xb] = (int)"RelayRouteManageJob::WaitAllDirectConnectionReport";
    return 1;
  }
  return 0;
}


