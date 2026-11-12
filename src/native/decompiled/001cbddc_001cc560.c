#include "001cbddc_001cc560.h"



int fn_001cc560(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0068c7e8(DAT_008977e8);
  iVar2 = fn_0023de00(uVar1,param_2);
  if (iVar2 != -1 && param_3 != 0) {
    uVar1 = fn_0068c7e8(DAT_008977e8);
    fn_002ee5ac(uVar1,iVar2);
  }
  return iVar2;
}



uint fn_001cc480(int *param_1,float *param_2,undefined4 param_3,undefined1 param_4)

{
  uint uVar1;
  undefined4 local_48;
  int *piStack_44;
  float *local_40;
  int *piStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  float local_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_1c = *param_2 - (float)param_1[2];
  local_18 = param_2[1] - (float)param_1[3];
  local_14 = param_2[2] - (float)param_1[4];
  local_28 = *param_2;
  fStack_24 = param_2[1];
  fStack_20 = param_2[2];
  local_34 = 0;
  local_30 = 0;
  local_2b = 1;
  piStack_44 = param_1 + 2;
  local_2a = 1;
  piStack_3c = param_1 + 0xf;
  local_38 = 1;
  local_40 = &local_1c;
  local_48 = param_3;
  local_2c = param_4;
  uVar1 = fn_0023a7f4(&local_48,0,&local_28,0,0);
  (**(code **)(*param_1 + 0x1c))(param_1,&local_28);
  *(char *)(param_1 + 0x14) = (char)((uVar1 & 7) >> 2);
  *(char *)((int)param_1 + 0x51) = (char)((uVar1 & 3) >> 1);
  return uVar1;
}



undefined4 * fn_001cc33c(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)fn_00145b00(0x3c,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0xa8c;
    puVar1[3] = 0xffffffff;
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1[9] = 1;
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined1 *)((int)puVar1 + 0x29) = 1;
    *(undefined1 *)((int)puVar1 + 0x2a) = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *(undefined1 *)(puVar1 + 0xe) = 0;
    *(undefined2 *)((int)puVar1 + 0x12) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)(puVar1 + 7) = 0;
    *(undefined2 *)((int)puVar1 + 0x16) = 0;
    *(undefined2 *)((int)puVar1 + 0x1e) = 0;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    iVar2 = fn_00145b00(0x48,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)fn_0024c668(iVar2,param_1,param_3);
    }
    piVar4 = (int *)puVar1[0xb];
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      puVar1[0xb] = piVar3;
    }
    *(undefined1 *)(puVar1[0xb] + 0x40) = param_2;
    iVar2 = fn_00145b00(0x2c,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)fn_0030fe48(iVar2,param_1);
    }
    piVar4 = (int *)puVar1[0xc];
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      puVar1[0xc] = piVar3;
    }
  }
  *param_1 = puVar1;
  return param_1;
}



void fn_001cc2a8(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_18 [2];
  
  iVar4 = *param_1;
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b70fc(uVar1,param_2,0);
  if ((*(char *)(iVar4 + 0x22) == '\x01') || (*(char *)(iVar4 + 0x28) != '\0')) {
    iVar4 = iVar4 + iVar2 * 2;
    local_18[1] = 0;
    local_18[0] = *(short *)(iVar4 + 0x1a) - param_3;
    piVar3 = local_18 + 1;
    if (-1 < local_18[0]) {
      piVar3 = local_18;
    }
    *(short *)(iVar4 + 0x1a) = (short)*piVar3;
  }
  return;
}



void fn_001cc250(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_c [2];
  
  iVar1 = *param_1;
  if ((*(char *)(iVar1 + 0x22) == '\x01') || (*(char *)(iVar1 + 0x28) != '\0')) {
    iVar1 = iVar1 + param_2 * 2;
    local_c[0] = *(short *)(iVar1 + 0x1a) - param_3;
    piVar2 = local_c + 1;
    if (-1 < local_c[0]) {
      piVar2 = local_c;
    }
    local_c[1] = 0;
    *(short *)(iVar1 + 0x1a) = (short)*piVar2;
  }
  return;
}



void fn_001cc1e4(int *param_1,undefined4 param_2,short param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b70fc(uVar1,param_2,0);
  if ((*(char *)(iVar3 + 0x22) == '\x01') || (*(char *)(iVar3 + 0x28) != '\0')) {
    iVar2 = iVar3 + iVar2 * 2;
    if (*(char *)(*(int *)(iVar3 + 0x2c) + 8) == '\x03') {
      param_3 = param_3 << 1;
    }
    *(short *)(iVar2 + 0x1a) = *(short *)(iVar2 + 0x1a) + param_3;
  }
  return;
}



