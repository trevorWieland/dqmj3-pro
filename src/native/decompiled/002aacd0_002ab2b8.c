#include "002aacd0_002ab2b8.h"



void fn_002ab2b8(int param_1)

{
  undefined4 uVar1;
  
  fn_002761b4(*(undefined4 *)(param_1 + 8));
  fn_00698fb8(DAT_008977e0,1);
  uVar1 = fn_006f72b4(DAT_008977e0);
  fn_0021c488(uVar1,1);
  if (*(char *)(param_1 + 0x18) != '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  uVar1 = fn_006f7a5c(DAT_008977e0);
  fn_001d68cc(uVar1,1);
  fn_006f7a5c(DAT_008977e0);
  fn_001d92ac();
  fn_006f7a5c(DAT_008977e0);
  fn_001d5fa4();
  fn_006f7a5c(DAT_008977e0);
  fn_001d91ec();
  fn_00692f98(*(undefined4 *)(DAT_008977e0 + 0x40));
  fn_006f7ab8(DAT_008977e0);
  fn_001f6464();
  fn_002aafbc(param_1,0);
  return;
}



void fn_002ab194(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  fn_006f7a84(DAT_008977e0);
  fn_006f7a5c(DAT_008977e0);
  fn_001d8a48();
  fn_006f7a84(DAT_008977e0);
  fn_006f7a5c(DAT_008977e0);
  fn_001d92e8();
  uVar1 = fn_006f7a5c(DAT_008977e0);
  fn_006f7a84(DAT_008977e0);
  fn_006aa87c();
  fn_005456d0(uVar1);
  uVar1 = fn_006f7a5c(DAT_008977e0);
  fn_006f7a84(DAT_008977e0);
  fn_006aa87c();
  fn_006f7a84(DAT_008977e0);
  fn_006abae0();
  fn_001d92ac(uVar1);
  piVar2 = (int *)fn_006f7a84(DAT_008977e0);
  (**(code **)(*piVar2 + 0x54))(piVar2,1);
  fn_006f7a84(DAT_008977e0);
  fn_001dcdf0();
  iVar3 = fn_001cf540(*(undefined4 *)(DAT_008977e0 + 0x30));
  if ((iVar3 == 0) && (iVar3 = fn_006f7a5c(DAT_008977e0), *(char *)(iVar3 + 0xd) == '\x01')) {
    uVar1 = fn_006f7a5c(DAT_008977e0);
    fn_001d68cc(uVar1,0);
    return;
  }
  return;
}



void fn_002aafbc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float in_s0;
  float local_30;
  float local_2c;
  undefined4 uStack_28;
  
  fn_006f7ab8(DAT_008977e0);
  fn_001f6470();
  *(undefined1 *)(param_1 + 4) = 6;
  fn_00274348(*(undefined4 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x31) == '\0') {
    if (param_2 == 0) {
      fn_0027042c(*(undefined4 *)(param_1 + 8));
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    else {
      fn_0026fd8c(*(undefined4 *)(param_1 + 8),1);
    }
    uVar2 = fn_006f72b4(DAT_008977e0);
    fn_0021c420(uVar2,1);
  }
  else {
    fn_00270f38(*(undefined4 *)(param_1 + 8));
  }
  (**(code **)(**(int **)(param_1 + 0x54) + 0x10))();
  puVar4 = *(undefined4 **)(param_1 + 0x20);
  puVar6 = *(undefined4 **)(param_1 + 0x1c);
  puVar5 = puVar6;
  if (puVar6 != puVar4) {
    do {
      (**(code **)*puVar5)(puVar5);
      puVar5 = puVar5 + 7;
    } while (puVar5 != puVar4);
    iVar1 = (int)((longlong)((int)puVar4 - (int)puVar6) * -0x6db6db6d +
                  ((ulonglong)(uint)((int)puVar4 - (int)puVar6) << 0x20) >> 0x20);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + ((iVar1 >> 4) - (iVar1 >> 0x1f)) * -0x1c;
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  uVar2 = fn_006f72b4(DAT_008977e0);
  fn_0021d7a0(uVar2,1);
  piVar3 = (int *)fn_006f7a84(DAT_008977e0);
  (**(code **)(*piVar3 + 0x54))(piVar3,1);
  fn_001dcee8(piVar3);
  iVar1 = fn_006aba74(piVar3);
  if (iVar1 != 0) {
    fn_00259878(piVar3);
  }
  fn_002cd59c();
  uStack_28 = 0;
  local_30 = in_s0 * 15.0;
  local_2c = in_s0 * 60.0;
  fn_001d9bb4(piVar3,&local_30);
  fn_006f72b4(DAT_008977e0);
  fn_0021afb8();
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined1 *)(param_1 + 0x51) = 1;
  return;
}



undefined4 fn_002aaf80(int *param_1)

{
  (**(code **)(*param_1 + 0x40))(param_1,1);
  if ((int *)param_1[0x16] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x16] + 0x14))();
  }
  return 1;
}



