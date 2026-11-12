#include "00266874_00267fa4.h"



void fn_00267fa4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x5b3a4);
  iVar5 = *(int *)(iVar1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar5 != iVar2) {
    uVar3 = fn_007b858c(iVar2,iVar2,iVar5);
    uVar4 = *(uint *)(iVar1 + 8);
    if (uVar4 < uVar3) {
      do {
        uVar3 = uVar3 + 0x28;
      } while (uVar3 != uVar4);
    }
    *(uint *)(iVar1 + 8) = uVar4 + ((iVar2 - iVar5) / 0x28) * -0x28;
  }
  return;
}



void fn_00267f94(void)

{
  fn_005e6a40();
  fn_002feef8();
  return;
}



undefined4 * fn_00267ec0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x74,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0xffffffff;
    *puVar1 = 0;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[7] = 0xffffffff;
    puVar1[6] = 0;
    puVar1[8] = 0xffffffff;
    puVar1[9] = 0;
    puVar1[10] = 0xffffffff;
    puVar1[0xb] = 0xffffffff;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    *(undefined2 *)(puVar1 + 0x16) = 0;
    *(undefined2 *)((int)puVar1 + 0x5a) = 0;
    *(undefined2 *)(puVar1 + 0x17) = 0;
    *(undefined2 *)((int)puVar1 + 0x5e) = 0;
    *(undefined2 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((int)puVar1 + 0x62) = 0;
    *(undefined1 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((int)puVar1 + 0x66) = 0;
    *(undefined1 *)(puVar1 + 0x1a) = 0;
    *(undefined1 *)((int)puVar1 + 0x69) = 0;
    puVar1[0x1b] = 0;
    *(undefined1 *)(puVar1 + 0x1c) = 0;
  }
  *param_1 = puVar1;
  return param_1;
}



void fn_00267eb0(undefined4 *param_1)

{
  fn_00266ed4(*param_1);
  return;
}



