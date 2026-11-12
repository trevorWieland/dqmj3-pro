#include "0056fa30_005703dc.h"



void fn_005703dc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00570520(iVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fn_005701c8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  
  puVar4 = (undefined4 *)param_1[6];
  local_20 = param_4;
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_008963e0) goto LAB_0057020c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_0057020c:
  param_1[0x41] = (int)puVar4;
  if (param_1[0x3a] == 0) {
    param_1[0x3a] = (int)(puVar4 + 4);
  }
  if (param_1[0x39] == 0) {
    param_1[0x39] = puVar4[2];
  }
  uVar2 = fn_0043cd80(param_1);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_008963ac) goto LAB_00570280;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00570280:
  param_1[0x42] = (int)puVar4;
  if ((*(int *)(puVar4[0xf] + 8) == 0) || (iVar3 = fn_006c41e4(), iVar3 != 2)) {
    fn_00689efc(param_1,0x39,0);
  }
  else {
    fn_00689efc(param_1,0x3a,0);
  }
  iVar3 = fn_00154ac8(0x93);
  if (iVar3 == 0) {
    local_20 = _DAT_00896420;
    fn_002c37e0(param_1,1,&local_20);
  }
  return uVar2;
}



void fn_0056ff94(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)0x0;
  if (param_2 != 0x4e) {
    if (param_2 == 0x50) {
      puVar1 = (undefined4 *)fn_001f74ec(param_1,0x50);
      if (puVar1 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
        do {
          if (puVar2 == &DAT_008944b4) goto LAB_005700d4;
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      puVar1 = (undefined4 *)0x0;
LAB_005700d4:
      *(undefined1 *)(puVar1 + 2) = 0;
      puVar1[4] = 0xd6;
      puVar1[5] = 0xd5;
      puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
      if (puVar1 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
        do {
          if (puVar2 == &DAT_008951dc) {
            puVar6 = puVar1;
            break;
          }
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      fn_0025f354(puVar6,0);
      iVar4 = param_1[0x41];
      uVar5 = 0;
    }
    else {
      if (param_2 != 0x56) {
        return;
      }
      puVar1 = (undefined4 *)fn_001f74ec(param_1,0x56);
      if (puVar1 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
        do {
          if (puVar2 == &DAT_00894498) goto LAB_0056fff4;
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      puVar1 = (undefined4 *)0x0;
LAB_0056fff4:
      puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_008963ac) {
            puVar6 = puVar2;
            break;
          }
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      param_1[0x42] = (int)puVar6;
      if ((*(int *)(puVar6[0xf] + 8) == 0) || (iVar4 = fn_006c41e4(), iVar4 != 2)) {
        fn_005c19c4(puVar1,0xd6,0);
      }
      else {
        fn_005c19c4(puVar1,0xd6,9);
      }
      iVar4 = param_1[0x41];
      uVar5 = 1;
    }
    *(undefined4 *)(iVar4 + 0xc) = uVar5;
    return;
  }
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x4e);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894694) {
        puVar6 = puVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar6[3] = 0x40;
  puVar6[4] = 0xd6;
  puVar6[5] = 0xd5;
  *(undefined4 *)(param_1[0x41] + 0xc) = 0;
  return;
}



undefined * fn_0056fefc(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_0056ff50;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0056ff50:
  param_1[0x42] = (int)puVar1;
  if ((*(int *)(puVar1[0xf] + 8) == 0) || (iVar3 = fn_006c41e4(), iVar3 != 2)) {
    puVar4 = &DAT_007c7e5c;
    *param_2 = 2;
  }
  else {
    puVar4 = &DAT_007c7e7c;
    *param_2 = 2;
  }
  return puVar4;
}



void fn_0056fcd8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_008407f4;
  if ((int *)param_1[0x3d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3d] + 4))();
  }
  if ((int *)param_1[0x3c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3c] + 4))();
  }
  if ((int *)param_1[0x3b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3b] + 4))();
  }
  if ((int *)param_1[0x35] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x35] + 4))();
  }
  if ((int *)param_1[0x34] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x34] + 4))();
  }
  if ((int *)param_1[0x33] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x33] + 4))();
  }
  if ((int *)param_1[0x32] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x32] + 4))();
  }
  if ((int *)param_1[0x31] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x31] + 4))();
  }
  if ((int *)param_1[0x30] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x30] + 4))();
  }
  if ((int *)param_1[0x2f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2f] + 4))();
  }
  if ((int *)param_1[0x2e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2e] + 4))();
  }
  if ((int *)param_1[0x2d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2d] + 4))();
  }
  if ((int *)param_1[0x2c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2c] + 4))();
  }
  if ((int *)param_1[0x2b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2b] + 4))();
  }
  uVar1 = param_1[0x26];
  uVar2 = uVar1;
  if ((uint)param_1[0x27] <= uVar1) {
    for (; uVar2 != param_1[0x27]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x28] - uVar1) >> 2,0);
  uVar1 = param_1[0x23];
  uVar2 = uVar1;
  if ((uint)param_1[0x24] <= uVar1) {
    for (; uVar2 != param_1[0x24]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x25] - uVar1) >> 2,0);
  uVar1 = param_1[0x20];
  uVar2 = uVar1;
  if ((uint)param_1[0x21] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x21]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x22] - uVar1) >> 2,0);
  fn_0068ad5c(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0056faf8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd8 : 0x0056fb74 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_0056fa30(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int local_28;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_FUN_008407f4;
  puVar1[0x19] = 0;
  puVar1[0x1a] = *(undefined4 *)(param_2 + 8);
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar5 = 4;
  puVar1[0x20] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar5 = iVar5 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar5 != 0);
  iVar5 = puVar1[0x20];
  puVar1[0x21] = iVar5 + 0x10;
  puVar1[0x22] = iVar5 + 0x80;
  piVar6 = puVar1 + 0x23;
  *piVar6 = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  local_28 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar6 = (int)puVar2;
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0x24] = *piVar6 + 0x10;
  puVar1[0x25] = *piVar6 + 0x80;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  local_28 = 0x204;
  puVar2 = (undefined4 *)fn_00100fc6(0x810,0);
  puVar1[0x26] = puVar2;
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar5 = puVar1[0x26];
  puVar2 = (undefined4 *)0x0;
  puVar1[0x28] = iVar5 + 0x810;
  puVar1[0x27] = iVar5 + 0x810;
  puVar1[0x29] = 1;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x36] = &DAT_00859370;
  puVar1[0x35] = 0;
  puVar1[0x34] = 0;
  *(undefined1 *)(puVar1 + 0x37) = 0;
  *(undefined1 *)((int)puVar1 + 0xdd) = 0;
  *(undefined1 *)((int)puVar1 + 0xde) = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0xffffffff;
  puVar1[0x3f] = 0xffffffff;
  puVar1[0x40] = 0xffffffff;
  puVar1[0x42] = 0;
  puVar1[0x41] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x43) = 0;
  puVar1[0x44] = 3;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0xffffffff;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  *(undefined1 *)(puVar1 + 0x49) = 0;
  *(undefined1 *)((int)puVar1 + 0x125) = 0;
  puVar3 = (undefined4 *)fn_001f74d8(puVar1,0x2d);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008951dc) {
        puVar2 = puVar3;
        break;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar1[0x19] = puVar2;
  return puVar1;
}


