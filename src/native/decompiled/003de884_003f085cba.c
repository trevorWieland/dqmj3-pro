#include "003de884_003f085cba.h"



undefined4 fn_003e2cec(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_23;
  undefined1 local_1e;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x60);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894b34) goto LAB_003e2d3c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003e2d3c:
  *(undefined4 **)(param_1 + 0xb4) = puVar1;
  fn_002c330c(&local_50);
  local_50 = DAT_00894bfc;
  local_4c = DAT_00894c00;
  local_48 = fn_006cb760(param_1);
  local_48 = local_48 + 1;
  local_3c = fn_006cb760(param_1);
  local_44 = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 8);
  uVar3 = fn_0022f750((char *)&DAT_003e2fb4);
  fn_00147974(&local_34,uVar3);
  local_1e = 1;
  local_23 = 1;
  uVar3 = fn_0022f750((char *)&DAT_003e2fc4);
  fn_00147974(&local_28,uVar3);
  fn_002c29a0(param_1,&local_50);
  iVar4 = fn_003e2fd8(param_1);
  if (iVar4 == 0) {
    iVar4 = fn_00154ac8(0x310);
    if (iVar4 == 0) {
      fn_00689efc(param_1,0x67,0);
      goto code_r0x003e2e28;
    }
  }
  else {
    fn_00689bd0(param_1,0x48,0);
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  fn_00689efc(param_1,0x90,0);
code_r0x003e2e28:
  iVar5 = fn_00391d58();
  iVar4 = fn_006b52b0(*(undefined4 *)(DAT_00897804 + 0x1c));
  iVar5 = iVar5 - iVar4;
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  iVar4 = (int)((longlong)(int)(iVar5 + 0x3bU) * -0x77777777 + ((ulonglong)(iVar5 + 0x3bU) << 0x20)
               >> 0x20);
  *(int *)(*(int *)(param_1 + 0xb4) + 0x10) = (iVar4 >> 5) - (iVar4 >> 0x1f);
  if (local_28 != &DAT_008f9cf4) {
    piVar6 = local_28 + -3;
    iVar4 = *piVar6;
    if ((iVar4 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar6 = local_2c + -3;
    iVar4 = *piVar6;
    if ((iVar4 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar6 = local_30 + -3;
    iVar4 = *piVar6;
    if ((iVar4 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar6 = local_34 + -3;
    iVar4 = *piVar6;
    if ((iVar4 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  return 1;
}


