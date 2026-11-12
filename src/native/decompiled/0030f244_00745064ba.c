#include "0030f244_00745064ba.h"



bool fn_007439cc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  
  pcVar3 = DAT_0089a520;
  bVar4 = true;
  if (param_1 != 0x2010000) {
    if (param_1 < 0x2010000) {
      if (param_1 == 0x1010000) {
        if (DAT_0089a520 == (code *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = (*DAT_0089a520)(0x10000,0x101,param_2[0x10],param_2[8]);
        }
        bVar4 = iVar1 != 0;
        param_2[1] = iVar1;
        *param_2 = iVar1;
      }
      else {
        if (param_1 == 0x1020000) {
          iVar1 = 0x20000;
        }
        else {
          if (param_1 != 0x1030000) {
            return true;
          }
          iVar1 = 0x30000;
        }
        bVar5 = DAT_0089a520 == (code *)0x0;
        param_2[0xf] = iVar1;
        if (bVar5) {
          iVar1 = 0;
        }
        else {
          iVar1 = (*pcVar3)(iVar1,0x101,param_2[0x10],param_2[8]);
        }
        *param_2 = iVar1;
        pcVar3 = DAT_0089a520;
        if (DAT_0089a520 == (code *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = (*DAT_0089a520)(0x10000,0x101,param_2[0x10],param_2[8]);
        }
        iVar2 = *param_2;
        param_2[1] = iVar1;
        if (iVar2 == 0 || iVar1 == 0) {
          bVar4 = false;
          if (iVar2 != 0) {
            pcVar3 = DAT_0089a524;
          }
          if (iVar2 != 0 && pcVar3 != (code *)0x0) {
            (*pcVar3)(param_2[0xf],0x101,param_2[0x10]);
          }
          if (param_2[1] != 0) {
            pcVar3 = DAT_0089a524;
          }
          if (param_2[1] != 0 && pcVar3 != (code *)0x0) {
            (*pcVar3)(0x10000,0x101,param_2[0x10]);
          }
        }
      }
    }
    else if (param_1 == 0x2020000 || param_1 == 0x2030000) {
      if (param_1 == 0x2020000) {
        iVar1 = 0x20000;
      }
      else {
        iVar1 = 0x30000;
      }
      bVar4 = DAT_0089a520 == (code *)0x0;
      param_2[0xf] = iVar1;
      if (bVar4) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*pcVar3)(iVar1,0x101,param_2[0x10],param_2[8]);
      }
      bVar4 = iVar1 != 0;
      *param_2 = iVar1;
    }
  }
  return bVar4;
}


