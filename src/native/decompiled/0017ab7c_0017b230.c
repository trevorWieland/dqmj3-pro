#include "0017ab7c_0017b230.h"



void fn_0017b230(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + (char)(param_2 + -0x10) * 4 + 4);
  fn_00190cdc(*(undefined4 *)(iVar1 + 0x188),0);
  fn_00190cdc(*(undefined4 *)(iVar1 + 0x18c),0);
  fn_00190e00(*(undefined4 *)(iVar1 + 400));
  return;
}



void fn_0017b1e8(int param_1,char param_2,undefined1 param_3)

{
  *(undefined1 *)(*(int *)(param_1 + (char)(param_2 + -0x10) * 4 + 4) + 0x97) = param_3;
  *(undefined1 *)(*(int *)(param_1 + (char)(param_2 + -0x10) * 4 + 4) + 0x9b) = 0;
  return;
}



void fn_0017b048(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,undefined4 param_7)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  pcVar1 = (char *)fn_001880b0(param_6);
  uVar4 = 0;
  switch(param_5) {
  case 0:
    uVar4 = (uint)*pcVar1;
    break;
  case 1:
    uVar4 = (uint)pcVar1[1];
    break;
  case 2:
    uVar4 = (uint)pcVar1[2];
    break;
  case 3:
    uVar4 = (uint)pcVar1[3];
    break;
  case 4:
    uVar4 = (uint)pcVar1[4];
    break;
  default:
    goto switchD_0017b07c_default;
  }
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
switchD_0017b07c_default:
  uVar4 = uVar4 & 0xff;
  if (((param_5 < 3) && (uVar4 == 1)) && (iVar2 = fn_00190e40(param_4), iVar2 != 0)) {
    uVar4 = 0;
  }
  uVar3 = fn_0017b118(uVar4,param_3);
  fn_00192d0c(param_1,param_2,param_5,uVar3,param_7);
  return;
}



