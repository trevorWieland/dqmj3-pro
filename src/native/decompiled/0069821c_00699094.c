#include "0069821c_00699094.h"



/* WARNING: Removing unreachable block (ram,0x00699124) */
/* WARNING: Removing unreachable block (ram,0x00699130) */
/* WARNING: Removing unreachable block (ram,0x00699150) */

void fn_00699094(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x1c);
  iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),"L00_00");
  iStack_40 = *(int *)(param_1 + 0xa8);
  if (iStack_40 != iVar1) {
    uStack_3c = (uint)*(byte *)(param_1 + 0xac);
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4) +
                    4);
    uStack_38 = *(undefined4 *)(iVar1 + 0x20);
    uStack_34 = *(undefined4 *)(iVar1 + 0x24);
    uStack_30 = *(undefined4 *)(iVar1 + 0x28);
    fn_002426c8(uVar2,(int)*(char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                                       *(int *)(param_1 + 0x60) * 4) + 4) + 0x208));
    uStack_2c = *(undefined4 *)
                 (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                   *(int *)(param_1 + 0x60) * 4) + 4) + 0x30);
    uStack_28 = *(undefined4 *)(param_1 + 0xc0);
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                             *(int *)(param_1 + 0x70) * 4) + 0x30) + 0x24) + 0x24))
              ();
    uStack_1c = (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                                         *(int *)(param_1 + 0x70) * 4) + 0x30) +
                                       0x28) + 0x24))();
    uStack_24 = *(undefined4 *)(param_1 + 0xd8);
    uStack_18 = *(undefined4 *)(param_1 + 0xdc);
    fn_002425c0(uVar2,&iStack_40);
  }
  return;
}



void fn_00698fb8(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x170) != param_2) {
    if (*(char *)(param_1 + 0x170) == 0) {
      fn_00699014(param_1,0);
    }
    else if (param_2 == 0) {
      fn_00699014(param_1,1);
    }
    *(char *)(param_1 + 0x170) = (char)param_2;
  }
  return;
}



undefined4 fn_00698ae0(int param_1)

{
  int iVar1;
  
  fn_001e7f8c(*(undefined4 *)
                (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                         *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
  if (*(int *)(param_1 + 0x174) == 0) {
    if (*(char *)(param_1 + 0x170) != '\x01') {
      if (*(char *)(param_1 + 0x170) == '\0') {
        fn_00699014(param_1,0);
      }
      *(undefined1 *)(param_1 + 0x170) = 1;
    }
    iVar1 = fn_006f7ad0(param_1,1);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x174) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x174) == 1) {
    if (*(char *)(param_1 + 0x170) != -1) {
      if (*(char *)(param_1 + 0x170) == '\0') {
        fn_00699014(param_1,0);
      }
      *(undefined1 *)(param_1 + 0x170) = 0xff;
    }
    if (*(code **)(param_1 + 0x1d0) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x1d0))();
      if (*(char *)(param_1 + 0x1a5) != '\0') {
        *(undefined4 *)(param_1 + 0x1d0) = 0;
        *(undefined1 *)(param_1 + 0x1a5) = 0;
      }
      if (iVar1 == 0) {
        return 0;
      }
    }
    *(undefined1 *)
     (*(int *)(*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x60) * 4
                       ) + 4) + 0x3e1) = 1;
    iVar1 = fn_002d8370(0xffffffff);
    if (iVar1 != 0) {
      fn_002d8628(*(undefined4 *)
                    (*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x90) * 4));
    }
    return 1;
  }
  return 0;
}



void fn_00698a78(int param_1)

{
  *(undefined1 *)(param_1 + 0x16c) = 7;
  *(undefined1 *)(param_1 + 0x16e) = 0xff;
  if (*(char *)(param_1 + 0x170) != '\0') {
    fn_00699014(param_1,1);
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  fn_00699014(param_1,1);
  fn_003b682c(param_1);
  *(code **)(param_1 + 0x178) = fn_00698534;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  return;
}



void fn_0069895c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar1 = (undefined4 *)fn_006b519c(*(undefined4 *)(DAT_00897804 + 0x1c));
  fn_0011a24c(&local_50);
  local_50 = *puVar1;
  uVar3 = 3;
  iVar2 = fn_006af880(*(undefined4 *)(DAT_008977e0 + 0x1c),*puVar1);
  if (iVar2 != 0) {
    uVar3 = 6;
  }
  local_48 = puVar1[2];
  uStack_44 = puVar1[3];
  uStack_40 = puVar1[4];
  local_3c = puVar1[5];
  local_38 = puVar1[6];
  local_20 = puVar1[7];
  local_2c = puVar1[8];
  local_28 = *(undefined1 *)(puVar1 + 9);
  local_1c = puVar1[10];
  local_4c = uVar3;
  fn_006949f8(param_1,&local_50);
  iVar2 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006f7564);
  if (*(int *)(param_1 + 0xa8) != iVar2) {
    fn_002dbcec(1);
  }
  *(code **)(param_1 + 0x178) = fn_00698534;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  if (*(char *)(param_1 + 0x170) != '\0') {
    fn_00699014(param_1,1);
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  fn_00699014(param_1,1);
  fn_003b682c(param_1);
  return;
}



