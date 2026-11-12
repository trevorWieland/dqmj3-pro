#include "003dde68_003deef4.h"



void fn_003deef4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  undefined2 local_38 [2];
  undefined4 *local_34;
  short local_30 [2];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(short *)(param_1 + 0xb4) == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x178) + param_2 * 4);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x184) + param_2 * 4);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 400) + param_2 * 4);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    return;
  }
  fn_0042ec00(*(undefined4 *)(param_1 + 0x98),param_2,local_30,local_38);
  iVar1 = param_1 + param_2 * 4;
  *(short *)(iVar1 + 0xf4) = local_30[0];
  *(undefined2 *)(iVar1 + 0xf6) = local_38[0];
  iVar1 = *(int *)(*(int *)(param_1 + 0x178) + param_2 * 4);
  if (local_30[0] == 0) {
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x184) + param_2 * 4);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 400) + param_2 * 4);
    if (iVar1 == 0) {
      return;
    }
    bVar3 = *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  else {
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
    }
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) == '\0') {
      fn_00231410(&local_34,(int)local_30[0],local_38[0]);
      fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x178) + param_2 * 4),local_34);
      if (local_34 != &DAT_008f9cf4) {
        piVar2 = local_34 + -3;
        iVar1 = *piVar2;
        if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
        }
      }
    }
    else {
      fn_0022ef60(&local_2c,9);
      fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x178) + param_2 * 4),&local_2c);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x184) + param_2 * 4);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
      fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0x184) + param_2 * 4),local_38[0],0);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 400) + param_2 * 4);
    if (iVar1 == 0) {
      return;
    }
    bVar3 = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  }
  *(byte *)(iVar1 + 0x44) = bVar3;
  return;
}



void fn_003dee20(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x98) + 0x2a);
  *(undefined2 *)(param_1 + 0xd2) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x2c);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_0018a618(&local_24,5,4,&DAT_003df6b4,(int)*(short *)(param_1 + 0xd2));
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
    fn_0022ef60(&local_24,4);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x130),&local_24);
  fVar5 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xd2),(byte)(in_fpscr >> 0x16) & 3);
  if ((int)(fVar5 / fVar4) < 0x3e4cccce) {
    uVar2 = DAT_00895618;
  }
  else {
    uVar2 = DAT_0089560c;
  }
  iVar3 = *(int *)(param_1 + 0x130);
  *(undefined4 *)(iVar3 + 0xac) = uVar2;
  *(undefined4 *)(iVar3 + 0xb0) = uVar2;
  return;
}



void fn_003deda0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *local_10;
  
  local_10 = param_4;
  fn_00231690(&local_10,*(int *)(param_1 + 0x98) + 0x2d4,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0x16c),local_10);
  if (local_10 != &DAT_008f9cf4) {
    piVar1 = local_10 + -3;
    iVar2 = *piVar1;
    if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
    }
  }
  return;
}



void fn_003ded10(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x128) + 0x18))();
  if (*(int **)(param_1 + 0x128) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x128) + 4))();
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  if (*(int *)(param_1 + 0xb0) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xac) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xa8) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  }
  fn_0022ccb4(param_1);
  return;
}



void fn_003decd4(undefined4 *param_1)

{
  *param_1 = &DAT_00832040;
  fn_00100414(param_1 + 0x2a,fn_0079ed6c,4,3);
  fn_003bc2c8(param_1);
  fn_002feef8();
  return;
}



int fn_003dec8c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_003bc118();
  *puVar1 = &DAT_00832040;
  iVar2 = fn_00101a1c(puVar1 + 0x2a,&LAB_001ad824,4,3);
  *(undefined2 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  return iVar2 + -0xa8;
}



void fn_003dec34(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = fn_0022cdf0();
  if (iVar1 == 0) {
    return;
  }
  fn_003bbdc0(param_1);
  uVar3 = 0;
  do {
    piVar2 = *(int **)(param_1 + uVar3 * 4 + 0xa8);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))();
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  fn_003bbde0(param_1);
  return;
}



void fn_003de824(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    iVar2 = param_1 + uVar4 * 4;
    piVar1 = *(int **)(iVar2 + 0xa8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))();
      piVar3 = (int *)(iVar2 + 0xa8);
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
        *piVar3 = 0;
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  fn_0022ccb4(param_1);
  return;
}



void fn_003de634(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = fn_003dd794(*(undefined4 *)(param_1 + 0x9c));
  if (iVar2 != 0) {
    fn_003ddf90(param_1);
  }
  if (0 < *(int *)(*(int *)(param_1 + 0x78) + 0x1c)) {
    fn_006890bc(*(undefined4 *)(param_1 + 0x78));
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    iVar2 = *(int *)(param_1 + 0x78);
    iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
    iVar1 = *(int *)(iVar1 + 0x10);
    uVar3 = *(undefined4 *)(iVar2 + 8);
    uVar4 = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(iVar1 + 0x20) = uVar3;
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  }
  if (*(int **)(param_1 + 0x94) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0022cf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x94) + 0x14))();
  return;
}



void fn_003dde68(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar4 = 0;
  do {
    iVar1 = fn_003035b0(param_3,(&DAT_00894090)[iVar4]);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0xdc) == iVar4) {
        return;
      }
      *(int *)(param_1 + 0xdc) = iVar4;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_001028d4(&local_38,(char *)&DAT_003ddf48,*(int *)(param_1 + 0xdc) + 1);
  piVar2 = (int *)fn_001924ec(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0xd4));
  uVar3 = (**(code **)(*piVar2 + 0x14))(piVar2,&local_38);
  iVar4 = fn_006e1ee8(param_2);
  fn_0019501c(*(undefined4 *)(iVar4 + 0x78),uVar3);
  *(byte *)(iVar4 + 0x7c) = *(byte *)(iVar4 + 0x7c) & 0xf7;
  return;
}


