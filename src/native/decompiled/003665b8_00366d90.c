#include "003665b8_00366d90.h"



void fn_00366d90(int param_1)

{
  if (*(float *)(param_1 + 0x10) < 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00366db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x24) + 0x28))();
    return;
  }
  return;
}



void fn_00366c9c(int *param_1)

{
  int iVar1;
  uint uVar2;
  float in_s0;
  
  iVar1 = param_1[7] - param_1[6] >> 0x1f;
  if ((param_1[7] - param_1[6]) / 0x2c + iVar1 != iVar1) {
    if (in_s0 <= 0.0) {
      (**(code **)(*(int *)param_1[9] + 0x28))();
    }
    uVar2 = 0;
    iVar1 = param_1[7] - param_1[6] >> 0x1f;
    if ((param_1[7] - param_1[6]) / 0x2c + iVar1 != iVar1) {
      do {
        iVar1 = param_1[6] + uVar2 * 0x2c;
        if ((*(char *)(iVar1 + 0x17) == '\x04') &&
           (iVar1 = fn_002e025c(*(undefined4 *)(iVar1 + 8)), iVar1 != 0)) {
          (**(code **)(*param_1 + 0x58))(param_1,*(undefined4 *)(param_1[6] + uVar2 * 0x2c));
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)((param_1[7] - param_1[6]) / 0x2c));
    }
  }
  return;
}



void fn_00366c10(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = param_1[7] - param_1[6] >> 0x1f;
  if ((param_1[7] - param_1[6]) / 0x2c + iVar1 != iVar1) {
    uVar3 = 0;
    do {
      puVar2 = (undefined4 *)(param_1[6] + uVar3 * 0x2c);
      if (*(char *)((int)puVar2 + 0x17) == '\x04') {
        (**(code **)(*param_1 + 0x58))(param_1,*puVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((param_1[7] - param_1[6]) / 0x2c));
  }
  return;
}



int fn_00366a74(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 *param_5,
                undefined4 *param_6,undefined4 *param_7)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  bVar1 = false;
  local_5c = local_5c & 0xffff0000;
  iVar8 = 9999;
  iVar4 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c);
  iVar3 = iVar4 >> 0x1f;
  do {
    iVar8 = iVar8 + 1;
    if (iVar4 / 0x34 + iVar3 != iVar3) {
      uVar5 = 0;
      do {
        uVar6 = uVar5 + 1;
        if (*(short *)(*(int *)(param_1 + 0x2c) + uVar5 * 0x34 + 2) == iVar8) {
          bVar1 = true;
        }
        uVar5 = uVar6;
      } while (uVar6 < (uint)((*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0x34));
    }
  } while (bVar1);
  local_68 = CONCAT22((short)iVar8,(short)param_3);
  local_64 = param_4 & 0xffff;
  local_60 = param_2 << 0x10;
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  uVar2 = fn_006c9504(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),param_2);
  local_5c = CONCAT22(((unsigned int)(local_5c) >> 16) & 0xffff,uVar2);
  local_58 = *param_5;
  uStack_54 = param_5[1];
  uStack_50 = param_5[2];
  local_4c = *param_6;
  local_48 = param_6[1];
  uStack_44 = param_6[2];
  local_40 = *param_7;
  uStack_3c = param_7[1];
  uStack_38 = param_7[2];
  puVar7 = *(undefined4 **)(param_1 + 0x30);
  iVar4 = (int)puVar7 - *(int *)(param_1 + 0x2c);
  iVar3 = iVar4 >> 0x1f;
  if (iVar4 / 0x34 + iVar3 == iVar3) {
    puVar7 = *(undefined4 **)(param_1 + 0x3c);
    iVar3 = param_1 + 0x38;
    if (puVar7 == *(undefined4 **)(param_1 + 0x40)) goto code_r0x00366bf4;
    *(undefined4 **)(param_1 + 0x3c) = puVar7 + 0xd;
  }
  else {
    iVar3 = param_1 + 0x2c;
    if (puVar7 == *(undefined4 **)(param_1 + 0x34)) {
code_r0x00366bf4:
      fn_0078f330(iVar3,puVar7,&local_68);
      goto LAB_00366bf8;
    }
    *(undefined4 **)(param_1 + 0x30) = puVar7 + 0xd;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = local_68;
    puVar7[1] = local_64;
    puVar7[2] = local_60;
    puVar7[3] = local_5c;
    puVar7[4] = local_58;
    puVar7[5] = uStack_54;
    puVar7[6] = uStack_50;
    puVar7[7] = local_4c;
    puVar7[8] = local_48;
    puVar7[9] = uStack_44;
    puVar7[10] = local_40;
    puVar7[0xb] = uStack_3c;
    puVar7[0xc] = uStack_38;
  }
LAB_00366bf8:
  return (int)((unsigned int)(local_68) >> 16) & 0xffff;
}



