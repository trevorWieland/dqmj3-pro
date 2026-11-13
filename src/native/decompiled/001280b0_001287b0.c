#include "001280b0_001287b0.h"



undefined4 * fn_001287b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if ((DAT_0089a509 & DAT_0089a508) != 0) {
    puVar1 = &DAT_0089a510;
  }
  return puVar1;
}



void fn_00128744(int param_1,int param_2)

{
  *(char *)(param_1 + 4) = (char)param_2;
  if (param_2 == 0 || param_2 == 2) {
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  }
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



undefined4 * fn_001286c4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &DAT_00858e4c;
  param_1[1] = 0;
  puVar1 = (undefined4 *)fn_00145b00(0x14,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  if ((undefined4 *)param_1[1] != puVar1) {
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      fn_00143828();
      fn_002feef8();
    }
    param_1[1] = puVar1;
  }
  return param_1;
}



void fn_001286b4(float *param_1)

{
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  
  *param_1 = in_s0;
  param_1[1] = in_s1;
  param_1[2] = in_s0 + in_s2;
  param_1[3] = in_s1 + in_s3;
  return;
}



void fn_001286a8(int param_1)

{
  undefined4 in_s0;
  undefined4 in_s1;
  
  *(undefined4 *)(param_1 + 0x10) = in_s0;
  *(undefined4 *)(param_1 + 0x14) = in_s1;
  return;
}



undefined4 * fn_0012863c(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      fn_00143a58();
      *piVar1 = 0;
    }
    if (piVar1[1] != 0) {
      fn_00143a58();
      piVar1[1] = 0;
    }
    if (piVar1[2] != 0) {
      fn_00143a58();
      piVar1[2] = 0;
    }
    fn_002feef8(piVar1);
    *param_1 = 0;
  }
  return param_1;
}



undefined4 * fn_0012857c(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  *param_1 = 0;
  piVar1 = (int *)fn_00145b00(0x2c,&DAT_00812c8c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
  }
  piVar2 = (int *)*param_1;
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      if (*piVar2 != 0) {
        fn_00143a58();
        *piVar2 = 0;
      }
      if (piVar2[1] != 0) {
        fn_00143a58();
        piVar2[1] = 0;
      }
      if (piVar2[2] != 0) {
        fn_00143a58();
        piVar2[2] = 0;
      }
      fn_002feef8(piVar2);
    }
    *param_1 = piVar1;
  }
  return param_1;
}



int fn_00128270(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = fn_00143240(param_1 + 2);
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined2 *)(iVar3 + 0xc) = 0xffff;
  *(undefined2 *)(iVar3 + 0xe) = 0xffff;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined1 *)(iVar3 + 0x20) = 0;
  *(undefined1 *)(iVar3 + 0x21) = 2;
  *(undefined1 *)(iVar3 + 0x22) = 0xff;
  *(undefined1 *)(iVar3 + 0x23) = 0xff;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined1 *)(iVar3 + 0x28) = 0;
  *(undefined1 *)(iVar3 + 0x29) = 2;
  *(undefined1 *)(iVar3 + 0x2a) = 0xff;
  *(undefined1 *)(iVar3 + 0x2b) = 0xff;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined1 *)(iVar3 + 0x30) = 0;
  *(undefined1 *)(iVar3 + 0x31) = 2;
  *(undefined1 *)(iVar3 + 0x32) = 0xff;
  *(undefined1 *)(iVar3 + 0x33) = 0xff;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined1 *)(iVar3 + 0x50) = 0;
  *(undefined1 *)(iVar3 + 0x51) = 2;
  *(undefined1 *)(iVar3 + 0x52) = 0xff;
  *(undefined1 *)(iVar3 + 0x53) = 0xff;
  *(undefined4 *)(iVar3 + 0x54) = 0;
  *(undefined1 *)(iVar3 + 0x58) = 0;
  *(undefined1 *)(iVar3 + 0x59) = 2;
  *(undefined1 *)(iVar3 + 0x5a) = 0xff;
  *(undefined1 *)(iVar3 + 0x5b) = 0xff;
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  *(undefined4 *)(iVar3 + 0x60) = DAT_008f9e2c;
  *(undefined4 *)(iVar3 + 100) = uVar1;
  *(undefined4 *)(iVar3 + 0x68) = uVar2;
  fn_0014321c(iVar3,param_2,4,4,4,4,0x8000);
  fn_001432a0(iVar3 + 0x20);
  *(undefined1 *)(iVar3 + 0x52) = 0x56;
  *(undefined1 *)(iVar3 + 0x53) = 0x59;
  *(undefined1 *)(iVar3 + 0x5a) = 0x5a;
  *(undefined1 *)(iVar3 + 0x5b) = 0x5c;
  return iVar3 + -8;
}



