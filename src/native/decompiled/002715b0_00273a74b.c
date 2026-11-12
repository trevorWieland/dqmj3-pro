#include "002715b0_00273a74b.h"



void fn_00273a74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  iVar1 = fn_00154a6c();
  if (iVar1 != 0) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                         (char *)&DAT_00273ac0,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  return;
}



void fn_00273534(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x20) = param_2;
  fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  fn_00271e64(param_1,(char *)&DAT_00273594,1);
  fn_00271e64(param_1,(char *)&DAT_002735b0,1);
  uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921d4,
                       *(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 8) = 5;
  return;
}



bool fn_002723b8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar1 = (uint)*(byte *)(param_1 + 8);
  bVar3 = uVar1 == 8;
  if (bVar3) {
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  if (bVar3 && uVar1 == 0xffffffff) {
    uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921e4
                         ,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined1 *)(param_1 + 8) = 9;
  }
  return bVar3 && uVar1 == 0xffffffff;
}



void fn_00272314(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x98))();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xff;
  }
  uVar2 = VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))(*(int **)(iVar3 + 0x10),(char *)&DAT_00274f4c,1);
  uVar2 = VectorFloatToUnsigned(uVar2,3);
  *(char *)(iVar3 + 0x45) = (char)uVar2;
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))(*(int **)(iVar3 + 0x10),(char *)&DAT_00274f4c,1);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | (byte)iVar1;
  return;
}



void fn_00271fb4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 8) != '\x03') {
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    uVar2 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))
                      (*(int **)(iVar1 + 0x10),(char *)&DAT_002720d0,1);
    fn_00190d50(uVar2,param_2);
    iVar1 = 0;
    do {
      fn_0017d96c(&local_58,0x40,0x3f,(char *)&DAT_002720e0,iVar1);
      fn_00271e64(param_1,&local_58);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    fn_00271e64(param_1,(char *)&DAT_002720f4,0);
    fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921cc
                         ,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined1 *)(param_1 + 8) = 3;
  }
  return;
}


