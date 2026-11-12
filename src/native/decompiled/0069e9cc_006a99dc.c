#include "0069e9cc_006a99dc.h"



void fn_006a99dc(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_50 [16];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float fStack_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  fVar6 = *(float *)(param_1 + 0x2c) * 40.743664;
  fVar12 = *(float *)(param_1 + 0x30) * 40.743664;
  fVar4 = *(float *)(param_1 + 0x34) * 40.743664;
  uVar1 = in_fpscr & 0xfffffff;
  fVar7 = ABS(fVar12);
  fVar5 = ABS(fVar4);
  for (fVar8 = ABS(fVar6); 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0) {
  }
  uVar9 = VectorFloatToUnsigned(fVar8,3);
  uVar10 = VectorFloatToUnsigned(fVar7,3);
  uVar11 = VectorFloatToUnsigned(fVar5,3);
  uVar3 = uVar10 & 0xff;
  uVar2 = uVar9 & 0xff;
  fVar15 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar9 = uVar11 & 0xff;
  fVar13 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar14 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar16 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar8 - fVar15) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar15 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar8 - fVar15) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  local_18 = (float)(&DAT_007d6f24)[uVar3 * 4] +
             (fVar7 - fVar13) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  fVar8 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar7 - fVar13) * (float)(&DAT_007d6f28)[uVar3 * 4];
  if (fVar6 < 0.0) {
    fVar16 = -fVar16;
  }
  fVar6 = (float)(&DAT_007d6f20)[uVar9 * 4] + (fVar5 - fVar14) * (float)(&DAT_007d6f28)[uVar9 * 4];
  fVar7 = (float)(&DAT_007d6f24)[uVar9 * 4] + (fVar5 - fVar14) * (float)(&DAT_007d6f2c)[uVar9 * 4];
  if (fVar12 < 0.0) {
    fVar8 = -fVar8;
  }
  if (fVar4 < 0.0) {
    fVar6 = -fVar6;
  }
  local_40 = fVar7 * local_18;
  local_30 = fVar6 * local_18;
  local_1c = fVar16 * local_18;
  local_18 = fVar15 * local_18;
  local_20 = -fVar8;
  local_3c = fVar16 * fVar7 * fVar8 - fVar15 * fVar6;
  local_28 = fVar15 * fVar6 * fVar8 - fVar16 * fVar7;
  local_38 = fVar16 * fVar6 + fVar15 * fVar7 * fVar8;
  fStack_2c = fVar15 * fVar7 + fVar16 * fVar6 * fVar8;
  local_34 = 0;
  local_24 = 0;
  local_14 = 0;
  fn_0016947c(local_50,&local_40,param_1 + 0xec);
  return;
}



void fn_006a9800(undefined4 param_1,int param_2)

{
  float *pfVar1;
  float local_20;
  float local_1c;
  float local_18;
  
  pfVar1 = *(float **)(param_2 + 0x100);
  local_20 = *pfVar1 + *(float *)(param_2 + 0x20);
  local_1c = pfVar1[1] + *(float *)(param_2 + 0x24);
  local_18 = pfVar1[2] + *(float *)(param_2 + 0x28);
  fn_006a91c4(param_1,&local_20);
  return;
}



void fn_006a9300(undefined4 param_1,int param_2)

{
  float *pfVar1;
  float local_20;
  float local_1c;
  float local_18;
  
  fn_002aad7c(param_2);
  pfVar1 = *(float **)(param_2 + 0x100);
  local_20 = *pfVar1 + *(float *)(param_2 + 0x20);
  local_1c = pfVar1[1] + *(float *)(param_2 + 0x24);
  local_18 = pfVar1[2] + *(float *)(param_2 + 0x28);
  fn_006a91c4(param_1,&local_20);
  return;
}



void fn_006a7e74(void)

{
  return;
}



void fn_006a33a4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  fn_0014481c(DAT_008977e8);
  fn_00263814();
  fn_0068eb0c(DAT_008977e8);
  fn_0068eb0c(DAT_008977e8);
  uVar1 = fn_0068c7e8(DAT_008977e8);
  fn_0023e574(uVar1,*param_2);
  return;
}



