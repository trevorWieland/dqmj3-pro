#include "00356b94_003573c0.h"



void fn_003573c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x158,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00357b48(iVar1,param_1);
  return;
}



void fn_0035732c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xcc) != 0) {
    iVar2 = 0;
    iVar3 = iVar2;
    do {
      uVar1 = (**(code **)(**(int **)(param_1 + 0xac) + 0x30))(*(int **)(param_1 + 0xac),0,iVar2);
      if (*(int *)(*(int *)(param_1 + 0x9c) + iVar2 * 4) == *(int *)(param_1 + 0xcc)) {
        fn_002b4034(uVar1,1);
        iVar3 = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 1;
    }
  }
  return;
}



void fn_003572cc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xcc) != 0) {
    iVar2 = 0;
    do {
      uVar1 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x30))(*(int **)(param_1 + 0xa8),0,iVar2);
      if (*(int *)(*(int *)(param_1 + 0x90) + iVar2 * 4) == *(int *)(param_1 + 0xcc)) {
        fn_002b3d78(uVar1,1,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
  }
  return;
}



void fn_0035723c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 8;
    if (*(int *)(iVar3 + 0x138) != 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0xac) + 0x30))(*(int **)(param_1 + 0xac),0,iVar2);
      uVar4 = *(undefined4 *)(iVar3 + 0x134);
      iVar3 = fn_00174828(DAT_008977e4);
      *(bool *)(iVar1 + 0x33) = *(char *)(iVar3 + (char)uVar4 * 0x418 + -0x4019) == '\0';
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



void fn_003571ac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 8;
    if (*(int *)(iVar3 + 0x118) != 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x30))(*(int **)(param_1 + 0xa8),0,iVar2);
      uVar4 = *(undefined4 *)(iVar3 + 0x114);
      iVar3 = fn_00174828(DAT_008977e4);
      *(bool *)(iVar1 + 0x33) = *(char *)(iVar3 + (char)uVar4 * 0x418 + -0x4019) == '\0';
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



void fn_00357154(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 200) != 0) {
    iVar3 = 0;
    do {
      iVar2 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x30))(*(int **)(param_1 + 0xa8),0,iVar3);
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      if (*(int *)(*(int *)(param_1 + 0x90) + iVar1) == *(int *)(param_1 + 200)) {
        *(undefined1 *)(iVar2 + 0x23) = 1;
      }
    } while (iVar3 < 4);
  }
  return;
}



void fn_00356ff8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  do {
    iVar5 = param_1 + iVar4 * 8;
    if (*(int *)(iVar5 + 0x118) == param_2) {
      cVar1 = (char)*(undefined4 *)(iVar5 + 0x114);
      if ((int)cVar1 - 0x18U < 8) {
        iVar2 = fn_00174828(DAT_008977e4);
        *(bool *)(*(int *)(param_1 + 0xb0) + 0x33) =
             *(char *)(iVar2 + cVar1 * 0x418 + -0x4019) == '\0';
      }
      else {
        iVar2 = fn_00174828(DAT_008977e4);
        *(bool *)(*(int *)(param_1 + 0xb0) + 0x33) =
             *(char *)(iVar2 + cVar1 * 0x418 + -0x4019) == '\0';
      }
    }
    if (*(int *)(iVar5 + 0x138) == param_2) {
      cVar1 = (char)*(undefined4 *)(iVar5 + 0x134);
      if ((int)cVar1 - 0x18U < 8) {
        iVar5 = fn_00174828(DAT_008977e4);
        iVar2 = *(int *)(param_1 + 0xb0);
        if (*(char *)(iVar5 + cVar1 * 0x418 + -0x4019) == '\0') goto LAB_00357148;
LAB_00357130:
        uVar3 = 0;
      }
      else {
        iVar5 = fn_00174828(DAT_008977e4);
        iVar2 = *(int *)(param_1 + 0xb0);
        if (*(char *)(iVar5 + cVar1 * 0x418 + -0x4019) != '\0') goto LAB_00357130;
LAB_00357148:
        uVar3 = 1;
      }
      *(undefined1 *)(iVar2 + 0x33) = uVar3;
    }
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      return;
    }
  } while( true );
}



void fn_00356f80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc4) != 0) {
    iVar2 = 0;
    iVar3 = iVar2;
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 0xac) + 0x30))(*(int **)(param_1 + 0xac),0,iVar2);
      if (*(int *)(*(int *)(param_1 + 0x9c) + iVar2 * 4) == *(int *)(param_1 + 0xc4)) {
        *(undefined1 *)(iVar1 + 0x29) = 1;
        iVar3 = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 1;
    }
  }
  return;
}



