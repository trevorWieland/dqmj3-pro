#include "006a9414_006a9e04.h"



undefined4 fn_006a9e04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  
  fVar5 = 0.0;
  uVar4 = 0x400000003f800000;
  fVar3 = fVar5;
  if (*(int *)(param_1 + 0xe4) != 0) {
    iVar1 = fn_0018367c();
    fVar3 = fVar5;
    if (iVar1 != 0) {
      fVar3 = *(float *)(iVar1 + 4);
      goto LAB_006a9e3c;
    }
  }
  fVar5 = fVar3;
LAB_006a9e3c:
  if (*(int *)(param_1 + 0xe4) != 0) {
    iVar1 = fn_0018367c();
    if (iVar1 != 0) {
      fVar5 = *(float *)(iVar1 + 0xc);
    }
  }
  fVar3 = fVar3 + (float)uVar4;
  fVar5 = fVar5 / (float)((ulonglong)uVar4 >> 0x20);
  fn_001a23a8();
  if (((int)fVar3 < 0x3f800000) || ((int)(fVar5 - fVar3) < 0x3f800000)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_006a9dcc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    return;
  }
  uVar1 = fn_0017fde4();
  fn_006ebdf4(uVar1,1);
  return;
}



void fn_006a9da0(int param_1)

{
  if (*(int *)(param_1 + 0xe4) != 0) {
    fn_0018367c();
  }
  return;
}



bool fn_006a9c40(int *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc0))(param_1,param_3);
  if (iVar1 != 0) {
    if ((param_3 == 0) &&
       (((*(char *)(param_2 + 0xdc) != '\x06' || ((*(byte *)(param_2 + 0x130) & 0xf) >> 3 == 0)) ||
        ((*(byte *)(param_1 + 0x4c) & 0xf) >> 3 == 0)))) {
      if (0x41a00000 < (int)(*(float *)(param_2 + 0x24) - (float)param_1[9])) {
        return false;
      }
      if (0x41200000 < (int)((float)param_1[9] - *(float *)(param_2 + 0x24))) {
        return false;
      }
    }
    if (((param_3 & ~param_4) != 0) || (iVar1 = fn_006aa0fc(param_1,param_2), iVar1 != 0)) {
      if (param_3 == 0) {
        if (((DAT_00891794 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_00891794), iVar1 != 0)) {
          uVar2 = 0x42340000;
          fn_0017fe34();
          DAT_00891798 = uVar2;
        }
        iVar1 = fn_006aa190(param_1,param_2);
        if (iVar1 == 0) {
          return false;
        }
      }
      iVar1 = fn_006aa190(param_2,param_1);
      return iVar1 != 0;
    }
  }
  return false;
}



void fn_006a9984(int param_1)

{
  if (*(int *)(param_1 + 0xe4) != 0) {
    fn_0018367c();
  }
  return;
}



void fn_006a9878(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [48];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  local_20 = DAT_008f9e2c;
  uStack_1c = DAT_008f9e30;
  uStack_18 = DAT_008f9e34;
  uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
  iVar1 = fn_00191238(uVar2,param_2);
  if (-1 < iVar1) {
    uVar2 = fn_0016676c(uVar2);
    fn_001781f0(auStack_50,uVar2);
    fn_0016947c(&local_20,auStack_50);
  }
  return;
}



