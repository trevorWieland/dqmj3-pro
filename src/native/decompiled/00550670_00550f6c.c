#include "00550670_00550f6c.h"



undefined4
fn_00550f6c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float *param_5,
            undefined4 *param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  if ((*(char *)(param_3 + 0xcd) != '\0') &&
     (iVar6 = *(int *)(*(int *)(param_3 + 0xd0) + 4), iVar6 != 0)) {
    uVar2 = fn_0054df04(param_1,param_2,iVar6);
    uVar2 = fn_005506e0(param_1,uVar2,iVar6);
    uVar2 = fn_005507c4(param_1,uVar2,param_4,param_3,iVar6);
    uVar3 = (&DAT_0085af10)[**(byte **)(param_3 + 0xd0)] | 0xc13;
    if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
      uVar3 = (&DAT_0085af10)[**(byte **)(param_3 + 0xd0)] | 0x40000c13;
    }
    fn_0054e2f0(param_1,uVar3);
    fVar4 = *param_5;
    uVar5 = *param_6;
    fVar7 = param_5[1];
    uVar8 = *(undefined4 *)(param_3 + 0x40);
    iVar6 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar10 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x600) = uVar10;
    cVar1 = *(char *)(param_1 + 0x33);
    *(undefined4 *)(iVar6 + 0x3f8) = uVar5;
    *(undefined4 *)(iVar6 + 0x3fc) = uVar8;
    *(float *)(iVar6 + 0x400) = fVar4;
    *(float *)(iVar6 + 0x404) = fVar7;
    *(char *)(param_1 + 0x33) = cVar1 + '\x01';
    fn_00560974(param_1);
    if ((*(byte *)(param_3 + 0xcd) < 2) ||
       (iVar6 = *(int *)(*(int *)(param_3 + 0xd0) + 0xc), iVar6 == 0)) {
      return uVar2;
    }
    uVar2 = fn_00550464(param_1,uVar2,1,0,1,0);
    param_2 = fn_005506e0(param_1,uVar2,iVar6);
    uVar3 = (&DAT_0085af10)[*(byte *)(*(int *)(param_3 + 0xd0) + 8)] | 0x503;
    if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
      uVar3 = (&DAT_0085af10)[*(byte *)(*(int *)(param_3 + 0xd0) + 8)] | 0x40000503;
    }
    fn_0054e2f0(param_1,uVar3);
    fVar7 = *param_5;
    fVar11 = *(float *)(param_3 + 0x3c);
    fVar9 = (float)param_6[1];
    fVar4 = param_5[1];
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    iVar6 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar5 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x600) = uVar5;
    cVar1 = *(char *)(param_1 + 0x33);
    *(float *)(iVar6 + 0x3f8) = fVar9;
    *(undefined4 *)(iVar6 + 0x3fc) = uVar2;
    *(float *)(iVar6 + 0x400) = (fVar7 + fVar11) - fVar9;
    *(float *)(iVar6 + 0x404) = fVar4;
    *(char *)(param_1 + 0x33) = cVar1 + '\x01';
    fn_00560974(param_1);
  }
  return param_2;
}



undefined4
fn_00550db8(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float *param_5,
            undefined4 *param_6)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  
  if (((*(char *)(param_3 + 0xcd) != '\0') &&
      (iVar5 = *(int *)(*(int *)(param_3 + 0xd0) + 4), iVar5 != 0)) &&
     ((*(ushort *)(iVar5 + 0x76) & 3) != 0)) {
    uVar3 = fn_0054df04(param_1,param_2,iVar5);
    uVar3 = fn_005506e0(param_1,uVar3,iVar5);
    uVar3 = fn_005507c4(param_1,uVar3,param_4,param_3,iVar5);
    bVar1 = *(byte *)(param_3 + 0xce);
    uVar4 = 0xc13;
    if ((bVar1 & 1) == 0) {
      uVar4 = 0x40000c13;
    }
    fn_0054e2f0(param_1,uVar4);
    fVar6 = *param_5;
    fVar7 = param_5[1];
    uVar9 = *param_6;
    uVar4 = *(undefined4 *)(param_3 + 0x40);
    iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar11 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x600) = uVar11;
    cVar2 = *(char *)(param_1 + 0x33);
    *(undefined4 *)(iVar5 + 0x3f8) = uVar9;
    *(undefined4 *)(iVar5 + 0x3fc) = uVar4;
    *(float *)(iVar5 + 0x400) = fVar6;
    *(float *)(iVar5 + 0x404) = fVar7;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    fn_00560974(param_1);
    param_2 = fn_00550464(param_1,uVar3,1,0,1,0);
    uVar3 = 0x20503;
    if ((bVar1 & 1) == 0) {
      uVar3 = 0x40020503;
    }
    fn_0054e2f0(param_1,uVar3);
    fVar6 = *param_5;
    fVar10 = *(float *)(param_3 + 0x3c);
    fVar8 = (float)param_6[1];
    uVar3 = *(undefined4 *)(param_3 + 0x40);
    fVar7 = param_5[1];
    iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar4 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x600) = uVar4;
    cVar2 = *(char *)(param_1 + 0x33);
    *(float *)(iVar5 + 0x3f8) = fVar8;
    *(undefined4 *)(iVar5 + 0x3fc) = uVar3;
    *(float *)(iVar5 + 0x400) = (fVar6 + fVar10) - fVar8;
    *(float *)(iVar5 + 0x404) = fVar7;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    fn_00560974(param_1);
  }
  return param_2;
}



