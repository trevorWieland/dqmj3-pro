#include "004fcef0_004fd5d8.h"



uint fn_004fd5d8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint unaff_r7;
  uint uVar9;
  uint local_24 [2];
  
  uVar9 = *(uint *)(param_1 + 0x44);
  if (uVar9 < *(uint *)(DAT_008bf49c + 0x34) ||
      *(uint *)(DAT_008bf49c + 0x34) - uVar9 <
      (uint)(*(uint *)(param_1 + 0x40) <= *(uint *)(DAT_008bf49c + 0x30))) {
    *(undefined4 *)(*(int *)(DAT_008bf4e0 + 8) + 0x74) = 0xd941482d;
    *(code **)(param_1 + 0x24) = fn_004fc71c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::UpdateFailed";
    return uVar9 & 0xff00;
  }
  bVar1 = *(byte *)(DAT_008bf4e0 + 99);
  if (*(byte *)(DAT_008bf4e0 + 99) < 0xc) {
    bVar1 = *(byte *)(DAT_008bf4e0 + 0x62);
  }
  if (0xb < bVar1) {
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::UpdateFailed";
    *(code **)(param_1 + 0x24) = fn_004fc71c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return *(uint *)(param_1 + 0x40) & 0xff00;
  }
  local_24[0] = 0;
  iVar7 = *(int *)(param_1 + 0x98) + 1;
  iVar2 = fn_004f6764(*(undefined4 *)(DAT_008bf4e0 + 0x4c),*(byte *)(DAT_008bf4e0 + 0x62),
                       *(undefined4 *)(param_1 + 0xa0),iVar7,local_24);
  if (iVar2 == 0) {
    if ((local_24[0] != 0) &&
       (*(uint *)(param_1 + 0x54) < *(uint *)(DAT_008bf49c + 0x34) ||
        *(uint *)(DAT_008bf49c + 0x34) - *(uint *)(param_1 + 0x54) <
        (uint)(*(uint *)(param_1 + 0x50) <= *(uint *)(DAT_008bf49c + 0x30)))) {
      uVar9 = 0;
      do {
        if ((local_24[0] & 1) != 0) {
          fn_004f57bc(*(undefined4 *)(DAT_008bf4e0 + 0x4c),uVar9 & 0xff);
        }
        iVar2 = DAT_008bf49c;
        local_24[0] = local_24[0] >> 1;
      } while ((local_24[0] != 0) && (uVar9 = uVar9 + 1, (int)uVar9 < 0xc));
      puVar8 = (uint *)(DAT_008bf49c + 0x30);
      puVar3 = (uint *)fn_004f0ce8();
      uVar5 = *puVar3;
      uVar9 = puVar3[1];
      uVar6 = (uint)((ulonglong)uVar5 * 300);
      uVar4 = *puVar8;
      iVar2 = *(int *)(iVar2 + 0x34);
      *(uint *)(param_1 + 0x50) = uVar4 + uVar6;
      *(uint *)(param_1 + 0x54) =
           uVar9 * 300 + (int)((ulonglong)uVar5 * 300 >> 0x20) + iVar2 + (uint)CARRY4(uVar4,uVar6);
    }
  }
  else {
    *(int *)(param_1 + 0x98) = iVar7;
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::StartRelayConnection";
    *(code **)(param_1 + 0x24) = fn_004fd7ec;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return unaff_r7 & 0xff00 | 5;
}



