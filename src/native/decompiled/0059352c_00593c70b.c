#include "0059352c_00593c70b.h"



void fn_00593c70(int param_1,undefined4 param_2,int param_3)

{
  float local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  float local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  float local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(undefined4 *)(param_1 + 0x98) = param_2;
  local_2c = DAT_008ca108;
  local_28 = DAT_008ca10c;
  uStack_24 = DAT_008ca110;
  local_38 = DAT_008ca114;
  uStack_34 = DAT_008ca118;
  uStack_30 = DAT_008ca11c;
  if (param_3 == 0) {
    fn_005939a0(param_1 + 0xc,&local_2c,&local_38,0xc,10,6);
  }
  else {
    local_20 = -DAT_008ca108;
    local_14 = -DAT_008ca114;
    local_1c = local_28;
    uStack_18 = uStack_24;
    uStack_10 = uStack_34;
    uStack_c = uStack_30;
    fn_005939a0(param_1 + 0xc,&local_20,&local_14,0xc,10,6);
  }
  fn_0044ab60(*(undefined4 *)(param_1 + 0x98));
  *(undefined1 *)(param_1 + 0xa6) = 2;
  return;
}



undefined4 fn_00593a80(uint param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  
  cVar1 = *(char *)(param_1 + 4);
  cVar2 = *(char *)(param_1 + 6);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(char *)(param_1 + 5) = cVar1;
  *(char *)(param_1 + 4) = cVar2;
  if (cVar1 == cVar2) {
    uVar5 = *(int *)(param_1 + 0xc) + 1;
  }
  else {
    uVar5 = 0;
  }
  *(uint *)(param_1 + 0xc) = uVar5;
  if (cVar2 == '\0') {
    iVar4 = *(int *)(param_1 + 0x38);
    if ((iVar4 < *(int *)(param_1 + 0x3c)) ||
       (*(undefined1 *)(param_1 + 0x50) = 1, *(char *)(param_1 + 0x40) == '\0')) {
      fVar7 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      fVar9 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x3c),(byte)(in_fpscr >> 0x16) & 3);
      fVar9 = (fVar7 / fVar9 - 2.0) * (fVar7 / fVar9);
      fVar8 = *(float *)(param_1 + 0x28) -
              (*(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x28)) * fVar9;
      fVar7 = *(float *)(param_1 + 0x20) -
              (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x20)) * fVar9;
      fVar9 = *(float *)(param_1 + 0x24) -
              (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24)) * fVar9;
      *(float *)(param_1 + 0x44) = fVar7;
      *(float *)(param_1 + 0x48) = fVar9;
      *(float *)(param_1 + 0x4c) = fVar8;
      *(int *)(param_1 + 0x38) = iVar4 + 1;
    }
    else {
      fVar7 = *(float *)(param_1 + 0x2c);
      fVar9 = *(float *)(param_1 + 0x30);
      fVar8 = *(float *)(param_1 + 0x34);
    }
    *(float *)(param_1 + 0x10) = fVar7;
    *(float *)(param_1 + 0x14) = fVar9;
    *(float *)(param_1 + 0x18) = fVar8;
    if (*(char *)(param_1 + 0x50) == '\0') goto LAB_00593b84;
    uVar3 = 1;
  }
  else {
    if (cVar2 == '\x01') {
      if (uVar5 < 6) {
        return 0;
      }
      *(undefined1 *)(param_1 + 6) = 2;
      return 0;
    }
    if (cVar2 != '\x02') goto LAB_00593b84;
    iVar4 = *(int *)(param_1 + 0x70);
    if ((iVar4 < *(int *)(param_1 + 0x74)) ||
       (*(undefined1 *)(param_1 + 0x88) = 1, *(char *)(param_1 + 0x78) == '\0')) {
      fVar9 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      fVar7 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x74),(byte)(in_fpscr >> 0x16) & 3);
      fVar9 = fVar9 / fVar7;
      fVar7 = *(float *)(param_1 + 0x58) +
              (*(float *)(param_1 + 100) - *(float *)(param_1 + 0x58)) * fVar9 * fVar9;
      fVar8 = *(float *)(param_1 + 0x5c) +
              (*(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x5c)) * fVar9 * fVar9;
      fVar9 = *(float *)(param_1 + 0x60) +
              (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x60)) * fVar9 * fVar9;
      *(float *)(param_1 + 0x7c) = fVar7;
      *(float *)(param_1 + 0x80) = fVar8;
      *(float *)(param_1 + 0x84) = fVar9;
      *(int *)(param_1 + 0x70) = iVar4 + 1;
    }
    else {
      fVar7 = *(float *)(param_1 + 100);
      fVar8 = *(float *)(param_1 + 0x68);
      fVar9 = *(float *)(param_1 + 0x6c);
    }
    *(float *)(param_1 + 0x10) = fVar7;
    *(float *)(param_1 + 0x14) = fVar8;
    *(float *)(param_1 + 0x18) = fVar9;
    if (*(char *)(param_1 + 0x88) == '\0') goto LAB_00593b84;
    uVar3 = 3;
  }
  *(undefined1 *)(param_1 + 6) = uVar3;
LAB_00593b84:
  bVar6 = *(char *)(param_1 + 4) != '\x03';
  if (bVar6) {
    param_1 = (uint)*(byte *)(param_1 + 6);
  }
  if (bVar6 && param_1 != 3) {
    return 0;
  }
  return 1;
}



void fn_005939a0(int param_1,float *param_2,float *param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar2 = *param_3;
  fVar10 = *param_2;
  fVar8 = param_3[1];
  fVar3 = param_2[1];
  fVar4 = param_3[2];
  fVar5 = param_2[2];
  fVar11 = *param_3;
  fVar6 = param_3[2];
  if (param_4 == 0) {
    param_4 = 1;
  }
  fVar7 = *param_2;
  fVar9 = param_2[1];
  fVar12 = param_2[2];
  *(float *)(param_1 + 0x20) = fVar7;
  *(float *)(param_1 + 0x24) = fVar9;
  *(float *)(param_1 + 0x28) = fVar12;
  *(float *)(param_1 + 0x44) = fVar7;
  *(float *)(param_1 + 0x48) = fVar9;
  *(float *)(param_1 + 0x4c) = fVar12;
  if (param_6 == 0) {
    param_6 = 1;
  }
  fVar7 = param_3[1];
  fVar9 = param_3[2];
  *(float *)(param_1 + 0x2c) = *param_3;
  *(float *)(param_1 + 0x30) = fVar7;
  *(float *)(param_1 + 0x34) = fVar9;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(int *)(param_1 + 0x3c) = param_4;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(bool *)(param_1 + 0x50) = param_4 < 1;
  fVar7 = *param_3;
  fVar9 = param_3[1];
  fVar12 = param_3[2];
  *(float *)(param_1 + 0x58) = fVar7;
  *(float *)(param_1 + 0x5c) = fVar9;
  *(float *)(param_1 + 0x60) = fVar12;
  *(float *)(param_1 + 0x7c) = fVar7;
  *(float *)(param_1 + 0x80) = fVar9;
  *(float *)(param_1 + 0x84) = fVar12;
  if (param_6 < 1) {
    fVar7 = 1.4013e-45;
  }
  uVar1 = SUB41(fVar7,0);
  *(float *)(param_1 + 100) = fVar11 + (fVar2 - fVar10);
  *(float *)(param_1 + 0x68) = fVar8 + (fVar8 - fVar3);
  *(float *)(param_1 + 0x6c) = fVar6 + (fVar4 - fVar5);
  if (0 < param_6) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(int *)(param_1 + 0x74) = param_6;
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0x88) = uVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}


