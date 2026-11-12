#include "001fef28_001ff244.h"



void fn_001ff244(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int local_3c [6];
  
  *param_1 = param_2;
  fn_0069c324(param_1[0x77]);
  fn_0068eb24(DAT_008977e8);
  fn_0069c3c0(param_1[0x77],2);
  uVar2 = fn_001481c8(*param_1,DAT_00896e88,&DAT_008c471c,1,1);
  param_1[0x29] = uVar2;
  uVar2 = fn_001923e0(*param_1,DAT_00896e8c,0,1,0);
  param_1[0x2a] = uVar2;
  uVar6 = 0;
  do {
    uVar2 = fn_0010887c(*param_1,param_1[0x29],(&DAT_00896e98)[uVar6],param_1[0x2a]);
    uVar8 = uVar6 + 1;
    param_1[uVar6 + 7] = uVar2;
    uVar6 = uVar8;
  } while (uVar8 < 0x20);
  uVar2 = fn_0010887c(*param_1,param_1[0x29],DAT_00896e90,param_1[0x2a]);
  param_1[0x27] = uVar2;
  uVar2 = fn_00178f9c(*param_1,param_1[0x2a]);
  iVar3 = fn_00172c98(uVar2,s_act_x_008c471e);
  param_1[0xb5] = iVar3;
  uVar2 = *(undefined4 *)(iVar3 + 0xac);
  piVar4 = (int *)fn_00551a90(uVar2,s_charge_008c4724);
  param_1[0xb1] = piVar4;
  (**(code **)(*piVar4 + 0x10))(piVar4,0);
  piVar4 = (int *)fn_00551a90(uVar2,&DAT_008c472b);
  param_1[0xb2] = piVar4;
  (**(code **)(*piVar4 + 0x10))(piVar4,0);
  piVar4 = (int *)fn_00551a90(uVar2,s_wait_ripple_008c4730);
  param_1[0xb3] = piVar4;
  (**(code **)(*piVar4 + 0x10))(piVar4,0);
  *(undefined1 *)(param_1 + 0xb7) = 1;
  uVar2 = fn_00178f9c(*param_1,param_1[0x2a]);
  iVar3 = fn_00172c98(uVar2,s_act_y_008c473c);
  param_1[0xb4] = iVar3;
  uVar2 = *(undefined4 *)(iVar3 + 0xac);
  piVar4 = (int *)fn_00551a90(uVar2,s_charge_008c4724);
  param_1[0xae] = piVar4;
  (**(code **)(*piVar4 + 0x10))(piVar4,0);
  piVar4 = (int *)fn_00551a90(uVar2,&DAT_008c472b);
  param_1[0xaf] = piVar4;
  (**(code **)(*piVar4 + 0x10))(piVar4,0);
  piVar4 = (int *)fn_00551a90(uVar2,s_wait_ripple_008c4730);
  param_1[0xb0] = piVar4;
  (**(code **)(*piVar4 + 0x10))(piVar4,0);
  *(undefined1 *)((int)param_1 + 0x2dd) = 1;
  uVar2 = fn_00178f9c(*param_1,param_1[0x2a]);
  param_1[0x28] = uVar2;
  iVar3 = fn_001828f0(uVar2,s_Null_warning_008c4742);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  iVar3 = fn_001828f0(param_1[0x28],s_lamp_tention_off_008c474f);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  iVar3 = fn_001828f0(param_1[0x28],s_Null_item_008c4760);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  iVar3 = fn_001828f0(param_1[0x28],s_Null_tutorial_count_008c476a);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  iVar3 = fn_001828f0(param_1[0x28],DAT_00896e94);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  iVar5 = fn_00145b00(4,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar5 != 0) {
    iVar3 = fn_002329a4(iVar5,param_1[0x28]);
  }
  iVar5 = param_1[0x2b];
  if (iVar5 != iVar3) {
    if (iVar5 != 0) {
      fn_0012f110(iVar5);
      fn_002feef8();
    }
    param_1[0x2b] = iVar3;
  }
  uVar2 = fn_001827b0(param_1[0x28],s_tb_time_value_008c477e);
  param_1[0x2c] = uVar2;
  uVar2 = fn_001827b0(param_1[0x28],s_tb_time_value_2_008c4839);
  param_1[0x2d] = uVar2;
  uVar2 = fn_001827b0(param_1[0x28],s_tb_time_value_3_008c4887);
  param_1[0x2e] = uVar2;
  uVar2 = fn_001827b0(param_1[0x28],s_tb_time_value_4_008c4897);
  param_1[0x2f] = uVar2;
  uVar2 = fn_001828f0(param_1[0x28],s_win_race_time_008c48a7);
  param_1[0x30] = uVar2;
  fn_0014481c(DAT_008977e8);
  iVar5 = fn_006b6bc4();
  iVar3 = 0;
  if (0 < iVar5) {
    do {
      iVar5 = fn_001828f0(param_1[0x28],(&DAT_008c4658)[iVar3]);
      param_1[iVar3 + 0x31] = iVar5;
      uVar2 = *(undefined4 *)(iVar5 + 0x20);
      uVar11 = *(undefined4 *)(iVar5 + 0x24);
      iVar9 = iVar3 + 1;
      param_1[iVar3 * 3 + 0x39] = *(undefined4 *)(iVar5 + 0x1c);
      param_1[iVar3 * 3 + 0x3a] = uVar2;
      param_1[iVar3 * 3 + 0x3b] = uVar11;
      fn_0014481c(DAT_008977e8);
      iVar5 = fn_006b6bc4();
      iVar3 = iVar9;
    } while (iVar9 < iVar5);
  }
  fn_0014481c(DAT_008977e8);
  for (uVar6 = fn_006b6bc4(); uVar6 < 4; uVar6 = uVar6 + 1) {
    iVar3 = fn_001828f0(param_1[0x28],(&DAT_008c4658)[uVar6]);
    param_1[uVar6 + 0x31] = iVar3;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  iVar3 = 0;
  do {
    iVar5 = fn_006888c0(param_1[0x28],(&DAT_008c4634)[iVar3]);
    local_3c[iVar3] = iVar5;
    iVar3 = iVar3 + 1;
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
  } while (iVar3 < 5);
  iVar3 = fn_0068eb24(DAT_008977e8);
  bVar1 = *(byte *)(iVar3 + 0x129);
  uVar6 = 0;
  do {
    iVar3 = fn_001828f0(param_1[0x28],(&DAT_008c46d8)[uVar6]);
    if (iVar3 != 0) {
      bVar7 = *(byte *)(iVar3 + 0x44) & 0xfe;
      if ((int)uVar6 < (int)(uint)bVar1) {
        bVar7 = bVar7 | 1;
      }
      *(byte *)(iVar3 + 0x44) = bVar7;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 5);
  uVar6 = 0;
  do {
    iVar3 = fn_001828f0(param_1[0x28],(&DAT_008c4648)[uVar6]);
    param_1[uVar6 + 0x46] = iVar3;
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  iVar3 = 0;
  do {
    iVar5 = fn_001828f0(param_1[0x28],(&DAT_008c4688)[iVar3]);
    param_1[((int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2) * 4 + iVar3 % 4 + 0x4a] = iVar5;
    if (iVar5 != 0) {
      *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  puVar10 = param_1 + 0x83;
  uVar2 = fn_001828f0(param_1[0x28],DAT_008c462c);
  *puVar10 = uVar2;
  uVar6 = 0;
  do {
    uVar2 = fn_00689210(*puVar10,(&DAT_008c4588)[uVar6]);
    uVar8 = uVar6 + 1;
    puVar10[uVar6 + 1] = uVar2;
    uVar6 = uVar8;
  } while (uVar8 < 10);
  uVar6 = 0;
  do {
    uVar2 = fn_00689210(*puVar10,(&DAT_008c45b0)[uVar6]);
    uVar8 = uVar6 + 1;
    puVar10[uVar6 + 0xb] = uVar2;
    uVar6 = uVar8;
  } while (uVar8 < 10);
  puVar10 = param_1 + 0x98;
  uVar2 = fn_001828f0(param_1[0x28],DAT_008c4630);
  *puVar10 = uVar2;
  uVar6 = 0;
  do {
    uVar2 = fn_00689210(*puVar10,(&DAT_008c45d8)[uVar6]);
    uVar8 = uVar6 + 1;
    puVar10[uVar6 + 1] = uVar2;
    uVar6 = uVar8;
  } while (uVar8 < 10);
  uVar6 = 0;
  do {
    uVar2 = fn_00689210(*puVar10,(&DAT_008c4600)[uVar6]);
    uVar8 = uVar6 + 1;
    puVar10[uVar6 + 0xb] = uVar2;
    uVar6 = uVar8;
  } while (uVar8 < 10);
  uVar2 = fn_001827b0(param_1[0x28],DAT_008c4628);
  param_1[0x45] = uVar2;
  fn_00688c04(uVar2,0);
  uVar6 = 0;
  do {
    uVar2 = fn_001828f0(param_1[0x28],(&DAT_008c4678)[uVar6]);
    param_1[uVar6 * 4 + 0x5a] = uVar2;
    uVar2 = fn_001827b0(param_1[0x28],(&PTR_s_tb_point_result_00_008c46c8)[uVar6]);
    param_1[uVar6 * 4 + 0x5b] = uVar2;
    uVar2 = fn_001827b0(param_1[0x28],(&PTR_s_tb_point_plus_sign_00_008c46ec)[uVar6]);
    param_1[uVar6 * 4 + 0x5c] = uVar2;
    uVar2 = fn_001827b0(param_1[0x28],(&PTR_s_tb_point_plus_00_008c4668)[uVar6]);
    param_1[uVar6 * 4 + 0x5d] = uVar2;
    iVar3 = param_1[uVar6 * 4 + 0x5a];
    uVar8 = uVar6 + 1;
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
    uVar11 = *(undefined4 *)(iVar3 + 0x24);
    param_1[uVar6 * 3 + 0x6a] = *(undefined4 *)(iVar3 + 0x1c);
    param_1[uVar6 * 3 + 0x6b] = uVar2;
    param_1[uVar6 * 3 + 0x6c] = uVar11;
    uVar6 = uVar8;
  } while (uVar8 < 4);
  uVar6 = 0;
  do {
    uVar2 = fn_001828f0(param_1[0x28],(&DAT_008c470c)[uVar6]);
    uVar8 = uVar6 + 1;
    param_1[uVar6 + 0x35] = uVar2;
    uVar6 = uVar8;
  } while (uVar8 < 4);
  uVar6 = 0;
  do {
    uVar2 = fn_001828f0(param_1[0x28],(&DAT_008c46fc)[uVar6]);
    uVar8 = uVar6 + 1;
    param_1[uVar6 + 0x7a] = uVar2;
    uVar6 = uVar8;
  } while (uVar8 < 4);
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  iVar3 = fn_001828f0(param_1[0x28],s_Null_tutorial_top_win_008c454a);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  return;
}



void fn_001fef28(undefined4 param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6
                 ,int param_7,undefined4 param_8,char *param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006a8730();
  if (iVar1 == 1) {
    if (param_6 < 1) {
      if (*param_9 != '\0') {
        if ((char)param_3[5] != '\0') {
          (**(code **)(*param_3 + 0x44))(param_3);
          (**(code **)(*param_3 + 0x10))(param_3,0);
        }
        if ((char)param_4[5] != '\0') {
          (**(code **)(*param_4 + 0x44))(param_4);
          (**(code **)(*param_4 + 0x10))(param_4,0);
        }
        if ((char)param_5[5] == '\0') {
          (**(code **)(*param_2 + 0x34))(param_2,param_5,1);
        }
        uVar2 = fn_00176970(param_5);
        fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        uVar2 = fn_00176970(param_5);
        fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar4 = fVar4 - fVar3;
        uVar2 = fn_00176970(param_5);
        fn_00300f74(param_8,uVar2);
        fVar3 = (float)VectorSignedToFloat(extraout_r1,(byte)(in_fpscr >> 0x16) & 3);
        param_5[4] = (int)(fVar4 + fVar3);
                    /* WARNING: Could not recover jumptable at 0x001ff238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_5 + 0x14))(param_5);
        return;
      }
      if ((char)param_5[5] != '\0') {
        (**(code **)(*param_5 + 0x44))(param_5);
        (**(code **)(*param_5 + 0x10))(param_5,0);
      }
      if ((char)param_3[5] != '\0') {
        (**(code **)(*param_3 + 0x44))(param_3);
        (**(code **)(*param_3 + 0x10))(param_3,0);
      }
      if ((char)param_4[5] == '\0') {
        (**(code **)(*param_2 + 0x34))(param_2,param_4,1);
        uVar2 = fn_00176970(param_4);
        fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        uVar2 = fn_00176970(param_4);
        fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        param_4[4] = (int)(fVar4 - fVar3);
      }
      (**(code **)(*param_4 + 0x14))(param_4);
      uVar2 = fn_00176970(param_4);
      fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      if (fVar3 == (float)param_4[4]) {
        *param_9 = '\x01';
      }
      param_4[4] = (int)((float)param_4[4] + 1.0);
      return;
    }
    if ((char)param_5[5] != '\0') {
      (**(code **)(*param_5 + 0x44))(param_5);
      (**(code **)(*param_5 + 0x10))(param_5,0);
    }
    if ((char)param_4[5] != '\0') {
      (**(code **)(*param_4 + 0x44))(param_4);
      (**(code **)(*param_4 + 0x10))(param_4,0);
    }
    if ((char)param_3[5] == '\0') {
      (**(code **)(*param_2 + 0x34))(param_2,param_3,1);
    }
    uVar2 = fn_00176970(param_3);
    fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (float)VectorSignedToFloat(param_7,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (float)VectorSignedToFloat(param_7 - param_6,(byte)(in_fpscr >> 0x16) & 3);
    param_3[4] = (int)((fVar4 * fVar3) / fVar5);
    (**(code **)(*param_3 + 0x14))(param_3);
    *param_9 = '\0';
  }
  return;
}


