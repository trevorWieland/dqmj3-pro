#include "007456a4_007464bc.h"



void fn_007464bc(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x10) = 1;
  return;
}



undefined4 * fn_00746448(undefined4 *param_1)

{
  *param_1 = &DAT_008221d8;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



undefined4 * fn_00746390(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = &DAT_008221d8;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0025fc8c();
  }
  piVar3 = (int *)param_1[1];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    param_1[1] = piVar2;
  }
  iVar1 = fn_00145b00(0x930,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_002a1be0(iVar1,param_1[1]);
  }
  piVar3 = (int *)param_1[2];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    param_1[2] = piVar2;
  }
  return param_1;
}



char fn_0074637c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    return '\0';
  }
  bVar4 = *(int *)(DAT_00897850 + 0x34) != 0;
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(iVar3 + 0x10);
  }
  if (bVar4 && cVar1 != '\0') {
    *(undefined1 *)(iVar3 + 0x10) = 0;
    *(undefined1 *)(iVar3 + 0x11) = 0;
    iVar2 = fn_001296d0(DAT_00897850);
    if (((iVar2 != 0) || (*(char *)(DAT_00897850 + 0x4e) != '\0')) ||
       (iVar2 = fn_0066e13c(DAT_00897850), iVar2 == 0)) {
      return '\x01';
    }
    if (*(char *)(DAT_00897850 + 0x45) != '\0') {
      *(undefined1 *)(iVar3 + 0x11) = 1;
    }
    cVar1 = '\0';
  }
  return cVar1;
}



void fn_00746230(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  short local_18 [2];
  short local_14 [2];
  short local_10 [2];
  short local_c [2];
  
  if (param_3 < *param_1) {
    return;
  }
  psVar2 = local_18;
  local_10[0] = *param_1 + *param_2;
  *param_1 = local_10[0];
  local_18[0] = 0;
  local_14[0] = (short)param_3;
  if (param_3 < 0) {
code_r0x007462c4:
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  if (-1 < local_10[0]) {
    psVar2 = local_10;
  }
  if (param_3 < *psVar2) {
    psVar2 = local_14;
  }
  sVar1 = *psVar2;
  if (sVar1 < *param_1) {
    local_c[0] = *param_2 - (*param_1 - sVar1);
    *param_2 = local_c[0];
    local_14[0] = 0;
    local_10[0] = *param_2;
    if (local_10[0] < 0) goto code_r0x007462c4;
    if (local_c[0] < 0) {
      psVar2 = local_14;
    }
    else {
      psVar2 = local_c;
    }
    if (local_10[0] < *psVar2) {
      psVar2 = local_10;
    }
    *param_2 = *psVar2;
    *param_1 = sVar1;
  }
  return;
}



undefined4 * fn_007461f4(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_3 != -1) {
    for (puVar1 = *(undefined4 **)(param_2 + 4); puVar1 != (undefined4 *)(param_2 + 4);
        puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[-4] == param_3) {
        return puVar1 + -4;
      }
    }
  }
  return (undefined4 *)0x0;
}



void fn_00746120(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((iVar1 < *(int *)(param_1 + 0x20)) ||
     (*(undefined1 *)(param_1 + 0x34) = 1, *(char *)(param_1 + 0x24) == '\0')) {
    fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar2 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = fVar3 / fVar2;
    *(float *)(param_1 + 0x28) =
         *(float *)(param_1 + 4) +
         (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 4)) * fVar3 * fVar3;
    *(float *)(param_1 + 0x2c) =
         *(float *)(param_1 + 8) +
         (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 8)) * fVar3 * fVar3;
    *(float *)(param_1 + 0x30) =
         *(float *)(param_1 + 0xc) +
         (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0xc)) * fVar3 * fVar3;
    *(int *)(param_1 + 0x1c) = param_2 + iVar1;
  }
  return;
}



