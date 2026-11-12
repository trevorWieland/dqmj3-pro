#include "00688548_00688a74.h"



void fn_00688a08(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x148) + param_2 * 0x10);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  fn_00688a74(*(undefined4 *)(*(int *)(param_1 + 0x148) + param_2 * 0x10 + 4));
  iVar2 = *(int *)(*(int *)(param_1 + 0x148) + param_2 * 0x10 + 8);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x148) + param_2 * 0x10 + 0xc);
  iVar2 = fn_00100b58(&DAT_00688a9c);
  fn_00190d78(uVar1,&DAT_00688a9c,iVar2 + 1);
  return;
}



void fn_00688a74(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00100b58(&DAT_00688a9c);
  fn_00190d78(param_1,&DAT_00688a9c,iVar1 + 1);
  return;
}



int * fn_0068897c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x2c))(param_1,param_2,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) {
        return piVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (int *)0x0;
}



int * fn_00688920(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x2c))(param_1,param_2,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a92c) {
        return piVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (int *)0x0;
}



int * fn_006888c0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x2c))
                            (*(int **)(param_1 + 0x10),param_2,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a92c) {
        return piVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (int *)0x0;
}



void fn_00688880(undefined4 *param_1)

{
  if (param_1[3] != 0) {
    fn_00151954(param_1[3],param_1);
  }
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  (**(code **)*param_1)(param_1);
  fn_0019fb94(param_1);
  return;
}



void fn_00688858(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_00850ff0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  return;
}



void fn_00688844(int param_1)

{
  if (*(char *)(param_1 + 0xc) != *(char *)(param_1 + 0xd)) {
    *(char *)(param_1 + 0xc) = *(char *)(param_1 + 0xd);
  }
  return;
}



void fn_006887c8(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



void fn_006887b8(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00850fd8;
  return;
}



void fn_006886c8(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  param_2 = *(int *)(param_1 + 0x14) + param_2;
  *(int *)(param_1 + 0x14) = param_2;
  if ((*(int *)(param_1 + 0xc) <= param_2) &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0xc), *(char *)(param_1 + 0x1d) != '\0')) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  iVar4 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 4);
  if (0 < iVar4) {
    iVar5 = iVar4 - iVar3;
    uVar1 = fn_00300f74(iVar3 * (uint)*(byte *)(param_1 + 0x10) +
                         iVar5 * (uint)*(byte *)(param_1 + 8),iVar4);
    *(undefined1 *)(param_1 + 0x18) = uVar1;
    uVar1 = fn_00300f74(iVar3 * (uint)*(byte *)(param_1 + 0x11) +
                         iVar5 * (uint)*(byte *)(param_1 + 9),iVar4);
    *(undefined1 *)(param_1 + 0x19) = uVar1;
    uVar1 = fn_00300f74(iVar3 * (uint)*(byte *)(param_1 + 0x12) +
                         iVar5 * (uint)*(byte *)(param_1 + 10),iVar4);
    *(undefined1 *)(param_1 + 0x1a) = uVar1;
    uVar1 = fn_00300f74(iVar3 * (uint)*(byte *)(param_1 + 0x13) +
                         iVar5 * (uint)*(byte *)(param_1 + 0xb),iVar4);
    *(undefined1 *)(param_1 + 0x1b) = uVar1;
  }
  return;
}



void fn_0068869c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_3;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return;
}



void fn_0068866c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return;
}



void fn_00688634(int param_1,undefined4 param_2)

{
  fn_0017821c(*(undefined4 *)(param_1 + 4),param_2,0x37af0);
  return;
}



undefined1 fn_00688610(int param_1)

{
  undefined1 uStack_5;
  undefined4 local_4;
  
  local_4 = 0x80503;
  return (&uStack_5)[param_1];
}



int fn_006885e4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = param_1 == 0;
  iVar1 = param_1;
  if (0 < param_1) {
    iVar1 = DAT_00893140 - param_1;
    bVar2 = DAT_00893140 == param_1;
    param_4 = DAT_00893140;
  }
  if (bVar2 || iVar1 < 0 != (0 < param_1 && SBORROW4(param_4,param_1))) {
    param_1 = 0;
  }
  return DAT_0089313c + param_1 * 0x2c;
}



int fn_006885b0(int param_1,int param_2)

{
  int iVar1;
  int in_r12;
  bool bVar2;
  
  bVar2 = param_1 == 0;
  iVar1 = param_1;
  if (0 < param_1) {
    iVar1 = DAT_00893140 - param_1;
    bVar2 = DAT_00893140 == param_1;
    in_r12 = DAT_00893140;
  }
  if (bVar2 || iVar1 < 0 != (0 < param_1 && SBORROW4(in_r12,param_1))) {
    param_1 = 0;
  }
  return (int)*(short *)(DAT_0089313c + param_1 * 0x2c + param_2 * 2 + 0x1a);
}



int fn_0068857c(int param_1,int param_2)

{
  int iVar1;
  int in_r12;
  bool bVar2;
  
  bVar2 = param_1 == 0;
  iVar1 = param_1;
  if (0 < param_1) {
    iVar1 = DAT_00893140 - param_1;
    bVar2 = DAT_00893140 == param_1;
    in_r12 = DAT_00893140;
  }
  if (bVar2 || iVar1 < 0 != (0 < param_1 && SBORROW4(in_r12,param_1))) {
    param_1 = 0;
  }
  return (int)*(short *)(DAT_0089313c + param_1 * 0x2c + param_2 * 2 + 0x22);
}



int fn_00688548(int param_1,int param_2)

{
  int iVar1;
  int in_r12;
  bool bVar2;
  
  bVar2 = param_1 == 0;
  iVar1 = param_1;
  if (0 < param_1) {
    iVar1 = DAT_00893140 - param_1;
    bVar2 = DAT_00893140 == param_1;
    in_r12 = DAT_00893140;
  }
  if (bVar2 || iVar1 < 0 != (0 < param_1 && SBORROW4(in_r12,param_1))) {
    param_1 = 0;
  }
  return (int)*(short *)(DAT_0089313c + param_1 * 0x2c + param_2 * 2 + 0x12);
}


