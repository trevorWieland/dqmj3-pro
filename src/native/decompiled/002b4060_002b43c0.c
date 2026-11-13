#include "002b4060_002b43c0.h"



void fn_002b43c0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  
  cVar1 = *(char *)(param_1 + 0x1d);
  if (param_2 == 0) {
    cVar2 = *(char *)(param_1 + 0x1a);
    bVar6 = cVar2 == *(char *)(param_1 + 0x1b);
    if (bVar6) {
      cVar2 = *(char *)(param_1 + 0x1c);
    }
    bVar7 = bVar6 && cVar2 == cVar1;
    if (bVar6 && cVar2 == cVar1) {
      bVar7 = *(char *)(param_1 + 0x2e) == *(char *)(param_1 + 0x2f);
    }
    if ((((bVar7) && (*(char *)(param_1 + 0x30) == *(char *)(param_1 + 0x31))) &&
        (*(char *)(param_1 + 0x32) == *(char *)(param_1 + 0x33))) &&
       (*(char *)(param_1 + 0x34) == *(char *)(param_1 + 0x35))) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x2f) == '\0') {
    if (*(char *)(param_1 + 0x33) == '\0') {
      uVar5 = 0;
    }
    else if (*(char *)(param_1 + 0x31) == '\0') {
      uVar5 = 1;
    }
    else {
      uVar5 = 2;
    }
  }
  else {
    uVar5 = 3;
  }
  if (cVar1 == '\0') {
    iVar4 = (int)*(char *)(param_1 + 0x1b);
  }
  else {
    iVar4 = 0;
  }
  fn_002b3a74(param_1,iVar4,uVar5);
  if (*(int *)(*(int *)(param_1 + 0xc0) + 0xc) != 0) {
    iVar4 = fn_006e1ee4();
    if ((*(char *)(param_1 + 0x33) == '\0') || (*(char *)(param_1 + 0x35) == '\0')) {
      sVar3 = 3;
    }
    else {
      sVar3 = 0;
    }
    *(ushort *)(iVar4 + 0x76) = sVar3 << 6 | *(ushort *)(iVar4 + 0x76) & 0xfe3f;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x002b43d8) */
/* WARNING: Removing unreachable block (ram,0x002b43e4) */
/* WARNING: Removing unreachable block (ram,0x002b43e8) */
/* WARNING: Removing unreachable block (ram,0x002b43ec) */
/* WARNING: Removing unreachable block (ram,0x002b43f0) */
/* WARNING: Removing unreachable block (ram,0x002b43f4) */
/* WARNING: Removing unreachable block (ram,0x002b43f8) */
/* WARNING: Removing unreachable block (ram,0x002b4408) */
/* WARNING: Removing unreachable block (ram,0x002b4418) */

void fn_002b43b8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x2f) == '\0') {
    if (*(char *)(param_1 + 0x33) == '\0') {
      uVar3 = 0;
    }
    else if (*(char *)(param_1 + 0x31) == '\0') {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 3;
  }
  if (*(char *)(param_1 + 0x1d) == '\0') {
    iVar2 = (int)*(char *)(param_1 + 0x1b);
  }
  else {
    iVar2 = 0;
  }
  fn_002b3a74(param_1,iVar2,uVar3);
  if (*(int *)(*(int *)(param_1 + 0xc0) + 0xc) != 0) {
    iVar2 = fn_006e1ee4();
    if ((*(char *)(param_1 + 0x33) == '\0') || (*(char *)(param_1 + 0x35) == '\0')) {
      sVar1 = 3;
    }
    else {
      sVar1 = 0;
    }
    *(ushort *)(iVar2 + 0x76) = sVar1 << 6 | *(ushort *)(iVar2 + 0x76) & 0xfe3f;
  }
  return;
}



void fn_002b4364(int param_1)

{
  fn_0013ae4c(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc4) + 0x14))();
    if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc4) + 4))();
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
  }
  return;
}



