#include "004839a8_00484190.h"



void fn_00484074(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 local_28;
  int local_24 [3];
  int local_18 [3];
  
  if (-1 < *(int *)(param_1 + 0x7c)) {
    pcVar4 = fn_0048389c;
    uVar5 = 0;
    fn_0013d0fc(&local_28);
    *(undefined4 *)(param_1 + 0x40) = local_28;
    *(int *)(param_1 + 0x44) = local_24[0];
    *(code **)(param_1 + 0x50) = pcVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(undefined **)(param_1 + 0x58) = &DAT_00484188;
    return;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x78) + 0x2c))();
  if (iVar2 != 0) {
    local_28 = DAT_008b6418;
    local_18[0] = param_1;
    (**(code **)(**(int **)(param_1 + 0x78) + 0x74))
              (local_24,*(int **)(param_1 + 0x78),fn_003e69c8,local_18);
    if (-1 < local_24[0]) {
      piVar3 = (int *)(param_1 + 4);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = *piVar3 + 1;
      fn_004b301c(param_1,2);
    }
  }
  pcVar4 = fn_00484190;
  uVar5 = 0;
  fn_0013d0fc(&local_28);
  *(undefined4 *)(param_1 + 0x40) = local_28;
  *(int *)(param_1 + 0x44) = local_24[0];
  *(code **)(param_1 + 0x50) = pcVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined **)(param_1 + 0x58) = &DAT_00484188;
  return;
}



void fn_00484190(int param_1)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x78) + 100))();
  if (iVar2 == 8) {
    *(undefined1 *)(param_1 + 0x1bc) = 1;
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x78) + 4) + 0x40))();
  *(undefined4 *)(param_1 + 0x78) = 0;
  iVar2 = fn_004b7748();
  if (iVar2 == 0) {
    pcVar3 = fn_004834e8;
    uVar4 = 0;
    fn_0013d0fc(&local_28);
    *(undefined4 *)(param_1 + 0x40) = local_28;
    *(undefined4 *)(param_1 + 0x44) = uStack_24;
    *(code **)(param_1 + 0x50) = pcVar3;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined **)(param_1 + 0x58) = &DAT_004842d4;
    return;
  }
  iVar2 = fn_004b7748();
  if (*(int *)(iVar2 + 0x100) != 0) {
    pcVar3 = fn_00483708;
    uVar4 = 0;
    fn_0013d0fc(&local_28);
    *(undefined4 *)(param_1 + 0x40) = local_28;
    *(undefined4 *)(param_1 + 0x44) = uStack_24;
    *(code **)(param_1 + 0x50) = pcVar3;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined **)(param_1 + 0x58) = &DAT_004842d4;
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x1aa);
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x1ac);
    fn_0017695c(iVar2 + 8);
    *(ushort *)(*(int *)(iVar2 + 0xc) + 6) = uVar1 << 8 | uVar1 >> 8;
    *(undefined1 *)(iVar2 + 0x6d) = 0;
    *(undefined2 *)(param_1 + 0x1aa) = 0;
  }
  *(undefined4 *)(param_1 + 0x1ac) = **(undefined4 **)(param_1 + 0x1ac);
  pcVar3 = fn_0048322c;
  uVar4 = 0;
  fn_0013d0fc(&local_28);
  *(undefined4 *)(param_1 + 0x40) = local_28;
  *(undefined4 *)(param_1 + 0x44) = uStack_24;
  *(code **)(param_1 + 0x50) = pcVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined **)(param_1 + 0x58) = &DAT_004842d4;
  return;
}



