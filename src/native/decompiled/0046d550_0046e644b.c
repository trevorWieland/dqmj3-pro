#include "0046d550_0046e644b.h"



void fn_0046e644(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    puVar3 = (uint *)(piVar1 + 1);
    do {
      uVar2 = *puVar3 - 1;
      bVar4 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar4);
    *puVar3 = uVar2;
    bVar4 = uVar2 == 0;
    if (bVar4) {
      uVar2 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar4 && uVar2 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 4);
    *(int *)(param_1 + 0x40) = param_2;
    do {
      bVar4 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar4);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



undefined4 fn_0046e0a4(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint local_78 [2];
  undefined1 auStack_70 [4];
  undefined1 local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int *local_4c;
  undefined1 local_44 [16];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x28) + 0x2c))
                      (*(int **)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x20));
    if (uVar3 == 0) {
      local_78[0] = 0x80010002;
      uVar4 = fn_004b8d4c(auStack_28 + 4,local_78);
      fn_00456044(param_2,uVar4);
    }
    else {
      uVar4 = fn_004b72d8(param_3);
      fn_004b72ec(auStack_70,uVar4);
      fn_0074a4c8(auStack_70,local_78);
      if ((local_78[0] & 0x7f) == 0x7f) {
        if ((uint)(*(int *)(local_68 + 0x10) - local_64) < 2) {
          local_6c = 1;
        }
        else {
          local_64 = local_64 + 2;
        }
      }
      local_78[1] = 0;
      local_78[0] = uVar3;
      (**(code **)(**(int **)(uVar3 + 0x28) + 0x30))
                (&local_30,*(int **)(uVar3 + 0x28),auStack_70,param_1);
      iVar5 = fn_006d3b8c(&local_30);
      if (iVar5 != 0) {
        fn_004b7520(auStack_70);
        return 1;
      }
      if (*(char *)(param_2 + 0x10) == '\x01') {
        fn_00456044(param_2,auStack_28 + 4);
      }
      fn_004b7520(auStack_70);
    }
    return 0;
  }
  iVar5 = fn_001249d0();
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0xc);
  }
  piVar1 = (int *)(iVar5 + 0x50);
  (**(code **)(*piVar1 + 8))();
  iVar5 = *(int *)(param_2 + 0x74);
  if (iVar5 == 0) {
    piVar6 = *(int **)(param_1 + 0x24);
    if (piVar6 != (int *)0x0) goto LAB_0046e144;
    iVar5 = *(int *)(param_1 + 0x40);
    if (iVar5 == 0) goto LAB_0046e214;
  }
  piVar6 = (int *)fn_006d0c60(iVar5,*(undefined2 *)(param_1 + 0x20));
  if (piVar6 == (int *)0x0) {
LAB_0046e214:
    local_5c = &DAT_80010001;
    uVar4 = fn_004b8d4c(&local_68,&local_5c);
    fn_00455e8c(param_2,3,uVar4,0);
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return 0;
  }
LAB_0046e144:
  local_4c = &local_34;
  local_54 = fn_004b72d8(param_3);
  local_58 = 1;
  iVar5 = fn_001249d0();
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0xc);
  }
  piVar2 = (int *)(iVar5 + 0x50);
  (**(code **)(*piVar2 + 8))();
  local_60 = 0;
  local_68 = 0;
  local_64 = 0;
  (**(code **)(*piVar6 + 0x78))(local_4c,piVar6,local_54,local_58);
  (**(code **)(*piVar2 + 0xc))(piVar2);
  local_44[0] = 0;
  iVar5 = fn_006d3b54(&local_34,local_44);
  if (iVar5 == 0) {
    fn_00456160(param_2,piVar6,piVar6[0x1e]);
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return 1;
  }
  local_68 = local_34;
  local_64 = local_30;
  local_60 = uStack_2c;
  fn_00456044(param_2,&local_68);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return 0;
}



void fn_0046dd70(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  (**(code **)(DAT_008e968c + 8))();
  piVar1 = DAT_008bad58;
  DAT_008bad54 = DAT_008bad54 + -1;
  if (DAT_008bad54 == 0) {
    if (DAT_008bad58 != (int *)0x0) {
      piVar4 = (int *)DAT_008bad58[4];
      if (piVar4 != (int *)0x0) {
        piVar3 = (int *)*piVar4;
        while (piVar2 = piVar3, piVar2 != piVar4) {
          piVar3 = (int *)piVar1[4];
          if (piVar2 != (int *)piVar1[4]) {
            piVar3 = (int *)*piVar2;
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
            piVar1[5] = piVar1[5] + -1;
            *piVar2 = piVar1[1];
            piVar1[1] = (int)piVar2;
          }
        }
        piVar4 = (int *)piVar1[4];
        *piVar4 = piVar1[1];
        piVar1[1] = (int)piVar4;
        piVar4 = (int *)*piVar1;
        while (piVar4 != (int *)0x0) {
          *piVar1 = *piVar4;
          fn_0014f1bc(piVar4[2]);
          fn_0014f1bc(piVar4);
          piVar4 = (int *)*piVar1;
        }
        piVar1[1] = 0;
        piVar1[2] = 0;
        piVar1[3] = 0;
      }
      fn_00455018(piVar1);
    }
    DAT_008bad58 = (int *)0x0;
    DAT_008c3dcc = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0046de80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_008e968c + 0xc))(&DAT_008e968c);
  return;
}



void fn_0046d794(undefined4 param_1,int param_2)

{
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined8 local_20;
  undefined1 auStack_18 [12];
  
  local_28[0] = *(undefined1 *)(param_2 + 8);
  fn_0015ef4c(param_1,local_28,1);
  switch(*(undefined1 *)(param_2 + 8)) {
  case 1:
    local_20 = fn_006d3a88(param_2);
    fn_0015ef4c(param_1,&local_20,8);
    return;
  case 2:
    fn_006d3ab0(param_2);
    fn_0015ef4c(param_1,&local_20,8);
    return;
  case 3:
    local_24[0] = fn_006d3a74(param_2);
    fn_00454d74(param_1,local_24);
    return;
  case 4:
    fn_006d3ad0(&local_20,param_2);
    fn_0045f6f0(param_1,&local_20);
    fn_00170f54(&local_20);
    break;
  case 5:
    fn_006d3b24(auStack_18,param_2);
    local_20 = fn_004b9c48(auStack_18);
    fn_0015ef4c(param_1,&local_20,8);
    return;
  case 6:
    local_20 = fn_006d3b00(param_2);
    fn_0015ef4c(param_1,&local_20,8);
    return;
  }
  return;
}