void fn_00356ea8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x30))(*(int **)(param_1 + 0xa8),0,iVar2);
    *(undefined1 *)(iVar1 + 0x27) = 0;
    *(undefined1 *)(iVar1 + 0x23) = 0;
    *(undefined1 *)(iVar1 + 0x29) = 0;
    *(undefined1 *)(iVar1 + 0x25) = 0;
    fn_002b3d78(iVar1,0);
    fn_002b4034(iVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = 0;
  do {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xac) + 0x30))(*(int **)(param_1 + 0xac),0,iVar2);
    *(undefined1 *)(iVar1 + 0x27) = 0;
    *(undefined1 *)(iVar1 + 0x23) = 0;
    *(undefined1 *)(iVar1 + 0x29) = 0;
    *(undefined1 *)(iVar1 + 0x25) = 0;
    fn_002b3d78(iVar1,0);
    fn_002b4034(iVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



void fn_00356e10(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc4) != 0) {
    iVar2 = 0;
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x30))(*(int **)(param_1 + 0xa8),0,iVar2);
      if (*(int *)(*(int *)(param_1 + 0x90) + iVar2 * 4) == *(int *)(param_1 + 0xc4)) {
        *(undefined1 *)(iVar1 + 0x27) = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar2 = 0;
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 0xac) + 0x30))(*(int **)(param_1 + 0xac),0,iVar2);
      if (*(int *)(*(int *)(param_1 + 0x9c) + iVar2 * 4) == *(int *)(param_1 + 0xc4)) {
        *(undefined1 *)(iVar1 + 0x27) = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
  }
  return;
}



undefined1 * fn_00356b94(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  int local_20;
  int local_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x34))();
  iVar4 = **(int **)(param_1 + 0xbc);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(iVar4 + 0x38))();
    iVar4 = **(int **)(param_1 + 0xbc);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(iVar4 + 0x3c))();
      if (iVar1 == 0) goto LAB_00356cf8;
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x30))(*(int **)(param_1 + 0xbc),0,&local_20);
      piVar3 = *(int **)(param_1 + 0xbc);
      pcVar6 = *(code **)(*piVar3 + 0x2c);
      iVar1 = 1;
    }
    else {
      (**(code **)(iVar4 + 0x30))(*(int **)(param_1 + 0xbc),&local_20,0);
      piVar3 = *(int **)(param_1 + 0xbc);
      pcVar6 = *(code **)(*piVar3 + 0x2c);
      iVar1 = local_20;
      local_20 = 0;
    }
    (*pcVar6)(piVar3,iVar1,local_20,0);
  }
  else {
    (**(code **)(iVar4 + 0x30))(*(int **)(param_1 + 0xbc),&local_20,0);
    iVar4 = *(int *)(param_1 + 0xd0) % 2;
    iVar1 = *(int *)(param_1 + 0xd0) / 2;
    uVar5 = 0;
    if (iVar4 == 0) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar1 * 4);
    }
    else if (iVar4 == 1) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar1 * 4);
    }
    uVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar5);
    fn_0020bbc4(auStack_18,uVar5);
    fn_006bfe90(auStack_14);
    iVar1 = fn_001cab7c();
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x2c))(*(int **)(param_1 + 0xbc),local_20,4 - iVar1,0)
    ;
  }
LAB_00356cf8:
  puVar2 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0xbc) + 100))();
  if ((int)puVar2 < 0) {
    return puVar2;
  }
  local_20 = (int)puVar2 % 2;
  local_1c = (int)puVar2 / 2;
  iVar4 = *(int *)(param_1 + 0xd0) % 2;
  iVar1 = *(int *)(param_1 + 0xd0) / 2;
  uVar5 = 0;
  if (iVar4 == 0) {
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar1 * 4);
  }
  else if (iVar4 == 1) {
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar1 * 4);
  }
  uVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar5);
  fn_0020bbc4(auStack_18,uVar5);
  if (local_1c < 5) {
    if (local_20 < 2) goto LAB_00356dfc;
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x30))(*(int **)(param_1 + 0xbc),0,&local_1c);
    piVar3 = *(int **)(param_1 + 0xbc);
    pcVar6 = *(code **)(*piVar3 + 0x2c);
    iVar1 = 0;
    iVar4 = local_1c;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x30))(*(int **)(param_1 + 0xbc),&local_20,0);
    piVar3 = *(int **)(param_1 + 0xbc);
    pcVar6 = *(code **)(*piVar3 + 0x2c);
    iVar1 = local_20;
    iVar4 = 0;
  }
  (*pcVar6)(piVar3,iVar1,iVar4);
LAB_00356dfc:
  return auStack_18;
}


