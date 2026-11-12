#include "001f2ac0_001f311c.h"



void fn_001f311c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_150 [4];
  undefined4 local_14c;
  undefined1 local_148;
  undefined1 local_147;
  undefined2 local_140;
  undefined1 local_130;
  undefined1 local_123;
  
  fn_001cff74(auStack_150);
  fn_002e9fd4(auStack_150,param_2);
  fn_006f7a84(DAT_008977e0);
  local_14c = fn_006ab040();
  iVar1 = fn_006afabc(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  local_148 = 0;
  if (iVar1 != 0) {
    iVar1 = fn_006f7a0c(DAT_008977e0);
    iVar1 = fn_006c3a70(*(undefined4 *)(iVar1 + 0x30));
    local_148 = 0;
    if (iVar1 != 0) {
      local_148 = 1;
    }
  }
  iVar1 = fn_006afb24(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  local_147 = 0;
  if (iVar1 != 0) {
    iVar1 = fn_006f7a0c(DAT_008977e0);
    iVar1 = fn_006c3a84(*(undefined4 *)(iVar1 + 0x30));
    local_147 = 0;
    if (iVar1 != 0) {
      local_147 = 1;
    }
  }
  local_130 = 1;
  local_140 = 5;
  local_123 = fn_006b6398(*(undefined4 *)(DAT_00897804 + 8));
  uVar2 = fn_00154ae0(DAT_008977e4);
  fn_001d1284(uVar2,auStack_150);
  fn_006952bc(DAT_008977e0);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



undefined4 fn_001f30d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  if ((iVar1 == 0) || (iVar1 = fn_00402100(iVar1,param_2), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = fn_0015a130(param_1);
  return uVar2;
}



undefined1 fn_001f30b0(void)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_00228098();
  if (iVar1 != 0) {
    iVar1 = fn_00228098();
    uVar2 = *(undefined1 *)(iVar1 + 4);
  }
  return uVar2;
}



void fn_001f3070(void)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = fn_006abd58();
  if (iVar1 != 0) {
    local_20 = *(undefined4 *)(iVar1 + 0x20);
    uStack_1c = *(undefined4 *)(iVar1 + 0x24);
    uStack_18 = *(undefined4 *)(iVar1 + 0x28);
    local_14 = *(undefined4 *)(iVar1 + 0x2c);
    uStack_10 = *(undefined4 *)(iVar1 + 0x30);
    uStack_c = *(undefined4 *)(iVar1 + 0x34);
    fn_001c0340(&local_20,&local_14);
  }
  return;
}



bool fn_001f2e5c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  iVar1 = fn_001cec84();
  bVar6 = iVar1 != 0;
  if (*(char *)(param_1 + 0xf91) != '\0') {
    iVar1 = fn_006f75ac(DAT_008977e0);
    piVar5 = *(int **)(DAT_008977e0 + 0x28);
    uVar2 = 0;
    if ((iVar1 == 0) || (uVar2 = fn_006b5398(), uVar2 != 0)) {
      if (piVar5 != (int *)0x0) {
        uVar2 = (uint)*(byte *)(param_1 + 0xf96);
      }
      if ((piVar5 == (int *)0x0 || uVar2 == 0) ||
         (iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5), iVar1 == 0)) {
        *(undefined1 *)(param_1 + 0xf96) = 0;
        *(undefined1 *)(param_1 + 0xf91) = 0;
        goto LAB_001f2ee8;
      }
    }
    bVar6 = true;
  }
LAB_001f2ee8:
  if (*(char *)(param_1 + 0xf90) != '\0') {
    iVar1 = fn_006f75ac(DAT_008977e0);
    if ((iVar1 == 0) || (iVar1 = fn_001759d0(*(undefined4 *)(iVar1 + 8)), iVar1 == 0)) {
      *(undefined1 *)(param_1 + 0xf90) = 0;
    }
    else {
      bVar6 = true;
    }
  }
  if (*(char *)(param_1 + 0xf92) != '\0') {
    iVar1 = fn_006f7a48(DAT_008977e0);
    if (*(char *)(iVar1 + 4) == '\x06') {
      bVar6 = true;
    }
    else {
      *(undefined1 *)(param_1 + 0xf92) = 0;
      if (*(char *)(DAT_008977e0 + 0x218) == '\0') {
        fn_00699014(DAT_008977e0,0);
      }
      if (*(char *)(param_1 + 0xf99) != '\0') {
        fn_00698fb8(DAT_008977e0,1);
      }
    }
  }
  if (*(char *)(param_1 + 0xf93) != '\0') {
    if (*(int **)(param_1 + 0xf7c) == (int *)0x0) {
      iVar1 = fn_00145b00(0x108,&DAT_00812c8c);
      piVar5 = (int *)0x0;
      if (iVar1 != 0) {
        piVar5 = (int *)fn_003dcbfc();
      }
      piVar4 = *(int **)(param_1 + 0xf7c);
      if (piVar4 != piVar5) {
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        *(int **)(param_1 + 0xf7c) = piVar5;
      }
      (**(code **)(**(int **)(param_1 + 0xf7c) + 8))
                (*(int **)(param_1 + 0xf7c),*(undefined4 *)(param_1 + 0xf80),0);
    }
    else {
      iVar1 = (**(code **)(**(int **)(param_1 + 0xf7c) + 0xc))();
      uVar3 = (**(code **)(**(int **)(param_1 + 0xf7c) + 0x14))();
      *(undefined4 *)(param_1 + 0xf84) = uVar3;
      uVar3 = (**(code **)(**(int **)(param_1 + 0xf7c) + 0x18))();
      *(undefined4 *)(param_1 + 0xf88) = uVar3;
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0xf93) = 0;
        goto LAB_001f3034;
      }
    }
    bVar6 = true;
  }
