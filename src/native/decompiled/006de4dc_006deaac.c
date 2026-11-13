#include "006de4dc_006deaac.h"



void fn_006deaac(int *param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined2 *puVar8;
  int local_68;
  int local_64;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 local_58;
  uint uStack_54;
  int *local_34;
  int iStack_30;
  byte *pbStack_2c;
  int iStack_28;
  
  local_64 = *(int *)(param_5 + 8) + param_4;
  local_68 = param_4;
  local_34 = param_1;
  iStack_30 = param_2;
  pbStack_2c = param_3;
  iStack_28 = param_4;
  fn_0017dc74(&local_58,&local_68,*(undefined4 *)(param_5 + 0x2c),4);
  *(undefined4 *)(param_3 + 4) = local_58;
  *(uint *)(param_3 + 8) = uStack_54 >> 1;
  for (uVar3 = 0; uVar3 < uStack_54 >> 1; uVar3 = uVar3 + 1) {
  }
  fn_0017dc74(&local_58,&local_68,*(undefined4 *)(param_5 + 0x34),4);
  uVar3 = uStack_54 >> 6;
  *(undefined4 *)(param_3 + 0xc) = local_58;
  *(uint *)(param_3 + 0x10) = uVar3;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  fn_0017dc74(&local_58,&local_68,*(undefined4 *)(param_5 + 0x3c),4);
  *(undefined4 *)(param_3 + 0x14) = local_58;
  *(uint *)(param_3 + 0x18) = uStack_54 / 0x30;
  for (uVar3 = 0; uVar3 < uStack_54 / 0x30; uVar3 = uVar3 + 1) {
  }
  if (*(char *)(param_2 + 1) == '\x02') {
    fn_0017dc74(&local_60,&local_68,*(undefined4 *)(param_5 + 0x44),4);
    *(undefined4 *)(param_3 + 0x1c) = local_60;
    *(uint *)(param_3 + 0x20) = uStack_5c / 0xc;
    for (uVar3 = 0; uVar3 < uStack_5c / 0xc; uVar3 = uVar3 + 1) {
    }
  }
  puVar5 = *(undefined2 **)(param_3 + 4);
  iVar6 = 0;
  bVar1 = false;
  puVar8 = puVar5 + *(int *)(param_3 + 8);
  while (puVar5 != puVar8) {
    puVar7 = (uint *)(*(int *)(param_2 + 0x70) + iVar6 * 100);
    *puVar5 = (short)puVar7[1];
    fn_001ad184(*(int *)(param_3 + 0x14) + iVar6 * 0x30,puVar7 + 0xb);
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + 1;
    if ((*puVar7 & 0x70000) != 0) {
      bVar1 = true;
    }
  }
  fn_006deea8(param_2,param_3);
  param_3[1] = *(byte *)(param_2 + 1);
  if (bVar1) {
    bVar2 = *param_3 | 1;
  }
  else {
    bVar2 = *param_3 & 0xfe;
  }
  *param_3 = bVar2;
  *local_34 = local_68;
  local_34[1] = 0;
  return;
}



