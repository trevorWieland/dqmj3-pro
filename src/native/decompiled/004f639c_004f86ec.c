#include "004f639c_004f86ec.h"



uint fn_004f86ec(int param_1,uint param_2)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint unaff_r5;
  uint unaff_r6;
  undefined1 auStack_68 [72];
  undefined4 local_20;
  
  pcVar3 = *(char **)(param_1 + 0x40);
  if (pcVar3 != (char *)0x0) {
    param_2 = (uint)(byte)pcVar3[0x10];
  }
  if (pcVar3 != (char *)0x0 && param_2 != 0) {
    cVar1 = *pcVar3;
    if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
      fn_004ed068();
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    fn_004f89b8(param_1);
    return unaff_r5 & 0xff00 | 1;
  }
  iVar4 = fn_0050b80c(DAT_008bf4cc);
  iVar5 = fn_0051cae8(iVar4,*(undefined4 *)(DAT_008bf4e0 + 0x50));
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      fn_004ed098(*(int *)(param_1 + 0x40),&DAT_e0a14827);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    fn_004f89b8(param_1);
    return unaff_r5 & 0xff00 | 1;
  }
  fn_00505cf4(DAT_008bf4e0);
  uVar2 = fn_00505c04(DAT_008bf4e0);
  iVar5 = DAT_008bf4e0;
  *(undefined1 *)(DAT_008bf4e0 + 99) = uVar2;
  *(undefined1 *)(iVar5 + 0x62) = uVar2;
  fn_00506924();
  *(undefined1 *)(iVar4 + 0x14) = *(undefined1 *)(DAT_008bf4e0 + 99);
  iVar5 = DAT_008c06a0;
  fn_004ed810(iVar4 + 4,DAT_008c06a0 + 0xc);
  fn_0051b784(iVar5,iVar4,iVar5 + 4);
  fn_00519324(DAT_008c0674,auStack_68);
  if (*(code **)(DAT_008bf4e0 + 0x44) == (code *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = (**(code **)(DAT_008bf4e0 + 0x44))();
  }
  fn_00519360(DAT_008c0674,auStack_68);
  fn_00518cb4(DAT_008c0674,iVar4,auStack_68);
  *(undefined1 *)(DAT_008bf4cc + 0xa8) = *(undefined1 *)(DAT_008bf4e0 + 0x62);
  *(code **)(param_1 + 0x24) = fn_004f8474;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "CreateMeshJob::SetupMeshStatus";
  return unaff_r6 & 0xff00 | 6;
}



