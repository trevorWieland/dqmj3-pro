#include "00451c84_00452630.h"



void fn_00452630(undefined4 param_1,undefined4 param_2)

{
  if (DAT_008bfb3c != '\0') {
    DAT_008ebc90 = 0;
    DAT_008ebc95 = (undefined1)((uint)param_2 >> 8);
    DAT_008ebc94 = (undefined1)param_2;
    DAT_008ebc96 = (undefined1)((uint)param_2 >> 0x10);
    DAT_008ebc88 = 0xffffffff;
    fn_0014e6e4();
    DAT_008bfb40 = 0;
    DAT_008bfb3c = '\0';
  }
  return;
}



void fn_00452610(undefined4 param_1)

{
  DAT_008bfb40 = param_1;
  return;
}



undefined4 * fn_004525ec(undefined4 *param_1)

{
  *param_1 = &DAT_008525f0;
  fn_0045246c(param_1);
  return param_1;
}



undefined4 * fn_00452528(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_008525f0;
  *(undefined1 *)(param_1 + 2) = 0;
  DAT_0089a61b = 0;
  DAT_0089a61c = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[0x21f] = 0;
  param_1[0x220] = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x228] = 0;
  param_1[0x229] = 0;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  param_1[0x22c] = 0;
  param_1[0x22d] = 0;
  param_1[0x22e] = 0;
  *(undefined2 *)(param_1 + 0x7f) = 0x6262;
  *(undefined2 *)(param_1 + 0xeb) = 0x6262;
  *(undefined2 *)(param_1 + 0x157) = 0x6767;
  param_1[1] = 0;
  iVar1 = fn_00452620();
  if (iVar1 == 0) {
    *(undefined1 *)((int)param_1 + 9) = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 9) = 1;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



undefined4 fn_0045246c(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if (DAT_0089a618 != '\0') {
    fn_00451214(param_1,0);
  }
  fn_00170704(&DAT_008e3248);
  if (DAT_0089a61b != '\0') {
    fn_004539f4(*(undefined4 *)(param_1 + 0x3a8));
    DAT_0089a61b = '\0';
  }
  fn_001707b4(&DAT_008e3248);
  fn_00170704(&DAT_008e3248);
  if (DAT_0089a61c != '\0') {
    fn_004539f4(*(undefined4 *)(param_1 + 0x558));
    DAT_0089a61c = '\0';
  }
  fn_001707b4(&DAT_008e3248);
  if (DAT_0089a619 != '\0') {
    fn_0044ff38(0);
    DAT_0089a619 = '\0';
  }
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return 0;
}



void fn_004523f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = fn_00453364(param_2,param_3,param_4,param_5);
  if ((iVar1 < 0) && (iVar1 == -0x375ef410)) {
    fn_0044fd88(1,0);
    DAT_0089a619 = 1;
    fn_00453364(param_2,param_3,param_4,param_5);
  }
  return;
}



