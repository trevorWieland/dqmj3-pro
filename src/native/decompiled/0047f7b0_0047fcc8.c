#include "0047f7b0_0047fcc8.h"



/* WARNING: Removing unreachable block (ram,0x0047febc) */
/* WARNING: Removing unreachable block (ram,0x0047fec8) */

void fn_0047fcc8(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  uint uVar10;
  undefined1 *puVar11;
  int *piVar12;
  uint local_b8 [4];
  uint local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined1 *local_9c;
  undefined *local_98;
  undefined1 *local_94;
  
  piVar1 = (int *)(param_2 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  if ((((*(char *)(param_2 + 0xd) != '\0') &&
       ((((iVar2 = fn_005249a8(param_2 + 0x38,1), iVar2 < 0 ||
          (iVar2 = fn_005249a8(param_2 + 0x38,2), iVar2 < 0)) ||
         (iVar2 = fn_005249a8(param_2 + 0x38,3), iVar2 < 0)) ||
        ((iVar2 = fn_005249a8(param_2 + 0x38,4), iVar2 < 0 ||
         (iVar2 = fn_005249a8(param_2 + 0x38,5), iVar2 < 0)))))) ||
      (iVar2 = fn_005249a8(param_2 + 0x38,6), iVar2 < 0)) ||
     ((((iVar2 = fn_005249a8(param_2 + 0x38,7), iVar2 < 0 ||
        (iVar2 = fn_005249a8(param_2 + 0x38,8), iVar2 < 0)) ||
       ((iVar2 = fn_005249a8(param_2 + 0x38,9), iVar2 < 0 ||
        (iVar2 = fn_005249a8(param_2 + 0x38,10), iVar2 < 0)))) ||
      ((*(char *)(param_2 + 0xe) != '\0' && (iVar2 = fn_00524690(param_2 + 0x38,0x40), iVar2 < 0)))
      ))) {
    *param_1 = 0x80050001;
    param_1[1] = &DAT_007dba44;
    param_1[2] = 0x71;
                    /* WARNING: Could not recover jumptable at 0x0047fe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return;
  }
  if (*(char *)(param_2 + 0xc) != '\0') {
    fn_005247b8(param_2 + 0x38,2,*(undefined4 *)(param_2 + 0x10c4));
    uVar3 = fn_006d162c(param_2);
    fn_00102cec(&local_a8,0x80,(char *)&DAT_004800c0,uVar3);
    fn_005246b4(param_2 + 0x38,(char *)&DAT_004800e4,&local_a8);
  }
  iVar2 = fn_00524628(param_2 + 0x38);
  if (iVar2 < 0) {
    fn_0048029c(param_1,iVar2);
                    /* WARNING: Could not recover jumptable at 0x0047fea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return;
  }
  local_b8[0] = *(uint *)(param_2 + 0x10b0);
  piVar12 = (int *)(param_2 + 0x10b8);
  if ((uint)(*(int *)(param_2 + 0x10c0) - *piVar12) < local_b8[0]) {
    uVar10 = *(int *)(param_2 + 0x10bc) - *piVar12;
    local_a8 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_a8 < uVar10 + 0x20) {
      local_a8 = uVar10 + 0x20;
    }
    puVar7 = local_b8;
    if (local_b8[0] < local_a8) {
      puVar7 = &local_a8;
    }
    local_a4 = *puVar7;
    puVar4 = (undefined1 *)fn_0015ece0();
    puVar11 = *(undefined1 **)(param_2 + 0x10bc);
    puVar5 = puVar4;
    for (puVar8 = (undefined1 *)*piVar12; puVar8 != puVar11; puVar8 = puVar8 + 1) {
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = *puVar8;
      }
      puVar5 = puVar5 + 1;
    }
    if (*piVar12 != 0) {
      pcVar9 = *(code **)(*piVar12 + -8);
      if (pcVar9 == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (*pcVar9)();
      }
    }
    iVar2 = *piVar12;
    *piVar12 = (int)puVar4;
    *(undefined1 **)(param_2 + 0x10bc) = puVar4 + (*(int *)(param_2 + 0x10bc) - iVar2);
    *(undefined1 **)(param_2 + 0x10c0) = puVar4 + local_a4;
  }
  iVar6 = fn_0015ece0(0x20);
  iVar2 = 0;
  if (iVar6 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x10b0);
    iVar6 = fn_001676b0(iVar6 + 4,uVar3);
    iVar2 = iVar6 + -4;
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(undefined4 *)(iVar6 + 0x10) = 0;
    *(undefined4 *)(iVar6 + 0x18) = uVar3;
    *(undefined4 *)(iVar6 + 0x14) = 0;
  }
  *(int *)(param_2 + 0x10b4) = iVar2;
  local_a0 = 4;
  local_9c = &LAB_001675a0;
  local_98 = &DAT_001775e4;
  local_94 = &LAB_001775d8;
  local_b8[0] = 0xfffffffe;
  local_b8[1] = 0;
  local_a8 = param_2;
  uVar10 = fn_0014e2f4(param_2 + 0x48,&local_a0,&DAT_004803c8,&local_a8,param_2 + 0x1050,
                        *(undefined4 *)(param_2 + 8));
  if (((uVar10 & 0x7e00000) != 0x600000) && ((int)uVar10 < 0)) {
    fn_0015e294(uVar10);
  }
  if ((int)uVar10 < 0) {
    fn_005248c4(param_2 + 0x38);
    fn_0048029c(param_1,uVar10);
                    /* WARNING: Could not recover jumptable at 0x0048008c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return;
  }
  *(undefined1 *)(param_2 + 0x10cc) = 1;
  *param_1 = 0x10001;
  param_1[1] = &DAT_007dba44;
  param_1[2] = 0x71;
                    /* WARNING: Could not recover jumptable at 0x004800b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_0047fc04(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_2 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  iVar2 = fn_00524500(param_2 + 0x38,param_3);
  if (iVar2 < 0) {
    param_1[2] = 0x71;
    param_1[1] = &DAT_007dba44;
    *param_1 = 0x80050001;
                    /* WARNING: Could not recover jumptable at 0x0047fc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return;
  }
  param_1[2] = 0x71;
  param_1[1] = &DAT_007dba44;
  *param_1 = 0x10001;
                    /* WARNING: Could not recover jumptable at 0x0047fcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



undefined4 fn_0047fba4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  fn_0013d40c(auStack_18);
  iVar1 = fn_0045f7f0(param_1,auStack_18);
  if (iVar1 == 0) {
    fn_00170f54(auStack_18);
    return 0;
  }
  fn_0015e9d8(param_2,local_14);
  fn_00170f54(auStack_18);
  return 1;
}



void fn_0047fb68(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_10 [8];
  
  uVar1 = fn_006d0be8(param_2);
  fn_0013d3e8(auStack_10,uVar1);
  fn_0045f6f0(param_1,auStack_10);
  fn_00170f54(auStack_10);
  return;
}



void fn_0047faf0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  iVar1 = fn_004b72d8();
  uVar2 = *(uint *)(iVar1 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  if (uVar3 < uVar2) {
    iVar4 = uVar2 - uVar3;
    iVar1 = fn_004b72d8(param_1);
    fn_0015ef58(param_2,*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + *(int *)(param_1 + 0xc),
                 iVar4,0xffffffff);
    uVar2 = *(int *)(param_1 + 0xc) + iVar4;
    if (uVar2 <= *(uint *)(*(int *)(param_1 + 8) + 0x10)) {
      *(uint *)(param_1 + 0xc) = uVar2;
    }
  }
  return;
}



void fn_0047fab8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    return;
  }
  uVar1 = fn_004b72d8();
  fn_0015ef58(uVar1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
               *(undefined4 *)(param_2 + 0x10),0xffffffff);
  return;
}



void fn_0047fa90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  fn_00473198(param_2,param_1);
  if (*(int *)(param_1 + 0x44) == 0) {
    return;
  }
  uVar1 = fn_004b72d8(param_2);
  fn_0015ef58(uVar1,*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x4c),
               *(undefined4 *)(param_1 + 0x44),0xffffffff);
  return;
}



void fn_0047f9b8(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_28;
  undefined1 local_24 [4];
  undefined4 local_20 [2];
  
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar4 = 0;
  if (cVar1 == '\0') {
    local_24[0] = 0;
    piVar2 = &local_28;
    if (*(char *)(param_2 + 4) != '\0') {
      piVar2 = (int *)local_24;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,*(char *)(param_2 + 4));
    fn_0015ef4c(param_1,piVar2,1);
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_20[0] = 0;
    fn_0015ef4c(param_1,local_20,4);
  }
  fn_0015ef4c(param_1,param_2 + 8,4);
  fn_0015ef4c(param_1,param_2 + 0xc,4);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar4);
    local_28 = (iVar3 - iVar4) + -4;
    fn_0015ef4c(param_1,&local_28,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}



void fn_0047f7f8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_78 [4];
  int *local_74;
  int *local_70;
  int *piStack_6c;
  int local_68;
  int local_64;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [36];
  
  piVar3 = (int *)**(int **)(param_2 + 0x3c);
  fn_004b4c44(auStack_78);
  for (; iVar1 = local_68, piVar3 != (int *)*(int *)(param_2 + 0x3c); piVar3 = (int *)*piVar3) {
    if (local_74 == (int *)0x0) {
      if (local_70 == piStack_6c) {
        fn_0078638c(auStack_78,0);
      }
      piVar2 = local_70;
      local_70 = local_70 + 0x1c;
    }
    else {
      piVar2 = local_74;
      local_74 = (int *)*local_74;
    }
    if (piVar2 + 2 != (int *)0x0) {
      fn_0013cd7c(piVar2 + 2,piVar3 + 2);
    }
    *piVar2 = iVar1;
    piVar2[1] = *(int *)(iVar1 + 4);
    **(undefined4 **)(iVar1 + 4) = piVar2;
    *(int **)(iVar1 + 4) = piVar2;
    local_64 = local_64 + 1;
  }
  fn_00488440(auStack_40,auStack_78);
  fn_00488440(auStack_60,param_3);
  fn_006d210c(auStack_40,auStack_60);
  fn_00786550(param_3,auStack_58);
  fn_004884dc(auStack_60);
  fn_004884dc(auStack_40);
  fn_00786480(auStack_78);
  return;
}



undefined4 fn_0047f7b0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  fn_00170c9c(param_1 + 0x28,L"0.0.0.1");
  *(undefined2 *)(param_1 + 0x2e) = 0;
  return 1;
}


