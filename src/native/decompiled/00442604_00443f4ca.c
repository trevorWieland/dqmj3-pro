#include "00442604_00443f4ca.h"



undefined4 * fn_0044336c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  
  iVar1 = fn_00145b00(0xd0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_003f59d0(iVar1,param_1);
  *puVar2 = &DAT_0083de7c;
  puVar2[0x31] = 0;
  puVar2[0x32] = 0;
  *(undefined1 *)(puVar2 + 0x33) = 0;
  *(undefined1 *)((int)puVar2 + 0xcd) = 1;
  *(undefined1 *)((int)puVar2 + 0xce) = 1;
  puVar3 = (undefined4 *)fn_001f74d8(puVar2,0xe9);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00892b20) goto LAB_00443c10;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_00443c10:
  puVar2[0x31] = puVar3;
  fn_00689efc(puVar2,0xe9,0,0,unaff_r4);
  return puVar2;
}



undefined4 fn_00442de4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = fn_003f5348();
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 200) = 0xe1;
    return 0;
  }
  uVar1 = 0;
  if (*(char *)(param_1 + 0xcc) != '\0') {
    if (*(char *)(param_1 + 0xcd) == '\0') {
      uVar1 = 6;
    }
    else {
      uVar1 = 5;
    }
  }
  iVar2 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar2 + 0x7f) = uVar1;
  fn_0031ef00(iVar2,0,0);
  iVar2 = *(int *)(param_1 + 0x74);
  uVar1 = 0;
  if (*(char *)(param_1 + 0xce) != '\0') {
    uVar1 = 2;
  }
  *(undefined1 *)(iVar2 + 0x81) = uVar1;
  fn_0031f3f4(iVar2,0);
  *(bool *)(*(int *)(param_1 + 0xc4) + 0x54c) = *(char *)(param_1 + 0xcd) == '\0';
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



void fn_00442d30(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00154ac8(0x2e);
  if (iVar1 == 0) {
    pcVar2 = (char *)&DAT_00442dc0;
  }
  else {
    pcVar2 = (char *)&DAT_00442d9c;
  }
  uVar3 = fn_0022f584(pcVar2,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar3,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



undefined4 * fn_0044293c(undefined4 param_1,undefined4 param_2,short *param_3)

{
  undefined4 *puVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,8);
  *puVar1 = &DAT_0083de04;
  puVar1[0x16] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0x3f800000;
  if (param_3 == (short *)0x0) {
    puVar1[0x17] = DAT_008913d4;
  }
  else {
    uVar2 = VectorSignedToFloat((int)*param_3,(byte)(in_fpscr >> 0x16) & 3);
    fn_0017fe34();
    puVar1[0x17] = uVar2;
  }
  return puVar1;
}



void fn_00442878(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_r4;
  float fVar4;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x60))();
  if (((iVar2 != 0) && (iVar2 = fn_006a9938(*(undefined4 *)(param_1 + 0x14)), iVar2 == 0)) &&
     (iVar2 = fn_006a99b0(*(undefined4 *)(param_1 + 0x14)), iVar2 == 0)) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),1);
  }
  if (*(int *)(param_1 + 0xc) == 4) {
    iVar2 = fn_001c7160(*(undefined4 *)(param_1 + 4));
    if (iVar2 == 0) {
      return;
    }
    iVar2 = 5;
  }
  else {
    if ((*(int *)(param_1 + 0xc) != 5) ||
       (uVar3 = *(int *)(param_1 + 0x18) + 1, *(uint *)(param_1 + 0x18) = uVar3, uVar3 < 0x5a)) {
      return;
    }
    iVar2 = 4;
  }
  if (iVar2 == 4) {
    fVar4 = *(float *)(param_1 + 100);
    *(float *)(param_1 + 100) = -fVar4;
    fVar4 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x5c) * -fVar4;
    *(float *)(param_1 + 0x60) = fVar4;
    fn_005df8f8();
    *(float *)(param_1 + 0x60) = fVar4;
    (**(code **)(**(int **)(param_1 + 4) + 0x44))(*(int **)(param_1 + 4),6,5,0);
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  else {
    if (iVar2 != 5) goto LAB_00442804;
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(**(int **)(param_1 + 4) + 0x44))(*(int **)(param_1 + 4),0,5,0,unaff_r4);
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  fn_001da640(uVar1);
LAB_00442804:
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



void fn_00442604(int *param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  piVar2 = (int *)param_1[5];
  fVar3 = *(float *)(iVar1 + 0x20) - (float)piVar2[8];
  fVar4 = *(float *)(iVar1 + 0x28) - (float)piVar2[10];
  if ((int)(fVar3 * fVar3 + fVar4 * fVar4) < 0x451c4001) {
    iVar1 = 4;
  }
  else {
    iVar1 = 5;
  }
  param_1[3] = iVar1;
  param_1[4] = 0;
  if (iVar1 == 4) {
    (**(code **)(*piVar2 + 0x44))(piVar2,0,4);
    fn_0039075c(param_1);
  }
  else if (iVar1 == 5) {
    (**(code **)(*piVar2 + 0x44))(piVar2,1,4,0);
    fn_00390610(param_1);
  }
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*(int *)param_1[5] + 0x1dc))((int *)param_1[5],1,0x11,0);
  if (*(char *)(param_1[1] + 4) == '\0') {
    *(undefined4 *)(param_1[1] + 0xc) = 1;
  }
  fn_002171d4(param_1[5],0,0x3c);
  return;
}


