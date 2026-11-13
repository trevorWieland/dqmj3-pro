#include "00659048_0065a270bb.h"



void fn_0065a270(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



undefined4 * fn_0065a190(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = &DAT_008f9ce8;
  *param_1 = *param_2;
  iVar1 = param_2[1];
  if (*(int *)(iVar1 + -0xc) == -1) {
    uVar4 = *(uint *)(iVar1 + -4);
    if (0xfffffff1 < uVar4) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,0xfffffff1);
    }
    if (uVar4 != 0) {
      puVar5 = (undefined4 *)fn_00100fc6((uVar4 + 8) * 2,0);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      puVar5[1] = uVar4;
      puVar3 = (undefined2 *)((int)puVar5 + uVar4 * 2 + 0xc);
      *puVar5 = 0;
      puVar5[2] = uVar4;
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    param_1[1] = puVar5 + 3;
    fn_00301a9c(puVar5 + 3,param_2[1],uVar4 << 1);
  }
  else {
    param_1[1] = iVar1;
    piVar2 = (int *)(iVar1 + -0xc);
    if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = *piVar2 + 1;
    }
  }
  return param_1;
}



void fn_006598ac(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_006598f4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_006598f4:
  fn_006899f4(param_1,puVar2[2],0);
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*piVar3)(piVar3);
    do {
      if (puVar2 == &DAT_00898ce0) goto LAB_0065993c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0065993c:
  (**(code **)(*piVar3 + 0xc))(piVar3);
  fn_0068ab44(param_1,0x100094c);
  return;
}



int fn_006595f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0039571c();
  *puVar1 = &DAT_00850acc;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  puVar1[4] = 0;
  iVar2 = fn_00117074(puVar1 + 5);
  return iVar2 + -0x14;
}