void fn_001cc158(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  float fVar6;
  
  puVar4 = (uint *)*param_1;
  if (*(char *)((int)puVar4 + 0x22) != '\x01') {
    return;
  }
  if (*(byte *)((int)puVar4 + 0x23) - 3 < 6) {
    uVar2 = *puVar4;
    if (8999 < uVar2) goto LAB_001cc1a8;
  }
  else {
    uVar2 = *puVar4;
    if ((int)puVar4[2] <= (int)uVar2) goto LAB_001cc1a8;
  }
  *puVar4 = uVar2 + 1;
LAB_001cc1a8:
  puVar4[1] = puVar4[1] + 1;
  if (puVar4[0xb] != 0) {
    fn_0024c44c();
  }
  bVar5 = *(char *)((int)puVar4 + 0x29) != '\0';
  uVar2 = 0;
  if (bVar5) {
    uVar2 = puVar4[0xc];
  }
  if (!bVar5 || uVar2 == 0) {
    return;
  }
  iVar3 = *(int *)(uVar2 + 0x18) + -1;
  *(int *)(uVar2 + 0x18) = iVar3;
  if (iVar3 < 0) {
    *(undefined4 *)(uVar2 + 0x18) = 0;
  }
  if (*(char *)(uVar2 + 8) == '\0') {
    fn_0030fb10(uVar2);
  }
  else if ((*(char *)(uVar2 + 8) == '\x01') &&
          (fVar6 = *(float *)(uVar2 + 0x24) + -30.0, *(float *)(uVar2 + 0x24) = fVar6,
          (int)fVar6 < 0x44598000)) {
    *(undefined4 *)(uVar2 + 0x24) = 0x44598000;
    fn_0068e960(DAT_008977e8);
    fn_00664c58();
    fn_0068e960(DAT_008977e8);
    fn_0017fd40();
    *(undefined1 *)(uVar2 + 10) = 0;
  }
  cVar1 = *(char *)(uVar2 + 8);
  *(int *)(uVar2 + 0xc) = *(int *)(uVar2 + 0xc) + 1;
  *(char *)(uVar2 + 9) = cVar1;
  *(char *)(uVar2 + 8) = *(char *)(uVar2 + 10);
  if (cVar1 == *(char *)(uVar2 + 10)) {
    *(int *)(uVar2 + 0x10) = *(int *)(uVar2 + 0x10) + 1;
  }
  else {
    *(undefined4 *)(uVar2 + 0x10) = 0;
  }
  return;
}



void fn_001cc0e0(int *param_1,int param_2)

{
  *(int *)*param_1 = ((int *)*param_1)[2] - param_2;
  return;
}



undefined4 * fn_001cbfb8(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_005f40b4(param_1,1);
  *puVar1 = &DAT_0081bccc;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0x3f800000;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0x3f800000;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0x42700000;
  puVar1[0xf] = 0x42700000;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0x41a00000;
  puVar1[0x12] = 0xc2340000;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0x41800000;
  puVar1[0x15] = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0033ce74();
  }
  puVar1[0x17] = uVar3;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  *(undefined1 *)((int)puVar1 + 0x61) = 0;
  *(undefined1 *)((int)puVar1 + 0x62) = 1;
  return puVar1;
}



void fn_001cbddc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined1 local_20 [20];
  
  if (*(char *)(param_1 + 0x62) != '\0') {
    fn_0068e960(DAT_008977e8);
    uVar1 = fn_00664c64();
    fn_00239a54(uVar1,param_1 + 0x14,param_1 + 0x2c,param_1 + 0x40,param_1 + 0x4c,param_1 + 0x14,
                 param_1 + 0x2c,0,1,1);
  }
  fn_001c4248(param_1 + 8,param_1 + 0x14);
  fn_001c4248(param_1 + 0x20,param_1 + 0x2c);
  fn_0033cd5c(*(undefined4 *)(param_1 + 0x5c));
  *(float *)(param_1 + 0xc) =
       *(float *)(*(int *)(param_1 + 0x5c) + 0x14) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x24) =
       *(float *)(*(int *)(param_1 + 0x5c) + 0x14) + *(float *)(param_1 + 0x24);
  iVar2 = fn_00176d68(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar2 + 0x68) = uVar1;
  *(undefined4 *)(iVar2 + 0x78) = uVar3;
  *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x800;
  uVar1 = fn_00176d68(param_1);
  fn_005456f4(uVar1,param_1 + 0x20);
  fVar5 = *(float *)(param_1 + 0x38);
  fVar4 = *(float *)(param_1 + 0x3c) - fVar5;
  if ((int)ABS(fVar4) < 0x3f800000) {
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x3c);
  }
  else {
    if (0.0 < fVar4) {
      fVar5 = fVar5 + 1.0;
    }
    else {
      fVar5 = fVar5 - 1.0;
    }
    *(float *)(param_1 + 0x38) = fVar5;
  }
  uVar1 = fn_00176d68(param_1);
  fn_006dcca4(uVar1,0,local_20,0,0);
  fn_0017fe34();
  fn_00176d68(param_1);
  fn_00545310();
  iVar2 = fn_00176d68(param_1);
  *(undefined4 *)(iVar2 + 0x294) = 0x37e2b819;
  return;
}


