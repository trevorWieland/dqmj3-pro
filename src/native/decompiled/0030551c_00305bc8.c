#include "0030551c_00305bc8.h"



void fn_00305bc8(int param_1,int param_2,int param_3)

{
  int iVar1;
  float in_s0;
  float in_s1;
  float in_s2;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = param_1 + param_2 * 4;
  fn_0037cf4c(*(undefined4 *)(iVar1 + 0x14),param_3);
  fn_0025e31c(*(undefined4 *)(param_1 + 0x44),param_3);
  if (param_3 != 0) {
    fn_00688ff8(*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x1c));
    local_20 = in_s0;
    local_1c = in_s1;
    local_18 = in_s2;
    fn_00688ff8(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x2c));
    local_20 = local_20 - in_s0;
    local_1c = local_1c - in_s1;
    local_18 = local_18 - in_s2;
    fn_0025e7cc(*(undefined4 *)(param_1 + 0x44),&local_20);
  }
  return;
}



void fn_00305bb8(int param_1)

{
  fn_00190d50(*(undefined4 *)(param_1 + 0x48));
  return;
}



void fn_00305b58(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x44) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x40) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))();
  iVar1 = 0;
  do {
    (**(code **)(**(int **)(param_1 + iVar1 * 4 + 0x14) + 0x18))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  return;
}



void fn_00305b50(int param_1)

{
  fn_00243550(*(undefined4 *)(param_1 + 0x40));
  return;
}



void fn_00305b48(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x3c) = param_2;
  return;
}



void fn_00305aec(int param_1)

{
  int iVar1;
  
  fn_0069e748();
  iVar1 = 0;
  do {
    (**(code **)(**(int **)(param_1 + iVar1 * 4 + 0x14) + 0x14))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x00305b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x40) + 0x14))();
  return;
}



void fn_00305a7c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (param_5 != 0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x14))(*(int **)(param_1 + 0x40),iVar2);
    iVar2 = *(int *)(param_1 + 0x1c);
  }
  piVar1 = *(int **)(iVar2 + param_3 * 4 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00305ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x20))(piVar1,param_5 != 0);
  return;
}



void fn_00305a6c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0x14);
  *(char *)(iVar1 + 0x30) = (char)param_3;
  uStack_10 = 0xffffffff;
  fn_0068b37c(param_3,&uStack_10);
  iVar2 = *(int *)(iVar1 + 0x20);
  *(undefined4 *)(iVar2 + 0xac) = uStack_10;
  *(undefined4 *)(iVar2 + 0xb0) = uStack_10;
  iVar1 = *(int *)(iVar1 + 0x24);
  *(undefined4 *)(iVar1 + 0xac) = uStack_10;
  *(undefined4 *)(iVar1 + 0xb0) = uStack_10;
  return;
}



void fn_00305a4c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x34) = param_2;
  return;
}



void fn_0030599c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  fn_0069e710();
  (**(code **)(**(int **)(param_1 + 0x44) + 0x10))
            (*(int **)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x10));
  fn_0025e31c(*(undefined4 *)(param_1 + 0x44),0);
  fn_0025e378(*(undefined4 *)(param_1 + 0x44),*(int *)(*(int *)(param_1 + 0x14) + 0x1c) + 0x3c);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 0xac) + 0x10);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x2c))(piVar1,(char *)&DAT_00305a3c,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_00305a34;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_00305a34:
  *(int **)(param_1 + 0x48) = piVar1;
  return;
}



void fn_00305958(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002b5060();
  *(undefined1 *)(puVar1 + 10) = 0;
  *puVar1 = &DAT_00821998;
  return;
}



