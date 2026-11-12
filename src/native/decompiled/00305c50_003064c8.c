#include "00305c50_003064c8.h"



undefined4 * fn_003064c8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 in_stack_0000000c;
  undefined1 in_stack_00000010;
  
  puVar1 = (undefined4 *)fn_002e4414();
  piVar4 = puVar1 + 7;
  *puVar1 = &DAT_00821a04;
  *piVar4 = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar3 = 4;
  *piVar4 = (int)puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  puVar1[8] = *piVar4 + 0x10;
  puVar1[9] = *piVar4 + 0x80;
  *(undefined1 *)(puVar1 + 10) = in_stack_0000000c;
  *(undefined1 *)((int)puVar1 + 0x29) = in_stack_00000010;
  puVar1[0xb] = 0x1f;
  return puVar1;
}



int fn_0030647c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return param_1;
}



void fn_00306440(int param_1)

{
  int *piVar1;
  int iVar2;
  
  fn_0069e748();
  iVar2 = 0;
  do {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



void fn_00306360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  do {
    if (*(char *)(param_1 + 0x28) == '\0') {
      fn_003061f4(param_1,*(undefined4 *)(**(int **)(param_1 + 0x18) + iVar3 * 4),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3 * 4));
    }
    else {
      piVar4 = *(int **)(*(int *)(param_1 + 0x1c) + iVar3 * 4);
      iVar1 = *(int *)(**(int **)(param_1 + 0x18) + iVar3 * 4);
      *(undefined1 *)((int)piVar4 + 0x1d) = *(undefined1 *)(param_1 + 0x29);
      if (iVar1 == 0) {
        (**(code **)(*piVar4 + 0x20))(piVar4,0);
        fn_002b427c(piVar4,0);
        fn_002b4348(piVar4,0);
      }
      else {
        uVar2 = fn_00259f5c();
        (**(code **)(*piVar4 + 0x20))(piVar4,1);
        fn_002b427c(piVar4,uVar2);
        fn_002b4348(piVar4,0);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}



void fn_00306068(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  fn_0069e710();
  iVar4 = 0;
  do {
    iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
    if (iVar1 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                                (*(int **)(param_1 + 8),(&PTR_s_MonIcon_00_00893638)[iVar4],1);
      if (piVar5 != (int *)0x0) {
        puVar2 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
        do {
          if (puVar2 == &DAT_0089a928) goto LAB_003060f0;
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      piVar5 = (int *)0x0;
LAB_003060f0:
      piVar5 = (int *)fn_002b44c0(iVar1,*(undefined4 *)(param_1 + 4),piVar5,1);
    }
    (**(code **)(*piVar5 + 0x10))(piVar5);
    *(int **)(*(int *)(param_1 + 0x1c) + iVar4 * 4) = piVar5;
    iVar1 = *(int *)(**(int **)(param_1 + 0x18) + iVar4 * 4);
    if (*(char *)(param_1 + 0x28) == '\0') {
      fn_003061f4(param_1,iVar1,piVar5);
    }
    else {
      *(undefined1 *)((int)piVar5 + 0x1d) = *(undefined1 *)(param_1 + 0x29);
      if (iVar1 == 0) {
        (**(code **)(*piVar5 + 0x20))(piVar5,0);
        fn_002b427c(piVar5,0);
        fn_002b4348(piVar5,0);
      }
      else {
        uVar3 = fn_00259f5c();
        (**(code **)(*piVar5 + 0x20))(piVar5,1);
        fn_002b427c(piVar5,uVar3);
        fn_002b4348(piVar5,0);
      }
    }
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      fn_0069e710(param_1);
      return;
    }
  } while( true );
}



undefined1 * fn_003061f4(int param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  *(undefined1 *)((int)param_3 + 0x1d) = *(undefined1 *)(param_1 + 0x29);
  if ((param_2 == 0) || (iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc)), iVar2 == 0)) {
    (**(code **)(*param_3 + 0x20))(param_3,0);
    fn_002b427c(param_3,0);
    fn_002b4348(param_3,0);
    *(undefined1 *)((int)param_3 + 0x3d) = 0;
    puVar5 = (undefined1 *)fn_002b325c(param_3,0xffffffff);
    *(undefined1 *)((int)param_3 + 0x43) = 0;
    return puVar5;
  }
  fn_0020bbc4(auStack_20,iVar2);
  (**(code **)(*param_3 + 0x20))(param_3,1);
  uVar3 = fn_006bfda8(auStack_1c);
  fn_002b427c(param_3,uVar3);
  uVar3 = fn_006bfe90(auStack_1c);
  fn_002b4348(param_3,uVar3);
  uVar1 = fn_006bf34c(auStack_1c);
  *(undefined1 *)((int)param_3 + 0x3d) = uVar1;
  uVar1 = fn_001f84ac(iVar2 + 0x72);
  *(undefined1 *)((int)param_3 + 0x3f) = uVar1;
  uVar1 = fn_006bf184(auStack_1c);
  *(undefined1 *)((int)param_3 + 0x43) = uVar1;
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (*(char *)(param_1 + 0x15) != '\0') {
      iVar2 = fn_006bfffc(auStack_1c);
      if (iVar2 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 7;
      }
      fn_002b325c(param_3,uVar3);
    }
  }
  else {
    fn_002b325c(param_3,3);
  }
  uVar4 = fn_006bfe90(auStack_1c);
  if ((*(uint *)(param_1 + 0x2c) & 1 << (uVar4 & 0xff)) == 0) {
    *(undefined1 *)((int)param_3 + 0x33) = 0;
  }
  else {
    *(undefined1 *)((int)param_3 + 0x33) = 1;
  }
  return auStack_20;
}



int fn_00305c50(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_34;
  undefined4 local_30;
  int *piStack_2c;
  undefined4 uStack_28;
  
  uStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  uStack_28 = param_4;
  puVar1 = (undefined4 *)fn_0069e7cc(param_1,param_2,param_3,param_4,param_5);
  *puVar1 = &DAT_008219d4;
  iVar2 = fn_00101a1c(puVar1 + 5,&LAB_001ad80c,4,10);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  piVar7 = (int *)0x0;
  iVar6 = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  do {
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    fn_0017d96c(&local_68,0x20,0x1f,(char *)&DAT_00305fa0,iVar6);
    piVar3 = (int *)(**(code **)(*param_3 + 0x2c))(param_3,&local_68,1);
    if (piVar3 != (int *)0x0) {
      puVar1 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
      do {
        if (puVar1 == &DAT_0089a928) goto LAB_00305d50;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_00305d50:
    iVar8 = iVar2 + -0x14 + iVar6 * 4;
    piVar9 = (int *)(iVar8 + 0x14);
    iVar4 = fn_00145b00(0x34,&DAT_00812c8c);
    if (iVar4 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_0037cf68(iVar4,local_30,piVar3,1,*(undefined4 *)(iVar2 + -4));
    }
    piVar5 = (int *)*piVar9;
    if (piVar5 != piVar3) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))();
      }
      *piVar9 = (int)piVar3;
    }
    (**(code **)(**(int **)(iVar8 + 0x14) + 0x10))();
    iVar6 = iVar6 + 1;
  } while (iVar6 < 10);
  piVar3 = (int *)(**(code **)(*param_3 + 0x2c))(param_3,(char *)&DAT_00305fb8,1);
  if (piVar3 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar1 == &DAT_0089a928) goto LAB_00305e1c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_00305e1c:
  iVar6 = fn_00145b00(0x44,&DAT_00812c8c);
  if (iVar6 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_00307cc4(iVar6,local_30,piVar3,1,*(undefined4 *)(iVar2 + -4));
  }
  piVar9 = *(int **)(iVar2 + 0x28);
  if (piVar9 != piVar3) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))();
    }
    *(int **)(iVar2 + 0x28) = piVar3;
  }
  (**(code **)(**(int **)(iVar2 + 0x28) + 0x10))();
  piVar3 = (int *)(**(code **)(*param_3 + 0x2c))(param_3,&LAB_00305fc4,1);
  if (piVar3 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar1 == &DAT_0089a928) {
        piVar7 = piVar3;
        break;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  iVar6 = fn_00145b00(0x24,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar6 != 0) {
    piVar3 = (int *)fn_00243834(iVar6,local_30,piVar7,1,*(undefined4 *)(iVar2 + -4));
  }
  piVar7 = *(int **)(iVar2 + 0x2c);
  if (piVar7 != piVar3) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    *(int **)(iVar2 + 0x2c) = piVar3;
  }
  iVar6 = fn_00145b00(0x5c,&DAT_00812c8c);
  if (iVar6 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)fn_0025e920(iVar6,local_30,param_3);
  }
  piVar3 = *(int **)(iVar2 + 0x30);
  if (piVar3 != piVar7) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(int **)(iVar2 + 0x30) = piVar7;
  }
  return iVar2 + -0x14;
}