void fn_006a27dc(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = param_1[0x20] + param_2 * 0xc;
  cVar1 = *(char *)(iVar5 + 4);
  fn_00144810(DAT_008977e8);
  iVar2 = fn_006a8730();
  if (iVar2 == 1) {
    uVar3 = param_1[0x6b];
    if ((int)uVar3 < 1) {
      uVar3 = (uint)*(byte *)((int)param_1 + 0x156);
    }
    if (uVar3 == 0) {
      iVar2 = *(int *)(iVar5 + 8);
      bVar6 = iVar2 == 0;
      if (iVar2 < 1) {
        bVar6 = cVar1 == '\x02';
      }
      if (!bVar6) {
        return;
      }
      (**(code **)(*param_1 + 0x40))(param_1,*(undefined4 *)(&DAT_007c98c0 + param_2 * 4),1);
      iVar2 = fn_0068cafc(DAT_008977e8);
      fn_0018d060(param_1[0x17],0xb,4);
      fn_006605b4(param_1 + 0x7c);
      param_1[0x7c] = -1;
      fn_0014481c(DAT_008977e8);
      iVar5 = fn_00263814();
      fn_00660790(0x11,iVar5 + 8,param_1 + 2);
      uVar4 = fn_0014481c(DAT_008977e8);
      fn_002620c4(uVar4,param_1,param_1[0x6e]);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar2 + 0x38),0x25);
      param_1[0x6e] = 0;
      uVar4 = fn_0068c7e8(DAT_008977e8);
      fn_0023e640(uVar4,param_1[0x6f],0);
      param_1[0x6f] = -1;
      fn_00144810(DAT_008977e8);
      iVar2 = fn_006a8714();
      if (iVar2 == 0) {
        return;
      }
      iVar2 = (**(code **)(*param_1 + 0x98))(param_1);
      if (iVar2 == 0) {
        return;
      }
      goto LAB_006a29b0;
    }
  }
  if ((cVar1 == '\x02') &&
     (*(char *)((int)param_1 + 0x156) == '\x02' || *(char *)((int)param_1 + 0x156) == '\x01')) {
    param_1[0x6e] = 0;
    uVar4 = fn_0068c7e8(DAT_008977e8);
    fn_0023e640(uVar4,param_1[0x6f],0);
    param_1[0x6f] = -1;
    fn_006605b4(param_1 + 0x7c);
    fn_00144810(DAT_008977e8);
    iVar2 = fn_006a8714();
    if ((iVar2 != 0) && (iVar2 = (**(code **)(*param_1 + 0x98))(param_1), iVar2 != 0)) {
LAB_006a29b0:
      fn_003501b0(DAT_008977e8);
      return;
    }
  }
  return;
}



