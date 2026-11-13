#include "002440a8_00244df8ba.h"



void fn_002448ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
    fn_0068ab44(param_1,0x100094c);
    fn_00689824(param_1,0);
    iVar1 = *(int *)(*(int *)(param_1 + 0xb0) + 8);
    if (iVar1 == 0) {
      fn_006899f4(param_1,0,0);
      fn_00689d04(param_1,0);
      fn_00689878(param_1,0);
    }
    else {
      fn_006899f4(param_1,iVar1,0,1);
    }
                    /* WARNING: Could not recover jumptable at 0x00244944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))();
    return;
  }
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0x6a);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_0089423c) goto LAB_0024498c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0024498c:
  puVar3 = (undefined4 *)fn_006c226c(*(undefined4 *)(param_1 + 0xb0),param_2);
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(puVar3 + 1);
  puVar2[5] = *puVar3;
  uVar5 = *(undefined4 *)(DAT_00897804 + 0x18);
  iVar1 = fn_006b4f84(uVar5);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      puVar3 = (undefined4 *)fn_0024222c(uVar5,iVar4);
      local_20 = *puVar3;
      fn_003b9d34(puVar2,&local_20);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  fn_0068ab44(param_1,0x100094b);
  fn_006899f4(param_1,0x6a,0);
  return;
}



void fn_0024487c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xbc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00244dc4(iVar1,param_1);
  return;
}


