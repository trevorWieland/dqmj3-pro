#include "001e2d40_001e3658.h"



bool fn_001e3658(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005e846c();
  }
  piVar4 = *(int **)(param_1 + 0x18c);
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x18c) = piVar2;
  }
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 1;
  uVar3 = fn_00241d90(DAT_00897844,param_2);
  iVar1 = fn_0069ee40(*(undefined4 *)(param_1 + 0x18c),uVar3,0);
  if (iVar1 != 0) {
    uVar3 = fn_0017fde4(*(undefined4 *)(param_1 + 0x18c));
    fn_0017fc28(uVar3,1);
    *(undefined4 *)(param_1 + 0xe0) = param_2;
    uVar3 = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x18c);
    fn_001fa164(*(undefined4 *)(param_1 + 0x388));
    fn_001fa18c(*(undefined4 *)(param_1 + 0x388),(char *)&DAT_001e805c);
    fn_001e8380(param_1,uVar3,1);
  }
  return iVar1 != 0;
}



void fn_001e3618(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)(*(int *)(param_1 + 400) + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  local_c = *(undefined4 *)(param_1 + 0x48);
  local_10 = 0;
  local_8 = 0;
  fn_001e49d4(param_1,&local_10);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001e354c) */
/* WARNING: Removing unreachable block (ram,0x001e3564) */
/* WARNING: Removing unreachable block (ram,0x001e3490) */

void fn_001e3404(int param_1,float *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float fStack_2c;
  float local_28;
  undefined4 local_24;
  
  local_58 = *(float *)(*(int *)(param_1 + 0x100) + 0xc);
  local_60 = 0.0;
  local_5c = 0.0;
  uVar1 = in_fpscr & 0xfffffff;
  for (fVar4 = ABS(param_3[3] * 40.743664); 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar5 = VectorFloatToUnsigned(0,3);
  uVar6 = VectorFloatToUnsigned(fVar4,3);
  uVar7 = VectorFloatToUnsigned(0,3);
  uVar2 = uVar5 & 0xff;
  uVar3 = uVar7 & 0xff;
  fVar11 = (float)VectorUnsignedToFloat(uVar5 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar5 = uVar6 & 0xff;
  fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar9 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar8 = (float)(&DAT_007d6f20)[uVar2 * 4] + (0.0 - fVar11) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar10 = (float)(&DAT_007d6f24)[uVar2 * 4] + (0.0 - fVar11) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  local_28 = (float)(&DAT_007d6f24)[uVar5 * 4] +
             (fVar4 - fVar12) * (float)(&DAT_007d6f2c)[uVar5 * 4];
  fVar11 = (float)(&DAT_007d6f20)[uVar5 * 4] + (fVar4 - fVar12) * (float)(&DAT_007d6f28)[uVar5 * 4];
  fVar4 = (float)(&DAT_007d6f20)[uVar3 * 4] + (0.0 - fVar9) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar9 = (float)(&DAT_007d6f24)[uVar3 * 4] + (0.0 - fVar9) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  if (param_3[3] * 40.743664 < 0.0) {
    fVar11 = -fVar11;
  }
  local_50 = fVar9 * local_28;
  fStack_2c = fVar8 * local_28;
  local_40 = fVar4 * local_28;
  local_28 = fVar10 * local_28;
  local_30 = -fVar11;
  local_4c = fVar8 * fVar9 * fVar11 - fVar10 * fVar4;
  local_38 = fVar10 * fVar4 * fVar11 - fVar8 * fVar9;
  local_48 = fVar8 * fVar4 + fVar10 * fVar9 * fVar11;
  local_3c = fVar10 * fVar9 + fVar8 * fVar4 * fVar11;
  local_44 = 0;
  local_34 = 0;
  local_24 = 0;
  fn_0016947c(&local_60,&local_50);
  fVar4 = param_3[1];
  fVar8 = param_3[2];
  *param_2 = *param_3 + local_60;
  param_2[1] = fVar4 + local_5c;
  param_2[2] = fVar8 + local_58;
  return;
}



void fn_001e33e8(int param_1)

{
  if (*(int *)(param_1 + 0x30c) != -1) {
    *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x30c);
    *(undefined4 *)(param_1 + 0x30c) = 0xffffffff;
  }
  return;
}



void fn_001e332c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  fn_00341378(0xffffffff,0);
  fn_006f751c(DAT_008977e0);
  fn_0033f7b0();
  uVar1 = fn_006f7a5c(DAT_008977e0);
  fn_001d68cc(uVar1,0);
  uVar1 = fn_006f7a84(DAT_008977e0);
  fn_001ea890(uVar1,0);
  iVar2 = fn_006f72c8(DAT_008977e0);
  if (iVar2 != 0) {
    piVar3 = (int *)fn_006f72c8(DAT_008977e0);
    (**(code **)(*piVar3 + 0x54))(piVar3,1);
  }
  *(undefined4 *)(param_1 + 0x450) = 0;
  fn_001da640(param_1);
  if (*(char *)(param_1 + 0x208) == -1) {
    return;
  }
  fn_001747e8(*(undefined4 *)(param_1 + 0x18c));
  return;
}



