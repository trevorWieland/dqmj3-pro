#include "00146f18_00708b30a.h"



void fn_002bd7f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  fn_001218d4(DAT_00897800,L"rom:/data/Message/GoldBankMessage.mes");
  local_10 = 0;
  fn_00163988(DAT_00897808,&local_10,1);
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  fn_002c4100(param_1);
  return;
}



void fn_00158318(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 == 0x2010000) goto LAB_001583a8;
  pcVar3 = DAT_0089a524;
  if (param_1 < 0x2010000) {
    if (param_1 == 0x1010000) {
      if ((param_2[1] == 0) || (DAT_0089a524 == (code *)0x0)) goto LAB_001583a8;
    }
    else {
      if (param_1 != 0x1020000 && param_1 != 0x1030000) goto LAB_001583a8;
      if (*param_2 != 0 && DAT_0089a524 != (code *)0x0) {
        (*DAT_0089a524)(param_2[0xf],0x101,param_2[0x10]);
      }
      if (param_2[1] != 0) {
        pcVar3 = DAT_0089a524;
      }
      if (param_2[1] == 0 || pcVar3 == (code *)0x0) goto LAB_001583a8;
    }
    iVar2 = param_2[0x10];
    iVar1 = 0x10000;
  }
  else {
    if ((param_1 != 0x2020000 && param_1 != 0x2030000) ||
       (*param_2 == 0 || DAT_0089a524 == (code *)0x0)) goto LAB_001583a8;
    iVar1 = param_2[0xf];
    iVar2 = param_2[0x10];
  }
  (*pcVar3)(iVar1,0x101,iVar2);
LAB_001583a8:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



undefined4 * fn_00146f18(undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (DAT_0089a520 == (code *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(*DAT_0089a520)(0x10000,0x100,0,0x78);
    if (puVar1 != (undefined4 *)0x0) {
      fn_00301f50(puVar1,0x78);
      puVar1[1] = 0x2600;
      *puVar1 = 0x2600;
      puVar1[2] = 0x2901;
      puVar1[3] = 0x2901;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[5] = 0xfffffc18;
      puVar1[8] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[0x1d] = param_1;
    }
  }
  return puVar1;
}


