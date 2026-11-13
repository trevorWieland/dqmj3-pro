#include "00334980_003358ec.h"



void fn_003358ec(int *param_1)

{
  int iVar1;
  float *pfVar2;
  float local_18;
  float local_14;
  float afStack_10 [2];
  
  pfVar2 = &local_18;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  if (iVar1 == 0) {
    local_18 = (float)param_1[5] + (float)param_1[4];
    param_1[5] = (int)local_18;
    local_14 = 1.0;
    afStack_10[0] = 0.0;
    if (local_18 < 0.0) {
      pfVar2 = afStack_10;
    }
    if (1.0 < *pfVar2) {
      pfVar2 = &local_14;
    }
    param_1[5] = (int)*pfVar2;
    fn_001f59d0(*(undefined4 *)(DAT_008977e0 + 0x30),param_1[1]);
    param_1[3] = param_1[3] + -1;
  }
  return;
}



void fn_00335820(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = (**(code **)(*param_1 + 0xc))(param_1);
  if (iVar3 == 0) {
    cVar1 = (char)param_1[1];
    if (cVar1 == '\0') {
      piVar4 = (int *)fn_006f72c8(DAT_008977e0);
      (**(code **)(*piVar4 + 0x54))(piVar4,0);
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    if (cVar1 == '\x01') {
      fn_006f74ac(DAT_008977e0);
      uVar2 = 2;
    }
    else {
      if (cVar1 != '\x02') {
        return;
      }
      fn_006f7674(DAT_008977e0,*(undefined1 *)((int)param_1 + 5));
      uVar2 = 3;
    }
    *(undefined1 *)(param_1 + 1) = uVar2;
  }
  return;
}



void fn_0033568c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_008247a8;
  uVar1 = param_1[0xb];
  uVar2 = uVar1;
  if ((uint)param_1[0xc] < uVar1) {
    do {
      uVar2 = uVar2 + 0xc;
    } while (uVar2 != param_1[0xc]);
  }
  fn_001008c4(uVar1,(int)(param_1[0xd] - uVar1) / 0xc,0);
  uVar1 = param_1[8];
  uVar2 = uVar1;
  if ((uint)param_1[9] <= uVar1) {
    for (; uVar2 != param_1[9]; uVar2 = uVar2 + 0xc) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[10] - uVar1) / 0xc,0);
  fn_002feef8(param_1);
  return;
}



void fn_003355ec(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  if (iVar1 == 0) {
    uVar2 = param_1[7];
    if (uVar2 < (uint)((param_1[9] - param_1[8]) / 0xc)) {
      piVar3 = (int *)(param_1[8] + uVar2 * 0xc);
      iVar1 = piVar3[1];
      iVar4 = piVar3[2];
      param_1[1] = *piVar3;
      param_1[2] = iVar1;
      param_1[3] = iVar4;
    }
    if (uVar2 < (uint)((param_1[0xc] - param_1[0xb]) / 0xc)) {
      piVar3 = (int *)(param_1[0xb] + uVar2 * 0xc);
      iVar1 = piVar3[1];
      iVar4 = piVar3[2];
      param_1[4] = *piVar3;
      param_1[5] = iVar1;
      param_1[6] = iVar4;
    }
    param_1[7] = uVar2 + 1;
  }
  return;
}



void fn_00334d6c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_34;
  undefined4 local_14;
  
  if (*(char *)(*(int *)(param_1 + 0xb8) + 8) == -1) {
    *(undefined1 *)(*(int *)(param_1 + 0xb8) + 8) = 0;
  }
  fn_002c330c(&local_48);
  local_48 = DAT_00898a0c;
  local_44 = DAT_00898a10;
  local_40 = 2;
  local_34 = 2;
  local_3c = (int)*(char *)(*(int *)(param_1 + 0xb8) + 8);
  fn_002c29a0(param_1,&local_48);
  fn_00334fdc(param_1);
  uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),DAT_00898a14,
                       *(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar2 = fn_001088e0(*(undefined4 *)(param_1 + 100),uVar2);
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  fn_006f9528(param_1 + 0xc6,1);
  iVar3 = 0;
  do {
    if (*(char *)(param_1 + iVar3 + 0xc6) == '\0') {
      local_14 = 0xff808080;
      fn_002c37e0(param_1,iVar3,&local_14);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  cVar1 = *(char *)(*(int *)(param_1 + 0xb8) + 0xc);
  *(char *)(param_1 + 0xc4) = cVar1;
  if (cVar1 == '\x03') {
    fn_0025e31c(*(undefined4 *)(param_1 + 0x98),0);
    fn_001caa40(*(undefined4 *)(param_1 + 0x9c),0);
    fn_0031b364(param_1,(int)*(char *)(*(int *)(param_1 + 0xb8) + 8),0);
  }
  fn_00401fb0(*(undefined4 *)(param_1 + 0xb8));
  *(undefined1 *)(*(int *)(param_1 + 0xb8) + 9) = 0xff;
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



/* WARNING: Removing unreachable block (ram,0x003350c0) */

void fn_00334fdc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))
                            (*(int **)(iVar1 + 0x10),(char *)&DAT_003350e0);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_00335050;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_00335050:
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  fn_0018a618(&local_50,0x20,0x1f,L"Ver.1.%d",3);
  fn_00190d50(piVar2,&local_50);
  return;
}



void fn_00334ae8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  fn_00159f34(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0xbc));
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  fn_002c4100(param_1);
  local_10 = 0;
  fn_00163988(DAT_00897808,&local_10,10);
  local_10 = 0;
  fn_00163988(DAT_0089780c,&local_10,10);
  return;
}



void fn_00334ad0(void)

{
  DAT_008928dc = 0;
  DAT_008928e0 = 0;
  return;
}



undefined4 fn_00334a3c(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00334ac4), iVar1 != 0)) {
    DAT_008928dc = 0;
  }
  else {
    DAT_008928dc = param_1 + 4;
  }
  if ((param_3 - 4 & 3) != 0) {
    DAT_008928dc = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008928e0 = 0;
  }
  else {
    DAT_008928e0 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4),4,0);
  }
  return 1;
}



int fn_00334980(int param_1)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  
  if ((int)(DAT_008928e0 + 1) < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = ~DAT_008928e0 & 1;
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(short *)(DAT_008928dc + uVar2 * 4) == param_1) goto LAB_003349f8;
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < (int)uVar1);
    }
  }
  while( true ) {
    uVar2 = uVar1;
    if ((int)(DAT_008928e0 + 1) <= (int)uVar2) {
      return 0;
    }
    psVar3 = (short *)(DAT_008928dc + uVar2 * 4);
    if (*psVar3 == param_1) break;
    if (psVar3[2] == param_1) {
      return (int)*(short *)(DAT_008928dc + uVar2 * 4 + 6);
    }
    uVar1 = uVar2 + 2;
  }
LAB_003349f8:
  return (int)*(short *)(DAT_008928dc + uVar2 * 4 + 2);
}


