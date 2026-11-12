#include "00601c64_00602fc4a.h"



undefined4 fn_00602160(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_005a56e4(param_1,L"rom:/data/Layout/menu/wifi_ranking_battle/upper/gp_result_personal.arc",
               (char *)&DAT_006021b8);
  fn_0060228c(param_1);
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = fn_00178f9c(*(undefined4 *)(iVar1 + 8),param_1[0x1a]);
  iVar1 = fn_00172c98(uVar2,(char *)&DAT_006021d8);
  fn_006889d8(*(undefined4 *)(iVar1 + 0xac),(char *)&DAT_006021e4,0);
  return 1;
}



void fn_00601f9c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uVar4;
  
  fn_00748c18();
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_00601ff4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00601ff4:
  uVar4 = (undefined1)param_2;
  switch(*(undefined1 *)(puVar1 + 6)) {
  case 0:
    iVar3 = fn_0057dcdc(puVar1);
    *(undefined1 *)(iVar3 + 1) = uVar4;
    *(undefined1 *)(puVar1 + 7) = 1;
    if (param_2 == 2) {
      iVar3 = fn_0057dcdc(puVar1);
      uVar4 = 0;
    }
    else {
      iVar3 = fn_0057dcdc(puVar1);
      uVar4 = 2;
    }
    *(undefined1 *)(iVar3 + 2) = uVar4;
    break;
  case 1:
    iVar3 = fn_0057dcdc(puVar1);
    *(undefined1 *)(iVar3 + 2) = uVar4;
    *(undefined1 *)(puVar1 + 7) = 1;
    if (param_2 == 2) {
      iVar3 = fn_0057dcdc(puVar1);
      *(undefined1 *)(iVar3 + 1) = 0;
      *(undefined1 *)(puVar1 + 7) = 1;
      return;
    }
    iVar3 = fn_0057dcdc(puVar1);
    *(undefined1 *)(iVar3 + 1) = 2;
    break;
  case 2:
    iVar3 = fn_0057dcdc(puVar1);
    *(undefined1 *)(iVar3 + 3) = uVar4;
    break;
  case 3:
    iVar3 = fn_0057dcdc(puVar1);
    *(undefined1 *)(iVar3 + 4) = uVar4;
    break;
  case 4:
    iVar3 = fn_0057dcdc(puVar1);
    *(undefined1 *)(iVar3 + 7) = uVar4;
    break;
  case 5:
    iVar3 = fn_0057dcdc(puVar1);
    *(undefined1 *)(iVar3 + 5) = uVar4;
    break;
  case 6:
    iVar3 = fn_0057dcdc(puVar1);
    *(undefined1 *)(iVar3 + 6) = uVar4;
    break;
  default:
    return;
  }
  *(undefined1 *)(puVar1 + 7) = 1;
  return;
}



void fn_00601f6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x110,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00602114(iVar1,param_1);
  return;
}



void fn_00602114(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043d350(param_1,param_2,(char *)&DAT_0060213c,0xe9);
  puVar1[0x42] = 0;
  *puVar1 = &DAT_0084eccc;
  puVar1[0x43] = 0;
  return;
}



undefined1 fn_00601d64(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_00601da8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00601da8:
  switch(*(undefined1 *)(puVar1 + 6)) {
  case 0:
    iVar3 = fn_006e7ac8(puVar1);
    return *(undefined1 *)(iVar3 + 1);
  case 1:
    iVar3 = fn_006e7ac8(puVar1);
    return *(undefined1 *)(iVar3 + 2);
  case 2:
    iVar3 = fn_006e7ac8(puVar1);
    return *(undefined1 *)(iVar3 + 3);
  case 3:
    iVar3 = fn_006e7ac8(puVar1);
    return *(undefined1 *)(iVar3 + 4);
  case 4:
    iVar3 = fn_006e7ac8(puVar1);
    return *(undefined1 *)(iVar3 + 7);
  case 5:
    iVar3 = fn_006e7ac8(puVar1);
    return *(undefined1 *)(iVar3 + 5);
  case 6:
    iVar3 = fn_006e7ac8(puVar1);
    return *(undefined1 *)(iVar3 + 6);
  default:
    return 0;
  }
}



undefined * fn_00601c64(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_00601cac;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00601cac:
  switch(*(undefined1 *)(puVar1 + 6)) {
  case 0:
    *param_2 = 3;
    return &DAT_007c6100;
  case 1:
    *param_2 = 3;
    return &DAT_007c6130;
  case 2:
    *param_2 = 3;
    return &DAT_007c6160;
  case 3:
    *param_2 = 3;
    return &DAT_007c6190;
  case 4:
    *param_2 = 2;
    return &DAT_007c6220;
  case 5:
    *param_2 = 3;
    return &DAT_007c61c0;
  case 6:
    *param_2 = 3;
    return &DAT_007c61f0;
  default:
    return (undefined *)0x0;
  }
}


