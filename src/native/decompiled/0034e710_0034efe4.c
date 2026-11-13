#include "0034e710_0034efe4.h"



void fn_0034efe4(undefined4 *param_1)

{
  *param_1 = &DAT_008262f4;
  fn_00260014(param_1,1);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}



undefined1 * fn_0034ef48(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  float fVar5;
  int iVar6;
  undefined1 local_30 [32];
  
  fn_001cc890();
  puVar4 = (undefined1 *)(int)(char)param_1[0x1e];
  if (puVar4 == (undefined1 *)0xffffffff) {
    uVar2 = fn_0014481c(DAT_008977e8);
    fn_002625d0(uVar2,param_1);
    puVar4 = (undefined1 *)0x0;
    param_1[0x20] = 0;
  }
  else if (puVar4 == (undefined1 *)0x0) {
    fn_006c236c();
    (**(code **)(*param_1 + 0x1c))(param_1,local_30);
    iVar1 = param_1[0x15];
    uVar2 = fn_0068c7e8(DAT_008977e8);
    fn_0023e574(uVar2,iVar1);
    uVar2 = fn_0068c7e8(DAT_008977e8);
    fn_0023e6a8(uVar2,iVar1);
    iVar1 = fn_0025ff70(param_1);
    iVar6 = 0;
    if (iVar1 != 0) {
      fn_0026009c(param_1,iVar1,1);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x19,iVar3 + 8,param_1 + 2);
      fn_002605fc(param_1,1);
      *(undefined1 *)(param_1 + 0x22) = 1;
      param_1[0x1f] = iVar6;
      *(undefined1 *)(param_1 + 0x1e) = 0xff;
      puVar4 = (undefined1 *)fn_006a2230(iVar1,param_1);
      return puVar4;
    }
    iVar1 = fn_0068cafc(DAT_008977e8);
    param_1[0x1f] = (int)((float)param_1[0x1f] + *(float *)(iVar1 + 0x200));
    puVar4 = (undefined1 *)(uint)DAT_00896cb0;
    if (((DAT_00896cb0 & 1) == 0) &&
       (iVar1 = fn_00303afc(&DAT_00896cb0), puVar4 = (undefined1 *)0x0, iVar1 != 0)) {
      fVar5 = 360.0;
      fn_0017fe34();
      puVar4 = &DAT_00896cb0;
      DAT_00896cb4 = fVar5;
    }
    if (DAT_00896cb4 <= (float)param_1[0x1f]) {
      param_1[0x1f] = iVar6;
    }
    return puVar4;
  }
  return puVar4;
}



undefined4 fn_0034ee4c(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  float local_20;
  float local_1c;
  float local_18;
  
  param_1[0x21] = param_3;
  param_1[0x16] = param_2;
  fn_0026009c(param_1,param_2,1);
  iVar1 = param_4[1];
  iVar2 = param_4[2];
  param_1[0x23] = *param_4;
  param_1[0x24] = iVar1;
  param_1[0x25] = iVar2;
  iVar1 = fn_0068cafc(DAT_008977e8);
  iVar1 = *(int *)(iVar1 + 0x1fc);
  param_1[0x12] = iVar1;
  param_1[0xf] = 0;
  param_1[0x10] = iVar1;
  param_1[0x11] = 0;
  iVar1 = param_1[0x16];
  local_20 = *(float *)(iVar1 + 8) + (float)param_1[0x23];
  local_1c = *(float *)(iVar1 + 0xc) + (float)param_1[0x24];
  local_18 = *(float *)(iVar1 + 0x10) + (float)param_1[0x25];
  (**(code **)(*param_1 + 0x18))(param_1,&local_20);
  (**(code **)(*param_1 + 0x24))(param_1,param_2 + 0x20);
  fn_00260640(param_1,0xa037);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return 1;
}



void fn_0034ee1c(int param_1)

{
  fn_002605fc(param_1,1);
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0xff;
  return;
}



void fn_0034ec70(undefined4 *param_1)

{
  *param_1 = &DAT_00826288;
  fn_00260014(param_1,1);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}



void fn_0034ec20(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if ((char)param_1[0x1f] == '\0') {
    return;
  }
  fn_001cc890(param_1);
  iVar1 = fn_0068cafc(DAT_008977e8);
  (**(code **)(*param_1 + 0x1c))(param_1,param_1[0x16] + 8);
  iVar2 = param_1[0x15];
  uVar3 = fn_0068c7e8(DAT_008977e8);
  iVar4 = fn_006b4cd0(uVar3,iVar2);
  if (iVar4 == 0) {
    uVar3 = fn_0068c7e8(DAT_008977e8);
    fn_0023e574(uVar3,iVar2);
  }
  fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b6bc4();
  uVar6 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b71a8(uVar3,uVar6 & 0xff);
      iVar5 = fn_0026005c(param_1,iVar4);
      if ((iVar5 == 0) && (iVar5 = fn_006a8a84(param_1,iVar4 + 0x3c,iVar4 + 8,1), iVar5 != 0)) {
        fn_0026009c(param_1,iVar4,1);
        fn_006a2100(iVar4,param_1);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
  }
  iVar2 = param_1[0x1e];
  param_1[0x1e] = iVar2 + 1;
  if (iVar2 + 1 == 2) {
    fn_002605fc(param_1,0);
  }
  if (*(int *)(iVar1 + 0x1d0) <= param_1[0x1e]) {
    fn_00260088(param_1);
    uVar3 = fn_0014481c(DAT_008977e8);
    fn_002625d0(uVar3,param_1);
    *(undefined1 *)(param_1 + 0x1f) = 0;
    param_1[0x1e] = 0;
  }
  return;
}



