#include "003f10f8_003f10f8.h"



undefined4 fn_003f10f8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [5];
  undefined1 local_43;
  undefined1 local_3e;
  undefined1 local_3c;
  undefined1 auStack_28 [8];
  undefined4 local_20 [2];
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951d8) goto LAB_003f1148;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003f1148:
  param_1[0x34] = (int)puVar1;
  iVar3 = (**(code **)(*param_1 + 8))(param_1);
  piVar5 = *(int **)(iVar3 + 0x18);
  if (piVar5 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*piVar5 + 0xc))(piVar5);
    do {
      if (puVar1 == &DAT_00891a14) goto LAB_003f1194;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_003f1194:
  param_1[0x35] = (int)piVar5;
  fn_00397b18(&local_70);
  local_70 = DAT_008919d4;
  local_6c = DAT_008919d8;
  uVar4 = fn_0022f750((char *)&DAT_003f130c);
  fn_00147974(auStack_54,uVar4);
  local_68 = 3;
  local_43 = 1;
  uVar4 = fn_0022f750(&DAT_003f1314);
  fn_00147974(auStack_48,uVar4);
  local_3e = 1;
  local_3c = 0;
  fn_00397a98(param_1,&local_70);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_00689efc(param_1,0x2c,0);
  iVar6 = *(int *)(DAT_008977e0 + 0xa8);
  iVar3 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_003f131c);
  if (iVar6 == iVar3) {
    local_20[0] = 0xff808080;
    fn_0031b590(*(undefined4 *)(param_1[0x1e] + 8),0,local_20);
  }
  fn_003f132c(param_1);
  uVar4 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  *(undefined4 *)(param_1[0x34] + 0x20) = uVar4;
  iVar3 = fn_001588d4(auStack_28);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -0x10);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  fn_001588d4(iVar3 + -4);
  return 1;
}


