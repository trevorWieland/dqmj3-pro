#include "004b2b88_004b66f8.h"



void fn_004b66f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0014f1e0();
  *puVar1 = &DAT_00855aa4;
  iVar2 = fn_004b5404(puVar1 + 3,param_2);
  *(undefined4 *)(iVar2 + 0x20) = param_3;
  *(undefined4 *)(iVar2 + 0x24) = param_4;
  iVar2 = fn_004b31c4(iVar2 + 0x28,param_5);
  iVar2 = fn_004b9b4c(iVar2 + 0x1c,param_6);
  *(undefined1 *)(iVar2 + -0x47) = 1;
  return;
}



void fn_004b5e9c(void)

{
  fn_004b6080();
  return;
}



undefined4 * fn_004b5afc(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 extraout_r1;
  
  *param_1 = &DAT_00855a48;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  puVar1 = (undefined4 *)fn_0015ece0(0x3c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[1] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    *(undefined1 *)((int)puVar1 + 0x1d) = extraout_r1;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    piVar2 = (int *)fn_0015ece0(0xc);
    iVar3 = fn_0015ece0(0x680);
    piVar2[2] = iVar3;
    *piVar2 = puVar1[1];
    piVar2[1] = 0x20;
    puVar1[1] = piVar2;
    puVar4 = (undefined1 *)piVar2[2];
    puVar1[3] = puVar4;
    puVar1[4] = puVar4 + 0x680;
    puVar1[3] = puVar4 + 0x34;
    *(undefined4 *)(puVar4 + 8) = 0;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    *puVar4 = 0;
    puVar1[5] = puVar4;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)(puVar1[5] + 8) = puVar1[5];
    iVar3 = puVar1[5];
    *(int *)(iVar3 + 0xc) = iVar3;
    puVar1[8] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *(undefined1 *)(puVar1 + 0xe) = 0;
    *(char *)((int)puVar1 + 0x39) = (char)iVar3;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    piVar2 = (int *)fn_0015ece0(0xc);
    iVar3 = fn_0015ece0(0x680);
    piVar2[2] = iVar3;
    *piVar2 = puVar1[8];
    piVar2[1] = 0x20;
    puVar1[8] = piVar2;
    puVar4 = (undefined1 *)piVar2[2];
    puVar1[10] = puVar4;
    puVar1[0xb] = puVar4 + 0x680;
    puVar1[10] = puVar4 + 0x34;
    *(undefined4 *)(puVar4 + 8) = 0;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    *puVar4 = 0;
    puVar1[0xc] = puVar4;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)(puVar1[0xc] + 8) = puVar1[0xc];
    *(undefined4 *)(puVar1[0xc] + 0xc) = puVar1[0xc];
  }
  param_1[2] = puVar1;
  iVar3 = fn_0015ece0(0xb8);
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar5 = fn_0046ad80();
  }
  param_1[3] = uVar5;
  return param_1;
}



void fn_004b5780(undefined4 *param_1)

{
  *param_1 = &DAT_00855a28;
  param_1[2] = &DAT_008527c0;
  return;
}



void fn_004b4218(void)

{
  fn_0013d0fc();
  return;
}



void fn_004b3fa8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_28;
  int local_24;
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [4];
  
  *param_1 = &DAT_008559c0;
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_0047a2ec(*(undefined4 *)(param_1[5] + 0x44));
  (**(code **)(*piVar3 + 0xc))(piVar3);
  fn_0047a130(auStack_20,param_1[5],0xffffffff);
  fn_004bd41c(param_1[3],60000,1);
  fn_0048f740(*(undefined4 *)(param_1[5] + 0x44),param_1[4]);
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  (**(code **)(DAT_008e778c + 8))();
  DAT_008b63e8 = DAT_008b63e8 + -1;
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  (**(code **)(DAT_008e932c + 8))();
  if (DAT_008b63dc != 0) {
    local_24 = *(int *)(DAT_008b63dc + 0x120);
    local_28 = *(undefined4 *)(local_24 + 8);
    fn_0076ac08(auStack_14,DAT_008b63dc + 0x110,&local_28,&local_24);
  }
  (**(code **)(DAT_008e932c + 0xc))(&DAT_008e932c);
  param_1[0x13] = &PTR_LAB_008533fc;
  param_1[0x14] = &DAT_0085319c;
  iVar2 = fn_00474f88(param_1 + 7);
  *(undefined **)(iVar2 + -0x1c) = &DAT_00853740;
  *(undefined4 *)(iVar2 + -0x18) = 0;
  return;
}



