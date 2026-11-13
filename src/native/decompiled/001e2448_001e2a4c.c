#include "001e2448_001e2a4c.h"



void fn_001e2a4c(int param_1,float *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_28;
  float local_24 [4];
  
  fVar10 = 0.0;
  pfVar5 = (float *)(param_1 + 0x344);
  if (*(char *)(param_1 + 0x208) != -1) {
    fn_006aa538(param_1);
    iVar2 = fn_00242b0c();
    if (iVar2 == 1) {
      *pfVar5 = fVar10;
      *(float *)(param_1 + 0x348) = fVar10;
      *(float *)(param_1 + 0x34c) = fVar10;
      return;
    }
  }
  if ((*(char *)(*(int *)(param_1 + 400) + 0x3c) != '\0') ||
     ((iVar2 = fn_006a9938(param_1), iVar2 == 0 && (iVar2 = fn_006a99b0(param_1), iVar2 == 0)))) {
LAB_001e2b20:
    iVar2 = *(int *)(param_1 + 400);
    *pfVar5 = *(float *)(iVar2 + 8);
    *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(iVar2 + 0x10);
    return;
  }
  uVar3 = fn_006f7388(DAT_008977e0);
  iVar2 = fn_006b4240(uVar3,*(undefined4 *)(param_1 + 0x2b0));
  if ((iVar2 == 0) ||
     (iVar2 = fn_006bab38(iVar2,(int)(short)*(undefined4 *)(param_1 + 0x270)), iVar2 != 0xb))
  goto LAB_001e2b20;
  fVar8 = *pfVar5;
  fVar7 = 0.03;
  pfVar4 = local_24;
  if (fVar8 <= fVar10) {
    local_28 = fVar8 + 0.02;
    local_24[0] = fVar10;
    if (fVar8 + 0.02 <= fVar10) goto LAB_001e2b80;
  }
  else {
    local_28 = fVar8 - 0.02;
    local_24[0] = fVar10;
    if (fVar10 <= fVar8 - 0.02) {
LAB_001e2b80:
      pfVar4 = &local_28;
    }
  }
  *pfVar5 = *pfVar4;
  fVar8 = *(float *)(param_1 + 0x34c);
  pfVar4 = local_24;
  if (fVar8 <= fVar10) {
    local_28 = fVar8 + 0.02;
    local_24[0] = fVar10;
    if (fVar10 < fVar8 + 0.02) goto LAB_001e2bfc;
  }
  else {
    local_28 = fVar8 - 0.02;
    local_24[0] = fVar10;
    if (fVar8 - 0.02 < fVar10) goto LAB_001e2bfc;
  }
  pfVar4 = &local_28;
LAB_001e2bfc:
  fVar8 = *pfVar4;
  *(float *)(param_1 + 0x34c) = fVar8;
  if (param_3 == 0) {
    fVar7 = param_2[1];
    fVar9 = param_2[2];
    *pfVar5 = *pfVar5 + *param_2 * 0.03;
    *(float *)(param_1 + 0x348) = *(float *)(param_1 + 0x348) + fVar7 * 0.03;
    fVar7 = fVar8 + fVar9 * 0.03;
    *(float *)(param_1 + 0x34c) = fVar7;
  }
  fVar8 = *pfVar5;
  bVar1 = fVar8 == fVar10;
  if (bVar1) {
    fVar7 = *(float *)(param_1 + 0x348);
  }
  bVar6 = false;
  if (bVar1 && (bVar1 && fVar7 == fVar10)) {
    bVar6 = *(float *)(param_1 + 0x34c) == fVar10;
  }
  if (!bVar6) {
    fVar7 = SQRT(*(float *)(param_1 + 0x1b8) * *(float *)(param_1 + 0x1b8) +
                 *(float *)(param_1 + 0x1bc) * *(float *)(param_1 + 0x1bc) +
                 *(float *)(param_1 + 0x1c0) * *(float *)(param_1 + 0x1c0)) +
            *(float *)(*(int *)(param_1 + 400) + 0x2c) * 1.2;
    fVar9 = *(float *)(param_1 + 0x348);
    fVar10 = fVar8 * fVar8 + fVar9 * fVar9 +
             *(float *)(param_1 + 0x34c) * *(float *)(param_1 + 0x34c);
    if (fVar7 * fVar7 < fVar10) {
      fVar7 = fVar7 / SQRT(fVar10);
      *pfVar5 = fVar8 * fVar7;
      *(float *)(param_1 + 0x348) = fVar9 * fVar7;
      *(float *)(param_1 + 0x34c) = *(float *)(param_1 + 0x34c) * fVar7;
    }
  }
  if (param_3 == 0) {
    fVar10 = *(float *)(param_1 + 0x348);
    fVar7 = *(float *)(param_1 + 0x34c);
    *param_2 = *pfVar5;
    param_2[1] = fVar10;
    param_2[2] = fVar7;
    return;
  }
  fVar10 = *(float *)(param_1 + 0x348);
  fVar7 = *(float *)(param_1 + 0x34c);
  *param_2 = *param_2 + *pfVar5;
  param_2[1] = param_2[1] + fVar10;
  param_2[2] = param_2[2] + fVar7;
  return;
}



void fn_001e2904(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == -1) {
    if (*(char *)(param_1 + 0x208) == -1) {
      param_3 = 0;
    }
    else {
      param_3 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
    }
  }
  fn_002cd59c(param_3);
  fn_0023dd30(*(undefined4 *)(DAT_008977e0 + 0x2c),param_2);
  return;
}



