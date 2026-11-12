#include "001e648c_001e6e78.h"



bool fn_001e6e78(int param_1)

{
  return 0 < *(short *)(param_1 + 0x410);
}



void fn_001e6c70(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float in_s0;
  ulonglong uVar8;
  
  iVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (iVar2 != 0) {
    fn_006f7984(DAT_008977e0);
    uVar3 = fn_006ccf88();
    bVar7 = uVar3 == 0;
    if (bVar7) {
      uVar3 = (uint)*(byte *)((int)param_1 + 0x1b1);
    }
    if (bVar7 && uVar3 == 0) {
      iVar6 = 0;
      iVar2 = fn_0025988c(param_1[(char)param_1[0x82] + 0x7e]);
      if (2 < iVar2) {
        fn_0025988c(param_1[(char)param_1[0x82] + 0x7e]);
        fn_001cac80();
        uVar8 = (ulonglong)(uint)(in_s0 * in_s0);
        iVar2 = 0;
        while( true ) {
          piVar4 = (int *)fn_006f7508(DAT_008977e0);
          iVar5 = (**(code **)(*piVar4 + 0x70))();
          if (iVar5 <= iVar2) break;
          piVar4 = (int *)fn_006f7508(DAT_008977e0);
          piVar4 = (int *)(**(code **)(*piVar4 + 0x74))(piVar4,iVar2);
          cVar1 = '\0';
          if (piVar4 != (int *)0x0) {
            cVar1 = (char)piVar4[0x16];
          }
          if (((piVar4 != (int *)0x0 && cVar1 != '\0') &&
              (iVar5 = (**(code **)(*piVar4 + 0xf0))(piVar4), iVar5 == 0)) &&
             (((float)param_1[8] - (float)piVar4[8]) * ((float)param_1[8] - (float)piVar4[8]) +
              ((float)param_1[9] - (float)piVar4[9]) * ((float)param_1[9] - (float)piVar4[9]) +
              ((float)param_1[10] - (float)piVar4[10]) * ((float)param_1[10] - (float)piVar4[10]) <=
              (float)uVar8)) {
            iVar5 = fn_0069311c(*(undefined4 *)(DAT_008977e0 + 0x40));
            if ((((iVar5 != 0) && (iVar5 = *(int *)(*(int *)(DAT_008977e0 + 0x40) + 4), iVar5 != 0))
                && ((*(short *)(iVar5 + 0x4c) == *(short *)((int)piVar4 + 0x16a) &&
                    (iVar5 = fn_006afea4(piVar4), iVar5 != 0)))) &&
               ((0 < (short)param_1[0x104] ||
                (((iVar5 = (int)(char)param_1[0x82], iVar5 != -1 && iVar5 != 4 &&
                  (iVar5 = fn_0025988c(param_1[iVar5 + 0x7e]), iVar5 == 3 || iVar5 == 4)) &&
                 (iVar5 = fn_002aad7c(piVar4), iVar5 < 3)))))) {
              iVar6 = iVar6 + 1;
            }
            fn_00683320(piVar4,0xb,0);
          }
          iVar2 = iVar2 + 1;
        }
        if (0 < iVar6) {
          fn_002a55d4(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 0x10),iVar6,1);
          return;
        }
      }
    }
  }
  return;
}



void fn_001e6c2c(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = 1;
  if (*(char *)(param_1 + 0x208) != -1) {
    uVar2 = fn_006ab190(param_1,0xffffffff,0,0,0);
    bVar1 = ~(byte)(uVar2 >> 4) & 1;
  }
  *(byte *)(param_1 + 0x3e2) = bVar1;
  return;
}



void fn_001e6b68(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x11d99;
  if (((param_2 == 0) && (uVar3 = 0x7540, *(int *)(param_1 + 0x41c) != -1)) &&
     (iVar1 = fn_006b4cbc(*(undefined4 *)(DAT_008977e0 + 0x2c)), iVar1 == 0x11d99)) {
    return;
  }
  if (*(char *)(param_1 + 0x22d) != '\x02') {
    iVar1 = *(int *)(param_1 + 0x378);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x3ac) == '\0') {
        iVar1 = *(int *)(param_1 + 0x18c);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x3b4);
      }
    }
    uVar2 = fn_0017fde4(iVar1);
    uVar3 = fn_0016a9b0(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar3,uVar2,1);
    *(undefined4 *)(param_1 + 0x41c) = uVar3;
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_001e6b44(undefined4 param_1)