void fn_003058b4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],(&DAT_008933b8)[iVar2],1);
    *(undefined4 *)(param_1[5] + iVar2 * 4) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  fn_002b4f00(param_1);
                    /* WARNING: Could not recover jumptable at 0x0030590c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,(char)param_1[10]);
  return;
}



int fn_0030551c(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                int param_6,int param_7,uint param_8,uint param_9,int param_10)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  int local_248;
  float local_244;
  undefined4 local_240;
  float local_23c;
  int local_238;
  float local_234;
  undefined4 uStack_230;
  float local_22c;
  undefined4 *puStack_34;
  undefined4 local_30;
  int local_2c;
  int iStack_28;
  
  puStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  if (param_3 < 9000) {
    if (param_6 == 0) {
      sVar2 = fn_00242b2c();
      param_3 = (int)sVar2;
    }
    else {
      param_3 = param_4 + 8000;
    }
  }
  fn_00301f50(&local_240,0x200);
  local_248 = param_3;
  fn_0018a618(&local_240,0x100,0xff,L"patch:/data/Icons/ic/ic_%04d.arc");
  local_248 = 1;
  uVar3 = fn_001481c8(local_30,&local_240,&DAT_00305840,1);
  *param_1 = uVar3;
  fn_00301f50(&local_240,0x100);
  local_248 = param_3;
  fn_0017d96c(&local_240,0x100,0xff,(char *)&DAT_00305844);
  uVar3 = fn_001c8c60(local_30,*param_1,&local_240);
  param_1[1] = uVar3;
  uVar3 = fn_001c8888(local_30,uVar3);
  iVar4 = fn_00145b00(0xc0,&DAT_00812c8c);
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = fn_001c99cc(iVar4,uVar3);
  }
  param_1[3] = iVar5;
  bVar1 = *(byte *)(iVar5 + 0x47);
  *(byte *)(iVar5 + 0x47) = bVar1 & 0xfc | 1;
  *(byte *)(param_1[3] + 0x47) = bVar1 & 0xf0 | 5;
  fn_001c9700(param_1[3]);
  iVar5 = fn_006e1ee4(param_1[3]);
  if ((param_8 & param_9) == 0) {
    sVar2 = 3;
  }
  else {
    sVar2 = 0;
  }
  if (param_7 != 0) {
    param_5 = 0;
  }
  iVar4 = 0;
  *(ushort *)(iVar5 + 0x76) = sVar2 << 6 | *(ushort *)(iVar5 + 0x76) & 0xfe3f;
  if (param_5 < param_4) {
    iVar5 = param_1[3];
    fVar8 = (float)VectorSignedToFloat(param_5 + 1,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(iVar5 + 0x3c) = 0x42300000;
    *(float *)(iVar5 + 0x40) = fVar8 * 44.0;
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xef | 0x10;
    pcVar6 = (char *)fn_00242930(local_2c);
    iVar5 = 0;
    if (param_5 == 0) {
      iVar5 = (int)*pcVar6;
    }
    else if (param_5 == 1) {
      iVar5 = (int)pcVar6[1];
    }
    else if (param_5 == 2) {
      iVar5 = (int)pcVar6[2];
    }
    else if (param_5 == 3) {
      iVar5 = (int)pcVar6[3];
    }
    fVar9 = (float)VectorSignedToFloat(param_4 + 1,(byte)(in_fpscr >> 0x16) & 3);
    local_244 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(param_4 + 1,(byte)(in_fpscr >> 0x16) & 3);
    local_244 = local_244 / fVar9;
    local_234 = (float)VectorSignedToFloat(iVar5 + param_5 + 1,(byte)(in_fpscr >> 0x16) & 3);
    local_234 = local_234 / fVar8;
    local_240 = 0x3f800000;
    uStack_230 = 0x3f800000;
    local_248 = iVar4;
    local_23c = local_244;
    local_238 = iVar4;
    local_22c = local_234;
    fn_00552f04(param_1[3],0,&local_248);
  }
  if (param_10 != 0) {
    local_248 = 1;
    uVar3 = fn_001481c8(local_30,L"rom:/data/Layout/color_icon/color_icon.arc",&DAT_00305840,1);
    param_1[2] = uVar3;
    local_248 = 0;
    local_244 = 1.4013e-45;
    local_240 = 0;
    uVar3 = fn_001480d0(local_30,uVar3,(char *)&DAT_0030586c,&DAT_00305868);
    iVar5 = fn_00178f9c(local_30,uVar3);
    iVar7 = (**(code **)(**(int **)(iVar5 + 0x10) + 0x2c))
                      (*(int **)(iVar5 + 0x10),(char *)&DAT_00305880,1);
    fVar8 = *(float *)(param_1[3] + 0x40);
    *(float *)(iVar7 + 0x1c) = *(float *)(param_1[3] + 0x3c) * -0.5;
    *(float *)(iVar7 + 0x20) = fVar8 * 0.5;
    *(int *)(iVar7 + 0x24) = iVar4;
    *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xef | 0x10;
    fn_00151954(*(undefined4 *)(iVar5 + 0x10),iVar7);
    fn_0018a69c(param_1[3],iVar7);
    fn_0016a43c(local_30,uVar3);
  }
  return param_5;
}


