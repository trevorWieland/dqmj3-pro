#include "001709d8_00176518.h"



void fn_00176518(char *param_1,undefined4 *param_2,int param_3)

{
  if (*param_1 != '\0') {
    *param_2 = 0xe40000;
    param_2[1] = 0x30100;
    param_2[2] = 0x1010000;
    param_2[3] = 0xf0101;
    param_2[4] = (uint)(byte)param_1[1];
    param_2[5] = 0xf0102;
    param_2 = param_2 + 6;
  }
  if (param_3 == 0) {
    return;
  }
  fn_00182f2c(*(int *)(param_1 + 4) + 0x7c,param_2,1);
  return;
}



void fn_0017649c(char *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == '\0') goto LAB_001764e4;
  if (param_1[1] == '\0') {
    if (param_1[2] == '\0') goto LAB_00176508;
  }
  else if ((param_1[1] == '\x01') && (param_1[2] == '\x01')) {
LAB_00176508:
    uVar1 = 2;
    goto LAB_001764e4;
  }
  uVar1 = 1;
LAB_001764e4:
  *param_2 = uVar1;
  param_2[1] = 0xf0040;
  if (param_3 == 0) {
    return;
  }
  fn_00182f2c(*(int *)(param_1 + 4) + 0x7c,param_2 + 2,1);
  return;
}



void fn_00176410(char *param_1,uint *param_2,int param_3)

{
  *param_2 = (uint)(*param_1 != '\0') | (uint)(byte)param_1[4] << 4 | (uint)(byte)param_1[1] << 8 |
             *(int *)(param_1 + 8) << 0x10 | *(int *)(param_1 + 0xc) << 0x18;
  param_2[1] = 0xf0105;
  param_2[2] = (uint)(byte)param_1[0x10] | (uint)(byte)param_1[0x11] << 4 |
               (uint)(byte)param_1[0x12] << 8;
  param_2[3] = 0xf0106;
  if (param_3 == 0) {
    return;
  }
  fn_00182f2c(*(int *)(param_1 + 0x14) + 0x7c,param_2 + 4,1);
  return;
}



void fn_0017591c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x10);
  return;
}



void fn_00175778(void)

{
  int iVar1;
  
  iVar1 = fn_00165020();
  if (iVar1 - 1U < 699) {
    fn_00163c9c(iVar1);
    return;
  }
  return;
}



void fn_001754f0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,2);
  return;
}



void fn_00174d30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84),param_3,param_4);
  if (iVar1 == 0) {
    return;
  }
  fn_001667c8(iVar1 + 0x48,param_2);
  return;
}



void fn_00174b40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84),param_3,param_4);
  if (iVar1 == 0) {
    return;
  }
  fn_001667c8(iVar1 + 0x38,param_2);
  return;
}



void fn_001739e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5)

{
  *param_1 = &DAT_00858ac8;
  *(undefined2 *)(param_1 + 1) = param_4;
  param_1[2] = param_5;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = param_2;
  param_1[0x14] = param_3;
  return;
}



void fn_001739c0(undefined4 *param_1,undefined4 param_2,undefined2 param_3)

{
  *param_1 = &DAT_00858a74;
  *(undefined2 *)(param_1 + 1) = param_3;
  param_1[3] = param_2;
  param_1[2] = 0;
  return;
}



void fn_00173580(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = fn_0017f118(param_1,param_4,param_2,param_5);
  }
  *(undefined1 *)(iVar1 + 0x44) = 0;
  *(int *)(iVar1 + 8) = param_1 + 0x48;
  *(undefined4 *)(iVar1 + 0x10) = param_3;
  return;
}



void fn_0017348c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)fn_0017eca4();
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = 0;
  puVar1[0x11] = &DAT_00858430;
  puVar1[0x14] = &DAT_00858444;
  *puVar1 = &DAT_008583fc;
  puVar1[0x16] = 0;
  *(undefined2 *)((int)puVar1 + 0x7a) = 0;
  *(undefined2 *)(puVar1 + 0x1f) = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 0x7f;
  *(undefined1 *)((int)puVar1 + 0x79) = 0x7f;
  iVar2 = fn_00101a1c(puVar1 + 0x3d,&LAB_0017e740,0x10,4);
  iVar2 = fn_00101a1c(iVar2 + 0x40,&LAB_0017e72c,0xc,4);
  *(undefined1 *)(iVar2 + 0x31) = 0;
  *(undefined1 *)(iVar2 + 0x32) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x54) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  iVar2 = fn_00101a1c(iVar2 + 0x5c,&LAB_00172f3c,8,4);
  iVar4 = 0;
  iVar3 = 0;
  do {
    iVar5 = iVar4 + 1;
    iVar3 = iVar3 + 2;
    *(undefined4 *)(iVar2 + -400 + iVar4 * 4 + 0x90) = 0;
    iVar4 = iVar4 + 2;
    *(undefined4 *)(iVar2 + -400 + iVar5 * 4 + 0x90) = 0;
  } while (iVar3 < 0x10);
  return;
}



void fn_00172be0(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5
                 ,undefined1 *param_6)

{
  int iVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *piStack_44;
  undefined1 local_24;
  undefined1 local_23;
  
  iVar1 = (**(code **)(*param_3 + 0xc))(param_3,0x626c7974,param_2,0);
  if (iVar1 != 0) {
    local_60 = 0x3f800000;
    local_5c = 0x3f800000;
    uStack_58 = 0;
    local_54 = 0;
    local_48 = 0;
    local_24 = *param_6;
    local_23 = param_6[1];
    local_50 = param_4;
    local_4c = param_5;
    piStack_44 = param_1;
    (**(code **)(*param_1 + 0x38))(param_1,iVar1,param_3,&local_60,0);
  }
  return;
}



void fn_00171ca8(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



void fn_00170e68(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (DAT_008b637e == '\0') {
    uVar4 = 0;
  }
  else {
    puVar1 = (undefined4 *)fn_001775e8(DAT_008b63d8,param_2,param_3);
    uVar4 = *puVar1;
  }
  iVar2 = fn_00170de0(&DAT_008e769c,0xe,uVar4);
  if (iVar2 != 0) {
    if (DAT_008b637e != '\0') {
      fn_001775e8(DAT_008b63d8);
    }
    iVar2 = fn_00170de0(&DAT_008e769c,0xe);
    uVar3 = 0;
    if (*(int *)(iVar2 + 0x38) != 0) {
      uVar3 = *(uint *)(*(int *)(iVar2 + 0x38) + 8);
    }
    if (param_2 <= uVar3) goto LAB_00170ef4;
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfb;
LAB_00170ef4:
  if ((*(byte *)(param_1 + 0x1c) & 4) != 0) {
    if (DAT_008b637e != '\0') {
      fn_001775e8(DAT_008b63d8);
    }
    iVar2 = fn_00170de0(&DAT_008e769c,0xe);
    if (*(code **)(iVar2 + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00170f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 0x14))(param_2);
      return;
    }
  }
  fn_0015ece0(param_2);
  return;
}



void fn_001709d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  fn_00170b84(param_1 + 0x18,param_4);
  fn_00170b94(param_1 + 0x18,param_5);
  fn_00170c2c(param_1 + 0x18,param_6);
  iVar1 = fn_00170a3c(param_1 + 0x18,param_2,param_3);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  return;
}


