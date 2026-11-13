#include "0018c3b4_00193600.h"



int fn_00193600(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 local_20 [4];
  uint local_18;
  
  if (((*(char *)(param_1 + 0xc) != '\0') && (*(char *)(param_1 + 0xd) == -1)) && (param_2 < 2)) {
    uVar1 = fn_00189e28();
    iVar2 = fn_0019e9a0(uVar1,0,param_2);
    if (iVar2 != 0) {
      local_20[0] = 2;
      local_18 = *(uint *)(param_1 + 4) >> 0x10 | *(uint *)(param_1 + 4) << 0x10;
      uVar1 = fn_00189e28();
      iVar2 = fn_00189ff4(uVar1,param_2,local_20);
      if (iVar2 != 0) {
        *(char *)(param_1 + 0xd) = (char)param_2;
      }
      return iVar2;
    }
  }
  return 0;
}



void fn_00193380(void)

{
  bool bVar1;
  int iVar2;
  
  do {
    if (DAT_008bfbbc < 0) {
      iVar2 = DAT_008bfbbc + 1;
    }
    else {
      iVar2 = DAT_008bfbbc + -1;
    }
    bVar1 = (bool)hasExclusiveAccess(0x8bfbbc);
  } while (!bVar1);
  DAT_008bfbbc = iVar2;
  if (iVar2 == -1) {
    fn_00147e54(DAT_008c0334,&DAT_008bfbbc,0,0xffffffff,0,0);
  }
  return;
}



undefined4 fn_00192114(void)

{
  return DAT_008bf604;
}



bool fn_00191f08(void)

{
  return DAT_008bf604 != 0;
}



void fn_00191580(void)

{
  int iVar1;
  
  iVar1 = fn_001735cc();
  *(undefined **)(iVar1 + 0x44) = &DAT_008c3de0;
  *(undefined4 *)(iVar1 + 0x30) = 0x7f7fffff;
  *(undefined4 *)(iVar1 + 0x3c) = 4;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  return;
}



void fn_001912b0(int param_1)

{
  fn_00145a08(**(undefined4 **)(param_1 + 4));
  return;
}



void fn_001910b4(void)

{
  return;
}



void fn_0018c7f4(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  if ((char)param_1[3] != '\0') {
    fn_001966d8(param_1);
  }
  iVar2 = param_1[0x24];
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0018c8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc))(param_1);
    return;
  }
  fn_00195964(auStack_20,*param_2);
  fn_00195e18(iVar2,local_1c,param_2[10]);
  fn_00195e28(iVar2);
  uVar3 = 0;
  do {
    fn_001957f4(param_1 + uVar3 * 3 + 0x4d,param_2[uVar3 + 1]);
    fn_001958bc(param_1 + uVar3 * 4 + 0x3d,param_2[uVar3 + 5],
                 (int)*(char *)((int)param_2 + uVar3 + 0x24));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  *(undefined1 *)(param_1 + 0x59) = 3;
  *(undefined1 *)(param_1 + 3) = 1;
  uVar1 = fn_0018c8e8();
  fn_00196754(uVar1,param_1 + 0x11);
  uVar1 = fn_00172fc4();
  fn_00195e04(uVar1,param_1 + 0x14);
  *(undefined1 *)((int)param_1 + 0x166) = 1;
  return;
}



void fn_0018c728(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  param_1[0x20] = param_2[2];
  for (uVar1 = param_2[1]; uVar1 != 0; uVar1 = uVar1 >> 1) {
    if ((uVar1 & 1) != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  iVar2 = (**(code **)(*(int *)*param_2 + 0x10))();
  if (iVar2 < iVar3) {
                    /* WARNING: Could not recover jumptable at 0x0018c784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc))(param_1);
    return;
  }
  iVar3 = 0;
  for (uVar1 = param_2[1]; uVar1 != 0; uVar1 = uVar1 >> 1) {
    if (((uVar1 & 1) != 0) &&
       (iVar2 = (**(code **)(*(int *)*param_2 + 8))((int *)*param_2,param_1), iVar3 < 0x10)) {
      param_1[iVar3 + 0x24] = iVar2;
      *(char *)(iVar2 + 4) = (char)iVar3;
      *(undefined1 *)(iVar2 + 0x79) = *(undefined1 *)((int)param_1 + 0x2e);
    }
    iVar3 = iVar3 + 1;
  }
  param_1[0x21] = *param_2;
  return;
}



void fn_0018c6e4(int param_1,int param_2,int param_3)

{
  uint in_fpscr;
  float fVar1;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (param_2 == 0) {
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + param_3;
      return;
    }
    if (param_2 == 1) {
      fVar1 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
      *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x70) + fVar1;
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0018c6a4) */

void fn_0018c654(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (param_2 == 0) {
      return;
    }
    if ((((param_2 & 1) != 0) && (iVar2 < 0x10)) &&
       (iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x90), iVar1 != 0)) {
      fn_0055a558(iVar1,param_3);
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 >> 1;
  } while (iVar2 < 0x10);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0018c61c) */

void fn_0018c5c4(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (param_2 == 0) {
      return;
    }
    if ((((param_2 & 1) != 0) && (iVar2 < 0x10)) &&
       (iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x90), iVar1 != 0)) {
      fn_0055a54c(iVar1,param_3);
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 >> 1;
  } while (iVar2 < 0x10);
  return;
}



void fn_0018c5ac(undefined4 param_1,undefined4 param_2)

{
  fn_0019be0c(param_1,param_2,&LAB_0055a4f0,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0018c578) */

void fn_0018c528(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (param_2 == 0) {
      return;
    }
    if ((((param_2 & 1) != 0) && (iVar2 < 0x10)) &&
       (iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x90), iVar1 != 0)) {
      fn_0055a370(iVar1,param_3);
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 >> 1;
  } while (iVar2 < 0x10);
  return;
}



void fn_0018c478(int param_1,undefined2 param_2)

{
  (&DAT_008f2750)[param_1] = param_2;
  return;
}



void fn_0018c460(undefined4 param_1,undefined4 param_2)

{
  fn_0019be0c(param_1,param_2,&LAB_0055a360,0);
  return;
}



void fn_0018c454(int param_1,int param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + param_2 * 2 + 0xd0) = param_3;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0018c420) */

void fn_0018c3cc(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (param_2 == 0) {
      return;
    }
    if ((((param_2 & 1) != 0) && (iVar2 < 0x10)) &&
       (iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x90), iVar1 != 0)) {
      fn_0055a2cc(iVar1,param_3,param_4);
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 >> 1;
  } while (iVar2 < 0x10);
  return;
}



void fn_0018c3b4(undefined4 param_1,undefined4 param_2)

{
  fn_0019be0c(param_1,param_2,&LAB_0055a2c4,0);
  return;
}


