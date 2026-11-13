#include "0038f910_00390174ab.h"



void fn_0038feb4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &DAT_0082af58;
  puVar1[0x2d] = 0;
  return;
}



void fn_0038fe60(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  fn_002c3e78();
  iVar1 = fn_006e6820(*(undefined4 *)(param_1 + 0xb0));
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)fn_006e6814(*(undefined4 *)(param_1 + 0xb0),iVar3);
      fn_0038f910(param_1,iVar3,*puVar2,(int)*(char *)(puVar2 + 1));
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}



void fn_0038fcbc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
    fn_0068ab44(param_1,0x100094c);
    *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x1d) = 1;
    fn_00689824(param_1,0);
    if (*(char *)(*(int *)(param_1 + 0xb0) + 0x1e) != '\0') {
      return;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0xb0) + 8);
    if (iVar1 == 0) {
      fn_006899f4(param_1,0,0);
      fn_00689d04(param_1,0);
      fn_00689878(param_1,0);
    }
    else {
      fn_006899f4(param_1,iVar1,0,1);
    }
                    /* WARNING: Could not recover jumptable at 0x0038fd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))();
    return;
  }
  fn_0068ab44(param_1,0x100094b);
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0xc) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x1c) = 1;
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0x5a);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00891c90) goto LAB_0038fdd0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0038fdd0:
  puVar3 = (undefined4 *)fn_006e6814(*(undefined4 *)(param_1 + 0xb0),param_2);
  puVar2[3] = *puVar3;
  fn_006899f4(param_1,0x5a,0);
  return;
}


