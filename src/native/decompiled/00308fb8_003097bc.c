#include "00308fb8_003097bc.h"



void fn_003096b8(int param_1)

{
  int iVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0x51) != '\0') {
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    iVar1 = (int)*(char *)(param_1 + 0x4b);
    if ((int)*(char *)(param_1 + 0x4d) < (int)*(char *)(param_1 + 0x4b)) {
      iVar1 = (int)*(char *)(param_1 + 0x4d);
    }
    fn_001003f2(&local_10,*(undefined4 *)(&DAT_008904f4 + iVar1 * 4));
    fn_001003f2(&local_10,*(undefined4 *)(&DAT_008904f4 + *(char *)(param_1 + 0x4d) * 4));
    fn_001028d4(&local_50,DAT_00890408,&local_10);
    iVar1 = fn_00689210(*(undefined4 *)(param_1 + 0xa4),&local_50);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
    if (*(char *)(param_1 + 0x4f) == '\0') {
      fn_001028d4(&local_50,DAT_0089040c,&local_10);
      iVar1 = fn_00689210(*(undefined4 *)(param_1 + 0xa4),&local_50);
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
    }
  }
  return;
}



void fn_00309624(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *local_10;
  undefined1 auStack_c [4];
  
  uVar1 = fn_00168a24(&local_10,param_2,auStack_c);
  fn_007854f8(param_1 + 0x6c,uVar1);
  if (local_10 != &DAT_008f9cf4) {
    piVar2 = local_10 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
    }
  }
  return;
}



void fn_003095fc(int param_1)

{
  if (*(int *)(param_1 + 0xa0) != 0) {
    fn_00151954(*(int *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return;
}



void fn_00309438(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint local_18;
  uint local_14;
  
  if (*(char *)(param_1 + 0x54) != *(char *)(param_1 + 0x55)) {
    *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x55);
  }
  if (*(char *)(param_1 + 0x56) != *(char *)(param_1 + 0x57)) {
    *(char *)(param_1 + 0x56) = *(char *)(param_1 + 0x57);
  }
  if (*(char *)(param_1 + 0x58) != *(char *)(param_1 + 0x59)) {
    *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0x59);
  }
  if (*(char *)(param_1 + 0x5a) != *(char *)(param_1 + 0x5b)) {
    *(char *)(param_1 + 0x5a) = *(char *)(param_1 + 0x5b);
  }
  if (*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x60)) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x60);
  }
  if (*(char *)(param_1 + 100) != *(char *)(param_1 + 0x65)) {
    *(char *)(param_1 + 100) = *(char *)(param_1 + 0x65);
  }
  if (*(char *)(param_1 + 0x88) != *(char *)(param_1 + 0x89)) {
    *(char *)(param_1 + 0x88) = *(char *)(param_1 + 0x89);
  }
  if (*(short *)(param_1 + 0x8a) != *(short *)(param_1 + 0x8c)) {
    *(short *)(param_1 + 0x8a) = *(short *)(param_1 + 0x8c);
  }
  if (*(short *)(param_1 + 0x8e) != *(short *)(param_1 + 0x90)) {
    *(short *)(param_1 + 0x8e) = *(short *)(param_1 + 0x90);
  }
  if (*(char *)(param_1 + 0x92) != *(char *)(param_1 + 0x93)) {
    *(char *)(param_1 + 0x92) = *(char *)(param_1 + 0x93);
  }
  if (*(char *)(param_1 + 0x94) != *(char *)(param_1 + 0x95)) {
    *(char *)(param_1 + 0x94) = *(char *)(param_1 + 0x95);
  }
  if (*(char *)(param_1 + 0x96) != *(char *)(param_1 + 0x97)) {
    *(char *)(param_1 + 0x96) = *(char *)(param_1 + 0x97);
  }
  if (*(char *)(param_1 + 0x9a) != *(char *)(param_1 + 0x9b)) {
    *(char *)(param_1 + 0x9a) = *(char *)(param_1 + 0x9b);
  }
  if (*(char *)(param_1 + 0x98) != *(char *)(param_1 + 0x99)) {
    *(char *)(param_1 + 0x98) = *(char *)(param_1 + 0x99);
  }
  if (*(char *)(param_1 + 0x9c) != *(char *)(param_1 + 0x9d)) {
    *(char *)(param_1 + 0x9c) = *(char *)(param_1 + 0x9d);
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 0x68) + -4);
  if (uVar2 == *(uint *)(*(int *)(param_1 + 0x6c) + -4)) {
    local_18 = uVar2;
    local_14 = *(uint *)(*(int *)(param_1 + 0x6c) + -4);
    puVar3 = &local_18;
    if (local_14 < uVar2) {
      puVar3 = &local_14;
    }
    iVar1 = fn_001006de(*(int *)(param_1 + 0x68),*(int *)(param_1 + 0x6c),*puVar3);
    if ((iVar1 == 0) &&
       (*(int *)(*(int *)(param_1 + 0x68) + -4) == *(int *)(*(int *)(param_1 + 0x6c) + -4)))
    goto LAB_003095a8;
  }
  fn_007854f8((int *)(param_1 + 0x68),param_1 + 0x6c);