undefined4 fn_0034eb58(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[0x16] = param_2;
  iVar1 = fn_0068cafc(DAT_008977e8);
  param_1[0x12] = *(int *)(iVar1 + 0x1d4);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  (**(code **)(*param_1 + 0x18))(param_1,param_2 + 8);
  (**(code **)(*param_1 + 0x24))(param_1,param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x1f) = 1;
  param_1[0x1e] = 0;
  fn_0026009c(param_1,param_2,1);
  fn_00260640(param_1,0xa038);
  iVar1 = param_1[0x15];
  uVar2 = fn_0068c7e8(DAT_008977e8);
  fn_0023dd30(uVar2,iVar1);
  return 1;
}



void fn_0034e984(undefined4 *param_1)

{
  *param_1 = &DAT_00826210;
  param_1[0x20] = 0;
  fn_005ee43c(param_1[5],0);
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



void fn_0034e800(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar1 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
    if (1 < iVar1) {
      fn_005ee704(*(undefined4 *)(param_1 + 0x14),iVar1 + -1);
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
    fVar2 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x24),(byte)(in_fpscr >> 0x16) & 3)
    ;
    *(int *)(param_1 + 0x24) = (int)(fVar2 + *(float *)(param_1 + 0x1c));
  }
  return;
}



int fn_0034e710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = fn_002ff600(0xac);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_0034e86c();
  }
  iVar2 = fn_00145b00(0x4c,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_005ee778();
  }
  piVar5 = *(int **)(iVar1 + 0x14);
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(iVar1 + 0x14) = piVar3;
  }
  uVar4 = fn_001287b4();
  fn_005ee114(*(undefined4 *)(iVar1 + 0x14),param_3,*(undefined4 *)(param_5 + 0x24),uVar4);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  fn_005ed86c(*(undefined4 *)(iVar1 + 0x14),param_4,param_1,param_2,&local_2c,0,0);
  *(int *)(iVar1 + 0x80) = param_5;
  return iVar1;
}



undefined4 * fn_0034e86c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar6 = (undefined4 *)fn_00210704();
  puVar6[4] = 0;
  *puVar6 = &DAT_00826210;
  uVar9 = 0x3f800000;
  puVar6[5] = 0;
  puVar6[6] = 0x3f800000;
  puVar6[7] = 0x3f800000;
  puVar6[8] = 0;
  puVar6[9] = 1;
  *(undefined1 *)(puVar6 + 10) = 0;
  *(undefined1 *)((int)puVar6 + 0x29) = 0;
  *(undefined1 *)((int)puVar6 + 0x2a) = 0;
  puVar6[0xb] = 0;
  *(undefined1 *)(puVar6 + 0x1b) = 0;
  puVar6[0x1f] = 0xffffffff;
  uVar8 = 0;
  puVar6[0x20] = 0;
  puVar6[0x22] = 0x3f800000;
  puVar6[0x23] = 0x3f800000;
  puVar6[0x24] = 0x3f800000;
  puVar6[0x25] = 0;
  puVar6[0x26] = 0;
  puVar6[0x27] = 0;
  puVar6[0x28] = 0;
  puVar6[0x29] = 0;
  puVar6[0x2a] = 0;
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar7 = fn_00303afc(&DAT_008c6300), iVar7 != 0)) {
    DAT_008f9e38 = uVar9;
    DAT_008f9e3c = uVar8;
    DAT_008f9e40 = uVar8;
    DAT_008f9e44 = uVar8;
    DAT_008f9e48 = uVar8;
    DAT_008f9e4c = uVar9;
    DAT_008f9e50 = uVar8;
    DAT_008f9e54 = uVar8;
    DAT_008f9e58 = uVar8;
    DAT_008f9e5c = uVar8;
    DAT_008f9e60 = uVar9;
    DAT_008f9e64 = uVar8;
  }
  uVar5 = DAT_008f9e54;
  uVar4 = DAT_008f9e50;
  uVar3 = DAT_008f9e4c;
  uVar2 = DAT_008f9e48;
  uVar1 = DAT_008f9e44;
  uVar9 = DAT_008f9e40;
  uVar8 = DAT_008f9e3c;
  puVar6[0xc] = DAT_008f9e38;
  puVar6[0xd] = uVar8;
  puVar6[0xe] = uVar9;
  puVar6[0xf] = uVar1;
  puVar6[0x10] = uVar2;
  puVar6[0x11] = uVar3;
  puVar6[0x12] = uVar4;
  puVar6[0x13] = uVar5;
  uVar1 = DAT_008f9e64;
  uVar9 = DAT_008f9e60;
  uVar8 = DAT_008f9e5c;
  puVar6[0x14] = DAT_008f9e58;
  puVar6[0x15] = uVar8;
  puVar6[0x16] = uVar9;
  puVar6[0x17] = uVar1;
  return puVar6;
}


