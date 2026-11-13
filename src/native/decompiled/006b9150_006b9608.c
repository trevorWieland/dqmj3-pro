#include "006b9150_006b9608.h"



int fn_006b9608(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = param_2[1] - *param_2 >> 2;
  uVar4 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = param_2[1] - *param_2 >> 2;
      if (uVar3 <= uVar4) {
        fn_002ff628(9,&DAT_008c7602,&DAT_008c7602,uVar4,uVar3);
      }
      uVar3 = uVar4 + 1;
      iVar5 = iVar5 + *(short *)(*param_2 + uVar4 * 4 + 2);
      uVar4 = uVar3;
    } while ((int)uVar3 < iVar2);
  }
  iVar5 = fn_00163868(iVar5);
  uVar4 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = param_2[1] - *param_2 >> 2;
      if (uVar3 <= uVar4) {
        fn_002ff628(9,&DAT_008c7602,&DAT_008c7602,uVar4,uVar3);
      }
      if (iVar5 < *(short *)(*param_2 + uVar4 * 4 + 2)) break;
      uVar3 = param_2[1] - *param_2 >> 2;
      if (uVar3 <= uVar4) {
        fn_002ff628(9,&DAT_008c7602,&DAT_008c7602,uVar4,uVar3);
      }
      iVar1 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 - *(short *)(*param_2 + iVar1 + 2);
    } while ((int)uVar4 < iVar2);
  }
  uVar3 = param_2[1] - *param_2 >> 2;
  if (uVar3 <= uVar4) {
    fn_002ff628(9,&DAT_008c7602,&DAT_008c7602,uVar4,uVar3);
  }
  return (int)*(short *)(*param_2 + uVar4 * 4);
}



