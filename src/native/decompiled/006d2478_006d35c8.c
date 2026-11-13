#include "006d2478_006d35c8.h"



int fn_006d35c8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == *(int *)(param_1 + 0x10)) {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_006d2e24(int *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
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
  
  if ((param_1[4] != 0) && (DAT_008b637c == '\0')) {
    fn_00170704(param_1[4] + 4);
  }
  uVar10 = 0;
  if (param_1[1] != 0) {
    do {
      iVar1 = *param_1 + uVar10 * 0x34;
      uVar25 = *(undefined4 *)(iVar1 + 0x30);
      uVar20 = *(undefined4 *)(iVar1 + 0x14);
      uVar21 = *(undefined4 *)(iVar1 + 0x18);
      uVar22 = *(undefined4 *)(iVar1 + 0x1c);
      uVar23 = *(undefined4 *)(iVar1 + 0x20);
      uVar24 = *(undefined4 *)(iVar1 + 0x24);
      puVar11 = (undefined4 *)param_2[1];
      uVar26 = *(undefined4 *)(iVar1 + 0x28);
      uVar27 = *(undefined4 *)(iVar1 + 0x2c);
      if (puVar11 == (undefined4 *)param_2[2]) {
        uVar5 = (int)((int)puVar11 - *param_2) >> 5;
        if (uVar5 < (uint)((int)((int)param_2[2] - *param_2) >> 5)) {
          param_2[1] = (uint)(puVar11 + 8);
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = puVar11[-8];
            puVar11[1] = puVar11[-7];
            puVar11[2] = puVar11[-6];
            puVar11[3] = puVar11[-5];
            puVar11[4] = puVar11[-4];
            puVar11[5] = puVar11[-3];
            puVar11[6] = puVar11[-2];
            puVar11[7] = puVar11[-1];
          }
          puVar8 = puVar11 + -8;
          iVar1 = (int)puVar8 - (int)puVar11;
          if (0 < iVar1 >> 5) {
            puVar7 = puVar11;
            if (iVar1 * 0x4000000 < 0) {
              puVar8 = puVar11 + -0x10;
              puVar7 = puVar11 + -8;
              *puVar7 = *puVar8;
              puVar11[-7] = puVar11[-0xf];
              puVar11[-6] = puVar11[-0xe];
              puVar11[-5] = puVar11[-0xd];
              puVar11[-4] = puVar11[-0xc];
              puVar11[-3] = puVar11[-0xb];
              puVar11[-2] = puVar11[-10];
              puVar11[-1] = puVar11[-9];
            }
            for (iVar1 = iVar1 >> 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              uVar13 = puVar8[-7];
              uVar14 = puVar8[-6];
              uVar15 = puVar8[-5];
              uVar16 = puVar8[-4];
              uVar17 = puVar8[-3];
              uVar18 = puVar8[-2];
              uVar19 = puVar8[-1];
              puVar7[-8] = puVar8[-8];
              puVar7[-7] = uVar13;
              puVar7[-6] = uVar14;
              puVar7[-5] = uVar15;
              puVar7[-4] = uVar16;
              puVar7[-3] = uVar17;
              puVar7[-2] = uVar18;
              puVar7[-1] = uVar19;
              uVar13 = puVar8[-0xf];
              uVar14 = puVar8[-0xe];
              uVar15 = puVar8[-0xd];
              uVar16 = puVar8[-0xc];
              uVar17 = puVar8[-0xb];
              uVar18 = puVar8[-10];
              uVar19 = puVar8[-9];
              puVar7[-0x10] = puVar8[-0x10];
              puVar7[-0xf] = uVar13;
              puVar7[-0xe] = uVar14;
              puVar7[-0xd] = uVar15;
              puVar7[-0xc] = uVar16;
              puVar7[-0xb] = uVar17;
              puVar7[-10] = uVar18;
              puVar7[-9] = uVar19;
              puVar8 = puVar8 + -0x10;
              puVar7 = puVar7 + -0x10;
            }
          }
          puVar11[7] = uVar25;
          *puVar11 = uVar20;
          puVar11[1] = uVar21;
          puVar11[2] = uVar22;
          puVar11[3] = uVar23;
          puVar11[4] = uVar24;
          puVar11[5] = uVar26;
          puVar11[6] = uVar27;
        }
        else {
          uVar12 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
          if (uVar12 < uVar5 + 0x20) {
            uVar12 = uVar5 + 0x20;
          }
          puVar2 = (undefined4 *)fn_0015ece0(uVar12 << 5);
          puVar7 = puVar2;
          for (puVar8 = (undefined4 *)*param_2; puVar8 != puVar11; puVar8 = puVar8 + 8) {
            if (puVar7 != (undefined4 *)0x0) {
              uVar13 = puVar8[1];
              uVar14 = puVar8[2];
              uVar15 = puVar8[3];
              uVar16 = puVar8[4];
              uVar17 = puVar8[5];
              uVar18 = puVar8[6];
              uVar19 = puVar8[7];
              *puVar7 = *puVar8;
              puVar7[1] = uVar13;
              puVar7[2] = uVar14;
              puVar7[3] = uVar15;
              puVar7[4] = uVar16;
              puVar7[5] = uVar17;
              puVar7[6] = uVar18;
              puVar7[7] = uVar19;
            }
            puVar7 = puVar7 + 8;
          }
          puVar8 = (undefined4 *)(((int)puVar11 - *param_2 & 0xffffffe0) + (int)puVar2);
          if (puVar8 != (undefined4 *)0x0) {
            puVar8[7] = uVar25;
            *puVar8 = uVar20;
            puVar8[1] = uVar21;
            puVar8[2] = uVar22;
            puVar8[3] = uVar23;
            puVar8[4] = uVar24;
            puVar8[5] = uVar26;
            puVar8[6] = uVar27;
          }
          puVar7 = (undefined4 *)param_2[1];
          puVar8 = (undefined4 *)(((int)puVar11 - *param_2 & 0xffffffe0) + (int)puVar2);
          for (; puVar11 != puVar7; puVar11 = puVar11 + 8) {
            puVar3 = puVar8 + 8;
            if (puVar3 != (undefined4 *)0x0) {
              uVar20 = puVar11[1];
              uVar21 = puVar11[2];
              uVar22 = puVar11[3];
              uVar23 = puVar11[4];
              uVar24 = puVar11[5];
              uVar25 = puVar11[6];
              uVar26 = puVar11[7];
              *puVar3 = *puVar11;
              puVar8[9] = uVar20;
              puVar8[10] = uVar21;
              puVar8[0xb] = uVar22;
              puVar8[0xc] = uVar23;
              puVar8[0xd] = uVar24;
              puVar8[0xe] = uVar25;
              puVar8[0xf] = uVar26;
            }
            puVar8 = puVar3;
          }
          uVar4 = param_2[1];
          uVar9 = *param_2;
          uVar5 = uVar4;
          if (uVar9 < uVar4) {
            uVar5 = (uVar4 - uVar9) * 0x4000000;
          }
          iVar1 = (int)(uVar4 - uVar9) >> 5;
          if (uVar9 < uVar4) {
            uVar5 = uVar5 >> 0x1f;
          }
          else {
            uVar5 = 0;
          }
          for (iVar6 = uVar5 + 1; iVar6 < iVar1 + 1; iVar6 = iVar6 + 2) {
          }
          if (uVar9 != 0) {
            if (*(code **)(uVar9 - 8) == (code *)0x0) {
              fn_0030233c(uVar9 - 8);
            }
            else {
              (**(code **)(uVar9 - 8))();
            }
          }
          param_2[2] = (uint)(puVar2 + uVar12 * 8);
          param_2[1] = (uint)(puVar2 + iVar1 * 8 + 8);
          *param_2 = (uint)puVar2;
        }
      }
      else {
        param_2[1] = (uint)(puVar11 + 8);
        if (puVar11 != (undefined4 *)0x0) {
          puVar11[7] = uVar25;
          *puVar11 = uVar20;
          puVar11[1] = uVar21;
          puVar11[2] = uVar22;
          puVar11[3] = uVar23;
          puVar11[4] = uVar24;
          puVar11[5] = uVar26;
          puVar11[6] = uVar27;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)param_1[1]);
  }
  if ((param_1[4] == 0) || (DAT_008b637c != '\0')) {
    return;
  }
  fn_001707b4(param_1[4] + 4);
  return;
}



undefined4 fn_006d29ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_007803e4(param_1 + 4);
  uVar2 = 0;
  if (*(int *)(iVar1 + 0x14) != 0) {
    iVar1 = fn_007803e4(param_1 + 4);
    uVar2 = *(undefined4 *)(**(int **)(iVar1 + 0x10) + 0x14);
  }
  return uVar2;
}



