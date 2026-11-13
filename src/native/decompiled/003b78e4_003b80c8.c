#include "003b78e4_003b80c8.h"

static void svc_0xa(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xa }
#endif
}


undefined4 fn_003b80c8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = fn_003b7f00(param_1,param_2,param_4);
  if (param_3 != 0) {
    fn_003b7e40(param_1,uVar1);
  }
  return uVar1;
}



undefined4 fn_003b8054(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_003b7f00(param_1,L"rom:/data/Menu/Env/mnenv000.bch");
  if (param_2 != 0) {
    fn_003b7e40(param_1,uVar1);
  }
  return uVar1;
}



void fn_003b7fec(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  fn_003b7bc4();
  piVar3 = *(int **)(param_1 + 0x18);
  for (piVar2 = (int *)*piVar3; piVar2 != piVar3; piVar2 = (int *)*piVar2) {
    piVar4 = (int *)piVar2[2];
    iVar1 = (**(code **)(*piVar4 + 0xc))(piVar4);
    if ((iVar1 != 0) && (*(int *)piVar4[5] == 0)) {
      (**(code **)(*piVar4 + 0x10))(piVar4);
    }
  }
  return;
}



void fn_003b7d8c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &DAT_008522b4;
  if (param_1[7] != 0) {
    fn_0012d73c(param_1[7]);
    param_1[7] = 0;
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 4))();
  }
  if ((undefined4 *)param_1[6] != &DAT_008f9cf4) {
    piVar1 = (undefined4 *)param_1[6] + -3;
    iVar2 = *piVar1;
    if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(param_1[6] + -0xc,*(int *)(param_1[6] + -8) + 8,0);
    }
  }
  fn_003b8284(param_1);
  fn_002feef8();
  return;
}



void fn_003b7d40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001287b0();
  uVar1 = fn_0012d6b0(*(undefined4 *)(param_1 + 8),uVar1,0x80,5);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = fn_001287b0();
  uVar1 = fn_0012d6b0(*(undefined4 *)(param_1 + 0x18),uVar1,0x80,5);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



undefined4 fn_003b7c54(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_d8 [128];
  undefined4 local_58;
  undefined4 local_54;
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
  
  local_58 = 0;
  local_54 = 0;
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
  fn_00301f50(auStack_d8,0x80);
  fn_001f8424(&local_58,0x40,param_2,0);
  fn_0018a618(auStack_d8,0x40,0x3f,DAT_00893248,&local_58);
  iVar1 = fn_00147fd4(auStack_d8,5);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = fn_003b7f00(param_1,auStack_d8,param_4);
    if (param_3 != 0) {
      fn_003b7e40(param_1,uVar2);
    }
  }
  return uVar2;
}



void fn_003b7bc4(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x18);
  piVar1 = (int *)*piVar4;
  while (piVar1 != piVar4) {
    piVar2 = (int *)piVar1[2];
    if (piVar2[4] == 0) {
      piVar3 = *(int **)(param_1 + 0x18);
      if (piVar1 != piVar3) {
        piVar3 = (int *)*piVar1;
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        *piVar1 = *(undefined4 *)(param_1 + 0xc);
        *(int **)(param_1 + 0xc) = piVar1;
      }
      piVar1 = piVar3;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    else {
      piVar1 = (int *)*piVar1;
    }
  }
  return;
}



undefined4 fn_003b7ae4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_118 [128];
  undefined1 auStack_98 [128];
  
  fn_00301f50(auStack_118,0x80);
  uVar1 = fn_00242bd4(param_2);
  fn_0018a618(auStack_118,0x40,0x3f,DAT_00893240,uVar1);
  fn_00301f50(auStack_98,0x80);
  uVar1 = fn_00242bd4(param_2);
  fn_0018a618(auStack_98,0x40,0x3f,DAT_00893244,uVar1);
  iVar2 = fn_00147fd4(auStack_98,5);
  if (iVar2 == 0) {
    uVar1 = fn_003b7f00(param_1,auStack_118,0);
  }
  else {
    uVar1 = fn_003b7164(param_1,auStack_118,auStack_98,param_3,0);
  }
  if (param_4 != 0) {
    fn_003b7e40(param_1,uVar1);
  }
  return uVar1;
}



