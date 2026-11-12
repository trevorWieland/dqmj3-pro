#include "004f2418_004f31e0.h"



uint fn_004f3084(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint unaff_r5;
  
  if (*(ushort *)(DAT_008bf4e0 + 0x5c) < 2) {
    *(char **)(param_1 + 0x2c) = "JoinMeshJob::CompleteCancelWithLeaveMesh";
    *(code **)(param_1 + 0x24) = fn_004f3154;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00;
  }
  fn_00505e04(DAT_008bf4e0,param_1 + 0x88);
  *(char **)(param_1 + 0x2c) = "JoinMeshJob::WaitLeaveMesh";
  *(undefined1 **)(param_1 + 0x24) = &LAB_004f1970;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r5 & 0xff00 | 5;
}



uint fn_004f3154(int param_1)

{
  uint unaff_r5;
  
  *(undefined1 *)(DAT_008bf4e0 + 0x65) = 2;
  fn_004ed068(*(undefined4 *)(param_1 + 0x44));
  fn_004ed13c(*(undefined4 *)(param_1 + 0x44));
  fn_004ed068(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  fn_006d8a94(param_1);
  fn_006d8aec(param_1);
  DAT_008ed96c = 0xd9214824;
  DAT_008edb18 = *(undefined4 *)(param_1 + 0x78);
  DAT_008edb24 = *(undefined1 *)(param_1 + 0x70);
  fn_00505c70(DAT_008bf4e0);
  return unaff_r5 & 0xff00 | 1;
}



uint fn_004f2cf4(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint unaff_r5;
  int iVar5;
  uint unaff_r6;
  undefined1 local_28;
  undefined1 local_27;
  undefined4 local_24;
  
  uVar2 = fn_004f2ff8();
  if (uVar2 != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    return uVar2 & 0xff00 | 1;
  }
  cVar1 = **(char **)(param_1 + 0x44);
  if ((cVar1 != '\x02') && (cVar1 != '\x03' && cVar1 != '\x04')) {
    uVar2 = fn_004f32d4(param_1);
    if (uVar2 == 0) {
      return param_1 & 0xff00 | 5;
    }
    return uVar2 & 0xff00 | 1;
  }
  iVar3 = *(int *)(*(char **)(param_1 + 0x44) + 4);
  if (iVar3 < 0) {
    if (iVar3 == -0x269eb77e) {
      iVar5 = -0x275eb71b;
    }
    else {
      iVar5 = -0x275eb77d;
    }
    if (iVar3 != -0x269eb77e && iVar3 != iVar5) {
      if (iVar3 == -0x275eb719) {
        iVar5 = -0x275eb719;
      }
      else if (iVar3 == -0x275eb716) {
        iVar5 = -0x275eb716;
      }
      else if (iVar3 == -0x275eb715) {
        iVar5 = -0x275eb715;
      }
      else if (iVar3 == -0x275eb714) {
        iVar5 = -0x275eb714;
      }
      else if (iVar3 == -0x275eb713) {
        iVar5 = -0x275eb713;
      }
      else if (iVar3 == -0x275eb70e) {
        iVar5 = -0x275eb70e;
      }
      else {
        iVar5 = -0x275eb71f;
      }
    }
    if (iVar5 != -0x275eb719) {
      iVar3 = -0x275eb718;
    }
    if (((((iVar5 == -0x275eb719 || iVar5 == iVar3) ||
          (iVar5 == -0x275eb717 || iVar5 == -0x275eb715)) ||
         (iVar5 == -0x275eb714 || iVar5 == -0x275eb713)) ||
        (iVar5 == -0x275eb716 || iVar5 == -0x275eb70e)) && (*(int *)(DAT_008bf4e0 + 0xa0) != 0)) {
      local_28 = 0x16;
      local_27 = 0xfd;
      local_24 = 0;
      (**(code **)**(undefined4 **)(DAT_008bf4e0 + 0xa0))
                (*(undefined4 **)(DAT_008bf4e0 + 0xa0),&local_28);
    }
    fn_006d8a94(param_1);
    pcVar4 = *(char **)(param_1 + 0x40);
    if (pcVar4 != (char *)0x0) {
      cVar1 = *pcVar4;
      if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
        fn_004ed098(pcVar4,iVar5);
      }
      DAT_008edb18 = *(undefined4 *)(param_1 + 0x78);
      DAT_008ed96c = iVar5;
      fn_00505c70(DAT_008bf4e0);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    fn_004ed068(*(undefined4 *)(param_1 + 0x44));
    fn_004ed13c(*(undefined4 *)(param_1 + 0x44));
    return unaff_r6 & 0xff00 | 1;
  }
  iVar3 = fn_0050b080(DAT_008bf4cc,*(undefined1 *)(DAT_008bf4e0 + 0x62));
  if (iVar3 != 0) {
    *(char **)(param_1 + 0x2c) = "JoinMeshJob::SendJoinRequest";
    *(code **)(param_1 + 0x24) = fn_004f1c48;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  fn_006d8a94(param_1);
  pcVar4 = *(char **)(param_1 + 0x40);
  if (pcVar4 != (char *)0x0) {
    cVar1 = *pcVar4;
    if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
      fn_004ed098(pcVar4,0xd8a148e1);
    }
    DAT_008ed96c = -0x275eb71f;
    DAT_008edb18 = *(undefined4 *)(param_1 + 0x78);
    fn_00505c70(DAT_008bf4e0);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  fn_004ed068(*(undefined4 *)(param_1 + 0x44));
  fn_004ed13c(*(undefined4 *)(param_1 + 0x44));
  return unaff_r5 & 0xff00 | 1;
}



undefined4 fn_004f2ff8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x40);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x10);
  }
  if (iVar2 != 0 && cVar1 != '\0') {
    fn_004ed068(*(undefined4 *)(param_1 + 0x44));
    fn_004ed13c(*(undefined4 *)(param_1 + 0x44));
    if (**(char **)(param_1 + 0x40) == '\x01') {
      fn_004ed068();
    }
    fn_006d8a94(param_1);
    fn_006d8aec(param_1);
    DAT_008ed96c = 0xd9214824;
    DAT_008edb18 = *(undefined4 *)(param_1 + 0x78);
    DAT_008edb24 = *(undefined1 *)(param_1 + 0x70);
    fn_00505c70(DAT_008bf4e0);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 fn_004f2418(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  
  uVar6 = (**(code **)(**(int **)(param_1 + 0x54) + 8))();
  bVar1 = *(byte *)(param_2 + 1);
  uVar8 = (uint)bVar1;
  bVar2 = *(byte *)(param_2 + 2);
  uVar11 = (uint)bVar2;
  bVar3 = *(byte *)(param_2 + 3);
  uVar13 = (uint)bVar3;
  iVar10 = (uVar6 - (uVar6 & 3)) + 4;
  if ((uVar8 == 0 || uVar11 == 0xff) || uVar13 == 0xff) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 4);
    *(undefined4 *)(*(int *)(DAT_008bf4e0 + 0x4c) + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x5c) = 0;
    return 1;
  }
  if (*(uint *)(param_1 + 0x50) < uVar8) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 0x60) = 3;
    *(undefined4 *)(*(int *)(DAT_008bf4e0 + 0x4c) + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x5c) = 0;
    return 1;
  }
  bVar4 = *(byte *)(param_2 + 4);
  uVar14 = (uint)bVar4;
  if (uVar14 == 1) {
    if (*(int *)(DAT_008bf4e0 + 0xa0) != 0) {
      local_34 = (*(ushort *)(param_2 + 8) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 8) >> 8) |
                 (uint)*(byte *)(param_2 + 10) << 0x10;
      local_38 = CONCAT22(((unsigned int)(local_38) >> 16) & 0xffff,0xfd17);
      (**(code **)**(undefined4 **)(DAT_008bf4e0 + 0xa0))
                (*(undefined4 **)(DAT_008bf4e0 + 0xa0),&local_38);
    }
    iVar9 = uVar6 + 0xc;
    bVar1 = *(byte *)(iVar10 * uVar11 + param_2 + iVar9);
    if (bVar1 < 0xc) {
      bVar1 = *(byte *)(iVar10 * uVar13 + param_2 + iVar9);
    }
    if (bVar1 < 0xc) {
      iVar15 = fn_004f31e0(param_1);
      if (iVar15 == 0) {
        return 0;
      }
      *(uint *)(param_1 + 0x4c) = uVar8;
      uVar6 = 0;
      if (uVar8 != 0) {
        do {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x54) + uVar6 * 0x54) + 0x10))
                    (*(int *)(param_1 + 0x54) + uVar6 * 0x54,iVar10 * uVar6 + param_2 + 0xc);
          *(undefined1 *)(*(int *)(param_1 + 0x58) + uVar6) =
               *(undefined1 *)(iVar10 * uVar6 + param_2 + iVar9);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_1 + 0x4c));
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined1 *)(param_1 + 0x60) = 3;
    }
    *(undefined4 *)(*(int *)(DAT_008bf4e0 + 0x4c) + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  else {
    if (1 < uVar14 - 2) {
      return 0;
    }
    local_34 = param_1 + (uint)*(byte *)(param_2 + 5);
    if (*(char *)(local_34 + 0x5d) == '\0') {
      return 1;
    }
    local_38 = 8;
    if ((*(byte *)(param_2 + 5) == 0) && (local_38 = 0xc, *(int *)(DAT_008bf4e0 + 0xa0) != 0)) {
      local_2c = (*(ushort *)(param_2 + 8) & 0xff) << 8 | (uint)(*(ushort *)(param_2 + 8) >> 8) |
                 (uint)*(byte *)(param_2 + 10) << 0x10;
      local_30 = CONCAT22(((unsigned int)(local_30) >> 16) & 0xffff,0xfd17);
      (**(code **)**(undefined4 **)(DAT_008bf4e0 + 0xa0))
                (*(undefined4 **)(DAT_008bf4e0 + 0xa0),&local_30);
    }
    if ((*(byte *)(param_1 + 0x5d) & 1 & *(byte *)(param_1 + 0x5e) & *(byte *)(param_1 + 0x5f)) == 0
       ) {
      uVar7 = (uint)*(byte *)(param_1 + 0x61);
      bVar16 = uVar7 != uVar8;
      if (!bVar16) {
        uVar7 = (uint)*(byte *)(param_1 + 0x62);
      }
      if (bVar16 || uVar7 != uVar11) {
        return 0;
      }
      uVar8 = (uint)*(byte *)(param_1 + 99);
      bVar16 = uVar8 == uVar13;
      if (bVar16) {
        uVar8 = (uint)*(byte *)(param_1 + 100);
      }
      if (!bVar16 || uVar8 != uVar14) {
        return 0;
      }
    }
    else {
      *(byte *)(param_1 + 0x61) = bVar1;
      *(byte *)(param_1 + 0x62) = bVar2;
      *(byte *)(param_1 + 99) = bVar3;
      *(byte *)(param_1 + 100) = bVar4;
    }
    bVar1 = *(byte *)(param_2 + 6);
    bVar2 = *(byte *)(param_2 + 7);
    iVar9 = 0;
    if (bVar1 != 0) {
      local_30 = local_38 + param_2;
      iVar15 = uVar6 + local_38;
      do {
        iVar12 = iVar9 + (uint)bVar2;
        (**(code **)(*(int *)(*(int *)(param_1 + 0x54) + iVar12 * 0x54) + 0x10))
                  (*(int *)(param_1 + 0x54) + iVar12 * 0x54,iVar10 * iVar9 + local_30);
        iVar5 = iVar10 * iVar9;
        iVar9 = iVar9 + 1;
        *(undefined1 *)(*(int *)(param_1 + 0x58) + iVar12) =
             *(undefined1 *)(iVar5 + param_2 + iVar15);
      } while (iVar9 < (int)(uint)bVar1);
    }
    bVar16 = false;
    *(undefined1 *)(local_34 + 0x5d) = 0;
    uVar6 = 0;
    if (*(byte *)(param_1 + 100) != 0) {
      do {
        iVar10 = param_1 + uVar6;
        uVar6 = uVar6 + 1;
        bVar16 = bVar16 || *(char *)(iVar10 + 0x5d) != '\0';
      } while (uVar6 < *(byte *)(param_1 + 100));
      if (bVar16) {
        return 1;
      }
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x58) + (uint)*(byte *)(param_1 + 0x62));
    if (bVar1 < 0xc) {
      bVar1 = *(byte *)(*(int *)(param_1 + 0x58) + (uint)*(byte *)(param_1 + 99));
    }
    if (bVar1 < 0xc) {
      iVar10 = fn_004f31e0(param_1);
      if (iVar10 == 0) {
        return 0;
      }
      *(uint *)(param_1 + 0x4c) = (uint)*(byte *)(param_1 + 0x61);
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined1 *)(param_1 + 0x60) = 3;
    }
    *(undefined4 *)(*(int *)(DAT_008bf4e0 + 0x4c) + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  return 1;
}



