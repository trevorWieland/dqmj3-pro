#include "0049c62c_004a1938.h"



void fn_004a1938(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  if (DAT_008b63f8 == param_2) {
    DAT_008b63f8 = (int *)(**(code **)(*DAT_008b63f8 + 0x14))();
    (**(code **)(*param_2 + 0x18))(param_2,0);
    DAT_008b63fc = DAT_008b63fc + -1;
  }
  else {
    piVar3 = DAT_008b63f8;
    piVar4 = (int *)0x0;
    if (DAT_008b63f8 != (int *)0x0) {
      do {
        piVar1 = piVar3;
        if (piVar1 == param_2) {
          uVar2 = (**(code **)(*piVar1 + 0x14))();
          (**(code **)(*piVar4 + 0x18))(piVar4,uVar2);
          (**(code **)(*param_2 + 0x18))(param_2,0);
          DAT_008b63fc = DAT_008b63fc + -1;
          return;
        }
        piVar3 = (int *)(**(code **)(*piVar1 + 0x14))();
        piVar4 = piVar1;
      } while (piVar3 != (int *)0x0);
      return;
    }
  }
  return;
}



int fn_004a0db0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = fn_0046b240();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x98) == '\0')) {
    fn_0047ef28(param_1,param_1 + 0x9c);
    iVar2 = fn_0015ecdc(0xb0);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_0047e0b0();
    }
    iVar2 = fn_00482100(param_1,piVar3);
    if ((iVar2 == 0) && (piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    iVar2 = fn_0015ecdc(0x70);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_00124930();
    }
    iVar2 = fn_00482100(param_1,piVar3);
    if ((iVar2 == 0) && (piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(undefined1 *)(param_1 + 0x98) = 1;
  }
  return iVar1;
}



undefined8 fn_004a0be4(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  
  uVar3 = param_2;
  if ((param_1 != 0 || param_2 != 0) && (uVar3 = -param_1 - 1, param_2 < 0x4000)) {
    if ((param_1 == 0) || (DAT_008a646c == '\0')) {
      iVar2 = 0;
      uVar3 = 0;
    }
    else {
      local_10 = param_1;
      uVar3 = (**(code **)(*DAT_008a6470 + 0x14))(DAT_008a6470,&local_10,4);
      uVar3 = uVar3 >> 0x12;
      iVar2 = param_1;
    }
    uVar3 = uVar3 ^ param_2;
    if (iVar2 == param_1 && uVar3 == 0) {
      uVar1 = 1;
      goto LAB_004a0c64;
    }
  }
  uVar1 = 0;
LAB_004a0c64:
  return CONCAT44(uVar3,uVar1);
}



int fn_0049f8dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [16];
  
  puVar1 = (undefined4 *)fn_004b3044(param_1,2,auStack_34);
  *puVar1 = &PTR_FUN_00854a38;
  iVar2 = fn_0048cc04(puVar1 + 0x10,0);
  iVar2 = fn_0048cc04(iVar2 + 0x88,0);
  iVar2 = fn_004565fc(iVar2 + 0x78);
  *(undefined4 *)(iVar2 + 0x60) = param_2;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  piVar3 = (int *)fn_0015ece0(0xc);
  iVar4 = fn_0015ece0(0x7c);
  piVar3[2] = iVar4;
  *piVar3 = *(int *)(iVar2 + 0x68);
  piVar3[1] = 1;
  *(int *)(iVar2 + 0x68) = (int)piVar3;
  iVar4 = piVar3[2];
  *(int *)(iVar2 + 0x70) = iVar4;
  *(int *)(iVar2 + 0x74) = iVar4 + 0x7c;
  *(int *)(iVar2 + 0x78) = iVar4;
  *(int *)(iVar2 + 0x70) = iVar4 + 0x7c;
  *(int *)iVar4 = iVar4;
  *(int *)(*(int *)(iVar2 + 0x78) + 4) = *(int *)(iVar2 + 0x78);
  iVar2 = fn_0013ce04(iVar2 + 0x80);
  iVar2 = fn_004b8d6c(iVar2 + 0x68);
  iVar2 = fn_0013cd7c(iVar2 + 0xc,param_3);
  *(undefined4 *)(iVar2 + 0x68) = param_5;
  *(undefined4 *)(iVar2 + 0x6c) = param_6;
  *(undefined4 *)(iVar2 + 0x70) = *param_7;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined1 *)(iVar2 + -0x1fa) = 0;
  fn_004b41a8(&local_48,param_8);
  *(undefined4 *)(iVar2 + 0x74) = local_48;
  *(undefined4 *)(iVar2 + 0x78) = uStack_44;
  local_4c = 0x10001;
  uVar5 = fn_004b8d4c(auStack_40,&local_4c);
  fn_004b8d90(iVar2 + -0xc,uVar5);
  *(undefined4 *)(iVar2 + -0x17c) = 0;
  *(undefined4 *)(iVar2 + -0x178) = 0;
  *(undefined4 *)(iVar2 + -0x174) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + -0x90) = 0;
  if (*(int *)(iVar2 + 0x70) != 0) {
    *(int *)(*(int *)(iVar2 + 0x70) + 0x1b4) = iVar2 + -0x234;
  }
  return iVar2 + -0x234;
}



