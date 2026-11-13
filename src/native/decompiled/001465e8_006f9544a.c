#include "001465e8_006f9544a.h"



void fn_002ca68c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_00895df4) goto LAB_002ca6d0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_002ca6d0:
  puVar3[3] = 0;
  iVar2 = fn_00681c7c();
  if (iVar2 != 0) {
    fn_002287d0(DAT_00897894,0x20,1);
    (**(code **)(*DAT_00897894 + 0x14))(DAT_00897894,(char *)&DAT_00867230);
    fn_00682a8c();
  }
  fn_006899f4(param_1,0,0);
  fn_00689bdc(param_1,0);
  fn_00689bd0(param_1,0,0);
  fn_00689878(param_1,0);
  fn_001076bc(2);
  fn_005f3c30(2);
  return;
}



undefined4 fn_002a306c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_18;
  
  cVar1 = *(char *)(param_1 + 8);
  uVar4 = 0;
  local_18 = param_4;
  if (cVar1 == '\0') {
    (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
    if (DAT_0089780c[5] == DAT_0089780c[3]) {
      uVar2 = fn_00174858(DAT_008977e4);
      fn_002d3fc8(uVar2,3);
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  else if (cVar1 == '\x01') {
    iVar3 = fn_00237730(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
    if (iVar3 != 0) {
      local_18 = 0xff000000;
      fn_00163988(DAT_00897808,&local_18,0x14);
      local_18 = 0xff000000;
      fn_00163988(DAT_0089780c,&local_18,0x14);
      *(undefined1 *)(param_1 + 8) = 2;
    }
  }
  else if ((cVar1 != '\x02') ||
          (iVar3 = *(int *)(param_1 + 0x14) + 1, *(int *)(param_1 + 0x14) = iVar3, 0x14 < iVar3)) {
    uVar4 = 1;
  }
  return uVar4;
}



void fn_001465e8(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_r5;
  code *in_r12;
  bool bVar3;
  
  if (param_1 == 0x8051) {
    unaff_r5 = 3;
  }
  puVar2 = (undefined4 *)(&DAT_008e3190)[DAT_008e318c];
  if (param_1 != 0x8051) {
    bVar3 = param_1 == 0x8056 || param_1 == 0x8057;
    if (param_1 != 0x8056 && param_1 != 0x8057) {
      bVar3 = param_1 == 0x8d62;
    }
    if (!bVar3) {
      return;
    }
    unaff_r5 = 2;
  }
  if ((param_4 == 0x10000 || param_4 == 0x20000) || param_4 == 0x30000) {
    if (puVar2[1] != 0) {
      in_r12 = DAT_0089a524;
    }
    if (puVar2[1] != 0 && in_r12 != (code *)0x0) {
      (*in_r12)(puVar2[5],0x104,*puVar2);
    }
    if (DAT_0089a520 == (code *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*DAT_0089a520)(param_4,0x104,*puVar2,unaff_r5 * param_2 * param_3);
    }
    puVar2[5] = param_4;
    puVar2[1] = uVar1;
    puVar2[2] = param_1;
    puVar2[3] = param_2;
    puVar2[4] = param_3;
  }
  return;
}


