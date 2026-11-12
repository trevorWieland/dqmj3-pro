#include "003e808c_003e8a3caa.h"



void fn_003e8480(int param_1)

{
  fn_002c3d68();
  fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x14),1);
                    /* WARNING: Could not recover jumptable at 0x003e84b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))();
  return;
}



undefined4 fn_003e808c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint local_74 [3];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  uint local_34 [4];
  
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  if (puVar8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar1 == &DAT_008968f8) goto LAB_003e80d4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_003e80d4:
  *(undefined4 **)(param_1 + 0xb0) = puVar8;
  fn_002c330c(&local_68);
  local_68 = DAT_00896904;
  local_64 = DAT_00896908;
  uStack_60 = 3;
  local_5c = *(undefined4 *)(*(int *)(param_1 + 0xb0) + 8);
  puVar8 = (undefined4 *)fn_0022f750((char *)&DAT_003e846c);
  uVar2 = fn_00100b58();
  puVar1 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar3 = local_4c + -3;
    iVar7 = *piVar3;
    if (iVar7 != 0) {
      if ((local_4c != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_4c + -3,local_4c[-2] + 8,0);
      }
      local_4c = &DAT_008f9cf4;
      goto LAB_003e8328;
    }
    local_4c[-1] = 0;
    puVar8 = local_4c;
  }
  else {
    if ((1 < local_4c[-3] + 1) || ((uint)local_4c[-2] < uVar2)) {
LAB_003e8178:
      uVar4 = local_4c[-1];
      local_74[0] = uVar2;
      local_34[0] = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
      if (local_34[0] < uVar4 + 0x80) {
        local_34[0] = uVar4 + 0x80;
      }
      puVar5 = local_74;
      if (uVar2 <= local_34[0]) {
        puVar5 = local_34;
      }
      uVar4 = *puVar5;
      if (0xfffffff1 < uVar4) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,0xfffffff1);
      }
      if (uVar4 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar4);
      }
      if (uVar4 != 0) {
        puVar1 = (undefined4 *)fn_00100fc6((uVar4 + 8) * 2,0);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
        }
        puVar6 = (undefined2 *)((int)puVar1 + uVar2 * 2 + 0xc);
        *puVar1 = 0;
        puVar1[1] = uVar4;
        puVar1[2] = uVar2;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar1 + 3,puVar8,uVar2 << 1);
      if (local_4c != &DAT_008f9cf4) {
        piVar3 = local_4c + -3;
        iVar7 = *piVar3;
        if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_4c + -3,local_4c[-2] + 8,0);
        }
      }
      local_4c = puVar1 + 3;
      goto LAB_003e8328;
    }
    if (puVar8 != (undefined4 *)0x0) {
      bVar9 = puVar8 <= local_4c;
      if (local_4c <= puVar8) {
        bVar9 = (undefined4 *)((int)local_4c + local_4c[-1] * 2) <= puVar8;
      }
      if (!bVar9) goto LAB_003e8178;
    }
    fn_001006ac(local_4c,puVar8,uVar2);
    local_4c[-1] = uVar2;
    puVar8 = (undefined4 *)((int)local_4c + uVar2 * 2);
  }
  *(undefined2 *)puVar8 = 0;
LAB_003e8328:
  fn_002c29a0(param_1,&local_68);
  fn_00689efc(param_1,0xf0,0);
  if (local_40 != &DAT_008f9cf4) {
    piVar3 = local_40 + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  if (local_44 != &DAT_008f9cf4) {
    piVar3 = local_44 + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  if (local_48 != &DAT_008f9cf4) {
    piVar3 = local_48 + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
    }
  }
  if (local_4c != &DAT_008f9cf4) {
    piVar3 = local_4c + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_4c + -3,local_4c[-2] + 8,0);
    }
  }
  return 1;
}


