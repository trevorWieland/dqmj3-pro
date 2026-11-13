#include "0031d554_0031db8c.h"



void fn_0031db8c(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar4 = *(undefined4 *)(param_1 + (int)param_2 * 4 + 0x1c);
  iVar1 = fn_001a46f4(param_3);
  if (iVar1 == 0) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_38[0] = param_2;
    fn_0017d96c(&local_30,0x20,0x1f,(char *)&DAT_0031dca0);
    uVar3 = fn_0022f584(&local_30,0);
    fn_00394544(uVar4,uVar3);
    fn_002b1f40(uVar4,0);
    return;
  }
  fn_002317d8(local_38,param_3,1);
  fn_00394544(uVar4,local_38[0]);
  fn_002b1f40(uVar4,1);
  if (local_38[0] != &DAT_008f9cf4) {
    piVar2 = local_38[0] + -3;
    iVar1 = *piVar2;
    if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_38[0] + -3,local_38[0][-2] + 8,0);
    }
  }
  return;
}



void fn_0031dacc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  fn_0069e710();
  (**(code **)(**(int **)(param_1 + 0x30) + 0x10))
            (*(int **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x10));
  fn_0025e31c(*(undefined4 *)(param_1 + 0x30),0);
  iVar1 = fn_0037d284(*(undefined4 *)(param_1 + 0x14));
  fn_0025e378(*(undefined4 *)(param_1 + 0x30),iVar1 + 0x3c);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x10))
            (*(int **)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x10));
  fn_0025e31c(*(undefined4 *)(param_1 + 0x34),0);
  iVar1 = fn_00394520(*(undefined4 *)(param_1 + 0x1c));
  fn_0025e378(*(undefined4 *)(param_1 + 0x34),iVar1 + 0x3c);
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1 * 4;
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x10))
              (*(int **)(iVar2 + 0x38),*(undefined4 *)(param_1 + 0x10));
    (**(code **)(**(int **)(iVar2 + 0x1c) + 0x1c))();
    fn_00688ff8();
    iVar2 = *(int *)(iVar2 + 0x38);
    iVar1 = iVar1 + 1;
    *(undefined4 *)(iVar2 + 0x44) = in_s0;
    *(undefined4 *)(iVar2 + 0x48) = in_s1;
    *(undefined4 *)(iVar2 + 0x4c) = in_s2;
  } while (iVar1 < 5);
  return;
}



undefined4 * fn_0031d780(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *local_24;
  undefined1 auStack_20 [4];
  
  puVar1 = (undefined4 *)fn_0069e7cc();
  *puVar1 = &DAT_00823074;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 1;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  *(undefined1 *)((int)puVar1 + 0x36) = 0;
  *(undefined1 *)((int)puVar1 + 0x37) = 0;
  piVar2 = (int *)fn_00168a24(&local_24,&DAT_0031d9dc,auStack_20);
  iVar3 = *piVar2;
  puVar8 = &DAT_008f9ce8;
  if (*(int *)(iVar3 + -0xc) == -1) {
    uVar7 = *(uint *)(iVar3 + -4);
    if (0xfffffff1 < uVar7) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
    }
    puVar5 = puVar8;
    if (uVar7 != 0) {
      puVar5 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      puVar5[1] = uVar7;
      puVar6 = (undefined2 *)((int)puVar5 + uVar7 * 2 + 0xc);
      *puVar5 = 0;
      puVar5[2] = uVar7;
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
      }
    }
    puVar1[0xe] = puVar5 + 3;
    fn_00301a9c(puVar5 + 3,*piVar2,uVar7 << 1);
  }
  else {
    puVar1[0xe] = iVar3;
    piVar4 = (int *)(iVar3 + -0xc);
    if (piVar4 != &DAT_008f9ce8) {
      *piVar4 = *piVar4 + 1;
    }
  }
  iVar3 = *piVar2;
  if (*(int *)(iVar3 + -0xc) == -1) {
    uVar7 = *(uint *)(iVar3 + -4);
    if (0xfffffff1 < uVar7) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
    }
    if (uVar7 != 0) {
      puVar8 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
      }
      puVar8[1] = uVar7;
      puVar6 = (undefined2 *)((int)puVar8 + uVar7 * 2 + 0xc);
      *puVar8 = 0;
      puVar8[2] = uVar7;
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
      }
    }
    puVar1[0xf] = puVar8 + 3;
    fn_00301a9c(puVar8 + 3,*piVar2,uVar7 << 1);
  }
  else {
    puVar1[0xf] = iVar3;
    piVar2 = (int *)(iVar3 + -0xc);
    if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = *piVar2 + 1;
    }
  }
  if (local_24 != &DAT_008f9cf4) {
    piVar2 = local_24 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  *(undefined1 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)((int)puVar1 + 0x41) = 0;
  *(undefined2 *)((int)puVar1 + 0x42) = 0xffff;
  *(undefined2 *)(puVar1 + 0x11) = 0xffff;
  *(undefined1 *)((int)puVar1 + 0x46) = 0;
  return puVar1;
}



