#include "0027042c_00271508.h"



void fn_00271448(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x4c) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  }
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),(char *)&DAT_002714f4,1)
  ;
  *(undefined1 *)(iVar1 + 0x45) = 0;
  uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921c8,
                       *(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined1 *)(param_1 + 8) = 0x10;
  return;
}



void fn_00271358(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
  }
  if (param_3 == 0) {
    fn_00271e64(param_1,(char *)&DAT_00271408,1);
    fn_00271e64(param_1,(char *)&DAT_00271418,0);
    uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_00892208
                         ,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  else {
    fn_00271e64(param_1,(char *)&DAT_00271408,0);
    fn_00271e64(param_1,(char *)&DAT_00271418,1);
    uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                         (char *)&DAT_00271428,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  *(char *)(param_1 + 0x108) = (char)param_3;
  *(undefined1 *)(param_1 + 8) = 0x12;
  return;
}



void fn_00271248(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x4c) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  }
  uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921f8,
                       *(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  fn_002700fc(param_1);
  fn_00271e64(param_1,(char *)&DAT_0027506c,param_2);
  fn_00271e64(param_1,(char *)&DAT_00271344,0);
  fn_00274dcc(param_1,0);
  if (param_2 == 0) {
    iVar2 = fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(iVar2 + 0x10) = 0x41f00000;
  }
  fn_00271e64(param_1,(char *)&DAT_00273bb0,0);
  fn_00271e64(param_1,(char *)&DAT_002757ec,0);
  if (*(int *)(param_1 + 0x4c) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 8) = 0xe;
  return;
}



void fn_00271070(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
      *(byte *)(*(int *)(param_1 + 0x3c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x3c) + 0x44) & 0xfe
      ;
      *(undefined4 *)(param_1 + 0x44) = 0;
      return;
    }
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x2c))
                      (*(int **)(param_1 + 0x40),(&PTR_DAT_00892174)[param_2],1);
    *(int *)(param_1 + 0x44) = iVar1;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(param_1 + 0x3c) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x3c) + 0x44) & 0xfe | 1;
  }
  return;
}



undefined4 fn_00270fc0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (((*(uint *)(param_2 + 0x138) & 0x100) != 0) ||
     ((iVar2 = fn_006a9948(param_2), iVar2 == 0 && (*(float *)(param_2 + 0xf8) == 0.0)))) {
    return 3;
  }
  cVar1 = *(char *)(param_2 + 0xdc);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      if (((*(char *)(param_2 + 0x17c) == ' ') && (-1 < *(int *)(param_2 + 0x188))) &&
         (iVar2 = fn_00154ac8(), iVar2 == 0)) {
        return 3;
      }
      return 2;
    }
    if (cVar1 != '\x03') {
      return 2;
    }
    if (*(char *)(param_2 + 0x18b) == '\0') {
      return 1;
    }
  }
  return 0;
}



void fn_00270f38(int param_1)

{
  fn_00271508();
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x4c) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  }
  fn_00272108(param_1);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00270a58(int param_1)

{
  if (*(int *)(param_1 + 0x34) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x30) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



void fn_00270814(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(byte *)(param_1 + 9) != param_2) {
    *(char *)(param_1 + 9) = (char)param_2;
    fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c));
    if (param_2 == 1) {
      (**(code **)(**(int **)(param_1 + 4) + 0x68))();
    }
    uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  if (param_2 == 1) {
    fn_00271e64(param_1,(char *)&DAT_00270934,0);
    uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x68))();
    fn_00271e64(param_1,(char *)&DAT_00270944,uVar2 ^ 1);
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x68))();
    fn_00271e64(param_1,(char *)&DAT_00270950,uVar1);
    return;
  }
  fn_00271e64(param_1,(char *)&DAT_00270934,1);
  fn_00271e64(param_1,(char *)&DAT_00270944,0);
  fn_00271e64(param_1,(char *)&DAT_00270950,0);
  return;
}



void fn_002707b0(int *param_1,int param_2)

{
  *(byte *)(*param_1 + 0x44) = param_2 == 0 | *(byte *)(*param_1 + 0x44) & 0xfe;
  *(byte *)(param_1[1] + 0x44) = param_2 == 1 | *(byte *)(param_1[1] + 0x44) & 0xfe;
  *(byte *)(param_1[2] + 0x44) = param_2 == 2 | *(byte *)(param_1[2] + 0x44) & 0xfe;
  return;
}



void fn_0027042c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  
  fn_00271508();
  fn_00270184(param_1);
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  fn_00272108(param_1);
  fn_002726ec(param_1);
  uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921ec,
                       *(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  iVar2 = fn_001088e0(*(undefined4 *)(param_1 + 0xc),uVar1);
  uVar1 = fn_00176970();
  fVar3 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(iVar2 + 0x10) = fVar3 - 1.0;
  fn_0027600c(param_1,1);
  fn_00274e4c(param_1,1);
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))(*(int **)(iVar2 + 0x10),(char *)&DAT_00270600,1)
  ;
  *(undefined1 *)(iVar2 + 0x45) = 0;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))
                    (*(int **)(iVar2 + 0x10),(char *)&DAT_00270610,1);
  *(undefined1 *)(iVar2 + 0x45) = 0;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))
                    (*(int **)(iVar2 + 0x10),(char *)&DAT_00270624,1);
  *(undefined1 *)(iVar2 + 0x45) = 0;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))(*(int **)(iVar2 + 0x10),(char *)&DAT_00270638,1)
  ;
  *(undefined1 *)(iVar2 + 0x45) = 0;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))
                    (*(int **)(iVar2 + 0x10),(char *)&DAT_00270648,1);
  *(undefined1 *)(iVar2 + 0x45) = 0;
  fn_00271e64(param_1,(char *)&DAT_0027065c,1);
  *(undefined1 *)(param_1 + 8) = 0xb;
  return;
}



void fn_00271508(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x28);
  piVar1 = *(int **)(param_1 + 0x24);
  while (piVar1 != piVar5) {
    if (*(int *)(*piVar1 + 0xc) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    }
    fn_0016a43c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*piVar1 + 8));
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 4))();
    }
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar4 = *(uint *)(param_1 + 0x28);
  if (uVar2 != uVar4) {
    uVar3 = uVar2;
    if (uVar4 <= uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar4);
    }
    *(uint *)(param_1 + 0x28) = uVar4 - (uVar4 - uVar2 & 0xfffffffc);
  }
  return;
}