void fn_002b42ac(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return;
  }
  iVar3 = 0;
  uVar4 = 0xffffffff;
  uVar2 = 0;
  uVar1 = *(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x90) >> 2;
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x90) + uVar2 * 4) != 0) {
        if ((char)((char)param_2 + -0x10) == iVar3) {
          uVar4 = uVar2;
          break;
        }
        iVar3 = iVar3 + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(*(int *)(param_1 + 0x90) + (char)uVar4 * 4);
  *(char *)(param_1 + 0xc1) = (char)param_2;
  iVar3 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x30))(*(int **)(param_1 + 0xa8),0);
  *(undefined1 *)(iVar3 + 0x27) = 1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x002b429c) */

undefined1 *
fn_002b415c(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,undefined1 param_5,
            int param_6,undefined4 param_7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  if (param_2 != 0) {
    fn_0020bbc4(auStack_30);
    fn_006bfda8(auStack_2c);
    iVar2 = fn_001a46f4();
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x20))(param_1,1);
      uVar3 = fn_006bfda8(auStack_2c);
      fn_002b427c(param_1,uVar3);
      uVar3 = fn_006bfe90(auStack_2c);
      fn_002b4348(param_1,uVar3);
      uVar1 = fn_006bf34c(auStack_2c);
      *(undefined1 *)((int)param_1 + 0x3d) = uVar1;
      uVar1 = fn_006bf184(auStack_2c);
      *(undefined1 *)((int)param_1 + 0x43) = uVar1;
      uVar1 = fn_006c0334(auStack_2c);
      *(undefined1 *)((int)param_1 + 0x45) = uVar1;
      uVar1 = fn_001f84ac(param_2 + 0x72);
      *(undefined1 *)((int)param_1 + 0x3f) = uVar1;
      if (param_6 == 0) {
        *(char *)((int)param_1 + 0x27) = (char)param_3;
      }
      else {
        fn_002b3d78(param_1,param_3,param_7);
      }
      *(undefined1 *)((int)param_1 + 0x1d) = param_4;
      *(undefined1 *)((int)param_1 + 0x41) = param_5;
      return auStack_30;
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,0);
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  return (undefined1 *)0x0;
}



void fn_002b4348(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  *(char *)(param_1 + 0xd0) = (char)param_2;
  uVar1 = fn_0068b334(param_2);
  *(undefined1 *)(param_1 + 0x1b) = uVar1;
  return;
}



void fn_002b427c(int param_1,int param_2)

{
  undefined1 uVar1;
  
  *(short *)(param_1 + 0x16) = (short)param_2;
  if (param_2 - 1U < 8999) {
    uVar1 = fn_0068b0a4();
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x19) = uVar1;
  return;
}



undefined1 * fn_002b4060(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002b4134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined1 *)(**(code **)(*param_1 + 0x20))(param_1,0);
    return puVar4;
  }
  iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
  if (iVar2 == 0) {
    puVar4 = (undefined1 *)(**(code **)(*param_1 + 0x20))(param_1,0);
    return puVar4;
  }
  fn_0020bbc4(auStack_18,iVar2);
  (**(code **)(*param_1 + 0x20))(param_1,1);
  iVar3 = fn_006bfda8(auStack_14);
  *(short *)((int)param_1 + 0x16) = (short)iVar3;
  if (iVar3 - 1U < 8999) {
    uVar1 = fn_0068b0a4();
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)((int)param_1 + 0x19) = uVar1;
  uVar1 = fn_006bfe90(auStack_14);
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  uVar1 = fn_0068b334();
  *(undefined1 *)((int)param_1 + 0x1b) = uVar1;
  uVar1 = fn_006bf34c(auStack_14);
  *(undefined1 *)((int)param_1 + 0x3d) = uVar1;
  uVar1 = fn_001f84ac(iVar2 + 0x72);
  *(undefined1 *)((int)param_1 + 0x3f) = uVar1;
  uVar1 = fn_006bf184(auStack_14);
  *(undefined1 *)((int)param_1 + 0x43) = uVar1;
  return auStack_18;
}