void fn_00266874(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  float *pfVar9;
  int iVar10;
  int *unaff_r7;
  int iVar11;
  uint in_fpscr;
  float local_298 [4];
  undefined1 auStack_288 [8];
  undefined4 local_280;
  
  *param_1 = param_2;
  local_298[0] = 1.4013e-45;
  uVar1 = fn_001481c8(param_2,DAT_00896e14,&DAT_008c4e52,1);
  param_1[1] = uVar1;
  local_298[0] = 1.4013e-45;
  local_298[1] = 1.4013e-45;
  local_298[2] = 1.4013e-45;
  uVar1 = fn_001480d0(*param_1,uVar1,DAT_00896e18,&DAT_008c4e54);
  param_1[2] = uVar1;
  uVar1 = fn_001c8abc(*param_1,param_1[1],DAT_00896e1c);
  param_1[3] = uVar1;
  uVar1 = fn_00178f9c(*param_1,param_1[2]);
  param_1[4] = uVar1;
  uVar1 = fn_001828f0(uVar1,s_bS_00_008c4e55);
  iVar2 = fn_00178f9c(*param_1,param_1[3]);
  param_1[6] = *(undefined4 *)(iVar2 + 0x10);
  fn_0018a69c(uVar1);
  iVar3 = fn_00145b00(0x10,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = fn_00305898();
  }
  iVar3 = param_1[5];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      fn_002feef8(iVar3);
    }
    param_1[5] = iVar2;
  }
  uVar1 = fn_00689210(param_1[6],s_Null_s_size_008c4e5b);
  fn_0014481c(DAT_008977e8);
  piVar4 = (int *)fn_00263814();
  fVar5 = (float)(**(code **)(*piVar4 + 0xb8))();
  fn_0014481c(DAT_008977e8);
  iVar2 = fn_00263814();
  local_298[0] = fVar5;
  fn_001ccd10(param_1[5],uVar1,*param_1,(int)*(short *)(iVar2 + 0x13c));
  local_298[0] = 1.4013e-45;
  uVar1 = fn_001481c8(*param_1,DAT_00896e20,&DAT_008c4e52,1);
  param_1[7] = uVar1;
  local_298[0] = 0.0;
  local_298[1] = 1.4013e-45;
  local_298[2] = 0.0;
  uVar1 = fn_001480d0(*param_1,uVar1,DAT_00896e24,&DAT_008c4e54);
  param_1[8] = uVar1;
  uVar1 = fn_001924ec(*param_1,param_1[7]);
  param_1[9] = uVar1;
  uVar1 = fn_00178f9c(*param_1,param_1[8]);
  iVar2 = fn_001828f0(uVar1,s_Parts_01_008c4e67);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  iVar2 = fn_001828f0(uVar1,s_16_gold_G_008c4e70);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  iVar2 = fn_001828f0(uVar1,s_G_gauge_008c4e7a);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  local_298[0] = (float)fn_00178f9c(*param_1,param_1[8]);
  uVar1 = fn_00689220(local_298[0],s_Parts_00_008c4e49);
  uVar6 = fn_001828f0(local_298[0],s_Nl_numb_exp_008c4e3d);
  fn_003eff3c(uVar6,uVar1,param_1[9],0);
  local_298[0] = 1.4013e-45;
  uVar1 = fn_001481c8(*param_1,DAT_00896e28,&DAT_008c4e52,1);
  param_1[10] = uVar1;
  uVar1 = fn_001c8abc(*param_1,uVar1,DAT_00896e2c);
  param_1[0xb] = uVar1;
  uVar1 = fn_00689210(param_1[6],s_Null_s_size_008c4e5b);
  iVar2 = fn_00178f9c(*param_1,param_1[0xb]);
  param_1[0xc] = *(undefined4 *)(iVar2 + 0x10);
  fn_0054ca5c(uVar1);
  piVar4 = *(int **)(param_1[0xc] + 0x14);
  if (piVar4 != (int *)(param_1[0xc] + 0x14)) {
    do {
      iVar2 = fn_003035b0(piVar4 + 0x1f,s_Null_mon_icon_bg_008c4e82);
      if (iVar2 == 0) {
        unaff_r7 = piVar4 + -1;
      }
      else {
        *(byte *)(piVar4 + 0x10) = *(byte *)(piVar4 + 0x10) & 0xfe;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)(param_1[0xc] + 0x14));
  }
  piVar4 = (int *)unaff_r7[5];
  if (piVar4 != unaff_r7 + 5) {
    do {
      iVar2 = fn_003035b0(piVar4 + 0x1f,s_mon_icon_bg_p_00_008c4e93);
      if (iVar2 != 0) {
        *(byte *)(piVar4 + 0x10) = *(byte *)(piVar4 + 0x10) & 0xfe;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != unaff_r7 + 5);
  }
  fn_0068c2e4(auStack_288);
  fn_0068c6c4(DAT_008977e8,auStack_288);
  iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_280);
  uVar1 = fn_0068897c(param_1[6],s_tb_00_008c4ea4);
  fn_00190d50(uVar1,iVar2 + 4);
  iVar3 = fn_00246924(iVar2);
  if (iVar3 == 0) {
    uVar1 = fn_0068897c(param_1[6],s_tb_02_008c4eaa);
    fn_00688c04(uVar1,*(undefined1 *)(iVar2 + 0x2e),0);
  }
  else {
    local_298[0] = 0.0;
    local_298[1] = 0.0;
    fn_002309d8(local_298,4,*(undefined1 *)(iVar2 + 0x2e),1);
    uVar1 = fn_0068897c(param_1[6],s_tb_02_008c4eaa);
    fn_00190d50(uVar1,local_298);
  }
  uVar1 = fn_0068897c(param_1[6],s_tb_01_008c4eb0);
  fn_00190d50(uVar1,&DAT_008c4eb6);
  iVar3 = fn_001828f0(param_1[4],s_tb_standby_mon_008c4ebe);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  iVar3 = fn_001828f0(param_1[4],s_level_up_008c4ecd);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  iVar3 = fn_00689210(param_1[6],s_level_up_00_008c4ed6);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  iVar3 = fn_00689210(param_1[6],s_tb_03_008c4ee2);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  iVar3 = fn_00689210(param_1[6],s_gage_max_008c4ee8);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  uVar1 = fn_00689210(param_1[6],s_gage_blue_008c4ef1);
  param_1[0x11] = uVar1;
  uVar7 = fn_00661570((int)*(short *)(iVar2 + 0x1c));
  param_1[0xd] = uVar7;
  uVar1 = fn_002cd49c((int)(char)(*(char *)(iVar2 + 0x2e) + -1),uVar7 & 0xff);
  param_1[0xe] = uVar1;
  uVar7 = fn_00246824(iVar2);
  if (*(byte *)(iVar2 + 0x2e) < uVar7) {
    iVar3 = fn_002cd49c((int)*(char *)(iVar2 + 0x2e),*(undefined1 *)(param_1 + 0xd));
  }
  else {
    iVar3 = param_1[0xe];
  }
  param_1[0xf] = iVar3;
  iVar3 = iVar3 - param_1[0xe];
  iVar11 = *(int *)(iVar2 + 0x30) - param_1[0xe];
  iVar10 = param_1[0x11];
  iVar2 = fn_00689210(param_1[6],s_gage_max_008c4e34);
  if (iVar11 < iVar3) {
    fVar5 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x16) & 3);
    local_298[0] = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    local_298[0] = (fVar5 * 206.0) / local_298[0];
    pfVar9 = (float *)&DAT_007c9e40;
    if (local_298[0] <= 206.0) {
      pfVar9 = local_298;
    }
    *(float *)(iVar10 + 0x34) = *pfVar9;
    *(undefined4 *)(iVar10 + 0x38) = 0x3f800000;
    *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xef | 0x10;
    if (iVar2 == 0) goto LAB_00266e38;
    bVar8 = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  else {
    if (iVar2 == 0) goto LAB_00266e38;
    bVar8 = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
  }
  *(byte *)(iVar2 + 0x44) = bVar8;
LAB_00266e38:
  fn_00121838(DAT_00897800,DAT_00898780,1);
  return;
}