LAB_003095a8:
  if (((*(float *)(param_1 + 0x70) != *(float *)(param_1 + 0x7c)) ||
      (*(float *)(param_1 + 0x74) != *(float *)(param_1 + 0x80))) ||
     (*(float *)(param_1 + 0x78) != *(float *)(param_1 + 0x84))) {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x84);
  }
  return;
}



void fn_00308fb8(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  
  if ((((param_2 != 0) || (*(float *)(param_1 + 0x70) != *(float *)(param_1 + 0x7c))) ||
      (*(float *)(param_1 + 0x74) != *(float *)(param_1 + 0x80))) ||
     (*(float *)(param_1 + 0x78) != *(float *)(param_1 + 0x84))) {
    iVar3 = *(int *)(param_1 + 0xa4);
    uVar4 = *(undefined4 *)(param_1 + 0x80);
    uVar5 = *(undefined4 *)(param_1 + 0x84);
    puVar6 = (undefined4 *)(iVar3 + 0x1c);
    *puVar6 = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(iVar3 + 0x20) = uVar4;
    *(undefined4 *)(iVar3 + 0x24) = uVar5;
    if (param_2 != 0) {
      puVar6 = (undefined4 *)0x0;
    }
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
    if (param_2 != 0) {
      do {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2);
        if (puVar1 <= puVar6) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,puVar6,puVar1);
        }
        bVar8 = (undefined4 *)(int)*(char *)(param_1 + 0x4d) == puVar6;
        iVar3 = *(int *)(*(int *)(param_1 + 0xa8) + (int)puVar6 * 4);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        *(byte *)(iVar3 + 0x44) = bVar8 | *(byte *)(iVar3 + 0x44) & 0xfe;
      } while ((int)puVar6 < 4);
    }
  }
  fn_0030b034(param_1,param_2);
  if ((param_2 != 0) || (*(char *)(param_1 + 0x56) != *(char *)(param_1 + 0x57))) {
    uVar7 = (uint)*(char *)(param_1 + 0x4d);
    uVar2 = *(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 2;
    if (uVar2 <= uVar7) {
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar7,uVar2);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0xf0) + uVar7 * 4);
    *(byte *)(iVar3 + 0x44) = *(byte *)(param_1 + 0x57) | *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  fn_003097bc(param_1,param_2);
  fn_003098c4(param_1,param_2);
  fn_003092f8(param_1,param_2);
  if ((param_2 != 0) || (*(char *)(param_1 + 0x88) != *(char *)(param_1 + 0x89))) {
    *(byte *)(*(int *)(param_1 + 0x13c) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x13c) + 0x44) & 0xfe | *(byte *)(param_1 + 0x89);
  }
  fn_0030b4c8(param_1,param_2);
  fn_0030b748(param_1,param_2);
  if ((((((param_2 != 0) || (*(char *)(param_1 + 0x92) != *(char *)(param_1 + 0x93))) &&
        (*(byte *)(*(int *)(param_1 + 0x158) + 0x44) =
              *(byte *)(param_1 + 0x93) | *(byte *)(*(int *)(param_1 + 0x158) + 0x44) & 0xfe,
        param_2 != 0)) || (*(char *)(param_1 + 0x94) != *(char *)(param_1 + 0x95))) &&
      (*(byte *)(*(int *)(param_1 + 0x15c) + 0x44) =
            *(byte *)(param_1 + 0x95) | *(byte *)(*(int *)(param_1 + 0x15c) + 0x44) & 0xfe,
      param_2 != 0)) || (*(char *)(param_1 + 0x96) != *(char *)(param_1 + 0x97))) {
    if (*(char *)(param_1 + 0x52) == '\0') {
      *(byte *)(*(int *)(param_1 + 0x160) + 0x44) =
           *(byte *)(param_1 + 0x97) | *(byte *)(*(int *)(param_1 + 0x160) + 0x44) & 0xfe;
    }
    else {
      *(byte *)(*(int *)(param_1 + 0x16c) + 0x44) =
           *(byte *)(param_1 + 0x97) | *(byte *)(*(int *)(param_1 + 0x16c) + 0x44) & 0xfe;
    }
  }
  if (*(char *)(param_1 + 0x52) == '\0') {
    fn_00309b70(param_1,param_1 + 0x9a,*(undefined4 *)(param_1 + 0x164),
                 *(undefined4 *)(param_1 + 0x168),param_2);
  }
  else {
    fn_00309b70(param_1,param_1 + 0x9a,*(undefined4 *)(param_1 + 0x170),
                 *(undefined4 *)(param_1 + 0x174),param_2);
  }
  if ((param_2 != 0) || (*(char *)(param_1 + 0x98) != *(char *)(param_1 + 0x99))) {
    *(byte *)(*(int *)(param_1 + 0x178) + 0x44) =
         *(byte *)(param_1 + 0x99) | *(byte *)(*(int *)(param_1 + 0x178) + 0x44) & 0xfe;
  }
  fn_00309b70(param_1,param_1 + 0x9c,*(undefined4 *)(param_1 + 0x17c),
               *(undefined4 *)(param_1 + 0x180),param_2);
  if (*(int **)(param_1 + 0xfc) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003092ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xfc) + 0x18))();
  return;
}