uint fn_006d27b8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 0;
  for (piVar3 = (int *)**(int **)(param_1 + 0x30); piVar3 != (int *)*(int *)(param_1 + 0x30);
      piVar3 = (int *)*piVar3) {
    uVar2 = (**(code **)(*(int *)piVar3[2] + 0x38))();
    uVar4 = uVar4 | uVar2;
  }
  uVar2 = 0x80;
  if (*(int *)(param_1 + 0x18) != 0) {
    if (((uVar4 & 0x80) == 0 && (uVar4 & 0x100) == 0) && (uVar4 != 1 && uVar4 != 0x40)) {
      if ((uVar4 & 0xfffffff3) == 0) {
        return 8;
      }
      if (((uVar4 & 0xfffffff0) != 0) && ((uVar4 & 0xffffff83) == 0)) {
        return 0x20;
      }
    }
    return 0x100;
  }
  bVar5 = (uVar4 & 0x80) == 0;
  uVar1 = uVar2;
  if (bVar5) {
    uVar2 = 0x100;
    uVar1 = uVar4 & 0x100;
  }
  if (!bVar5 || uVar1 != 0) {
    return uVar2;
  }
  if (uVar4 == 1) {
    return 1;
  }
  if (uVar4 == 0x40) {
    return 0x40;
  }
  if ((uVar4 & 0xfffffff3) == 0) {
    return 4;
  }
  if ((uVar4 & 0xfffffff0) == 0) {
    return 2;
  }
  if ((uVar4 & 0xffffff83) == 0) {
    uVar2 = 0x10;
  }
  return uVar2;
}



undefined4 fn_006d2790(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < (uint)(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2)) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x40) + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_006d2478(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_60 [68];
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  (**(code **)(*param_3 + 0xc))(auStack_18,param_3);
  iVar1 = fn_004b626c(local_14,L"PersistentGathering");
  if (iVar1 != 0) {
    fn_0013d438(auStack_18,L"Community");
  }
  fn_0045f6f0(param_2,auStack_18);
  fn_004b73b0(auStack_60);
  (**(code **)(*param_3 + 0x18))(param_3,auStack_60);
  iVar1 = fn_004b72d8(auStack_60);
  local_1c = *(undefined4 *)(iVar1 + 0x10);
  fn_0015ef4c(param_2,&local_1c,4);
  fn_0015ef4c(param_2,*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10))
  ;
  fn_004b7520(auStack_60);
  fn_00170f54(auStack_18);
  return;
}