void fn_001e2804(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x18c);
  iVar4 = *(int *)(param_1 + param_3 * 4 + 0x17c);
  if (iVar5 != 0 && iVar4 != 0) {
    if (param_2 == 0) {
      fn_0018911c(iVar5,iVar4,0);
      return;
    }
    iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                         *(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
    uVar2 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
    uVar3 = fn_00241d90(DAT_00897844,*(undefined4 *)(param_1 + 0xe0));
    fn_0017aec0(iVar5,iVar4,uVar3,1,uVar2,(int)*(short *)(iVar1 + 0x1c),param_4);
    if ((*(int *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x17c) != 0) &&
       (iVar4 = fn_0018367c(), iVar4 != 0)) {
      fn_001747e8(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x17c));
      return;
    }
  }
  return;
}



void fn_001e25e4(int *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float in_s0;
  float fVar9;
  undefined1 auStack_d8 [72];
  undefined1 auStack_90 [72];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c [24];
  
  uVar8 = 1;
  puVar1 = (undefined4 *)fn_00171634();
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  fn_00301f50(auStack_d8,0x48);
  fn_00301f50(auStack_90,0x48);
  uVar7 = 0;
  if ((param_3 == 0) &&
     (uVar7 = fn_006ab190(param_1,param_2,&local_48,auStack_d8,auStack_90), (uVar7 & 0x10) != 0)) {
    uVar8 = 0;
  }
  fn_001da4dc(param_1);
  if (param_2 == -1) {
    uVar2 = 0;
    uVar3 = 0;
    fVar9 = 10.0;
  }
  else {
    uVar2 = fn_0025988c(param_1[param_2 + 0x7e]);
    uVar3 = fn_006aa538(param_1,param_2);
    uVar4 = fn_006aa538(param_1,param_2);
    iVar5 = fn_00242b6c();
    iVar6 = fn_00242b0c(uVar4);
    if ((iVar5 == 1 || iVar6 == 0 && iVar5 == 0) ||
       ((*(char *)((int)param_1 + 0x2fd) != '\0' && (iVar5 = fn_00154ac8(0x3e), iVar5 != 0)))) {
      fVar9 = (float)param_1[param_2 + 0x86];
    }
    else {
      fVar9 = 0.0;
    }
    fn_002cd59c(uVar2);
    fVar9 = fVar9 * in_s0;
  }
  fn_001d9db8(param_1,1);
  iVar5 = 0;
  if (0 < param_1[0x41] - param_1[0x40] >> 4) {
    do {
      fn_001cac80(uVar2);
      fn_001cabcc(uVar2,uVar3,iVar5);
      fn_001da0e4(param_1,iVar5,local_3c);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[0x41] - param_1[0x40] >> 4);
  }
  param_1[0x43] = (int)fVar9;
  if ((uVar8 & ~param_3) != 0) {
    *(undefined1 *)(param_1 + 0xc9) = 0;
    uVar2 = fn_00171634();
    (**(code **)(*param_1 + 0x104))(param_1,auStack_d8,auStack_90,uVar7,&local_48,uVar2);
    param_1[0x4c] = uVar7;
    (**(code **)(*param_1 + 0x10))(param_1,&local_48);
  }
  return;
}



undefined4 fn_001e2448(int param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float local_24;
  float local_20;
  float local_1c;
  
  pfVar1 = (float *)fn_00171634();
  local_24 = *pfVar1;
  local_20 = pfVar1[1];
  local_1c = pfVar1[2];
  if ((*(char *)(param_1 + 0x208) != -1) &&
     (iVar2 = param_1 + *(char *)(param_1 + 0x208) * 4, *(int *)(iVar2 + 0x17c) != 0)) {
    uVar3 = fn_0025988c(*(undefined4 *)(iVar2 + 0x1f8));
    uVar4 = fn_0017fde4(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x17c));
    fn_0017ab7c(&local_24,uVar4,uVar3,param_1 + 0x2c,param_1 + 0x38);
  }
  local_24 = local_24 + *(float *)(param_1 + 0x20);
  local_20 = local_20 + *(float *)(param_1 + 0x24);
  local_1c = local_1c + *(float *)(param_1 + 0x28);
  iVar2 = fn_0018367c(*(undefined4 *)(param_1 + 0x18c));
  fVar5 = *(float *)(iVar2 + 4) / *(float *)(iVar2 + 0xc);
  fn_00171634();
  fVar5 = fVar5 * fVar5;
  *(float *)(param_1 + 0x1a4) =
       *(float *)(param_1 + 0x1a4) + fVar5 * (local_24 - *(float *)(param_1 + 0x1a4));
  *(float *)(param_1 + 0x1a8) =
       *(float *)(param_1 + 0x1a8) + fVar5 * (local_20 - *(float *)(param_1 + 0x1a8));
  *(float *)(param_1 + 0x1ac) =
       *(float *)(param_1 + 0x1ac) + fVar5 * (local_1c - *(float *)(param_1 + 0x1ac));
  if (((DAT_008c62f8 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62f8), iVar2 != 0)) {
    DAT_008f9e20 = 0x3f800000;
    DAT_008f9e24 = 0x3f800000;
    DAT_008f9e28 = 0x3f800000;
  }
  fn_005deb64(*(undefined4 *)(param_1 + 0x18c),param_1 + 0x1a4,param_1 + 0x2c,&DAT_008f9e20);
  iVar2 = fn_0069ef00(*(undefined4 *)(param_1 + 0x18c));
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x3e0) == '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    *(undefined1 *)(param_1 + 0x3e0) = 0;
  }
  return uVar3;
}


