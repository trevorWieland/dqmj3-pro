#include "004ea54c_004eaf3c.h"



void fn_004eaf3c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00856b48;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0xff;
  param_1[3] = 200;
  *(undefined2 *)(param_1 + 4) = 0x14;
  param_1[5] = 5000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar1 = fn_00101a1c(param_1 + 0xd,&LAB_004ea138,0x14,0x10);
  iVar1 = fn_004edc74(iVar1 + 0x140,0xffffffff);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x4bd0) = 0;
  *(undefined4 *)(iVar1 + 0x4bd4) = 0;
  *(undefined1 *)(iVar1 + 0x4bd8) = 0;
  *(undefined4 *)(iVar1 + 0x71bc) = 0;
  *(undefined1 *)(iVar1 + 0x71c0) = 0;
  return;
}



void fn_004eae34(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  do {
    iVar3 = param_1 + uVar1 * 0x14;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(undefined4 *)(iVar3 + 0x44) = 0;
    if (*(int *)(iVar3 + 0x34) - 0x100000U < 0x3ff00000) {
      if (*(int *)(iVar3 + 0x34) != 0) {
        fn_00656b7c();
      }
      *(undefined4 *)(iVar3 + 0x34) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar2 + -0x40000 < (undefined4 *)0x3ff00000) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      fn_00656b7c(puVar2);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 + -0x40000 < (undefined4 *)0x3ff00000) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      fn_00656b7c(puVar2);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 - 0x100000U < 0x3ff00000) {
    if (iVar3 != 0) {
      fn_00656b7c(iVar3);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



undefined1 * fn_004eaca0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = fn_006d897c(*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    iVar1 = fn_006d88c8(*(undefined4 *)(param_1 + 0x18));
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 8))(*(int **)(param_1 + 0x18),1);
    }
    puVar2 = (undefined1 *)
             fn_004e97b0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    if (-1 < (int)puVar2) {
      fn_004efcf4(*(undefined4 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x4d44) = 0;
      *(undefined4 *)(param_1 + 0x4d48) = 0;
      *(undefined1 *)(param_1 + 0x4d4c) = 0;
      *(undefined4 *)(param_1 + 0x7330) = 0;
      *(undefined1 *)(param_1 + 0x7334) = 0;
      return (undefined1 *)0x0;
    }
  }
  else {
    puVar2 = &DAT_e0a14827;
  }
  return puVar2;
}



