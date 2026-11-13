#include "002eaabc_002eba10.h"



void fn_002eba10(undefined4 *param_1)

{
  *param_1 = &DAT_008210c8;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_002eb990(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_008210c8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  iVar1 = fn_00145b00(0xb0,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_003710cc();
  }
  param_1[5] = uVar2;
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0032c264();
  }
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  return param_1;
}



void fn_002eb950(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00681c7c();
  if (iVar1 != 0) {
    fn_002287d0(DAT_00897894,0x10,0,1);
    fn_00682a8c();
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



void fn_002eb8b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar4 = *(undefined4 *)(DAT_00897804 + 0x4c);
  uVar1 = fn_0011a314(param_1 + 8);
  uVar2 = fn_0011a3c4(param_1 + 8);
  uVar3 = fn_0011a36c(param_1 + 8);
  fn_0031a8e4(uVar4,*(undefined1 *)(param_1 + 0x10),uVar3,uVar2,uVar1);
  fn_001237e4(&local_20);
  local_28 = local_20;
  uStack_24 = uStack_1c;
  uVar5 = fn_00129f6c(&local_28,local_20,0x26d694b3,0x112e0be8,0x1a);
  uVar1 = (undefined4)((ulonglong)uVar5 >> 0x20);
  fn_0031a8d8(uVar4,uVar1,(int)uVar5,uVar1);
  return;
}



void fn_002eb84c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar4 = *(undefined4 *)(DAT_00897804 + 0x4c);
  fn_002eb72c(&local_18);
  local_20 = local_18;
  uStack_1c = uStack_14;
  uVar1 = fn_0011a314(&local_20);
  uVar2 = fn_0011a3c4(&local_20);
  uVar3 = fn_0011a36c(&local_20);
  fn_0031a914(uVar4,uVar3,uVar2,uVar1);
  return;
}



int fn_002eb7a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x60) != '\0') {
    iVar1 = fn_0032be34(*(undefined4 *)(param_1 + 0x18));
    uVar2 = fn_006c5514(*(undefined4 *)(param_1 + 0x20),(int)*(short *)(iVar1 + 2));
    iVar3 = fn_0012f254(uVar2,*(undefined4 *)(iVar1 + 0xc));
    if (iVar3 == 1) {
      if (9999 < *(short *)(iVar1 + 2)) {
        fn_006c543c(*(undefined4 *)(param_1 + 0x20));
        fn_002ea1d4();
      }
      uVar4 = 0;
      do {
        if (9999 < *(short *)(iVar1 + uVar4 * 2 + 4)) {
          fn_006c543c(*(undefined4 *)(param_1 + 0x20));
          fn_002ea1d4();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 4);
      fn_00615e18(param_1 + 0x24,iVar1);
    }
  }
  return iVar3;
}



void fn_002eb72c(longlong *param_1)

{
  longlong lVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  uint local_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [8];
  
  fn_006f5e08(auStack_18,DAT_00897850);
  fn_006d3d30(&local_20,auStack_18);
  local_28 = 0xb67da000;
  uStack_24 = 0x1d77;
  lVar1 = fn_00129f6c(&local_28,0x12,0xd7b634db,0x431bde82,0x12);
  *param_1 = lVar1 + CONCAT44(uStack_1c,local_20);
  return;
}



void fn_002eb704(int param_1)

{
  *(bool *)(param_1 + 0x10) = *(char *)(DAT_00897850 + 0x4f) != '\0';
  return;
}



undefined4 fn_002eb634(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  
  uVar1 = fn_00370e94(*(undefined4 *)(param_1 + 0x14));
  if (((*(char *)(param_1 + 0x1c) == '\0') && (iVar2 = fn_006c3c7c(), iVar2 != 0)) &&
     (iVar2 = fn_006c3c90(uVar1), iVar2 != 0)) {
    iVar2 = *(int *)(param_1 + 0x14);
    if (*(char *)(iVar2 + 0x60) != '\0') {
      iVar3 = fn_00145b00(0x20,&DAT_00812c8c);
      piVar5 = (int *)0x0;
      if (iVar3 != 0) {
        uVar4 = fn_006c3c44(*(undefined4 *)(param_1 + 0x14));
        piVar5 = (int *)fn_003a0014(iVar3,uVar4);
      }
      piVar6 = *(int **)(param_1 + 0x20);
      if (piVar6 != piVar5) {
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
        *(int **)(param_1 + 0x20) = piVar5;
      }
      fn_0032b88c(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),iVar2 + 0x62,
                   iVar2 + 0x58);
    }
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return uVar1;
}



