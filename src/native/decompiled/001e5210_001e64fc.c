#include "001e5210_001e64fc.h"



undefined4 fn_001e64fc(int param_1,float *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  char local_38 [4];
  undefined4 local_34;
  
  uVar2 = fn_006f7388(DAT_008977e0);
  iVar3 = fn_006b4240(uVar2,*(undefined4 *)(param_1 + 0x2b0));
  if (iVar3 == 0) {
    return 0;
  }
  local_34 = fn_006bab38(iVar3,(int)(short)*(undefined4 *)(param_1 + 0x270));
  uVar2 = 0;
  if (*(char *)(param_1 + 0x208) == -1) {
    uVar6 = 0;
  }
  else {
    fn_006aa538(param_1);
    uVar6 = fn_00242b6c();
  }
  if (*(char *)(param_1 + 0x208) == -1) {
    uVar5 = 0;
  }
  else {
    fn_006aa538(param_1);
    uVar5 = fn_00242b0c();
  }
  fVar10 = *param_2;
  uVar11 = 0;
  bVar1 = fVar10 == 0.0;
  if (bVar1) {
    fVar10 = param_2[2];
  }
  if (bVar1 && (bVar1 && fVar10 == 0.0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
    iVar3 = fn_006a9938(param_1);
    if ((iVar3 != 0) && (iVar3 = fn_006a7bf8(param_1,*(undefined4 *)(param_1 + 0x388)), iVar3 != 0)
       ) {
      uVar9 = 1;
      goto LAB_001e65e4;
    }
  }
  uVar9 = 0;
LAB_001e65e4:
  local_3c = 0;
  local_38[0] = -1;
  iVar3 = (int)*(char *)(param_1 + 0x208);
  if ((iVar3 != -1 && iVar3 != 4) &&
     (iVar3 = fn_0025988c(*(undefined4 *)(param_1 + iVar3 * 4 + 0x1f8)), iVar3 == 3 || iVar3 == 4))
  {
    uVar2 = 1;
  }
  local_4c = uVar5;
  local_48 = (float)uVar7;
  local_44 = uVar9;
  local_40 = uVar2;
  fn_0025977c(&local_3c,local_38,param_1,local_34,uVar6);
  uVar2 = 0;
  if (local_3c != 0) {
    local_48 = (1.0 / *(float *)(param_1 + 0x3c)) *
               (*(float *)(param_1 + 0x278) - *(float *)(param_1 + 0x24));
    local_4c = uVar11;
    local_44 = uVar11;
    fn_002598e0(&local_4c,param_1,local_34);
    iVar3 = local_3c;
    iVar8 = (int)local_38[0];
    uVar6 = *(undefined4 *)(DAT_008977e0 + 0x2c);
    uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
    iVar4 = fn_006b4cbc(uVar6,*(undefined4 *)(param_1 + 0x1e8));
    if ((iVar4 != iVar3) && (fn_00259728(param_1 + 0x1e8,0), *(int *)(param_1 + 0x1e8) == -1)) {
      uVar2 = fn_00179bfc(uVar6,iVar3,uVar2,0,&local_4c);
      *(undefined4 *)(param_1 + 0x1e8) = uVar2;
      fn_001e2904(param_1,uVar2,iVar8);
    }
    uVar2 = 1;
  }
  return uVar2;
}



void fn_001e6178(int param_1,undefined4 param_2,float *param_3)

{
  undefined4 uVar1;
  float in_s0;
  float fVar2;
  float fVar3;
  
  if ((*(char *)(param_1 + 0x22d) == '\x06') &&
     (fn_001da640(param_1), *(char *)(param_1 + 0x208) != -1)) {
    fn_001747e8(*(undefined4 *)(param_1 + 0x18c));
  }
  fn_001ea890(param_1,1);
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  *(float *)(param_1 + 0x1b8) = *param_3 * in_s0;
  *(float *)(param_1 + 0x1bc) = fVar2 * in_s0;
  *(float *)(param_1 + 0x1c0) = fVar3 * in_s0;
  *(undefined4 *)(param_1 + 0x1c4) = param_2;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  fn_0023f3dc(*(undefined4 *)(param_1 + 400));
  *(undefined1 *)(*(int *)(param_1 + 400) + 0x3d) = 1;
  uVar1 = fn_006f7a48(DAT_008977e0);
  fn_00128744(uVar1,0xffffffff);
  *(undefined4 *)(param_1 + 0x1cc) = 0x3f666666;
  return;
}



void fn_001e582c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar1 = fn_006f75ac(DAT_008977e0);
  iVar2 = fn_006aaf6c(param_1);
  if (iVar2 != -1) {
    uVar3 = fn_006aaf6c(param_1);
    iVar4 = fn_006afe0c(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar3);
    if (iVar4 == 0) {
      uVar3 = fn_006aaf6c(param_1);
      pcVar5 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar3);
      if ((*pcVar5 != 'C') || (uVar6 = fn_00163d44(0), 8 < uVar6)) {
        uVar3 = fn_006aaf6c(param_1);
        fn_006af5dc(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar3);
        fn_0015b0dc();
        uVar3 = fn_0016ba34(DAT_00897800,DAT_008917b4,(char *)&DAT_001e5978,0);
        fn_0038fee8(uVar1,uVar3);
        fn_0038ff40(uVar1,0,0,0,0);
        goto LAB_001e5964;
      }
    }
  }
  uVar3 = fn_0016ba34(DAT_00897800,DAT_008917b4,(char *)&DAT_001e5990,0,param_4);
  fn_0038fee8(uVar1,uVar3);
  fn_0038ff40(uVar1,0,0,1,0);
