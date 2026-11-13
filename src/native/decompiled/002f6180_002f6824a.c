#include "002f6180_002f6824a.h"



int fn_002f6404(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),param_1);
  if (*(int *)(iVar1 + 0x3c8) == *(int *)(*(int *)(DAT_008977ec + 0x28) + 0x18)) {
    iVar1 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),param_1);
    iVar1 = (int)*(char *)(iVar1 + 0x3c6);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int fn_002f6298(undefined4 param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint in_fpscr;
  float fVar11;
  
  iVar3 = fn_003e93d0(DAT_008977ec,param_1);
  if (*(char *)(iVar3 + 8) == '\x01') {
    iVar4 = fn_006cd894(*(undefined4 *)(DAT_008977ec + 0x28));
    iVar5 = fn_003e93d0(DAT_008977ec,param_1);
    uVar2 = *(ushort *)
             (iVar4 + (*(int *)(iVar5 + 0x28) + (uint)(*(char *)(iVar5 + 0x3c) != '\0')) * 2);
    iVar8 = 10 - (int)(*(float *)(iVar5 + 0x2c) * 10.0);
    iVar3 = iVar8;
    if (iVar8 < 10) {
      iVar3 = iVar4 + iVar8 * 2;
    }
    iVar5 = 10 - (int)(*(float *)(iVar5 + 0x30) * 10.0);
    if (iVar8 < 10) {
      uVar10 = (uint)*(ushort *)(iVar3 + 0x16);
    }
    else {
      uVar10 = 0;
    }
    if (iVar5 < 10) {
      uVar9 = (uint)*(ushort *)(iVar4 + iVar5 * 2 + 0x2a);
    }
    else {
      uVar9 = 0;
    }
    iVar4 = *(int *)(DAT_008977ec + 0x28);
    iVar3 = fn_006cd660(iVar4);
    fVar11 = (float)VectorSignedToFloat(uVar2 + uVar10 + uVar9,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = *(float *)(iVar3 + *(int *)(iVar4 + 0xc) * 4) * fVar11;
    puVar6 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0xe1);
    if (puVar6 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)(**(code **)*puVar6)(puVar6);
      do {
        if (puVar7 == &DAT_00896fe0) goto LAB_002f63cc;
        puVar7 = (undefined4 *)*puVar7;
      } while (puVar7 != (undefined4 *)0x0);
    }
    puVar6 = (undefined4 *)0x0;
LAB_002f63cc:
    bVar1 = *(byte *)((int)puVar6 + 0x11);
    iVar3 = fn_006cd660(*(undefined4 *)(DAT_008977ec + 0x28));
    iVar3 = (int)(fVar11 * *(float *)(iVar3 + (uint)bVar1 * 4 + 0x1c));
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



undefined1 fn_002f6240(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = fn_002f8364();
  puVar2 = (undefined4 *)fn_001f74f8(uVar1,0xe1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00896fe0) goto LAB_002f628c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_002f628c:
  return *(undefined1 *)(puVar2 + 4);
}



void fn_002f61f4(undefined4 param_1,undefined1 param_2)

{
  undefined1 auStack_3e8 [962];
  undefined1 local_26;
  
  fn_006c3acc(*(undefined4 *)(DAT_00897804 + 0x3c),param_1,auStack_3e8);
  local_26 = param_2;
  fn_0036a810(*(undefined4 *)(DAT_00897804 + 0x3c),param_1,auStack_3e8);
  return;
}



void fn_002f61d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0xb) {
    return;
  }
  fn_005f3b74(DAT_00898840,*(undefined4 *)(param_1 + 8));
  return;
}



bool fn_002f61a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_003e93d0(DAT_008977ec,param_1);
  return *(char *)(iVar1 + 8) == '\x02';
}



undefined1 fn_002f6180(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),param_1);
  return *(undefined1 *)(iVar1 + 0x3c2);
}