void fn_002eb5ac(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 local_10 [2];
  undefined2 local_e;
  undefined2 local_c;
  
  fn_0019bc50(local_10,DAT_008928ac + (param_3 + param_2 * 0x18) * 6,param_3,param_4,0,0);
  *param_1 = CONCAT22(local_e,CONCAT11(local_10[0],1));
  *(undefined2 *)(param_1 + 1) = local_c;
  return;
}



undefined4 * fn_002eabb8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar5 = param_2[1];
  puVar7 = &DAT_008f9cf8;
  *param_1 = *param_2;
  param_1[1] = uVar5;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  param_1[3] = param_2[3];
  iVar1 = param_2[4];
  if (*(int *)(iVar1 + -0xc) == -1) {
    uVar6 = *(uint *)(iVar1 + -4);
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar6,0xfffffff1);
    }
    puVar3 = puVar7;
    if (uVar6 != 0) {
      puVar3 = (undefined4 *)fn_00100fc6(uVar6 + 0xe,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3[1] = uVar6;
      puVar4 = (undefined1 *)((int)puVar3 + uVar6 + 0xc);
      puVar3[2] = uVar6;
      *puVar3 = 0;
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
    }
    param_1[4] = puVar3 + 3;
    fn_00301a9c(puVar3 + 3,param_2[4],uVar6);
  }
  else {
    param_1[4] = iVar1;
    piVar2 = (int *)(iVar1 + -0xc);
    if (piVar2 != &DAT_008f9cf8) {
      *piVar2 = *piVar2 + 1;
    }
  }
  iVar1 = param_2[5];
  if (*(int *)(iVar1 + -0xc) == -1) {
    uVar6 = *(uint *)(iVar1 + -4);
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar6,0xfffffff1);
    }
    if (uVar6 != 0) {
      puVar7 = (undefined4 *)fn_00100fc6(uVar6 + 0xe,0);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
      }
      puVar7[1] = uVar6;
      puVar4 = (undefined1 *)((int)puVar7 + uVar6 + 0xc);
      puVar7[2] = uVar6;
      *puVar7 = 0;
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
    }
    param_1[5] = puVar7 + 3;
    fn_00301a9c(puVar7 + 3,param_2[5],uVar6);
  }
  else {
    param_1[5] = iVar1;
    piVar2 = (int *)(iVar1 + -0xc);
    if (piVar2 != &DAT_008f9cf8) {
      *piVar2 = *piVar2 + 1;
    }
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  return param_1;
}



void fn_002eaabc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_r4;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_r9;
  int iVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  iVar6 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar7 = *(int *)(param_1 + 0xc);
  if (iVar5 != iVar6) {
    unaff_r9 = &DAT_008f9cf8;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar5 != iVar6) {
    iVar4 = iVar5;
    do {
      if (*(int **)(iVar4 + 0x14) != unaff_r9 + 3) {
        piVar1 = *(int **)(iVar4 + 0x14) + -3;
        iVar3 = *piVar1;
        if ((iVar3 == -1) || ((piVar1 != unaff_r9 && (*piVar1 = iVar3 + -1, iVar3 == 0)))) {
          fn_001008c4(*(int *)(iVar4 + 0x14) + -0xc,*(int *)(*(int *)(iVar4 + 0x14) + -8) + 0xe,0);
        }
      }
      if (*(int **)(iVar4 + 0x10) != unaff_r9 + 3) {
        piVar1 = *(int **)(iVar4 + 0x10) + -3;
        iVar3 = *piVar1;
        if ((iVar3 == -1) || ((piVar1 != unaff_r9 && (*piVar1 = iVar3 + -1, iVar3 == 0)))) {
          fn_001008c4(*(int *)(iVar4 + 0x10) + -0xc,*(int *)(*(int *)(iVar4 + 0x10) + -8) + 0xe,0);
        }
      }
      iVar4 = iVar4 + 0x1c;
    } while (iVar4 != iVar6);
  }
  uVar2 = iVar7 - iVar5;
  iVar6 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
  fn_002feef8(iVar5,(iVar6 >> 4) - (iVar6 >> 0x1f),0,param_4,unaff_r4,in_lr);
  return;
}


