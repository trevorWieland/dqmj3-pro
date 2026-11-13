#include "00435334_00435cf4.h"



void fn_00435c70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = param_2 + 0x5b;
  param_1[1] = param_2 + 0x284;
  fn_00435fa0(param_1);
  fn_00435cf4(param_1);
  iVar1 = 0;
  param_1[0x12f] = 0;
  iVar2 = param_1[0x12e];
  param_1[0x131] = iVar2;
  if (0 < iVar2) {
    do {
      if ((char)param_1[iVar1 * 3 + 2] == '\0') {
        param_1[0x131] = iVar1;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  iVar1 = param_1[0x131];
  iVar2 = iVar2 - iVar1;
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  param_1[0x132] = iVar2;
  param_1[0x130] = iVar1;
  return;
}



void fn_00435b78(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint in_r12;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  puVar6 = (undefined4 *)(param_1 + *(int *)(param_1 + 0x4b8) * 0xc + 8);
  while( true ) {
    if (puVar1 != puVar6) {
      in_r12 = (uint)*(byte *)((int)puVar1 + 1);
    }
    if (puVar1 == puVar6 || in_r12 == param_2) break;
    puVar1 = puVar1 + 3;
  }
  if (puVar1 != puVar6) {
    puVar3 = puVar1 + 3;
    if (puVar3 < puVar6) {
      if (0 < (int)puVar6 - (int)puVar3) {
        iVar4 = 0;
        iVar5 = ((int)puVar6 - (int)puVar3) / 0xc;
        puVar2 = puVar1;
        puVar7 = puVar3;
        do {
          puVar1 = puVar2;
          if (*(byte *)((int)puVar3 + iVar4 * 0xc + 1) != param_2) {
            uVar8 = puVar7[1];
            uVar9 = puVar7[2];
            puVar1 = puVar2 + 3;
            *puVar2 = *puVar7;
            puVar2[1] = uVar8;
            puVar2[2] = uVar9;
          }
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 + 1;
          puVar7 = puVar7 + 3;
          puVar2 = puVar1;
        } while (iVar5 != 0);
      }
    }
    else {
      for (; puVar3 != puVar6; puVar3 = puVar3 + 3) {
        puVar2 = puVar1;
        if (*(byte *)((int)puVar3 + 1) != param_2) {
          uVar8 = puVar3[1];
          uVar9 = puVar3[2];
          puVar2 = puVar1 + 3;
          *puVar1 = *puVar3;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
        }
        puVar1 = puVar2;
      }
    }
  }
  *(int *)(param_1 + 0x4b8) = *(int *)(param_1 + 0x4b8) - ((int)puVar6 - (int)puVar1) / 0xc;
  return;
}



undefined4 fn_00435334(int *param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_68;
  int local_64;
  undefined1 auStack_60 [44];
  int local_34;
  
  local_34 = param_1[0x26];
  param_1[0x68] = local_34 + 0x180;
  param_1[0x67] = local_34 + 0xbe;
  fn_00435fa0();
  fn_00435cf4(param_1 + 0x67);
  param_1[0x196] = 0;
  iVar5 = param_1[0x195];
  iVar4 = 0;
  param_1[0x198] = iVar5;
  if (0 < iVar5) {
    do {
      if ((char)(param_1 + 0x67)[iVar4 * 3 + 2] == '\0') {
        param_1[0x198] = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  iVar4 = param_1[0x198];
  iVar5 = iVar5 - iVar4;
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  param_1[0x199] = iVar5;
  param_1[0x197] = iVar4;
  local_68 = param_1[0x198];
  local_64 = param_1[0x199];
  piVar6 = &local_68;
  if (param_1[0x198] < param_1[0x199]) {
    piVar6 = &local_64;
  }
  iVar4 = (*piVar6 + 9) / 10;
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  param_1[0x20] = iVar4;
  iVar4 = fn_003492bc(param_1[0x26]);
  if (iVar4 == 1) {
    iVar4 = param_1[0x20] + -1;
  }
  else {
    iVar4 = 0;
  }
  param_1[0x21] = iVar4;
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))
            (param_1,L"rom:/data/Layout/battle/battle_upper/battle_status.arc",
             (char *)&DAT_00866660,&DAT_00860454);
  iVar4 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  piVar6 = *(int **)(iVar4 + 0x10);
  iVar4 = 0;
  do {
    local_68 = iVar4;
    fn_0017d96c(auStack_60,0x20,0x1f,(char *)&DAT_008665e0);
    piVar2 = (int *)(**(code **)(*piVar6 + 0x2c))(piVar6,auStack_60,1);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar3 == &DAT_0089a930) goto LAB_004354dc;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_004354dc:
    param_1[iVar4 * 3 + 0x2b] = (int)piVar2;
    local_68 = iVar4;
    fn_0017d96c(auStack_60,0x20,0x1f,(char *)&DAT_00866644);
    piVar2 = (int *)(**(code **)(*piVar6 + 0x2c))(piVar6,auStack_60,1);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar3 == &DAT_0089a930) goto LAB_00435550;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_00435550:
    param_1[iVar4 * 3 + 0x2c] = (int)piVar2;
    local_68 = iVar4;
    fn_0017d96c(auStack_60,0x20,0x1f,(char *)&DAT_00866610);
    piVar2 = (int *)(**(code **)(*piVar6 + 0x2c))(piVar6,auStack_60,1);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar3 == &DAT_0089a930) goto LAB_004355b8;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_004355b8:
    param_1[iVar4 * 3 + 0x2d] = (int)piVar2;
    local_68 = iVar4;
    fn_0017d96c(auStack_60,0x20,0x1f,(char *)&DAT_008665c8);
    piVar2 = (int *)(**(code **)(*piVar6 + 0x2c))(piVar6,auStack_60,1);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar3 == &DAT_0089a930) goto LAB_00435620;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_00435620:
    param_1[iVar4 * 3 + 0x49] = (int)piVar2;
    local_68 = iVar4;
    fn_0017d96c(auStack_60,0x20,0x1f,(char *)&DAT_0086662c);
    piVar2 = (int *)(**(code **)(*piVar6 + 0x2c))(piVar6,auStack_60,1);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar3 == &DAT_0089a930) goto LAB_00435688;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_00435688:
    param_1[iVar4 * 3 + 0x4a] = (int)piVar2;
    local_68 = iVar4;
    fn_0017d96c(auStack_60,0x20,0x1f,(char *)&DAT_008665f8);
    piVar2 = (int *)(**(code **)(*piVar6 + 0x2c))(piVar6,auStack_60,1);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar3 == &DAT_0089a930) goto LAB_004356ec;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_004356ec:
    iVar5 = iVar4 + 1;
    param_1[iVar4 * 3 + 0x4b] = (int)piVar2;
    iVar4 = iVar5;
    if (9 < iVar5) {
      sVar1 = *(short *)(local_34 + 0x1c);
      fn_0022cdb4(param_1,0 < sVar1);
      *(short *)(param_1 + 0x2a) = sVar1;
      fn_004358cc(param_1,param_1 + 0x67);
      return 1;
    }
  } while( true );
}



