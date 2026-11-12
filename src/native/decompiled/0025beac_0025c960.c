#include "0025beac_0025c960.h"



void fn_0025c960(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  
  fVar3 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x2c),
                                     (byte)(in_fpscr >> 0x16) & 3);
  iVar1 = *(int *)(param_1 + 0x74);
  fVar3 = (float)VectorSignedToFloat((int)(fVar3 * (*(float *)(*(int *)(param_1 + 0x78) + 0xbc) +
                                                   *(float *)(*(int *)(param_1 + 0x78) + 0xc0)) +
                                          24.0) + 1U & 0xfffffffe,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
  *(float *)(iVar1 + 0x40) = fVar3;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  iVar1 = 0;
  do {
    iVar2 = *(int *)(*(int *)(param_1 + 0x84) + iVar1 * 4);
    iVar1 = iVar1 + 1;
    *(float *)(iVar2 + 0x20) = -10.0 - fVar3 * 0.5;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  } while (iVar1 < 2);
  return;
}



void fn_0025c8e0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))();
  if (*(char *)(param_1 + 0xa8) != '\0') {
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x14))();
    if (*(int **)(param_1 + 0xa4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xa4) + 4))();
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  fn_0016a43c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
}



void fn_0025c888(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_0081d898;
  iVar1 = param_1[0x1a];
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x1c) + 4))();
    }
    iVar1 = fn_0079ecd4(iVar1 + 0x18);
    fn_002feef8(iVar1 + -0x18);
  }
  fn_0068ad5c(param_1);
  return;
}



undefined4 * fn_0025c7d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 3;
  *puVar1 = &PTR_FUN_0081d898;
  puVar2 = (undefined4 *)fn_00145b00(0x20,&DAT_00812c8c);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[6] = 0;
    *puVar2 = param_2;
    puVar2[7] = 0;
  }
  puVar1[0x1a] = puVar2;
  return puVar1;
}



void fn_0025c758(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (*(int **)(iVar1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0x1c) + 0x18))();
    if (*(int **)(iVar1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x1c) + 4))();
      *(undefined4 *)(iVar1 + 0x1c) = 0;
    }
  }
  if (*(int *)(iVar1 + 0x10) != -1) {
    fn_0016a43c(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
  }
  if (*(int *)(iVar1 + 0xc) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(iVar1 + 4));
  }
  return;
}



undefined4 fn_0025c718(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = 3;
  fn_0020309c(*(undefined4 *)(param_1 + 0x68),param_2,*(undefined4 *)(param_1 + 0x48));
  return 1;
}



void fn_0025c6d4(undefined4 *param_1)

{
  *param_1 = &DAT_0081d874;
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  *param_1 = &DAT_0081d408;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_0025c600(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((*(int **)(param_1 + 0xc) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 8))(), iVar1 != 1)) {
    if ((iVar1 == 0) && (piVar2 = (int *)fn_00145b00(0x10,&DAT_00812c8c), piVar2 != (int *)0x0)) {
      iVar1 = *(int *)(param_1 + 8);
      *piVar2 = (int)&DAT_00851a08;
      piVar2[1] = iVar1;
      piVar2[2] = *(int *)(iVar1 + 4);
      *(undefined1 *)(piVar2 + 3) = 0;
      *(undefined1 *)((int)piVar2 + 0xd) = 1;
      *piVar2 = (int)&DAT_00851a1c;
    }
    else {
      piVar2 = (int *)0x0;
    }
    piVar3 = *(int **)(param_1 + 0xc);
    if (piVar3 != piVar2) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      *(int **)(param_1 + 0xc) = piVar2;
    }
  }
  return 7;
}



void fn_0025c4f4(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  fn_001f7414(*(undefined4 *)(param_1 + 4),0xd4,0);
  fn_001f7414(*(undefined4 *)(param_1 + 4),0xd5,0);
  fn_001f7414(*(undefined4 *)(param_1 + 4),0xd7,0);
  fn_001f7414(*(undefined4 *)(param_1 + 4),0xd8,0);
  fn_001f7414(*(undefined4 *)(param_1 + 4),0xd9,0);
  fn_00353a48(*(undefined4 *)(*(int *)(param_1 + 4) + 0x54));
  fn_001f748c(*(undefined4 *)(param_1 + 4),0,0);
  piVar1 = (int *)fn_00145b00(0x10,&DAT_00812c8c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    *piVar1 = (int)&DAT_00851a08;
    piVar1[1] = iVar3;
    piVar1[2] = *(int *)(iVar3 + 4);
    *(undefined1 *)(piVar1 + 3) = 0;
    *(undefined1 *)((int)piVar1 + 0xd) = 1;
    *piVar1 = (int)&DAT_00851a1c;
  }
  piVar2 = *(int **)(param_1 + 0xc);
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int **)(param_1 + 0xc) = piVar1;
  }
  return;
}



void fn_0025c4a0(undefined4 *param_1)

{
  *param_1 = &DAT_0081d850;
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  *param_1 = &DAT_0081d408;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_0025c414(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((*(int **)(param_1 + 0xc) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 8))(), iVar1 != 4)) {
    piVar2 = (int *)fn_0025bec8(param_1 + 8,iVar1);
    piVar3 = *(int **)(param_1 + 0xc);
    if (piVar3 != piVar2) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      *(int **)(param_1 + 0xc) = piVar2;
    }
  }
  return 7;
}



undefined4 * fn_0025bec8(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 == 0) {
    puVar2 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = *param_1;
      puVar2[1] = iVar3;
      *puVar2 = &DAT_008519a4;
      puVar2[2] = *(undefined4 *)(iVar3 + 4);
      *(undefined1 *)(puVar2 + 3) = 0;
      *(undefined1 *)((int)puVar2 + 0xd) = 1;
      *puVar2 = &DAT_008519f4;
      return puVar2;
    }
  }
  else if (param_2 == 1) {
    puVar2 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = *param_1;
      puVar2[1] = iVar3;
      *puVar2 = &DAT_008519a4;
      puVar2[2] = *(undefined4 *)(iVar3 + 4);
      *(undefined1 *)(puVar2 + 3) = 1;
      *(undefined1 *)((int)puVar2 + 0xd) = 1;
      *puVar2 = &DAT_008519cc;
      *(undefined1 *)((int)puVar2 + 0xe) = 0;
      iVar3 = fn_0028eac0(*(undefined4 *)(puVar2[1] + 4),0x2d);
      if (iVar3 != 0) {
        fn_001f7414(*(undefined4 *)(puVar2[1] + 4),0x2d,0);
      }
      return puVar2;
    }
  }
  else if (param_2 == 2) {
    puVar2 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = *param_1;
      puVar2[1] = iVar3;
      *puVar2 = &DAT_008519a4;
      puVar2[2] = *(undefined4 *)(iVar3 + 4);
      *(undefined1 *)(puVar2 + 3) = 2;
      *(undefined1 *)((int)puVar2 + 0xd) = 1;
      *puVar2 = &DAT_008519e0;
      return puVar2;
    }
  }
  else if (param_2 == 3) {
    puVar1 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      iVar3 = *param_1;
      puVar1[1] = iVar3;
      *puVar1 = &DAT_008519a4;
      puVar1[2] = *(undefined4 *)(iVar3 + 4);
      *(undefined1 *)(puVar1 + 3) = 3;
      *(undefined1 *)((int)puVar1 + 0xd) = 1;
      *puVar1 = &DAT_008519b8;
    }
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}



void fn_0025beac(void)

{
  DAT_00892814 = 0;
  DAT_00892818 = 0;
  return;
}


