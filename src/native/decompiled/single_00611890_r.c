#include "single_00611890_r.h"


extern undefined4 u___07f_008c6802;
extern undefined4 u__0_1f_008c685c;
extern undefined4 u__2lld_008c6956;
extern undefined4 u__02lld_008c6972;

void fn_00611890(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  char *pcVar10;
  undefined4 *puVar11;
  undefined8 local_58;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [8];
  undefined4 local_38;
  int local_34;
  undefined1 auStack_30 [20];
  
  piVar9 = (int *)&local_58;
  puVar11 = *(undefined4 **)(*(int *)(DAT_008977e0 + 0x40) + 8);
  uVar1 = *(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4);
  uVar2 = fn_006c969c();
  uVar3 = fn_006ca8c0(uVar1);
  iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
  uVar5 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                    (*(int **)(iVar4 + 0x10),s_G01_tb_00_008c6b33,1);
  fn_00190d50(uVar5,uVar2);
  if (uVar3 < 100) {
    fn_00101a50(auStack_40,3,&DAT_008c6b44,uVar3);
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_df_lv_008c6b3d,1);
    puVar6 = auStack_40;
  }
  else {
    puVar6 = (undefined1 *)fn_00231ca0(0x25,0);
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_df_lv_008c6b3d,1);
  }
  fn_00190d50(uVar2,puVar6);
  iVar4 = fn_006c89fc(uVar1);
  if ((iVar4 == 1 || iVar4 == 3) || ((iVar4 == 4 || iVar4 == 5) || iVar4 == 6)) {
    local_38 = *puVar11;
    local_34 = puVar11[1];
    local_58 = (double)CONCAT44(((unsigned long long)(local_58) >> 32) & 0xffffffff,0x29);
    local_58 = (double)fn_00129f6c(&local_38,local_34,0xed75ed55,0x9c5fff26);
    fn_00101a50(auStack_50,3,u__2lld_008c6956);
    iVar7 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar7 + 0x10) + 0x2c))
                      (*(int **)(iVar7 + 0x10),s_tb_playtime_01_008c6962,1);
    fn_00190d50(uVar2,auStack_50);
    local_58 = (double)CONCAT44(((unsigned long long)(local_58) >> 32) & 0xffffffff,0x1c);
    fn_00129f6c(&local_38,extraout_r1,0x68fd3d1d,0x12533fe);
    iVar7 = 0x3c;
    uVar2 = 0;
    fn_0011c134();
    local_58 = (local_58 & ~((unsigned int)0xffffffff << 0)) | ((unsigned int)(iVar7) & 0xffffffff);
    local_58 = (local_58 & ~((unsigned long long)0xffffffff << 32)) | (((unsigned long long)(uVar2) & 0xffffffff) << 32);
    fn_00101a50(auStack_50,3,u__02lld_008c6972);
    iVar7 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar7 + 0x10) + 0x2c))
                      (*(int **)(iVar7 + 0x10),s_tb_playtime_02_008c6980,1);
    fn_00190d50(uVar2,auStack_50);
    local_58 = (double)CONCAT44(((unsigned long long)(local_58) >> 32) & 0xffffffff,0x1a);
    fn_00129f6c(&local_38,extraout_r1_00,0x26d694b3,0x112e0be8);
    uVar2 = 0x3c;
    uVar5 = 0;
    fn_0011c134();
    local_58 = (double)CONCAT44(uVar5,uVar2);
    fn_00101a50(auStack_50,3,u__02lld_008c6972);
    iVar7 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar7 + 0x10) + 0x2c))
                      (*(int **)(iVar7 + 0x10),s_tb_playtime_03_008c698f,1);
    fn_00190d50(uVar2,auStack_50);
  }
  else {
    iVar7 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    iVar7 = (**(code **)(**(int **)(iVar7 + 0x10) + 0x2c))
                      (*(int **)(iVar7 + 0x10),s_frame_playtime_008c699e,1);
    *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe;
  }
  if (iVar4 == 0) {
    fn_00101a50(auStack_50,3,&DAT_008c69ae,puVar11[5]);
    iVar7 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar7 + 0x10) + 0x2c))
                      (*(int **)(iVar7 + 0x10),s_G02_tb_00_008c69b6,1);
    fn_00190d50(uVar2,auStack_50);
  }
  else {
    iVar7 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    iVar7 = (**(code **)(**(int **)(iVar7 + 0x10) + 0x2c))
                      (*(int **)(iVar7 + 0x10),s_frame_turncount_008c69c0,1);
    *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe;
    if ((iVar4 == 2 || iVar4 == 5) || iVar4 == 6) {
      fn_00101a50(auStack_50,3,&DAT_008c69ae,puVar11[6]);
      iVar7 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
      uVar2 = (**(code **)(**(int **)(iVar7 + 0x10) + 0x2c))
                        (*(int **)(iVar7 + 0x10),s_G02_tb_01_008c69d0,1);
      fn_00190d50(uVar2,auStack_50);
      goto LAB_00611bd4;
    }
  }
  iVar7 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
  iVar7 = (**(code **)(**(int **)(iVar7 + 0x10) + 0x2c))
                    (*(int **)(iVar7 + 0x10),s_frame_battlecount_008c69da,1);
  *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe;
