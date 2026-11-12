#include "0062d760_0062dbc8.h"



undefined1 * fn_0062dbc8(undefined4 param_1,int param_2,int *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  int local_98 [12];
  undefined1 auStack_68 [64];
  int local_28 [2];
  
  local_98[0] = 0;
  local_98[1] = 1;
  local_98[2] = 2;
  local_98[3] = 3;
  local_98[4] = 4;
  local_98[5] = 5;
  local_98[6] = 6;
  local_98[7] = 7;
  uVar10 = 0;
  do {
    iVar12 = local_98[uVar10];
    uVar1 = fn_0063a5a4();
    local_98[uVar10] = local_98[uVar1 & 7];
    uVar10 = uVar10 + 1;
    local_98[uVar1 & 7] = iVar12;
  } while (uVar10 < 8);
  puVar11 = (undefined1 *)*param_3;
  iVar12 = 0;
  while (puVar2 = (undefined1 *)param_3[1], puVar2 != puVar11) {
    iVar3 = fn_0062bc78(param_1,param_2,puVar11);
    iVar7 = (int)(char)puVar11[0x13];
    iVar4 = 0;
    if (0 < iVar7) {
      iVar8 = local_98[iVar12];
      do {
        iVar9 = iVar4;
        if (*(char *)(param_2 + 1) != '\x01') {
          iVar9 = iVar7 - iVar4;
        }
        iVar4 = iVar4 + 1;
        *(int *)(puVar11 + 8) = iVar9 + (iVar8 + iVar3 * 10) * 10;
        puVar11 = puVar11 + 0x34;
      } while (iVar4 < iVar7);
    }
    iVar12 = iVar12 + 1;
  }
  puVar11 = (undefined1 *)*param_3;
  puVar5 = puVar2;
  if (puVar11 != puVar2) {
    fn_007af59c(puVar11,puVar2,((int)puVar2 - (int)puVar11) / 0x34,param_2);
    if ((int)puVar2 - (int)puVar11 < 0x341) {
      puVar11 = (undefined1 *)fn_007a5540(puVar11,puVar2,param_2);
      return puVar11;
    }
    puVar5 = (undefined1 *)fn_007a5540(puVar11,puVar11 + 0x340,param_2);
    for (puVar11 = puVar11 + 0x340; puVar11 != puVar2; puVar11 = puVar11 + 0x34) {
      uVar6 = fn_00656538(auStack_68,puVar11);
      local_28[0] = param_2;
      iVar12 = fn_006f0908(local_28,uVar6);
      puVar5 = puVar11;
      while (iVar12 != 0) {
        puVar5[4] = puVar5[-0x30];
        puVar5[5] = puVar5[-0x2f];
        puVar5[6] = puVar5[-0x2e];
        *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(puVar5 + -0x2c);
        fn_006f94f4(puVar5 + 0xc,puVar5 + -0x28);
        *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(puVar5 + -0x28);
        *(undefined2 *)(puVar5 + 0xc) = *(undefined2 *)(puVar5 + -0x28);
        *(undefined2 *)(puVar5 + 0xc) = *(undefined2 *)(puVar5 + -0x28);
        *(undefined2 *)(puVar5 + 0xc) = *(undefined2 *)(puVar5 + -0x28);
        puVar5[0x16] = puVar5[-0x1e];
        *(undefined4 *)(puVar5 + 0x18) = *(undefined4 *)(puVar5 + -0x1c);
        *(undefined4 *)(puVar5 + 0x1c) = *(undefined4 *)(puVar5 + -0x18);
        *(undefined4 *)(puVar5 + 0x20) = *(undefined4 *)(puVar5 + -0x14);
        *(undefined4 *)(puVar5 + 0x24) = *(undefined4 *)(puVar5 + -0x10);
        *(undefined4 *)(puVar5 + 0x28) = *(undefined4 *)(puVar5 + -0xc);
        *(undefined4 *)(puVar5 + 0x2c) = *(undefined4 *)(puVar5 + -8);
        *(undefined4 *)(puVar5 + 0x30) = *(undefined4 *)(puVar5 + -4);
        iVar12 = fn_006f0908(local_28,uVar6);
        puVar5 = puVar5 + -0x34;
      }
      fn_006565e0(puVar5,uVar6);
      puVar5 = auStack_68;
    }
  }
  return puVar5;
}