undefined4 * fn_004b3438(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)fn_0046e6d0(param_1,1);
  *puVar1 = &DAT_00855910;
  if (param_2 == 0) {
    return puVar1;
  }
  *(short *)(puVar1 + 8) = (short)param_2;
  iVar2 = fn_0015ecdc(0x44);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_004b3438(iVar2,0);
  }
  uVar3 = 0;
  if (DAT_008b637e != '\0') {
    uVar3 = fn_0074cbe4(DAT_008b63d8);
  }
  if (uVar3 == 0) {
    puVar4 = &DAT_008e76a0;
LAB_004b34fc:
    iVar5 = puVar4[0xd];
    iVar2 = 0;
    if (iVar5 == 0) goto LAB_004b34e4;
  }
  else {
    if (uVar3 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2)) {
      puVar4 = *(undefined4 **)(*DAT_008e76e4 + uVar3 * 4);
      goto LAB_004b34fc;
    }
    fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                 ,0x48,0xe0000003,0);
    iVar5 = -1;
  }
  iVar2 = *(int *)(iVar5 + 0xc);
LAB_004b34e4:
  fn_0047f194(*(undefined4 *)(iVar2 + 0xc),param_2,uVar6);
  return puVar1;
}



void fn_004b2f04(undefined4 param_1)

{
  fn_004b301c(param_1,5);
  return;
}



void fn_004b2e68(int param_1,undefined4 param_2)

{
  fn_004b301c(param_1,1);
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



int fn_004b2d5c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &DAT_008557ec;
  iVar1 = fn_0046f0bc(param_1 + 0x10);
  iVar1 = fn_00170f54(iVar1 + -0x14);
  iVar1 = fn_00170f54(iVar1 + -8);
  iVar1 = fn_00170f54(iVar1 + -8);
  iVar1 = fn_00170f54(iVar1 + -8);
  puVar3 = *(undefined4 **)(iVar1 + -8);
  for (puVar2 = *(undefined4 **)(iVar1 + -0xc); puVar2 != puVar3; puVar2 = puVar2 + 2) {
    (**(code **)*puVar2)(puVar2);
  }
  fn_0014f1bc(*(int *)(iVar1 + -0xc));
  return iVar1 + -0x14;
}



void fn_004b2b88(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar5 = 0;
  if (cVar1 == '\0') {
    local_24[0] = 3;
    piVar2 = &local_28;
    if (3 < *(byte *)(param_2 + 4)) {
      piVar2 = (int *)local_24;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,*(byte *)(param_2 + 4));
    fn_0015ef4c(param_1,piVar2,1);
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_20 = 0;
    fn_0015ef4c(param_1,&local_20,4);
  }
  local_28 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 3;
  fn_0015ef4c(param_1,&local_28,4);
  iVar4 = *(int *)(param_2 + 0xc);
  for (iVar3 = *(int *)(param_2 + 8); iVar3 != iVar4; iVar3 = iVar3 + 8) {
    fn_0045f6f0(param_1,iVar3);
  }
  fn_0045f6f0(param_1,param_2 + 0x14);
  fn_0045f6f0(param_1,param_2 + 0x1c);
  fn_0045f6f0(param_1,param_2 + 0x24);
  fn_0045f6f0(param_1,param_2 + 0x2c);
  fn_00454d74(param_1,param_2 + 0x34);
  fn_00454d74(param_1,param_2 + 0x35);
  fn_00454d74(param_1,param_2 + 0x36);
  fn_0015ef4c(param_1,param_2 + 0x38,4);
  fn_0015ef4c(param_1,param_2 + 0x3c,2);
  if (cVar1 == '\0') {
    if ((*(char *)(param_2 + 4) != '\0') &&
       (fn_0048ceb8(param_1,param_2 + 0x40), 1 < *(byte *)(param_2 + 4))) {
      fn_00454d74(param_1,param_2 + 100);
      fn_00454d74(param_1,param_2 + 0x65);
      if (2 < *(byte *)(param_2 + 4)) {
        fn_0015ef4c(param_1,param_2 + 0x68,4);
      }
    }
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar5);
    local_28 = (iVar3 - iVar5) + -4;
    fn_0015ef4c(param_1,&local_28,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}