bool fn_0074602c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,code *param_4,
                 undefined4 param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_30;
  int local_2c;
  
  fn_00301f50(param_1,0x104);
  local_30 = 0;
  local_2c = 0;
  local_30 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_2);
  local_2c = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
  uVar2 = (*param_4)(&local_30);
  fn_005fdf34(param_1,param_2,param_3,&local_30,uVar2,param_5);
  param_1[0x100] = 0;
  if ((*(byte *)(local_30 + 0x2e) < 10) || (*(byte *)(local_2c + 0x2e) < 10)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  param_1[0x101] = uVar1;
  iVar3 = fn_001a46f4(uVar2);
  if (iVar3 != 0) {
    fn_005fccf4(param_1 + 0x10,&local_30,*param_1,0);
  }
  return iVar3 != 0;
}



int fn_00745f78(undefined4 param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  uint *puVar2;
  uint local_20;
  uint local_1c;
  
  do {
    if (param_2 == (int *)param_3) {
      return 0;
    }
    local_20 = *(uint *)(param_2[-10] + -4);
    if (local_20 == *(uint *)(*param_4 + -4)) {
      puVar2 = &local_20;
      if (*(uint *)(*param_4 + -4) < local_20) {
        puVar2 = &local_1c;
      }
      local_1c = *(uint *)(*param_4 + -4);
      iVar1 = fn_001010c8(param_2[-10],*param_4,*puVar2);
      if ((iVar1 == 0) && (*(int *)(param_2[-10] + -4) == *(int *)(*param_4 + -4))) {
        return (int)(param_2 + -0xb);
      }
    }
    param_2 = (int *)*param_2;
  } while( true );
}



void fn_00745f14(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *param_1;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  if (DAT_008bf53a != '\0') {
    fVar3 = -fVar3;
  }
  if (DAT_008bf538 != '\0') {
    fVar1 = -fVar1;
  }
  if (DAT_008bf539 != '\0') {
    fVar2 = -fVar2;
  }
  param_1[DAT_008bf53d] = fVar3;
  param_1[DAT_008bf53b] = fVar1;
  param_1[DAT_008bf53c] = fVar2;
  return;
}



undefined4 fn_007456a4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar3 + 0x34) == 0) {
    iVar1 = (**(code **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x28),1 << (*(uint *)(iVar3 + 0x24) & 0xff),1);
    *(int *)(iVar3 + 0x34) = iVar1;
    if (iVar1 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar3 + 0x28) == 0) {
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(int *)(iVar3 + 0x28) = 1 << (*(uint *)(iVar3 + 0x24) & 0xff);
    *(undefined4 *)(iVar3 + 0x2c) = 0;
  }
  uVar2 = *(uint *)(iVar3 + 0x28);
  uVar4 = param_2 - *(int *)(param_1 + 0x10);
  if (uVar4 < uVar2) {
    uVar2 = uVar2 - *(int *)(iVar3 + 0x30);
    if (uVar4 < uVar2) {
      uVar2 = uVar4;
    }
    fn_00301a9c(*(int *)(iVar3 + 0x30) + *(int *)(iVar3 + 0x34),*(int *)(param_1 + 0xc) - uVar4,
                 uVar2);
    iVar1 = uVar4 - uVar2;
    if (iVar1 == 0) {
      uVar4 = *(int *)(iVar3 + 0x30) + uVar2;
      *(uint *)(iVar3 + 0x30) = uVar4;
      if (uVar4 == *(uint *)(iVar3 + 0x28)) {
        *(undefined4 *)(iVar3 + 0x30) = 0;
      }
      if (*(uint *)(iVar3 + 0x28) <= *(uint *)(iVar3 + 0x2c)) {
        return 0;
      }
      iVar1 = *(uint *)(iVar3 + 0x2c) + uVar2;
    }
    else {
      fn_00301a9c(*(undefined4 *)(iVar3 + 0x34),*(int *)(param_1 + 0xc) - iVar1,iVar1);
      *(int *)(iVar3 + 0x30) = iVar1;
      iVar1 = *(int *)(iVar3 + 0x28);
    }
    *(int *)(iVar3 + 0x2c) = iVar1;
  }
  else {
    fn_00301a9c(*(undefined4 *)(iVar3 + 0x34),*(int *)(param_1 + 0xc) - uVar2);
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar3 + 0x28);
  }
  return 0;
}


