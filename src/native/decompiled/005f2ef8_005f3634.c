#include "005f2ef8_005f3634.h"



void fn_005f3634(undefined4 *param_1)

{
  *param_1 = &DAT_00858ed8;
  (*(code *)**(undefined4 **)param_1[0xe])();
  fn_005f1264(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_005f3584(undefined4 *param_1)

{
  *param_1 = &DAT_00858eb4;
  (**(code **)(*(int *)param_1[1] + 0xc))((int *)param_1[1],param_1[3]);
  param_1[3] = 0;
  return param_1;
}



void fn_005f3350(int param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char local_48 [4];
  undefined *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 uStack_24;
  int local_1c [2];
  
  local_40 = 0;
  local_44 = &DAT_0085238c;
  local_2c = -0x181c0001;
  local_34 = 0;
  local_30 = 0;
  local_3c = 0;
  local_38 = 0;
  local_48[0] = param_3;
  uVar1 = fn_0014d6cc(&local_40,param_4,1);
  if ((uVar1 & 0x80000000) == 0) {
    if (local_48[0] == '\0' || local_48[0] == '\x04') {
      iVar3 = fn_001560d8(&local_40,&local_28);
      if (iVar3 < 0) {
        fn_0015e590(iVar3,0x5f3494);
      }
      *(int *)(param_1 + 0x18) = local_28;
      *(undefined4 *)(param_1 + 0x1c) = uStack_24;
    }
    else {
      local_2c = fn_001560d8(&local_40,(int *)(param_1 + 0x18));
      if (local_2c < 0) goto LAB_005f352c;
    }
    if (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      fn_005f11cc(param_2,1);
      fn_005c7dc0(local_48);
      return;
    }
    uVar2 = (**(code **)(**(int **)(param_1 + 4) + 8))
                      (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 0x18),
                       *(undefined1 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x1c);
    if (local_48[0] == '\0' || local_48[0] == '\x04') {
      iVar3 = fn_0014d9ec(&local_40,&local_28,uVar2,*(undefined4 *)(param_1 + 0x10));
      if (iVar3 < 0) {
        fn_0015e590(iVar3,0x5f34ec);
      }
      local_1c[0] = local_28;
    }
    else {
      local_2c = fn_0014d9ec(&local_40,local_1c,uVar2,*(undefined4 *)(param_1 + 0x10));
      if (local_2c < 0) goto LAB_005f352c;
    }
    if (local_1c[0] == *(int *)(param_1 + 0x10) && local_1c[0] >> 0x1f == *(int *)(param_1 + 0x14))
    {
      fn_005f11cc(param_2,1);
      fn_005c7dc0(local_48);
      return;
    }
    (**(code **)(**(int **)(param_1 + 4) + 0xc))
              (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
  }
LAB_005f352c:
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  fn_005f11cc(param_2,2);
  fn_005c7dc0(local_48);
  return;
}



undefined4 * fn_005f32f8(undefined4 *param_1)

{
  *param_1 = &DAT_00858e90;
  if (*(char *)(param_1 + 10) != '\0') {
    fn_0030233c(param_1[1]);
  }
  return param_1;
}



void fn_005f3088(int param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  char local_48 [4];
  undefined *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 uStack_24;
  int local_20 [3];
  
  local_40 = 0;
  local_44 = &DAT_0085238c;
  local_2c = -0x181c0001;
  local_34 = 0;
  local_30 = 0;
  local_3c = 0;
  local_38 = 0;
  local_48[0] = param_3;
  uVar1 = fn_0014d6cc(&local_40,param_4,1);
  if ((uVar1 & 0x80000000) != 0) {
LAB_005f3270:
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    fn_005f11cc(param_2,2);
    fn_005c7dc0(local_48);
    return;
  }
  if (local_48[0] == '\0' || local_48[0] == '\x04') {
    iVar2 = fn_001560d8(&local_40,&local_28);
    if (iVar2 < 0) {
      fn_0015e590(iVar2,0x5f3190);
    }
    *(int *)(param_1 + 0x10) = local_28;
    *(undefined4 *)(param_1 + 0x14) = uStack_24;
  }
  else {
    local_2c = fn_001560d8(&local_40,(int *)(param_1 + 0x10));
    if (local_2c < 0) goto LAB_005f322c;
  }
  iVar2 = fn_005f2ef8(param_1,param_2);
  if (iVar2 == 0) {
    fn_005c7dc0();
    return;
  }
  if (local_48[0] == '\0' || local_48[0] == '\x04') {
    iVar2 = fn_0015cfa4(&local_40,local_48[0],*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 0x1c));
    if (iVar2 < 0) {
      fn_0015e590(iVar2,0x5f31c0);
    }
  }
  else {
    local_2c = fn_0015cfa4(&local_40,local_48[0],*(undefined4 *)(param_1 + 0x18),
                            *(undefined4 *)(param_1 + 0x1c));
    if (local_2c < 0) goto LAB_005f3270;
  }
  if (local_48[0] == '\0' || local_48[0] == '\x04') {
    iVar2 = fn_0014d9ec(&local_40,&local_28,*(undefined4 *)(param_1 + 4),
                         *(undefined4 *)(param_1 + 0x20));
    if (iVar2 < 0) {
      fn_0015e590(iVar2,0x5f32c0);
    }
    local_20[0] = local_28;
  }
  else {
    local_2c = fn_0014d9ec(&local_40,local_20,*(undefined4 *)(param_1 + 4),
                            *(undefined4 *)(param_1 + 0x20));
    if (local_2c < 0) goto LAB_005f322c;
  }
  if (local_20[0] == *(int *)(param_1 + 0x20) && local_20[0] >> 0x1f == *(int *)(param_1 + 0x24)) {
    fn_005f11cc(param_2,1);
    fn_005c7dc0(local_48);
    return;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    fn_0030233c(*(undefined4 *)(param_1 + 4));
  }
LAB_005f322c:
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  fn_005f11cc(param_2,2);
  fn_005c7dc0(local_48);
  return;
}



undefined4 fn_005f2ef8(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  bool bVar12;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  if (uVar1 == 0 && iVar4 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    fn_005f11cc(param_2,1);
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  iVar11 = *(int *)(param_1 + 0x1c);
  if ((int)(iVar11 - (iVar4 + (uint)(uVar3 < uVar1))) < 0 ==
      (SBORROW4(iVar11,iVar4) != SBORROW4(iVar11 - iVar4,(uint)(uVar3 < uVar1)))) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    fn_005f11cc(param_2,2);
    return 0;
  }
  uVar6 = *(uint *)(param_1 + 0x20);
  uVar7 = *(uint *)(param_1 + 0x24);
  if (uVar6 == 0 && uVar7 == 0) {
    uVar6 = uVar1 - uVar3;
    uVar7 = *(uint *)(param_1 + 8);
    iVar9 = *(int *)(param_1 + 0xc);
    iVar4 = iVar4 - (iVar11 + (uint)(uVar1 < uVar3));
    *(uint *)(param_1 + 0x20) = uVar6;
    *(int *)(param_1 + 0x24) = iVar4;
    if (uVar7 != 0 || iVar9 != 0) {
      puVar5 = (undefined4 *)(param_1 + 0x20);
      if ((int)(iVar9 - (iVar4 + (uint)(uVar7 < uVar6))) < 0 !=
          (SBORROW4(iVar9,iVar4) != SBORROW4(iVar9 - iVar4,(uint)(uVar7 < uVar6)))) {
        puVar5 = (undefined4 *)(param_1 + 8);
      }
      uVar2 = puVar5[1];
      *(undefined4 *)(param_1 + 0x20) = *puVar5;
      *(undefined4 *)(param_1 + 0x24) = uVar2;
    }
  }
  else {
    uVar8 = *(uint *)(param_1 + 8);
    iVar9 = *(int *)(param_1 + 0xc);
    if (uVar8 != 0 || iVar9 != 0) {
      puVar10 = (uint *)(param_1 + 8);
      if ((int)(iVar9 - (uVar7 + (uVar8 < uVar6))) < 0 ==
          (SBORROW4(iVar9,uVar7) != SBORROW4(iVar9 - uVar7,(uint)(uVar8 < uVar6)))) {
        puVar10 = (uint *)(param_1 + 0x20);
      }
      uVar6 = *puVar10;
      uVar7 = puVar10[1];
      *(uint *)(param_1 + 0x20) = uVar6;
      *(uint *)(param_1 + 0x24) = uVar7;
    }
    iVar11 = iVar11 + uVar7 + (uint)CARRY4(uVar3,uVar6);
    bVar12 = uVar1 < uVar3 + uVar6;
    if ((int)(iVar4 - (iVar11 + (uint)bVar12)) < 0 !=
        (SBORROW4(iVar4,iVar11) != SBORROW4(iVar4 - iVar11,(uint)bVar12))) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      fn_005f11cc(param_2,2);
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = fn_002fecec();
    *(undefined4 *)(param_1 + 4) = uVar2;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return 1;
}


