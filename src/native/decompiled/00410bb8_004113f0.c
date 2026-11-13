#include "00410bb8_004113f0.h"



void fn_004113f0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  switch((char)param_1[0x41]) {
  case '\0':
    fn_0078be14(param_1 + 0x43,&DAT_007c6b2c);
    break;
  case '\x01':
    fn_0078be14(param_1 + 0x43,&DAT_007c6b5c);
    break;
  case '\x02':
    fn_0078be14(param_1 + 0x43,&DAT_007c6b7c);
    break;
  case '\x03':
    iVar1 = (**(code **)(*param_1 + 0x170))(param_1);
    iVar2 = (**(code **)(*param_1 + 0x174))(param_1);
    fn_0078be14(param_1 + 0x43,iVar1,iVar1 + iVar2 * 0x10);
    break;
  case '\x04':
    iVar1 = (**(code **)(*param_1 + 0x178))(param_1);
    iVar2 = (**(code **)(*param_1 + 0x17c))(param_1);
    fn_0078be14(param_1 + 0x43,iVar1,iVar1 + iVar2 * 0x10);
    break;
  case '\x05':
    fn_0078be14(param_1 + 0x43,&DAT_007c6bac);
    break;
  case '\x06':
    fn_0078be14(param_1 + 0x43,&DAT_007c6bcc);
    break;
  case '\a':
    fn_0078be14(param_1 + 0x43,&DAT_007c6bec);
    break;
  case '\b':
    fn_0078be14(param_1 + 0x43,&DAT_007c6c0c);
  }
  uVar3 = 0;
  if (param_1[0x44] - param_1[0x43] >> 4 != 0) {
    do {
      iVar1 = uVar3 * 0x10;
      uVar3 = uVar3 + 1;
      *(int *)(param_1[0x43] + iVar1 + 8) = param_1[0x39];
    } while (uVar3 < (uint)(param_1[0x44] - param_1[0x43] >> 4));
  }
  return;
}



void fn_0041131c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_008386d8;
  uVar1 = param_1[0x30];
  uVar2 = uVar1;
  if ((uint)param_1[0x31] < uVar1) {
    do {
      uVar2 = uVar2 + 2;
    } while (uVar2 != param_1[0x31]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x32] - uVar1) >> 1,0);
  fn_00410cac(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_004111d0(void)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint local_20;
  uint local_1c [2];
  
  puVar5 = &local_20;
  puVar1 = (undefined4 *)fn_00410bb8();
  puVar9 = puVar1 + 0x30;
  *puVar1 = &PTR_LAB_008386d8;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  *(undefined2 *)(puVar1 + 0x33) = 0;
  local_1c[0] = fn_00203e78();
  if (0x7fffffff < local_1c[0]) {
    local_20 = 0x7fffffff;
    fn_002ff628(8,&DAT_008c7675,&DAT_008c7675,local_1c[0]);
  }
  if ((uint)((int)(puVar1[0x32] - *puVar9) >> 1) < local_1c[0]) {
    uVar10 = (int)(puVar1[0x31] - *puVar9) >> 1;
    local_20 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_20 < uVar10 + 0x20) {
      local_20 = uVar10 + 0x20;
    }
    if (local_20 <= local_1c[0]) {
      puVar5 = local_1c;
    }
    uVar10 = *puVar5;
    puVar2 = (undefined2 *)fn_00100fc6(uVar10 << 1,0);
    puVar7 = (undefined2 *)puVar1[0x31];
    puVar3 = puVar2;
    for (puVar6 = (undefined2 *)*puVar9; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = *puVar6;
      }
      puVar3 = puVar3 + 1;
    }
    uVar8 = *puVar9;
    uVar4 = uVar8;
    if ((uint)puVar1[0x31] < uVar8) {
      do {
        uVar4 = uVar4 + 2;
      } while (uVar4 != puVar1[0x31]);
    }
    fn_001008c4(uVar8,(int)(puVar1[0x32] - uVar8) >> 1,0);
    uVar4 = *puVar9;
    puVar1[0x30] = puVar2;
    puVar1[0x31] = (puVar1[0x31] - uVar4 & 0xfffffffe) + (int)puVar2;
    puVar1[0x32] = puVar2 + uVar10;
  }
  return puVar1;
}