undefined4 fn_004f31e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = fn_0050b080(DAT_008bf4cc,*(undefined1 *)(DAT_008bf4e0 + 0x62));
  iVar4 = *(int *)(DAT_008bf4cc + 0xa4);
  if (iVar2 != 0 && iVar4 != 0) {
    *(char *)(iVar4 + 0x14) = (char)param_2;
    iVar3 = DAT_008bf4e0;
    *(char *)(DAT_008bf4e0 + 99) = (char)param_2;
    fn_00506924(iVar3,param_2);
    iVar3 = fn_0050c848(DAT_008bf4d4 + 0x10,param_2);
    if (-1 < iVar3) {
      *(undefined1 *)(iVar4 + 0x20) = 5;
      uVar1 = (undefined1)param_3;
      *(undefined1 *)(iVar2 + 0x14) = uVar1;
      iVar2 = DAT_008bf4e0;
      *(undefined1 *)(DAT_008bf4e0 + 0x62) = uVar1;
      fn_00505374(iVar2,0,param_2);
      fn_00504f0c(DAT_008bf4e0,param_3);
      *(undefined1 *)(DAT_008bf4cc + 0xa8) = uVar1;
      if (*(int *)(DAT_008bf4d4 + 100) - 0x100000U < 0x3ff00000) {
        fn_00510e04(*(int *)(DAT_008bf4d4 + 100),param_2,param_3);
      }
      return 1;
    }
  }
  return 0;
}