undefined4 fn_00483f4c(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [4];
  int local_74;
  char local_14;
  
  iVar3 = fn_004b7748();
  if (*(int *)(iVar3 + 0x100) != 0) {
    fn_0013ce04(auStack_78);
    iVar3 = *(int *)(param_1 + 0x1ac);
    iVar4 = fn_004b7748();
    iVar3 = fn_00487560(*(undefined4 *)(iVar4 + 0x100),iVar3 + 8,auStack_78);
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x1ac);
      if (*(char *)(iVar3 + 0x6c) == '\0') {
        fn_0014ea80();
      }
      uVar1 = *(ushort *)(*(int *)(iVar3 + 0xc) + 6);
      if (local_14 == '\0') {
        fn_0014ea80(auStack_78);
      }
      if ((ushort)(uVar1 << 8 | uVar1 >> 8) !=
          (ushort)(*(ushort *)(local_74 + 6) << 8 | *(ushort *)(local_74 + 6) >> 8)) {
        iVar3 = *(int *)(param_1 + 0x1ac);
        if (*(char *)(iVar3 + 0x6c) == '\0') {
          fn_0014ea80();
        }
        uVar1 = *(ushort *)(*(int *)(iVar3 + 0xc) + 6);
        *(ushort *)(param_1 + 0x1aa) = uVar1 << 8 | uVar1 >> 8;
        iVar3 = *(int *)(param_1 + 0x1ac);
        if (local_14 == '\0') {
          fn_0014ea80(auStack_78);
        }
        uVar2 = *(undefined2 *)(local_74 + 6);
        fn_0017695c(iVar3 + 8);
        *(undefined2 *)(*(int *)(iVar3 + 0xc) + 6) = uVar2;
        *(undefined1 *)(iVar3 + 0x6d) = 0;
        fn_0013ce98(auStack_78);
        return 1;
      }
    }
    fn_0013ce98(auStack_78);
  }
  return 0;
}



undefined1 fn_00483f20(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = fn_001249d0();
  iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x178));
  uVar1 = 0;
  if (iVar2 != 0) {
    iVar2 = fn_001249d0();
    uVar1 = *(undefined1 *)(iVar2 + 0x30);
  }
  return uVar1;
}



void fn_00483dc0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(param_1 + 0x1ac) = **(undefined4 **)(param_1 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  pcVar1 = fn_0048322c;
  uVar2 = 0;
  fn_0013d0fc(&local_20);
  *(undefined4 *)(param_1 + 0x40) = local_20;
  *(undefined4 *)(param_1 + 0x44) = uStack_1c;
  *(code **)(param_1 + 0x50) = pcVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined **)(param_1 + 0x58) = &DAT_00483e20;
  return;
}



void fn_004839a8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined1 auStack_90 [104];
  uint local_28;
  int local_24;
  
  iVar2 = fn_004b7748();
  iVar4 = 0;
  if ((iVar2 == 0) || (iVar2 = fn_004b7748(), *(int *)(iVar2 + 0x100) == 0)) {
    pcVar7 = fn_004834e8;
    uVar8 = 0;
    fn_0013d0fc(&local_28);
    *(uint *)(param_1 + 0x40) = local_28;
    *(int *)(param_1 + 0x44) = local_24;
    *(code **)(param_1 + 0x50) = pcVar7;
    *(undefined4 *)(param_1 + 0x54) = uVar8;
    *(undefined **)(param_1 + 0x58) = &DAT_00483bb8;
    return;
  }
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    uVar8 = fn_0013cd7c(auStack_90,*(int *)(param_1 + 0x1ac) + 8);
    iVar2 = fn_004b7748();
    iVar2 = fn_00487dd4(*(undefined4 *)(iVar2 + 0x100),uVar8);
    fn_0013ce98(auStack_90);
    uVar1 = DAT_008b6414;
    if (iVar2 == 0) {
LAB_00483b84:
      pcVar7 = fn_00483634;
      uVar8 = 0;
      fn_0013d0fc(&local_28);
      *(uint *)(param_1 + 0x40) = local_28;
      *(int *)(param_1 + 0x44) = local_24;
      *(code **)(param_1 + 0x50) = pcVar7;
      *(undefined4 *)(param_1 + 0x54) = uVar8;
      goto LAB_00483b10;
    }
    if (DAT_008b6414 == 0xffffffff) goto LAB_00483ac8;
    fn_0013d0fc(&local_28);
joined_r0x00483b7c:
    if ((int)uVar1 < 0) {
      iVar2 = local_28 + uVar1;
      iVar4 = local_24 - (((int)-uVar1 >> 0x1f) + (uint)(local_28 < -uVar1));
    }
    else {
      iVar2 = local_28 + uVar1;
      iVar4 = local_24 + ((int)uVar1 >> 0x1f) + (uint)CARRY4(local_28,uVar1);
    }
  }
  else {
    iVar2 = fn_004b7748();
    iVar6 = *(int *)(iVar2 + 0x100);
    iVar2 = *(int *)(param_1 + 0x1ac);
    iVar3 = fn_001249d0();
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    piVar5 = (int *)(iVar4 + 0x50);
    (**(code **)(*piVar5 + 8))(piVar5);
    iVar2 = fn_0045f4ec(iVar6 + 0x50,iVar2 + 8);
    if (iVar2 == 0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x78);
      (**(code **)(*piVar5 + 0xc))(piVar5);
      if (iVar2 != -1) goto LAB_00483b84;
    }
    uVar1 = DAT_008b6414;
    if (DAT_008b6414 != 0xffffffff) {
      fn_0013d0fc(&local_28);
      goto joined_r0x00483b7c;
    }
