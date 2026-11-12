#include "00552f70_00553648ab.h"



int fn_005532f8(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  puVar1 = (undefined4 *)fn_00194db0();
  *puVar1 = &DAT_00857d0c;
  puVar1[0x29] = 0;
  iVar2 = fn_00101a1c(puVar1 + 0x2a,fn_0017d8f8,4);
  iVar2 = fn_001957e0(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + -0x10) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(iVar2 + -8) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(iVar2 + -4) = *(undefined4 *)(param_2 + 0xb4);
  uVar7 = (uint)*(byte *)(param_2 + 0xb9);
  if (uVar7 != 0) {
    fn_0019559c(iVar2,uVar7);
    fn_0019561c(iVar2,uVar7);
    uVar5 = 0;
    if (uVar7 != 0) {
      do {
        fn_00195768(iVar2,uVar5,*(int *)(param_2 + 0xbc) + uVar5 * 0x20);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
    }
  }
  uVar6 = *(undefined4 *)(param_2 + 0xa4);
  iVar3 = fn_00194ee4(0x84,4);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_0019533c(iVar3,uVar6);
  }
  *(undefined4 *)(iVar2 + -0x14) = uVar4;
  return iVar2 + -0xb8;
}



int fn_00553250(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)fn_0018a6d4();
  *puVar1 = &DAT_00857d0c;
  iVar2 = fn_00101a1c(puVar1 + 0x2a,fn_0017d8f8,4);
  iVar3 = fn_001957e0(iVar2 + 0x10);
  fn_0019559c(iVar3,1);
  iVar4 = fn_00194ee4(0x84,4);
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = fn_00555604();
  }
  *(int *)(iVar3 + -0x14) = iVar2;
  if (iVar2 != 0) {
    fn_005548fc(iVar2,1,1,1,0,0,0,0,0,0);
    fn_00552f70(iVar3 + -0xb8,param_2);
  }
  return iVar3 + -0xb8;
}


