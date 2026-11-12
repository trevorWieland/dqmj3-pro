#include "00258304_00258bec.h"



void fn_00258b2c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    fn_00258908(param_1,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 0x34) != -1) {
    uVar1 = fn_006f7a9c(DAT_008977e0);
    iVar2 = fn_00279bbc(uVar1,*(undefined4 *)(param_1 + 0x34));
    if (iVar2 != 0) {
      uVar1 = fn_006f7a9c(DAT_008977e0);
      fn_00279ae4(uVar1,*(undefined4 *)(param_1 + 0x34));
      *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    }
  }
  *(code **)(param_1 + 0x24) = fn_00258bec;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar2 = fn_006f7a0c(DAT_008977e0);
  fn_0033d910(*(undefined4 *)(iVar2 + 0x48));
  return;
}



void fn_00258bec(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  fn_003adeac(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x38),iVar1 + 0x20);
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x25) != '\0') {
    *(code **)(param_1 + 0x24) = fn_00258858;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



void fn_00258998(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar8 = 0;
  uVar7 = 1;
  if (1 < (uint)((*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c)) / 0x2c)) {
    do {
      uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x1c) + uVar7 * 0x2c);
      iVar3 = fn_002fbe6c(uVar6);
      if (iVar3 != 0) {
        uVar4 = fn_006f7a9c(DAT_008977e0);
        iVar3 = fn_006b79bc(uVar4,uVar6);
        if (iVar3 == -1) {
          uVar4 = fn_006f7a9c(DAT_008977e0);
          iVar3 = fn_002780ac(uVar4,uVar6);
        }
        uVar6 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar6);
        uVar4 = fn_006f74f4(DAT_008977e0);
        piVar5 = (int *)fn_006c2de8(uVar4,uVar6);
        uVar6 = fn_006f7a70(DAT_008977e0);
        uVar1 = fn_002fe310(uVar6,piVar5,iVar3);
        (**(code **)(*piVar5 + 0x10))(piVar5,*(int *)(iVar2 + 0x1c) + uVar7 * 0x2c + 4);
        (**(code **)(*piVar5 + 0x14))(piVar5,*(int *)(iVar2 + 0x1c) + uVar7 * 0x2c + 0x10);
        (**(code **)(*piVar5 + 0x18))(piVar5,*(int *)(iVar2 + 0x1c) + uVar7 * 0x2c + 0x1c);
        piVar5[0x4e] = piVar5[0x4e] | 8;
        fn_001d96a0(piVar5,&DAT_007bfaf4);
        iVar3 = param_1 + iVar8;
        iVar8 = iVar8 + 1;
        *(undefined1 *)(iVar3 + 0x44) = uVar1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c)) / 0x2c));
  }
  return;
}



void fn_00258908(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 4) != 0;
  iVar2 = param_2;
  if (bVar3) {
    iVar2 = (int)*(char *)(param_1 + 0x62);
  }
  if (bVar3 && iVar2 != param_2) {
    if (param_2 == 0) {
      uVar1 = fn_0017fde4();
      fn_00162d54(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
      fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
    }
    else {
      uVar1 = fn_0017fde4();
      fn_001969a4(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
      fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
    }
  }
  *(char *)(param_1 + 0x62) = (char)param_2;
  return;
}



void fn_00258858(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    uVar1 = fn_006b609c(param_1,uVar1,1,param_4,param_4);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    iVar2 = fn_006c7290(*(undefined4 *)(param_1 + 0xc));
    iVar3 = fn_006f7a0c(DAT_008977e0);
    fn_0033e3a0(*(undefined4 *)(iVar3 + 0x48),1,*(undefined4 *)(param_1 + 0x38),iVar2 + 4,0);
    return;
  }
  uVar1 = fn_006f7a9c(DAT_008977e0);
  iVar2 = fn_00279bbc(uVar1,*(undefined4 *)(param_1 + 0x34));
  if (iVar2 != 0) {
    fn_002585c8(param_1,*(undefined4 *)(param_1 + 0x34));
    *(code **)(param_1 + 0x24) = fn_00258c3c;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



void fn_0025868c(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x28);
  *(int *)(param_1 + 0x1c) = iVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x20) = uVar4;
  *(uint *)(param_1 + 0x18) = uVar1;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if ((iVar5 == *(int *)(param_1 + 0x24)) &&
     (((iVar5 == 0 && (((*(byte *)(param_1 + 0x20) | uVar1) & 1) == 0)) || (uVar4 == uVar1)))) {
    iVar5 = *(int *)(param_1 + 0x30) + 1;
  }
  else {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x30) = iVar5;
  pcVar2 = *(code **)(param_1 + 0x14);
  if ((*(uint *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x18) >> 1)));
  }
  (*pcVar2)();
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_00423880();
  }
  iVar3 = *(int *)(param_1 + 0x38);
  iVar5 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006b614c);
  if (((iVar5 == iVar3) && (*(int *)(param_1 + 0x38) != -1)) &&
     (iVar5 = fn_006c7290(*(undefined4 *)(param_1 + 0xc)), iVar5 != 0)) {
    fn_006f7a84(DAT_008977e0);
    fn_006c7290(*(undefined4 *)(param_1 + 0xc));
    if (*(int *)(param_1 + 4) != 0) {
      fn_0017fde4();
      fn_0017fc3c();
      return;
    }
  }
  return;
}