void fn_006b95b4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_r6;
  
  iVar1 = fn_00163868(2);
  iVar1 = iVar1 + 1;
  if (0 < iVar1) {
    unaff_r6 = &DAT_00897804;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_006b9bec(param_1);
      fn_002425dc(*(undefined4 *)(*unaff_r6 + 0x1c),uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}



bool fn_006b9588(int param_1)

{
  return *(char *)(param_1 + 0x54) != -1;
}



void fn_006b9150(int param_1,uint *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  iVar14 = 0;
  uVar1 = *(undefined2 *)(DAT_008977e0 + 0xa8);
  uVar11 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x7c);
  iVar12 = (int)((longlong)(int)uVar11 * -0x6db6db6d + ((ulonglong)uVar11 << 0x20) >> 0x20);
  iVar12 = (iVar12 >> 4) - (iVar12 >> 0x1f);
  if (0 < iVar12) {
    do {
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      puVar13 = (undefined4 *)(*(int *)(param_1 + 0x7c) + iVar14 * 0x1c);
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      iVar2 = fn_002dbc28();
      if (iVar2 == 0) {
        fn_006b8e48(param_1,&local_48,*puVar13,0,0);
      }
      else {
        fn_006f756c(DAT_008977e0);
        uVar3 = fn_006bb17c();
        fn_006f756c(DAT_008977e0);
        uVar4 = fn_006bb150();
        fn_006b8e48(param_1,&local_48,*puVar13,uVar4,uVar3);
      }
      if (((unsigned int)(local_48) >> 16) & 0xffff != -1) {
        if ((short)local_44 == 0) {
          local_44 = (local_44 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(1) & 0xffff);
        }
        local_40 = puVar13[1];
        local_3c = puVar13[2];
        local_38 = puVar13[3];
        local_34 = puVar13[4];
        local_30 = puVar13[5];
        local_2c = puVar13[6];
        local_44 = CONCAT22(uVar1,(short)local_44);
        local_28 = (int)(param_2[1] - *param_2) / 0x24;
        puVar13 = (undefined4 *)param_2[1];
        if (puVar13 == (undefined4 *)param_2[2]) {
          uVar11 = (int)((int)puVar13 - *param_2) / 0x24;
          if (uVar11 < (uint)((int)((int)param_2[2] - *param_2) / 0x24)) {
            param_2[1] = (uint)(puVar13 + 9);
            if (puVar13 != (undefined4 *)0x0) {
              *puVar13 = puVar13[-9];
              puVar13[1] = puVar13[-8];
              puVar13[2] = puVar13[-7];
              puVar13[3] = puVar13[-6];
              puVar13[4] = puVar13[-5];
              puVar13[5] = puVar13[-4];
              puVar13[6] = puVar13[-3];
              puVar13[7] = puVar13[-2];
              puVar13[8] = puVar13[-1];
            }
            puVar8 = puVar13 + -9;
            puVar9 = puVar13;
            if (puVar13 < puVar8) {
              if (0 < (int)puVar8 - (int)puVar13) {
                uVar11 = ((int)puVar8 - (int)puVar13) / 0x24;
                if ((uVar11 & 1) != 0) {
                  puVar8 = puVar13 + -0x12;
                  puVar9 = puVar13 + -9;
                  *puVar9 = *puVar8;
                  puVar13[-8] = puVar13[-0x11];
                  puVar13[-7] = puVar13[-0x10];
                  puVar13[-6] = puVar13[-0xf];
                  puVar13[-5] = puVar13[-0xe];
                  puVar13[-4] = puVar13[-0xd];
                  puVar13[-3] = puVar13[-0xc];
                  puVar13[-2] = puVar13[-0xb];
                  puVar13[-1] = puVar13[-10];
                }
                for (iVar2 = (int)uVar11 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
                  uVar3 = puVar8[-8];
                  uVar4 = puVar8[-7];
                  uVar16 = puVar8[-6];
                  uVar17 = puVar8[-5];
                  uVar18 = puVar8[-4];
                  uVar19 = puVar8[-3];
                  uVar20 = puVar8[-2];
                  puVar9[-9] = puVar8[-9];
                  puVar9[-8] = uVar3;
                  puVar9[-7] = uVar4;
                  puVar9[-6] = uVar16;
                  puVar9[-5] = uVar17;
                  puVar9[-4] = uVar18;
                  puVar9[-3] = uVar19;
                  puVar9[-2] = uVar20;
                  puVar9[-1] = puVar8[-1];
                  uVar3 = puVar8[-0x11];
                  uVar4 = puVar8[-0x10];
                  uVar16 = puVar8[-0xf];
                  uVar17 = puVar8[-0xe];
                  uVar18 = puVar8[-0xd];
                  uVar19 = puVar8[-0xc];
                  uVar20 = puVar8[-0xb];
                  puVar9[-0x12] = puVar8[-0x12];
                  puVar9[-0x11] = uVar3;
                  puVar9[-0x10] = uVar4;
                  puVar9[-0xf] = uVar16;
                  puVar9[-0xe] = uVar17;
                  puVar9[-0xd] = uVar18;
                  puVar9[-0xc] = uVar19;
                  puVar9[-0xb] = uVar20;
                  puVar9[-10] = puVar8[-10];
                  puVar9 = puVar9 + -0x12;
                  puVar8 = puVar8 + -0x12;
                }
              }
            }
            else {
              while (puVar13 != puVar8) {
                uVar3 = puVar8[-8];
                uVar4 = puVar8[-7];
                uVar16 = puVar8[-6];
                uVar17 = puVar8[-5];
                uVar18 = puVar8[-4];
                uVar19 = puVar8[-3];
                uVar20 = puVar8[-2];
                puVar9[-9] = puVar8[-9];
                puVar9[-8] = uVar3;
                puVar9[-7] = uVar4;
                puVar9[-6] = uVar16;
                puVar9[-5] = uVar17;
                puVar9[-4] = uVar18;
                puVar9[-3] = uVar19;
                puVar9[-2] = uVar20;
                puVar9[-1] = puVar8[-1];
                puVar9 = puVar9 + -9;
                puVar8 = puVar8 + -9;
              }
            }
            *puVar13 = local_48;
            puVar13[1] = local_44;
            puVar13[2] = local_40;
            puVar13[3] = local_3c;
            puVar13[4] = local_38;
            puVar13[5] = local_34;
            puVar13[6] = local_30;
            puVar13[7] = local_2c;
            puVar13[8] = local_28;
          }
          else {
            uVar15 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
            if (uVar15 < uVar11 + 0x20) {
              uVar15 = uVar11 + 0x20;
            }
            puVar5 = (undefined4 *)fn_00100fc6(uVar15 * 0x24,0);
            puVar9 = puVar5;
            for (puVar8 = (undefined4 *)*param_2; puVar8 != puVar13; puVar8 = puVar8 + 9) {
              if (puVar9 != (undefined4 *)0x0) {
                uVar3 = puVar8[1];
                uVar4 = puVar8[2];
                uVar16 = puVar8[3];
                uVar17 = puVar8[4];
                uVar18 = puVar8[5];
                uVar19 = puVar8[6];
                uVar20 = puVar8[7];
                *puVar9 = *puVar8;
                puVar9[1] = uVar3;
                puVar9[2] = uVar4;
                puVar9[3] = uVar16;
                puVar9[4] = uVar17;
                puVar9[5] = uVar18;
                puVar9[6] = uVar19;
                puVar9[7] = uVar20;
                puVar9[8] = puVar8[8];
              }
              puVar9 = puVar9 + 9;
            }
            puVar8 = puVar5 + ((int)((int)puVar13 - *param_2) / 0x24) * 9;
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = local_48;
              puVar8[1] = local_44;
              puVar8[2] = local_40;
              puVar8[3] = local_3c;
              puVar8[4] = local_38;
              puVar8[5] = local_34;
              puVar8[6] = local_30;
              puVar8[7] = local_2c;
              puVar8[8] = local_28;
            }
            puVar9 = (undefined4 *)param_2[1];
            puVar8 = puVar5 + ((int)((int)puVar13 - *param_2) / 0x24) * 9;
            for (; puVar13 != puVar9; puVar13 = puVar13 + 9) {
              puVar6 = puVar8 + 9;
              if (puVar6 != (undefined4 *)0x0) {
                uVar3 = puVar13[1];
                uVar4 = puVar13[2];
                uVar16 = puVar13[3];
                uVar17 = puVar13[4];
                uVar18 = puVar13[5];
                uVar19 = puVar13[6];
                uVar20 = puVar13[7];
                *puVar6 = *puVar13;
                puVar8[10] = uVar3;
                puVar8[0xb] = uVar4;
                puVar8[0xc] = uVar16;
                puVar8[0xd] = uVar17;
                puVar8[0xe] = uVar18;
                puVar8[0xf] = uVar19;
                puVar8[0x10] = uVar20;
                puVar8[0x11] = puVar13[8];
              }
              puVar8 = puVar6;
            }
            uVar7 = *param_2;
            uVar10 = param_2[1];
            uVar11 = uVar7;
            if (uVar10 < uVar7) {
              do {
                uVar11 = uVar11 + 0x24;
              } while (uVar11 != uVar10);
            }
            fn_001008c4(uVar7,(int)(param_2[2] - uVar7) / 0x24,0);
            *param_2 = (uint)puVar5;
            param_2[1] = (uint)(puVar5 + ((int)(uVar10 - uVar7) / 0x24) * 9 + 9);
            param_2[2] = (uint)(puVar5 + uVar15 * 9);
          }
        }
        else {
          param_2[1] = (uint)(puVar13 + 9);
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = local_48;
            puVar13[1] = local_44;
            puVar13[2] = local_40;
            puVar13[3] = local_3c;
            puVar13[4] = local_38;
            puVar13[5] = local_34;
            puVar13[6] = local_30;
            puVar13[7] = local_2c;
            puVar13[8] = local_28;
          }
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar12);
  }
  return;
}