undefined1 *
fn_0062d9f8(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 uStack_36198;
  uint uStack_36194;
  undefined1 *puStack_36190;
  undefined1 auStack_3618c [5];
  undefined1 uStack_36187;
  undefined1 uStack_36186;
  undefined1 auStack_36158 [221440];
  undefined1 auStack_58 [52];
  
  fn_00656538(auStack_3618c);
  fn_00619504(auStack_36158);
  uStack_36198 = param_1 + 4;
  uStack_36194 = param_4;
  puStack_36190 = auStack_36158;
  fn_0061e728(auStack_58,(int)*(char *)(param_2 + 5),param_3,param_5);
  fn_0061e370(auStack_58,auStack_3618c);
  iVar2 = fn_0062a40c(param_1,auStack_3618c);
  if (iVar2 == 0x165) {
    uVar3 = fn_0063a5a4();
    uVar3 = uVar3 % 100;
    if (uVar3 < 10) {
      uVar1 = 0x1d4;
    }
    else if (uVar3 < 0x1e) {
      uVar1 = 0x1d5;
    }
    else if (uVar3 < 0x5a) {
      uVar1 = 0x1d6;
    }
    else {
      uVar1 = 0x174;
    }
  }
  else {
    iVar2 = fn_0062a40c(param_1,auStack_3618c);
    if (iVar2 != 0x78) {
      iVar2 = fn_0062a40c(param_1,auStack_3618c);
      if (iVar2 == 0x275) {
        uVar4 = fn_0063a5a4();
        fn_00169f1c(uVar4,7);
        uVar1 = fn_006921a0(extraout_r1);
        uStack_36198 = CONCAT22(((unsigned int)(uStack_36198) >> 16) & 0xffff,uVar1);
        uStack_36198 = CONCAT13(uStack_36187,(undefined3)uStack_36198);
        uStack_36194 = CONCAT31(((unsigned int)(uStack_36194) >> 8) & 0xffffff,uStack_36186);
        fn_00656458(auStack_3618c,&uStack_36198);
      }
      goto LAB_0062db6c;
    }
    uVar3 = fn_0063a5a4();
    uVar1 = *(undefined2 *)(&DAT_007e192c + (uVar3 & 7) * 2);
  }
  uStack_36198 = CONCAT22(((unsigned int)(uStack_36198) >> 16) & 0xffff,uVar1);
  uStack_36194 = uStack_36194 & 0xffffff00;
  uStack_36198 = CONCAT13(uStack_36187,(undefined3)uStack_36198);
  fn_00656458(auStack_3618c,&uStack_36198);
LAB_0062db6c:
  fn_006565e0(param_6,auStack_3618c);
  fn_0061e770(auStack_58);
  return auStack_3618c;
}



