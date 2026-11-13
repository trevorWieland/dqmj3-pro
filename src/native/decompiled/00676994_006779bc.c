#include "00676994_006779bc.h"



void fn_006779bc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *(undefined4 *)(param_1 + 0x68) = *param_2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  return;
}



void fn_006779a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}



void fn_00677330(undefined4 *param_1)

{
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_006772a0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  iVar1 = fn_0066eb80(DAT_00898840,5);
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
    fn_0066d1cc();
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  else if (iVar2 == 1) {
    if ((*(uint *)(iVar1 + 0x4c) & 4) != 0) {
      if (*(int *)(iVar1 + 0x70) == -0x134) {
        *(uint *)(iVar1 + 0x4c) = *(uint *)(iVar1 + 0x4c) & 0xfffffffb;
      }
      *(undefined4 *)(param_1 + 0x44) = 2;
    }
  }
  else {
    bVar3 = iVar2 != 2;
  }
  return bVar3;
}



void fn_00677124(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [12];
  
  fn_0066e458(DAT_00898840,2,0);
  iVar1 = fn_0013d40c(auStack_2c);
  iVar1 = fn_0013d40c(iVar1 + 8);
  *(undefined4 *)(iVar1 + -0xc) = 0;
  fn_0013d438(iVar1 + -8,&DAT_008c6e4c);
  fn_0013d438(iVar1,&DAT_008c6e4c);
  local_30 = param_2;
  fn_00170fa4(auStack_2c,param_3);
  fn_00170fa4(auStack_24,param_4);
  fn_00678474(param_1[0x26],&local_30);
  (**(code **)(*param_1 + 0x18))(param_1,2);
  iVar1 = fn_00170f54(auStack_24);
  fn_00170f54(iVar1 + -8);
  return;
}



void fn_00677048(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x78,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NexCommandGatheringJoin_008c6f11);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    fn_00119b60();
    *(undefined4 *)(iVar2 + -0x4c) = &DAT_00859ab8;
    *(undefined4 *)(iVar2 + -0x4c) = &DAT_0085a1a8;
    iVar2 = fn_0013d40c(iVar2 + 0x1c);
    iVar2 = fn_0013d40c(iVar2 + 8);
    *(undefined4 *)(iVar2 + -0xc) = 0;
    fn_0013d438(iVar2 + -8,&DAT_008c6e4c);
    fn_0013d438(iVar2,&DAT_008c6e4c);
    iVar2 = iVar2 + -0x70;
    fn_00678444(iVar2);
  }
  *(int *)(param_1 + 0x98) = iVar2;
  return;
}



void fn_00676eec(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x70,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NexCommandGatheringEnd_008c6ecb);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60(puVar1);
    *puVar1 = &DAT_00859ab8;
    *puVar1 = &DAT_0085a0d0;
    iVar2 = fn_0013d40c(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + -4) = 0;
    fn_0013d438(iVar2,&DAT_008c6e36);
    iVar2 = iVar2 + -0x68;
    fn_00677a50(iVar2);
  }
  *(int *)(param_1 + 0x98) = iVar2;
  return;
}



void fn_00676e40(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined1 auStack_1c [12];
  
  fn_0066e458(DAT_00898840,2,0);
  iVar1 = fn_0013d40c(auStack_1c);
  *(undefined4 *)(iVar1 + -4) = 0;
  fn_0013d438(iVar1,&DAT_008c6e36);
  local_20 = param_2;
  fn_00170fa4(auStack_1c,param_3);
  fn_00677a68(param_1[0x26],&local_20);
  (**(code **)(*param_1 + 0x18))(param_1,2);
  fn_00170f54(auStack_1c);
  return;
}



bool fn_00676d78(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) != 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,3);
  }
  return bVar1;
}



undefined4 fn_00676c40(int *param_1)