undefined4
fn_005508b4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_38 = VectorUnsignedToFloat((uint)*(ushort *)(param_3 + 0xac),(byte)(in_fpscr >> 0x16) & 3);
  local_34 = VectorUnsignedToFloat((uint)*(ushort *)(param_3 + 0xae),(byte)(in_fpscr >> 0x16) & 3);
  local_30 = VectorUnsignedToFloat((uint)*(ushort *)(param_3 + 0xb0),(byte)(in_fpscr >> 0x16) & 3);
  local_2c = VectorUnsignedToFloat((uint)*(ushort *)(param_3 + 0xb2),(byte)(in_fpscr >> 0x16) & 3);
  cVar1 = *(char *)(param_3 + 0xcd);
  if (cVar1 == '\x01') {
    uVar2 = fn_00550a14(param_1);
  }
  else {
    if (cVar1 != '\x02' && cVar1 != '\x04') {
      return param_2;
    }
    uVar2 = fn_00550bc8(param_1);
  }
  if (((*(byte *)(param_3 + 0xce) & 4) == 0) && (*(int *)(param_3 + 0xd4) != 0)) {
    uVar2 = fn_00550464(param_1,uVar2,1,0,7,0);
    if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
      fn_0054e354(param_1,param_3 + 0xb4,*(undefined1 *)(param_3 + 0x46));
    }
    uVar3 = *(undefined4 *)(param_3 + 0xd4);
    uVar2 = fn_0054e7a0(param_1,uVar2,uVar3);
    uVar2 = fn_0054ec64(param_1,uVar2,param_4,param_3,uVar3,*(undefined4 *)(param_3 + 200));
    uVar2 = fn_005502e8(param_1,uVar2,param_3,param_4,param_5,&local_38);
  }
  return uVar2;
}



undefined4
fn_00550bc8(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float *param_5,
            undefined4 *param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  if ((*(char *)(param_3 + 0xcd) != '\0') &&
     (iVar6 = *(int *)(*(int *)(param_3 + 0xd0) + 4), iVar6 != 0)) {
    uVar2 = fn_0054df04(param_1,param_2,iVar6);
    uVar2 = fn_005506e0(param_1,uVar2,iVar6);
    uVar2 = fn_005507c4(param_1,uVar2,param_4,param_3,iVar6);
    uVar3 = (&DAT_0085aef0)[**(byte **)(param_3 + 0xd0)] | 0x403;
    if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
      uVar3 = (&DAT_0085aef0)[**(byte **)(param_3 + 0xd0)] | 0x40000403;
    }
    fn_0054e2f0(param_1,uVar3);
    fVar4 = *param_5;
    uVar5 = *param_6;
    fVar7 = param_5[1];
    uVar8 = *(undefined4 *)(param_3 + 0x40);
    iVar6 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar10 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x600) = uVar10;
    cVar1 = *(char *)(param_1 + 0x33);
    *(undefined4 *)(iVar6 + 0x3f8) = uVar5;
    *(undefined4 *)(iVar6 + 0x3fc) = uVar8;
    *(float *)(iVar6 + 0x400) = fVar4;
    *(float *)(iVar6 + 0x404) = fVar7;
    *(char *)(param_1 + 0x33) = cVar1 + '\x01';
    fn_00560974(param_1);
    if ((*(byte *)(param_3 + 0xcd) < 2) ||
       (iVar6 = *(int *)(*(int *)(param_3 + 0xd0) + 0xc), iVar6 == 0)) {
      return uVar2;
    }
    uVar2 = fn_00550464(param_1,uVar2,1,0,1,0);
    param_2 = fn_005506e0(param_1,uVar2,iVar6);
    uVar3 = (&DAT_0085aef0)[*(byte *)(*(int *)(param_3 + 0xd0) + 8)] | 0x503;
    if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
      uVar3 = (&DAT_0085aef0)[*(byte *)(*(int *)(param_3 + 0xd0) + 8)] | 0x40000503;
    }
    fn_0054e2f0(param_1,uVar3);
    fVar7 = *param_5;
    fVar11 = *(float *)(param_3 + 0x3c);
    fVar9 = (float)param_6[1];
    fVar4 = param_5[1];
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    iVar6 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar5 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x600) = uVar5;
    cVar1 = *(char *)(param_1 + 0x33);
    *(float *)(iVar6 + 0x3f8) = fVar9;
    *(undefined4 *)(iVar6 + 0x3fc) = uVar2;
    *(float *)(iVar6 + 0x400) = (fVar7 + fVar11) - fVar9;
    *(float *)(iVar6 + 0x404) = fVar4;
    *(char *)(param_1 + 0x33) = cVar1 + '\x01';
    fn_00560974(param_1);
  }
  return param_2;
}



