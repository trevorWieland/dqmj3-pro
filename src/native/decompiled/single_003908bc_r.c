#include "single_003908bc_r.h"


extern undefined4 H_Reset;

void fn_003908bc(undefined4 param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ushort uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  uint in_r12;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint *local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  fn_0078f8ec(param_2,*param_2);
  iVar6 = fn_006f7a0c(DAT_008977e0);
  piVar7 = (int *)(**(code **)(**(int **)(iVar6 + 0x50) + 0x44))();
  uVar11 = (piVar7[1] - *piVar7) / 0x2c;
  if (uVar11 != 0) {
    local_4c = in_r12 & 0xffff0000;
    local_54 = 0x10000;
    local_58 = (uint *)&H_Reset;
    local_50 = 0xffff0000;
    iVar6 = param_2[1];
    uVar1 = (iVar6 - *param_2) / 0x34;
    if (uVar1 < uVar11) {
      fn_0078f4e0(param_2,iVar6,uVar11 - uVar1,&local_58);
    }
    else if (uVar1 != uVar11) {
      fn_0078f8ec(param_2,*param_2 + uVar11 * 0x34,iVar6);
    }
    uVar11 = 0;
    iVar6 = piVar7[1] - *piVar7 >> 0x1f;
    if ((piVar7[1] - *piVar7) / 0x2c + iVar6 != iVar6) {
      do {
        puVar13 = (undefined4 *)(*piVar7 + uVar11 * 0x2c);
        puVar12 = (undefined2 *)(*param_2 + uVar11 * 0x34);
        *puVar12 = *(undefined2 *)(puVar13 + 10);
        local_58 = &local_4c;
        iVar6 = fn_00102d28(*puVar13,(char *)&DAT_00390be0,&local_54,&local_50);
        if (iVar6 == 3) {
          puVar12[1] = (short)local_54;
          puVar12[4] = 0;
          if ((local_50 & 0xff) == 0x4d) {
            puVar12[4] = 8;
          }
          if ((char)local_4c == 'A') {
            puVar12[4] = puVar12[4] | 4;
          }
          else {
            if ((char)local_4c == 'T') {
              uVar5 = puVar12[4] | 1;
            }
            else {
              if ((char)local_4c != 'W') goto LAB_00390a94;
              uVar5 = puVar12[4] | 2;
            }
            puVar12[4] = uVar5;
          }
LAB_00390a94:
          uVar8 = puVar13[2];
          uVar9 = puVar13[3];
          *(undefined4 *)(puVar12 + 8) = puVar13[1];
          *(undefined4 *)(puVar12 + 10) = uVar8;
          *(undefined4 *)(puVar12 + 0xc) = uVar9;
          uVar8 = puVar13[5];
          uVar9 = puVar13[6];
          *(undefined4 *)(puVar12 + 0xe) = puVar13[4];
          *(undefined4 *)(puVar12 + 0x10) = uVar8;
          *(undefined4 *)(puVar12 + 0x12) = uVar9;
          uVar8 = puVar13[8];
          uVar9 = puVar13[9];
          *(undefined4 *)(puVar12 + 0x14) = puVar13[7];
          *(undefined4 *)(puVar12 + 0x16) = uVar8;
          *(undefined4 *)(puVar12 + 0x18) = uVar9;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)((piVar7[1] - *piVar7) / 0x2c));
    }
    puVar13 = (undefined4 *)*param_2;
    puVar10 = (undefined4 *)param_2[1];
    if (puVar13 != puVar10) {
      fn_007ab59c(puVar13,puVar10,((int)puVar10 - (int)puVar13) / 0x34,fn_0065bebc);
      if ((int)puVar10 - (int)puVar13 < 0x341) {
        fn_007a38fc(puVar13,puVar10,fn_0065bebc);
        return;
      }
      fn_007a38fc(puVar13,puVar13 + 0xd0,fn_0065bebc);
      for (puVar13 = puVar13 + 0xd0; puVar13 != puVar10; puVar13 = puVar13 + 0xd) {
        local_58 = (uint *)*puVar13;
        local_54 = puVar13[1];
        local_50 = puVar13[2];
        local_4c = puVar13[3];
        local_48 = puVar13[4];
        uStack_44 = puVar13[5];
        uStack_40 = puVar13[6];
        uStack_3c = puVar13[7];
        local_38 = puVar13[8];
        uStack_34 = puVar13[9];
        uStack_30 = puVar13[10];
        uStack_2c = puVar13[0xb];
        uStack_28 = puVar13[0xc];
        iVar6 = fn_0065bebc(&local_58);
        puVar4 = puVar13 + -0xd;
        puVar3 = puVar13;
        while (puVar2 = puVar4, iVar6 != 0) {
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar14 = puVar2[3];
          uVar15 = puVar2[4];
          uVar16 = puVar2[5];
          uVar17 = puVar2[6];
          uVar18 = puVar2[7];
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar14;
          puVar3[4] = uVar15;
          puVar3[5] = uVar16;
          puVar3[6] = uVar17;
          puVar3[7] = uVar18;
          uVar8 = puVar2[9];
          uVar9 = puVar2[10];
          uVar14 = puVar2[0xb];
          uVar15 = puVar2[0xc];
          puVar3[8] = puVar2[8];
          puVar3[9] = uVar8;
          puVar3[10] = uVar9;
          puVar3[0xb] = uVar14;
          puVar3[0xc] = uVar15;
          iVar6 = fn_0065bebc(&local_58,puVar2 + -0xd);
          puVar4 = puVar2 + -0xd;
          puVar3 = puVar2;
        }
        *puVar3 = local_58;
        puVar3[1] = local_54;
        puVar3[2] = local_50;
        puVar3[3] = local_4c;
        puVar3[4] = local_48;
        puVar3[5] = uStack_44;
        puVar3[6] = uStack_40;
        puVar3[7] = uStack_3c;
        puVar3[8] = local_38;
        puVar3[9] = uStack_34;
        puVar3[10] = uStack_30;
        puVar3[0xb] = uStack_2c;
        puVar3[0xc] = uStack_28;
      }
    }
  }
  return;
}