undefined4 fn_004fcef0(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  uVar6 = (**(code **)(**(int **)(param_1 + 0x70) + 8))();
  iVar12 = (uVar6 - (uVar6 & 3)) + 4;
  bVar1 = *(byte *)(param_2 + 2);
  bVar2 = *(byte *)(param_2 + 1);
  uVar14 = (uint)bVar2;
  uVar7 = fn_004edb98(param_2 + 4);
  if (*(uint *)(param_1 + 0x6c) < uVar14) {
    return 0;
  }
  if (*(char *)(param_2 + 8) == '\x01') {
    cVar4 = *(char *)(param_1 + 0x80);
    bVar15 = cVar4 == '\0';
    if (bVar15) {
      cVar4 = *(char *)(param_1 + 0x81);
    }
    if (!bVar15 || cVar4 != '\0') {
      if (uVar7 < *(byte *)(param_1 + 0x84)) {
        return 2;
      }
      *(undefined1 *)(param_1 + 0x82) = 0;
      *(undefined1 *)(param_1 + 0x83) = 0;
      *(undefined1 *)(param_1 + 0x84) = 0;
      *(undefined1 *)(param_1 + 0x85) = 0;
      *(undefined1 *)(param_1 + 0x80) = 0;
      *(undefined1 *)(param_1 + 0x81) = 0;
    }
    iVar11 = 0;
    if (uVar14 != 0) {
      do {
        uVar3 = *(undefined1 *)(iVar12 * iVar11 + param_2 + uVar6 + 0xc);
        (**(code **)(*(int *)(*(int *)(param_1 + 0x70) + iVar11 * 0x54) + 0x10))
                  (*(int *)(param_1 + 0x70) + iVar11 * 0x54,iVar12 * iVar11 + param_2 + 0xc);
        *(undefined1 *)(*(int *)(param_1 + 0x74) + iVar11) = uVar3;
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)uVar14);
    }
    *(uint *)(param_1 + 0xa0) = uVar7;
    *(uint *)(param_1 + 0x88) = uVar14;
    if (*(uint *)(param_1 + 0x6c) != 0) {
      uVar6 = *(uint *)(param_1 + 0x6c) & 1;
      if (uVar6 == 1) {
        **(undefined1 **)(param_1 + 0x8c) = 0;
      }
      uVar7 = (uint)(uVar6 == 1);
      if (uVar6 < *(uint *)(param_1 + 0x6c)) {
        do {
          uVar6 = uVar6 + 2;
          *(undefined1 *)(*(int *)(param_1 + 0x8c) + uVar7) = 0;
          *(undefined1 *)(*(int *)(param_1 + 0x8c) + uVar7 + 1) = 0;
          uVar7 = uVar7 + 2;
        } while (uVar6 < *(uint *)(param_1 + 0x6c));
      }
    }
    goto LAB_004fd238;
  }
  if (*(char *)(param_2 + 8) != '\x02') {
    return 0;
  }
  bVar15 = *(char *)(param_1 + 0x80) == '\0';
  uVar8 = (uint)*(byte *)(param_2 + 9);
  uVar9 = uVar8;
  if (bVar15) {
    uVar9 = (uint)*(byte *)(param_1 + 0x81);
  }
  if (bVar15 && uVar9 == 0) {
    *(byte *)(param_1 + 0x82) = bVar2;
    *(char *)(param_1 + 0x84) = (char)uVar7;
    *(byte *)(param_1 + 0x83) = bVar1;
    *(undefined1 *)(param_1 + 0x85) = 2;
  }
  else {
    uVar9 = (uint)*(byte *)(param_1 + 0x82);
    bVar15 = uVar9 != uVar14;
    if (!bVar15) {
      uVar9 = (uint)*(byte *)(param_1 + 0x83);
    }
    if (bVar15 || uVar9 != bVar1) {
LAB_004fd0b4:
      if (uVar7 <= *(byte *)(param_1 + 0x84)) {
        return 2;
      }
      *(char *)(param_1 + 0x84) = (char)uVar7;
      *(undefined1 *)(param_1 + 0x80) = 0;
      *(undefined1 *)(param_1 + 0x81) = 0;
      *(byte *)(param_1 + 0x82) = bVar2;
      *(byte *)(param_1 + 0x83) = bVar1;
      *(undefined1 *)(param_1 + 0x85) = 2;
    }
    else {
      bVar15 = *(byte *)(param_1 + 0x84) == uVar7;
      uVar14 = uVar7;
      if (bVar15) {
        uVar14 = (uint)*(byte *)(param_1 + 0x85);
      }
      if (!bVar15 || uVar14 != 2) goto LAB_004fd0b4;
    }
    if (*(char *)(uVar8 + param_1 + 0x80) != '\0') {
      return 1;
    }
  }
  bVar1 = *(byte *)(param_2 + 10);
  bVar2 = *(byte *)(param_2 + 0xb);
  iVar11 = 0;
  if (bVar1 != 0) {
    do {
      iVar13 = iVar11 + (uint)bVar2;
      (**(code **)(*(int *)(*(int *)(param_1 + 0x70) + iVar13 * 0x54) + 0x10))
                (*(int *)(param_1 + 0x70) + iVar13 * 0x54,iVar12 * iVar11 + param_2 + 0xc);
      iVar5 = iVar12 * iVar11;
      iVar11 = iVar11 + 1;
      *(undefined1 *)(*(int *)(param_1 + 0x74) + iVar13) =
           *(undefined1 *)(iVar5 + param_2 + uVar6 + 0xc);
    } while (iVar11 < (int)(uint)bVar1);
  }
  *(undefined1 *)(param_1 + uVar8 + 0x80) = 1;
  bVar15 = *(char *)(param_1 + 0x80) != '\0';
  cVar4 = '\0';
  if (bVar15) {
    cVar4 = *(char *)(param_1 + 0x81);
  }
  if (!bVar15 || cVar4 == '\0') {
    return 1;
  }
  *(uint *)(param_1 + 0xa0) = (uint)*(byte *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x88) = (uint)*(byte *)(param_1 + 0x82);
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  if (*(uint *)(param_1 + 0x6c) != 0) {
    uVar6 = *(uint *)(param_1 + 0x6c) & 1;
    if (uVar6 == 1) {
      **(undefined1 **)(param_1 + 0x8c) = 0;
    }
    uVar7 = (uint)(uVar6 == 1);
    if (uVar6 < *(uint *)(param_1 + 0x6c)) {
      do {
        uVar6 = uVar6 + 2;
        *(undefined1 *)(*(int *)(param_1 + 0x8c) + uVar7) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x8c) + uVar7 + 1) = 0;
        uVar7 = uVar7 + 2;
      } while (uVar6 < *(uint *)(param_1 + 0x6c));
    }
  }
LAB_004fd238:
  uVar10 = *(undefined4 *)(DAT_008bf49c + 0x34);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(DAT_008bf49c + 0x30);
  *(undefined4 *)(param_1 + 0x94) = uVar10;
  return 4;
}


