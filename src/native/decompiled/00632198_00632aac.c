#include "00632198_00632aac.h"



void fn_00632aac(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_36160 [221440];
  undefined1 auStack_60 [48];
  int local_30;
  int iStack_2c;
  int local_28;
  
  puVar5 = (undefined1 *)(param_2 + 0x70);
  local_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  fn_00619504(auStack_36160);
  iVar4 = local_28;
  iVar6 = local_28 + 0x180388;
  iVar1 = fn_00620290(0x20,(int)*(char *)(local_28 + 0x180483));
  iVar2 = fn_00620290(0x22,(int)*(char *)(iVar4 + 0x180483));
  iVar7 = iVar6 + iVar1 * 8;
  iVar2 = iVar6 + iVar2 * 8;
  iVar3 = fn_0069ccf8((int)*(short *)(iVar7 + 0x4180));
  if ((iVar3 != 0) && (iVar3 = fn_0069ccf8((int)*(short *)(iVar2 + 0x4180)), iVar3 != 0)) {
    fn_0061df54(auStack_60,iVar1,iVar6,local_30 + 4,param_2,auStack_36160);
    iVar1 = fn_0061de10(auStack_60);
    if (iVar1 != 0) {
      *puVar5 = *(undefined1 *)(iVar7 + 0x4182);
      *(undefined1 *)(param_2 + 0x71) = *(undefined1 *)(iVar2 + 0x4182);
      *(undefined1 *)(param_2 + 0x72) = 0;
    }
    fn_0061df88(auStack_60);
  }
  iVar1 = fn_00620290(0x21,(int)*(char *)(iVar4 + 0x180483));
  iVar4 = fn_00620290(0x23,(int)*(char *)(iVar4 + 0x180483));
  iVar3 = iVar6 + iVar1 * 8;
  iVar4 = iVar6 + iVar4 * 8;
  iVar2 = fn_0069ccf8((int)*(short *)(iVar3 + 0x4180));
  if ((iVar2 != 0) && (iVar2 = fn_0069ccf8((int)*(short *)(iVar4 + 0x4180)), iVar2 != 0)) {
    fn_0061df54(auStack_60,iVar1,iVar6,local_30 + 4,param_2,auStack_36160);
    iVar1 = fn_0061de10(auStack_60);
    if (iVar1 != 0) {
      *(undefined1 *)(param_2 + 0x73) = *(undefined1 *)(iVar3 + 0x4182);
      *(undefined1 *)(param_2 + 0x74) = *(undefined1 *)(iVar4 + 0x4182);
      *(undefined1 *)(param_2 + 0x75) = 0;
    }
    fn_0061df88(auStack_60);
  }
  fn_0063aab8(puVar5,local_28);
  fn_0061ec70(iVar6,puVar5,local_28);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00632808) */

void fn_006325fc(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,
                 int param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9,int *param_10,
                 int param_11)

