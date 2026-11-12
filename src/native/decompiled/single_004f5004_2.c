#include "single_004f5004_2.h"



void fn_004f5004(int param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined1 auStack_90 [84];
  uint local_3c;
  int *local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  
  fn_00124e48(auStack_90);
  local_3c = fn_006db058(auStack_90);
  if (DAT_008bf4cc[0x29] - 0x100000 < 0x3ff00000) {
    local_2c = (uint)*(byte *)(DAT_008bf4e0 + 0x62);
    local_28 = (uint)*(ushort *)(DAT_008bf4e0 + 0x5e) * ((local_3c - (local_3c & 3)) + 4) + 0xc;
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0x58) == '\0') goto LAB_004f5384;
    }
    else {
      *(int *)(DAT_008bf4e0 + 0x70) = *(int *)(DAT_008bf4e0 + 0x70) + 1;
      fn_00158f6c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x50));
      local_34 = 0xff;
      puVar9 = *(undefined1 **)(param_1 + 0x54);
      uVar12 = 0;
      iVar13 = 0xc;
      local_38 = DAT_008c06a0;
      for (piVar14 = DAT_008bf4cc + 0xf; piVar14 != DAT_008bf4cc + DAT_008bf4cc[0xe] + 0xf;
          piVar14 = piVar14 + 1) {
        puVar3 = (undefined4 *)*piVar14;
        bVar1 = *(byte *)(puVar3 + 5);
        uVar7 = (uint)bVar1;
        if (uVar7 < 0xc) {
          iVar4 = fn_006d92e4(DAT_008bf4e0,uVar7);
          if (iVar4 == 0) {
            puVar3 = (undefined4 *)*piVar14;
            goto LAB_004f50d4;
          }
          local_30 = 0;
          if (uVar7 == local_2c) {
            local_34 = uVar12;
          }
          fn_006db908(local_38,*piVar14,auStack_90);
          fn_006db080(auStack_90,puVar9 + iVar13,&local_30,local_3c);
          uVar12 = uVar12 + 1 & 0xff;
          iVar4 = local_30 + iVar13;
          iVar13 = iVar4 + 2;
          puVar9[iVar4] = bVar1;
        }
        else {
LAB_004f50d4:
          (**(code **)*puVar3)(puVar3,*(code **)*puVar3,0,2);
        }
      }
      if (*(ushort *)(DAT_008bf4e0 + 0x5e) < uVar12) {
        (**(code **)*DAT_008bf4cc)(DAT_008bf4cc,*(code **)*DAT_008bf4cc,0x40000000,0);
        (**(code **)(*local_38 + 8))(local_38,*(code **)(*local_38 + 8),0x40000000,0);
      }
      *puVar9 = 0x20;
      puVar9[1] = (char)uVar12;
      puVar9[2] = (char)local_34;
      fn_004ed514(puVar9 + 4,*(undefined4 *)(DAT_008bf4e0 + 0x70));
      puVar9[8] = 1;
      puVar9[9] = 0;
      puVar9[10] = (char)uVar12;
      puVar9[0xb] = 0;
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
    iVar13 = 0;
    uVar12 = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      do {
        iVar4 = fn_006db038(*(int *)(param_1 + 0x40) + uVar12 * 0x68);
        if ((iVar4 != 0) &&
           (iVar5 = fn_006d92e4(DAT_008bf4e0,
                                 *(undefined1 *)(*(int *)(param_1 + 0x40) + uVar12 * 0x68 + 9)),
           iVar4 = DAT_008bf4d4, iVar5 != 0)) {
          if (param_2 == 0) {
            iVar5 = fn_00169f1c(*(undefined4 *)(param_1 + 0x24),
                                 *(undefined4 *)(DAT_008bf4d4 + 0x30));
            uVar11 = iVar5 * iVar13;
            piVar14 = (int *)(*(int *)(param_1 + 0x60) + uVar12 * 8);
            puVar6 = (uint *)fn_004f0ce8();
            iVar13 = iVar13 + 1;
            lVar2 = (ulonglong)uVar11 * (ulonglong)*puVar6;
            uVar7 = (uint)lVar2;
            uVar8 = *(uint *)(iVar4 + 8);
            piVar14[1] = *puVar6 * ((int)uVar11 >> 0x1f) +
                         puVar6[1] * uVar11 + (int)((ulonglong)lVar2 >> 0x20) +
                         *(int *)(iVar4 + 0xc) + (uint)CARRY4(uVar7,uVar8);
            *piVar14 = uVar7 + uVar8;
          }
          else {
            iVar4 = fn_00517cf0(*(int *)(param_1 + 0x40) + uVar12 * 0x68,
                                 *(undefined4 *)(param_1 + 0x54),local_28);
            if ((-1 < iVar4) && (DAT_008bf4a0 != 0)) {
              iVar4 = *(int *)(param_1 + 0x40);
              uVar15 = fn_004eea84(DAT_008bf4a0,7);
              fn_004f15b4((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                           *(undefined4 *)(iVar4 + uVar12 * 0x68 + 0x1c),0);
            }
            iVar4 = DAT_008bf4d4;
            iVar10 = *(int *)(param_1 + 0x24);
            iVar5 = fn_00169f1c(iVar10,*(undefined4 *)(DAT_008bf4d4 + 0x30));
            uVar11 = iVar5 * iVar13 + iVar10;
            piVar14 = (int *)(*(int *)(param_1 + 0x60) + uVar12 * 8);
            puVar6 = (uint *)fn_004f0ce8();
            lVar2 = (ulonglong)uVar11 * (ulonglong)*puVar6;
            uVar8 = (uint)lVar2;
            iVar13 = iVar13 + 1;
            uVar7 = *(uint *)(iVar4 + 8);
            piVar14[1] = *puVar6 * ((int)uVar11 >> 0x1f) +
                         puVar6[1] * uVar11 + (int)((ulonglong)lVar2 >> 0x20) +
                         *(int *)(iVar4 + 0xc) + (uint)CARRY4(uVar7,uVar8);
            *piVar14 = uVar7 + uVar8;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_1 + 0x3c));
    }
  }
LAB_004f5384:
  fn_0051811c(auStack_90);
  return;
}