int fn_003b7f00(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *local_20;
  undefined1 auStack_1c [4];
  
  if ((param_3 == 0) || (iVar1 = fn_003b74f8(), iVar1 == -1)) {
    puVar6 = *(undefined4 **)(param_1 + 0x18);
    iVar1 = 0;
    puVar2 = (undefined4 *)*puVar6;
    while (puVar2 != puVar6) {
      if (*(int *)(puVar2[2] + 4) == iVar1) {
        puVar2 = (undefined4 *)*puVar6;
        iVar1 = iVar1 + 1;
      }
      else {
        puVar2 = (undefined4 *)*puVar2;
      }
    }
    puVar2 = (undefined4 *)fn_00145b00(0x18,&DAT_00812c8c);
    piVar7 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_008522d0;
      puVar2[1] = iVar1;
      iVar3 = fn_00168a24(puVar2 + 2,param_2,auStack_1c);
      piVar7 = (int *)(iVar3 + -8);
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 1;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      iVar4 = fn_00145b00(0x34,&DAT_00812c8c);
      uVar5 = 0;
      if (iVar4 != 0) {
        uVar5 = fn_001283fc();
      }
      *(undefined4 *)(iVar3 + 0xc) = uVar5;
    }
    local_20 = piVar7;
    (**(code **)(*piVar7 + 8))();
    fn_0078717c(param_1 + 8,&local_20);
  }
  return iVar1;
}



undefined4 fn_003b7a2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_118 [128];
  undefined1 auStack_98 [128];
  
  fn_00301f50(auStack_118,0x80);
  uVar1 = fn_0069cd0c(param_2);
  fn_0018a618(auStack_118,0x40,0x3f,DAT_00893240,uVar1);
  fn_00301f50(auStack_98,0x80);
  uVar1 = fn_0069cd0c(param_2);
  fn_0018a618(auStack_98,0x40,0x3f,DAT_00893244,uVar1);
  uVar1 = fn_003b78e4(param_1,auStack_118,auStack_98,param_3,0);
  if (param_4 != 0) {
    fn_003b7e40(param_1,uVar1);
  }
  return uVar1;
}



void fn_003b7e40(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  do {
    piVar3 = *(int **)(param_1 + 0x18);
    for (piVar1 = (int *)*piVar3; piVar1 != piVar3; piVar1 = (int *)*piVar1) {
      if (*(int *)(piVar1[2] + 4) == param_2) {
        if (**(int **)(piVar1[2] + 0x14) != 0) {
          return;
        }
        break;
      }
    }
    for (piVar1 = (int *)*piVar3; piVar1 != piVar3; piVar1 = (int *)*piVar1) {
      piVar4 = (int *)piVar1[2];
      iVar2 = (**(code **)(*piVar4 + 0xc))(piVar4);
      if ((iVar2 != 0) && (*(int *)piVar4[5] == 0)) {
        (**(code **)(*piVar4 + 0x10))(piVar4);
      }
    }
    svc_0xa();
  } while( true );
}



int fn_003b78e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  
  if ((param_5 == 0) || (iVar1 = fn_003b74f8(param_1), iVar1 == -1)) {
    puVar6 = *(undefined4 **)(param_1 + 0x18);
    iVar1 = 0;
    for (puVar2 = (undefined4 *)*puVar6; puVar2 != puVar6; puVar2 = (undefined4 *)*puVar2) {
      if (*(int *)(puVar2[2] + 4) == iVar1) {
        iVar1 = iVar1 + 1;
        puVar2 = puVar6;
      }
    }
    puVar2 = (undefined4 *)fn_00145b00(0x44,&DAT_00812c8c);
    local_30 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_008522d0;
      puVar2[1] = iVar1;
      iVar3 = fn_00168a24(puVar2 + 2,param_2,auStack_28);
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 1;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      iVar4 = fn_00145b00(0x34,&DAT_00812c8c);
      uVar5 = 0;
      if (iVar4 != 0) {
        uVar5 = fn_001283fc();
      }
      *(undefined4 *)(iVar3 + 0xc) = uVar5;
      *(undefined **)(iVar3 + -8) = &DAT_008522b4;
      iVar3 = fn_00168a24(iVar3 + 0x10,param_3,auStack_2c);
      *(undefined4 *)(iVar3 + 4) = 0;
      fn_00301a9c(iVar3 + 8,param_4,0x1e);
      iVar4 = fn_00145b00(0x20,&DAT_00812c8c);
      uVar5 = 0;
      if (iVar4 != 0) {
        uVar5 = fn_002f8fd0();
      }
      local_30 = (int *)(iVar3 + -0x18);
      *(undefined4 *)(iVar3 + 0x28) = uVar5;
    }
    (**(code **)(*local_30 + 8))();
    fn_0078717c(param_1 + 8,&local_30);
  }
  return iVar1;
}