LAB_00483ac8:
    iVar2 = 0;
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x188) = iVar2;
  *(int *)(param_1 + 0x18c) = iVar4;
  pcVar7 = fn_00483bc4;
  uVar8 = 0;
  fn_0013d0fc(&local_28);
  *(uint *)(param_1 + 0x40) = local_28;
  *(int *)(param_1 + 0x44) = local_24;
  *(code **)(param_1 + 0x50) = pcVar7;
  *(undefined4 *)(param_1 + 0x54) = uVar8;
LAB_00483b10:
  *(undefined **)(param_1 + 0x58) = &DAT_00483bb8;
  return;
}



void fn_00483bc4(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint local_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar2 = fn_004b7748();
  if ((iVar2 == 0) || (iVar2 = fn_004b7748(), *(int *)(iVar2 + 0x100) == 0)) {
    pcVar6 = fn_004834e8;
    uVar7 = 0;
    fn_0013d0fc(&local_30);
    *(uint *)(param_1 + 0x40) = local_30;
    *(uint *)(param_1 + 0x44) = uStack_2c;
    *(code **)(param_1 + 0x50) = pcVar6;
    *(undefined4 *)(param_1 + 0x54) = uVar7;
    *(undefined **)(param_1 + 0x58) = &DAT_00483db4;
    return;
  }
  iVar2 = fn_004b7748();
  iVar5 = *(int *)(iVar2 + 0x100);
  iVar2 = *(int *)(param_1 + 0x1ac);
  iVar3 = fn_001249d0();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  iVar2 = fn_0045f4ec(iVar5 + 0x50,iVar2 + 8);
  if (iVar2 == 0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x78);
    (**(code **)(*piVar4 + 0xc))(piVar4);
    if (iVar2 != -1) {
      *(int *)(param_1 + 0x1b8) = iVar2;
      pcVar6 = fn_00483634;
      uVar7 = 0;
      fn_0013d0fc(&local_30);
      *(uint *)(param_1 + 0x40) = local_30;
      *(uint *)(param_1 + 0x44) = uStack_2c;
      *(code **)(param_1 + 0x50) = pcVar6;
      *(undefined4 *)(param_1 + 0x54) = uVar7;
      *(undefined **)(param_1 + 0x58) = &DAT_00483db4;
      return;
    }
  }
  fn_0013d0fc(&local_30);
  if ((uStack_2c < *(uint *)(param_1 + 0x18c) ||
       *(uint *)(param_1 + 0x18c) - uStack_2c < (uint)(local_30 <= *(uint *)(param_1 + 0x188))) &&
     ((*(char *)(param_1 + 0x1b0) != '\0' ||
      (iVar2 = fn_00487620(iVar5,*(int *)(param_1 + 0x1ac) + 8,
                            *(uint *)(param_1 + 0x188) - local_30), iVar2 == 0)))) {
    fn_004b301c(param_1,1);
    *(undefined4 *)(param_1 + 0x24) = 100;
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x1aa);
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x1ac);
    fn_0017695c(iVar2 + 8);
    *(ushort *)(*(int *)(iVar2 + 0xc) + 6) = uVar1 << 8 | uVar1 >> 8;
    *(undefined1 *)(iVar2 + 0x6d) = 0;
    *(undefined2 *)(param_1 + 0x1aa) = 0;
  }
  *(undefined4 *)(param_1 + 0x1ac) = **(undefined4 **)(param_1 + 0x1ac);
  pcVar6 = fn_0048322c;
  uVar7 = 0;
  fn_0013d0fc(&local_28);
  *(undefined4 *)(param_1 + 0x40) = local_28;
  *(undefined4 *)(param_1 + 0x44) = uStack_24;
  *(code **)(param_1 + 0x50) = pcVar6;
  *(undefined4 *)(param_1 + 0x54) = uVar7;
  *(undefined **)(param_1 + 0x58) = &DAT_00483db4;
  return;
}


