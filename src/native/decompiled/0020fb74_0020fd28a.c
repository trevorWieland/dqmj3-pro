#include "0020fb74_0020fd28a.h"



void fn_0020fcf4(void)

{
  fn_0074602c();
  return;
}



int fn_0020fb74(undefined2 *param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint local_30;
  uint local_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  iVar1 = fn_007862e8(param_1 + 8,&local_30,&local_2c);
  iVar1 = fn_007862e8(iVar1 + 0x1c,auStack_28,auStack_24);
  iVar1 = fn_007862e8(iVar1 + 0x1c,auStack_20,auStack_1c);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(char *)(iVar1 + 0x28) = (char)param_3;
  *(undefined1 *)(iVar1 + 0x29) = 0;
  local_30 = 0x1c2;
  puVar9 = (uint *)(iVar1 + 0x1c);
  if ((uint)(*(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x1c) >> 4) < 0x1c2) {
    uVar10 = *(int *)(iVar1 + 0x20) - *(int *)(iVar1 + 0x1c) >> 4;
    local_2c = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_2c < uVar10 + 0x20) {
      local_2c = uVar10 + 0x20;
    }
    puVar2 = &local_2c;
    if (local_2c < 0x1c3) {
      puVar2 = &local_30;
    }
    uVar10 = *puVar2;
    puVar3 = (undefined4 *)fn_00100fc6(uVar10 << 4,0);
    puVar7 = *(undefined4 **)(iVar1 + 0x20);
    puVar4 = puVar3;
    for (puVar8 = (undefined4 *)*puVar9; puVar8 != puVar7; puVar8 = puVar8 + 4) {
      if (puVar4 != (undefined4 *)0x0) {
        uVar11 = puVar8[1];
        uVar12 = puVar8[2];
        uVar13 = puVar8[3];
        *puVar4 = *puVar8;
        puVar4[1] = uVar11;
        puVar4[2] = uVar12;
        puVar4[3] = uVar13;
      }
      puVar4 = puVar4 + 4;
    }
    uVar5 = *puVar9;
    uVar6 = uVar5;
    if (*(uint *)(iVar1 + 0x20) < uVar5) {
      do {
        uVar6 = uVar6 + 0x10;
      } while (uVar6 != *(uint *)(iVar1 + 0x20));
    }
    fn_001008c4(uVar5,(int)(*(int *)(iVar1 + 0x24) - uVar5) >> 4,0);
    uVar6 = *puVar9;
    *(undefined4 **)(iVar1 + 0x1c) = puVar3;
    *(int *)(iVar1 + 0x20) = (*(int *)(iVar1 + 0x20) - uVar6 & 0xfffffff0) + (int)puVar3;
    *(undefined4 **)(iVar1 + 0x24) = puVar3 + uVar10 * 4;
  }
  fn_0020d5ec(iVar1 + -0x44);
  fn_0020cdcc(iVar1 + -0x44,param_3);
  return iVar1 + -0x48;
}