void fn_0049f588(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  do {
    switch(*(undefined1 *)(param_1 + 0x3a)) {
    case 0:
      fn_0049f680(param_1);
      *(undefined1 *)(param_1 + 0x3a) = 2;
      break;
    case 1:
      fn_0049f18c(param_1);
      break;
    case 2:
      bVar2 = *(int *)(param_1 + 0x2b0) != 0;
      iVar1 = 0;
      if (bVar2) {
        iVar1 = *(int *)(param_1 + 0x1bc);
      }
      if ((bVar2 && iVar1 != 0) && (*(int *)(param_1 + 0xb8) != 0)) {
        *(undefined1 *)(param_1 + 0x3a) = 3;
      }
      else {
        *(undefined1 *)(param_1 + 0x3a) = 1;
      }
      break;
    case 3:
      fn_0049ee8c(param_1);
      break;
    case 4:
      fn_0049f038(param_1);
    }
  } while (*(char *)(param_1 + 0x22) == '\x04');
  if ((*(char *)(param_1 + 0x22) == '\x05') && (*(int *)(param_1 + 0x2a0) != 0)) {
    local_20 = *(undefined4 *)(param_1 + 0x228);
    uStack_1c = *(undefined4 *)(param_1 + 0x22c);
    uStack_18 = *(undefined4 *)(param_1 + 0x230);
    (**(code **)(param_1 + 0x2a0))(*(undefined4 *)(param_1 + 0x1a0),&local_20,param_1 + 0x2a4);
  }
  return;
}



int fn_0049d7ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,undefined4 param_7,undefined2 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                undefined4 param_13)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_4c [4];
  undefined *local_48;
  code *pcStack_44;
  undefined4 uStack_40;
  undefined *puStack_3c;
  
  puVar1 = (undefined4 *)fn_00479cd8(param_1,2,auStack_4c);
  *puVar1 = &DAT_0085486c;
  puVar1[0x1a] = param_2;
  iVar2 = fn_004b637c(puVar1 + 0x1b,param_5);
  iVar2 = fn_0013d3e8(iVar2 + 0xc,param_7);
  *(undefined2 *)(iVar2 + 8) = param_8;
  *(undefined4 *)(iVar2 + 0xc) = param_9;
  iVar2 = fn_004565fc(iVar2 + 0x10);
  iVar2 = fn_0048cc04(iVar2 + 0x60,0);
  iVar2 = fn_004b8d6c(iVar2 + 0x78);
  iVar2 = fn_004b8d6c(iVar2 + 0xc);
  puVar1 = (undefined4 *)fn_0014f1e0(iVar2 + 0xc);
  *puVar1 = &DAT_00855a18;
  uVar3 = fn_0014f470();
  fn_0014f440(puVar1,uVar3,0);
  puVar1[8] = param_3;
  iVar2 = fn_0013ce04(puVar1 + 9);
  iVar2 = fn_0047f300(iVar2 + 0x6c);
  *(undefined4 *)(iVar2 + 0xf8) = param_4;
  *(undefined4 *)(iVar2 + 0xfc) = param_10;
  *(undefined4 *)(iVar2 + 0x100) = param_11;
  *(undefined4 *)(iVar2 + 0x104) = 0;
  *(undefined4 *)(iVar2 + 0x108) = 0;
  *(undefined4 *)(iVar2 + 0x10c) = 0;
  fn_004b41a8(iVar2 + 0x110,param_12);
  *(undefined1 *)(iVar2 + 0x118) = 0;
  *(undefined4 *)(iVar2 + 0x11c) = param_13;
  *(undefined4 *)(iVar2 + -0x1a4) = 0;
  *(undefined4 *)(iVar2 + -0x1a8) = 4;
  *(undefined4 *)(iVar2 + -0x194) = 0;
  if (param_6 != 0) {
    iVar4 = fn_002febd8(param_6);
    piVar5 = (int *)fn_0015ece0(iVar4 + 5);
    *piVar5 = iVar4 + 1;
    *(int **)(iVar2 + -0x194) = piVar5 + 1;
    iVar4 = fn_002febd8(param_6);
    if (iVar4 == 0) {
      **(undefined1 **)(iVar2 + -0x194) = 0;
    }
    else {
      fn_002fec40(*(undefined1 **)(iVar2 + -0x194),param_6);
    }
  }
  **(undefined4 **)(iVar2 + -0x184) = 0;
  pcStack_44 = fn_0049cd6c;
  uStack_40 = 0;
  local_48 = &DAT_00853500;
  puStack_3c = &DAT_007dde00;
  fn_00479c98(iVar2 + -0x208,&local_48);
  return iVar2 + -0x208;
}



undefined4 * fn_0049c62c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)fn_0046e6d0(param_1,1);
  *puVar1 = &DAT_00854808;
  if (param_2 == 0) {
    return puVar1;
  }
  *(short *)(puVar1 + 8) = (short)param_2;
  iVar2 = fn_0015ecdc(0x44);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_0049c62c(iVar2,0);
  }
  uVar3 = 0;
  if (DAT_008b637e != '\0') {
    uVar3 = fn_0074cbe4(DAT_008b63d8);
  }
  if (uVar3 == 0) {
    puVar4 = &DAT_008e76a0;
LAB_0049c6f0:
    iVar5 = puVar4[0xd];
    iVar2 = 0;
    if (iVar5 == 0) goto LAB_0049c6d8;
  }
  else {
    if (uVar3 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2)) {
      puVar4 = *(undefined4 **)(*DAT_008e76e4 + uVar3 * 4);
      goto LAB_0049c6f0;
    }
    fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                 ,0x48,0xe0000003,0);
    iVar5 = -1;
  }
  iVar2 = *(int *)(iVar5 + 0xc);
LAB_0049c6d8:
  fn_0047f194(*(undefined4 *)(iVar2 + 0xc),param_2,uVar6);
  return puVar1;
}


