#include "0014e6e4_0014f1bc.h"



void fn_0014f1bc(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(code **)(param_1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0014f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + -8))();
  return;
}



void fn_0014ed0c(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_28;
  uint uStack_24;
  
  if (((DAT_008b64e8 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008b64e8), iVar3 != 0)) {
    DAT_008b6540 = 0;
    DAT_008b6544 = 0;
  }
  uVar6 = DAT_008b6544;
  uVar2 = DAT_008b6540;
  iVar3 = DAT_008b651c;
  uVar7 = DAT_008b6518;
  fn_0015eb44(&local_28);
  if (DAT_008b6381 == '\0') {
    DAT_008b6540 = 1;
    DAT_008b6544 = 0;
    DAT_008b6381 = '\x01';
    DAT_008b6518 = 1 - local_28;
    DAT_008b651c = -(uStack_24 + (1 < local_28));
LAB_0014ee08:
    uVar7 = DAT_008b6544;
    *param_1 = DAT_008b6540;
    param_1[1] = uVar7;
    return;
  }
  if ((iVar3 < 0) &&
     (iVar1 = iVar3 + (uint)(uVar7 != 0), uVar5 = local_28 + uVar7,
     uStack_24 <= (uint)-iVar1 && (uint)(-uVar7 <= local_28) <= uStack_24 + iVar1)) {
    uVar7 = local_28;
    if (param_2 != 0) {
      DAT_008b6540 = uVar2 + 1;
      uVar6 = uVar6 + (0xfffffffe < uVar2);
      DAT_008b6518 = DAT_008b6540 - local_28;
      DAT_008b651c = uVar6 - (uStack_24 + (DAT_008b6540 < local_28));
      DAT_008b6544 = uVar6;
      *param_1 = DAT_008b6540;
      param_1[1] = uVar6;
      return;
    }
  }
  else {
    uVar4 = local_28 + uVar7;
    uVar5 = uStack_24 + iVar3 + (uint)CARRY4(local_28,uVar7);
    uVar7 = uVar5 - (uVar6 + (uVar2 > uVar4));
    if (uVar6 < uVar5 || uVar5 - uVar6 < (uint)(uVar2 <= uVar4)) {
      DAT_008b6540 = uVar4;
      DAT_008b6544 = uVar5;
      goto LAB_0014ee08;
    }
    if (param_2 != 0) {
      DAT_008b6540 = uVar2 + 1;
      uVar6 = uVar6 + (0xfffffffe < uVar2);
      DAT_008b6518 = DAT_008b6540 - local_28;
      DAT_008b651c = uVar6 - (uStack_24 + (DAT_008b6540 < local_28));
      DAT_008b6544 = uVar6;
      *param_1 = DAT_008b6540;
      param_1[1] = uVar6;
      return;
    }
  }
  fn_0015ea80(param_1,uVar5,&DAT_008b6540,uVar7);
  return;
}



void fn_0014ecf0(undefined4 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &DAT_0085291c;
  return;
}



undefined4 fn_0014ec64(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined *local_78 [22];
  undefined1 auStack_20 [16];
  char local_10;
  
  local_78[0] = &DAT_0085748c;
  local_10 = '\0';
  fn_00160094(local_78);
  if (local_10 == '\0') {
    fn_001600c4(local_78,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
                 *(undefined4 *)(param_2 + 0x10));
  }
  if (local_10 == '\0') {
    fn_00160190(local_78,auStack_20);
    local_10 = '\x01';
  }
  fn_0015ef58(param_3,auStack_20,0x10,0xffffffff);
  return 1;
}