uint fn_004f8474(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_r6;
  undefined4 local_28;
  undefined4 uStack_24;
  
  pcVar2 = *(char **)(param_1 + 0x40);
  uVar5 = *(uint *)(DAT_008bf4cc + 0xa4);
  uVar4 = DAT_008bf4cc;
  if (pcVar2 != (char *)0x0) {
    uVar4 = (uint)(byte)pcVar2[0x10];
  }
  if (pcVar2 != (char *)0x0 && uVar4 != 0) {
    cVar1 = *pcVar2;
    if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
      fn_004ed068();
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    fn_004f89b8(param_1);
    fn_0051ba28(DAT_008c06a0,uVar5);
    fn_005191c0(DAT_008c0674,uVar5);
    return uVar5 & 0xff00 | 1;
  }
  iVar3 = fn_0050c848(DAT_008bf4d4 + 0x10,*(undefined1 *)(DAT_008bf4e0 + 99));
  if (iVar3 < 0) {
    fn_0051ba28(DAT_008c06a0,uVar5);
    fn_005191c0(DAT_008c0674,uVar5);
    if (*(int *)(param_1 + 0x40) != 0) {
      fn_004ed098(*(int *)(param_1 + 0x40),iVar3);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  else {
    *(undefined1 *)(uVar5 + 0x20) = 2;
    iVar3 = DAT_008bf4e0;
    *(undefined2 *)(DAT_008bf4e0 + 0x5c) = 1;
    *(undefined4 *)(iVar3 + 0x70) = 0;
    iVar3 = fn_005006c8(*(undefined4 *)(iVar3 + 0x10));
    if (iVar3 != 0) {
      fn_004efcf4(*(undefined4 *)(DAT_008bf4e0 + 0x10),0);
      fn_00518140(DAT_008c06a0 + 0x58,DAT_008c06a0 + 4);
      *(undefined1 *)(uVar5 + 0x20) = 5;
      fn_005040c0(DAT_008bf4e0,1);
      iVar3 = DAT_008bf4e0;
      *(undefined1 *)(DAT_008bf4e0 + 0x65) = 0;
      *(undefined1 *)(iVar3 + 0x60) = 1;
      fn_00505374(iVar3,0,*(undefined1 *)(iVar3 + 99));
      iVar3 = fn_0050c6d8(DAT_008bf4d4 + 0x10,*(undefined4 *)(DAT_008bf4e0 + 0x74),0x210);
      local_28 = 0;
      uStack_24 = 0;
      fn_004f01f4(&local_28);
      fn_00508014(iVar3 + 0x18,&local_28);
      iVar3 = DAT_008bf4e0;
      *(undefined4 *)(DAT_008bf4e0 + 0x78) = local_28;
      *(undefined4 *)(iVar3 + 0x7c) = uStack_24;
      *(undefined1 *)(iVar3 + 0x80) = 1;
      pcVar2 = *(char **)(param_1 + 0x40);
      if (pcVar2 != (char *)0x0) {
        cVar1 = *pcVar2;
        if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
          fn_004ed0e4(pcVar2,0);
        }
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      DAT_008ed96c = 0xffffffff;
      DAT_008ed96a = (undefined1)*(undefined2 *)(DAT_008bf4e0 + 0x5c);
      DAT_008edb18 = 0xffffffff;
      fn_00505c70();
      return unaff_r6 & 0xff00 | 1;
    }
    fn_0051ba28(DAT_008c06a0,uVar5);
    fn_005191c0(DAT_008c0674,uVar5);
    if (*(int *)(param_1 + 0x40) != 0) {
      fn_004ed098(*(int *)(param_1 + 0x40),&DAT_e0a14827);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  fn_004f89b8(param_1);
  return uVar5 & 0xff00 | 1;
}



/* WARNING: Removing unreachable block (ram,0x004f65a8) */

uint fn_004f639c(int param_1,uint param_2,undefined4 *param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  undefined1 *puVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined1 auStack_110 [100];
  uint local_ac;
  int local_a0;
  uint local_9c;
  undefined1 auStack_98 [4];
  undefined4 local_94;
  uint local_90;
  int local_44;
  int iStack_34;
  uint local_30;
  undefined4 *local_2c;
  uint *local_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  fn_00124e48(auStack_110);
  local_90 = fn_006db058(auStack_110);
  local_44 = (local_90 - (local_90 & 3)) + 4;
  bVar1 = *(byte *)(DAT_008bf4e0 + 0x62);
  fn_00158f6c(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x48));
  local_ac = 0xff;
  local_9c = 0xff;
  puVar13 = *(undefined1 **)(param_1 + 0x4c);
  uVar11 = 0;
  uVar5 = extraout_r1;
  if (DAT_008bf4e8 != 0) {
    uVar14 = fn_006d9588();
    iVar12 = DAT_008bf4e8;
    uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
    if ((int)uVar14 != 0) {
      if (*(int *)(DAT_008bf4e8 + (uint)*(byte *)(DAT_008bf4e8 + 0xb5) * 4 + 0xb8) != 0) {
        puVar13[8] = *(undefined1 *)((uint)*(byte *)(DAT_008bf4e8 + 0xb5) + DAT_008bf4e8 + 0xb3);
      }
      uVar5 = 0;
      if (*(int *)(iVar12 + (uint)(*(char *)(iVar12 + 0xb5) == '\0') * 4 + 0xb8) != 0) {
        uVar5 = (uint)(*(char *)(iVar12 + 0xb5) == '\0');
        puVar13[9] = *(undefined1 *)(uVar5 + iVar12 + 0xb3);
      }
    }
  }
  uVar10 = 0xc;
  puVar13[10] = (char)*(undefined2 *)(DAT_008bf4e0 + 0x5e);
  local_94 = DAT_008c06a0;
  for (piVar8 = (int *)(DAT_008bf4cc + 0x3c);
      piVar8 != (int *)(DAT_008bf4cc + *(int *)(DAT_008bf4cc + 0x38) * 4 + 0x3c);
      piVar8 = piVar8 + 1) {
    puVar4 = (undefined4 *)*piVar8;
    bVar2 = *(byte *)(puVar4 + 5);
    uVar6 = (uint)bVar2;
    if (uVar6 < 0xc) {
      if (uVar6 == bVar1) {
        local_ac = uVar11;
      }
      local_a0 = 0;
      if (uVar6 == local_30) {
        local_9c = uVar11;
      }
      fn_006db908(local_94,*piVar8,auStack_110);
      fn_006db080(auStack_110,puVar13 + uVar10,&local_a0,local_90);
      uVar11 = uVar11 + 1 & 0xff;
      iVar12 = local_a0 + uVar10;
      uVar10 = iVar12 + 2;
      puVar13[iVar12] = bVar2;
      uVar5 = extraout_r1_01;
    }
    else {
      (**(code **)*puVar4)(puVar4,uVar5,0x80000000,0);
      uVar5 = extraout_r1_00;
    }
  }
  fn_00124e48(auStack_98);
  uVar5 = fn_006db058();
  fn_0051811c(auStack_98);
  uVar6 = fn_006d9934(*(undefined4 *)(param_1 + 0x10));
  cVar3 = (char)uVar11;
  if ((uVar11 - 1 < 0xc) && (uVar9 = uVar11, uVar11 != 0)) {
    do {
      if (((uVar5 - (uVar5 & 3)) + 4) * uVar9 + 0xc <= uVar6) {
        uVar14 = fn_00169f1c(uVar11);
        uVar5 = (int)uVar14 + (uint)((int)((ulonglong)uVar14 >> 0x20) != 0);
        if (uVar5 != 1) goto LAB_004f65f4;
        uVar11 = fn_006d9934(*(undefined4 *)(param_1 + 0x10));
        if (uVar11 < uVar10) goto LAB_004f6740;
        puVar7 = (undefined1 *)*local_2c;
        *puVar7 = 2;
        puVar7[1] = cVar3;
        puVar7[2] = (char)local_ac;
        puVar7[3] = (char)local_9c;
        puVar7[4] = 1;
        puVar7[5] = 0;
        puVar7[6] = cVar3;
        puVar7[7] = 0;
        fn_001694e4(puVar7 + 8,puVar13 + 8,uVar10 - 8);
        *local_28 = uVar10;
        goto LAB_004f672c;
      }
      uVar9 = uVar9 - 1;
    } while (0 < (int)uVar9);
  }
  uVar5 = 0;
LAB_004f65f4:
  if (1 < uVar5 - 2) {
LAB_004f6740:
    fn_0051811c(auStack_110);
    return 0;
  }
  uVar14 = fn_00169f1c(uVar11,uVar5);
  uVar6 = (int)uVar14 + (uint)((int)((ulonglong)uVar14 >> 0x20) != 0);
  uVar10 = uVar6 & 0xff;
  iVar12 = 0;
  if (uVar5 != 0) {
    uVar6 = uVar5 & 0xff;
  }
  uVar9 = 0;
  if (uVar5 != 0) {
    puVar7 = puVar13;
    local_90 = uVar6;
    do {
      *puVar7 = 2;
      puVar7[7] = cVar3 - (char)uVar11;
      puVar7[5] = (char)uVar9;
      puVar7[1] = cVar3;
      puVar7[2] = (char)local_ac;
      puVar7[3] = (char)local_9c;
      puVar7[4] = (char)local_90;
      puVar7[6] = (char)uVar10;
      if (uVar9 == 0) {
        uVar6 = local_44 * uVar10 + 0xc;
      }
      else {
        uVar6 = local_44 * uVar10 + 8;
      }
      fn_001694e4(local_2c[uVar9],puVar7,uVar6);
      uVar11 = uVar11 - uVar10 & 0xff;
      local_28[uVar9] = uVar6;
      iVar12 = iVar12 + uVar6 + -8;
      if (uVar11 < uVar10) {
        uVar10 = uVar11;
      }
      uVar9 = uVar9 + 1;
      puVar7 = puVar13 + iVar12;
    } while (uVar9 < uVar5);
  }
LAB_004f672c:
  fn_0051811c(auStack_110);
  return uVar5;
}