undefined4 * fn_006a9660(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 == '\0' || cVar1 == '\x03') {
    fn_006f7a84(DAT_008977e0);
    iVar3 = fn_006aaa00();
    if (iVar3 != 0) {
      fn_006f7a84(DAT_008977e0);
      iVar3 = fn_00259878();
      switch(*(undefined1 *)(param_1 + 0x15e)) {
      case 0:
        break;
      case 1:
        if (iVar3 == 3) {
          puVar2 = &DAT_008c8650;
        }
        else {
          puVar2 = &DAT_008c86b0;
        }
        return puVar2;
      case 2:
        if (iVar3 == 3) {
          puVar2 = &DAT_008c8680;
        }
        else {
          puVar2 = &DAT_008c8698;
        }
        return puVar2;
      case 3:
        if (iVar3 == 3) {
          puVar2 = &DAT_008c8668;
        }
        else {
          puVar2 = &DAT_008c86c8;
        }
        return puVar2;
      case 4:
        break;
      default:
      }
      if (iVar3 == 3) {
        return &DAT_008c8620;
      }
      return &DAT_008c8638;
    }
    puVar2 = (undefined4 *)(param_1 + 0x34);
  }
  else if (cVar1 == '\x04') {
    puVar2 = &DAT_008c85f0;
  }
  else {
    if (cVar1 == '\x06') {
      uVar5 = 0;
      fn_006f751c(DAT_008977e0);
      iVar3 = fn_00341920();
      uVar4 = *(undefined4 *)(iVar3 + 0x28);
      fn_006f751c(DAT_008977e0);
      iVar3 = fn_00341920();
      DAT_008c859c = uVar5;
      DAT_008c85a0 = uVar4;
      DAT_008c85a4 = -*(float *)(iVar3 + 0x2c);
      return &DAT_008c859c;
    }
    if (cVar1 == '\a') {
      puVar2 = &DAT_008c8608;
    }
    else {
      puVar2 = &DAT_008c85c0;
    }
  }
  return puVar2;
}



void fn_006a9414(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
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
  undefined1 local_50 [16];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  undefined4 local_14;
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  fVar9 = *(float *)(iVar1 + 0x2c) * 40.743664;
  fVar7 = *(float *)(iVar1 + 0x30) * 40.743664;
  fVar5 = *(float *)(iVar1 + 0x34) * 40.743664;
  in_fpscr = in_fpscr & 0xfffffff;
  fVar8 = ABS(fVar7);
  fVar6 = ABS(fVar5);
  for (fVar10 = ABS(fVar9); 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  uVar11 = VectorFloatToUnsigned(fVar10,3);
  uVar12 = VectorFloatToUnsigned(fVar8,3);
  uVar3 = uVar11 & 0xff;
  uVar13 = VectorFloatToUnsigned(fVar6,3);
  uVar4 = uVar12 & 0xff;
  uVar2 = uVar13 & 0xff;
  fVar15 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar16 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar17 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar14 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar10 - fVar15) * (float)(&DAT_007d6f28)[uVar3 * 4]
  ;
  fVar15 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar10 - fVar15) * (float)(&DAT_007d6f2c)[uVar3 * 4]
  ;
  fVar10 = (float)(&DAT_007d6f20)[uVar4 * 4] + (fVar8 - fVar16) * (float)(&DAT_007d6f28)[uVar4 * 4];
  fStack_18 = (float)(&DAT_007d6f24)[uVar4 * 4] +
              (fVar8 - fVar16) * (float)(&DAT_007d6f2c)[uVar4 * 4];
  if (fVar9 < 0.0) {
    fVar14 = -fVar14;
  }
  fVar9 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar6 - fVar17) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar8 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar6 - fVar17) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  if (fVar7 < 0.0) {
    fVar10 = -fVar10;
  }
  if (fVar5 < 0.0) {
    fVar9 = -fVar9;
  }
  local_40 = fVar8 * fStack_18;
  local_20 = -fVar10;
  local_30 = fVar9 * fStack_18;
  local_1c = fVar14 * fStack_18;
  fStack_18 = fVar15 * fStack_18;
  local_3c = fVar14 * fVar8 * fVar10 - fVar15 * fVar9;
  local_28 = fVar15 * fVar9 * fVar10 - fVar14 * fVar8;
  local_38 = fVar14 * fVar9 + fVar15 * fVar8 * fVar10;
  local_2c = fVar15 * fVar8 + fVar14 * fVar9 * fVar10;
  local_34 = 0;
  local_24 = 0;
  local_14 = 0;
  fn_0016947c(local_50,&local_40,&DAT_008c85cc);
  return;
}