void fn_0062d760(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  char acStack_98 [4];
  uint local_94;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [56];
  undefined1 auStack_48 [20];
  undefined4 local_34;
  undefined4 uStack_30;
  int iStack_2c;
  int *piStack_28;
  
  local_84 = 0;
  local_88 = 0;
  local_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  piStack_28 = param_4;
  fn_0062a40c(param_1);
  iVar7 = fn_00163c80();
  if ((iVar7 == 1) && (iVar7 = 0, 0 < *param_4)) {
    param_3 = param_3 + 0x180388;
    do {
      cVar2 = *(char *)((int)param_4 + iVar7 * 0x1a0 + 9);
      iVar11 = (int)cVar2;
      if (acStack_98[iVar11] == '\0') {
        iVar8 = param_3 + iVar11 * 0x418;
        if (0 < *(short *)(iVar8 + -0x4080)) {
          cVar1 = *(char *)(iVar8 + -0x4019);
          bVar13 = cVar1 == '\0';
          if (bVar13) {
            cVar1 = *(char *)(iVar8 + -0x400a);
          }
          bVar14 = bVar13 && cVar1 == '\0';
          if (bVar13 && cVar1 == '\0') {
            bVar14 = *(char *)(iVar8 + -0x4018) == '\0';
          }
          if (bVar14) {
            iVar8 = fn_006f44fc((short *)(iVar8 + -0x4080),0xe4);
            if (iVar8 == 0) {
              acStack_98[iVar11] = '\x01';
            }
            else {
              local_94 = (uint)(short)param_4[iVar7 * 0x68 + 8];
              bVar13 = false;
              if (0 < (int)(local_94 - 1)) {
                iVar8 = iVar7 * 0x1a0 + 0x16;
                iVar5 = iVar7 * 0x68 + 7;
                if ((local_94 & 1) == 0) {
                  iVar8 = iVar7 * 0x1a0 + 0x17;
                  bVar13 = *(char *)((int)param_4 + iVar7 * 0x1a0 + 0x17) != '\0';
                  iVar10 = 0;
                  if (bVar13) {
                    iVar10 = param_4[iVar7 * 0x68 + 9];
                  }
                  iVar5 = iVar7 * 0x68 + 9;
                  bVar13 = bVar13 && iVar10 != 0;
                }
                cVar1 = ((char *)((int)param_4 + iVar8))[1];
                iVar12 = (param_4 + iVar5)[2];
                piVar4 = param_4 + iVar5;
                pcVar9 = (char *)((int)param_4 + iVar8);
                for (iVar10 = (int)(local_94 - 1) >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
                  bVar14 = cVar1 != '\0';
                  bVar15 = iVar12 != 0;
                  cVar1 = pcVar9[3];
                  iVar12 = piVar4[6];
                  bVar13 = (bool)(bVar13 | (bVar14 && bVar15) |
                                 (pcVar9[2] != '\0' && piVar4[4] != 0));
                  piVar4 = piVar4 + 4;
                  pcVar9 = pcVar9 + 2;
                }
              }
              iVar8 = local_94 - 1;
              if (-1 < iVar8) {
                if ((*(char *)((int)param_4 + iVar8 + iVar7 * 0x1a0 + 0x17) == '\0') ||
                   (param_4[iVar7 * 0x68 + iVar8 * 2 + 9] == 0)) {
                  bVar3 = 0;
                }
                else {
                  bVar3 = 1;
                }
                bVar13 = (bool)(bVar13 | bVar3);
              }
              if (bVar13) {
                acStack_98[iVar11] = '\x01';
                pcVar9 = (char *)fn_006228ac(param_4);
                pcVar9[0x18] = '\x01';
                pcVar9[0x19] = '\0';
                *pcVar9 = cVar2;
                pcVar9[1] = cVar2;
                pcVar9[2] = '\x03';
                pcVar9[4] = -0x1c;
                pcVar9[5] = '\0';
                pcVar9[6] = '\t';
                pcVar9[7] = '\x06';
                fn_006565b8(auStack_80);
                fn_00655a88(auStack_48);
                fn_006564a8(auStack_80,0xe4,iVar11,0);
                sVar6 = fn_001746c0(0xe4);
                fn_00618b44((int)sVar6,(int)*pcVar9,(int)pcVar9[1],param_3,auStack_48,pcVar9 + 0x58
                             ,0);
                fn_0062454c(local_34,pcVar9,param_3,0,1);
                fn_00654c08(local_34,pcVar9,param_3);
                param_4[1] = param_4[1] + 1;
              }
            }
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *param_4);
  }
  return;
}