void fn_0017aec0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  pcVar1 = (char *)fn_001880b0(param_6);
  uVar2 = 0;
  switch(param_5) {
  case 0:
    uVar2 = (uint)*pcVar1;
    break;
  case 1:
    uVar2 = (uint)pcVar1[1];
    break;
  case 2:
    uVar2 = (uint)pcVar1[2];
    break;
  case 3:
    uVar2 = (uint)pcVar1[3];
    break;
  case 4:
    uVar2 = (uint)pcVar1[4];
    break;
  default:
    goto switchD_0017aef0_default;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
switchD_0017aef0_default:
  uVar2 = uVar2 & 0xff;
  if (((param_5 < 3) && (uVar2 == 1)) && (iVar3 = fn_00190e40(param_4), iVar3 != 0)) {
    uVar2 = 0;
  }
  iVar3 = fn_0017b118(uVar2,param_3);
  uVar4 = fn_0017fde4(param_2);
  uVar4 = fn_00191238(uVar4,(&PTR_s_Ride_S_0088fecc)[param_5]);
  puVar5 = (undefined4 *)fn_00145b00(0x14,&DAT_00812c8c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[2] = 0;
    puVar5[1] = uVar4;
    puVar5[3] = 0;
    puVar5[4] = 0;
    *puVar5 = &DAT_00840cf8;
  }
  uVar4 = fn_0017fde4(param_1);
  fn_0018cdf4(puVar5,uVar4);
  uVar4 = fn_0017fde4(param_2);
  uVar4 = fn_0018d16c(uVar4,puVar5);
  uVar6 = fn_0017fde4(param_1);
  fn_00196998(uVar6,uVar4);
  if (iVar3 == -1) {
    iVar3 = 0;
  }
  if (param_7 == 0) {
    fn_0018d060(param_1,iVar3,4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0017b024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,iVar3);
  return;
}



int fn_0017b118(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  iVar4 = *param_2;
  iVar1 = param_1 * 0x10;
  uVar5 = *(undefined4 *)(&DAT_007ba07c + iVar1);
  uVar2 = fn_002febd8(uVar5);
  iVar3 = fn_00190fe0(*(int *)(iVar4 + 0x30) + 100,uVar5,uVar2);
  if (iVar3 == 0xffff) {
    uVar5 = *(undefined4 *)(&DAT_007ba080 + iVar1);
    uVar2 = fn_002febd8(uVar5);
    iVar3 = fn_00190fe0(*(int *)(iVar4 + 0x30) + 100,uVar5,uVar2);
  }
  if (iVar3 == 0xffff) {
    uVar5 = *(undefined4 *)(&DAT_007ba084 + iVar1);
    uVar2 = fn_002febd8(uVar5);
    iVar3 = fn_00190fe0(*(int *)(iVar4 + 0x30) + 100,uVar5,uVar2);
  }
  if (iVar3 == 0xffff) {
    puVar6 = (&PTR_s_ride_00_00_007ba088)[param_1 * 4];
    uVar2 = fn_002febd8(puVar6);
    iVar3 = fn_00190fe0(*(int *)(iVar4 + 0x30) + 100,puVar6,uVar2);
  }
  if (iVar3 == 0xffff) {
    iVar3 = -1;
  }
  return iVar3;
}



void fn_0017ab7c(float *param_1,undefined4 param_2,int param_3,float *param_4,float *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float in_s0;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_d8 [6];
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 uStack_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float fStack_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined1 auStack_78 [48];
  float local_48;
  float local_44;
  float local_40;
  float local_2c;
  float fStack_28;
  float fStack_24;
  
  fVar18 = 0.0;
  local_48 = 0.0;
  local_44 = 0.0;
  local_40 = 0.0;
  uVar1 = fn_00191238(param_2,(&PTR_s_Ride_S_0088fecc)[param_3]);
  uVar1 = fn_00191270(param_2,uVar1);
  fn_001781f0(auStack_78,uVar1);
  fn_0016947c(&local_48,auStack_78);
  bVar4 = *param_4 == fVar18;
  if (bVar4) {
    in_s0 = param_4[1];
  }
  uVar6 = in_fpscr & 0xfffffff | (uint)(bVar4 && in_s0 == fVar18) << 0x1e;
  bVar5 = false;
  if (bVar4) {
    bVar5 = SUB41(uVar6 >> 0x1e,0);
  }
  bVar4 = false;
  if (bVar5) {
    uVar6 = in_fpscr & 0xfffffff | (uint)(param_4[2] == fVar18) << 0x1e;
    bVar4 = SUB41(uVar6 >> 0x1e,0);
  }
  if (!bVar4) {
    fVar8 = *param_4 * 40.743664;
    uVar6 = uVar6 & 0xfffffff;
    fVar9 = ABS(param_4[1] * 40.743664);
    fVar7 = ABS(param_4[2] * 40.743664);
    for (fVar10 = ABS(fVar8); 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
    }
    uVar11 = VectorFloatToUnsigned(fVar10,3);
    uVar12 = VectorFloatToUnsigned(fVar9,3);
    uVar13 = VectorFloatToUnsigned(fVar7,3);
    uVar3 = uVar12 & 0xff;
    uVar2 = uVar11 & 0xff;
    fVar15 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar6 >> 0x16) & 3);
    fVar16 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar6 >> 0x16) & 3);
    uVar11 = uVar13 & 0xff;
    fVar14 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(uVar6 >> 0x16) & 3);
    fVar17 = (float)(&DAT_007d6f20)[uVar2 * 4] +
             (fVar10 - fVar15) * (float)(&DAT_007d6f28)[uVar2 * 4];
    fVar15 = (float)(&DAT_007d6f24)[uVar2 * 4] +
             (fVar10 - fVar15) * (float)(&DAT_007d6f2c)[uVar2 * 4];
    local_80 = (float)(&DAT_007d6f24)[uVar3 * 4] +
               (fVar9 - fVar16) * (float)(&DAT_007d6f2c)[uVar3 * 4];
    fVar10 = (float)(&DAT_007d6f20)[uVar3 * 4] +
             (fVar9 - fVar16) * (float)(&DAT_007d6f28)[uVar3 * 4];
    if (fVar8 < fVar18) {
      fVar17 = -fVar17;
    }
    fVar9 = (float)(&DAT_007d6f20)[uVar11 * 4] +
            (fVar7 - fVar14) * (float)(&DAT_007d6f28)[uVar11 * 4];
    fVar7 = (float)(&DAT_007d6f24)[uVar11 * 4] +
            (fVar7 - fVar14) * (float)(&DAT_007d6f2c)[uVar11 * 4];
    if (param_4[1] * 40.743664 < fVar18) {
      fVar10 = -fVar10;
    }
    if (param_4[2] * 40.743664 < fVar18) {
      fVar9 = -fVar9;
    }
    local_a8 = fVar7 * local_80;
    local_98 = fVar9 * local_80;
    local_84 = fVar17 * local_80;
    local_80 = fVar15 * local_80;
    local_88 = -fVar10;
    local_a4 = fVar17 * fVar7 * fVar10 - fVar15 * fVar9;
    fStack_a0 = fVar17 * fVar9 + fVar15 * fVar7 * fVar10;
    fStack_90 = fVar15 * fVar9 * fVar10 - fVar17 * fVar7;
    local_94 = fVar15 * fVar7 + fVar17 * fVar9 * fVar10;
    local_9c = 0;
    local_8c = 0;
    local_7c = 0;
    fn_0016947c(&local_2c,&local_a8,&local_48);
    local_48 = local_2c;
    local_44 = fStack_28;
    local_40 = fStack_24;
  }
  fVar10 = *param_5;
  bVar4 = fVar10 == fVar18;
  if (bVar4) {
    fVar10 = param_5[1];
  }
  bVar5 = false;
  if (bVar4 && (bVar4 && fVar10 == fVar18)) {
    bVar5 = param_5[2] == fVar18;
  }
  if (!bVar5) {
    local_d8[0] = *param_5;
    local_d8[1] = 0.0;
    local_d8[2] = 0.0;
    local_d8[3] = 0.0;
    local_d8[4] = 0.0;
    local_d8[5] = param_5[1];
    uStack_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = param_5[2];
    uStack_ac = 0;
    fn_0016947c(&local_a8,local_d8,&local_48);
    local_48 = local_a8;
    local_44 = local_a4;
    local_40 = fStack_a0;
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  param_1[2] = local_40;
  return;
}


