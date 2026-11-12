#include "0065b540_0065c2e8a.h"



void fn_0065bd8c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0065bdbc(iVar1,param_1);
  return;
}



undefined4 fn_0065baa0(short *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 < 1) || (2 < param_2)) {
    if ((param_1[1] < 1) || (4 < param_2)) {
      if ((param_1[2] < 1) || (6 < param_2)) {
        if ((param_1[3] < 1) || (8 < param_2)) {
          if (param_1[0x104] == 0) {
            if (param_1[0x604] == 0) {
              uVar1 = 0xe;
            }
            else {
              uVar1 = 0xc;
            }
          }
          else {
            uVar1 = 10;
          }
        }
        else {
          uVar1 = 8;
        }
      }
      else {
        uVar1 = 6;
      }
    }
    else {
      uVar1 = 4;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



void fn_0065ba60(undefined4 *param_1)

{
  *param_1 = &DAT_007bf738;
  if ((int *)param_1[0x6b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x6b] + 4))();
  }
  fn_001dc088(param_1);
  fn_002feef8();
  return;
}



undefined4 fn_0065b960(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (((char)param_1[0x67] == '\0') &&
     (iVar1 = (**(code **)(*param_1 + 0x134))(param_1), iVar1 != 0)) {
    iVar1 = fn_006f7a84(DAT_008977e0);
    local_24 = 0;
    if (*(float *)(iVar1 + 0x31c) < 0.0) {
      (**(code **)(*param_1 + 0x44))(param_1,1,4,0);
      *(undefined1 *)(param_1 + 0x67) = 1;
      *(undefined1 *)(param_1 + 0x6c) = 1;
      uVar2 = fn_006f7a84(DAT_008977e0);
      fn_001ea890(uVar2,1);
      local_20 = 0xbf800000;
      local_1c = local_24;
      uVar2 = fn_006f7a84(DAT_008977e0);
      fn_001e59a4(uVar2,0xf,&local_24,0,0);
      param_1[0x6d] = 0;
      return 1;
    }
  }
  return 0;
}



void fn_0065b86c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_001db0c0();
  if (((char)param_1[0x67] != '\0') && ((char)param_1[0x67] == '\x01')) {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar1 == 0) {
      iVar1 = param_1[0x6d];
      param_1[0x6d] = iVar1 + 1;
      if (iVar1 + 1 == 0xf) {
        uVar2 = fn_006f7a84(DAT_008977e0);
        fn_001ea890(uVar2,0);
        uVar2 = fn_006f7a48(DAT_008977e0);
        fn_00128744(uVar2,0);
        uVar2 = fn_006f7a84(DAT_008977e0);
        fn_001ead4c(uVar2,1);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
    else {
      (**(code **)(*param_1 + 0x44))(param_1,0,4);
      *(undefined1 *)(param_1 + 0x67) = 0;
    }
  }
  return;
}



void fn_0065b540(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_28;
  undefined4 uStack_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = 0x41f00000;
  uStack_24 = 0x41900000;
  local_20 = 52.0;
  local_98 = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x1a0);
  local_94 = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x1a4);
  local_90 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x1a8);
  fVar3 = 180.0;
  local_80 = *(float *)(param_1 + 0x2c);
  local_7c = *(float *)(param_1 + 0x30);
  local_78 = *(float *)(param_1 + 0x34);
  fn_0017fe34();
  fn_005df8f8();
  local_7c = fVar3 + local_7c;
  in_fpscr = in_fpscr & 0xfffffff;
  fVar5 = ABS(local_7c * 40.743664);
  fVar4 = ABS(local_78 * 40.743664);
  for (fVar3 = ABS(local_80 * 40.743664); 0x477fffff < (int)fVar3; fVar3 = fVar3 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar6 = VectorFloatToUnsigned(fVar3,3);
  uVar7 = VectorFloatToUnsigned(fVar5,3);
  uVar1 = uVar6 & 0xff;
  uVar8 = VectorFloatToUnsigned(fVar4,3);
  uVar2 = uVar7 & 0xff;
  fVar10 = (float)VectorUnsignedToFloat(uVar6 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar6 = uVar8 & 0xff;
  fVar9 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)(&DAT_007d6f24)[uVar1 * 4] + (fVar3 - fVar10) * (float)(&DAT_007d6f2c)[uVar1 * 4];
  fVar10 = (float)(&DAT_007d6f20)[uVar1 * 4] + (fVar3 - fVar10) * (float)(&DAT_007d6f28)[uVar1 * 4];
  local_48 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar5 - fVar9) * (float)(&DAT_007d6f2c)[uVar2 * 4]
  ;
  fVar3 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar5 - fVar9) * (float)(&DAT_007d6f28)[uVar2 * 4];
  if (local_80 * 40.743664 < 0.0) {
    fVar10 = -fVar10;
  }
  fVar5 = (float)(&DAT_007d6f20)[uVar6 * 4] + (fVar4 - fVar11) * (float)(&DAT_007d6f28)[uVar6 * 4];
  fVar4 = (float)(&DAT_007d6f24)[uVar6 * 4] + (fVar4 - fVar11) * (float)(&DAT_007d6f2c)[uVar6 * 4];
  if (local_7c * 40.743664 < 0.0) {
    fVar3 = -fVar3;
  }
  if (local_78 * 40.743664 < 0.0) {
    fVar5 = -fVar5;
  }
  local_70 = fVar4 * local_48;
  local_60 = fVar5 * local_48;
  local_4c = fVar10 * local_48;
  local_48 = fVar12 * local_48;
  local_50 = -fVar3;
  local_6c = fVar10 * fVar4 * fVar3 - fVar12 * fVar5;
  local_58 = fVar12 * fVar5 * fVar3 - fVar10 * fVar4;
  local_68 = fVar10 * fVar5 + fVar12 * fVar4 * fVar3;
  fStack_5c = fVar12 * fVar4 + fVar10 * fVar5 * fVar3;
  local_64 = 0;
  local_54 = 0;
  local_44 = 0;
  local_a8 = 0.0;
  local_a4 = 0.0;
  local_a0 = local_20;
  fn_0016947c(&local_a8,&local_70);
  local_98 = local_98 + local_a8;
  local_94 = local_94 + local_a4;
  local_90 = local_90 + local_a0;
  local_1c = 0x3f800000;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  fn_0021197c(param_1,*(undefined4 *)(param_1 + 0x1ac),&local_28,&local_1c,&local_80,&local_98);
  return;
}


