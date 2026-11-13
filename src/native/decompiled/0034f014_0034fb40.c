#include "0034f014_0034fb40.h"



void fn_0034fb40(int *param_1)

{
                    /* WARNING: Subroutine does not return */
  fn_006a8660(*(undefined4 *)(*param_1 + 0x58));
}



void fn_0034f760(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  iVar14 = *param_2;
  iVar15 = param_2[1];
  iVar11 = param_2[2];
  puVar13 = *(uint **)(param_1 + 4);
  iVar3 = param_2[3];
  local_2c = iVar11 - iVar15;
  local_30 = iVar3 - iVar11;
  local_34 = param_2[4] - iVar3;
  local_38 = param_2[4] + (int)param_2;
  fn_0068cb94(DAT_008977e8,param_2[5]);
  fn_0012d170(puVar13);
  uVar1 = (uint)(iVar15 - iVar14) / 0x14;
  local_3c = uVar1;
  if (0xccccccc < uVar1) {
    fn_002ff628(8,&DAT_008c7629,&DAT_008c7629,uVar1,0xccccccc);
  }
  if ((uint)((int)(puVar13[2] - *puVar13) / 0x14) < local_3c) {
    uVar5 = (int)(puVar13[1] - *puVar13) / 0x14;
    local_28 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
    if (local_28 < uVar5 + 0x20) {
      local_28 = uVar5 + 0x20;
    }
    puVar4 = &local_28;
    if (local_28 <= local_3c) {
      puVar4 = &local_3c;
    }
    uVar5 = *puVar4;
    puVar6 = (undefined4 *)fn_00100fc6(uVar5 * 0x14,0);
    puVar12 = (undefined4 *)puVar13[1];
    puVar9 = puVar6;
    for (puVar10 = (undefined4 *)*puVar13; puVar10 != puVar12; puVar10 = puVar10 + 5) {
      if (puVar9 != (undefined4 *)0x0) {
        uVar16 = puVar10[1];
        uVar17 = puVar10[2];
        uVar18 = puVar10[3];
        uVar19 = puVar10[4];
        *puVar9 = *puVar10;
        puVar9[1] = uVar16;
        puVar9[2] = uVar17;
        puVar9[3] = uVar18;
        puVar9[4] = uVar19;
      }
      puVar9 = puVar9 + 5;
    }
    uVar7 = *puVar13;
    uVar8 = uVar7;
    if (puVar13[1] < uVar7) {
      do {
        uVar8 = uVar8 + 0x14;
      } while (uVar8 != puVar13[1]);
    }
    fn_001008c4(uVar7,(int)(puVar13[2] - uVar7) / 0x14,0);
    uVar8 = *puVar13;
    *puVar13 = (uint)puVar6;
    puVar13[2] = (uint)(puVar6 + uVar5 * 5);
    puVar13[1] = (uint)(puVar6 + ((int)(puVar13[1] - uVar8) / 0x14) * 5);
  }
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      puVar10 = (undefined4 *)puVar13[1];
      if (puVar10 == (undefined4 *)puVar13[2]) {
        fn_0078e52c(puVar13,puVar10,(int)param_2 + uVar5 * 0x14 + iVar14);
      }
      else {
        puVar13[1] = (uint)(puVar10 + 5);
        if (puVar10 != (undefined4 *)0x0) {
          puVar9 = (undefined4 *)((int)param_2 + uVar5 * 0x14 + iVar14);
          uVar16 = puVar9[1];
          uVar17 = puVar9[2];
          uVar18 = puVar9[3];
          uVar19 = puVar9[4];
          *puVar10 = *puVar9;
          puVar10[1] = uVar16;
          puVar10[2] = uVar17;
          puVar10[3] = uVar18;
          puVar10[4] = uVar19;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  fn_0012d5e0(puVar13 + 3);
  uVar1 = local_2c >> 2;
  fn_0079d338(puVar13 + 3,uVar1);
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      puVar10 = (undefined4 *)puVar13[4];
      if (puVar10 == (undefined4 *)puVar13[5]) {
        fn_0079ce44(puVar13 + 3,puVar10,(int)param_2 + uVar5 * 4 + iVar15);
      }
      else {
        puVar13[4] = (uint)(puVar10 + 1);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = *(undefined4 *)((int)param_2 + uVar5 * 4 + iVar15);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  fn_0012d5e0(puVar13 + 6);
  uVar1 = local_30 >> 2;
  fn_0079d338(puVar13 + 6,uVar1);
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      puVar10 = (undefined4 *)puVar13[7];
      if (puVar10 == (undefined4 *)puVar13[8]) {
        fn_0079ce44(puVar13 + 6,puVar10,(int)param_2 + uVar5 * 4 + iVar11);
      }
      else {
        puVar13[7] = (uint)(puVar10 + 1);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = *(undefined4 *)((int)param_2 + uVar5 * 4 + iVar11);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  fn_0012d5e0(puVar13 + 9);
  uVar1 = local_34 >> 2;
  fn_0079d338(puVar13 + 9,uVar1);
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      puVar10 = (undefined4 *)puVar13[10];
      if (puVar10 == (undefined4 *)puVar13[0xb]) {
        fn_0079ce44(puVar13 + 9,puVar10,(int)param_2 + uVar5 * 4 + iVar3);
      }
      else {
        puVar13[10] = (uint)(puVar10 + 1);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = *(undefined4 *)((int)param_2 + uVar5 * 4 + iVar3);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  iVar3 = local_38;
  cVar2 = *(char *)(local_38 + 0x72);
  *(char *)(param_4 + 599) = cVar2;
  if (cVar2 == '\0') {
    fn_00176fb0(param_4 + 0x60,local_38);
  }
  else {
    fn_0017821c(param_4 + 0x60,local_38,0x60);
  }
  fn_0017821c(param_4 + 0x14,iVar3 + 0x60,0x12);
  return;
}



void fn_0034f708(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [3];
  undefined1 local_1c;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar1 = piVar2[1];
  if ((*piVar2 == iVar1) || (*(int *)(iVar1 + -0x14) < param_2)) {
    fn_003502d4(local_28);
    local_1c = 1;
    local_28[0] = param_2;
    fn_0078e76c(piVar2,local_28);
  }
  else {
    *(undefined1 *)(iVar1 + -8) = 1;
  }
  return;
}



void fn_0034f6e8(int *param_1)

{
                    /* WARNING: Subroutine does not return */
  fn_006a8660(*(undefined4 *)(*param_1 + 0x58));
}



void fn_0034f350(undefined4 *param_1)

{
  *param_1 = &DAT_00826370;
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  fn_0033818c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_0034f2fc(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_00338160();
  *puVar1 = &DAT_00826370;
  iVar2 = fn_00145b00(0x1c,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_005e7c40();
  }
  puVar1[5] = iVar3;
  puVar1[6] = 0xffffffff;
  *(undefined4 *)(puVar1[5] + 8) = 0;
  return puVar1;
}



void fn_0034f1fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_0068eb30(DAT_008977e8);
  uVar2 = *(uint *)(param_1 + 0x18);
  if (((int)uVar2 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= uVar2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + uVar2 * 0x34;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  iVar3 = fn_006eb2e4(iVar1);
  if (iVar3 != 0) {
    fn_005e72e0(&local_10,iVar1,0);
    fn_005e7c34(*(undefined4 *)(param_1 + 0x14),&local_10);
    fn_00117984(&local_10);
    fn_0010fa20();
    uVar4 = fn_006eb278();
    iVar1 = fn_005e29c4(uVar4,0);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
    fn_005e950c(iVar1);
  }
  fn_00338090(param_1);
  return;
}



void fn_0034f0dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  
  fn_00117984();
  fn_0010fa20();
  uVar1 = fn_006eb278();
  iVar2 = fn_005e29c4(uVar1,0);
  *(undefined1 *)(iVar2 + 0x15) = 1;
  uVar1 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(iVar2 + 8) = uVar1;
  uVar1 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  return;
}



void fn_0034f09c(undefined4 *param_1)

{
  *param_1 = &DAT_00826360;
  fn_0012d73c(param_1[1]);
  param_1[1] = 0;
  param_1[2] = 0;
  fn_002feef8(param_1);
  return;
}



void fn_0034f07c(int param_1)

{
  fn_0012d73c(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void fn_0034f014(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  fn_0012d73c(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = fn_0011c1b4(L"rom:/data/Parameter/RaceRankParam.tp",0,0,0,0,0,0,0,5);
  *(undefined4 *)(param_1 + 4) = uVar1;
  iVar2 = fn_00145ac0();
  *(int *)(param_1 + 8) = iVar2 + 4;
  return;
}