bool fn_002585c8(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005efdbc();
  }
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 4) = piVar2;
  }
  iVar1 = fn_006f7a9c(DAT_008977e0);
  if (((int)param_2 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_2))
  {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + param_2 * 0x34;
  }
  iVar1 = fn_0069ee40(*(undefined4 *)(param_1 + 4),iVar1,0);
  return iVar1 != 0;
}



undefined4 * fn_00258524(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_0081d7e0;
  iVar1 = fn_00145b00(0xfc,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0065fdf0();
  }
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *(undefined1 *)((int)param_1 + 10) = 1;
  *(undefined1 *)((int)param_1 + 0xb) = 1;
  *(undefined1 *)(param_1 + 3) = 0x18;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  return param_1;
}



void fn_00258304(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  local_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uVar1 = in_fpscr & 0xfffffff;
  fVar5 = ABS(param_3[1] * 40.743664);
  fVar4 = ABS(param_3[2] * 40.743664);
  for (fVar6 = ABS(*param_3 * 40.743664); 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar7 = VectorFloatToUnsigned(fVar6,3);
  uVar8 = VectorFloatToUnsigned(fVar5,3);
  uVar9 = VectorFloatToUnsigned(fVar4,3);
  uVar2 = uVar7 & 0xff;
  uVar3 = uVar9 & 0xff;
  fVar11 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar7 = uVar8 & 0xff;
  fVar12 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar10 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar13 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar6 - fVar11) * (float)(&DAT_007d6f28)[uVar2 * 4];
  local_34 = (float)(&DAT_007d6f20)[uVar7 * 4] +
             (fVar5 - fVar12) * (float)(&DAT_007d6f28)[uVar7 * 4];
  fVar6 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar6 - fVar11) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  local_1c = (float)(&DAT_007d6f24)[uVar7 * 4] +
             (fVar5 - fVar12) * (float)(&DAT_007d6f2c)[uVar7 * 4];
  if (*param_3 * 40.743664 < 0.0) {
    fVar13 = -fVar13;
  }
  fVar5 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar4 - fVar10) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar4 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar4 - fVar10) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  if (param_3[1] * 40.743664 < 0.0) {
    local_34 = -local_34;
  }
  if (param_3[2] * 40.743664 < 0.0) {
    fVar5 = -fVar5;
  }
  local_3c = fVar4 * local_1c;
  local_38 = fVar5 * local_1c;
  local_28 = fVar13 * local_1c;
  local_1c = fVar6 * local_1c;
  local_24 = fVar13 * fVar5 + fVar6 * fVar4 * local_34;
  local_2c = fVar6 * fVar4 + fVar13 * fVar5 * local_34;
  local_30 = fVar13 * fVar4 * local_34 - fVar6 * fVar5;
  local_20 = fVar6 * fVar5 * local_34 - fVar13 * fVar4;
  local_34 = -local_34;
  fn_0065fd9c(*(undefined4 *)(param_1 + 4),&local_48);
  return;
}


