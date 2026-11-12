#include "005d21a0_005d2950ab.h"



void fn_005d24bc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00448adc();
  *puVar1 = &DAT_0084c348;
  return;
}



void fn_005d2254(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint local_2c;
  uint local_28;
  
  iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
  if (iVar1 != 0) {
    return;
  }
  puVar2 = (undefined4 *)fn_0022f584((char *)&DAT_005d24a0,0);
  piVar9 = (int *)(param_1[0x26] + 0x20);
  uVar3 = fn_00100b58();
  puVar10 = &DAT_008f9ce8;
  puVar4 = (undefined4 *)*piVar9;
  if (uVar3 == 0) {
    piVar5 = puVar4 + -3;
    iVar1 = *piVar5;
    if (iVar1 != 0) {
      if ((puVar4 != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(*piVar9 + -0xc,*(int *)(*piVar9 + -8) + 8,0);
      }
      *piVar9 = (int)&DAT_008f9cf4;
      return;
    }
    puVar4[-1] = 0;
    puVar6 = (undefined2 *)*piVar9;
  }
  else {
    if (((1 < puVar4[-3] + 1) || ((uint)puVar4[-2] < uVar3)) ||
       ((puVar2 != (undefined4 *)0x0 &&
        ((puVar4 <= puVar2 && (puVar2 < (undefined4 *)((int)puVar4 + puVar4[-1] * 2))))))) {
      uVar7 = puVar4[-1];
      local_2c = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
      if (local_2c < uVar7 + 0x80) {
        local_2c = uVar7 + 0x80;
      }
      local_28 = uVar3;
      puVar8 = &local_2c;
      if (local_2c < uVar3) {
        puVar8 = &local_28;
      }
      uVar7 = *puVar8;
      if (0xfffffff1 < uVar7) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
      }
      if (uVar7 < uVar3) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar7);
      }
      if (uVar7 != 0) {
        puVar10 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        puVar6 = (undefined2 *)((int)puVar10 + uVar3 * 2 + 0xc);
        *puVar10 = 0;
        puVar10[1] = uVar7;
        puVar10[2] = uVar3;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar10 + 3,puVar2,uVar3 << 1);
      if ((undefined4 *)*piVar9 != &DAT_008f9cf4) {
        piVar5 = (undefined4 *)*piVar9 + -3;
        iVar1 = *piVar5;
        if ((iVar1 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(*piVar9 + -0xc,*(int *)(*piVar9 + -8) + 8,0);
        }
      }
      *piVar9 = (int)(puVar10 + 3);
      return;
    }
    fn_001006ac(puVar4,puVar2,uVar3);
    *(uint *)(*piVar9 + -4) = uVar3;
    puVar6 = (undefined2 *)(*piVar9 + uVar3 * 2);
  }
  *puVar6 = 0;
  return;
}


