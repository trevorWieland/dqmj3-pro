#include "00150b24_00151100.h"



undefined4 * fn_00151100(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_008576c4;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0xc))(param_2);
    fn_001604d0(param_1,uVar2,param_2);
  }
  return param_1;
}



void fn_00150ed8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  fn_00301f50(param_1 + 0x20,0x100);
  fn_00301f50(param_1 + 0x120,0x100);
  fn_00301f50(param_1 + 0x220,0x100);
  fn_00301f50(param_1 + 0x340,0x100);
  if (0 < (int)*(uint *)(param_1 + 0x448)) {
    uVar1 = *(uint *)(param_1 + 0x448) & 1;
    if (uVar1 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 800) + 0xd8) = 0;
    }
    uVar3 = (uint)(uVar1 == 1);
    if ((int)uVar1 < *(int *)(param_1 + 0x448)) {
      do {
        iVar2 = uVar3 + 1;
        uVar1 = uVar1 + 2;
        *(undefined4 *)(*(int *)(param_1 + 800) + uVar3 * 0x298 + 0xd8) = 0;
        uVar3 = uVar3 + 2;
        *(undefined4 *)(*(int *)(param_1 + 800) + iVar2 * 0x298 + 0xd8) = 0;
      } while ((int)uVar1 < *(int *)(param_1 + 0x448));
    }
  }
  if (0 < (int)*(uint *)(param_1 + 0x44c)) {
    uVar1 = *(uint *)(param_1 + 0x44c) & 1;
    if (uVar1 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x144) = 0;
    }
    uVar3 = (uint)(uVar1 == 1);
    if ((int)uVar1 < *(int *)(param_1 + 0x44c)) {
      do {
        iVar2 = uVar3 + 1;
        uVar1 = uVar1 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x32c) + uVar3 * 0x168 + 0x144) = 0;
        uVar3 = uVar3 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x32c) + iVar2 * 0x168 + 0x144) = 0;
      } while ((int)uVar1 < *(int *)(param_1 + 0x44c));
    }
  }
  if (0 < (int)*(uint *)(param_1 + 0x450)) {
    uVar1 = *(uint *)(param_1 + 0x450) & 1;
    if (uVar1 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x33c) + 0x5814) = 0;
    }
    uVar3 = (uint)(uVar1 == 1);
    if ((int)uVar1 < *(int *)(param_1 + 0x450)) {
      do {
        iVar2 = uVar3 + 1;
        uVar1 = uVar1 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x33c) + uVar3 * 0x5880 + 0x5814) = 0;
        uVar3 = uVar3 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x33c) + iVar2 * 0x5880 + 0x5814) = 0;
      } while ((int)uVar1 < *(int *)(param_1 + 0x450));
    }
  }
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar1 = *(uint *)(param_1 + 0x18) & 1;
    if (uVar1 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
    uVar3 = (uint)(uVar1 == 1);
    if ((int)uVar1 < *(int *)(param_1 + 0x18)) {
      do {
        iVar2 = uVar3 + 1;
        uVar1 = uVar1 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x14) + uVar3 * 0x28c + 4) = 0;
        uVar3 = uVar3 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 * 0x28c + 4) = 0;
      } while ((int)uVar1 < *(int *)(param_1 + 0x18));
    }
  }
  *(undefined4 *)(param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(param_1 + 0x330) = 0;
  return;
}



void fn_00150e8c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + param_3 * 4);
  if (param_2 == (int *)0x0) {
    param_2 = *(int **)(iVar1 + 0x1c);
  }
  fn_00160c68(iVar1,param_2);
  (**(code **)(*param_2 + 0xc))(param_2,*(undefined4 *)(*(int *)(param_1 + 0xc) + param_3 * 4));
  *(undefined4 *)(*(int *)(param_1 + 0xc) + param_3 * 4) = 0;
  return;
}



