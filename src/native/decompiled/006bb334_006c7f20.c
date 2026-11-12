#include "006bb334_006c7f20.h"



uint fn_006c7f20(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = false;
  uVar4 = 1;
  uVar3 = 4;
  while( true ) {
    if (*(byte *)(param_1 + 4) == uVar3) {
      bVar1 = true;
    }
    uVar3 = uVar3 - 1;
    if ((int)uVar3 < 0) break;
    if (bVar1) {
      uVar2 = fn_002cf29c(uVar3 & 0xff);
      uVar4 = uVar4 & uVar2;
    }
  }
  return uVar4;
}



void fn_006c5268(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x138) + param_2 * 4);
  if (iVar1 != 0) {
    param_2 = (uint)*(byte *)(iVar1 + 0x44);
  }
  if (iVar1 != 0 && (param_2 & 1) != 0) {
    fn_0068af9c(iVar1);
    return;
  }
  return;
}



void fn_006c3bc0(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  *param_2 = *(undefined2 *)(param_1 + 0x544);
  *param_3 = *(undefined2 *)(param_1 + 0x546);
  return;
}



void fn_006c393c(int param_1,int param_2)

{
  fn_003b1844((int)*(char *)(param_1 + *(int *)(param_1 + 8) * 0xe + param_2 * 4 + 0x2a));
  return;
}



void fn_006c392c(int param_1)

{
  fn_003b1844((int)*(char *)(*(int *)(param_1 + 0x188) +
                              *(int *)(*(int *)(param_1 + 0x188) + 8) * 0xe +
                              *(int *)(param_1 + 0xf0) * 4 + 0x2a));
  return;
}



void fn_006c2de8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x14);
  iVar3 = 0;
  if (0 < iVar5) {
    do {
      iVar4 = *(int *)(param_1 + 0x10) + iVar3 * 9;
      iVar1 = fn_00147e6c(iVar4,param_2,8);
      if (iVar1 == 0) {
        uVar2 = *(undefined1 *)(iVar4 + 8);
        goto LAB_006c2e3c;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar5);
  }
  uVar2 = 0;
LAB_006c2e3c:
  fn_006c2a94(param_1,uVar2);
  return;
}



uint fn_006c2870(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = fn_006aba74(param_2);
  if (iVar1 != 0) {
    iVar1 = fn_006ab0e0(param_2);
    iVar5 = fn_00242b0c((int)*(short *)(iVar1 + 0x1c));
  }
  uVar4 = 0;
  do {
    if ((uVar4 < 0x40) && (iVar1 = *(int *)(param_1 + uVar4 * 4 + 4), iVar1 != 0)) {
      if (*(char *)(param_2 + 0xdc) == '\0') {
        iVar2 = fn_006aba74(param_2);
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = fn_00259878();
        }
        iVar2 = fn_006b6074(iVar1,uVar3);
        if ((iVar2 != 0) ||
           ((*(char *)(iVar1 + 0xd) != '\0' &&
            ((*(char *)(param_2 + 0x401) == '\0' ||
             ((iVar2 = fn_006aba74(param_2), iVar2 != 0 && (iVar5 == 1)))))))) goto LAB_006c2954;
      }
      iVar1 = fn_0065fd34(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(param_2 + 0x164),0);
      if (iVar1 != 0) {
        return uVar4;
      }
    }
LAB_006c2954:
    uVar4 = uVar4 + 1;
    if (0x3f < (int)uVar4) {
      return 0xffffffff;
    }
  } while( true );
}



void fn_006c1ee0(int param_1)

{
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
  fn_006bd3f8();
  return;
}



void fn_006c14b4(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006c14c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))();
  return;
}



void fn_006c143c(int param_1,uint param_2)

{
  if ((param_2 < 0x15) && (*(int *)(*(int *)(param_1 + 4) + param_2 * 4) != 0)) {
    fn_0012a26c();
    return;
  }
  return;
}



bool fn_006c0e58(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006c0d5c();
  return iVar1 != *(int *)(param_1 + 0x10);
}



void fn_006bf32c(int *param_1)

{
  if (*(int *)(*param_1 + 0xe0) == 0) {
    return;
  }
  fn_00203d1c((int)*(short *)(*param_1 + 0xe4));
  return;
}



void fn_006bf30c(int *param_1)

{
  if (*(int *)(*param_1 + 0xe0) == 0) {
    return;
  }
  fn_00203fa0((int)*(short *)(*param_1 + 0xe4));
  return;
}



void fn_006bf24c(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [152];
  
  uVar1 = fn_00661430((int)*(short *)(*param_1 + 0x1c),param_2,*(undefined1 *)(*param_1 + 0x3c));
  uVar2 = fn_006bf5ec(param_1,auStack_a8,0x4c,1,1,1,1,1);
  fn_001f89d8(param_2 & 0xff,uVar1,auStack_a8,uVar2);
  return;
}



void fn_006bf220(int *param_1)

{
  if (*(int *)(*param_1 + 0xe0) == 0) {
    return;
  }
  fn_00203f80((int)*(short *)(*param_1 + 0xe4));
  return;
}



void fn_006bf200(int *param_1)

{
  if (*(int *)(*param_1 + 0xe0) == 0) {
    return;
  }
  fn_00203f60((int)*(short *)(*param_1 + 0xe4));
  return;
}



void fn_006bf1e0(int *param_1)

{
  if (*(int *)(*param_1 + 0xe0) == 0) {
    return;
  }
  fn_00203f40((int)*(short *)(*param_1 + 0xe4));
  return;
}



void fn_006bf1b4(int *param_1)

{
  if (*(int *)(*param_1 + 0xe0) == 0) {
    return;
  }
  fn_00203ed8((int)*(short *)(*param_1 + 0xe4));
  return;
}



undefined4 fn_006bd864(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 2;
  if (*(int *)(param_1 + 8) == 0) {
    if (iVar2 != 0) {
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x24) + uVar4 * 4);
        if ((piVar1 != (int *)0x0) &&
           (iVar2 = (**(code **)(*piVar1 + 0xc4))(piVar1,param_2), iVar2 != 0)) {
          return 1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 2));
    }
    return 0;
  }
  if (iVar2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x24) + uVar4 * 4);
      if ((piVar1 != (int *)0x0) &&
         (iVar2 = (**(code **)(*piVar1 + 0xc4))(piVar1,param_2), iVar2 != 0)) goto LAB_006bd8f8;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 2));
  }
  iVar2 = fn_006b23e4(*(undefined4 *)(param_1 + 8),param_2,0);
  uVar3 = 0;
  if (iVar2 != 0) {
LAB_006bd8f8:
    uVar3 = 1;
  }
  return uVar3;
}



void fn_006bb334(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [20];
  
  iVar1 = *(int *)(param_1 + 0xe80);
  fn_001028d4(auStack_20,(char *)&DAT_006bb328,param_2);
  iVar2 = fn_005f6e60(*(undefined4 *)(iVar1 + 4),auStack_20);
  if (iVar2 != 0) {
    fn_00128eac(*(undefined4 *)(iVar1 + 4),auStack_20,0);
  }
  return;
}