void fn_002aaef4(undefined4 *param_1)

{
  *param_1 = &DAT_0081eb74;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



void fn_002aae8c(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar1 != uVar4) {
    uVar3 = uVar1;
    if (uVar4 <= uVar1) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar4);
    }
    *(uint *)(param_1 + 8) = uVar4 - (uVar4 - uVar1 & 0xfffffffc);
  }
  uVar5 = *(undefined4 *)(DAT_008977e0 + 0xa8);
  iVar2 = fn_006f72a0();
                    /* WARNING: Could not recover jumptable at 0x006bd410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))(*(int **)(iVar2 + 0x10),param_1 + 4,uVar5);
  return;
}



undefined4 fn_002aae50(int param_1)

{
  int iVar1;
  
  if (param_1 != 0x295 && param_1 != 0x298) {
    iVar1 = -0x299;
    if (param_1 != 0x299) {
      iVar1 = param_1 + -0x200;
    }
    if (param_1 != 0x299 && iVar1 != 0x9a) {
      return 0;
    }
  }
  return 1;
}



uint fn_002aaddc(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_428 [88];
  byte local_3d0;
  
  iVar1 = fn_006b09bc();
  if (-1 < iVar1) {
    fn_006b09bc(param_1);
    uVar2 = fn_002e9ce8();
    return uVar2;
  }
  if (**(int **)(DAT_008977e0 + 0x40) == 0) {
    uVar2 = 1;
  }
  else {
    fn_006ca25c((*(int **)(DAT_008977e0 + 0x40))[1],auStack_428,(int)*(short *)(param_1 + 0x16a));
    uVar2 = (uint)local_3d0;
  }
  return uVar2;
}



int fn_002aad7c(int param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(param_1 + 0x16a);
  iVar2 = fn_006b09bc();
  if (iVar2 < 0) {
    iVar2 = fn_0066173c((int)sVar1);
    if (1 < iVar2) {
      iVar2 = 2;
    }
  }
  else {
    fn_006b09bc(param_1);
    iVar2 = fn_002e9c90();
    if (iVar2 == -1) {
      iVar2 = fn_0066173c((int)sVar1);
      return iVar2;
    }
  }
  return iVar2;
}



void fn_002aad28(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006b09bc();
  if (iVar1 < 0) {
    fn_006ca788(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),(int)*(short *)(param_1 + 0x16a)
                );
    return;
  }
  fn_006b09bc(param_1);
  fn_002ea2b0();
  return;
}



undefined1 fn_002aacd0(int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  
  if (((param_1 == 0) || (iVar2 = fn_006b13fc(), iVar2 != 0)) ||
     (*(char *)(param_1 + 0x36c) == '\0')) {
    return 0;
  }
  sVar1 = *(short *)(param_1 + 0x16a);
  iVar2 = fn_006f7508(DAT_008977e0);
  psVar4 = (short *)**(undefined4 **)(iVar2 + 0xc);
  psVar3 = (short *)(*(undefined4 **)(iVar2 + 0xc))[1];
  if (psVar4 < psVar3) {
    iVar5 = (int)psVar3 - (int)psVar4;
    iVar2 = 1;
    if (1 < iVar5 / 6 + 1) {
      do {
        if (*psVar4 == sVar1) goto LAB_006cdea4;
        iVar2 = iVar2 + 1;
        psVar4 = psVar4 + 3;
      } while (iVar2 < iVar5 / 6 + 1);
    }
  }
  else {
    for (; psVar4 != psVar3; psVar4 = psVar4 + 3) {
      if (*psVar4 == sVar1) {
LAB_006cdea4:
        if (psVar4 == (short *)0x0) {
          return 0;
        }
        return (char)psVar4[2];
      }
    }
  }
  return 0;
}