{
  fn_001ea890(param_1,9);
  fn_00698fb8(DAT_008977e0,1);
  return;
}



void fn_001e6a50(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  
  iVar2 = 4;
  if (param_2 == 0xe || param_2 == 0) {
    if ((char)param_1[0x82] != -1) {
      iVar1 = fn_006a99b0(param_1);
      param_2 = 0;
      if (iVar1 != 0) {
        param_2 = 4;
      }
    }
    iVar1 = fn_006f7358(DAT_008977e0);
    if (iVar1 != 0) {
      param_2 = 4;
    }
    if (*(char *)(param_1[100] + 0x3c) != '\0') {
      param_2 = 4;
      fVar3 = (float)VectorSignedToFloat(4,(byte)(in_fpscr >> 0x16) & 3);
      iVar2 = (int)(fVar3 * 2.0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001e6aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x44))(param_1,param_2,iVar2,0);
  return;
}



undefined4 fn_001e6740(int param_1,float *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint in_fpscr;
  int in_s0;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = fn_006f7358(DAT_008977e0);
  if ((iVar1 != 0) && (fn_006b4ef8(*(undefined4 *)(param_1 + 400)), 0x3f800000 < in_s0)) {
    fn_001e18a8(param_1,0x754e,2,0xffffffff);
    return 1;
  }
  if (*(char *)(*(int *)(param_1 + 400) + 0x3c) != '\0') {
    fn_001e18a8(param_1,0x7536,1,0xffffffff);
    return 1;
  }
  if (*(char *)(param_1 + 0x22d) == '\v') {
    iVar1 = *(int *)(param_1 + 0x438);
    bVar3 = iVar1 != 5;
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 0x450);
    }
    if (bVar3 && iVar1 != 0) {
      fn_001e18a8(param_1,0x757f,1,0xffffffff);
      return 1;
    }
  }
  fVar5 = 0.0;
  in_fpscr = in_fpscr & 0xfffffff;
  if (param_2[1] < 0.0) {
    fVar4 = *param_2;
    bVar3 = fVar4 == 0.0;
    if (bVar3) {
      fVar4 = param_2[2];
    }
    in_fpscr = in_fpscr | (uint)(bVar3 && fVar4 == 0.0) << 0x1e;
    bVar2 = false;
    if (bVar3) {
      bVar2 = SUB41(in_fpscr >> 0x1e,0);
    }
    if (!bVar2) {
      fn_006aa538(param_1,(int)*(char *)(param_1 + 0x208));
      iVar1 = fn_001a46f4();
      if (iVar1 == 0) {
        return 0;
      }
      if (*(char *)(param_1 + 0x208) != -1) {
        fn_006aa538(param_1);
        iVar1 = fn_00242b6c();
        if (iVar1 == 2) goto LAB_001e68a8;
      }
      fn_006aa538(param_1,(int)*(char *)(param_1 + 0x208));
      iVar1 = fn_00242b0c();
      if (iVar1 != 1) {
        return 0;
      }
LAB_001e68a8:
      if ((*(char *)(param_1 + 0x22d) == '\v') && (*(int *)(param_1 + 0x438) != 5)) {
        return 0;
      }
      fn_001e18a8(param_1,0x7532,2,0xffffffff);
      return 1;
    }
  }
  if ((*(char *)(param_1 + 0x22d) != '\v') || (*(int *)(param_1 + 0x438) == 5)) {
    iVar1 = fn_006a99b0(param_1);
    if ((iVar1 == 0) &&
       (((iVar1 = (int)*(char *)(param_1 + 0x208), iVar1 == -1 || iVar1 == 4 ||
         (iVar1 = fn_0025988c(*(undefined4 *)(param_1 + iVar1 * 4 + 0x1f8)),
         iVar1 != 3 && iVar1 != 4)) && (*(char *)(param_1 + 0x208) != -1)))) {
      fVar6 = *(float *)(*(int *)(param_1 + 400) + 0x28);
      fn_006aa538(param_1);
      iVar1 = fn_00242910();
      fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar1 + 9),(byte)(in_fpscr >> 0x16) & 3);
      if (fVar4 * 0.1 * 0.5 < fVar6) {
        fVar4 = *param_2;
        bVar3 = fVar4 == fVar5;
        if (bVar3) {
          fVar4 = param_2[2];
        }
        if (!bVar3 || (!bVar3 || fVar4 != fVar5)) goto LAB_001e6a08;
      }
    }
    if (*(char *)(param_1 + 0x22d) != '\v') {
      return 0;
    }
    if (*(int *)(param_1 + 0x438) == 5) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x44c) != 0) {
    fn_001e18a8(param_1,0x7571,1,0xffffffff);
    return 1;
  }
  iVar1 = param_1 + 0x400;
  bVar3 = *(int *)(param_1 + 0x45c) == 0x3f800000;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0x440);
  }
  if (!bVar3 || iVar1 != 0x3f800000) {
    return 0;
  }