void fn_00128150(int *param_1,int *param_2,float *param_3)

{
  int iVar1;
  int local_38;
  undefined1 local_34 [4];
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  *param_1 = (int)param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
    fn_00145a68();
    local_18 = (int)*param_3;
    local_14 = (int)param_3[1];
    local_10 = VectorFloatToUnsigned(param_3[2] - *param_3,3);
    local_c = VectorFloatToUnsigned(param_3[3] - param_3[1],3);
    local_34[0] = 1;
    uStack_20 = 0x100;
    local_1c = 0x140;
    local_30 = (int)*param_3;
    local_2c = (int)param_3[1];
    local_28 = VectorFloatToUnsigned(param_3[2] - *param_3,3);
    local_24 = VectorFloatToUnsigned(param_3[3] - param_3[1],3);
    fn_0012bc84(0x208,&local_38);
    iVar1 = local_38;
    local_38 = fn_00145464(&local_18,local_38);
    local_38 = fn_001453b4(local_34,local_38);
    fn_001467e4(local_38 - iVar1 & 0xfffffffc);
    fn_00146578();
  }
  return;
}



int fn_00128114(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x78,4);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = &DAT_00858b00;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = param_1[4];
  puVar1[1] = *param_1;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  puVar1[5] = uVar6;
  iVar2 = fn_00153930(puVar1 + 6);
  uVar4 = param_1[1];
  uVar5 = *param_1;
  uVar3 = 0;
  if (*(short *)(param_1 + 2) != 0) {
    uVar3 = fn_001539a0(*(short *)(param_1 + 2),uVar5,uVar4);
    uVar3 = fn_00142c80(param_1[3],0x103,0,uVar3);
  }
  local_20 = 0;
  if (*(short *)((int)param_1 + 10) != 0) {
    uVar6 = fn_001539b8(*(short *)((int)param_1 + 10),uVar5,uVar4);
    local_20 = fn_00142c80(param_1[4],0x103,0,uVar6);
  }
  local_28 = *(undefined2 *)(param_1 + 2);
  local_26 = *(undefined2 *)((int)param_1 + 10);
  local_30 = uVar5;
  local_2c = uVar4;
  local_24 = uVar3;
  fn_0015382c(iVar2,&local_30);
  return iVar2 + -0x18;
}



void fn_00128104(int param_1)

{
  undefined4 in_s0;
  undefined4 uVar1;
  
  uVar1 = VectorFloatToUnsigned(in_s0,3);
  *(char *)(param_1 + 0x4c) = (char)uVar1;
  return;
}



void fn_001280e0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  *(undefined4 *)(param_1 + 0x28) = param_2[1];
  *(undefined4 *)(param_1 + 0x2c) = param_2[2];
  *(undefined4 *)(param_1 + 0x30) = param_2[3];
  return;
}



undefined4 * fn_001280b0(undefined4 *param_1)

{
  *param_1 = &DAT_00858978;
  if (param_1[1] != 0) {
    fn_0015370c();
    fn_002feef8();
  }
  return param_1;
}