LAB_00611bd4:
  if (iVar4 == 5 || iVar4 == 6) {
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar3 = 1;
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_frame_deathcount_008c69f6);
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
  }
  else {
    fn_00101a50(auStack_50,3,&DAT_008c69ae,puVar11[7]);
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar3 = 1;
    uVar2 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G02_tb_02_008c69ec);
    fn_00190d50(uVar2,auStack_50);
  }
  uVar8 = fn_006c89e4(uVar1);
  uVar1 = DAT_00897800;
  if (uVar8 != 0) {
    uVar3 = uVar8;
  }
  if ((uVar8 < 2) || (uVar8 == 4 || uVar8 == 5)) {
    local_58 = (double)*(float *)(*(int *)(param_1 + 0x20) + 0xc);
    fn_00101a50(auStack_50,10,u___07f_008c6802);
    uVar2 = fn_0016ba34(uVar1,L"rom:/data/Message/DiscQuestResultMessage.mes",
                         s_BasicResultType_Odds_008c6818,0);
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar5 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_10_008c680e,1);
    fn_00190d50(uVar5,uVar2);
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_13_008c682d,1);
    fn_00190d50(uVar2,auStack_50);
    fn_00101a50(&local_38,6,&DAT_008c6838,*(undefined2 *)(*(int *)(param_1 + 0x20) + 8));
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_02_008c6840,1);
    fn_00190d50(uVar2,&local_38);
    fn_00101a50(&local_38,3,&DAT_008c684a,*(undefined1 *)(*(int *)(param_1 + 0x20) + 6));
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_05_008c6852,1);
    fn_00190d50(uVar2,&local_38);
    local_58 = (double)*(float *)(*(int *)(param_1 + 0x20) + 0x10);
    fn_00101a50(&local_38,6,u__0_1f_008c685c);
    uVar1 = fn_0016ba34(uVar1,L"rom:/data/Message/DiscQuestResultMessage.mes",
                         s_ResultType_Odds_008c6872,0);
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_06_008c6868,1);
    fn_00190d50(uVar2,uVar1);
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar1 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_09_008c6882,1);
    puVar11 = &local_38;
  }
  else {
    if (uVar3 == 2) {
      pcVar10 = s_PrizeUnit_Exp_008c688c;
    }
    else {
      pcVar10 = s_PrizeUnit_Gold_008c689a;
    }
    fn_00101a50(auStack_4c,7,&DAT_008c68aa,*(undefined2 *)(*(int *)(param_1 + 0x20) + 0x14));
    uVar2 = fn_0016ba34(uVar1,L"rom:/data/Message/DiscQuestResultMessage.mes",
                         s_BasicResultType_Value_008c68bc,0);
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar5 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_10_008c68b2,1);
    fn_00190d50(uVar5,uVar2);
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_11_008c68d2,1);
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_13_008c68dc,1);
    fn_00190d50(uVar2,auStack_4c);
    uVar2 = fn_0016ba34(uVar1,L"rom:/data/Message/DiscQuestResultMessage.mes",pcVar10,0);
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar5 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_16_008c68e6,1);
    fn_00190d50(uVar5,uVar2);
    fn_00101a50(auStack_30,4,&DAT_008c68f0,*(undefined2 *)(*(int *)(param_1 + 0x20) + 8));
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_02_008c68f8,1);
    fn_00190d50(uVar2,auStack_30);
    fn_00101a50(&local_34,3,&DAT_008c6902,*(undefined1 *)(*(int *)(param_1 + 0x20) + 6));
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_05_008c690a,1);
    fn_00190d50(uVar2,&local_34);
    local_34 = *(int *)(*(int *)(param_1 + 0x20) + 0x18);
    if (uVar3 == 3) {
      local_58 = (double)CONCAT44(((unsigned long long)(local_58) >> 32) & 0xffffffff,9999999);
      if (local_34 < 10000000) {
        piVar9 = &local_34;
      }
      local_34 = *piVar9;
    }
    fn_00101a50(auStack_30,8,&DAT_008c6914,local_34);
    uVar2 = fn_0016ba34(uVar1,L"rom:/data/Message/DiscQuestResultMessage.mes",
                         s_ResultType_Value_008c6926,0);
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar5 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_06_008c691c,1);
    fn_00190d50(uVar5,uVar2);
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_07_008c6937,1);
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar2 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_09_008c6941,1);
    fn_00190d50(uVar2,auStack_30);
    puVar11 = (undefined4 *)
              fn_0016ba34(uVar1,L"rom:/data/Message/DiscQuestResultMessage.mes",pcVar10,0);
    iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    uVar1 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                      (*(int **)(iVar4 + 0x10),s_G00_tb_17_008c694b,1);
  }
  fn_00190d50(uVar1,puVar11);
  return;
}