LAB_001e6a08:
  fn_001e18a8(param_1,0x756e,1,0xffffffff);
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x001e4738) */
/* WARNING: Removing unreachable block (ram,0x001e4758) */
/* WARNING: Removing unreachable block (ram,0x001e4684) */

void fn_001e648c(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_58;
  float local_54;
  float fStack_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  iVar2 = param_1[0xc3];
  if (iVar2 == -1) {
    return;
  }
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  else {
    if (iVar2 == 1) {
      if ((char)param_1[0x82] == -1) {
                    /* WARNING: Could not recover jumptable at 0x001e64f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x44))(param_1,0xd,4,0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x001e64e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))(param_1,0);
      return;
    }
    if (iVar2 != 2) {
      return;
    }
    uVar3 = 5;
  }
  iVar2 = fn_006f7a0c(DAT_008977e0);
  iVar2 = fn_006f7c20(*(undefined4 *)(iVar2 + 0x3c),param_1[0xc4]);
  local_28 = 0;
  local_24 = 0;
  uStack_20 = 0x3f800000;
  fVar5 = *(float *)(iVar2 + 0x10) * 40.743664;
  in_fpscr = in_fpscr & 0xfffffff;
  for (fVar6 = ABS(fVar5); 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  uVar7 = VectorFloatToUnsigned(0,3);
  uVar8 = VectorFloatToUnsigned(fVar6,3);
  uVar9 = VectorFloatToUnsigned(0,3);
  uVar1 = uVar7 & 0xff;
  uVar4 = uVar9 & 0xff;
  fVar14 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar7 = uVar8 & 0xff;
  fVar13 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (float)(&DAT_007d6f20)[uVar1 * 4] + (0.0 - fVar14) * (float)(&DAT_007d6f28)[uVar1 * 4];
  fVar11 = (float)(&DAT_007d6f24)[uVar1 * 4] + (0.0 - fVar14) * (float)(&DAT_007d6f2c)[uVar1 * 4];
  fVar14 = (float)(&DAT_007d6f20)[uVar7 * 4] + (fVar6 - fVar13) * (float)(&DAT_007d6f28)[uVar7 * 4];
  fStack_30 = (float)(&DAT_007d6f24)[uVar7 * 4] +
              (fVar6 - fVar13) * (float)(&DAT_007d6f2c)[uVar7 * 4];
  fVar6 = (float)(&DAT_007d6f20)[uVar4 * 4] + (0.0 - fVar12) * (float)(&DAT_007d6f28)[uVar4 * 4];
  fVar12 = (float)(&DAT_007d6f24)[uVar4 * 4] + (0.0 - fVar12) * (float)(&DAT_007d6f2c)[uVar4 * 4];
  if (fVar5 < 0.0) {
    fVar14 = -fVar14;
  }
  local_58 = fVar12 * fStack_30;
  local_48 = fVar6 * fStack_30;
  local_34 = fVar10 * fStack_30;
  fStack_30 = fVar11 * fStack_30;
  local_38 = -fVar14;
  local_54 = fVar10 * fVar12 * fVar14 - fVar11 * fVar6;
  fStack_50 = fVar10 * fVar6 + fVar11 * fVar12 * fVar14;
  local_40 = fVar11 * fVar6 * fVar14 - fVar10 * fVar12;
  local_44 = fVar11 * fVar12 + fVar10 * fVar6 * fVar14;
  local_4c = 0;
  local_3c = 0;
  local_2c = 0;
  fn_0016947c(&local_28,&local_58);
  (**(code **)(*param_1 + 0x30))(param_1,&local_28,1,1,0);
  (**(code **)(*param_1 + 0x44))(param_1,uVar3,4,0);
  return;
}