LAB_001e5964:
  *(int *)(param_1 + 0x328) = iVar2;
  return;
}



void fn_001e5210(int param_1,float *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  float in_s0;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fn_006f7a48(DAT_008977e0);
  fn_006a7e80();
  fVar8 = 0.0;
  if (in_s0 != 0.0) {
    return;
  }
  iVar3 = fn_006f7a5c(DAT_008977e0);
  if ((((*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0') &&
       ((iVar4 = fn_006a9938(param_1), iVar4 != 0 || (iVar4 = fn_006a99b0(param_1), iVar4 != 0))))
      || (iVar4 = fn_006a9960(param_1), iVar4 != 0)) ||
     (0 < *(int *)(*(int *)(param_1 + 400) + 0x44))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0') {
    fVar6 = fVar8;
    if (bVar2) {
      fVar6 = -1.0;
    }
  }
  else {
    fVar6 = param_2[1];
    fn_00764608();
  }
  iVar4 = fn_006a9660(iVar3);
  fVar10 = 0.4;
  fVar9 = *(float *)(iVar4 + 4);
  cVar1 = *(char *)(*(int *)(param_1 + 400) + 0x3c);
  if (param_2[1] <= fVar8) {
    if (cVar1 == '\0') goto LAB_001e5378;
    if (*(char *)(param_1 + 0x208) != -1) {
      fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
    }
  }
  else {
    iVar4 = 0;
    if (cVar1 != '\0') {
      iVar4 = (int)*(char *)(param_1 + 0x208);
    }
    if ((cVar1 != '\0' && iVar4 != -1) &&
       (iVar4 = fn_0025988c(*(undefined4 *)(param_1 + iVar4 * 4 + 0x1f8)), 2 < iVar4)) {
      fVar9 = fVar9 * 0.2;
    }
    else {
LAB_001e5378:
      fVar9 = fVar9 * fVar10;
    }
  }
  *(float *)(iVar3 + 0x104) = fVar6 * fVar9;
  if ((!bVar2) || (iVar4 = fn_006f7a48(DAT_008977e0), *(char *)(iVar4 + 4) == '\x04'))
  goto LAB_001e54ec;
  puVar5 = (undefined1 *)(uint)DAT_008917cc;
  if ((DAT_008917cc & 1) == 0) {
    iVar4 = fn_00303afc(&DAT_008917cc);
    puVar5 = (undefined1 *)0x0;
    if (iVar4 != 0) {
      uVar7 = 0x42700000;
      fn_0017fe34();
      puVar5 = &DAT_008917cc;
      DAT_008917d0 = uVar7;
    }
  }
  fVar6 = -param_2[1];
  uVar7 = 0x3c;
  fVar9 = *(float *)(iVar3 + 0x10);
  fn_00764608(puVar5);
  fVar6 = fVar6 - fVar9;
  if (*param_2 == fVar8) {
    fVar6 = param_2[2];
  }
  if (*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0') {
    fn_00764608();
  }
  else {
    if ((*(char *)(param_1 + 0x208) != -1) &&
       (iVar4 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8)),
       2 < iVar4)) {
      fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
      fn_002cd59c();
      if ((*(float *)(param_1 + 0x264) < fVar6 * 20.0 * 3.0 + 100.0 + *(float *)(param_1 + 0x24)) &&
         (*(float *)(param_1 + 0x48) < fVar8)) {
        uVar7 = 10;
        goto LAB_001e54e0;
      }
    }
    fn_00764608();
  }
LAB_001e54e0:
  fn_001d6988(iVar3,uVar7);
LAB_001e54ec:
  *(undefined1 *)(param_1 + 0x22c) = 1;
  return;
}


