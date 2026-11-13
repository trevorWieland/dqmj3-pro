#include "00369fec_0036a898.h"



void fn_0036a898(int *param_1)

{
  fn_001003e0(*param_1 + 0x4c);
  return;
}



void fn_0036a874(int *param_1,undefined4 param_2)

{
  fn_0017821c(*param_1 + 0x155c,param_2,0x8e8);
  return;
}



void fn_0036a860(int *param_1,undefined4 param_2)

{
  fn_0017821c(*param_1 + 0x800,param_2,0xd5c);
  return;
}



void fn_0036a840(undefined4 *param_1)

{
  fn_001003e0(*param_1);
  return;
}



void fn_0036a810(int *param_1,int param_2,undefined4 param_3)

{
  fn_0017821c(*param_1 + param_2 * 0x3d8 + 0x50,param_3,0x3d8);
  return;
}



void fn_0036a800(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x41) = *param_2;
  return;
}



void fn_0036a764(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_48 [56];
  
  if (*param_1 < 2) {
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 4))();
      param_1[1] = 0;
    }
    fn_001433d8(param_1 + 3);
    piVar1 = (int *)fn_001283fc(auStack_48);
    iVar2 = piVar1[1];
    iVar3 = piVar1[2];
    iVar4 = piVar1[3];
    iVar5 = piVar1[4];
    iVar6 = piVar1[5];
    iVar7 = piVar1[6];
    iVar8 = piVar1[7];
    param_1[3] = *piVar1;
    param_1[4] = iVar2;
    param_1[5] = iVar3;
    param_1[6] = iVar4;
    param_1[7] = iVar5;
    param_1[8] = iVar6;
    param_1[9] = iVar7;
    param_1[10] = iVar8;
    iVar2 = piVar1[9];
    iVar3 = piVar1[10];
    iVar4 = piVar1[0xb];
    iVar5 = piVar1[0xc];
    param_1[0xb] = piVar1[8];
    param_1[0xc] = iVar2;
    param_1[0xd] = iVar3;
    param_1[0xe] = iVar4;
    param_1[0xf] = iVar5;
    if (param_1[2] != 0) {
      fn_0012d73c();
      param_1[2] = 0;
    }
    *param_1 = 0;
  }
  else {
    *param_1 = *param_1 + -1;
  }
  return;
}



void fn_0036a6ec(int param_1)

{
  uint uVar1;
  uint in_fpscr;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  
  uVar1 = *(uint *)(param_1 + 0x41);
  local_18 = (float)VectorUnsignedToFloat(uVar1 & 0xff,(byte)(in_fpscr >> 0x16) & 3);
  local_14 = (float)VectorUnsignedToFloat((uVar1 & 0xffff) >> 8,(byte)(in_fpscr >> 0x16) & 3);
  local_10 = (float)VectorUnsignedToFloat((uVar1 & 0xffffff) >> 0x10,(byte)(in_fpscr >> 0x16) & 3);
  local_18 = local_18 * 0.003921569;
  local_14 = local_14 * 0.003921569;
  local_10 = local_10 * 0.003921569;
  local_c = 0x3f800000;
  fn_005e2bdc(*(undefined4 *)(param_1 + 4),&local_18);
  return;
}



void fn_0036a60c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_20 [16];
  
  if (*param_1 < 1) {
    *param_1 = 1;
    uVar1 = fn_001287b4();
    iVar2 = fn_0011c184(L"rom:/data/G3dModel/ColorChange.bch",uVar1,0x80,5);
    param_1[2] = iVar2;
    uVar1 = fn_00145ac0();
    fn_00173a34(param_1 + 3,uVar1);
    fn_00185320(param_1 + 3);
    fn_00117984();
    fn_0010fa20();
    uVar1 = fn_006eb29c();
    fn_001a0b50(auStack_20,param_1 + 3,0);
    piVar3 = (int *)fn_005e2b78(auStack_20,uVar1,0);
    piVar4 = (int *)param_1[1];
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      param_1[1] = (int)piVar3;
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  else {
    *param_1 = *param_1 + 1;
  }
  return;
}



void fn_0036a474(undefined4 *param_1)

