#include "001f9e34_001fa340.h"



void fn_001fa340(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c [2];
  
  local_20 = 0;
  local_1c[0] = 0xff000000;
  fn_0068869c(DAT_00897808,&local_20,local_1c,1);
  local_20 = 0xff000000;
  local_1c[0] = 0;
  fn_0068869c(DAT_0089780c,local_1c,&local_20,1);
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined1 *)(param_1 + 0x36) = 1;
  return;
}



undefined4 * fn_001fa314(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  fn_0012d73c(*param_1);
  *param_1 = 0;
  return param_1;
}



undefined4 fn_001fa26c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = fn_00145ac0(param_2);
  local_18 = 0x504e544d;
  uStack_14 = 0;
  iVar2 = fn_00147e6c(iVar1,&local_18,4);
  if (iVar2 == 0) {
    *param_1 = param_2;
    iVar2 = *(int *)(iVar1 + 4);
    param_1[1] = iVar2;
    param_1[2] = iVar1 + 8;
    param_1[3] = iVar1 + iVar2 * 0xc + 8;
    return 1;
  }
  fn_0012d73c(param_2);
  return 0;
}



bool fn_001fa18c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_98 [128];
  undefined4 local_18;
  undefined4 uStack_14;
  
  fn_00101a50(auStack_98,0x40,L"patch:/data/Parameter/Motion/%s.mp",param_2);
  uVar1 = fn_00118290();
  iVar2 = fn_0011c184(auStack_98,uVar1,0x80,5);
  if ((iVar2 == 0) || (iVar3 = fn_00145ac0(), iVar3 == 0)) {
    fn_0012d73c(iVar2);
    return false;
  }
  iVar3 = fn_00145ac0(iVar2);
  local_18 = 0x504e544d;
  uStack_14 = 0;
  iVar4 = fn_00147e6c(iVar3,&local_18,4);
  if (iVar4 == 0) {
    *param_1 = iVar2;
    iVar2 = *(int *)(iVar3 + 4);
    param_1[1] = iVar2;
    param_1[2] = iVar3 + 8;
    param_1[3] = iVar2 * 0xc + 8 + iVar3;
  }
  else {
    fn_0012d73c(iVar2);
  }
  return iVar4 == 0;
}



void fn_001fa164(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  fn_0012d73c(*param_1);
  *param_1 = 0;
  return;
}



undefined4 fn_001f9ea8(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  uint uVar10;
  uint uVar11;
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  bVar3 = false;
  iVar6 = param_3;
  iVar4 = fn_006ad904();
  iVar8 = 0;
  if (0 < iVar4) {
    fVar13 = in_s0 + in_s1;
    fVar14 = 0.0;
    fVar15 = fVar13 - in_s2;
    do {
      iVar5 = fn_006ad9ac(param_1,param_2);
      if (iVar5 == 0) {
LAB_001f9f1c:
        psVar7 = (short *)0x0;
      }
      else {
        bVar9 = iVar8 == 0;
        if (iVar8 >= 0) {
          iVar6 = *(int *)(iVar5 + 8);
          bVar9 = iVar6 == iVar8;
        }
        if (bVar9 || (iVar8 < 0 || iVar6 < iVar8)) goto LAB_001f9f1c;
        iVar6 = *(int *)(iVar5 + 4);
        psVar7 = (short *)(*(int *)(param_1 + 0xc) + (iVar6 + iVar8) * 0xc);
      }
      if ((*(int *)(psVar7 + 2) == 2) && (bVar3 = true, psVar7 != (short *)0x0)) {
        uVar1 = in_fpscr & 0xfffffff;
        uVar10 = uVar1 | (uint)(fVar14 < in_s1) << 0x1f | (uint)(fVar14 == in_s1) << 0x1e;
        in_fpscr = uVar10 | (uint)(NAN(fVar14) || NAN(in_s1)) << 0x1c;
        bVar2 = (byte)(uVar10 >> 0x18);
        if (((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
           (in_fpscr = uVar1, in_s1 != fVar14)) {
          if (in_s2 < in_s1) {
            return 0;
          }
          fVar12 = fVar13;
          if (param_3 == 0) {
            uVar1 = uVar1 | (uint)(fVar13 < in_s2) << 0x1f | (uint)(fVar13 == in_s2) << 0x1e;
            uVar10 = uVar1 | (uint)(NAN(fVar13) || NAN(in_s2)) << 0x1c;
            bVar2 = (byte)(uVar1 >> 0x18);
            if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar10 >> 0x1c) & 1)) {
              fVar12 = in_s2;
            }
          }
          else {
            uVar1 = uVar1 | (uint)(fVar13 < in_s2) << 0x1f;
            uVar10 = uVar1 | (uint)(NAN(fVar13) || NAN(in_s2)) << 0x1c;
            if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar10 >> 0x1c) & 1)) {
              fVar12 = fVar15;
            }
          }
          uVar10 = uVar10 & 0xfffffff;
          uVar1 = uVar10 | (uint)(fVar12 < in_s0) << 0x1f | (uint)(fVar12 == in_s0) << 0x1e |
                  (uint)(in_s0 <= fVar12) << 0x1d;
          in_fpscr = uVar1 | (uint)(NAN(fVar12) || NAN(in_s0)) << 0x1c;
          bVar2 = (byte)(uVar1 >> 0x18);
          if ((bool)(bVar2 >> 5 & 1)) {
            if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
              iVar5 = (int)*psVar7;
              fVar16 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
              uVar1 = uVar10 | (uint)(fVar16 < in_s0) << 0x1f;
              uVar11 = uVar1 | (uint)(NAN(fVar16) || NAN(in_s0)) << 0x1c;
              if (((byte)(uVar1 >> 0x1f) == ((byte)(uVar11 >> 0x1c) & 1)) &&
                 (fVar16 = (float)VectorSignedToFloat(iVar5,(byte)(uVar11 >> 0x16) & 3),
                 uVar11 = uVar10, fVar16 < fVar12)) {
                return 0;
              }
              fVar16 = (float)VectorSignedToFloat(iVar5,(byte)(uVar11 >> 0x16) & 3);
              in_fpscr = uVar11 & 0xfffffff;
              if ((fVar16 == in_s2) &&
                 (uVar1 = uVar11 & 0xfffffff | (uint)(fVar12 < in_s2) << 0x1f,
                 in_fpscr = uVar1 | (uint)(NAN(fVar12) || NAN(in_s2)) << 0x1c,
                 (byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1))) {
                return 0;
              }
            }
          }
          else {
            fVar16 = (float)VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x16) & 3);
            uVar1 = uVar10 | (uint)(fVar16 < in_s0) << 0x1f;
            uVar11 = uVar1 | (uint)(NAN(fVar16) || NAN(in_s0)) << 0x1c;
            if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar11 >> 0x1c) & 1)) {
              return 0;
            }
            fVar16 = (float)VectorSignedToFloat((int)*psVar7,(byte)(uVar11 >> 0x16) & 3);
            in_fpscr = uVar10;
            if (fVar16 < fVar12) {
              return 0;
            }
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar4);
    if (bVar3) {
      return 1;
    }
  }
  return 2;
}