void fn_00698910(int param_1)

{
  undefined1 auStack_40 [56];
  
  fn_0011a24c(auStack_40);
  fn_006f76f0(param_1,auStack_40);
  fn_006949f8(param_1,auStack_40);
  *(undefined1 *)(param_1 + 0x16c) = 0xff;
  *(undefined1 *)(param_1 + 0x16e) = 0;
  fn_00694a10(param_1);
  return;
}



undefined4 fn_0069842c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x174) == 0) {
    if (*(char *)(param_1 + 0x170) != '\x01') {
      if (*(char *)(param_1 + 0x170) == '\0') {
        fn_00699014(param_1,0);
      }
      *(undefined1 *)(param_1 + 0x170) = 1;
    }
    fn_001e7fd8(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
    *(undefined4 *)(param_1 + 0x174) = 1;
  }
  else if (*(int *)(param_1 + 0x174) == 1) {
    fn_001e80d8(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
    iVar1 = fn_006f7ad0(param_1,1);
    if (iVar1 != 0) {
      fn_001e7f80(*(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                             *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
      if (*(char *)(param_1 + 0x170) != -1) {
        if (*(char *)(param_1 + 0x170) == '\0') {
          fn_00699014(param_1,0);
        }
        *(undefined1 *)(param_1 + 0x170) = 0xff;
      }
      return 1;
    }
  }
  return 0;
}



void fn_006983e4(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  bVar2 = -1 < iVar1;
  if (bVar2) {
    iVar1 = (int)*(char *)(param_1 + 0x108);
  }
  if ((bVar2 && -1 < iVar1) && (iVar1 = fn_006f612c(*(undefined4 *)(param_1 + 0x3c)), iVar1 == 0))
  {
    return;
  }
  fn_0068326c(*(undefined4 *)(param_1 + 0x3c));
  return;
}



undefined4 fn_0069821c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uStack_18;
  
  iVar1 = *(int *)(param_1 + 0x174);
  uStack_18 = param_4;
  if (iVar1 == 0) {
    if ((*(int **)(param_1 + 0x28) != (int *)0x0) &&
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x2c))(), iVar1 != 0)) {
      return 0;
    }
    uVar2 = 1;
  }
  else {
    if (iVar1 == 1) {
      if (*(char *)(param_1 + 0x170) != '\x01') {
        if (*(char *)(param_1 + 0x170) == '\0') {
          fn_00699014(param_1,0);
        }
        *(undefined1 *)(param_1 + 0x170) = 1;
      }
      fn_001e80b0(*(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                             *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
      *(undefined4 *)(param_1 + 0x174) = 2;
      return 0;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 0;
      }
      iVar1 = fn_006f7ad0(param_1,1);
      if (iVar1 == 0) {
        return 0;
      }
      fn_001e8094(*(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                             *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
      fn_00694a10(param_1);
      return 1;
    }
    iVar1 = fn_001e8138(*(undefined4 *)
                          (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                                   *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = fn_001603f8(&uStack_18,0xffffffff);
    fn_00163988(DAT_00897808,uVar2,0x14);
    uVar2 = fn_001603f8(&uStack_18,0xffffffff);
    fn_00163988(DAT_0089780c,uVar2,0x14);
    iVar1 = *(int *)(param_1 + 0xe0);
    bVar3 = iVar1 < 0;
    if (!bVar3) {
      iVar1 = (int)*(char *)(param_1 + 0x108);
    }
    if ((bVar3 || iVar1 < 0) || (iVar1 = fn_006f612c(*(undefined4 *)(param_1 + 0x3c)), iVar1 != 0))
    {
      fn_0068326c(*(undefined4 *)(param_1 + 0x3c));
    }
    uVar2 = 3;
  }
  *(undefined4 *)(param_1 + 0x174) = uVar2;
  return 0;
}



void fn_00699014(int param_1,int param_2)

{
  undefined1 uVar1;
  
  fn_00300950(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4),
               param_2);
  fn_00684268(*(undefined4 *)
                (*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x70) * 4),
               param_2);
  fn_001f634c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x9c) * 4),
               param_2);
  fn_0023daa0(*(undefined4 *)(param_1 + 0x2c),param_2);
  if (param_2 == 0) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x170) = uVar1;
  return;
}