void fn_006de898(int param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  iVar2 = *param_3;
  uVar1 = *(ushort *)(param_1 + 0x38);
  iVar3 = (uint)uVar1 * 0x158;
  *param_2 = iVar3 + 3;
  param_2[6] = (uint)uVar1;
  param_2[7] = iVar3;
  uVar4 = (uint)*(ushort *)(param_1 + 0x38);
  iVar2 = (iVar2 * 0xe + 0x23U & 0xfffffffc) * 8;
  if (uVar4 == 0 || iVar2 == 0) {
    uVar5 = 0;
    uVar4 = uVar5;
  }
  else {
    uVar5 = iVar2 * uVar4;
    param_2[1] = param_2[1] + uVar5 + 0xf;
  }
  param_2[9] = uVar5;
  param_2[8] = uVar4;
  uVar1 = *(ushort *)(param_1 + 0x74);
  iVar2 = (uint)uVar1 * 2;
  iVar3 = param_2[2] + iVar2 + 3;
  param_2[2] = iVar3;
  param_2[10] = (uint)uVar1;
  param_2[0xb] = iVar2;
  uVar1 = *(ushort *)(param_1 + 0x74);
  iVar2 = (uint)uVar1 * 0x40;
  iVar3 = iVar3 + iVar2 + 3;
  param_2[2] = iVar3;
  param_2[0xc] = (uint)uVar1;
  param_2[0xd] = iVar2;
  uVar1 = *(ushort *)(param_1 + 0x74);
  iVar2 = (uint)uVar1 * 0x30;
  param_2[0xf] = iVar2;
  iVar2 = iVar3 + iVar2 + 3;
  param_2[0xe] = (uint)uVar1;
  param_2[2] = iVar2;
  if (*(char *)(param_1 + 1) == '\x02') {
    uVar1 = *(ushort *)(param_1 + 0x74);
    iVar3 = (uint)uVar1 * 0xc;
    param_2[0x11] = iVar3;
    param_2[0x10] = (uint)uVar1;
    param_2[2] = iVar2 + iVar3 + 3;
  }
  uVar4 = *(int *)(param_1 + 0x80) + 7U >> 3;
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    param_2[3] = param_2[3] + uVar4 + 3;
  }
  param_2[0x12] = uVar4;
  param_2[0x13] = uVar4;
  iVar3 = *(int *)(param_1 + 0x6c);
  iVar2 = iVar3 * 8;
  param_2[4] = param_2[4] + iVar2 + 3;
  param_2[0x14] = iVar3;
  param_2[0x15] = iVar2;
  uVar5 = 0;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    do {
      iVar2 = uVar5 * 0x1c;
      uVar5 = uVar5 + 1;
      param_2[4] = param_2[4] + *(int *)(*(int *)(param_1 + 0x68) + iVar2 + 4) * 0x18 + 3;
      uVar4 = *(uint *)(param_1 + 0x6c);
    } while (uVar5 < uVar4);
  }
  param_2[5] = param_2[5] + uVar4 * 0xc + 3;
  param_2[0x16] = uVar4;
  param_2[0x17] = uVar4 * 0xc;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    do {
      iVar2 = uVar4 * 0x1c;
      uVar4 = uVar4 + 1;
      uVar6 = *(uint *)(*(int *)(param_1 + 0x68) + iVar2 + 0x14);
      uVar5 = (uVar6 & 0x1ff) >> 1;
      if ((uVar6 & 1) != 0) {
        uVar5 = uVar5 + 1;
      }
      param_2[5] = param_2[5] + (uVar5 & 0xff) * 8 + 3;
    } while (uVar4 < *(uint *)(param_1 + 0x6c));
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x006de858) */
/* WARNING: Removing unreachable block (ram,0x006de824) */
/* WARNING: Removing unreachable block (ram,0x006de88c) */