undefined4 fn_001f9e34(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar6 = fn_006ad9ac(param_1,param_3);
  iVar3 = (int)((ulonglong)uVar6 >> 0x20);
  iVar1 = (int)uVar6;
  iVar4 = 0;
  if (iVar1 != 0) {
    bVar5 = param_2 == 0;
    if (-1 < param_2) {
      iVar3 = *(int *)(iVar1 + 8);
      bVar5 = iVar3 == param_2;
    }
    if (!bVar5 && (-1 < param_2 && param_2 <= iVar3)) {
      iVar3 = *(int *)(param_1 + 0xc);
      iVar4 = iVar3 + (*(int *)(iVar1 + 4) + param_2) * 0xc;
      if (iVar4 != 0) {
        iVar3 = *(int *)(iVar4 + 4);
      }
      if (iVar4 != 0 && iVar3 != 1) {
        return 0;
      }
    }
  }
  iVar3 = fn_001fa068(param_1,iVar4,param_4);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = *(undefined4 *)(iVar4 + 8);
  }
  return uVar2;
}



undefined4 fn_001fa068(undefined4 param_1,short *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint in_fpscr;
  uint uVar3;
  uint uVar4;
  float in_s0;
  float in_s1;
  float fVar5;
  float in_s2;
  float fVar6;
  
  if (((param_2 != (short *)0x0) && (0.0 <= in_s1)) && (in_s1 != 0.0)) {
    if (in_s2 < in_s1) {
      return 1;
    }
    fVar6 = in_s0 + in_s1;
    if (param_3 == 0) {
      uVar3 = in_fpscr & 0xfffffff | (uint)(fVar6 < in_s2) << 0x1f | (uint)(fVar6 == in_s2) << 0x1e;
      bVar1 = (byte)(uVar3 >> 0x18);
      if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar6) || NAN(in_s2))) {
        fVar6 = in_s2;
      }
    }
    else {
      uVar3 = in_fpscr & 0xfffffff | (uint)(fVar6 < in_s2) << 0x1f;
      if (SUB41(uVar3 >> 0x1f,0) == (NAN(fVar6) || NAN(in_s2))) {
        fVar6 = fVar6 - in_s2;
      }
    }
    uVar3 = uVar3 & 0xfffffff;
    uVar4 = uVar3 | (uint)(fVar6 < in_s0) << 0x1f | (uint)(fVar6 == in_s0) << 0x1e |
            (uint)(in_s0 <= fVar6) << 0x1d;
    bVar1 = (byte)(uVar4 >> 0x18);
    if ((bool)(bVar1 >> 5 & 1)) {
      if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar6) || NAN(in_s0))) {
        iVar2 = (int)*param_2;
        fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(uVar4 >> 0x16) & 3);
        uVar4 = uVar3 | (uint)(fVar5 < in_s0) << 0x1f;
        if ((SUB41(uVar4 >> 0x1f,0) == (NAN(fVar5) || NAN(in_s0))) &&
           (fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(uVar4 >> 0x16) & 3), uVar4 = uVar3,
           fVar5 < fVar6)) {
          return 1;
        }
        fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(uVar4 >> 0x16) & 3);
        if ((fVar5 == in_s2) && (in_s2 <= fVar6)) {
          return 1;
        }
      }
    }
    else {
      fVar5 = (float)VectorSignedToFloat((int)*param_2,(byte)(uVar4 >> 0x16) & 3);
      uVar3 = uVar3 | (uint)(fVar5 < in_s0) << 0x1f;
      if (SUB41(uVar3 >> 0x1f,0) == (NAN(fVar5) || NAN(in_s0))) {
        return 1;
      }
      fVar5 = (float)VectorSignedToFloat((int)*param_2,(byte)(uVar3 >> 0x16) & 3);
      if (fVar5 < fVar6) {
        return 1;
      }
    }
  }
  return 0;
}


