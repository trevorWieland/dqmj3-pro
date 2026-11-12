#include "004b3b48_004b4224.h"



int * fn_004b4224(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = *(int *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  piVar3 = (int *)fn_0015ece0(0xc);
  iVar4 = fn_0015ece0(0x700);
  piVar3[2] = iVar4;
  *piVar3 = *param_1;
  piVar3[1] = 0x20;
  *param_1 = (int)piVar3;
  puVar5 = (undefined1 *)piVar3[2];
  param_1[2] = (int)puVar5;
  param_1[3] = (int)(puVar5 + 0x700);
  param_1[2] = (int)(puVar5 + 0x38);
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  param_1[4] = (int)puVar5;
  *puVar5 = 0;
  iVar4 = fn_00771574(param_1,*(undefined4 *)(*(int *)(param_2 + 0x10) + 4),param_1[4]);
  *(int *)(param_1[4] + 4) = iVar4;
  iVar6 = param_1[4];
  if (iVar4 == 0) {
    *(int *)(iVar6 + 8) = iVar6;
    *(int *)(param_1[4] + 0xc) = param_1[4];
  }
  else {
    iVar2 = *(int *)(iVar4 + 8);
    while (iVar1 = iVar2, iVar1 != 0) {
      iVar4 = iVar1;
      iVar2 = *(int *)(iVar1 + 8);
    }
    *(int *)(iVar6 + 8) = iVar4;
    iVar4 = *(int *)(param_1[4] + 4);
    for (iVar6 = *(int *)(iVar4 + 0xc); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
      iVar4 = iVar6;
    }
    *(int *)(param_1[4] + 0xc) = iVar4;
  }
  return param_1;
}



void fn_004b41a8(int *param_1,uint param_2)

{
  uint local_18;
  int local_14;
  
  if (param_2 == 0xffffffff) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  fn_0013d0fc(&local_18);
  if ((int)param_2 < 0) {
    local_14 = local_14 - (((int)-param_2 >> 0x1f) + (uint)(local_18 < -param_2));
  }
  else {
    local_14 = local_14 + ((int)param_2 >> 0x1f) + (uint)CARRY4(local_18,param_2);
  }
  *param_1 = local_18 + param_2;
  param_1[1] = local_14;
  return;
}



int fn_004b4164(uint *param_1)

{
  int iVar1;
  uint local_10;
  uint uStack_c;
  
  if (*param_1 == 0 && param_1[1] == 0) {
    iVar1 = -1;
  }
  else {
    fn_0013d0fc(&local_10);
    if (param_1[1] < uStack_c || uStack_c - param_1[1] < (uint)(*param_1 <= local_10)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *param_1 - local_10;
    }
  }
  return iVar1;
}



void fn_004b4148(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &DAT_008559d0;
  return;
}



void fn_004b3f78(void)

{
  int iVar1;
  
  iVar1 = fn_004b3fa8();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004b3f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



void fn_004b3bb8(void)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  fn_00170704(&DAT_008e7794);
  piVar1 = (int *)fn_001249d0();
  puVar3 = (uint *)(piVar1 + 1);
  do {
    uVar2 = *puVar3 - 1;
    bVar4 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar4);
  *puVar3 = uVar2;
  bVar4 = uVar2 == 0;
  if (bVar4) {
    uVar2 = (uint)*(byte *)(piVar1 + 2);
  }
  if (bVar4 && uVar2 == 0) {
    *(undefined1 *)(piVar1 + 2) = 1;
    (**(code **)(*piVar1 + 4))();
  }
  if (DAT_008b63e8 == 0) {
    DAT_008b637c = 0;
  }
  fn_004747a4();
  fn_001707b4(&DAT_008e7794);
  return;
}



void fn_004b3b48(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  fn_00170704(&DAT_008e7794);
  fn_004746b0();
  iVar2 = fn_001249d0();
  if (iVar2 == 0) {
    iVar2 = fn_0015ece0(0x78);
    if (iVar2 != 0) {
      fn_004b3cbc();
    }
  }
  else {
    iVar2 = fn_001249d0();
    piVar3 = (int *)(iVar2 + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
  }
  fn_001707b4(&DAT_008e7794);
  return;
}



int fn_004b3cbc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *local_28;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  
  iVar6 = 0;
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &DAT_008559c0;
  if (DAT_008b637e == '\0') {
    uVar5 = 0;
  }
  else {
    puVar1 = (undefined4 *)fn_001775e8(DAT_008b63d8,&DAT_008559c0,param_3);
    uVar5 = *puVar1;
  }
  puVar1 = (undefined4 *)fn_00474e88(param_1 + 7,3,uVar5);
  *puVar1 = &DAT_0085344c;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  iVar2 = fn_004745d8(puVar1 + 0xc,0x20000000);
  DAT_008b6384 = 0;
  fn_0013d0fc(auStack_20);
  fn_004b3c38();
  if ((DAT_008b6385 & ~DAT_008b6389) == 0) {
    if (DAT_008b6389 == 0) {
      DAT_008b637c = 1;
      goto LAB_004b3d90;
    }
  }
  else {
    DAT_008b6389 = 1;
  }
  DAT_008b637c = 0;
LAB_004b3d90:
  (**(code **)(DAT_008e778c + 8))();
  DAT_008b63e8 = DAT_008b63e8 + 1;
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  (**(code **)(DAT_008e778c + 8))(&DAT_008e778c);
  *(int *)(iVar2 + -0x24) = iVar2 + -0x4c;
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  iVar3 = fn_0015ece0(0x1d0);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = fn_004be01c(iVar3,8,0);
  }
  *(int *)(iVar2 + -0x40) = iVar4;
  if (DAT_008b6385 != 0) {
    fn_0046d15c(*(undefined4 *)(iVar4 + 0xc),1);
  }
  iVar4 = fn_0015ece0(0x60);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = fn_0048a988();
  }
  *(undefined4 *)(iVar2 + -0x3c) = uVar5;
  iVar4 = fn_0015ece0(0x48);
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    local_28 = &DAT_00855a94;
    fn_0015e6f0(auStack_24,L"System Components");
    puVar1 = (undefined4 *)fn_0048f9d0(iVar4,&local_28);
    fn_00170f54(&local_28);
    puVar1[0xe] = 0;
    *puVar1 = &DAT_00853750;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    iVar4 = fn_0015ece0(0x38);
    if (iVar4 == 0) {
      puVar1[0x11] = 0;
    }
    else {
      local_28 = &DAT_00855a94;
      fn_0015e6f0(auStack_24,L"Core");
      uVar5 = fn_0048f9d0(iVar4,&local_28);
      puVar1[0x11] = uVar5;
      fn_00170f54(&local_28);
    }
    fn_0048f620(puVar1,puVar1[0x11]);
  }
  *(undefined4 **)(iVar2 + -0x38) = puVar1;
  fn_0048f620(puVar1[0x11],*(undefined4 *)(iVar2 + -0x3c));
  iVar4 = fn_0015ece0(0x6c);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = fn_00495394();
  }
  *(undefined4 *)(iVar2 + -0x34) = uVar5;
  iVar4 = fn_001249d0();
  if (iVar4 != 0) {
    iVar6 = *(int *)(iVar4 + 0xc);
  }
  (**(code **)(*(int *)(iVar6 + 0x50) + 8))();
  fn_00479edc(*(undefined4 *)(*(int *)(iVar2 + -0x38) + 0x44));
  (**(code **)(*(int *)(iVar6 + 0x50) + 0xc))((int *)(iVar6 + 0x50));
  return iVar2 + -0x4c;
}



void fn_004b3c38(void)

{
  switch(DAT_008b6386) {
  default:
    return;
  case 1:
    DAT_008b6385 = 0;
    break;
  case 2:
    DAT_008b6385 = 0;
    DAT_008b6387 = 1;
    DAT_008b6389 = 0;
    return;
  case 3:
    DAT_008b6387 = 0;
    DAT_008b6385 = 0;
    DAT_008b6389 = 0;
    return;
  case 4:
    DAT_008b6385 = 0;
    DAT_008b6387 = 0;
    DAT_008b6389 = 1;
    return;
  case 5:
    DAT_008b6385 = 1;
    DAT_008b6387 = 0;
    DAT_008b6389 = 1;
    return;
  case 6:
    DAT_008b6385 = 1;
  }
  DAT_008b6387 = 1;
  DAT_008b6389 = 1;
  return;
}