void fn_0014ea80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  char cVar4;
  int local_a8;
  int local_a4;
  undefined1 auStack_a0 [120];
  int local_28 [4];
  
  *(undefined1 *)(param_1 + 100) = 1;
  iVar1 = *(int *)(param_1 + 4);
  cVar4 = '\x02';
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 5) = 2;
  local_a4 = *(int *)(param_1 + 0x1c);
  local_a8 = *(int *)(local_a4 + 8);
  fn_00168014(auStack_a0,param_1 + 0xc,&local_a8,&local_a4);
  local_a4 = *(int *)(param_1 + 0x38);
  local_a8 = *(int *)(local_a4 + 8);
  fn_00167740(auStack_a0,param_1 + 0x28,&local_a8,&local_a4);
  local_a8 = *(int *)(param_1 + 0x54);
  local_a4 = *(int *)(local_a8 + 8);
  fn_00167740(auStack_a0,param_1 + 0x44,&local_a4,&local_a8);
  fn_00165ea0(local_28,param_1,&local_a8,0x40);
  if (-1 < local_28[0]) {
    iVar1 = fn_00101d80(&local_a8,L"prudp");
    if (iVar1 == 0) {
      cVar4 = '\x01';
      goto LAB_0014eb84;
    }
    iVar1 = fn_00101d80(&local_a8,L"prudps");
    if (iVar1 == 0) goto LAB_0014eb84;
    iVar1 = fn_00101d80(&local_a8,&DAT_007dbc38);
    if (iVar1 == 0) {
      cVar4 = '\x03';
      goto LAB_0014eb84;
    }
  }
  cVar4 = '\0';
LAB_0014eb84:
  *(char *)(param_1 + 8) = cVar4;
  if (cVar4 == '\0') {
    return;
  }
  iVar1 = fn_00101160(*(undefined4 *)(param_1 + 0x60),&DAT_0014ec58);
  iVar2 = fn_00100b58(&DAT_0014ec58);
  iVar1 = iVar1 + iVar2 * 2;
  puVar3 = (undefined2 *)fn_00101160(iVar1,&DAT_0014ec60);
  if (puVar3 == (undefined2 *)0x0) {
    iVar1 = fn_0015e740(param_1,iVar1,0);
  }
  else {
    iVar2 = fn_00101160(puVar3 + 1,&DAT_0014ec60);
    if (iVar2 != 0) {
      return;
    }
    *puVar3 = 0;
    iVar1 = fn_0015e740(param_1,iVar1,0);
    *puVar3 = 0x23;
    if (iVar1 == 0) {
      return;
    }
    iVar1 = fn_0015e740(param_1,puVar3 + 1,1);
  }
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x66) = 1;
    *(undefined1 *)(param_1 + 0x65) = 1;
  }
  return;
}



