#include "0058c9a8_0058d718aa.h"



void fn_0058cbd4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x24,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058cc04(iVar1,param_1);
  return;
}



void fn_0058c9a8(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint local_2c;
  uint uStack_28;
  
  piVar8 = (int *)(param_1 + 0x1c);
  uVar1 = fn_00100b58(param_2);
  puVar9 = &DAT_008f9ce8;
  puVar2 = (undefined4 *)*piVar8;
  if (uVar1 == 0) {
    piVar3 = puVar2 + -3;
    iVar5 = *piVar3;
    if (iVar5 != 0) {
      if ((puVar2 != &DAT_008f9cf4) &&
         ((iVar5 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))))) {
        fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 8,0);
      }
      *piVar8 = (int)&DAT_008f9cf4;
      return;
    }
    puVar2[-1] = 0;
    puVar4 = (undefined2 *)*piVar8;
  }
  else {
    if (((1 < puVar2[-3] + 1) || ((uint)puVar2[-2] < uVar1)) ||
       ((param_2 != (undefined4 *)0x0 &&
        ((puVar2 <= param_2 && (param_2 < (undefined4 *)((int)puVar2 + puVar2[-1] * 2))))))) {
      uVar6 = puVar2[-1];
      local_2c = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
      if (local_2c < uVar6 + 0x80) {
        local_2c = uVar6 + 0x80;
      }
      puVar7 = &uStack_28;
      if (uVar1 <= local_2c) {
        puVar7 = &local_2c;
      }
      uStack_28 = uVar1;
      uVar6 = *puVar7;
      if (0xfffffff1 < uVar6) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
      }
      if (uVar6 < uVar1) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar6);
      }
      if (uVar6 != 0) {
        puVar9 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        puVar4 = (undefined2 *)((int)puVar9 + uVar1 * 2 + 0xc);
        *puVar9 = 0;
        puVar9[1] = uVar6;
        puVar9[2] = uVar1;
        if (puVar4 != (undefined2 *)0x0) {
          *puVar4 = 0;
        }
      }
      fn_00301a9c(puVar9 + 3,param_2,uVar1 << 1);
      if ((undefined4 *)*piVar8 != &DAT_008f9cf4) {
        piVar3 = (undefined4 *)*piVar8 + -3;
        iVar5 = *piVar3;
        if ((iVar5 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
          fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 8,0);
        }
      }
      *piVar8 = (int)(puVar9 + 3);
      return;
    }
    fn_001006ac(puVar2,param_2,uVar1);
    *(uint *)(*piVar8 + -4) = uVar1;
    puVar4 = (undefined2 *)(*piVar8 + uVar1 * 2);
  }
  *puVar4 = 0;
  return;
}