LAB_001f3034:
  if (*(char *)(param_1 + 0xf95) != '\0') {
    piVar5 = (int *)fn_006f72e0(DAT_008977e0);
    iVar1 = (**(code **)(*piVar5 + 0x3c))();
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xf95) = 0;
    }
    else {
      bVar6 = true;
    }
  }
  return bVar6;
}



undefined4 fn_001f2d7c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_00163edc(param_1,*(undefined4 *)(param_1 + 0x78),param_3,&local_24);
  iVar1 = local_20 - local_24 >> 0x1f;
  if (((local_20 - local_24) / 0xc + iVar1 != iVar1) &&
     (iVar1 = fn_00145b00(0x30,&DAT_00812c8c), iVar1 != 0)) {
    iVar1 = fn_00311970(iVar1,param_2,&local_24,0,1);
    if (iVar1 != 0) {
      fn_001f25d4(param_1,param_2,local_24,1);
      uVar2 = fn_0015a130(param_1,iVar1);
      fn_00168b28(&local_24);
      return uVar2;
    }
  }
  fn_00168b28(&local_24);
  return 0xffffffff;
}



undefined4 fn_001f2c1c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  fn_00163edc(param_1,*(undefined4 *)(param_1 + 0x78),param_2,&local_28);
  fn_00163edc(param_1,*(undefined4 *)(param_1 + 0x78),param_3,&local_1c);
  iVar1 = local_24 - local_28 >> 0x1f;
  if ((local_24 - local_28) / 0xc + iVar1 != iVar1) {
    iVar1 = local_18 - local_1c >> 0x1f;
    if ((((local_18 - local_1c) / 0xc + iVar1 != iVar1) &&
        (iVar1 = fn_00145b00(0x38,&DAT_00812c8c), iVar1 != 0)) &&
       (iVar1 = fn_003cd068(iVar1,&local_28,&local_1c,0), iVar1 != 0)) {
      iVar2 = fn_006f7a5c(DAT_008977e0);
      *(undefined1 *)(iVar2 + 0xc) = 2;
      uVar3 = fn_006f7a5c(DAT_008977e0);
      fn_001d92ac(uVar3);
      uVar3 = fn_006f7a5c(DAT_008977e0);
      fn_005456d0(uVar3);
      uVar3 = fn_0015a130(param_1,iVar1);
      fn_00168b28(&local_1c);
      fn_00168b28(&local_28);
      return uVar3;
    }
  }
  fn_00168b28(&local_1c);
  fn_00168b28(&local_28);
  return 0xffffffff;
}



void fn_001f2bf0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)fn_006f72e0(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x001f2c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x9c))(piVar1,param_2);
  return;
}



void fn_001f2bac(void)

{
  int iVar1;
  
  iVar1 = fn_006abd58();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = fn_006f7a5c(DAT_008977e0);
  *(undefined1 *)(iVar1 + 0xc) = 2;
  fn_006f7a5c(DAT_008977e0);
  fn_005456d0();
  return;
}



undefined4 fn_001f2b50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xe4c);
  if ((iVar3 == 0) || (iVar1 = fn_006abd58(), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = fn_0035b7f0(iVar3,iVar1 + 0x20,iVar1 + 0x2c,iVar1 + 0x38,param_3,1,0);
  return uVar2;
}



void fn_001f2ac0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar2 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2;
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      uVar3 = *(undefined4 *)(param_1 + 0x40);
      uVar4 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2;
      if (uVar4 <= uVar2) {
        fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,uVar2,uVar4);
      }
      fn_0023d3f4(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x44) + uVar2 * 4));
    }
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x44);
  uVar2 = *(uint *)(param_1 + 0x48);
  if (uVar4 != uVar2) {
    uVar1 = uVar4;
    if (uVar2 <= uVar4) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar2);
    }
    *(uint *)(param_1 + 0x48) = uVar2 - (uVar2 - uVar4 & 0xfffffffc);
  }
  return;
}