void fn_006de4dc(int *param_1,undefined4 *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  uVar4 = 0;
  iVar1 = *param_3 + (uint)*(ushort *)(param_4 + 0x20) * 0x278;
  puVar5 = (undefined1 *)(iVar1 + 4);
  if ((*(byte *)(*param_1 + 6) & 0x10) == 0) {
    do {
      if (puVar5[uVar4 + 0x164] != '\0') {
        iVar2 = *param_3 + (uint)*(ushort *)(param_4 + 0x20) * 0x278 + uVar4 * 0x10;
        puVar5[uVar4 * 0x2c + 0xb] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b4) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x40)) >> 8);
        puVar5[uVar4 * 0x2c + 0xc] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b5) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x41)) >> 8);
        puVar5[uVar4 * 0x2c + 0xd] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b6) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x42)) >> 8);
        puVar5[uVar4 * 0x2c + 8] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b8) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x44)) >> 8);
        puVar5[uVar4 * 0x2c + 9] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b9) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x45)) >> 8);
        puVar5[uVar4 * 0x2c + 10] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1ba) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x46)) >> 8);
        puVar5[uVar4 * 0x2c + 0xe] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1bc) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x48)) >> 8);
        puVar5[uVar4 * 0x2c + 0xf] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1bd) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x49)) >> 8);
        puVar5[uVar4 * 0x2c + 0x10] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1be) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x4a)) >> 8);
        puVar5[uVar4 * 0x2c + 0x11] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1c0) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x4c)) >> 8);
        puVar5[uVar4 * 0x2c + 0x12] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1c1) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x4d)) >> 8);
        puVar5[uVar4 * 0x2c + 0x13] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1c2) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x4e)) >> 8);
        puVar5[uVar4 * 0x2c + 6] = (char)((*(byte *)(*param_1 + 6) & 0x20) >> 5);
        puVar5[uVar4 * 0x2c + 7] = (char)((*(byte *)(*param_1 + 6) & 0x40) >> 6);
        uVar3 = fn_006cf360(puVar5 + uVar4 * 0x2c + 4,*param_2);
        *param_2 = uVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
  }
  else {
    do {
      if (puVar5[uVar4 + 0x164] != '\0') {
        iVar2 = *param_3 + (uint)*(ushort *)(param_4 + 0x20) * 0x278 + uVar4 * 0x10;
        puVar5[uVar4 * 0x2c + 0xb] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b4) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x40)) >> 8);
        puVar5[uVar4 * 0x2c + 0xc] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b5) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x41)) >> 8);
        puVar5[uVar4 * 0x2c + 0xd] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b6) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x42)) >> 8);
        puVar5[uVar4 * 0x2c + 8] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b8) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x44)) >> 8);
        puVar5[uVar4 * 0x2c + 9] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1b9) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x45)) >> 8);
        puVar5[uVar4 * 0x2c + 10] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1ba) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x46)) >> 8);
        puVar5[uVar4 * 0x2c + 0xe] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1bc) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x48)) >> 8);
        puVar5[uVar4 * 0x2c + 0xf] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1bd) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x49)) >> 8);
        puVar5[uVar4 * 0x2c + 0x10] =
             (char)((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0x1be) *
                          (int)(short)(ushort)*(byte *)(param_4 + 0x4a)) >> 8);
        puVar5[uVar4 * 0x2c + 0x11] = *(undefined1 *)(iVar2 + 0x1c0);
        puVar5[uVar4 * 0x2c + 0x12] = *(undefined1 *)(iVar2 + 0x1c1);
        puVar5[uVar4 * 0x2c + 0x13] = *(undefined1 *)(iVar2 + 0x1c2);
        puVar5[uVar4 * 0x2c + 6] = (char)((*(byte *)(*param_1 + 6) & 0x20) >> 5);
        puVar5[uVar4 * 0x2c + 7] = (char)((*(byte *)(*param_1 + 6) & 0x40) >> 6);
        uVar3 = fn_006cf360(puVar5 + uVar4 * 0x2c + 4,*param_2);
        *param_2 = uVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
  }
  iVar2 = *param_3 + (uint)*(ushort *)(param_4 + 0x20) * 0x278;
  uVar4 = (uint)*(byte *)(param_4 + 0x3c) +
          ((uint)((int)(short)(ushort)*(byte *)(param_4 + 0x40) *
                 (int)(short)(ushort)*(byte *)(iVar2 + 0x234)) >> 8);
  if (0xff < uVar4) {
    uVar4 = 0xff;
  }
  *puVar5 = (char)uVar4;
  uVar4 = (uint)*(byte *)(param_4 + 0x3d) +
          ((uint)((int)(short)(ushort)*(byte *)(param_4 + 0x41) *
                 (int)(short)(ushort)*(byte *)(iVar2 + 0x235)) >> 8);
  if (0xff < uVar4) {
    uVar4 = 0xff;
  }
  *(char *)(iVar1 + 5) = (char)uVar4;
  uVar4 = (uint)*(byte *)(param_4 + 0x3e) +
          ((uint)((int)(short)(ushort)*(byte *)(param_4 + 0x42) *
                 (int)(short)(ushort)*(byte *)(iVar2 + 0x236)) >> 8);
  if (0xff < uVar4) {
    uVar4 = 0xff;
  }
  *(char *)(iVar1 + 6) = (char)uVar4;
  return;
}