{
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}



undefined4 fn_0036a040(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_40 [4];
  undefined4 local_30 [3];
  undefined4 local_24 [2];
  
  *(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x58) = DAT_008977d8;
  *(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x60) = DAT_00897824;
  *(uint *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x2c) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 4) = 0;
  fn_0036a2cc(param_1,*(undefined4 *)(param_1 + 0x18));
  iVar1 = fn_006f7a9c(DAT_008977e0);
  if ((int)param_2 < 0) {
LAB_0036a0f0:
    iVar1 = 0;
  }
  else {
    if ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_2) goto LAB_0036a0f0;
    iVar1 = *(int *)(iVar1 + 4) + param_2 * 0x34;
  }
  iVar2 = fn_006f7a9c(DAT_008977e0);
  if (-1 < (int)param_3) {
    if (param_3 < (uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34)) {
      iVar2 = *(int *)(iVar2 + 4) + param_3 * 0x34;
      goto LAB_0036a14c;
    }
  }
  iVar2 = 0;
LAB_0036a14c:
  if (iVar1 != 0) {
    iVar3 = fn_006eb358(iVar1);
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        fn_005e7a3c(local_24,iVar1,iVar5);
        iVar4 = fn_006eb9b4(local_24);
        if (iVar4 == 0) {
          iVar4 = fn_006eb9cc(local_24);
          if (iVar4 != 0) {
            *(undefined4 *)(param_1 + 0x70) = local_24[0];
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x6c) = local_24[0];
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
  }
  if (iVar2 != 0) {
    iVar3 = fn_006eb358(iVar2);
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        fn_005e7a3c(local_24,iVar2,iVar5);
        iVar4 = fn_006eb9b4(local_24);
        if (iVar4 == 0) {
          iVar4 = fn_006eb9cc(local_24);
          if (iVar4 != 0) {
            *(undefined4 *)(param_1 + 0x78) = local_24[0];
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x74) = local_24[0];
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
  }
  fn_005e72e0(local_30,iVar1,0);
  *(undefined4 *)(param_1 + 0x7c) = local_30[0];
  if (iVar2 != 0) {
    fn_005e72e0(local_40,iVar2,0);
    *(undefined4 *)(param_1 + 0x80) = local_40[0];
  }
  *(undefined4 *)(param_1 + 0x84) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x88) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x8c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x28) + 0xc))();
  return 1;
}



void fn_0036a2cc(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  fn_005e29d8();
  iVar1 = fn_006f7a9c(DAT_008977e0);
  if (-1 < (int)param_2) {
    if (param_2 < (uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34)) {
      piVar4 = (int *)(*(int *)(iVar1 + 4) + param_2 * 0x34);
      goto LAB_0036a32c;
    }
  }
  piVar4 = (int *)0x0;
LAB_0036a32c:
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    if (*(int *)(param_1 + 100) != 0) {
      fn_00117984();
      fn_0010fa20();
      uVar2 = fn_006eb278();
      iVar1 = fn_005e29c4(uVar2,0);
      iVar3 = **(int **)(*(int *)(*piVar4 + 0x30) + 0x54);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x10);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar3 + 0x38);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar3 + 0x30);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar3 + 0x34);
      if (*(uint *)(param_1 + 0x18) == param_2) {
        *(int *)(param_1 + 0x60) = param_1 + 0x6c;
        *(int *)(param_1 + 0x5c) = param_1 + 0x74;
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x7c);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x80);
      }
      else {
        *(int *)(param_1 + 0x5c) = param_1 + 0x6c;
        *(int *)(param_1 + 0x60) = param_1 + 0x74;
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x7c);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x80);
      }
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar1 = fn_006f7a5c(DAT_008977e0);
  iVar1 = fn_0033801c(param_1,piVar4,*(undefined4 *)(iVar1 + 4));
  if (iVar1 == 0) {
    return;
  }
  fn_00369b3c(param_1,param_2);
  fn_003697d8(param_1,param_2);
  return;
}



void fn_00369fec(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
  *(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x58) = 0;
  *(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x60) = 0;
  fn_005e29d8(param_1);
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}