void fn_003097bc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x58);
    bVar4 = uVar2 == *(byte *)(param_1 + 0x59);
    if (bVar4) {
      uVar2 = (uint)*(char *)(param_1 + 0x5a);
    }
    if (bVar4 && uVar2 == (int)*(char *)(param_1 + 0x5b)) {
      return;
    }
  }
  uVar2 = 0;
  if ((int)*(char *)(param_1 + 0x5b) == 0) {
    do {
      uVar3 = *(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108) >> 2;
      if (uVar3 <= uVar2) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar2,uVar3);
      }
      uVar3 = uVar2 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x108) + uVar2 * 4);
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
      uVar2 = uVar3;
    } while ((int)uVar3 < 6);
    return;
  }
  do {
    uVar3 = *(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108) >> 2;
    if (uVar3 <= uVar2) {
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar2,uVar3);
    }
    bVar4 = *(byte *)(param_1 + 0x59) == uVar2;
    iVar1 = *(int *)(*(int *)(param_1 + 0x108) + uVar2 * 4);
    uVar2 = uVar2 + 1;
    *(byte *)(iVar1 + 0x44) = bVar4 | *(byte *)(iVar1 + 0x44) & 0xfe;
  } while ((int)uVar2 < 6);
  return;
}



void fn_003092f8(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint local_18;
  uint local_14;
  
  bVar1 = *(byte *)(param_1 + 0x65);
  if ((param_2 == 0) && (*(byte *)(param_1 + 100) == bVar1)) {
    uVar4 = *(uint *)(*(int *)(param_1 + 0x68) + -4);
    if (uVar4 == *(uint *)(*(int *)(param_1 + 0x6c) + -4)) {
      local_18 = uVar4;
      local_14 = *(uint *)(*(int *)(param_1 + 0x6c) + -4);
      puVar5 = &local_18;
      if (local_14 < uVar4) {
        puVar5 = &local_14;
      }
      iVar3 = fn_001006de(*(int *)(param_1 + 0x68),*(int *)(param_1 + 0x6c),*puVar5);
      if ((iVar3 != 0) ||
         (*(int *)(*(int *)(param_1 + 0x68) + -4) != *(int *)(*(int *)(param_1 + 0x6c) + -4)))
      goto LAB_00309384;
      bVar2 = true;
    }
    else {
LAB_00309384:
      bVar2 = false;
    }
    if (bVar2) {
      return;
    }
  }
  *(byte *)(*(int *)(param_1 + 0x130) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x130) + 0x44) & 0xfe | bVar1;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x68) + -4);
  if (uVar4 == *(uint *)(*(int *)(param_1 + 0x6c) + -4)) {
    local_18 = uVar4;
    local_14 = *(uint *)(*(int *)(param_1 + 0x6c) + -4);
    puVar5 = &local_18;
    if (local_14 < uVar4) {
      puVar5 = &local_14;
    }
    iVar3 = fn_001006de(*(int *)(param_1 + 0x68),*(int *)(param_1 + 0x6c),*puVar5);
    if ((iVar3 == 0) &&
       (*(int *)(*(int *)(param_1 + 0x68) + -4) == *(int *)(*(int *)(param_1 + 0x6c) + -4))) {
      bVar2 = true;
      goto LAB_00309414;
    }
  }
  bVar2 = false;
LAB_00309414:
  if (bVar2) {
    return;
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x6c));
  return;
}