void fn_006a0d8c(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  fn_00144810(DAT_008977e8);
  iVar2 = fn_006a8730();
  if ((iVar2 != 1) && (*(char *)((int)param_1 + 0x1e5) == '\0')) {
    return;
  }
  if (1 < *(byte *)((int)param_1 + 0x156)) {
    return;
  }
  uVar3 = fn_0014481c(DAT_008977e8);
  piVar7 = param_1 + 2;
  if (param_1[0x3f] == 0) {
    iVar9 = 0;
    iVar2 = fn_006b6c88(uVar3);
    if (0 < iVar2) {
      do {
        iVar2 = fn_006b6b3c(uVar3,iVar9);
        iVar4 = fn_006b6c9c(uVar3,iVar2);
        if ((iVar4 != 0) && (*(char *)(iVar2 + 0x74) == '\0')) {
          iVar5 = fn_006a8a84(iVar2,param_1 + 0xf,piVar7,1);
          iVar4 = 0;
          if (iVar5 != 0) {
            iVar4 = param_1[0x37];
          }
          if (iVar5 != 0 && iVar4 != iVar2) {
            param_1[0x3f] = iVar2;
            fn_00232fa8(iVar2,param_1);
            *(int *)(param_1[0x3f] + 0x58) = param_1[0x3b] - param_1[0x3a] >> 2;
            (**(code **)(*(int *)param_1[0x3f] + 0x40))((int *)param_1[0x3f],0x9c45,0);
            if (param_1[0x3e] == -1) {
              iVar9 = (**(code **)(*param_1 + 0x40))(param_1,0x9c51,0);
              param_1[0x3e] = iVar9;
            }
            fn_0014481c(DAT_008977e8);
            iVar9 = fn_00263814();
            fn_00660790(2,iVar9 + 8,iVar2 + 8);
            break;
          }
        }
        iVar9 = iVar9 + 1;
        iVar2 = fn_006b6c88(uVar3);
      } while (iVar9 < iVar2);
    }
    if (param_1[0x3f] == 0) {
      return;
    }
  }
  uVar8 = 0;
  iVar2 = fn_006b6bc4(uVar3);
  if (iVar2 < 1) {
    return;
  }
  do {
    iVar2 = fn_006b71a8(uVar3,(char)param_1[0x41]);
    iVar9 = fn_006b71a8(uVar3,uVar8 & 0xff);
    if ((*(char *)(iVar9 + 0x219) != *(char *)(iVar2 + 0x219)) &&
       (iVar2 = fn_006b6f3c(uVar3,uVar8 & 0xff,0), iVar2 != 0)) {
      iVar9 = fn_0068c044(iVar2,piVar7,param_1 + 0xf);
      if ((iVar9 != 0) && (*(char *)(iVar2 + 0x89) != '\0')) {
        return;
      }
      iVar9 = fn_0068c044(iVar2,piVar7,param_1 + 0xf);
      if (iVar9 != 0) {
        cVar1 = *(char *)(param_1[0x3f] + 0x8d);
        fn_00232fa8(param_1[0x3f],0);
        fn_00232b38(param_1[0x3f],iVar2);
        param_1[0x3f] = 0;
        fn_006a1a60(param_1);
        uVar3 = fn_00144810(DAT_008977e8);
        iVar4 = fn_006a8858(uVar3,*(undefined1 *)(iVar2 + 0x53),0);
        iVar9 = iVar4;
        if (3 < iVar4) {
          iVar9 = 3;
        }
        if (cVar1 != '\0') {
          uVar3 = fn_0014481c(DAT_008977e8);
          uVar6 = fn_0068eb30(DAT_008977e8);
          iVar9 = 3;
          goto LAB_006a10c0;
        }
        if (iVar9 <= iVar4) break;
        iVar9 = 0;
        if (0 < iVar4) {
          do {
            uVar3 = fn_0014481c(DAT_008977e8);
            uVar6 = fn_0068eb30(DAT_008977e8);
            fn_0024b9bc(uVar6,uVar3,iVar2,param_1,1);
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar4);
        }
        goto LAB_006a1108;
      }
    }
    uVar8 = uVar8 + 1;
    iVar2 = fn_006b6bc4(uVar3);
    if (iVar2 <= (int)uVar8) {
      return;
    }
  } while( true );
  for (; 2 < iVar9; iVar9 = iVar9 + -3) {
    uVar3 = fn_0014481c(DAT_008977e8);
    uVar6 = fn_0068eb30(DAT_008977e8);
    fn_0024b9bc(uVar6,uVar3,iVar2,param_1,3);
  }
  if (0 < iVar9) {
    uVar3 = fn_0014481c(DAT_008977e8);
    uVar6 = fn_0068eb30(DAT_008977e8);
LAB_006a10c0:
    fn_0024b9bc(uVar6,uVar3,iVar2,param_1,iVar9);
  }
LAB_006a1108:
  iVar2 = param_1[0x3b] - param_1[0x3a] >> 2;
  bVar10 = iVar2 == 0;
  if (bVar10) {
    iVar2 = param_1[0x3f];
  }
  if ((bVar10 && iVar2 == 0) && (param_1[0x3e] != -1)) {
    piVar7 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar7 + 0xc))(piVar7,param_1[0x3e]);
    param_1[0x3e] = -1;
  }
  return;
}



void fn_0069ef00(void)

{
  int iVar1;
  
  iVar1 = fn_0018367c();
  if (iVar1 == 0) {
    return;
  }
  fn_006eb3a4(iVar1);
  return;
}



void fn_0069e9cc(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_008514c4;
  return;
}


