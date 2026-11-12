#include "0030b748_0030bf28.h"



void fn_0030bf18(void)

{
  fn_0030bf28();
  fn_002feef8();
  return;
}



void fn_0030bf28(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  *param_1 = &DAT_008221ac;
  iVar1 = fn_0079942c(param_1 + 0x53);
  iVar1 = fn_0079942c(iVar1 + -0xc);
  uVar4 = *(uint *)(iVar1 + -0x20);
  uVar5 = uVar4;
  if (*(uint *)(iVar1 + -0x1c) <= uVar4) {
    for (; uVar5 != *(uint *)(iVar1 + -0x1c); uVar5 = uVar5 + 4) {
    }
  }
  fn_001008c4(uVar4,(int)(*(int *)(iVar1 + -0x18) - uVar4) >> 2,0);
  iVar1 = fn_0079942c(iVar1 + -0x2c);
  iVar1 = fn_0079942c(iVar1 + -0xc);
  if (*(int **)(iVar1 + -0xc) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0xc) + 4))();
  }
  iVar1 = fn_0079942c(iVar1 + -0x18);
  iVar1 = fn_0079942c(iVar1 + -0xc);
  iVar1 = fn_0079942c(iVar1 + -0xc);
  iVar1 = fn_0079942c(iVar1 + -0xc);
  iVar1 = fn_0079942c(iVar1 + -0xc);
  iVar1 = fn_0079942c(iVar1 + -0xc);
  iVar1 = fn_0079942c(iVar1 + -0xc);
  if (*(undefined4 **)(iVar1 + -0x3c) != &DAT_008f9cf4) {
    piVar2 = *(undefined4 **)(iVar1 + -0x3c) + -3;
    iVar6 = *piVar2;
    if ((iVar6 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(*(int *)(iVar1 + -0x3c) + -0xc,*(int *)(*(int *)(iVar1 + -0x3c) + -8) + 8,0);
    }
  }
  puVar3 = *(undefined4 **)(iVar1 + -0x40);
  if (puVar3 != &DAT_008f9cf4) {
    piVar2 = puVar3 + -3;
    iVar6 = *piVar2;
    if ((iVar6 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar6 + -1, iVar6 == 0)))) {
      iVar6 = *(int *)(iVar1 + -0x40);
      fn_001008c4(iVar6 + -0xc,*(int *)(iVar6 + -8) + 8,0);
    }
  }
  uVar4 = *(uint *)(iVar1 + -0x6c);
  uVar5 = uVar4;
  if (*(uint *)(iVar1 + -0x68) < uVar4) {
    do {
      uVar5 = uVar5 + 4;
    } while (uVar5 != *(uint *)(iVar1 + -0x68));
  }
  fn_001008c4(uVar4,(int)(*(int *)(iVar1 + -100) - uVar4) >> 2,0);
  fn_006896f4(iVar1 + -0xa8);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0030be04) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff5c : 0x0030be08 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_0030b918(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  int local_98;
  undefined4 *local_94;
  int local_90 [11];
  undefined1 auStack_64 [20];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  puVar3 = (undefined4 *)fn_0068af70();
  *puVar3 = &DAT_008221ac;
  puVar3[4] = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(puVar3 + 5) = 0;
  puVar3[6] = 0xffffffff;
  puVar3[7] = 0xffffffff;
  puVar3[8] = 0xffffffff;
  puVar3[9] = 0xffffffff;
  puVar3[10] = 0xffffffff;
  puVar3[0xb] = 0xffffffff;
  puVar3[0xc] = 0xffffffff;
  puVar3[0xd] = 0xffffffff;
  puVar3[0xe] = 0xffffffff;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar4 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar8 = 10;
  puVar3[0xf] = puVar4;
  do {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xffffffff;
    }
    iVar8 = iVar8 + -1;
    puVar4 = puVar4 + 1;
  } while (iVar8 != 0);
  iVar8 = puVar3[0xf];
  puVar3[0x10] = iVar8 + 0x28;
  puVar3[0x11] = iVar8 + 0x80;
  *(undefined2 *)(puVar3 + 0x12) = 0;
  *(undefined1 *)((int)puVar3 + 0x4a) = 0;
  *(undefined1 *)((int)puVar3 + 0x4b) = 0xff;
  *(undefined1 *)(puVar3 + 0x13) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x4d) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x4e) = 0;
  *(undefined1 *)((int)puVar3 + 0x4f) = 0;
  *(undefined1 *)(puVar3 + 0x14) = 0;
  *(undefined1 *)((int)puVar3 + 0x51) = 0;
  *(undefined1 *)((int)puVar3 + 0x52) = 0;
  *(undefined1 *)((int)puVar3 + 0x53) = 0;
  *(undefined1 *)(puVar3 + 0x15) = 1;
  *(undefined1 *)((int)puVar3 + 0x55) = 1;
  *(undefined1 *)((int)puVar3 + 0x56) = 0;
  *(undefined1 *)((int)puVar3 + 0x57) = 0;
  *(undefined1 *)(puVar3 + 0x16) = 6;
  *(undefined1 *)((int)puVar3 + 0x59) = 6;
  *(undefined1 *)((int)puVar3 + 0x5a) = 0;
  *(undefined1 *)((int)puVar3 + 0x5b) = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  *(undefined1 *)(puVar3 + 0x19) = 0;
  *(undefined1 *)((int)puVar3 + 0x65) = 0;
  piVar5 = (int *)fn_00168a24(&local_94,&DAT_0030bddc,auStack_50);
  iVar8 = *piVar5;
  puVar4 = &DAT_008f9ce8;
  if (*(int *)(iVar8 + -0xc) == -1) {
    uVar10 = *(uint *)(iVar8 + -4);
    if (0xfffffff1 < uVar10) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar10,0xfffffff1);
    }
    puVar7 = puVar4;
    if (uVar10 != 0) {
      puVar7 = (undefined4 *)fn_00100fc6((uVar10 + 8) * 2,0);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
      }
      puVar7[1] = uVar10;
      puVar9 = (undefined2 *)((int)puVar7 + uVar10 * 2 + 0xc);
      *puVar7 = 0;
      puVar7[2] = uVar10;
      if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
      }
    }
    puVar3[0x1a] = puVar7 + 3;
    fn_00301a9c(puVar7 + 3,*piVar5,uVar10 << 1);
  }
  else {
    puVar3[0x1a] = iVar8;
    piVar6 = (int *)(iVar8 + -0xc);
    if (piVar6 != &DAT_008f9ce8) {
      *piVar6 = *piVar6 + 1;
    }
  }
  iVar8 = *piVar5;
  if (*(int *)(iVar8 + -0xc) == -1) {
    uVar10 = *(uint *)(iVar8 + -4);
    if (0xfffffff1 < uVar10) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar10,0xfffffff1);
    }
    if (uVar10 != 0) {
      puVar4 = (undefined4 *)fn_00100fc6((uVar10 + 8) * 2,0);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
      }
      puVar4[1] = uVar10;
      puVar9 = (undefined2 *)((int)puVar4 + uVar10 * 2 + 0xc);
      *puVar4 = 0;
      puVar4[2] = uVar10;
      if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
      }
    }
    puVar3[0x1b] = puVar4 + 3;
    fn_00301a9c(puVar4 + 3,*piVar5,uVar10 << 1);
  }
  else {
    piVar5 = (int *)(iVar8 + -0xc);
    puVar3[0x1b] = iVar8;
    if (piVar5 != &DAT_008f9ce8) {
      *piVar5 = *piVar5 + 1;
    }
  }
  if (local_94 != &DAT_008f9cf4) {
    piVar5 = local_94 + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_94 + -3,local_94[-2] + 8,0);
    }
  }
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar8 = fn_00303afc(&DAT_008c62fc), iVar8 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0x1c] = DAT_008f9e2c;
  puVar3[0x1d] = uVar1;
  puVar3[0x1e] = uVar2;
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0x1f] = DAT_008f9e2c;
  puVar3[0x20] = uVar1;
  puVar3[0x21] = uVar2;
  *(undefined1 *)(puVar3 + 0x22) = 1;
  *(undefined1 *)((int)puVar3 + 0x89) = 1;
  *(undefined2 *)((int)puVar3 + 0x8a) = 0;
  *(undefined2 *)(puVar3 + 0x23) = 0;
  *(undefined2 *)((int)puVar3 + 0x8e) = 0;
  *(undefined2 *)(puVar3 + 0x24) = 0;
  *(undefined1 *)((int)puVar3 + 0x92) = 0;
  *(undefined1 *)((int)puVar3 + 0x93) = 0;
  *(undefined1 *)(puVar3 + 0x25) = 0;
  *(undefined1 *)((int)puVar3 + 0x95) = 0;
  *(undefined1 *)((int)puVar3 + 0x96) = 0;
  *(undefined1 *)((int)puVar3 + 0x97) = 0;
  *(undefined1 *)(puVar3 + 0x26) = 0;
  *(undefined1 *)((int)puVar3 + 0x99) = 0;
  *(undefined1 *)((int)puVar3 + 0x9a) = 0;
  *(undefined1 *)((int)puVar3 + 0x9b) = 0;
  *(undefined1 *)(puVar3 + 0x27) = 0;
  *(undefined1 *)((int)puVar3 + 0x9d) = 0;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  local_90[0] = 0;
  iVar8 = fn_00799398(puVar3 + 0x2a,4,local_90,auStack_4c);
  local_90[1] = 0;
  iVar8 = fn_00799398(iVar8 + 0xc,4,local_90 + 1,auStack_48);
  local_90[2] = 0;
  iVar8 = fn_00799398(iVar8 + 0xc,4,local_90 + 2,auStack_64);
  local_90[3] = 0;
  iVar8 = fn_00799398(iVar8 + 0xc,4,local_90 + 3,auStack_44);
  local_90[4] = 0;
  iVar8 = fn_00799398(iVar8 + 0xc,4,local_90 + 4,auStack_40);
  local_90[5] = 0;
  iVar8 = fn_00799398(iVar8 + 0xc,4,local_90 + 5,auStack_3c);
  local_90[6] = 0;
  iVar8 = fn_00799398(iVar8 + 0xc,4,local_90 + 6,auStack_38);
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  *(undefined4 *)(iVar8 + 0x14) = 0;
  local_90[7] = 0;
  iVar8 = fn_00799398(iVar8 + 0x18,6,local_90 + 7,auStack_34);
  local_90[8] = 0;
  iVar8 = fn_00799398(iVar8 + 0xc,0x16,local_90 + 8,auStack_30);
  piVar5 = (int *)(iVar8 + 0xc);
  *piVar5 = 0;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  *(undefined4 *)(iVar8 + 0x14) = 0;
  local_98 = 2;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar5 = (int)puVar3;
  for (; local_98 != 0; local_98 = local_98 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  *(int *)(iVar8 + 0x14) = *piVar5 + 0x80;
  *(undefined4 *)(iVar8 + 0x18) = 0;
  *(int *)(iVar8 + 0x10) = *piVar5 + 8;
  *(undefined4 *)(iVar8 + 0x1c) = 0;
  *(undefined4 *)(iVar8 + 0x20) = 0;
  *(undefined4 *)(iVar8 + 0x24) = 0;
  *(undefined4 *)(iVar8 + 0x28) = 0;
  local_90[9] = 0;
  iVar8 = fn_00799398(iVar8 + 0x2c,4,local_90 + 9,auStack_2c);
  local_90[10] = 0;
  iVar8 = fn_00799398(iVar8 + 0xc,4,local_90 + 10,auStack_28);
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  *(undefined4 *)(iVar8 + 0x14) = 0;
  *(undefined4 *)(iVar8 + 0x18) = 0;
  *(undefined4 *)(iVar8 + 0x1c) = 0;
  *(undefined4 *)(iVar8 + 0x20) = 0;
  *(undefined4 *)(iVar8 + 0x24) = 0;
  *(undefined4 *)(iVar8 + 0x28) = 0;
  *(undefined4 *)(iVar8 + 0x2c) = 0;
  *(undefined4 *)(iVar8 + 0x30) = 0;
  *(undefined4 *)(iVar8 + 0x34) = 0;
  *(undefined4 *)(iVar8 + 0x3c) = 0;
  *(undefined4 *)(iVar8 + 0x40) = 0;
  *(undefined4 *)(iVar8 + 0x44) = 0;
  *(undefined4 *)(iVar8 + 0x48) = 0;
  *(undefined4 *)(iVar8 + 0x4c) = 0;
  *(undefined2 *)(iVar8 + 0xb2) = 1;
  *(undefined2 *)(iVar8 + 0xb4) = 1;
  *(undefined4 *)(iVar8 + 0xb8) = 0xffffffff;
  *(undefined4 *)(iVar8 + 0xbc) = 0xffffffff;
  *(undefined4 *)(iVar8 + 0xc0) = 0xffffffff;
  *(undefined4 *)(iVar8 + 0xc4) = 0xffffffff;
  *(undefined4 *)(iVar8 + 200) = 0xffffffff;
  fn_00158f6c(iVar8 + 0x51,0x60);
  return iVar8 + -0x14c;
}



