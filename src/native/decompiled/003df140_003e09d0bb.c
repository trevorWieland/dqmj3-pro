#include "003df140_003e09d0bb.h"



void fn_003e09d0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_00832164;
  uVar1 = param_1[100];
  uVar2 = uVar1;
  if ((uint)param_1[0x65] <= uVar1) {
    for (; uVar2 != param_1[0x65]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x66] - uVar1) >> 2,0);
  uVar1 = param_1[0x61];
  uVar2 = uVar1;
  if ((uint)param_1[0x62] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x62]);
  }
  fn_001008c4(uVar1,(int)(param_1[99] - uVar1) >> 2,0);
  uVar1 = param_1[0x5e];
  uVar2 = uVar1;
  if ((uint)param_1[0x5f] <= uVar1) {
    for (; uVar2 != param_1[0x5f]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x60] - uVar1) >> 2,0);
  if ((int *)param_1[0x4a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4a] + 4))();
  }
  fn_003bc2c8(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x003e08e8) */
/* WARNING: Removing unreachable block (ram,0x003e0870) */
/* WARNING: Removing unreachable block (ram,0x003e0960) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe4 : 0x003e0874 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_003e0780(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_20;
  
  puVar1 = (undefined4 *)fn_003bc118();
  *puVar1 = &PTR_FUN_00832164;
  *(undefined2 *)(puVar1 + 0x2d) = 0;
  *(undefined1 *)((int)puVar1 + 0xb6) = 0;
  *(undefined1 *)((int)puVar1 + 0xb7) = 0;
  *(undefined2 *)(puVar1 + 0x34) = 0;
  *(undefined2 *)((int)puVar1 + 0xd2) = 0;
  *(undefined1 *)(puVar1 + 0x35) = 0;
  *(undefined2 *)((int)puVar1 + 0xd6) = 0;
  *(undefined2 *)(puVar1 + 0x36) = 0;
  *(undefined1 *)((int)puVar1 + 0xda) = 0;
  *(undefined2 *)(puVar1 + 0x37) = 0;
  *(undefined1 *)((int)puVar1 + 0xde) = 0;
  *(undefined2 *)(puVar1 + 0x38) = 0;
  *(undefined1 *)((int)puVar1 + 0xe2) = 0;
  *(undefined2 *)(puVar1 + 0x39) = 0;
  *(undefined1 *)((int)puVar1 + 0xe6) = 0;
  *(undefined2 *)(puVar1 + 0x3a) = 0;
  *(undefined1 *)((int)puVar1 + 0xea) = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  *(undefined1 *)((int)puVar1 + 0x122) = 0;
  *(undefined1 *)((int)puVar1 + 0x123) = 0;
  *(undefined1 *)(puVar1 + 0x49) = 0;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x4d] = 0;
  puVar1[0x4e] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  puVar1[0x53] = 0;
  puVar1[0x54] = 0;
  puVar1[0x55] = 0;
  puVar1[0x56] = 0;
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  puVar1[0x5a] = 0;
  puVar1[0x5b] = 0;
  puVar1[0x5c] = 0;
  puVar1[0x5d] = 0;
  puVar1[0x5e] = 0;
  puVar1[0x5f] = 0;
  puVar1[0x60] = 0;
  local_20 = 7;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x5e] = puVar2;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x5e];
  puVar1[0x5f] = iVar3 + 0x1c;
  puVar1[0x60] = iVar3 + 0x80;
  puVar1[0x61] = 0;
  puVar1[0x62] = 0;
  puVar1[99] = 0;
  local_20 = 7;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x61] = puVar2;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x61];
  puVar1[0x62] = iVar3 + 0x1c;
  puVar1[99] = iVar3 + 0x80;
  puVar1[100] = 0;
  puVar1[0x65] = 0;
  puVar1[0x66] = 0;
  local_20 = 7;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[100] = puVar2;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[100];
  puVar1[0x66] = iVar3 + 0x80;
  puVar1[0x65] = iVar3 + 0x1c;
  return puVar1;
}


