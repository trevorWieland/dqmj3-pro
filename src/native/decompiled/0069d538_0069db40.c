#include "0069d538_0069db40.h"



void fn_0069db40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
  local_10 = param_4;
  local_10 = fn_003b7a2c(uVar1);
  uVar1 = fn_003b7324(uVar1,local_10);
  fn_0069d674(param_1,uVar1,0);
  fn_0079d450(param_1 + 0x40,&local_10);
  return;
}



void fn_0069da90(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  int local_1c;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
  local_20 = fn_003b7360(uVar2);
  uVar2 = fn_003b7324(uVar2,local_20);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
  local_1c = fn_003b7c54(uVar3,param_2,param_3,0);
  uVar1 = 0;
  if (local_1c != -1) {
    uVar1 = fn_003b7324(uVar3,local_1c);
    fn_0079d450(param_1 + 0x40,&local_1c);
  }
  fn_0069d674(param_1,uVar2,uVar1);
  fn_0079d450(param_1 + 0x40,&local_20);
  return;
}



void fn_0069da48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
  local_10 = param_4;
  local_10 = fn_003b72a4(uVar1);
  uVar1 = fn_003b7324(uVar1,local_10);
  fn_0069d674(param_1,uVar1,0);
  fn_0079d450(param_1 + 0x40,&local_10);
  return;
}



void fn_0069da24(int param_1)

{
  undefined4 in_s0;
  
  if (*(char *)(param_1 + 0x4c) == '\0') {
    *(undefined4 *)(param_1 + 0xd0) = in_s0;
    *(undefined1 *)(param_1 + 0xcc) = 1;
    return;
  }
  fn_0017fdbc(*(undefined4 *)(param_1 + 0x14));
  return;
}



void fn_0069d9f0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x14));
    fn_0017fcfc(uVar1,1);
    return;
  }
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x14));
  fn_0017fc28(uVar1,1);
  return;
}



void fn_0069d9a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
  local_10 = param_4;
  local_10 = fn_003b817c(uVar1);
  uVar1 = fn_003b7324(uVar1,local_10);
  fn_0069d674(param_1,uVar1,0);
  fn_0079d450(param_1 + 0x40,&local_10);
  return;
}



void fn_0069d934(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_18;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c);
  local_18 = param_4;
  local_18 = fn_003b80fc(uVar1,param_2,param_4,param_5);
  uVar1 = fn_003b7324(uVar1,local_18);
  fn_0069d674(param_1,uVar1,0);
  fn_0079d450(param_1 + 0x40,&local_18);
  *(undefined1 *)(param_1 + 0x54) = 1;
  fn_0017821c(param_1 + 0x5c,param_3,0x60);
  fn_001f825c();
  return;
}



void fn_0069d8b0(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  
  fn_0017fde4(*(undefined4 *)(param_1 + 0x14));
  piVar2 = (int *)fn_005ea4fc();
  fn_0017fde4(*(undefined4 *)(param_1 + 0x14));
  iVar3 = fn_006ebe58();
  if (*(short *)(iVar3 + 0x88) == 0) {
    uVar4 = 0xffff;
  }
  else {
    uVar5 = fn_002febd8(param_2);
    uVar4 = fn_00190fe0(iVar3 + 0x88,param_2,uVar5);
  }
  bVar1 = *(byte *)(*piVar2 + (uVar4 >> 3));
  bVar6 = (byte)(1 << (uVar4 & 7));
  if (param_3 == 0) {
    bVar6 = bVar1 & ~bVar6;
  }
  else {
    bVar6 = bVar6 | bVar1;
  }
  *(byte *)(*piVar2 + (uVar4 >> 3)) = bVar6;
  return;
}



void fn_0069d880(int param_1)

{
  undefined4 in_s0;
  
  if (*(char *)(param_1 + 0x4c) == '\0') {
    *(undefined4 *)(param_1 + 200) = in_s0;
    *(undefined1 *)(param_1 + 0xc4) = 1;
    return;
  }
  fn_005ef3f8(*(undefined4 *)(param_1 + 0x14));
  return;
}



void fn_0069d86c(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002b1598();
}



