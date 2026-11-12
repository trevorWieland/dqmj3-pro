#include "006f8084_006f8790.h"



void fn_006f8790(int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    fn_0013d40c(auStack_18);
    pcVar3 = *(code **)(*param_2 + 0x4c);
    iVar1 = (*pcVar3)(param_2,(char *)&DAT_007d8f14,auStack_18);
    if (iVar1 != 0) {
      local_1c = 0;
      local_20 = 0;
      fn_00156234(auStack_18,&local_20);
      pcVar2 = (code *)fn_00102c18(local_20,&local_1c,10);
      fn_0014f4d8(local_20);
      if (pcVar2 != (code *)0x0) {
        pcVar3 = *(code **)(param_1 + 0xd4);
      }
      if (pcVar2 != (code *)0x0 && pcVar3 != pcVar2) {
        local_20 = local_14;
        *(undefined1 *)(param_1 + 0x129) = 1;
        fn_00456510(param_1 + 0x30,4,pcVar2);
      }
    }
    fn_00170f54(auStack_18);
  }
  return;
}



void fn_006f8674(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_2c [2];
  undefined1 auStack_24 [16];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    local_38[0] = 0x80010004;
    uVar2 = fn_004b8d4c(&local_30,local_38);
    fn_0074e3bc(param_1 + -0x68,uVar2);
  }
  else {
    param_2[2] = *(int *)(param_1 + 0x18);
    (**(code **)(*param_2 + 0x58))(param_2,*(undefined4 *)(param_1 + 0x14));
    iVar1 = *(int *)(param_1 + 200);
    if (*(int *)(param_1 + 0xcc) != iVar1) {
      do {
        local_30 = 0;
        local_2c[0] = 0;
        fn_00156234(iVar1 + 8,&local_30);
        fn_00156234(iVar1 + 0x10,local_2c);
        (**(code **)(*param_2 + 0xc))(auStack_24,param_2,local_30,local_2c[0]);
        fn_0014f4d8(local_30);
        fn_0014f4d8(local_2c[0]);
        iVar1 = iVar1 + 0x18;
      } while (*(int *)(param_1 + 0xcc) != iVar1);
    }
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 != *(int *)(param_1 + 0xdc)) {
                    /* WARNING: Could not recover jumptable at 0x006f8750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x54))(param_2,iVar1,*(int *)(param_1 + 0xdc) - iVar1);
      return;
    }
  }
  return;
}



int * fn_006f85dc(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  local_14 = param_1[4];
  if (local_14 != 0) {
    local_18 = *(undefined4 *)(local_14 + 8);
    fn_0077c740(auStack_10,param_1,&local_18,&local_14);
    iVar1 = param_1[4];
    *(int *)(iVar1 + 0xc) = param_1[1];
    param_1[1] = iVar1;
    piVar2 = (int *)*param_1;
    while (piVar2 != (int *)0x0) {
      *param_1 = *piVar2;
      fn_001008c4(piVar2[2],piVar2[1],0);
      fn_001008c4(piVar2,1,0);
      piVar2 = (int *)*param_1;
    }
  }
  return param_1;
}



int * fn_006f8544(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  local_14 = param_1[4];
  if (local_14 != 0) {
    local_18 = *(undefined4 *)(local_14 + 8);
    fn_0011b908(auStack_10,param_1,&local_18,&local_14);
    iVar1 = param_1[4];
    *(int *)(iVar1 + 0xc) = param_1[1];
    param_1[1] = iVar1;
    piVar2 = (int *)*param_1;
    while (piVar2 != (int *)0x0) {
      *param_1 = *piVar2;
      fn_001008c4(piVar2[2],piVar2[1],0);
      fn_001008c4(piVar2,1,0);
      piVar2 = (int *)*param_1;
    }
  }
  return param_1;
}



void fn_006f8460(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_18 [6];
  
  local_18[0] = *(float *)(param_1 + 0x48);
  local_18[2] = -local_18[0];
  local_18[1] = param_2[1];
  if (local_18[2] <= local_18[0]) {
    if (param_2[1] < local_18[2]) {
      pfVar1 = local_18 + 2;
    }
    else {
      pfVar1 = local_18 + 1;
    }
    if (local_18[0] < *pfVar1) {
      pfVar1 = local_18;
    }
    param_2[1] = *pfVar1;
    fVar3 = *(float *)(param_1 + 0x48) * 2.0 - 0.1;
    fVar5 = *param_2;
    fVar2 = param_2[2];
    fVar3 = SQRT(fVar3 * fVar3 - local_18[0] * local_18[0]);
    fVar4 = fVar5 * fVar5 + 0.0;
    if (fVar3 * fVar3 < fVar4 + fVar2 * fVar2) {
      fVar4 = 1.0 / SQRT(fVar4 + fVar2 * fVar2);
      *param_2 = fVar5 * fVar4 * fVar3;
      param_2[2] = fVar2 * fVar4 * fVar3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}



undefined4 fn_006f8418(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((int)param_2 < 0) ||
     ((uint)(*(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8) >> 2) <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xe8) + param_2 * 4);
  }
  return uVar1;
}



undefined4 fn_006f825c(int param_1,int param_2)

{
  int iVar1;
  
  switch(*(undefined1 *)(*(int *)(param_1 + 0x80) + param_2 * 0xc + 4)) {
  default:
    return 1;
  case 1:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x18);
  case 2:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x38);
  case 3:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x25c);
  case 4:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x78);
  case 5:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x270);
  case 6:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x194);
  case 7:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x1e4);
  case 8:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x1f8);
  case 9:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x1c4);
  case 10:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x22c);
  case 0xb:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x164);
  case 0xc:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x244);
  case 0xd:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x28c);
  case 0xe:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x2b4);
  case 0xf:
    iVar1 = fn_0068cafc(DAT_008977e8);
    return *(undefined4 *)(iVar1 + 0x210);
  }
}



undefined4 fn_006f8240(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x80) + param_2 * 0xc + 8);
}



uint fn_006f81a4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  uint uVar4;
  float fVar5;
  
  iVar1 = (**(code **)(*param_1 + 0xa4))(param_1);
  if (iVar1 == 0) {
    fVar3 = (float)param_1[0x46];
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
    fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (fVar3 + 100.0) * 0.01 * (float)param_1[0x46];
  }
  fVar3 = fVar3 * 108000.0;
  fVar5 = fVar3 * 0.0001;
  fn_006f7e48(param_1);
  uVar4 = VectorFloatToUnsigned(fVar5 * fVar3,3);
  return uVar4 & 0xff;
}



int fn_006f8084(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float in_s0;
  float fVar8;
  float fVar9;
  float in_s1;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6bc4();
  fVar11 = -1.0;
  iVar5 = 0;
  uVar4 = 0;
  if (0 < iVar1) {
    in_s0 = in_s0 * in_s0;
    fVar13 = -in_s1;
    fVar12 = 0.0;
    fVar14 = 0.024543693;
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b71a8(uVar2,uVar4 & 0xff);
      if (*(char *)(iVar3 + 0x219) != *(char *)(param_1 + 0x219)) {
        fVar8 = *(float *)(iVar3 + 8) - *(float *)(param_1 + 8);
        fVar10 = *(float *)(iVar3 + 0x10) - *(float *)(param_1 + 0x10);
        fVar10 = fVar8 * fVar8 + fVar12 * fVar12 + fVar10 * fVar10;
        if (fVar10 < in_s0) {
          fn_00525bd0();
          fVar9 = *(float *)(param_1 + 0x24) - fVar8 * fVar14;
          fn_005df8f8();
          bVar6 = fVar13 < fVar9;
          bVar7 = NAN(fVar13) || NAN(fVar9);
          fVar8 = fVar13;
          if (fVar13 <= fVar9) {
            bVar6 = fVar9 < in_s1;
            bVar7 = NAN(fVar9) || NAN(in_s1);
            fVar8 = in_s1;
          }
          if ((fVar8 == fVar9 || bVar6 != bVar7) && ((fVar11 == -1.0 || (fVar10 < fVar11)))) {
            iVar5 = iVar3;
            fVar11 = fVar10;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar1);
  }
  return iVar5;
}