undefined4
fn_00550a14(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float *param_5,
            undefined4 *param_6)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  
  if (((*(char *)(param_3 + 0xcd) != '\0') &&
      (iVar5 = *(int *)(*(int *)(param_3 + 0xd0) + 4), iVar5 != 0)) &&
     ((*(ushort *)(iVar5 + 0x76) & 3) != 0)) {
    uVar3 = fn_0054df04(param_1,param_2,iVar5);
    uVar3 = fn_005506e0(param_1,uVar3,iVar5);
    uVar3 = fn_005507c4(param_1,uVar3,param_4,param_3,iVar5);
    bVar1 = *(byte *)(param_3 + 0xce);
    uVar4 = 0x403;
    if ((bVar1 & 1) == 0) {
      uVar4 = 0x40000403;
    }
    fn_0054e2f0(param_1,uVar4);
    fVar6 = *param_5;
    fVar7 = param_5[1];
    uVar9 = *param_6;
    uVar4 = *(undefined4 *)(param_3 + 0x40);
    iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar11 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x600) = uVar11;
    cVar2 = *(char *)(param_1 + 0x33);
    *(undefined4 *)(iVar5 + 0x3f8) = uVar9;
    *(undefined4 *)(iVar5 + 0x3fc) = uVar4;
    *(float *)(iVar5 + 0x400) = fVar6;
    *(float *)(iVar5 + 0x404) = fVar7;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    fn_00560974(param_1);
    param_2 = fn_00550464(param_1,uVar3,1,0,1,0);
    uVar3 = 0x20503;
    if ((bVar1 & 1) == 0) {
      uVar3 = 0x40020503;
    }
    fn_0054e2f0(param_1,uVar3);
    fVar6 = *param_5;
    fVar10 = *(float *)(param_3 + 0x3c);
    fVar8 = (float)param_6[1];
    uVar3 = *(undefined4 *)(param_3 + 0x40);
    fVar7 = param_5[1];
    iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar4 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x600) = uVar4;
    cVar2 = *(char *)(param_1 + 0x33);
    *(float *)(iVar5 + 0x3f8) = fVar8;
    *(undefined4 *)(iVar5 + 0x3fc) = uVar3;
    *(float *)(iVar5 + 0x400) = (fVar6 + fVar10) - fVar8;
    *(float *)(iVar5 + 0x404) = fVar7;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    fn_00560974(param_1);
  }
  return param_2;
}



undefined4
fn_005507c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint in_fpscr;
  undefined4 uVar4;
  
  if (((*(byte *)(param_5 + 0x7c) & 8) == 0) || (*(char *)(param_5 + 0x66) != '\0')) {
    fn_006e1fd8(param_1,param_3,param_4,param_5,0);
  }
  bVar1 = *(byte *)(param_5 + 100);
  uVar3 = (uint)bVar1;
  uVar2 = *(undefined1 *)(param_5 + 0x65);
  if (*(uint *)(param_1 + 0x618) != uVar3) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      param_2 = fn_0054f158(param_1);
    }
    *(uint *)(param_1 + 0x618) = uVar3;
  }
  if (uVar3 != 0) {
    if ((1 < uVar3) && (*(char *)(param_1 + 0x30) != '\0')) {
      param_2 = fn_0054f158(param_1);
    }
    uVar4 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x604) = uVar4;
    fn_0017821c(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x1f8,param_5 + 4,uVar3 << 4);
    *(byte *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + bVar1;
  }
  *(undefined1 *)(param_1 + 0x5fa) = uVar2;
  return param_2;
}



int * fn_00550670(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  
  piVar1 = param_2;
  if (param_5 == 0) {
    piVar1 = *(int **)(param_1 + 0x620);
  }
  if (param_5 != 0 || piVar1 != param_3) {
    *param_2 = (int)param_3;
    param_2[1] = 0xf00f3;
    param_2 = param_2 + 2;
    *(int **)(param_1 + 0x620) = param_3;
    if (param_5 != 0) goto LAB_005506b8;
  }
  if (*(int *)(param_1 + 0x624) == param_4) {
    return param_2;
  }
LAB_005506b8:
  param_2[1] = 0xf00db;
  *param_2 = param_4;
  *(int *)(param_1 + 0x624) = param_4;
  return param_2 + 2;
}