undefined4 * fn_00150df8(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = param_2 + param_1 & 0xfffffffc;
  puVar2 = (undefined4 *)(param_1 + 3U & 0xfffffffc);
  if ((0 < (int)((int)puVar2 - uVar1)) || (uVar1 - (int)puVar2 < 0x34)) {
    return (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[7] = puVar2 + 7;
    puVar2[6] = 0;
    *puVar2 = &DAT_008575ec;
    puVar2[8] = puVar2 + 7;
  }
  fn_00160420(puVar2,0x46524d48,puVar2 + 0xd,uVar1,param_3);
  puVar2[10] = puVar2[3];
  puVar2[0xb] = puVar2[4];
  puVar2[0xc] = 0;
  return puVar2;
}



uint fn_00150d40(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  uVar4 = param_2 + 3U & 0xfffffffc;
  uVar1 = 0;
  if (param_3 < 0) {
    uVar4 = *(int *)(param_1 + 0x2c) - uVar4 & ~(0xffffffffU - param_3);
    if (*(uint *)(param_1 + 0x28) <= uVar4) {
      fn_0016048c(param_1,uVar4,*(int *)(param_1 + 0x2c) - uVar4);
      *(uint *)(param_1 + 0x2c) = uVar4;
      return uVar4;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
    uVar3 = (iVar2 + param_3) - 1U & ~(param_3 - 1U);
    uVar4 = uVar3 + uVar4;
    if (uVar4 <= *(uint *)(param_1 + 0x2c)) {
      fn_0016048c(param_1,iVar2,uVar4 - iVar2);
      *(uint *)(param_1 + 0x28) = uVar4;
      uVar1 = uVar3;
    }
  }
  return uVar1;
}



void fn_00150d0c(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[1];
  uVar2 = iVar1 + (param_2 - 1U) & ~(param_2 - 1U);
  fn_00158f6c(*param_1 + iVar1,uVar2 - iVar1);
  param_1[1] = uVar2;
  return;
}



void fn_00150ce0(uint *param_1,int param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  
  uVar1 = param_2 + 3U & 0xfffffffc;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 3) = param_4;
  param_1[1] = 0;
  param_1[2] = (param_2 + param_3) - uVar1 & 0xfffffff8;
  return;
}



void fn_00150cb4(int *param_1,undefined4 param_2,int param_3)

{
  fn_00301a9c(*param_1 + param_1[1],param_2,param_3);
  param_1[1] = param_1[1] + param_3;
  return;
}



void fn_00150c68(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  while (param_2 != param_3) {
    puVar1 = (undefined4 *)*param_2;
    puVar2 = (undefined4 *)param_2[1];
    puVar1[1] = puVar2;
    *puVar2 = puVar1;
    *param_1 = *param_1 + -1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2 = puVar1;
  }
  return;
}



void fn_00150c1c(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)*param_2;
  while (param_2 != puVar1) {
    puVar2 = (undefined4 *)*param_2;
    puVar3 = (undefined4 *)param_2[1];
    puVar2[1] = puVar3;
    *puVar3 = puVar2;
    *param_1 = *param_1 + -1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2 = puVar2;
  }
  return;
}



void fn_00150be0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_008f7520;
  iVar1 = fn_00171944(&DAT_008f7520,param_1);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(iVar1 + 0x18);
  }
  fn_0017d90c(puVar2,param_1 + 4);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



int fn_00150b24(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 1) != 0) {
    fn_00150bb4(param_1,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0xc))
    ;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xc);
  }
  if ((param_2 & 2) != 0) {
    fn_00150bb4(param_1,*(int *)(param_1 + 0x2c),
                 *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x2c));
    for (iVar1 = *(int *)(param_1 + 0x30); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
  }
  return param_1;
}



void fn_00150bb4(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(uint *)(param_1 + 0x24) & 2) == 0) {
    return;
  }
  fn_00158f40(param_2,param_3,DAT_008c3ce0);
  return;
}