void fn_00452370(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = fn_00453318(param_2,param_3,param_4,param_5,param_6);
  if ((iVar1 < 0) && (iVar1 == -0x375ef410)) {
    fn_0044fd88(1,0);
    DAT_0089a619 = 1;
    fn_00453318(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



void fn_004522e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = fn_00452900(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((iVar1 < 0) && (iVar1 == -0x375ef410)) {
    fn_0044fd88(1,0);
    DAT_0089a619 = 1;
    fn_00452900(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}



int fn_00452200(int *param_1)

{
  int iVar1;
  char local_18 [8];
  
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,local_18,1,2,0,0);
  if (iVar1 < 0) {
    return iVar1;
  }
  if (local_18[0] != '\0') {
    iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,local_18,1,3,0,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (local_18[0] != '\0') {
      return -0x1f5ef793;
    }
    if (DAT_0089a61a == '\0') {
      iVar1 = fn_006cfda4(param_1);
      DAT_0089a61a = (char)(iVar1 >> 0x1f) + '\x01';
    }
    if (DAT_0089a61a != '\0') {
      return 0;
    }
    if (iVar1 == -0x379ef40d) {
      return -0x379ef40d;
    }
  }
  return -0x1f5ef794;
}



void fn_00451ed0(int *param_1,int param_2,undefined1 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (param_4 < 0x2801)) {
    if (param_2 == 0x8c) {
      *(undefined1 *)(param_1 + 0x77) = *param_3;
      fn_00452128();
      return;
    }
    if (param_2 == 0x8d) {
      *(undefined1 *)((int)param_1 + 0x1dd) = *param_3;
      fn_00452128();
      return;
    }
    if (param_2 == 0x8e) {
      *(undefined1 *)((int)param_1 + 0x1de) = *param_3;
      fn_00452128();
      return;
    }
    if (param_2 == 0x8f) {
      *(undefined1 *)((int)param_1 + 0x1df) = *param_3;
      fn_00452128();
      return;
    }
    if (param_2 - 0x65U < 99) {
      if (param_4 == 0 || param_3 == (undefined1 *)0x0) {
        (**(code **)(*param_1 + 0x24))(param_1,iVar1,param_2,0,0,0);
        return;
      }
      (**(code **)(*param_1 + 0x30))(param_1,param_3,param_4,iVar1,param_2,0x14);
    }
  }
  return;
}



void fn_00452128(int *param_1)

{
  if (param_1[1] == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x30))(param_1,param_1 + 0x67,0x60,param_1[1],2,0x14);
  return;
}



undefined1 * fn_00451d7c(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 local_1c [2];
  
  fn_00170704();
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    fn_001707b4(&DAT_008e323c);
    return &DAT_c8810bea;
  }
  local_1c[0] = 0;
  if (param_2 == 1) {
    puVar1 = (undefined1 *)(**(code **)(*param_1 + 0x24))(param_1,iVar2,0xd,1,0);
    if (-1 < (int)puVar1) {
      (**(code **)(*param_1 + 8))(param_1,param_1[1],0xd,8,local_1c);
      fn_00450670(param_1,1,param_1 + 0xeb,param_1 + 0xf3);
      iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,0);
      if (-1 < iVar2) {
        fn_004514a0(param_1);
      }
    }
  }
  else {
    puVar1 = (undefined1 *)(**(code **)(*param_1 + 0x24))(param_1,iVar2,0xc,param_2,0);
    if (-1 < (int)puVar1) {
      (**(code **)(*param_1 + 8))(param_1,param_1[1],0xc,8,local_1c);
      fn_00450670(param_1,0,param_1 + 0x7f,param_1 + 0x87);
    }
  }
  fn_001707b4(&DAT_008e323c);
  return puVar1;
}



int fn_00451c84(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int local_8c;
  undefined1 auStack_88 [12];
  byte local_7c;
  
  iVar5 = 0;
  iVar1 = fn_00451fe4();
  iVar2 = 0;
  if (iVar1 != 0) {
    uVar4 = 0;
    iVar2 = iVar5;
    if (param_1[6] != 0) {
      do {
        iVar2 = fn_00452690(param_1 + uVar4 * 4 + 7);
        puVar3 = &DAT_e0e10bfd;
        if (iVar2 != 0) {
          local_8c = 0;
          fn_00301f50(auStack_88,0x60);
          puVar3 = (undefined1 *)
                   (**(code **)(*param_1 + 0x34))(param_1,auStack_88,0x60,&local_8c,iVar2,2,0x12);
          if ((((uint)puVar3 & 0x3ff) != 0x3f7) && (local_8c == 0)) {
            puVar3 = (undefined1 *)0xc8810bef;
          }
        }
        if ((-1 < (int)puVar3) && ((((uint)local_7c & param_2 & 0xffffff7f) != 0 || (param_2 == 0)))
           ) {
          iVar5 = iVar5 + 1;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar5;
      } while (uVar4 < (uint)param_1[6]);
    }
  }
  return iVar2;
}



int fn_00451fe4(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_1c;
  undefined1 auStack_18 [8];
  
  local_1c = 0;
  uVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_1 + 4,0x18c,&local_1c,param_1[1],1,0x12);
  if ((uVar1 & 0x3ff) != 0x3f7) {
    if (local_1c == 0) {
      fn_0045216c(param_1);
      (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,5);
      return 0;
    }
    if ((-1 < (int)uVar1) && ((short)param_1[4] == 0x6868)) {
      uVar1 = 0;
      if (param_1[6] != 0) {
        do {
          uVar2 = fn_00452690(param_1 + uVar1 * 4 + 7);
          iVar3 = (**(code **)(*param_1 + 8))(param_1,uVar2,0xb,0,auStack_18);
          if (iVar3 < 0) {
            iVar3 = fn_0045216c(param_1);
            if (iVar3 < 0) {
              return 0;
            }
            return local_1c;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_1[6]);
      }
      return local_1c;
    }
    fn_0045216c(param_1);
  }
  return 0;
}


