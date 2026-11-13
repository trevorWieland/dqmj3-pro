#include "004a0738_004a0f08.h"



void fn_004a0f08(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &DAT_00854aec;
  puVar2 = (undefined4 *)0x0;
  if (*(char *)(param_1 + 0x26) != '\0') {
    puVar2 = param_1 + 0x27;
  }
  iVar1 = fn_0046e758(param_1 + 0x27,puVar2);
  fn_004823bc(iVar1 + -0x9c);
  return;
}



int fn_004a0ebc(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00482168();
  *puVar1 = &DAT_00854aec;
  *(undefined1 *)(puVar1 + 0x26) = 0;
  iVar2 = fn_004b1cb0(puVar1 + 0x27);
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined2 *)(iVar2 + 0x20) = 0x6d;
  return iVar2 + -0x9c;
}



undefined4 fn_004a0e84(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0046b2bc();
  *(undefined1 *)(param_1 + 0x98) = 0;
  return uVar1;
}



void fn_004a0c9c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_3;
  uStack_8 = param_4;
  fn_004afc70(param_1 + 0x9c,param_2,param_5,&uStack_c,param_4,param_1,param_2);
  return;
}



void fn_004a0c78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_3;
  uStack_8 = param_4;
  fn_004af3c4(param_1 + 0x9c,param_2,param_5,&uStack_c,param_4,param_1,param_2);
  return;
}



void fn_004a0bcc(int param_1)

{
  fn_004aed18(param_1 + 0x9c);
  return;
}



void fn_004a0ba8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_3;
  uStack_8 = param_4;
  fn_004aebb0(param_1 + 0x9c,param_2,&uStack_c,param_4,param_5,param_1,param_2);
  return;
}



void fn_004a0b70(int param_1)

{
  fn_004af6a8(param_1 + 0x9c);
  return;
}



void fn_004a0b58(int param_1)

{
  fn_004af538(param_1 + 0x9c);
  return;
}



void fn_004a0b10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 local_2c [4];
  undefined2 local_28 [4];
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_28[0] = 1;
  local_2c[0] = 0;
  iStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  fn_004af84c(param_1 + 0x9c,param_2,&uStack_18,param_5,local_2c,param_4,local_28);
  return;
}



void fn_004a0af8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_3;
  fn_004af11c(param_1 + 0x9c,param_2,auStack_8,param_4,param_1,param_2);
  return;
}



void fn_004a0ae0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_3;
  fn_004aefd4(param_1 + 0x9c,param_2,auStack_8,param_4,param_1,param_2);
  return;
}



void fn_004a0abc(int param_1)

{
  fn_004b1984(param_1 + 0x9c);
  return;
}



void fn_004a0738(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *local_50;
  code *pcStack_4c;
  undefined4 uStack_48;
  undefined *puStack_44;
  undefined *local_40;
  code *pcStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined1 local_30 [4];
  undefined1 local_2c [12];
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  *(undefined4 *)(param_2 + 0x68) = param_3;
  *(int *)(param_2 + 0x6c) = param_4;
  fn_00170fa4(param_2 + 0x70,param_5);
  *(undefined4 *)(param_2 + 0x78) = param_7;
  fn_0013d438(param_6,L"normaltoken");
  if ((DAT_0089a958 == param_4) &&
     (iVar1 = fn_00147e6c(&DAT_008e6648,&DAT_007d8abc,0x40), iVar1 != 0)) {
    fn_004b63a4(*(undefined4 *)(param_2 + 0x78),&DAT_008e6648);
    pcStack_3c = fn_004a0a1c;
    uStack_38 = 0;
    local_40 = &DAT_00853500;
    puStack_34 = &DAT_007d8c58;
    fn_00479c98(param_2,&local_40);
    local_2c[0] = 1;
    fn_004b8d18(param_1,local_2c);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return;
  }
  pcStack_4c = fn_004a093c;
  uStack_48 = 0;
  local_50 = &DAT_00853500;
  puStack_44 = &DAT_007d8c58;
  fn_00479c98(param_2,&local_50);
  local_30[0] = 1;
  fn_004b8d18(param_1,local_30);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_004a0a1c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [12];
  undefined4 local_1c;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_c = 0x80010004;
    uVar2 = fn_004b8d4c(auStack_18,&local_c);
    fn_004a0898(param_1,uVar2);
    return;
  }
  local_1c = 0x10001;
  uVar2 = fn_004b8d4c(auStack_28,&local_1c);
  fn_004a0898(param_1,uVar2);
  return;
}



void fn_004a093c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [12];
  undefined4 local_10 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_10[0] = 0x80010004;
    uVar2 = fn_004b8d4c(auStack_1c,local_10);
    fn_004a0898(param_1,uVar2);
    return;
  }
  local_50 = 0;
  fn_00156234(param_1 + 0x70,&local_50);
  fn_004871fc(auStack_48,*(undefined4 *)(param_1 + 0x6c),local_50);
  fn_006d36d4(auStack_30,auStack_48);
  fn_00170fa4(*(undefined4 *)(param_1 + 0x78),auStack_30);
  fn_00170f54(auStack_30);
  fn_0014f2b0(auStack_48);
  fn_0014f4d8(local_50);
  DAT_0089a958 = *(undefined4 *)(param_1 + 0x6c);
  local_4c = 0x10001;
  uVar2 = fn_004b8d4c(auStack_28,&local_4c);
  fn_004a0898(param_1,uVar2);
  return;
}



void fn_004a0898(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    iVar2 = fn_006d3b8c(param_2);
    if (iVar2 == 0) {
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456044(iVar1,&local_20);
    }
    else {
      local_14 = 0;
      fn_00156234(*(undefined4 *)(param_1 + 0x78),&local_14);
      fn_001782b8(&DAT_008e6648,local_14,0x40);
      fn_0014f4d8(local_14);
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456074(iVar1,&local_20);
    }
  }
  fn_004b2f04(param_1);
  return;
}


