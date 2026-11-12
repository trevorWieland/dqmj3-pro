#include "006a02fc_006a12b4b.h"



void fn_006a12b4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = param_1[0x68];
  bVar3 = iVar1 == 0;
  if (bVar3) {
    iVar1 = param_1[0x69];
  }
  if ((bVar3 && iVar1 == 0) && ((char)param_1[0x79] == '\0')) {
    if ((char)param_1[0x67] != '\0') {
      fn_006a69c8(param_1);
      return;
    }
    if ((char)param_1[0x61] == '\0') {
      iVar1 = fn_0068cafc(DAT_008977e8);
      (**(code **)(*param_1 + 0x40))(param_1,0x9c42,1);
      fn_0018d060(param_1[0x17],7,4);
      uVar6 = 0;
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
        DAT_008f9e2c = uVar6;
        DAT_008f9e30 = uVar6;
        DAT_008f9e34 = uVar6;
      }
      fn_006a2620(param_1,&DAT_008f9e2c);
      *(undefined1 *)((int)param_1 + 0x185) = 0;
      iVar2 = *(int *)(iVar1 + 0x268);
      iVar4 = *(int *)(param_2 + 8);
      iVar5 = *(int *)(param_2 + 0xc);
      fn_006a3744(param_1);
      param_1[0x23] = iVar2;
      param_1[0x24] = iVar4;
      param_1[0x25] = iVar5;
      iVar2 = 0x41f00000;
      fn_0017fe34();
      param_1[0x62] = iVar2;
      fn_006a2584(param_1,*(undefined4 *)(iVar1 + 0x26c));
      fn_006a2388(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  return;
}



void fn_006a1180(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[0x68];
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = param_1[0x69];
  }
  if ((bVar2 && iVar1 == 0) && ((char)param_1[0x79] == '\0')) {
    if ((char)param_1[0x67] != '\0') {
      fn_006a69c8(param_1);
      return;
    }
    if ((char)param_1[0x61] == '\0') {
      iVar1 = fn_0068cafc(DAT_008977e8);
      (**(code **)(*param_1 + 0x40))(param_1,0x9c42,1);
      fn_0018d060(param_1[0x17],7,4);
      while (param_1[0x3b] - param_1[0x3a] >> 2 != 0) {
        fn_006a2620(param_1,(int *)(param_2 + 8));
      }
      *(undefined1 *)((int)param_1 + 0x185) = 0;
      iVar3 = *(int *)(iVar1 + 0x27c);
      iVar4 = *(int *)(param_2 + 8);
      iVar5 = *(int *)(param_2 + 0xc);
      fn_006a3744(param_1);
      param_1[0x23] = iVar3;
      param_1[0x24] = iVar4;
      param_1[0x25] = iVar5;
      iVar3 = 0x41f00000;
      fn_0017fe34();
      param_1[0x62] = iVar3;
      fn_006a2584(param_1,*(undefined4 *)(iVar1 + 0x280));
      fn_006a2388(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  return;
}



undefined4 fn_006a0b98(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_30;
  float local_2c;
  
  iVar1 = param_1[0x68];
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = param_1[0x69];
  }
  if ((bVar2 && iVar1 == 0) && ((char)param_1[0x79] == '\0')) {
    if ((char)param_1[0x67] != '\0') {
      fn_006a69c8(param_1);
      return 1;
    }
    if ((char)param_1[0x61] == '\0') {
      iVar1 = fn_0068cafc(DAT_008977e8);
      (**(code **)(*param_1 + 0x40))(param_1,0x9c42,1);
      fn_0018d060(param_1[0x17],7,4);
      while (param_1[0x3b] - param_1[0x3a] >> 2 != 0) {
        fn_006a2620(param_1,(float *)(param_2 + 8));
      }
      fVar7 = *(float *)(iVar1 + 0x2ac);
      *(undefined1 *)((int)param_1 + 0x185) = 1;
      fVar8 = 1.0;
      fVar6 = (float)param_1[2] - *(float *)(param_2 + 8);
      fVar5 = (float)param_1[3] - *(float *)(param_2 + 0xc);
      fVar4 = (float)param_1[4] - *(float *)(param_2 + 0x10);
      fVar5 = 1.0 / SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      fVar6 = fVar6 * fVar5;
      fVar4 = fVar4 * fVar5;
      local_30 = 0.0;
      local_2c = 1.0;
      fn_005f2d30(&local_30);
      fVar6 = fVar6 * local_2c;
      fVar4 = fVar4 * local_2c;
      fVar8 = fVar8 / SQRT(fVar6 * fVar6 + local_30 * local_30 + fVar4 * fVar4);
      param_1[0x23] = (int)(fVar6 * fVar8 * fVar7);
      param_1[0x24] = (int)(local_30 * fVar8 * fVar7);
      param_1[0x25] = (int)(fVar4 * fVar8 * fVar7);
      iVar3 = 0x41f00000;
      fn_0017fe34();
      param_1[0x62] = iVar3;
      fn_006a2584(param_1,*(undefined4 *)(iVar1 + 0x2a4));
      fn_006a2388(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x61) = 0;
    }
    return 1;
  }
  return 0;
}



void fn_006a0a04(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((char)param_1[0x67] != '\0') {
    fn_006a69c8(param_1);
    return;
  }
  if ((char)param_1[0x61] != '\0') {
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  (**(code **)(*param_1 + 0x40))(param_1,0x9c42,1);
  fn_0018d060(param_1[0x17],7,4);
  while (param_1[0x3b] - param_1[0x3a] >> 2 != 0) {
    fn_006a2620(param_1,param_1 + 2);
  }
  if (param_1[0x3f] != 0) {
    fn_006a2388(param_1);
    return;
  }
  if ((param_1[0x3b] - param_1[0x3a] >> 2 == 0) && (param_1[0x3e] != -1)) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1[0x3e]);
    param_1[0x3e] = -1;
  }
  *(undefined1 *)((int)param_1 + 0x185) = 1;
  param_1[0x1b] = 0x41000000;
  param_1[0x24] = 0;
  iVar2 = 0x41a00000;
  fn_0017fe34();
  param_1[0x62] = iVar2;
  fn_006a2584(param_1,0x6e);
  *(undefined1 *)(param_1 + 0x83) = 1;
  (**(code **)(*param_1 + 0x44))(param_1,0x9c4e,1);
  fn_0014481c(DAT_008977e8);
  iVar2 = fn_00263814();
  fn_00660790(0,iVar2 + 8,param_1 + 2);
  return;
}



void fn_006a0810(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_20;
  float local_1c;
  
  if (*(char *)(param_1 + 0x1c1) != '\0') {
    iVar1 = fn_0068cafc(DAT_008977e8);
    fVar4 = 0.0;
    fVar5 = 1.0;
    local_20 = 0.0;
    local_1c = 1.0;
    fn_005f2d30(&local_20);
    fVar5 = fVar5 / SQRT(local_20 * local_20 + fVar4 * fVar4 + local_1c * local_1c);
    fVar3 = *(float *)(iVar1 + 0x218);
    *(float *)(param_1 + 0x8c) = local_20 * fVar5 * fVar3;
    *(float *)(param_1 + 0x90) = fVar4 * fVar5 * fVar3;
    *(float *)(param_1 + 0x94) = local_1c * fVar5 * fVar3;
    iVar2 = *(int *)(param_1 + 0x1c4);
    if (iVar2 == *(int *)(iVar1 + 0x21c)) {
      iVar2 = 0;
      *(undefined1 *)(param_1 + 0x1c1) = 0;
      *(undefined4 *)(param_1 + 0x1c4) = 0;
    }
    *(int *)(param_1 + 0x1c4) = iVar2 + 1;
  }
  return;
}


