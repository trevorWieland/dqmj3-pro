#include "00397618_00397e3c.h"



void fn_00397e3c(int *param_1)

{
  if (((char)param_1[0x37] == '\x01') && (*(char *)(param_1[0x17] + 0x31) == '\x01')) {
    (**(code **)(*param_1 + 0x110))(param_1);
    *(undefined1 *)(param_1 + 0x37) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_00397db0(int param_1)

{
  fn_005d27f8(param_1 + 0xc0);
  if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x18))();
    if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb0) + 4))();
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x18))();
    if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb4) + 4))();
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
  }
  fn_002c4100(param_1);
  return;
}



undefined4 fn_00397a98(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  fn_002c29a0();
  uVar1 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  iVar3 = param_1[0x12];
  uVar2 = (**(code **)(*param_1 + 8))(param_1);
  fn_005d24e4(param_1 + 0x30,uVar2,iVar3,uVar1,param_2 + 0x34);
  if (*(char *)(param_2 + 0x4c) != '\0') {
    fn_00397b48(param_1,uVar1,param_2);
  }
  fn_00397cb8(param_1,uVar1);
  return 1;
}



void fn_00397cb8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_2 + 0x10) + 0x2c))
                            (*(int **)(param_2 + 0x10),(char *)&DAT_00397d90,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_00397d18;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_00397d18:
  *(int **)(param_1 + 0xb8) = piVar1;
  piVar1 = (int *)(**(code **)(**(int **)(param_2 + 0x10) + 0x2c))
                            (*(int **)(param_2 + 0x10),(char *)&DAT_00397da0,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_00397d6c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_00397d6c:
  *(int **)(param_1 + 0xbc) = piVar1;
  *(byte *)(piVar1 + 0x11) = *(byte *)(piVar1 + 0x11) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) & 0xfe;
  return;
}



void fn_00397b48(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(char *)(param_3 + 0x34) == '\0') {
    iVar1 = fn_00172c98(param_2,(char *)&DAT_00397ca8);
    if (iVar1 != 0) {
      iVar2 = fn_00145b00(0x28,&DAT_00812c8c);
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        piVar3 = (int *)fn_003473fc(iVar2,*(undefined4 *)(param_1 + 4),iVar1,0,
                                     *(undefined4 *)(param_1 + 0x48),0,0);
      }
      piVar4 = *(int **)(param_1 + 0xb0);
      if (piVar4 != piVar3) {
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        *(int **)(param_1 + 0xb0) = piVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x00397c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x10))();
      return;
    }
  }
  else if ((*(char *)(param_3 + 0x34) == '\x01') &&
          (iVar1 = fn_00172c98(param_2,(char *)&DAT_00397c94), iVar1 != 0)) {
    iVar2 = fn_00145b00(0x28,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)fn_003473fc(iVar2,*(undefined4 *)(param_1 + 4),iVar1,0,
                                   *(undefined4 *)(param_1 + 0x48),0,0);
    }
    piVar4 = *(int **)(param_1 + 0xb4);
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      *(int **)(param_1 + 0xb4) = piVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x00397bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x10))();
    return;
  }
  return;
}



void fn_00397a78(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0082bdd0;
  iVar1 = fn_0059e2ac(param_1 + 0x2c);
  fn_002c471c(iVar1 + -0xb0);
  return;
}



int fn_00397a0c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0082bdd0;
  iVar2 = fn_0059e280(puVar1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 1;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined1 *)(iVar2 + 0x30) = 0;
  *(undefined1 *)(iVar2 + 0x31) = 0;
  return iVar2 + -0xb0;
}



void fn_003979f0(int param_1)

{
  fn_0059e110(param_1 + 0xb0);
  fn_002c4304(param_1);
  return;
}



void fn_003979ec(int param_1)

{
  fn_0059e110(param_1 + 0xb0);
  fn_002c4304(param_1);
  return;
}



void fn_003979d0(int param_1)

{
  fn_0059e16c(param_1 + 0xb0);
  fn_002c4100(param_1);
  return;
}



void fn_00397838(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_30 [32];
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    fn_002c3808(param_1,param_2);
    iVar3 = DAT_00893b60;
    iVar1 = 0;
    while( true ) {
      if (iVar3 == 0) {
        fn_001028d4(auStack_30,(char *)&DAT_00397824,iVar1);
      }
      else {
        fn_001028d4(auStack_30,iVar3,iVar1);
      }
      iVar2 = fn_00172c98(param_2,auStack_30);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + 1;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    }
  }
  else {
    fn_002c3808(param_1,param_2,param_3,DAT_00893b60);
    iVar3 = 0;
    while( true ) {
      fn_001028d4(auStack_30,(char *)&DAT_00397824,iVar3);
      iVar1 = fn_00172c98(param_2,auStack_30);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
  }
  return;
}



void fn_003977ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [32];
  
  iVar2 = 0;
  while( true ) {
    if (param_3 == 0) {
      fn_001028d4(auStack_30,(char *)&DAT_00397824,iVar2);
    }
    else {
      fn_001028d4(auStack_30,param_3,iVar2);
    }
    iVar1 = fn_00172c98(param_2,auStack_30);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  return;
}



undefined4 fn_00397618(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 0x34) + -1;
  *(int *)(param_2 + 0x34) = iVar1;
  iVar5 = *(int *)(&DAT_007c6b14 + iVar1 * 4);
  if (*(int *)(param_2 + 8) <= *(int *)(&DAT_007c6b14 + iVar1 * 4)) {
    iVar5 = *(int *)(param_2 + 8);
  }
  *(int *)(param_2 + 8) = iVar5;
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined1 *)((int)param_1 + 0xe1) = *(undefined1 *)(param_2 + 0x39);
  uVar2 = fn_002c29a0(param_1,param_2);
  uVar3 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  iVar5 = param_1[0x12];
  uVar4 = (**(code **)(*param_1 + 8))(param_1);
  fn_0059d948(param_1 + 0x2c,uVar4,iVar5,uVar3,*(undefined4 *)(param_2 + 0x34),param_2 + 0x3c,4);
  iVar5 = fn_001828f0(uVar3,DAT_00893b5c);
  param_1[0x33] = iVar5;
  param_1[0x36] = *(int *)(param_2 + 0x34);
  fn_0059e040(param_1 + 0x2c,iVar5);
  fn_0039791c(param_1);
  (**(code **)(*param_1 + 0x130))(param_1,*(undefined4 *)(param_2 + 0xc));
  if (*(char *)((int)param_1 + 0xe1) != '\0') {
    iVar5 = fn_001828f0(uVar3,(char *)&DAT_00397754);
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
    iVar5 = fn_001827b0(uVar3,(char *)&DAT_00397760);
    param_1[0x34] = iVar5;
    iVar5 = fn_001827b0(uVar3,(char *)&DAT_00397768);
    param_1[0x35] = iVar5;
  }
  return uVar2;
}



void fn_0039791c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  iVar2 = *(int *)(param_1 + 0xdc);
  if (iVar1 != iVar2) {
    iVar3 = 0;
    if (iVar2 < iVar1) {
      if (0 < iVar1 - iVar2) {
        iVar3 = (1 - (iVar1 - iVar2)) * 0x12 + -0x12;
      }
    }
    else if (0 < iVar2 - iVar1) {
      iVar3 = ((iVar2 - iVar1) + -1) * 0x12 + 0x12;
    }
    VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    fn_00307c38(*(undefined4 *)(param_1 + 0x90));
    iVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0x1c))();
    fVar4 = (float)VectorSignedToFloat(iVar3 / 2,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) - fVar4;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xd8);
  }
  return;
}


