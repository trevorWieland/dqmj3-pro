#include "00191540_00729300ba.h"



int fn_00370e94(int param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  
  cVar1 = *(char *)(param_1 + 8);
  cVar2 = *(char *)(param_1 + 10);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(char *)(param_1 + 9) = cVar1;
  *(char *)(param_1 + 8) = cVar2;
  if (cVar1 == cVar2) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (cVar2 != '\x01') goto LAB_003710b4;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar4 = (**(code **)(*DAT_00897894 + 0xc))(DAT_00897894,(char *)&DAT_0086a15c,1);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x14) = 1;
      *(undefined1 *)(param_1 + 10) = 2;
    }
    else {
      fn_00228b34(DAT_00897894,param_1 + 0x62);
      *(bool *)(param_1 + 0x61) = *(char *)(param_1 + 0x62) == '\x02';
      *(undefined1 *)(param_1 + 0x14) = 2;
    }
    goto LAB_003710b4;
  }
  iVar4 = (**(code **)(*DAT_00897894 + 0x18))(DAT_00897894,DAT_00895be0);
  if ((iVar4 == 0) ||
     (iVar4 = (**(code **)(*DAT_00897894 + 0x10))(DAT_00897894,DAT_00895be0), iVar4 == 0))
  goto LAB_003710b4;
  iVar4 = (**(code **)(*DAT_00897894 + 0x1c))(DAT_00897894,DAT_00895be0);
  if (iVar4 == 6) {
    iVar4 = fn_00370a70(param_1,param_1 + 0x48);
    bVar9 = false;
    if (iVar4 == 0) {
LAB_00371028:
      uVar8 = *(uint *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x48) = 0;
      uVar7 = *(uint *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x4c) = 0;
      iVar6 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x50) = 0;
      uVar5 = uVar8;
      if (uVar7 <= uVar8) {
        for (; uVar5 != uVar7; uVar5 = uVar5 + 1) {
        }
      }
      fn_001008c4(uVar8,iVar6 - uVar8,0);
    }
    else {
      fn_002eb72c(&local_28);
      *(undefined4 *)(param_1 + 0x58) = local_28;
      *(undefined4 *)(param_1 + 0x5c) = uStack_24;
      iVar6 = fn_002273f0(*(undefined4 *)(param_1 + 0x48),0);
      bVar9 = iVar6 != 0;
      if (!bVar9) goto LAB_00371028;
    }
    *(bool *)(param_1 + 0x60) = bVar9;
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x14) = 4;
    }
    else {
      uVar3 = 3;
LAB_00371094:
      *(undefined1 *)(param_1 + 0x14) = uVar3;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x14) = 4;
    iVar4 = (**(code **)(*DAT_00897894 + 0x48))(DAT_00897894,DAT_00895be0);
    if (iVar4 != 0) {
      local_28 = 0;
      uVar5 = fn_0052102c(&local_28);
      if ((uVar5 & 0x80000000) == 0) {
        uVar3 = 5;
        *(undefined4 *)(param_1 + 0x18) = local_28;
        goto LAB_00371094;
      }
    }
  }
  *(undefined1 *)(param_1 + 10) = 2;
  (**(code **)(*DAT_00897894 + 0x14))(DAT_00897894,DAT_00895be0);
LAB_003710b4:
  return param_1 + 0x14;
}


