#include "001fcc44_001fd738a.h"



void fn_001fce04(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined **ppuVar10;
  int iVar11;
  undefined4 in_s0;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
  float fVar17;
  undefined1 auStack_1b8 [256];
  undefined1 auStack_b8 [148];
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 0x393) = param_4;
  uVar1 = fn_0068c6ac(DAT_008977e8);
  uVar1 = fn_006adab8(uVar1,param_3);
  fn_00301f50(auStack_1b8,0x100);
  fn_0018a618(auStack_1b8,0x80,0x7f,DAT_00896df4,uVar1);
  uVar2 = fn_001481c8(*param_1,auStack_1b8,&DAT_008c409e,1,1);
  param_1[1] = uVar2;
  uVar2 = fn_001481c8(*param_1,DAT_00896dfc,&DAT_008c409e,1,1);
  param_1[2] = uVar2;
  fn_00301f50(auStack_b8,0x80);
  fn_0017d96c(auStack_b8,0x80,0x7f,DAT_00896df8,uVar1);
  uVar1 = fn_001480d0(*param_1,param_1[1],auStack_b8,uVar1,1,1,1);
  param_1[3] = uVar1;
  uVar1 = fn_001480d0(*param_1,param_1[2],DAT_00896e00,&DAT_008c40a0,1,1,0);
  param_1[4] = uVar1;
  uVar1 = fn_0010887c(*param_1,param_1[2],DAT_00896e04,uVar1);
  param_1[0x386] = uVar1;
  uVar1 = fn_0010887c(*param_1,param_1[2],DAT_00896e08,param_1[4]);
  param_1[0x387] = uVar1;
  uVar1 = fn_0068c6ac(DAT_008977e8);
  fn_006adadc(uVar1,param_3);
  param_1[6] = in_s0;
  iVar3 = fn_00178f9c(*param_1,param_1[3]);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar3 != 0) {
    iVar4 = fn_00689210(iVar3,s_Null_navimap_008c40a1);
    param_1[5] = iVar4;
    if (iVar4 != 0) {
      uVar1 = fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b6f3c(uVar1,0);
      fVar14 = *(float *)(iVar4 + 8);
      fVar16 = *(float *)(iVar4 + 0x10);
      uVar15 = CONCAT44(fVar16,fVar14);
      uVar9 = 1;
      fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b6bc4();
      if (1 < iVar4) {
        do {
          uVar1 = fn_0014481c(DAT_008977e8);
          iVar4 = fn_006b6f3c(uVar1,uVar9 & 0xff,0);
          fVar12 = *(float *)(iVar4 + 8);
          fVar13 = *(float *)(iVar4 + 0x10);
          uVar9 = uVar9 + 1;
          if (fVar12 < fVar14) {
            fVar14 = fVar12;
          }
          if (fVar12 <= (float)uVar15) {
            fVar12 = (float)uVar15;
          }
          fVar17 = (float)((ulonglong)uVar15 >> 0x20);
          if (fVar13 < fVar16) {
            fVar16 = fVar13;
          }
          if (fVar13 <= fVar17) {
            fVar13 = fVar17;
          }
          uVar15 = CONCAT44(fVar13,fVar12);
          fn_0014481c(DAT_008977e8);
          iVar4 = fn_006b6bc4();
        } while ((int)uVar9 < iVar4);
      }
      iVar4 = param_1[5];
      uVar1 = 0;
      fVar12 = 50.0 - (fVar14 + (float)uVar15) * 0.5 * (float)param_1[6];
      fVar14 = (float)param_1[6] * (fVar16 + (float)((ulonglong)uVar15 >> 0x20)) * 0.5;
      *(float *)(iVar4 + 0x1c) = fVar12;
      *(float *)(iVar4 + 0x20) = fVar14;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
      iVar4 = fn_00689210(iVar3,&DAT_008c40ae);
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x1c) = fVar12;
        *(float *)(iVar4 + 0x20) = fVar14;
        *(undefined4 *)(iVar4 + 0x24) = uVar1;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
      }
      iVar4 = fn_00689210(iVar3,s_Null_plc_name_008c40b3);
      if (iVar4 != 0) {
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
      }
      iVar4 = fn_00689210(iVar3,s_Null_mp_change_008c40c1);
      if (iVar4 != 0) {
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
      }
      iVar3 = fn_00689210(iVar3,s_cloud_008c40d0);
      if (iVar3 != 0) {
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
      }
    }
  }
  iVar3 = fn_00178f9c(*param_1,param_1[4]);
  iVar3 = *(int *)(iVar3 + 0x10);
  uVar9 = 0;
  if (*(char *)(param_1 + 0x393) == '\0') {
    ppuVar10 = (undefined **)&DAT_008c41b0;
  }
  else {
    ppuVar10 = &PTR_s_tb_pts_04_008c41c0;
  }
  do {
    uVar1 = fn_0068897c(iVar3,ppuVar10[uVar9]);
    param_1[uVar9 + 7] = uVar1;
    fn_00688c04(uVar1,0);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  iVar4 = 0;
  if (*(char *)(param_1 + 0x393) == '\0') {
    ppuVar10 = (undefined **)&DAT_008c4150;
    iVar11 = 4;
  }
  else {
    ppuVar10 = &PTR_s_crown_04_008c4190;
    iVar11 = 2;
  }
  do {
    iVar5 = 0;
    do {
      uVar1 = fn_00689210(iVar3,ppuVar10[iVar5 + iVar4 * 4]);
      iVar6 = iVar5 + 1;
      param_1[iVar4 * 4 + iVar5 + 0xb] = uVar1;
      iVar5 = iVar6;
    } while (iVar6 < 4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar11);
  if (iVar3 != 0) {
    uVar9 = 0;
    do {
      fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b6bc4();
      if ((int)uVar9 < iVar4) {
        iVar4 = fn_00689210(iVar3,(&PTR_s_race_icon_home_00_008c40f8)[uVar9]);
        param_1[uVar9 + 0x1b] = iVar4;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
      }
      else {
        iVar4 = fn_00689210(iVar3,(&PTR_s_race_icon_home_00_008c40f8)[uVar9]);
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 4);
  }
  fn_001fd4b8(param_1,iVar3);
  fn_001fcc44(param_1,iVar3);
  if (iVar3 != 0) {
    iVar4 = fn_00689210(iVar3,s_ic_bakudaniwa_008c40d6);
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
    iVar11 = fn_00689210(iVar3,s_ic_bakudaniwa_gold_008c40e4);
    uVar9 = 1;
    *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe;
    param_1[0x29] = iVar11;
    param_1[0x28] = iVar4;
    do {
      uVar1 = fn_006892dc(iVar4);
      param_1[uVar9 * 2 + 0x28] = uVar1;
      uVar1 = fn_006892dc(iVar11);
      param_1[uVar9 * 2 + 0x29] = uVar1;
      fn_0018a69c(*(undefined4 *)(iVar4 + 0xc),param_1[uVar9 * 2 + 0x28]);
      fn_0018a69c(*(undefined4 *)(iVar11 + 0xc),param_1[uVar9 * 2 + 0x29]);
      uVar9 = uVar9 + 1;
    } while (uVar9 < 5);
    if (iVar3 != 0) {
      iVar3 = fn_00689210(iVar3,s_Null_race_monster_point_008c3ea2);
      uVar9 = 1;
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
      param_1[0x32] = iVar3;
      do {
        uVar1 = fn_006892dc(iVar3);
        param_1[uVar9 * 4 + 0x32] = uVar1;
        fn_0018a69c(*(undefined4 *)(iVar3 + 0xc),uVar1);
        uVar9 = uVar9 + 1;
      } while (uVar9 < 0x32);
      uVar9 = 0;
      do {
        uVar7 = 0;
        do {
          uVar1 = fn_00689210(param_1[uVar9 * 4 + 0x32],(&DAT_008c3e54)[uVar7]);
          uVar8 = uVar7 + 1;
          param_1[uVar9 * 4 + uVar7 + 0x33] = uVar1;
          uVar7 = uVar8;
        } while (uVar8 < 3);
        uVar9 = uVar9 + 1;
      } while (uVar9 < 0x32);
    }
  }
  iVar4 = fn_00145b00(4,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar3 = fn_003104ac();
  }
  iVar4 = param_1[0x391];
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      fn_0013aee8(iVar4);
      fn_002feef8();
    }
    param_1[0x391] = iVar3;
  }
  return;
}



