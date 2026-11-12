#include "003e8b04_003e93bca.h"



void fn_003e8d3c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fn_003e8d88(param_1,param_2,iVar1 + 1,param_3 + iVar1 * 0x49c,param_4);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}



int fn_003e8cf0(int param_1)

{
  int iVar1;
  
  fn_002feef8(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  fn_002feef8(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = fn_00120ec8(*(int *)(param_1 + 4) + 0x60);
    fn_002feef8(iVar1 + -0x60);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



void fn_003e8c1c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00897008) goto LAB_003e8c64;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003e8c64:
  if (*(char *)(puVar2 + 6) != '\0') {
    fn_003e8b04(param_1);
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar1 == &DAT_00897008) goto LAB_003e8cac;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_003e8cac:
    *(undefined1 *)(puVar2 + 6) = 0;
  }
  return;
}



void fn_003e8b04(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = fn_00178f9c(*(undefined4 *)(iVar1 + 8),param_1[0x1a]);
  iVar1 = fn_00172c98(uVar2,(char *)&DAT_003e8bec);
  uVar3 = fn_002f6534(param_1);
  fn_00688cc4(*(undefined4 *)(iVar1 + 0xac),(char *)&DAT_003e8bf8,uVar3);
  puVar5 = (undefined4 *)param_1[6];
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar4 == &DAT_00897008) goto LAB_003e8b94;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_003e8b94:
  fn_00688cc4(*(undefined4 *)(iVar1 + 0xac),(char *)&DAT_003e8c08,puVar5[4]);
  puVar5 = (undefined4 *)param_1[6];
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar4 == &DAT_00897008) goto LAB_003e8bd8;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_003e8bd8:
  fn_00688cc4(uVar2,(char *)&DAT_003e8c14,puVar5[5]);
  return;
}