void fn_001e3054(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x3f800000;
  switch(param_1[0x10e]) {
  case 1:
    param_1[0x10e] = 2;
    uVar1 = fn_006f7a5c();
    fn_001d68cc(uVar1,6);
    uVar1 = fn_003412c0();
    uVar3 = fn_006f751c(DAT_008977e0);
    fn_006c18f0(uVar3,param_1 + 0x118,uVar1,0,param_1 + 8,0);
    uVar1 = fn_006f751c(DAT_008977e0);
    fn_0033f7f8(uVar1,1);
    *(undefined4 *)(param_1[100] + 0x20) = uVar5;
    (**(code **)(*param_1 + 0x58))(param_1,1);
  case 2:
    fn_001e7160(param_1);
    iVar2 = fn_006f7a48(DAT_008977e0);
    if (*(char *)(iVar2 + 4) == '\0') {
      fn_006f751c(DAT_008977e0);
      fn_002fbfc8();
      iVar2 = 3;
LAB_001e3158:
      param_1[0x10e] = iVar2;
    }
    break;
  case 3:
    fn_001e7160(param_1);
    if ((char)param_1[0x118] != '\x01') {
      return;
    }
    iVar2 = 4;
    goto LAB_001e3158;
  case 4:
    iVar2 = fn_006f7358(DAT_008977e0);
    if (iVar2 == 0) {
      fn_001dd414(param_1,1);
    }
    else {
      fn_001e4a64(param_1);
    }
    fn_001e7160(param_1);
    iVar2 = fn_006a9938(param_1);
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(DAT_00897804 + 100);
      iVar2 = fn_006f751c(DAT_008977e0);
      fn_002b0ab8(uVar3,*(undefined4 *)(iVar2 + 0x2c));
      fn_006f751c(DAT_008977e0);
      uVar5 = fn_006c1ee0();
      iVar2 = fn_006f751c(DAT_008977e0);
      uVar4 = *(undefined4 *)(iVar2 + 0x2c);
      uVar1 = fn_003412c0();
      fn_002b0a54(uVar3,uVar1,uVar4,uVar5);
      uVar5 = fn_006f7a5c(DAT_008977e0);
      fn_001d68cc(uVar5,0);
      fn_001f0fb4(*(undefined4 *)(DAT_008977e0 + 0x30),0x10,0);
      fn_006f751c(DAT_008977e0);
      fn_006c178c();
      fn_001da640(param_1);
      if ((char)param_1[0x82] != -1) {
        fn_001747e8(param_1[99]);
      }
      param_1[0x10e] = 5;
      return;
    }
    break;
  case 5:
    iVar2 = fn_006f7358(DAT_008977e0);
    if (iVar2 == 0) {
      fn_001dd414(param_1,1);
      return;
    }
    fn_001e4a64(param_1);
    return;
  }
  return;
}



