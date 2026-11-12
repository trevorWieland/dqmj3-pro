#include "007ac308_007ac718a.h"



/* WARNING: Removing unreachable block (ram,0x007ac458) */
/* WARNING: Removing unreachable block (ram,0x007ac478) */
/* WARNING: Removing unreachable block (ram,0x007ac4f0) */
/* WARNING: Removing unreachable block (ram,0x007ac448) */
/* WARNING: Removing unreachable block (ram,0x007ac450) */

void fn_007ac308(byte *param_1,byte *param_2,int param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  byte local_98 [4];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  byte *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_5c [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((int)param_2 - (int)param_1 < 0x1c1) {
    return;
  }
  do {
    if (param_3 == 0) {
      uVar8 = (int)param_2 - (int)param_1;
      if (0x37 < (int)uVar8) {
        iVar1 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
        iVar9 = (iVar1 >> 4) - (iVar1 >> 0x1f);
        iVar1 = (iVar9 + -2) / 2;
        while( true ) {
          pbVar2 = param_1 + iVar1 * 0x1c;
          local_94 = CONCAT31(((unsigned int)(local_94) >> 8) & 0xffffff,*pbVar2);
          local_90 = *(undefined4 *)(pbVar2 + 4);
          uStack_8c = *(undefined4 *)(pbVar2 + 8);
          local_88 = *(undefined4 *)(pbVar2 + 0xc);
          local_84 = *(byte **)(pbVar2 + 0x10);
          local_80 = *(undefined4 *)(pbVar2 + 0x14);
          local_7c = *(undefined4 *)(pbVar2 + 0x18);
          fn_007a08a0(param_1,iVar1,iVar9,&local_94,param_4);
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
        }
      }
      while (0x1c < (int)uVar8) {
        if (param_1 != param_2) {
          uVar4 = *(undefined4 *)(param_1 + 4);
          uVar10 = *(undefined4 *)(param_1 + 8);
          uVar11 = *(undefined4 *)(param_1 + 0xc);
          uVar12 = *(undefined4 *)(param_1 + 0x10);
          uVar13 = *(undefined4 *)(param_1 + 0x14);
          uVar14 = *(undefined4 *)(param_1 + 0x18);
          local_98[0] = param_2[-0x1c];
          local_94 = *(undefined4 *)(param_2 + -0x18);
          local_90 = *(undefined4 *)(param_2 + -0x14);
          uStack_8c = *(undefined4 *)(param_2 + -0x10);
          local_88 = *(undefined4 *)(param_2 + -0xc);
          local_84 = *(byte **)(param_2 + -8);
          local_80 = *(undefined4 *)(param_2 + -4);
          *(undefined4 *)(param_2 + -0x1c) = *(undefined4 *)param_1;
          *(undefined4 *)(param_2 + -0x18) = uVar4;
          *(undefined4 *)(param_2 + -0x14) = uVar10;
          *(undefined4 *)(param_2 + -0x10) = uVar11;
          *(undefined4 *)(param_2 + -0xc) = uVar12;
          *(undefined4 *)(param_2 + -8) = uVar13;
          *(undefined4 *)(param_2 + -4) = uVar14;
          uVar8 = (int)(param_2 + -0x1c) - (int)param_1;
          iVar1 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
          fn_007a08a0(param_1,0,(iVar1 >> 4) - (iVar1 >> 0x1f),local_98,param_4);
        }
        param_2 = param_2 + -0x1c;
        uVar8 = (int)param_2 - (int)param_1;
      }
      return;
    }
    local_84 = local_5c;
    iVar1 = (int)((longlong)((int)param_2 - (int)param_1) * -0x6db6db6d +
                  ((ulonglong)(uint)((int)param_2 - (int)param_1) << 0x20) >> 0x20);
    pbVar7 = param_2 + -0x1c;
    pbVar2 = param_1 + ((iVar1 >> 5) - (iVar1 >> 0x1f)) * 0x1c;
    iVar1 = (**(code **)(**(int **)(param_4 + 8) + 8))(*(int **)(param_4 + 8),param_1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(**(int **)(param_4 + 8) + 8))(*(int **)(param_4 + 8),param_1,pbVar7);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(**(int **)(param_4 + 8) + 8))(*(int **)(param_4 + 8),pbVar2,pbVar7);
        if (iVar1 != 0) goto LAB_007ac5ec;
      }
      else {
LAB_007ac5c4:
        pbVar2 = param_1;
      }
    }
    else {
      iVar1 = (**(code **)(**(int **)(param_4 + 8) + 8))(*(int **)(param_4 + 8),pbVar2,pbVar7);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(**(int **)(param_4 + 8) + 8))(*(int **)(param_4 + 8),param_1,pbVar7);
        if (iVar1 == 0) goto LAB_007ac5c4;
