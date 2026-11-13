#include "00393b30_00394550.h"



void fn_00394550(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0x1c);
  iVar2 = fn_002305a4(param_3,0);
  *(byte *)(*(int *)(iVar1 + 0x18) + 0x44) =
       iVar2 != 0 | *(byte *)(*(int *)(iVar1 + 0x18) + 0x44) & 0xfe;
  if (iVar2 != 0) {
    fn_00190d50(*(undefined4 *)(iVar1 + 0x18),iVar2);
  }
  *(char *)(iVar1 + 0x1c) = (char)param_3;
  return;
}



void fn_00394544(int param_1,undefined4 param_2)

{
  fn_002b1fa0(*(undefined4 *)(param_1 + 0x14),param_2,0);
  return;
}



void fn_0039452c(int param_1,int param_2,undefined4 param_3)

{
  fn_002b1f0c(*(undefined4 *)(*(int *)(param_1 + param_2 * 4 + 0x1c) + 0x14),param_3);
  return;
}



void fn_00394460(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  fn_0069e710();
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),(char *)&DAT_00394500);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_003944bc;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_003944bc:
  *(int **)(param_1 + 0x18) = piVar2;
  cVar1 = *(char *)(param_1 + 0x1c);
  iVar4 = fn_002305a4((int)cVar1,0);
  *(byte *)(*(int *)(param_1 + 0x18) + 0x44) =
       iVar4 != 0 | *(byte *)(*(int *)(param_1 + 0x18) + 0x44) & 0xfe;
  if (iVar4 != 0) {
    fn_00190d50(*(undefined4 *)(param_1 + 0x18));
  }
  *(char *)(param_1 + 0x1c) = cVar1;
  return;
}



undefined4 * fn_003943e4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0069e7cc();
  puVar1[5] = 0;
  *puVar1 = &DAT_0082b5bc;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined2 *)(puVar1 + 0xb) = 0;
  *(undefined2 *)((int)puVar1 + 0x2e) = 0;
  *(undefined2 *)(puVar1 + 0xc) = 0;
  *(undefined2 *)((int)puVar1 + 0x32) = 0;
  *(undefined2 *)(puVar1 + 0xd) = 0;
  *(undefined2 *)((int)puVar1 + 0x36) = 0;
  *(undefined2 *)(puVar1 + 0xe) = 0;
  *(undefined2 *)((int)puVar1 + 0x3a) = 0;
  fn_00393e88(puVar1);
  return puVar1;
}