{
  int iVar1;
  uint local_28 [6];
  
  fn_00673cb8();
  iVar1 = param_1[0x11];
  if (iVar1 == 1) {
    iVar1 = fn_00676818(param_1);
  }
  else {
    if (iVar1 == 2) {
      if (param_1[0x12] != 0) {
        return 1;
      }
      iVar1 = fn_00673be8(param_1);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x30))(param_1,0);
        return 1;
      }
      return 1;
    }
    if (iVar1 != 3) {
      iVar1 = fn_001296d0(DAT_00898840);
      if (iVar1 != 0) {
        return 1;
      }
      if (DAT_008bf4d4 == 0) {
        return 1;
      }
      local_28[0] = *(uint *)(DAT_008bf4d4 + 0x38);
      if ((local_28[0] & 0x80000000) == 0) {
        return 1;
      }
      iVar1 = fn_004daa68(local_28);
      param_1[0x36] = 0;
      *(undefined1 *)(param_1 + 0x37) = 0;
      param_1[0x35] = iVar1;
      param_1[0x36] = (uint)(iVar1 != 0);
      *(undefined1 *)(param_1 + 0x37) = 1;
      goto LAB_00676ce0;
    }
    iVar1 = fn_006766f4(param_1);
  }
  if (iVar1 == 0) {
    return 1;
  }
LAB_00676ce0:
  fn_00119b40(local_28);
  (**(code **)(*param_1 + 0x24))(param_1,local_28);
  fn_0066e870(DAT_00898840,local_28);
  return 1;
}



undefined4 fn_00676bfc(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    fn_00673b84(param_1);
    (**(code **)(*param_1 + 0x30))(param_1,2);
  }
  return 1;
}



undefined4 fn_00676994(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_00898840;
  if (*(int *)(DAT_00898840 + 0x34) == 2) {
    iVar2 = fn_0066eb80(DAT_00898840,6);
    *(int *)(param_1 + 0x6c) = iVar2 + 0x6c;
  }
  else if (*(int *)(DAT_00898840 + 0x34) == 1) {
    iVar2 = fn_0066eb80(DAT_00898840,8);
    *(int *)(param_1 + 0x6c) = iVar2 + 0x6c;
  }
  uVar3 = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(param_1 + 0x78) = 0x20;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = 0x10;
  if (*(char *)(iVar1 + 0x3c) == '\0') {
    *(undefined4 *)(param_1 + 0x7c) = 5;
  }
  uVar3 = fn_0050823c();
  fn_00508070(uVar3);
  fn_0051d58c(param_1 + 0x6c);
  iVar2 = DAT_008bf4d4;
  if (*(char *)(iVar1 + 0x3c) == '\0') {
    iVar5 = DAT_008bf4d4 + 0x10;
    if (*(char *)(DAT_008bf4d4 + 0x28) == '\0') {
      iVar4 = fn_0050c68c(iVar5,0x20);
      uVar3 = 0;
      if (iVar4 != 0) {
        uVar3 = fn_005147fc();
      }
      DAT_00898874 = fn_0050c920(iVar5,uVar3,0x20000000);
    }
    else {
      DAT_00898874 = 0;
    }
    uVar3 = fn_0050c6d8(iVar2 + 0x10,DAT_00898874,0x2000);
    fn_00513fd8(uVar3,0x20);
    if (*(char *)(iVar2 + 0x28) == '\0') {
      iVar5 = fn_0050c68c(iVar2 + 0x10,0x24);
      uVar3 = 0;
      if (iVar5 != 0) {
        uVar3 = fn_0050eadc();
      }
      DAT_00898878 = fn_0050c920(iVar2 + 0x10,uVar3,0x30000000);
    }
    else {
      DAT_00898878 = 0;
    }
    uVar3 = fn_0050c6d8(iVar2 + 0x10,DAT_00898878,0x3000);
    fn_0050e420(uVar3,0x40);
  }
  fn_0051cd8c();
  uVar3 = DAT_008bf4d0;
  if (*(char *)(iVar1 + 0x3c) == '\0') {
    fn_00514ec0(DAT_008bf4d0,8);
    fn_00514ee8(uVar3,5);
    fn_00514ed4(uVar3,8);
    fn_00514ef4(uVar3,5);
  }
  return 0;
}