void fn_00411138(int *param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1[0x2c] + 0x10) + 1;
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(param_1[0x2c] + 0x10) = uVar1;
  (**(code **)(*param_1 + 0x13c))(param_1);
  fn_0068ab44(param_1,0x1000950);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00410e58(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 local_38 [4];
  undefined4 *local_28;
  
  fn_002c3e78();
  iVar5 = param_1[0x2c];
  uVar1 = fn_006ba284(param_1);
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  iVar6 = 0;
  uVar1 = *(undefined4 *)(DAT_00897804 + 0x24);
  iVar5 = fn_006ba274(param_1);
  if (0 < iVar5) {
    do {
      uVar2 = (**(code **)(*param_1 + 0x144))(param_1,iVar6);
      iVar5 = fn_00163940();
      if (iVar5 == 0) {
        fn_002c32c4(param_1,iVar6,0);
        fn_0031b78c(param_1,iVar6,0,&DAT_00411134);
        fn_0031b78c(param_1,iVar6,4,&DAT_00411134);
      }
      else {
        uVar3 = fn_006b7a80(uVar1,uVar2);
        fn_002c32c4(param_1,iVar6,uVar3 ^ 1);
        fn_0023097c(&local_28,uVar2,0);
        fn_0031b78c(param_1,iVar6,0,local_28);
        iVar5 = fn_006ccfd4(param_1,uVar2);
        if (iVar5 == 0) {
          local_38[0] = _DAT_00893944;
          fn_002c37e0(param_1,iVar6,local_38);
        }
        else {
          local_38[0] = _DAT_0089393c;
          fn_002c37e0(param_1,iVar6,local_38);
        }
        iVar5 = (**(code **)(*param_1 + 0x154))(param_1,iVar6);
        if (-1 < iVar5) {
          fn_002c3df8(param_1,iVar6,4,iVar5);
        }
        if (local_28 != &DAT_008f9cf4) {
          piVar4 = local_28 + -3;
          iVar5 = *piVar4;
          if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
            fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = fn_006ba274(param_1);
    } while (iVar6 < iVar5);
  }
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_00410d8c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  
  fn_00410b58();
  iVar4 = -1;
  iVar1 = (**(code **)(*param_1 + 0x144))(param_1,param_2);
  uVar6 = fn_00163940((int)(short)param_1[0x33]);
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  bVar5 = (int)uVar6 != 0;
  if (bVar5) {
    iVar2 = (int)(short)param_1[0x33];
  }
  if (bVar5 && iVar2 != iVar1) {
    fn_00289d5c(*(undefined4 *)(DAT_00897804 + 0x24));
    iVar3 = 0;
    iVar2 = fn_006ba274(param_1);
    if (0 < iVar2) {
      do {
        iVar2 = (**(code **)(*param_1 + 0x144))(param_1,iVar3);
        if (iVar2 == (short)param_1[0x33]) {
          iVar4 = iVar3;
          break;
        }
        iVar3 = iVar3 + 1;
        iVar2 = fn_006ba274(param_1);
      } while (iVar3 < iVar2);
    }
  }
  *(short *)(param_1 + 0x33) = (short)iVar1;
  if (iVar4 < 0) {
    return;
  }
  fn_002c32c4(param_1,iVar4,0);
  return;
}



void fn_00410d44(undefined4 param_1)

{
  fn_00410ac0();
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_00410d14(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x144))();
  fn_00289d5c(*(undefined4 *)(DAT_00897804 + 0x24),uVar1);
  return;
}



undefined4 fn_00410d04(void)

{
  fn_00410868();
  return 1;
}



void fn_00410cac(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0083857c;
  uVar1 = param_1[0x2d];
  uVar2 = uVar1;
  if ((uint)param_1[0x2e] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x2e]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x2f] - uVar1) >> 4,0);
  fn_002c471c(param_1);
  return;
}



void fn_00410c48(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0083857c;
  uVar1 = param_1[0x2d];
  uVar2 = uVar1;
  if ((uint)param_1[0x2e] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x2e]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x2f] - uVar1) >> 4,0);
  fn_002c471c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_00410bb8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &PTR_FUN_0083857c;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x200,0);
  iVar3 = 3;
  puVar1[0x2d] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 4;
  } while (iVar3 != 0);
  iVar3 = puVar1[0x2d];
  puVar1[0x2e] = iVar3 + 0x30;
  puVar1[0x2f] = iVar3 + 0x200;
  return puVar1;
}