void fn_0069d674(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  
  puVar10 = (uint *)(param_1 + 0xc);
  puVar1 = (undefined4 *)*puVar10;
  puVar11 = (uint *)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0x10)) {
    *puVar10 = (uint)(puVar1 + 2);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_2;
      puVar1[1] = param_3;
    }
    return;
  }
  uVar4 = (int)((int)puVar1 - *puVar11) >> 3;
  if (uVar4 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x10) - *puVar11) >> 3)) {
    *puVar10 = (uint)(puVar1 + 2);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar1[-2];
      puVar1[1] = puVar1[-1];
    }
    puVar7 = puVar1 + -2;
    puVar8 = puVar1;
    if (puVar1 < puVar7) {
      iVar5 = (int)puVar7 - (int)puVar1;
      if (0 < iVar5) {
        if (iVar5 * 0x10000000 < 0) {
          puVar7 = puVar1 + -4;
          puVar8 = puVar1 + -2;
          *puVar8 = *puVar7;
          puVar1[-1] = puVar1[-3];
        }
        for (iVar5 = iVar5 >> 4; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar13 = puVar7[-1];
          puVar8[-2] = puVar7[-2];
          puVar8[-1] = uVar13;
          uVar13 = puVar7[-3];
          puVar8[-4] = puVar7[-4];
          puVar8[-3] = uVar13;
          puVar8 = puVar8 + -4;
          puVar7 = puVar7 + -4;
        }
      }
    }
    else {
      while (puVar1 != puVar7) {
        uVar13 = puVar7[-1];
        puVar8[-2] = puVar7[-2];
        puVar8[-1] = uVar13;
        puVar8 = puVar8 + -2;
        puVar7 = puVar7 + -2;
      }
    }
    *puVar1 = param_2;
    puVar1[1] = param_3;
    return;
  }
  uVar6 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  uVar12 = uVar4 + 0x20;
  if (uVar4 + 0x20 <= uVar6) {
    uVar12 = uVar6;
  }
  puVar2 = (undefined4 *)fn_00100fc6(uVar12 << 3,0);
  puVar8 = puVar2;
  for (puVar7 = (undefined4 *)*puVar11; puVar7 != puVar1; puVar7 = puVar7 + 2) {
    if (puVar8 != (undefined4 *)0x0) {
      uVar13 = puVar7[1];
      *puVar8 = *puVar7;
      puVar8[1] = uVar13;
    }
    puVar8 = puVar8 + 2;
  }
  puVar7 = (undefined4 *)(((int)puVar1 - *puVar11 & 0xfffffff8) + (int)puVar2);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = param_2;
    puVar7[1] = param_3;
  }
  puVar8 = (undefined4 *)*puVar10;
  puVar7 = (undefined4 *)(((int)puVar1 - *puVar11 & 0xfffffff8) + (int)puVar2);
  for (; puVar1 != puVar8; puVar1 = puVar1 + 2) {
    puVar3 = puVar7 + 2;
    if (puVar3 != (undefined4 *)0x0) {
      uVar13 = puVar1[1];
      *puVar3 = *puVar1;
      puVar7[3] = uVar13;
    }
    puVar7 = puVar3;
  }
  uVar6 = *puVar11;
  uVar9 = *puVar10;
  uVar4 = uVar6;
  if (uVar9 < uVar6) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != uVar9);
  }
  fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0x10) - uVar6) >> 3,0);
  *(undefined4 **)(param_1 + 0x10) = puVar2 + uVar12 * 2;
  *puVar10 = (uint)(puVar2 + ((int)(uVar9 - uVar6) >> 3) * 2 + 2);
  *puVar11 = (uint)puVar2;
  return;
}



void fn_0069d538(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005e846c();
  }
  piVar5 = *(int **)(param_1 + 0x14);
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x14) = piVar2;
  }
  if (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3 == 0) {
    fn_002ff628(9,&DAT_008c7644);
  }
  puVar6 = *(undefined4 **)(param_1 + 8);
  if (puVar6[1] == 0) {
    fn_0069ee40(*(undefined4 *)(param_1 + 0x14),*puVar6,0);
  }
  else {
    fn_0069ee38(*(undefined4 *)(param_1 + 0x14),*puVar6,0);
    fn_0069eb10(*(undefined4 *)(param_1 + 0x14),puVar6[1],0);
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  uVar4 = DAT_008987bc;
  if (*(char *)(param_1 + 0x54) == '\0') {
    return;
  }
  fn_002026fc(DAT_008987bc,*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
  uVar3 = fn_00661800(uVar4,param_1 + 0x5c,0,0xff);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  fn_00661d0c(uVar4,uVar3,*(undefined4 *)(param_1 + 0x14));
  uVar4 = fn_00156f24(uVar4,*(undefined4 *)(param_1 + 0x58));
  fn_00154a48(uVar4,0);
  return;
}


