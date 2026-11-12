#include "00399494_00399dc8a.h"



void fn_003996bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  fn_00416e58();
  cVar1 = *(char *)(param_1 + 0xd8);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      local_10 = 0xff000000;
      fn_00163988(DAT_00897810,&local_10,1);
      fn_006899f4(param_1,200,0);
    }
    else if (cVar1 == '\x02') {
      fn_006899f4(param_1,0xae,0);
      return;
    }
  }
  return;
}



void fn_003995f4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = fn_006ba284();
  if (*(int *)(param_1 + (param_2 + iVar1 * 10) * 4 + 0xdc) < 1) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  iVar1 = fn_006ba284(param_1);
  *(int *)(*(int *)(param_1 + 0xd0) + 0x10) = param_2;
  iVar3 = *(int *)(param_1 + 0xd0);
  uVar2 = fn_006ba284(param_1);
  *(undefined4 *)(iVar3 + 0xc) = uVar2;
  *(undefined *)(*(int *)(param_1 + 0xd0) + 8) = (&DAT_007c7a88)[param_2 + iVar1 * 10];
  fn_0068ab44(param_1,0x100094b);
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return;
}



void fn_003995c4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x104,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00399738(iVar1,param_1);
  return;
}



void fn_00399598(int param_1)

{
  fn_00416e40();
  fn_0056a6ac(*(undefined4 *)(param_1 + 0xd0));
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0xd8) = 2;
  return;
}



void fn_00399494(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_20;
  
  uVar4 = 0;
  local_20 = param_4;
  do {
    iVar2 = fn_006ba284(param_1);
    iVar2 = uVar4 + iVar2 * 10;
    if (iVar2 < 10) {
      uVar3 = fn_00416d40(param_1,(&DAT_007c7a88)[iVar2]);
      fn_0031b78c(param_1,uVar4,0,uVar3);
      if (*(int *)(param_1 + iVar2 * 4 + 0xdc) < 1) {
        local_20 = DAT_00895e04;
        fn_002c37e0(param_1,uVar4,&local_20);
      }
      else {
        local_20 = DAT_00895dfc;
        fn_002c37e0(param_1,uVar4,&local_20);
      }
    }
    else {
      uVar1 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
      if (uVar1 <= uVar4) {
        local_20 = uVar1;
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar4);
      }
      fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar4 * 4),0xffffffff);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 10);
  return;
}


