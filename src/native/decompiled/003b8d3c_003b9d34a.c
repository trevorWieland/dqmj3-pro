#include "003b8d3c_003b9d34a.h"



undefined4 fn_003b9674(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 100),DAT_00890a94,&DAT_003b9a08,1,1);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar2,DAT_00890a98,&LAB_003b9a10,0,1,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 100),uVar2);
  *(byte *)(*(int *)(iVar3 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar3 + 0x10) + 0x44) & 0xfe | 1;
  uVar2 = fn_00689220(iVar3,DAT_00890a9c);
  iVar3 = fn_00689210(uVar2,DAT_00890aa0);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  fn_003b98b0(param_1,0);
  *(undefined1 *)(param_1 + 0x84) = 2;
  uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 8);
  iVar3 = fn_00176d68(uVar4);
  uVar1 = DAT_008c8010;
  uVar2 = DAT_008c800c;
  *(undefined4 *)(iVar3 + 0x58) = DAT_008c8008;
  *(undefined4 *)(iVar3 + 0x68) = uVar2;
  *(undefined4 *)(iVar3 + 0x78) = uVar1;
  *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x800;
  uVar2 = fn_00176d68(uVar4);
  fn_005456f4(uVar2,&DAT_008c7ffc);
  return 1;
}



void fn_003b9618(int param_1)

{
  if (*(int *)(param_1 + 0x7c) != -1) {
    fn_002b1810(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 0x68) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 100));
  }
  return;
}



void fn_003b8fe4(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



void fn_003b8edc(undefined4 param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  puVar2 = auStack_18;
  if (param_3 == 0) {
    puVar2 = auStack_14;
    puVar1 = (undefined1 *)fn_0022f750(*(int *)(param_2 + 0x134) + 0x58,param_2,0);
  }
  else {
    puVar1 = &LAB_003b8f24;
  }
  fn_00168a24(param_1,puVar1,puVar2);
  return;
}



undefined4 fn_003b8d3c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00893d28) goto LAB_003b8d80;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003b8d80:
  param_1[0x4d] = (int)puVar4;
  if (param_1[0x3a] == 0) {
    param_1[0x3a] = (int)(puVar4 + 5);
  }
  iVar5 = 0;
  param_1[0x43] = 0;
  do {
    iVar2 = fn_00580fac(param_1[0x4d],iVar5);
    if (iVar2 != 0) {
      param_1[param_1[0x43] + 0x44] = iVar5;
      param_1[0x43] = param_1[0x43] + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 7);
  uVar3 = fn_0043cd80(param_1);
  if (*(int *)(param_1[0x4d] + 0xa0) == 1 || *(int *)(param_1[0x4d] + 0xa0) == 2) {
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
    if (puVar4 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar1 == &DAT_008963ac) goto LAB_003b8e3c;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_003b8e3c:
    param_1[0x4b] = (int)puVar4;
    fn_0040f564(puVar4[0xf],0);
  }
  **(undefined1 **)(param_1[0x4d] + 0x10) = (char)param_1[*(int *)(param_1[0x4d] + 0xc) + 0x44];
  iVar5 = fn_006896fc(param_1,0x7a);
  if (iVar5 == 0) {
    if (*(int *)(param_1[0x4d] + 0x9c) == 0) {
      fn_00689930(param_1,0x7a,0);
    }
    else {
      fn_0068993c(param_1,0x7a,*(int *)(param_1[0x4d] + 0x9c),0,0);
    }
  }
  return uVar3;
}