void fn_0030b8f8(int param_1,char param_2,undefined1 param_3)

{
  *(undefined1 *)(*(int *)(param_1 + (char)(param_2 + -0x10) * 4 + 4) + 0x57) = param_3;
  return;
}



void fn_0030b748(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = (int)*(short *)(param_1 + 0x90);
  iVar2 = param_1;
  if (param_2 == 0) {
    iVar2 = (int)*(short *)(param_1 + 0x8e);
  }
  if (param_2 != 0 || iVar2 != iVar6) {
    uVar5 = 0;
    do {
      if ((iVar6 < 1) && (uVar5 != 0)) {
        uVar1 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x14c) >> 2;
        if (uVar1 <= uVar5) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5,uVar1);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x14c) + uVar5 * 4);
        bVar4 = *(byte *)(iVar2 + 0x44) & 0xfe;
      }
      else {
        uVar7 = iVar6 % 10;
        uVar1 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x14c) >> 2;
        if (uVar1 <= uVar5) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5,uVar1);
        }
        iVar2 = fn_006e1ee8(*(undefined4 *)(*(int *)(param_1 + 0x14c) + uVar5 * 4));
        uVar1 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
        if (uVar1 <= uVar7) {
          fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar7,uVar1);
        }
        uVar3 = fn_001c8888(*(undefined4 *)(param_1 + 0x10),
                             *(undefined4 *)(*(int *)(param_1 + 0x3c) + uVar7 * 4));
        fn_0019501c(*(undefined4 *)(iVar2 + 0x78),uVar3);
        *(byte *)(iVar2 + 0x7c) = *(byte *)(iVar2 + 0x7c) & 0xf7;
        uVar1 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x14c) >> 2;
        if (uVar1 <= uVar5) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5,uVar1);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x14c) + uVar5 * 4);
        bVar4 = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
      }
      *(byte *)(iVar2 + 0x44) = bVar4;
      uVar5 = uVar5 + 1;
      iVar6 = (int)(short)iVar6 / 10;
    } while ((int)uVar5 < 4);
  }
  return;
}