void fn_0039439c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xac);
  (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



void fn_003941a4(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_14 [12];
  
  iVar1 = param_1;
  if (param_2 == 0) {
    iVar1 = (int)*(short *)(param_1 + 0x38);
  }
  if (param_2 != 0 || iVar1 != *(short *)(param_1 + 0x3a)) {
    fn_0018a618(auStack_14,3,2,&LAB_003941f0,(int)*(short *)(param_1 + 0x3a));
    fn_00190d50(*(undefined4 *)(param_1 + 0x20),auStack_14);
  }
  return;
}



void fn_00393e88(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  undefined1 auStack_24 [8];
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_0089341c,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_00393eec;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_00393eec:
  *(int **)(param_1 + 0x14) = piVar1;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_00893420,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_00393f3c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_00393f3c:
  *(int **)(param_1 + 0x18) = piVar1;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_00893424,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_00393f8c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_00393f8c:
  *(int **)(param_1 + 0x1c) = piVar1;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_00893428,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_00393fd8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_00393fd8:
  *(int **)(param_1 + 0x20) = piVar1;
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0xac);
  uVar3 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                    (*(int **)(iVar4 + 0x10),(char *)&DAT_00394178,1);
  uVar3 = fn_005517dc(iVar4,(char *)&DAT_00394178,uVar3,1);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar3 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                    (*(int **)(iVar4 + 0x10),(char *)&DAT_0039418c,1);
  uVar3 = fn_005517dc(iVar4,(char *)&DAT_0039418c,uVar3,1);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  fn_0069e710(param_1);
  uVar3 = VectorSignedToFloat((int)*(short *)(param_1 + 0x2e),(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10) = uVar3;
  fn_0018a618(auStack_24,3,2,&LAB_003941f0,(int)*(short *)(param_1 + 0x2e));
  fn_00190d50(*(undefined4 *)(param_1 + 0x14),auStack_24);
  fn_0018a618(auStack_24,3,2,&LAB_003941f0,(int)*(short *)(param_1 + 0x32));
  fn_00190d50(*(undefined4 *)(param_1 + 0x18),auStack_24);
  uVar3 = VectorSignedToFloat(*(short *)(param_1 + 0x36) * 10,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10) = uVar3;
  fn_0018a618(auStack_24,3,2,&LAB_003941f0,(int)*(short *)(param_1 + 0x36));
  fn_00190d50(*(undefined4 *)(param_1 + 0x1c),auStack_24);
  fn_0018a618(auStack_24,3,2,&LAB_003941f0,(int)*(short *)(param_1 + 0x3a));
  fn_00190d50(*(undefined4 *)(param_1 + 0x20),auStack_24);
  if (*(short *)(param_1 + 0x2c) != *(short *)(param_1 + 0x2e)) {
    *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2e);
  }
  if (*(short *)(param_1 + 0x30) != *(short *)(param_1 + 0x32)) {
    *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x32);
  }
  if (*(short *)(param_1 + 0x34) != *(short *)(param_1 + 0x36)) {
    *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0x36);
  }
  if (*(short *)(param_1 + 0x38) != *(short *)(param_1 + 0x3a)) {
    *(short *)(param_1 + 0x38) = *(short *)(param_1 + 0x3a);
  }
  return;
}



void fn_00393e20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082b588;
  fn_002e40d8(param_1);
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 0x18))();
    if ((int *)param_1[10] != (int *)0x0) {
      (**(code **)(*(int *)param_1[10] + 4))();
      param_1[10] = 0;
    }
  }
  fn_002e4388(param_1);
  fn_002feef8();
  return;
}



void fn_00393e00(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002e42dc();
  *puVar1 = &PTR_FUN_0082b588;
  puVar1[10] = 0;
  return;
}



void fn_00393d24(int param_1)

{
  uint uVar1;
  uint local_24;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  (**(code **)(**(int **)(param_1 + 0x28) + 0x34))(*(int **)(param_1 + 0x28),param_1 + 4);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x38))();
  fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x28),&local_18,3,3);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_0078cb6c(&local_24,3,0,0);
  fn_002e3d70(param_1,&local_24,&local_18,3,1);
  fn_002e4118(param_1,&local_24);
  uVar1 = local_24;
  if (local_20 < local_24) {
    do {
      uVar1 = uVar1 + 8;
    } while (uVar1 != local_20);
  }
  fn_001008c4(local_24,(int)(local_1c - local_24) >> 3,0);
  return;
}



void fn_00393cdc(int param_1)

{
  fn_002e40d8();
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))();
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 4))();
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  return;
}



void fn_00393b30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined1 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint local_50;
  uint uStack_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar1 = fn_00145b00(0x4c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0037e2ac(iVar1,*(undefined4 *)(param_1 + 0x14),param_2,1,param_4,param_1 + 4
                                 ,param_8,param_9);
  }
  piVar4 = *(int **)(param_1 + 0x28);
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x28) = piVar2;
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x28),&local_38,3,3);
  fn_002e3f6c(&local_50);
  local_3b = 0;
  local_40 = 1;
  local_3c = param_7;
  local_44 = 3;
  local_3a = (undefined1)param_6;
  fn_0078cb6c(&local_50,3,0,0);
  fn_002e3d70(param_1,&local_50,&local_38,3,param_8);
  fn_002e3c08(param_1,&local_50,param_3,param_5,3,3,param_6 ^ 1,0);
  uVar3 = local_50;
  if (uStack_4c < local_50) {
    do {
      uVar3 = uVar3 + 8;
    } while (uVar3 != uStack_4c);
  }
  fn_001008c4(local_50,(int)(local_48 - local_50) >> 3,0);
  return;
}