void fn_001fcc44(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  bool bVar8;
  undefined8 uVar9;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = fn_00178f9c(*param_1,param_1[4]);
  fn_006889d8(uVar1,s_Null_tag_008c3fec,(int)*(char *)(param_1 + 0x393));
  fn_006889d8(uVar1,s_Null_name_008c3ff5);
  if (*(char *)(param_1 + 0x393) == '\0') {
    iVar2 = fn_00689210(param_2,s_player_light_008c400f);
    ppuVar7 = &PTR_s_win_ranking_00_008c3ebc;
    ppuVar6 = &PTR_s_player_mark_00_008c3edc;
  }
  else {
    iVar2 = fn_00689210(param_2,s_player_light_00_008c3fff);
    ppuVar7 = (undefined **)&DAT_008c3ecc;
    ppuVar6 = &PTR_s_player_mark_04_008c3eec;
  }
  param_1[0x27] = iVar2;
  if (iVar2 != 0) {
    fn_00151954(*(undefined4 *)(iVar2 + 0xc));
  }
  uVar5 = 0;
  do {
    iVar2 = fn_00689210(param_2,ppuVar7[uVar5]);
    param_1[uVar5 + 0x23] = iVar2;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    iVar2 = fn_00689210(param_2,ppuVar6[uVar5]);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    uVar1 = fn_0014481c(DAT_008977e8);
    piVar3 = (int *)fn_006b71a8(uVar1,uVar5 & 0xff);
    if (piVar3 != (int *)0x0) {
      uVar9 = (**(code **)(*piVar3 + 0x98))();
      iVar2 = (int)((ulonglong)uVar9 >> 0x20);
      bVar8 = (int)uVar9 != 0;
      if (bVar8) {
        iVar2 = param_1[0x27];
      }
      if ((bVar8 && iVar2 != 0) && (*(int *)(iVar2 + 0xc) == 0)) {
        fn_0018a69c(param_1[uVar5 + 0x23]);
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  fn_0014481c(DAT_008977e8);
  for (iVar2 = fn_006b6bc4(); iVar2 < 4; iVar2 = iVar2 + 1) {
    iVar4 = fn_00689210(param_2,ppuVar7[iVar2]);
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
    iVar4 = fn_00689210(param_2,ppuVar6[iVar2]);
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
  }
  return;
}


