#include "00485c44_00486924.h"



void fn_00486924(int param_1)

{
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    local_18 = *(int *)(param_1 + 0x110);
    uStack_14 = *(undefined4 *)(param_1 + 0x114);
    uStack_10 = *(undefined4 *)(param_1 + 0x118);
    if (-1 < local_18) {
      fn_0048bb28(*(undefined4 *)(param_1 + 0x138));
    }
  }
  local_18 = *(int *)(param_1 + 0xa8);
  uStack_14 = *(undefined4 *)(param_1 + 0xac);
  uStack_10 = *(undefined4 *)(param_1 + 0xb0);
  fn_00486978(param_1,&local_18);
  return;
}



void fn_00486814(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *local_28;
  code *local_24;
  undefined4 uStack_20;
  undefined *local_1c;
  
  fn_0078667c(param_1 + 0x110,param_1 + 0x2e0);
  piVar3 = (int *)**(int **)(param_1 + 0x120);
  if (piVar3 != *(int **)(param_1 + 0x120)) {
    do {
      iVar1 = fn_006d0c7c(piVar3 + 2);
      iVar2 = fn_006d0c7c(param_1 + 0x2e0);
      if (iVar1 == iVar2) {
        iVar1 = fn_006d0ce0(piVar3 + 2);
        iVar2 = fn_006d0ce0(param_1 + 0x2e0);
        if (iVar1 != iVar2) {
          fn_00456aa0(param_1 + 0x2e0,piVar3 + 2);
          *(undefined4 *)(param_1 + 0x2c0) = 5;
          local_24 = fn_00486044;
          uStack_20 = 0;
          local_1c = &DAT_0048691c;
          local_28 = &DAT_00853500;
          fn_00479c98(param_1,&local_28);
          return;
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0x120));
  }
  local_24 = fn_004858f0;
  uStack_20 = 0;
  local_1c = &DAT_0048691c;
  local_28 = &DAT_00853500;
  fn_00479c98(param_1,&local_28);
  return;
}



void fn_00486704(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *local_28;
  code *local_24;
  undefined4 uStack_20;
  undefined *local_1c;
  
  fn_0078667c(param_1 + 0x110,param_1 + 0x2e0);
  piVar3 = (int *)**(int **)(param_1 + 0x120);
  if (piVar3 != *(int **)(param_1 + 0x120)) {
    do {
      iVar1 = fn_006d0c7c(piVar3 + 2);
      iVar2 = fn_006d0c7c(param_1 + 0x2e0);
      if (iVar1 != iVar2) {
        iVar1 = fn_006d0ce0(piVar3 + 2);
        iVar2 = fn_006d0ce0(param_1 + 0x2e0);
        if (iVar1 == iVar2) {
          fn_00456aa0(param_1 + 0x2e0,piVar3 + 2);
          *(undefined4 *)(param_1 + 0x2c0) = 4;
          local_24 = fn_00486044;
          uStack_20 = 0;
          local_1c = &DAT_0048680c;
          local_28 = &DAT_00853500;
          fn_00479c98(param_1,&local_28);
          return;
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0x120));
  }
  local_24 = fn_004858f0;
  uStack_20 = 0;
  local_1c = &DAT_0048680c;
  local_28 = &DAT_00853500;
  fn_00479c98(param_1,&local_28);
  return;
}



void fn_004866b8(int param_1)

{
  undefined *local_18;
  code *pcStack_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  *(undefined4 *)(param_1 + 0x2c0) = 3;
  pcStack_14 = fn_00486044;
  uStack_10 = 0;
  local_c = &DAT_004866fc;
  local_18 = &DAT_00853500;
  fn_00479c98(param_1,&local_18);
  return;
}



void fn_0048666c(int param_1)

{
  undefined *local_18;
  code *pcStack_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  *(undefined4 *)(param_1 + 0x2c0) = 2;
  pcStack_14 = fn_00486044;
  uStack_10 = 0;
  local_c = &DAT_004866b0;
  local_18 = &DAT_00853500;
  fn_00479c98(param_1,&local_18);
  return;
}



void fn_004865c0(int param_1)

{
  undefined **ppuVar1;
  undefined *local_30;
  code *local_2c;
  undefined4 uStack_28;
  undefined *local_24;
  undefined *local_20;
  code *local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  
  ppuVar1 = &local_30;
  if (*(int *)(param_1 + 0x124) == 0) {
    ppuVar1 = &local_20;
    local_1c = fn_004858f0;
    uStack_18 = 0;
    local_20 = &DAT_00853500;
    puStack_14 = &DAT_00486664;
  }
  else {
    fn_00456aa0(param_1 + 0x2e0,**(int **)(param_1 + 0x120) + 8);
    *(undefined4 *)(param_1 + 700) = 0x9c4;
    *(undefined4 *)(param_1 + 0x2c0) = 1;
    local_2c = fn_00486044;
    uStack_28 = 0;
    local_24 = &DAT_00486664;
    local_30 = &DAT_00853500;
  }
  fn_00479c98(param_1,ppuVar1);
  return;
}



void fn_00486044(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  code *pcStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x2c0);
  uVar1 = fn_006d0c7c(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x30c) = uVar1;
  fn_00476814(param_1 + 0x300);
  fn_004b5f90(param_1 + 0x19c,param_1 + 0x300,0x10,param_1 + 0x2e0);
  fn_004b4218(&local_20);
  uVar2 = *(uint *)(param_1 + 700) + (*(uint *)(param_1 + 700) >> 2);
  *(undefined4 *)(param_1 + 0x2d8) = local_20;
  *(undefined4 *)(param_1 + 0x2dc) = uStack_1c;
  if (uVar2 < 0x271) {
    uVar2 = 0x271;
  }
  fn_004b41a8(&local_20,uVar2);
  *(undefined4 *)(param_1 + 0x2d0) = local_20;
  *(undefined4 *)(param_1 + 0x2d4) = uStack_1c;
  pcStack_14 = fn_00485f90;
  uStack_10 = 0;
  puStack_c = &DAT_004860fc;
  puStack_18 = &DAT_00853500;
  fn_00479c98(param_1,&puStack_18);
  return;
}



void fn_00485f90(int param_1)

{
  int iVar1;
  undefined4 uStack_1c;
  uint local_18;
  uint uStack_14;
  
  uStack_1c = 0;
  iVar1 = fn_004b5e9c(param_1 + 0x19c,param_1 + 0x18c,0x10,&uStack_1c,param_1 + 0x168);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    fn_00476848(param_1 + 0x18c);
    fn_00484f24(param_1,param_1 + 0x18c);
    return;
  }
  fn_004b4218(&local_18);
  if (uStack_14 < *(uint *)(param_1 + 0x2d4) ||
      *(uint *)(param_1 + 0x2d4) - uStack_14 < (uint)(local_18 <= *(uint *)(param_1 + 0x2d0))) {
    fn_004b2e68(param_1,0x10,*(uint *)(param_1 + 0x2d0) - local_18);
    return;
  }
  *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + 1;
  fn_0048528c(param_1);
  return;
}



