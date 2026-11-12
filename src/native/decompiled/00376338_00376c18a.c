#include "00376338_00376c18a.h"



void fn_00376528(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00376534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x6c) + 100))();
  return;
}



void fn_00376518(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00376524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x68))();
  return;
}



void fn_00376480(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x39e) != '\0') {
    uVar2 = fn_00746fd4(param_1,0xf);
    fn_00688c04(uVar2,param_2,0);
    return;
  }
  if (param_3 == 0) {
    uVar2 = 9;
  }
  else {
    uVar2 = 0xb;
  }
  uVar2 = fn_00746fd4(param_1,uVar2);
  if (param_3 == 0) {
    if (99 < param_2) {
      iVar1 = 99;
      goto LAB_003764f4;
    }
  }
  else {
    iVar1 = 9999;
    if (9999 < param_2) goto LAB_003764f4;
  }
  iVar1 = param_2;
LAB_003764f4:
  fn_00688c04(uVar2,iVar1,0);
  return;
}



bool fn_0037645c(int param_1)

{
  return *(float *)(*(int *)(param_1 + 0x6c) + 0x24) != 0.0;
}



void fn_00376338(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_58 [7];
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piVar1 = *(int **)(*(int *)(param_1 + 100) + 0x10);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x2c))(piVar1,(char *)&DAT_0085ddec,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a924) goto LAB_003763a4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_003763a4:
  if (param_2 < 1) {
    *(byte *)(piVar1 + 0x11) = *(byte *)(piVar1 + 0x11) & 0xfe;
  }
  else {
    *(byte *)(piVar1 + 0x11) = *(byte *)(piVar1 + 0x11) & 0xfe | 1;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    local_58[0] = param_2;
    fn_0018a618(local_58 + 2,8,7,&DAT_00376450);
    uVar3 = fn_00746fd4(param_1,6);
    fn_00190d50(uVar3,local_58 + 2);
    local_58[0] = 0;
    local_58[1] = 0x141;
    local_58[2] = 0x142;
    local_58[3] = 0x143;
    local_58[4] = 0x144;
    local_58[5] = 0x145;
    local_58[6] = 0x146;
    uStack_3c = 0x147;
    local_38 = 0x148;
    uStack_34 = 0x149;
    uStack_30 = 0x14a;
    uStack_2c = 0x14b;
    uStack_28 = 0x14c;
    uStack_24 = 0x2a1;
    uVar3 = fn_00746fd4(param_1,4);
    uVar4 = fn_0016a888((int)(short)local_58[param_3]);
    fn_00190d50(uVar3,uVar4);
  }
  return;
}


