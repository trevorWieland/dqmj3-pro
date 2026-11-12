#include "001a2abc_001a2b54.h"



/* WARNING: Removing unreachable block (ram,0x001a2ce0) */
/* WARNING: Removing unreachable block (ram,0x001a2c58) */
/* WARNING: Removing unreachable block (ram,0x001a2bd4) */

void fn_001a2b54(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  fn_001a7040();
  while (*param_1 == 0x26) {
    iVar2 = fn_001a9c90(param_1 + 4);
    *param_1 = iVar2;
    fn_001a7040();
    uVar3 = fn_001a9704(param_1[1]);
    uVar1 = fn_001a9704(param_1[1]);
    iVar2 = param_1[1];
    local_2b = fn_001a72b0(iVar2,0xffffffff);
    local_2c = 0x12;
    local_29 = 0;
    local_30 = uVar3;
    local_2a = uVar1;
    fn_001a759c(iVar2,&local_30);
  }
  while (*param_1 == 0x5e) {
    iVar2 = fn_001a9c90(param_1 + 4);
    *param_1 = iVar2;
    fn_001cd700();
    uVar3 = fn_001a9704(param_1[1]);
    uVar1 = fn_001a9704(param_1[1]);
    iVar2 = param_1[1];
    local_33 = fn_001a72b0(iVar2,0xffffffff);
    local_34 = 0x12;
    local_31 = 3;
    local_38 = uVar3;
    local_32 = uVar1;
    fn_001a759c(iVar2,&local_38);
  }
  while (*param_1 == 0x7c) {
    iVar2 = fn_001a9c90(param_1 + 4);
    *param_1 = iVar2;
    fn_001cd7c0();
    uVar3 = fn_001a9704(param_1[1]);
    uVar1 = fn_001a9704(param_1[1]);
    iVar2 = param_1[1];
    local_3b = fn_001a72b0(iVar2,0xffffffff);
    local_3c = 0x12;
    local_39 = 2;
    local_40 = uVar3;
    local_3a = uVar1;
    fn_001a759c(iVar2,&local_40);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001ab9bc) */
/* WARNING: Removing unreachable block (ram,0x001ab9d0) */
/* WARNING: Removing unreachable block (ram,0x001a87e4) */
/* WARNING: Removing unreachable block (ram,0x001a87e0) */
/* WARNING: Removing unreachable block (ram,0x001a87e8) */
/* WARNING: Removing unreachable block (ram,0x001a87b4) */
/* WARNING: Removing unreachable block (ram,0x001a87cc) */
/* WARNING: Removing unreachable block (ram,0x001a87d0) */
/* WARNING: Removing unreachable block (ram,0x001a87d4) */
/* WARNING: Removing unreachable block (ram,0x001a87ec) */
/* WARNING: Removing unreachable block (ram,0x001a87f4) */
/* WARNING: Removing unreachable block (ram,0x001a8808) */
/* WARNING: Removing unreachable block (ram,0x001ab9b4) */
/* WARNING: Removing unreachable block (ram,0x001ab9e8) */
/* WARNING: Removing unreachable block (ram,0x001ab9c4) */

longlong fn_001a2abc(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char in_OV;
  bool bVar3;
  bool bVar4;
  
  uVar2 = 0x7ff;
  uVar1 = param_2 >> 0x14 & 0x7ff;
  bVar3 = uVar1 == 0;
  if (!bVar3) {
    uVar2 = uVar1 ^ 0x7ff;
    bVar3 = uVar2 == 0;
  }
  bVar4 = bVar3;
  if (!bVar3) {
    in_OV = SBORROW4(uVar2,param_3);
    bVar4 = uVar2 == param_3;
  }
  bVar3 = !bVar3 && (int)(uVar2 - param_3) < 0;
  if (!bVar4 && bVar3 == (bool)in_OV) {
    in_OV = SCARRY4(param_3,uVar1);
    bVar3 = (int)(param_3 + uVar1) < 0;
    bVar4 = param_3 + uVar1 == 0;
  }
  if (!bVar4 && bVar3 == (bool)in_OV) {
    return CONCAT44(param_2 + param_3 * 0x100000,param_1);
  }
  if (uVar1 == 0) {
    if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) {
      param_2 = 0;
    }
    return (ulonglong)param_2 << 0x20;
  }
  if (uVar2 == 0) {
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      return CONCAT44(param_2,param_1);
    }
    return 0x7ff8000000000000;
  }
  if ((int)param_3 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2 & 0x80000000 | 0x7ff00000;
  }
  return (ulonglong)uVar1 << 0x20;
}