float * fn_001e2d40(int *param_1,int param_2,uint param_3,float *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fStack_30;
  undefined1 auStack_2c [8];
  
  if ((char)param_1[0x82] == -1) {
    iVar1 = *(int *)(param_2 + 0x44);
    uVar2 = *(undefined4 *)(param_2 + 4);
    if (iVar1 != 0) {
      uVar4 = fn_006f7388(DAT_008977e0);
      iVar1 = fn_006b4240(uVar4,iVar1);
      if ((iVar1 != 0) &&
         (iVar1 = fn_006bab38(iVar1,(int)(short)uVar2), iVar1 == 10 || iVar1 == 0xd)) {
        pfVar5 = (float *)param_1[0xd0];
        fVar6 = SQRT((*param_4 - (float)param_1[8]) * (*param_4 - (float)param_1[8]) +
                     (param_4[1] - (float)param_1[9]) * (param_4[1] - (float)param_1[9]) +
                     (param_4[2] - (float)param_1[10]) * (param_4[2] - (float)param_1[10]));
        goto LAB_00240294;
      }
    }
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (iVar1 == 0) {
      if (*(char *)(param_1[0xd0] + 4) != '\0') {
        if (*(char *)(param_1[100] + 0x3c) == '\0') {
          pfVar5 = (float *)fn_0024027c(param_1[0xd0],0);
          return pfVar5;
        }
        uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_1[(char)param_1[0x82] + 0x7e]
                            );
        fn_0020bbc4(&fStack_30,uVar2);
        uVar3 = fn_006bf24c(auStack_2c,0x17);
        if (4 < uVar3) {
          return &fStack_30;
        }
        pfVar5 = (float *)param_1[0xd0];
        fVar6 = SQRT((*param_4 - (float)param_1[8]) * (*param_4 - (float)param_1[8]) +
                     (param_4[1] - (float)param_1[9]) * (param_4[1] - (float)param_1[9]) +
                     (param_4[2] - (float)param_1[10]) * (param_4[2] - (float)param_1[10]));
LAB_00240294:
        fVar7 = *pfVar5;
        *pfVar5 = fVar7 - fVar6;
        if (0.0 <= fVar7 - fVar6) {
          return pfVar5;
        }
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if (*(char *)(param_1[100] + 0x3c) == '\0') {
        iVar1 = *(int *)(param_2 + 0x44);
        uVar2 = *(undefined4 *)(param_2 + 4);
        if (iVar1 != 0) {
          uVar4 = fn_006f7388(DAT_008977e0);
          iVar1 = fn_006b4240(uVar4,iVar1);
          if (iVar1 != 0) {
            iVar1 = fn_006bab38(iVar1,(int)(short)uVar2);
            if (iVar1 == 10) {
              uVar2 = 1;
            }
            else {
              if (iVar1 != 0xd) goto LAB_001e303c;
              uVar2 = 0x17;
            }
            uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                                 param_1[(char)param_1[0x82] + 0x7e]);
            fn_0020bbc4(&fStack_30,uVar4);
            uVar3 = fn_006bf24c(auStack_2c,uVar2);
            if ((uVar3 < 5) && ((param_3 & 0xc) != 0)) {
              pfVar5 = (float *)param_1[0xd0];
              fVar6 = SQRT((*param_4 - (float)param_1[8]) * (*param_4 - (float)param_1[8]) +
                           (param_4[1] - (float)param_1[9]) * (param_4[1] - (float)param_1[9]) +
                           (param_4[2] - (float)param_1[10]) * (param_4[2] - (float)param_1[10]));
              goto LAB_00240294;
            }
          }
        }
      }
      else {
        iVar1 = *(int *)(param_2 + 0x44);
        uVar2 = *(undefined4 *)(param_2 + 4);
        if (iVar1 != 0) {
          uVar4 = fn_006f7388(DAT_008977e0);
          iVar1 = fn_006b4240(uVar4,iVar1);
          if ((iVar1 != 0) && (iVar1 = fn_006bab38(iVar1,(int)(short)uVar2), iVar1 == 0xd)) {
            *(undefined1 *)(param_1[0xd0] + 4) = 1;
          }
        }
      }
    }
  }
LAB_001e303c:
  pfVar5 = (float *)param_1[0xd0];
  *pfVar5 = 0.0;
  return pfVar5;
}


