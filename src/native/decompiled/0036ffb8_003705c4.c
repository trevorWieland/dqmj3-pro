#include "0036ffb8_003705c4.h"



undefined4 fn_003705c4(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  while( true ) {
    if (*(undefined4 **)(param_1 + 0x34) == puVar1) {
      return 0;
    }
    if (*(char *)(puVar1 + 0x3c) == '\x01') break;
    puVar1 = puVar1 + 0x3d;
  }
  return *puVar1;
}



void fn_00370588(int param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  psVar1 = (short *)(param_1 + 0x4e);
  do {
    uVar3 = uVar3 + 1;
    psVar2 = psVar1 + 1;
    *psVar1 = *param_2;
    bVar4 = param_2[1] == 0;
    psVar1 = psVar2;
    param_2 = param_2 + 1;
  } while ((bVar4 || uVar3 < 0xc) && (!bVar4 && uVar3 != 0xb));
  *psVar2 = 0;
  return;
}



void fn_00370550(int param_1)

{
  if (*(int *)(param_1 + 0x6c) != 0) {
    fn_002feef8(*(int *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}



void fn_00370500(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00145b00(0x1510,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00662a34();
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_002feef8(iVar1);
    }
    *(int *)(param_1 + 0x6c) = iVar2;
  }
  return;
}



void fn_003704e8(undefined4 param_1,int param_2,int param_3)

{
  fn_0017821c(param_1,*(int *)(param_2 + 0x3c) + param_3 * 0xf4,0xf0);
  return;
}



void fn_003704a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 in_stack_000000e4;
  undefined1 auStack_118 [240];
  undefined1 local_28;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  fn_0017821c(auStack_118,&uStack_c,0xf0);
  local_28 = in_stack_000000e4;
  fn_0079a3ec(param_1 + 0x3c,auStack_118);
  return;
}



void fn_00370494(int param_1,undefined4 param_2)

{
  fn_0017821c(*(undefined4 *)(param_1 + 0x6c),param_2,0x1510);
  return;
}



void fn_0037047c(undefined4 param_1,int param_2,int param_3)

{
  fn_0017821c(param_1,*(int *)(param_2 + 0x30) + param_3 * 0xf4,0xf0);
  return;
}



void fn_00370438(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 in_stack_000000e4;
  undefined1 auStack_118 [240];
  undefined1 local_28;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  fn_0017821c(auStack_118,&uStack_c,0xf0);
  local_28 = in_stack_000000e4;
  fn_0079a3ec(param_1 + 0x30,auStack_118);
  return;
}



void fn_00370414(int *param_1)

{
  (**(code **)(*param_1 + 0xc))(param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



void fn_0037040c(int param_1)

{
  fn_002d691c(*(undefined4 *)(param_1 + 0x48));
  return;
}



void fn_00370384(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x10))(param_1);
  iVar1 = (**(code **)(*param_1 + 0x24))(param_1);
  param_1[0x1a] = iVar1;
  fn_002d691c(param_1[0x12]);
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_1[0x1b] != 0) {
    fn_002feef8(param_1[0x1b]);
    param_1[0x1b] = 0;
  }
  fn_001076bc(2);
  fn_005f3c30(2);
  return;
}



void fn_0036ffb8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_18;
  
  local_18 = param_4;
  fn_005f3c48(2);
  fn_005f3aac(2);
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00241510(iVar1,0x80000);
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[2] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0023e8ec(iVar1,4);
  }
  piVar4 = (int *)param_1[3];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[3] = (int)piVar2;
  }
  *(int *)(param_1[3] + 4) = param_1[2];
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_00370378);
  }
  piVar4 = (int *)param_1[4];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[4] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_00370378);
  }
  piVar4 = (int *)param_1[5];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[5] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_00370378);
  }
  piVar4 = (int *)param_1[6];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[6] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_00370378);
  }
  piVar4 = (int *)param_1[7];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[7] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = (int *)param_1[8];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[8] = (int)piVar2;
  }
  fn_0011050c(param_1[8],param_1[4],param_1[5]);
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = (int *)param_1[9];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[9] = (int)piVar2;
  }
  fn_0011050c(param_1[9],param_1[6],param_1[7]);
  iVar1 = fn_00145b00(0x4c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_003c1fbc(iVar1,0);
  }
  piVar4 = (int *)param_1[10];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    param_1[10] = (int)piVar2;
  }
  *(int *)(param_1[10] + 8) = param_1[8];
  *(int *)(param_1[10] + 0xc) = param_1[9];
  *(int *)(param_1[10] + 0x10) = param_1[2];
  *(int *)(param_1[10] + 0x14) = param_1[3];
  (**(code **)(*param_1 + 0x20))(param_1);
  iVar1 = param_1[2];
  uVar5 = *(undefined4 *)(param_1[3] + 0x3c);
  uVar3 = fn_00129004();
  fn_002419f4(uVar3,iVar1,uVar5);
  iVar1 = param_1[4];
  iVar6 = param_1[5];
  uVar3 = fn_00129004();
  fn_002416b4(uVar3,iVar1,iVar6);
  iVar1 = param_1[6];
  iVar6 = param_1[7];
  uVar3 = fn_00129004();
  fn_00241948(uVar3,iVar1,iVar6);
  fn_002cd71c();
  (**(code **)(*(int *)param_1[0xb] + 0x1c))();
  local_18 = 0;
  fn_00163988(DAT_00897808,&local_18,0x14);
  local_18 = 0;
  fn_00163988(DAT_0089780c,&local_18,0x14);
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}


