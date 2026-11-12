#include "004fe3f0_004febc8.h"



int fn_004febc8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = fn_004fcef0();
  if (iVar1 == 4) {
    if (param_4 == 0) {
      fn_004fc840(param_1,0);
      param_1[0x26] = 0;
      param_1[0x27] = 0;
    }
    else {
      fn_004fc840(param_1,1);
      param_1[0x2a] = param_1[0x2a] + 1;
    }
    *(char *)((int)param_1 + 0xa5) = (char)param_4;
    fn_00158f40(param_1 + 0x18,0xc,0xff);
    *(undefined1 *)(param_1 + 0x29) = 1;
    (**(code **)(*param_1 + 8))(param_1,1);
    iVar1 = fn_004fbcec(param_1);
    *(char *)(param_1 + 0x2b) = (char)iVar1;
    if (iVar1 == 0) {
      param_1[0xb] = (int)"ProcessUpdateMeshJob::UpdateFailed";
      param_1[9] = (int)fn_004fc71c;
      param_1[10] = 0;
    }
    else if (*(char *)(DAT_008bf4e0 + 0x67) == '\x02') {
      param_1[0xb] = (int)"ProcessUpdateMeshJob::WaitDirectConnection";
      param_1[9] = (int)fn_004fdf90;
      param_1[10] = 0;
    }
    else if (*(char *)(DAT_008bf4e0 + 0x67) == '\x01') {
      param_1[0xb] = (int)"ProcessUpdateMeshJob::SendConnectionReport";
      param_1[9] = (int)fn_004fd5d8;
      param_1[10] = 0;
    }
    else {
      param_1[9] = (int)fn_004fca40;
      param_1[10] = 0;
      param_1[0xb] = (int)"ProcessUpdateMeshJob::CheckConnectionAll";
    }
    iVar1 = 4;
  }
  return iVar1;
}



void fn_004feb10(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0x5c) + uVar1 * 0x14) == '\x01') {
        fn_004ed068();
      }
      fn_004ed13c(*(int *)(param_1 + 0x5c) + uVar1 * 0x14);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x6c));
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    fn_004ed068(param_1 + 0xb0);
  }
  fn_004ed13c(param_1 + 0xb0);
  fn_00158f40(param_1 + 0x60,0xc,0xff);
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



uint fn_004fe87c(int param_1)

{
  uint uVar1;
  uint unaff_r7;
  
  fn_00505974(DAT_008bf4e0);
  fn_005044fc(DAT_008bf4e0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0x5c) + uVar1 * 0x14) == '\x01') {
        fn_004ed068();
      }
      fn_004ed13c(*(int *)(param_1 + 0x5c) + uVar1 * 0x14);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x6c));
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    fn_004ed068(param_1 + 0xb0);
  }
  fn_004ed13c(param_1 + 0xb0);
  return unaff_r7 & 0xff00 | 1;
}



undefined4 fn_004fe3f0(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined1 uVar5;
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
  if ((*(uint *)(param_1 + 0x6c) < uVar14) || (uVar7 <= *(uint *)(param_1 + 0xa0))) {
    return 0;
  }
  if (*(char *)(param_2 + 8) == '\x01') {
    cVar3 = *(char *)(param_1 + 0x80);
    bVar15 = cVar3 == '\0';
    if (bVar15) {
      cVar3 = *(char *)(param_1 + 0x81);
    }
    if (!bVar15 || cVar3 != '\0') {
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
        uVar5 = *(undefined1 *)(iVar12 * iVar11 + param_2 + uVar6 + 0xc);
        (**(code **)(*(int *)(*(int *)(param_1 + 0x78) + iVar11 * 0x54) + 0x10))
                  (*(int *)(param_1 + 0x78) + iVar11 * 0x54,iVar12 * iVar11 + param_2 + 0xc);
        *(undefined1 *)(*(int *)(param_1 + 0x7c) + iVar11) = uVar5;
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)uVar14);
    }
    goto LAB_004fe660;
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
LAB_004fe554:
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
      uVar9 = uVar7;
      if (bVar15) {
        uVar9 = (uint)*(byte *)(param_1 + 0x85);
      }
      if (!bVar15 || uVar9 != 2) goto LAB_004fe554;
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
      (**(code **)(*(int *)(*(int *)(param_1 + 0x78) + iVar13 * 0x54) + 0x10))
                (*(int *)(param_1 + 0x78) + iVar13 * 0x54,iVar12 * iVar11 + param_2 + 0xc);
      iVar4 = iVar12 * iVar11;
      iVar11 = iVar11 + 1;
      *(undefined1 *)(*(int *)(param_1 + 0x7c) + iVar13) =
           *(undefined1 *)(iVar4 + param_2 + uVar6 + 0xc);
    } while (iVar11 < (int)(uint)bVar1);
  }
  *(undefined1 *)(param_1 + uVar8 + 0x80) = 1;
  bVar15 = *(char *)(param_1 + 0x80) == '\0';
  cVar3 = '\0';
  if (!bVar15) {
    cVar3 = *(char *)(param_1 + 0x81);
  }
  if (bVar15 || cVar3 == '\0') {
    return 1;
  }
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
LAB_004fe660:
  if (*(char *)(param_1 + 0xac) == '\0') {
    return 3;
  }
  fn_004fd258(param_1,uVar14);
  uVar5 = fn_004fbcec(param_1);
  *(undefined1 *)(param_1 + 0xac) = uVar5;
  fn_004fc840(param_1,0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(uint *)(param_1 + 0xa0) = uVar7;
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
  uVar10 = *(undefined4 *)(DAT_008bf49c + 0x34);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(DAT_008bf49c + 0x30);
  *(undefined4 *)(param_1 + 0x94) = uVar10;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  if (*(char *)(param_1 + 0xac) == '\0') {
    *(code **)(param_1 + 0x24) = fn_004fc71c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::UpdateFailed";
  }
  else if (*(char *)(DAT_008bf4e0 + 0x67) == '\x02') {
    *(code **)(param_1 + 0x24) = fn_004fdf90;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::WaitDirectConnection";
  }
  else if (*(char *)(DAT_008bf4e0 + 0x67) == '\x01') {
    *(code **)(param_1 + 0x24) = fn_004fd5d8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::SendConnectionReport";
  }
  else {
    *(code **)(param_1 + 0x24) = fn_004fca40;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "ProcessUpdateMeshJob::CheckConnectionAll";
  }
  return 4;
}