void fn_0014e7cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_28;
  int local_24;
  undefined1 auStack_20 [8];
  
  if (*(char *)(param_2 + 0x65) == '\0') {
    fn_0015e9d8(param_1,0);
  }
  else {
    fn_0015e9d8(param_1,*(undefined4 *)(param_2 + 0x60));
    *(undefined1 *)(param_1 + 0x65) = 1;
  }
  if (*(char *)(param_2 + 100) != '\0') {
    iVar3 = *(int *)(param_2 + 4);
    iVar2 = *(int *)(param_1 + 4);
    iVar4 = param_1 + 0xc;
    uVar5 = *(undefined4 *)(iVar3 + 8);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    uVar7 = *(undefined4 *)(iVar3 + 0x10);
    uVar8 = *(undefined4 *)(iVar3 + 0x14);
    uVar9 = *(undefined4 *)(iVar3 + 0x18);
    uVar10 = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar3 + 4);
    *(undefined4 *)(iVar2 + 8) = uVar5;
    *(undefined4 *)(iVar2 + 0xc) = uVar6;
    *(undefined4 *)(iVar2 + 0x10) = uVar7;
    *(undefined4 *)(iVar2 + 0x14) = uVar8;
    *(undefined4 *)(iVar2 + 0x18) = uVar9;
    *(undefined4 *)(iVar2 + 0x1c) = uVar10;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    if (iVar4 != param_2 + 0xc) {
      local_24 = *(int *)(param_1 + 0x1c);
      local_28 = *(int *)(local_24 + 8);
      fn_00168014(auStack_20,iVar4,&local_28,&local_24);
      iVar2 = fn_00168794(iVar4,*(undefined4 *)(*(int *)(param_2 + 0x1c) + 4),
                           *(undefined4 *)(param_1 + 0x1c));
      *(int *)(*(int *)(param_1 + 0x1c) + 4) = iVar2;
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar2 == 0) {
        *(int *)(iVar3 + 8) = iVar3;
        *(int *)(*(int *)(param_1 + 0x1c) + 0xc) = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar4 = *(int *)(iVar2 + 8);
        while (iVar1 = iVar4, iVar1 != 0) {
          iVar2 = iVar1;
          iVar4 = *(int *)(iVar1 + 8);
        }
        *(int *)(iVar3 + 8) = iVar2;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        for (iVar3 = *(int *)(iVar2 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
          iVar2 = iVar3;
        }
        *(int *)(*(int *)(param_1 + 0x1c) + 0xc) = iVar2;
      }
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    iVar2 = param_1 + 0x28;
    if (iVar2 != param_2 + 0x28) {
      local_24 = *(int *)(param_1 + 0x38);
      local_28 = *(int *)(local_24 + 8);
      fn_00167740(auStack_20,iVar2,&local_28,&local_24);
      iVar2 = fn_00167edc(iVar2,*(undefined4 *)(*(int *)(param_2 + 0x38) + 4),
                           *(undefined4 *)(param_1 + 0x38));
      *(int *)(*(int *)(param_1 + 0x38) + 4) = iVar2;
      iVar3 = *(int *)(param_1 + 0x38);
      if (iVar2 == 0) {
        *(int *)(iVar3 + 8) = iVar3;
        *(int *)(*(int *)(param_1 + 0x38) + 0xc) = *(int *)(param_1 + 0x38);
      }
      else {
        iVar4 = *(int *)(iVar2 + 8);
        while (iVar1 = iVar4, iVar1 != 0) {
          iVar2 = iVar1;
          iVar4 = *(int *)(iVar1 + 8);
        }
        *(int *)(iVar3 + 8) = iVar2;
        iVar2 = *(int *)(*(int *)(param_1 + 0x38) + 4);
        for (iVar3 = *(int *)(iVar2 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
          iVar2 = iVar3;
        }
        *(int *)(*(int *)(param_1 + 0x38) + 0xc) = iVar2;
      }
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    iVar2 = param_1 + 0x44;
    if (iVar2 != param_2 + 0x44) {
      local_28 = *(int *)(param_1 + 0x54);
      local_24 = *(int *)(local_28 + 8);
      fn_00167740(auStack_20,iVar2,&local_24,&local_28);
      iVar2 = fn_00167edc(iVar2,*(undefined4 *)(*(int *)(param_2 + 0x54) + 4),
                           *(undefined4 *)(param_1 + 0x54));
      *(int *)(*(int *)(param_1 + 0x54) + 4) = iVar2;
      iVar3 = *(int *)(param_1 + 0x54);
      if (iVar2 == 0) {
        *(int *)(iVar3 + 8) = iVar3;
        *(int *)(*(int *)(param_1 + 0x54) + 0xc) = *(int *)(param_1 + 0x54);
      }
      else {
        iVar4 = *(int *)(iVar2 + 8);
        while (iVar1 = iVar4, iVar1 != 0) {
          iVar2 = iVar1;
          iVar4 = *(int *)(iVar1 + 8);
        }
        *(int *)(iVar3 + 8) = iVar2;
        iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 4);
        for (iVar3 = *(int *)(iVar2 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
          iVar2 = iVar3;
        }
        *(int *)(*(int *)(param_1 + 0x54) + 0xc) = iVar2;
      }
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    *(undefined1 *)(param_1 + 100) = 1;
  }
  *(undefined1 *)(param_1 + 0x66) = *(undefined1 *)(param_2 + 0x66);
  return;
}



void fn_0014e79c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = param_3;
  }
  return;
}



void fn_0014e784(undefined4 *param_1,undefined2 param_2)

{
  *(undefined2 *)((int)param_1 + 10) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}



undefined4 fn_0014e774(undefined4 param_1,int param_2)

{
  return *(undefined4 *)(param_2 + -0xc);
}



void fn_0014e6e4(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_00170bb4(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