void fn_004eac20(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    iVar2 = param_1 + iVar2 * 0x14;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    iVar2 = iVar1;
  } while (iVar1 < 0x10);
  if (*(int *)(param_1 + 0x18) - 0x100000U < 0x3ff00000) {
    fn_004e973c();
                    /* WARNING: Could not recover jumptable at 0x004eac94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x18) + 8))(*(int **)(param_1 + 0x18),0);
    return;
  }
  return;
}



void fn_004eabac(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x4d44);
  uVar3 = 0;
  *(uint *)(param_1 + 0x4d48) = uVar1;
  if (uVar1 != 0) {
    do {
      iVar2 = param_1 + uVar3 * 0x328;
      fn_0017821c(iVar2 + 0x2764,iVar2 + 0x184,0x328);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x4d48));
  }
  *(uint *)(param_1 + 0x4d44) = 0;
  *(undefined1 *)(param_1 + 0x4d4c) = 0;
  return;
}



void fn_004ea99c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + 0x4d48);
  if (*puVar3 != 0) {
    uVar2 = 0;
    do {
      iVar1 = param_1 + uVar2 * 0x328;
      (**(code **)(**(int **)(DAT_008bf504 + 0x14) + 0x1c))
                (*(int **)(DAT_008bf504 + 0x14),iVar1 + 0x2764,*(undefined4 *)(iVar1 + 0x2a84),
                 *(undefined2 *)(iVar1 + 0x2a8a));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *puVar3);
    *puVar3 = 0;
  }
  return;
}



void fn_004ea91c(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x7330) < 0xc) {
    iVar1 = param_1 + *(uint *)(param_1 + 0x7330) * 0x328;
    fn_00301a9c(iVar1 + 0x4d50,param_2,param_4);
    *(undefined4 *)(iVar1 + 0x5070) = param_4;
    *(undefined1 *)(iVar1 + 0x5074) = param_3;
    *(undefined2 *)(iVar1 + 0x5076) = param_5;
    if (*(char *)(param_1 + 0x7334) == '\0') {
      *(undefined1 *)(param_1 + 0x7334) = 1;
    }
    *(int *)(param_1 + 0x7330) = *(int *)(param_1 + 0x7330) + 1;
  }
  return;
}



undefined4
fn_004ea86c(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,undefined2 param_5
            )

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + 0x4d44);
  if (*puVar3 < 0xc) {
    iVar2 = param_1 + *puVar3 * 0x328;
    fn_00301a9c(iVar2 + 0x184,param_2,param_4);
    *(undefined4 *)(iVar2 + 0x4a4) = param_4;
    *(undefined1 *)(iVar2 + 0x4a8) = param_3;
    *(undefined2 *)(iVar2 + 0x4aa) = param_5;
    if (*(char *)(param_1 + 0x4d4c) == '\0') {
      *(undefined1 *)(param_1 + 0x4d4c) = 1;
    }
    *puVar3 = *puVar3 + 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xd861482c;
  }
  return uVar1;
}



void fn_004ea6b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [4];
  int local_54;
  ushort local_4a;
  ushort local_48;
  int local_44;
  undefined1 auStack_40 [4];
  int local_3c;
  undefined4 local_2c;
  
  bVar5 = *(char *)(param_2 + 0x324) == '\x14';
  puVar1 = (undefined4 *)fn_004dbe24(auStack_58,param_2,800);
  *puVar1 = &DAT_00856b18;
  puVar1[5] = 0;
  *(undefined2 *)((int)puVar1 + 0xe) = 0x10;
  *(undefined1 *)(puVar1 + 3) = 0x14;
  iVar2 = fn_004dbcf0(auStack_58);
  if (iVar2 != 0) {
    local_44 = *(int *)(local_54 + 0xc);
    iVar2 = fn_006d5cf0(DAT_008bf504);
    if ((iVar2 == 0) && (((uint)local_4a + (uint)local_48 & 0xffff) == *(uint *)(param_2 + 800))) {
      if (0 < local_44 - *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x2c) = local_44;
        *(bool *)(param_1 + 0x24) = bVar5;
        if (!bVar5) {
          fn_004edc34(param_1 + 0x174);
          iVar2 = 0;
          do {
            iVar3 = iVar2 + 1;
            iVar2 = param_1 + iVar2 * 0x14;
            *(undefined4 *)(iVar2 + 0x38) = 0;
            *(undefined4 *)(iVar2 + 0x3c) = 0;
            *(undefined4 *)(iVar2 + 0x40) = 0;
            *(undefined4 *)(iVar2 + 0x44) = 0;
            iVar2 = iVar3;
          } while (iVar3 < 0x10);
          fn_004edc70(param_1 + 0x174);
        }
      }
      uVar6 = *(undefined4 *)(param_1 + 0x2c);
      uVar4 = fn_006d6700(*(undefined4 *)(DAT_008bf504 + 0x14),*(undefined2 *)(param_2 + 0x326));
      iVar2 = *(int *)(DAT_008bf504 + 0x14) + 0x48;
      fn_004edc34(iVar2);
      puVar1 = (undefined4 *)fn_004dbe24(auStack_40,*(int *)(DAT_008bf504 + 0x14) + 0x6c,0x5dc);
      *puVar1 = &DAT_00856b30;
      puVar1[5] = uVar6;
      *(undefined1 *)(puVar1 + 3) = 0x24;
      *(undefined2 *)((int)puVar1 + 0xe) = 0x10;
      fn_004dbd30(auStack_40);
      *(undefined4 *)(local_3c + 0xc) = local_2c;
      fn_004e21dc(*(undefined4 *)(DAT_008bf504 + 0x14),auStack_40,uVar4);
      fn_004edc70(iVar2);
    }
  }
  return;
}



void fn_004ea5f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  int local_2c;
  undefined4 local_1c;
  
  iVar2 = *(int *)(DAT_008bf504 + 0x14) + 0x48;
  fn_004edc34(iVar2);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  puVar1 = (undefined4 *)fn_004dbe24(auStack_30,*(int *)(DAT_008bf504 + 0x14) + 0x6c,0x5dc);
  *puVar1 = &DAT_00856b18;
  puVar1[5] = uVar3;
  *(undefined1 *)(puVar1 + 3) = 0x14;
  *(undefined2 *)((int)puVar1 + 0xe) = 0x10;
  fn_004dbd30(auStack_30);
  *(undefined4 *)(local_2c + 0xc) = local_1c;
  fn_004e21dc(*(undefined4 *)(DAT_008bf504 + 0x14),auStack_30,0xfe);
  fn_004edc70(iVar2);
  return;
}



void fn_004ea54c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  int local_2c;
  undefined4 local_1c;
  
  iVar2 = *(int *)(DAT_008bf504 + 0x14) + 0x48;
  fn_004edc34(iVar2);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  puVar1 = (undefined4 *)fn_004dbe24(auStack_30,*(int *)(DAT_008bf504 + 0x14) + 0x6c,0x5dc);
  *puVar1 = &DAT_00856b18;
  puVar1[5] = uVar3;
  *(undefined1 *)(puVar1 + 3) = 0x15;
  *(undefined2 *)((int)puVar1 + 0xe) = 0x10;
  fn_004dbd30(auStack_30);
  *(undefined4 *)(local_2c + 0xc) = local_1c;
  fn_004e21dc(*(undefined4 *)(DAT_008bf504 + 0x14),auStack_30,0xfe);
  fn_004edc70(iVar2);
  return;
}


