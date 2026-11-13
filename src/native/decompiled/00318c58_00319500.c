#include "00318c58_00319500.h"



undefined4 fn_00319500(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 1;
  case 1:
    return 0;
  case 2:
    return 3;
  case 3:
    return 2;
  case 4:
    return 4;
  case 5:
    return 6;
  case 6:
    return 7;
  case 7:
    return 9;
  case 8:
    return 5;
  default:
    return 0xffffffff;
  }
}



int fn_003194d8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return param_2;
  }
  iVar1 = fn_00163868((param_2 - param_1) + 1);
  return iVar1 + param_1;
}



void fn_0031943c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  iVar2 = fn_00163868((int)*(short *)(param_2 + 4) + (int)*(short *)(param_2 + 10) +
                       (int)*(short *)(param_2 + 0x10) + (int)*(short *)(param_2 + 0x16) +
                       (int)*(short *)(param_2 + 0x1c));
  iVar3 = 0;
  do {
    psVar4 = (short *)(param_2 + iVar3 * 6);
    if (iVar2 < psVar4[2]) {
      *(short *)(param_1 + 2) = *psVar4;
      sVar1 = psVar4[1];
      if (*psVar4 == 1000) {
        sVar1 = fn_00163868((int)sVar1 / 2 + 1);
        sVar1 = psVar4[1] - sVar1;
      }
      *(short *)(param_1 + 4) = sVar1;
      return;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 - psVar4[2];
  } while (iVar3 < 5);
  return;
}



void fn_003193d8(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00303e58(param_1,0x12);
  *puVar1 = &PTR_FUN_00822c60;
  puVar1[0x69] = 0;
  puVar1[0x6a] = 0x7d34;
  *(undefined1 *)(puVar1 + 0x6b) = 0;
  puVar1[0x67] = 0x44bb8000;
  puVar1[0x68] = 0x44fa0000;
  return;
}



undefined4 fn_00319320(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 0xdc) == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x134))(param_1);
    if ((iVar2 == 0) ||
       ((iVar2 = fn_006aba74(param_2), iVar2 != 0 && (iVar2 = fn_00259878(param_2), 2 < iVar2))))
    {
      *(undefined1 *)(param_1 + 0x6b) = 0;
      return 0;
    }
    if (((char)param_1[0x6b] == '\0') || (*(float *)(param_2 + 0x48) < 0.0)) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    fn_001e49b0(param_2);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_003192c4(int param_1)

{
  float local_18;
  float fStack_14;
  float local_10;
  
  fn_001db0c0();
  local_18 = *(float *)(param_1 + 0x38) * 0.02;
  fStack_14 = *(float *)(param_1 + 0x3c) * 0.0125;
  local_10 = local_18;
  fn_0023dca4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0xe8),&local_18);
  return;
}



void fn_0031922c(int *param_1,undefined4 param_2)

{
  float local_20;
  float fStack_1c;
  float local_18;
  
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),param_1[0x6a]);
  fn_001d9f6c(param_1,param_1[0x6a]);
  local_20 = (float)param_1[0xe] * 0.02;
  fStack_1c = (float)param_1[0xf] * 0.0125;
  local_18 = local_20;
  fn_0023dca4(*(undefined4 *)(DAT_008977e0 + 0x2c),param_1[0x3a],&local_20);
  (**(code **)(*param_1 + 0x58))(param_1,1);
  fn_002113c8(param_1,param_2);
  return;
}



void fn_003191f8(int param_1)

{
  fn_001da39c();
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1a8));
  fn_001d9f9c(param_1);
  return;
}



undefined4 fn_00318ffc(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 0xdc) == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x134))(param_1);
    if ((iVar2 == 0) ||
       ((iVar2 = fn_006aba74(param_2), iVar2 != 0 && (iVar2 = fn_00259878(param_2), 2 < iVar2))))
    {
      *(undefined1 *)(param_1 + 0x6b) = 0;
      return 0;
    }
    iVar2 = fn_006aa6e0(param_2);
    if (iVar2 == 0) {
      if (((char)param_1[0x6b] == '\0') && (0.0 < *(float *)(param_2 + 0x48))) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if ((float)param_1[0xf] < 0.0) {
                    /* WARNING: Subroutine does not return */
        fn_00146590();
      }
      fn_0023f07c(param_2);
    }
    else {
      if (((char)param_1[0x6b] == '\0') || (*(float *)(param_2 + 0x48) < 0.0)) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      fn_0023f060(param_2);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_00318fa4(int *param_1,undefined4 param_2)

{
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),param_1[0x6a]);
  fn_001d9f6c(param_1,param_1[0x6a]);
  (**(code **)(*param_1 + 0x58))(param_1,1);
  fn_002113c8(param_1,param_2);
  return;
}



void fn_00318f74(int param_1)

{
  fn_001da39c();
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1a8));
  fn_001d9f9c(param_1);
  return;
}



void fn_00318eec(undefined4 *param_1)

{
  *param_1 = &DAT_00822b10;
  if (param_1[5] != -1) {
    fn_00159f34(param_1[1]);
    param_1[5] = 0xffffffff;
  }
  if (param_1[1] != 0) {
    fn_0016a43c(param_1[1],param_1[3]);
    param_1[3] = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    fn_001482f4(param_1[1],param_1[2]);
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_00318dec(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  *param_1 = &DAT_00822b10;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0xffffffff;
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = (int *)param_1[1];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[1] = piVar2;
  }
  fn_0011050c(param_1[1],*(undefined4 *)(DAT_008977e0 + 0x10),*(undefined4 *)(DAT_008977e0 + 0x14))
  ;
  uVar3 = fn_001481c8(param_1[1],DAT_00891288,&DAT_00318d28,1,1);
  param_1[2] = uVar3;
  uVar3 = fn_001480d0(param_1[1],uVar3,DAT_0089128c,DAT_00891290,0,1,4);
  param_1[3] = uVar3;
  uVar3 = fn_001853ec(param_1[1],DAT_00891294,uVar3);
  param_1[5] = uVar3;
  return param_1;
}



void fn_00318d30(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14));
  (**(code **)(*piVar1 + 0x50))(piVar1,0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}



void fn_00318c58(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 4) = piVar2;
  }
  fn_0011050c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(DAT_008977e0 + 0x10),
               *(undefined4 *)(DAT_008977e0 + 0x14));
  uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 4),DAT_00891288,&DAT_00318d28,1,1);
  *(undefined4 *)(param_1 + 8) = uVar3;
  uVar3 = fn_001480d0(*(undefined4 *)(param_1 + 4),uVar3,DAT_0089128c,DAT_00891290,0,1,4);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  uVar3 = fn_001853ec(*(undefined4 *)(param_1 + 4),DAT_00891294,uVar3);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return;
}