void fn_00435cf4(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint local_2c;
  uint uStack_28;
  
  puVar8 = (undefined4 *)(param_1 + 8);
  puVar9 = (undefined4 *)(param_1 + *(int *)(param_1 + 0x4b8) * 0xc + 8);
  if (puVar8 == puVar9) {
    return;
  }
  iVar10 = (int)puVar9 - (int)puVar8;
  puVar7 = (undefined4 *)0x0;
  uVar3 = iVar10 / 0xc;
  uVar5 = uVar3 * 0xc;
  local_2c = DAT_008c6cfc + 1;
  DAT_008c6cfc = local_2c;
  if (((DAT_008c6d00 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6d00), iVar1 != 0)) {
    DAT_008c6d04 = (undefined4 *)&DAT_008f9fe8;
  }
  if (DAT_008c6d04 == (undefined4 *)0x0) {
    uVar5 = 0;
    DAT_008c6cfc = DAT_008c6cfc - 1;
  }
  else {
    fn_002feef8(0);
    if (uVar5 != 0) {
      bVar12 = 0xfff < uVar5;
      bVar11 = uVar5 == 0x1000;
      if (uVar5 < 0x1001) {
        bVar12 = local_2c != 0;
        bVar11 = local_2c == 1;
      }
      if (!bVar12 || bVar11) {
        puVar7 = DAT_008c6d04;
      }
      else {
        puVar7 = (undefined4 *)fn_002ff600(uVar5);
        DAT_008c6cfc = DAT_008c6cfc - 1;
      }
      goto LAB_00435de8;
    }
  }
  DAT_008c6cfc = DAT_008c6cfc - 1;
LAB_00435de8:
  uVar5 = uVar5 / 0xc;
  if (puVar7 != (undefined4 *)0x0) {
    puVar2 = &uStack_28;
    if ((int)uVar5 <= (int)uVar3) {
      puVar2 = &local_2c;
    }
    local_2c = uVar5;
    uStack_28 = uVar3;
    uVar3 = *puVar2;
    puVar4 = puVar7;
    for (puVar6 = puVar8; puVar6 != puVar8 + uVar3 * 3; puVar6 = puVar6 + 3) {
      if (puVar4 != (undefined4 *)0x0) {
        uVar13 = puVar6[1];
        uVar14 = puVar6[2];
        *puVar4 = *puVar6;
        puVar4[1] = uVar13;
        puVar4[2] = uVar14;
      }
      puVar4 = puVar4 + 3;
    }
    fn_007b7134(puVar8,puVar9,puVar7,uVar5,0);
    puVar8 = puVar7;
    if (puVar7 + uVar3 * 3 < puVar7) {
      do {
        puVar8 = puVar8 + 3;
      } while (puVar8 != puVar7 + uVar3 * 3);
    }
    DAT_008c6cfc = DAT_008c6cfc + 1;
    if (((DAT_008c6d00 & 1) == 0) && (iVar10 = fn_00303afc(&DAT_008c6d00), iVar10 != 0)) {
      DAT_008c6d04 = (undefined4 *)&DAT_008f9fe8;
    }
    if (puVar7 == DAT_008c6d04) {
      DAT_008c6cfc = DAT_008c6cfc + -1;
    }
    else {
      fn_002feef8(puVar7);
    }
    DAT_008c6cfc = DAT_008c6cfc + -1;
    return;
  }
  if (iVar10 < 0xb4) {
    fn_007a3cc4(puVar8,puVar9);
    return;
  }
  puVar7 = puVar8 + (iVar10 / 0x18) * 3;
  fn_007b6280(puVar8,puVar7);
  fn_007b6280(puVar7,puVar9);
  fn_007b653c(puVar8,puVar7,puVar9,((int)puVar7 - (int)puVar8) / 0xc,
               ((int)puVar9 - (int)puVar7) / 0xc);
  return;
}