void fn_00485c44(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  int local_3c;
  uint local_38;
  uint uStack_34;
  undefined *local_30;
  code *local_2c;
  undefined4 uStack_28;
  undefined *local_24;
  
  fn_004b4218(&local_38);
  if ((*(uint *)(param_1 + 0x2d4) < uStack_34 ||
       uStack_34 - *(uint *)(param_1 + 0x2d4) < (uint)(*(uint *)(param_1 + 0x2d0) <= local_38)) ||
     (*(char *)(param_1 + 800) != '\0')) {
    uVar1 = *(uint *)(param_1 + 0x364);
    if (*(char *)(param_1 + 0x188) != '\x03') {
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = *(int *)(param_1 + 0x38c);
      }
      if ((uVar1 != 0 && iVar2 != 0) || (2 < *(uint *)(param_1 + 0x31c))) {
        local_2c = fn_004858f0;
      }
      else {
        *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 0x31c) + 1;
        *(undefined1 *)(param_1 + 800) = 0;
        local_2c = fn_00486100;
      }
      uStack_28 = 0;
      local_24 = &DAT_00485f84;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
      return;
    }
    if ((uVar1 != 0) || (3 < *(uint *)(param_1 + 0x31c))) {
      if ((DAT_008b688c <= uVar1) ||
         ((*(char *)(param_1 + 0x39c) == '\0' || (3 < *(uint *)(param_1 + 0x31c))))) {
        local_2c = fn_00485570;
        uStack_28 = 0;
        local_24 = &DAT_00485f84;
        local_30 = &DAT_00853500;
        DAT_008b688c = uVar1;
        fn_00479c98(param_1,&local_30);
        return;
      }
      fn_004b604c(param_1 + 0x19c);
      fn_004b5f40(param_1 + 0x19c,1);
      uVar1 = 0;
      do {
        uVar4 = fn_00468f84();
        fn_00456a1c(param_1 + 0x128,uVar4);
        iVar2 = fn_004b5ebc(param_1 + 0x19c,param_1 + 0x128,0);
        if (iVar2 != 0) break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < 5);
    }
    *(int *)(param_1 + 0x31c) = *(int *)(param_1 + 0x31c) + 1;
    *(undefined1 *)(param_1 + 800) = 0;
    local_2c = fn_00486100;
    uStack_28 = 0;
    local_24 = &DAT_00485f84;
    local_30 = &DAT_00853500;
    fn_00479c98(param_1,&local_30);
    return;
  }
  do {
    if (*(int *)(param_1 + 0x338) == 0) break;
    iVar2 = fn_004b5f90(param_1 + 0x19c,**(int **)(param_1 + 0x334) + 0x28,0x10,
                         **(int **)(param_1 + 0x334) + 8);
    piVar6 = (int *)**(int **)(param_1 + 0x334);
    if (piVar6 != *(int **)(param_1 + 0x334)) {
      *(int *)piVar6[1] = *piVar6;
      *(int *)(*piVar6 + 4) = piVar6[1];
      *(int *)(param_1 + 0x338) = *(int *)(param_1 + 0x338) + -1;
      *piVar6 = *(int *)(param_1 + 0x328);
      *(int **)(param_1 + 0x328) = piVar6;
    }
  } while (iVar2 == 0);
  local_3c = 0;
  iVar3 = fn_004b5e9c(param_1 + 0x19c,param_1 + 0x18c,0x10,&local_3c,param_1 + 0x168);
  iVar2 = iVar3;
  if (iVar3 == 0) {
    iVar2 = local_3c;
  }
  if (iVar3 != 0 || iVar2 != 0x10) goto LAB_00485ddc;
  fn_00476848(param_1 + 0x18c);
  uVar1 = *(int *)(param_1 + 0x18c) - 0x65;
  if (uVar1 < 3) {
    uVar4 = *(undefined4 *)(param_1 + 400);
    uVar5 = *(undefined4 *)(param_1 + 0x194);
    uVar7 = *(undefined4 *)(param_1 + 0x198);
    iVar2 = param_1 + uVar1 * 0x14;
    *(int *)(iVar2 + 0x360) = *(int *)(param_1 + 0x18c);
    *(undefined4 *)(iVar2 + 0x364) = uVar4;
    *(undefined4 *)(iVar2 + 0x368) = uVar5;
    *(undefined4 *)(iVar2 + 0x36c) = uVar7;
    *(int *)(iVar2 + 0x370) = *(int *)(iVar2 + 0x370) + 1;
  }
  if (*(char *)(param_1 + 0x188) == '\x03') {
    if (*(int *)(param_1 + 0x370) == 0) goto LAB_00485ddc;
  }
  else {
    if (*(char *)(param_1 + 0x188) != '\x01') goto LAB_00485ddc;
    bVar8 = *(int *)(param_1 + 0x370) == 0;
    iVar2 = 0;
    if (!bVar8) {
      iVar2 = *(int *)(param_1 + 900);
    }
    bVar9 = iVar2 == 0;
    if (!bVar8 && !bVar9) {
      iVar2 = *(int *)(param_1 + 0x398);
    }
    if ((bVar8 || bVar9) || iVar2 == 0) goto LAB_00485ddc;
  }
  *(undefined1 *)(param_1 + 800) = 1;
LAB_00485ddc:
  fn_004b2e68(param_1,100);
  return;
}