LAB_007ac5ec:
        pbVar2 = pbVar7;
      }
    }
    pbVar7 = local_84;
    local_5c[0] = *pbVar2;
    local_58 = *(undefined4 *)(pbVar2 + 4);
    uStack_54 = *(undefined4 *)(pbVar2 + 8);
    local_50 = *(undefined4 *)(pbVar2 + 0xc);
    local_4c = *(undefined4 *)(pbVar2 + 0x10);
    local_48 = *(undefined4 *)(pbVar2 + 0x14);
    local_44 = *(undefined4 *)(pbVar2 + 0x18);
    pbVar5 = param_1;
    pbVar3 = param_2;
    while( true ) {
      while (iVar1 = (**(code **)(**(int **)(param_4 + 8) + 8))
                               (*(int **)(param_4 + 8),pbVar5,pbVar7), iVar1 != 0) {
        pbVar5 = pbVar5 + 0x1c;
      }
      do {
        pbVar6 = pbVar3;
        pbVar3 = pbVar6 + -0x1c;
        iVar1 = (**(code **)(**(int **)(param_4 + 8) + 8))(*(int **)(param_4 + 8),pbVar7);
      } while (iVar1 != 0);
      if (pbVar3 <= pbVar5) break;
      uVar4 = *(undefined4 *)(pbVar5 + 8);
      uVar19 = *(undefined4 *)(pbVar5 + 4);
      uVar10 = *(undefined4 *)(pbVar5 + 0xc);
      uVar11 = *(undefined4 *)(pbVar5 + 0x10);
      uVar12 = *(undefined4 *)(pbVar5 + 0x14);
      uVar13 = *(undefined4 *)(pbVar5 + 0x18);
      uVar18 = *(undefined4 *)(pbVar6 + -0x10);
      uVar20 = *(undefined4 *)(pbVar6 + -4);
      uVar16 = *(undefined4 *)(pbVar6 + -0xc);
      uVar17 = *(undefined4 *)(pbVar6 + -8);
      uVar14 = *(undefined4 *)pbVar3;
      uVar15 = *(undefined4 *)(pbVar6 + -0x18);
      pbVar2 = (byte *)((uint)pbVar2 & 0xffffff00 | (uint)*pbVar5);
      *(undefined4 *)(pbVar5 + 8) = *(undefined4 *)(pbVar6 + -0x14);
      *(undefined4 *)(pbVar5 + 0xc) = uVar18;
      *(undefined4 *)(pbVar5 + 0x18) = uVar20;
      *(undefined4 *)pbVar5 = uVar14;
      *(undefined4 *)(pbVar5 + 4) = uVar15;
      *(undefined4 *)(pbVar5 + 0x10) = uVar16;
      *(undefined4 *)(pbVar5 + 0x14) = uVar17;
      *(byte **)pbVar3 = pbVar2;
      *(undefined4 *)(pbVar6 + -0x18) = uVar19;
      *(undefined4 *)(pbVar6 + -0x14) = uVar4;
      *(undefined4 *)(pbVar6 + -0x10) = uVar10;
      *(undefined4 *)(pbVar6 + -0xc) = uVar11;
      *(undefined4 *)(pbVar6 + -8) = uVar12;
      *(undefined4 *)(pbVar6 + -4) = uVar13;
      pbVar5 = pbVar5 + 0x1c;
    }
    param_3 = param_3 / 2;
    fn_007ac308(pbVar5,param_2,param_3,param_4);
    param_2 = pbVar5;
    if ((int)pbVar5 - (int)param_1 < 0x1c1) {
      return;
    }
  } while( true );
}