{
  int iVar1;
  int iVar2;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *local_210;
  int *local_20c;
  int *local_208;
  int *local_204;
  int *apiStack_200 [2];
  undefined4 uStack_1f8;
  char local_1f4;
  undefined2 local_1ee;
  undefined1 local_1ec;
  undefined1 local_1ea;
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined1 local_1e6;
  undefined2 local_1e4;
  undefined1 local_1e2;
  undefined1 local_1e1;
  short local_1d0;
  int local_1cc [15];
  undefined4 uStack_190;
  char acStack_12f [251];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *piStack_28;
  
  ppiVar4 = &local_210;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  piStack_28 = param_4;
  fn_00301f50(&local_1e8,0x1a0);
  local_1d0 = fn_0061dbbc(local_30,local_2c,param_4,param_10);
  local_1e8 = (undefined1)local_2c;
  local_1e7 = SUB41(param_4,0);
  local_1e6 = 4;
  local_1e4 = 5;
  local_1e2 = fn_00691d5c(local_30);
  local_1e1 = fn_00163a00(local_30);
  uVar6 = 0;
  iVar2 = fn_00692448(local_30);
  if (iVar2 != 0) {
    uVar6 = fn_006f4a8c(param_9,param_4);
  }
  fn_00655a48(&uStack_1f8,(int)(char)local_1d0,uVar6,param_8);
  uStack_1f8 = (uStack_1f8 & ~((unsigned int)0xff << 16)) | (((unsigned int)(1) & 0xff) << 16);
  if (param_6 != 0) {
    local_1ec = (undefined1)param_6;
    local_1ee = fn_006f08e4(local_34 + 0x24,param_6);
  }
  iVar2 = 100;
  if (param_5 == 2) {
    iVar2 = 0x96;
  }
  piVar8 = (int *)0x0;
  local_1ea = param_7;
  iVar5 = 0;
  if (0 < local_1d0) {
    do {
      local_208 = &uStack_1f8;
      local_204 = local_1cc + iVar5 * 2;
      apiStack_200[0] = (int *)0x0;
      local_20c = param_10;
      local_210 = param_4;
      fn_00616c50(local_30,(int)local_1d0,iVar5,local_2c);
      iVar7 = iVar5 + 1;
      iVar1 = (local_1cc[iVar5 * 2] * iVar2) / 100;
      local_1cc[iVar5 * 2] = iVar1;
      piVar8 = (int *)((int)piVar8 + iVar1);
      local_1f4 = local_1f4 + '\x01';
      iVar5 = iVar7;
    } while (iVar7 < local_1d0);
  }
  local_20c = (int *)0x270f;
  local_204 = piVar8;
  apiStack_200[0] = (int *)0xffffd8f1;
  if ((int)piVar8 < -9999) {
    ppiVar3 = apiStack_200;
  }
  else {
    ppiVar3 = &local_204;
  }
  if (9999 < (int)*ppiVar3) {
    ppiVar3 = &local_20c;
  }
  piVar8 = *ppiVar3;
  local_210 = &uStack_1f8;
  local_20c = &uStack_190;
  local_208 = (int *)0x0;
  fn_00618b44(local_30,local_2c,param_4,param_10);
  iVar2 = fn_00163c80(local_30);
  if (iVar2 != 1 || piVar8 != (int *)0x0) {
    local_210 = (int *)((int)piVar8 + *(int *)(param_11 + 0x1c));
    local_20c = (int *)0x270f;
    local_208 = (int *)0xffffd8f1;
    if ((int)local_210 < -9999) {
      ppiVar4 = &local_208;
    }
    if (9999 < (int)*ppiVar4) {
      ppiVar4 = &local_20c;
    }
    *(int **)(param_11 + 0x1c) = *ppiVar4;
    iVar2 = 1;
    do {
      if (acStack_12f[iVar2] != '\0') {
        iVar5 = param_11 + iVar2;
        *(bool *)(iVar5 + 0xb9) = acStack_12f[iVar2] != '\0' || *(char *)(iVar5 + 0xb9) != '\0';
        *(char *)(iVar5 + 0x58) = *(char *)((int)&uStack_190 + iVar2) + *(char *)(iVar5 + 0x58);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x61);
  }
  return;
}



void fn_00632198(int param_1,undefined4 param_2,int *param_3,char *param_4,char *param_5)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  undefined1 auStack_70 [52];
  undefined4 local_3c [2];
  int local_34;
  undefined4 local_30;
  int *piStack_2c;
  char *pcStack_28;
  
  local_3c[0] = 0;
  local_74 = 0;
  *param_4 = '\0';
  *param_5 = '\0';
  iVar12 = *param_3;
  local_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  pcStack_28 = param_4;
LAB_006321c4:
  while (uVar11 = local_30, iVar5 = param_3[1], iVar5 != iVar12) {
    puVar6 = (undefined4 *)fn_00656538(auStack_70,iVar12);
    iVar5 = fn_00626c48(local_34,local_30);
    iVar7 = (int)*(char *)(iVar12 + 5);
    uVar13 = (uint)*(char *)(iVar12 + 0x13);
    uVar10 = iVar7 - 0x10;
    bVar16 = uVar10 < 4;
    if (!bVar16) {
      uVar10 = iVar7 - 0x18;
    }
    if ((bVar16 || uVar10 < 4) || (iVar7 == 0x20 || iVar7 == 0x22)) {
      bVar16 = true;
    }
    else {
      bVar16 = false;
    }
    fn_0062a40c(local_34,iVar12);
    bVar3 = fn_00691e94();
    bVar4 = fn_006f3120(iVar5);
    if ((*(char *)(local_34 + *(char *)(iVar12 + 5) + -8) == '\0' & bVar3 & bVar4) == 0)
    goto LAB_00632310;
    if (*(char *)(iVar5 + 0x8d) != '\0') {
      pcVar2 = param_4;
      if (!bVar16) {
        puVar6 = &local_74;
        pcVar2 = param_5;
      }
      if (bVar16) {
        puVar6 = local_3c;
      }
      if (*pcVar2 == '\0') {
        *pcVar2 = *(char *)(iVar12 + 5);
        *puVar6 = *(undefined4 *)(iVar12 + 8);
      }
    }
    if (0 < (int)uVar13) {
      if (bVar16) {
        cVar1 = *param_4;
        uVar11 = local_3c[0];
      }
      else {
        cVar1 = *param_5;
        uVar11 = local_74;
      }
      if (cVar1 != '\0') {
        puVar6 = (undefined4 *)(iVar12 + -0x2c);
        if ((uVar13 & 1) != 0) {
          puVar6 = (undefined4 *)(iVar12 + 8);
          *puVar6 = uVar11;
        }
        for (iVar5 = (int)uVar13 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar6[0xd] = uVar11;
          puVar6 = puVar6 + 0x1a;
          *puVar6 = uVar11;
        }
      }
      goto LAB_00632300;
    }
  }
  iVar12 = *param_3;
  if (iVar12 == iVar5) {
    return;
  }
  iVar7 = iVar5 - iVar12;
  puVar6 = (undefined4 *)0x0;
  uVar13 = iVar7 / 0x34;
  uVar10 = uVar13 * 0x34;
  iVar15 = DAT_008c6cfc + 1;
  DAT_008c6cfc = iVar15;
  if (((DAT_008c6d00 & 1) == 0) && (iVar8 = fn_00303afc(&DAT_008c6d00), iVar8 != 0)) {
    DAT_008c6d04 = (undefined4 *)&DAT_008f9fe8;
  }
  if (DAT_008c6d04 == (undefined4 *)0x0) {
    uVar10 = 0;
    DAT_008c6cfc = DAT_008c6cfc + -1;
  }
  else {
    fn_002feef8(0);
    if (uVar10 != 0) {
      bVar17 = 0xfff < uVar10;
      bVar16 = uVar10 == 0x1000;
      if (uVar10 < 0x1001) {
        bVar17 = iVar15 != 0;
        bVar16 = iVar15 == 1;
      }
      if (!bVar17 || bVar16) {
        puVar6 = DAT_008c6d04;
        goto LAB_0063240c;
      }
      puVar6 = (undefined4 *)fn_002ff600(uVar10);
    }
  }
  DAT_008c6cfc = DAT_008c6cfc + -1;
LAB_0063240c:
  uVar10 = uVar10 / 0x34;
  if (puVar6 != (undefined4 *)0x0) {
    puVar9 = &local_7c;
    if ((int)uVar10 <= (int)uVar13) {
      puVar9 = &local_78;
    }
    local_78 = uVar10;
    local_7c = uVar13;
    uVar13 = *puVar9;
    puVar14 = puVar6;
    for (iVar7 = iVar12; iVar7 != iVar12 + uVar13 * 0x34; iVar7 = iVar7 + 0x34) {
      if (puVar14 != (undefined4 *)0x0) {
        fn_00656538(puVar14,iVar7);
      }
      puVar14 = puVar14 + 0xd;
    }
    fn_007b72e0(iVar12,iVar5,puVar6,uVar10,0,uVar11);
    for (puVar14 = puVar6; puVar14 != puVar6 + uVar13 * 0xd; puVar14 = puVar14 + 0xd) {
      (**(code **)*puVar14)(puVar14);
    }
    DAT_008c6cfc = DAT_008c6cfc + 1;
    if (((DAT_008c6d00 & 1) == 0) && (iVar12 = fn_00303afc(&DAT_008c6d00), iVar12 != 0)) {
      DAT_008c6d04 = (undefined4 *)&DAT_008f9fe8;
    }
    if (puVar6 == DAT_008c6d04) {
      DAT_008c6cfc = DAT_008c6cfc + -1;
    }
    else {
      fn_002feef8(puVar6);
    }
    DAT_008c6cfc = DAT_008c6cfc + -1;
    return;
  }
  if (iVar7 < 0x30c) {
    fn_007a5540(iVar12,iVar5,uVar11);
    return;
  }
  iVar7 = iVar12 + (iVar7 / 0x68) * 0x34;
  fn_007b6384(iVar12,iVar7,uVar11);
  fn_007b6384(iVar7,iVar5,uVar11);
  fn_007b6a60(iVar12,iVar7,iVar5,(iVar7 - iVar12) / 0x34,(iVar5 - iVar7) / 0x34,uVar11);
  return;
LAB_00632310:
  if (0 < (int)uVar13) {
LAB_00632300:
    iVar12 = iVar12 + uVar13 * 0x34;
  }
  goto LAB_006321c4;
}


