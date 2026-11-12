#include "003db6fc_003dce7cb.h"



void fn_003dce7c(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_00301a9c(param_1 + 0x1c,param_2,0x80);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 8;
  return;
}



void fn_003dce58(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_00176fb0(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 6;
  return;
}



undefined4 fn_003dcd5c(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = fn_0066e28c(DAT_00897850,iVar3,0);
    piVar2 = (int *)fn_0013d4ec();
    if ((iVar1 != *piVar2) &&
       ((iVar1 = (**(code **)(*param_1 + 0x18))(param_1,iVar3), iVar1 != param_2 ||
        (*(byte *)(param_1 + iVar3 * 0x23 + 0x2a) != param_3)))) break;
    iVar3 = iVar3 + 1;
    if (7 < iVar3) {
      return 1;
    }
  }
  return 0;
}



void fn_003dcd3c(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  uVar4 = param_2[0xc];
  uVar5 = param_2[0xd];
  uVar6 = param_2[0xe];
  uVar7 = param_2[0xf];
  *(undefined4 *)(param_1 + 0x3c) = param_2[8];
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 9;
  return;
}



void fn_003dcd14(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_00301a9c(param_1 + 0x1c,param_2,0x80);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 5;
  return;
}



void fn_003dccfc(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 10;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



void fn_003dcce4(int param_1,undefined1 *param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 1;
  return;
}



void fn_003dcccc(int param_1,undefined1 *param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



void fn_003dccb4(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}