void fn_0031d6e0(int param_1)

{
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x14))();
    if (*(int **)(param_1 + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x30) + 4))();
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}



void fn_0031d660(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *local_10;
  undefined1 auStack_c [4];
  
  uVar1 = fn_00168a24(&local_10,param_2,auStack_c);
  fn_007854f8(param_1 + 0x3c,uVar1);
  if (local_10 != &DAT_008f9cf4) {
    piVar2 = local_10 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
    }
  }
  return;
}



void fn_0031d5a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 auStack_14 [12];
  
  fn_0069e748();
  if (*(char *)(param_1 + 0x46) == '\0') {
    fn_0031d724(param_1,0);
    if (*(byte *)(param_1 + 0x36) != *(byte *)(param_1 + 0x37)) {
      *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
           *(byte *)(param_1 + 0x37) | *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe;
    }
  }
  fn_0031d348(param_1,0);
  fn_0031d554(param_1,0);
  iVar1 = (int)*(short *)(param_1 + 0x44);
  if (*(short *)(param_1 + 0x42) != iVar1) {
    if (iVar1 < 0) {
      puVar3 = &DAT_0031d550;
      uVar2 = *(undefined4 *)(param_1 + 0x24);
    }
    else {
      fn_0018a618(auStack_14,3,2,&DAT_0031d54c,iVar1);
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      puVar3 = auStack_14;
    }
    fn_00190d50(uVar2,puVar3);
  }
  fn_0031d41c(param_1);
  return;
}



void fn_0031d724(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  bVar3 = param_2 == 0;
  if (bVar3) {
    param_2 = (int)*(char *)(param_1 + 0x34);
  }
  if (!bVar3 || param_2 != *(char *)(param_1 + 0x35)) {
    iVar1 = *(int *)(param_1 + 0x14);
    bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe;
    if (*(char *)(param_1 + 0x35) == 0) {
      *(byte *)(iVar1 + 0x44) = bVar2 | 1;
      iVar1 = *(int *)(param_1 + 0x18);
      bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    else {
      *(byte *)(iVar1 + 0x44) = bVar2;
      iVar1 = *(int *)(param_1 + 0x18);
      bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
    }
    *(byte *)(iVar1 + 0x44) = bVar2;
  }
  return;
}



void fn_0031d554(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 local_10;
  
  bVar2 = param_2 == 0;
  if (bVar2) {
    param_2 = (int)*(char *)(param_1 + 0x40);
  }
  if (!bVar2 || param_2 != *(char *)(param_1 + 0x41)) {
    local_10 = 0xffffffff;
    fn_0068b37c((int)*(char *)(param_1 + 0x41),&local_10);
    iVar1 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(iVar1 + 0xac) = local_10;
    *(undefined4 *)(iVar1 + 0xb0) = local_10;
    iVar1 = *(int *)(param_1 + 0x24);
    *(undefined4 *)(iVar1 + 0xac) = local_10;
    *(undefined4 *)(iVar1 + 0xb0) = local_10;
  }
  return;
}