undefined4 fn_003666fc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar3 = iVar1 >> 0x1f;
  if (iVar1 / 0x2c + iVar3 != iVar3) {
    do {
      iVar3 = *(int *)(param_1 + 0x18) + uVar2 * 0x2c;
      if ((*(int *)(iVar3 + 8) != 0) && (iVar1 = fn_006bb52c(), iVar1 == param_2)) {
        return *(undefined4 *)(iVar3 + 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
  }
  return 0;
}



void fn_003666d8(int param_1)

{
  if (*(int **)(param_1 + 0x24) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003666ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x24) + 0x58))();
  return;
}



void fn_003665b8(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  
  piVar2 = *(int **)(param_1 + 0x24);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2,param_1 + 0x18);
  }
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar7 = iVar4 >> 0x1f;
  if (iVar4 / 0x2c + iVar7 != iVar7) {
    do {
      iVar7 = *(int *)(param_1 + 0x18);
      puVar9 = (undefined4 *)(iVar7 + uVar3 * 0x2c);
      uVar5 = uVar3 + 1;
      fVar10 = (float)puVar9[3];
      uVar8 = 0xffffffff;
      uVar1 = (*(int *)(param_1 + 0x1c) - iVar7) / 0x2c;
      if (uVar5 < uVar1) {
        do {
          fVar12 = *(float *)(iVar7 + uVar5 * 0x2c + 0xc);
          if (fVar12 < fVar10) {
            uVar8 = uVar5;
            fVar10 = fVar12;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
        if (uVar8 != 0xffffffff) {
          uVar22 = *puVar9;
          puVar6 = (undefined4 *)(iVar7 + uVar8 * 0x2c);
          uVar11 = puVar9[1];
          uVar13 = puVar9[2];
          uVar23 = puVar6[1];
          uVar24 = puVar6[2];
          uVar25 = puVar6[3];
          uVar26 = puVar6[4];
          uVar27 = puVar6[5];
          uVar28 = puVar6[6];
          uVar29 = puVar6[7];
          uVar14 = puVar9[3];
          uVar15 = puVar9[4];
          uVar16 = puVar9[5];
          uVar17 = puVar9[6];
          uVar18 = puVar9[7];
          uVar19 = puVar9[8];
          uVar20 = puVar9[9];
          uVar21 = puVar9[10];
          *puVar9 = *puVar6;
          puVar9[1] = uVar23;
          puVar9[2] = uVar24;
          puVar9[3] = uVar25;
          puVar9[4] = uVar26;
          puVar9[5] = uVar27;
          puVar9[6] = uVar28;
          puVar9[7] = uVar29;
          uVar23 = puVar6[9];
          uVar24 = puVar6[10];
          puVar9[8] = puVar6[8];
          puVar9[9] = uVar23;
          puVar9[10] = uVar24;
          *puVar6 = uVar22;
          puVar6[1] = uVar11;
          puVar6[2] = uVar13;
          puVar6[3] = uVar14;
          puVar6[4] = uVar15;
          puVar6[5] = uVar16;
          puVar6[6] = uVar17;
          puVar6[7] = uVar18;
          puVar6[8] = uVar19;
          puVar6[9] = uVar20;
          puVar6[10] = uVar21;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
  }
  return;
}


