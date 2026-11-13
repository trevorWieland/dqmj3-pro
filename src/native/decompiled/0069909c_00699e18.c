#include "0069909c_00699e18.h"



void fn_00699b60(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00699b18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_50 [4];
  undefined1 local_4c;
  undefined4 local_1c;
  
  fn_0011a24c(auStack_50);
  local_4c = 1;
  local_1c = param_4;
  fn_00696df4(param_1,param_2,param_3,auStack_50);
  return;
}



void fn_00699a64(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 10) {
    fn_006941e8(DAT_008977e0,9,1);
    return;
  }
  if (*(char *)(param_1 + 0x170) != '\0') {
    fn_00699014(param_1,1);
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  *(char *)(*(int *)(param_1 + 0x24) + 0x2c) = (char)param_2;
  (**(code **)(**(int **)(param_1 + 0x28) + 0x1c))();
  iVar1 = fn_00304c94(*(undefined4 *)(DAT_008977e0 + 0x94));
  if (iVar1 == 0) {
    fn_003048dc(*(undefined4 *)(DAT_008977e0 + 0x94));
  }
  fn_00128744(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x80) * 4),6
              );
  fn_00692f98(*(undefined4 *)(param_1 + 0x40));
  return;
}



void fn_00699648(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iStack_18;
  
  iStack_18 = param_4;
  if (param_3 != 0) {
    uVar1 = fn_001603f8(&iStack_18);
    fn_00163988(DAT_00897808,uVar1,param_5);
  }
  if (param_4 != 0) {
    uVar1 = fn_001603f8(&iStack_18,param_2);
    fn_00163988(DAT_0089780c,uVar1,param_5);
  }
  return;
}



int fn_00699374(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  switch(*(undefined1 *)(param_1 + 0x16f)) {
  case 0:
    fn_00694b7c(param_1);
    fn_00699c5c(param_1);
  case 1:
    if ((*(int *)(param_1 + 200) == 0) &&
       (iVar2 = fn_006ac0d8(*(undefined4 *)(param_1 + 0x30),5), iVar2 == 0)) {
      cVar1 = *(char *)(param_1 + 0x16c);
      if (((cVar1 != '\x02' && cVar1 != '\0') && cVar1 != '\a') &&
         (*(char *)(param_1 + 0x218) == '\0')) {
        iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                       *(int *)(param_1 + 0x88) * 4) + 0x68))();
        if ((iVar2 == 0) &&
           ((iVar2 = fn_006f6fc4(*(undefined4 *)(param_1 + 0x40)), iVar2 == 0 ||
            (iVar2 = fn_006b8e04(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10)), iVar2 == 0))))
        {
          fn_00128744(*(undefined4 *)
                        (*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x80) * 4),0);
        }
        iVar2 = *(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 100) * 4
                        );
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 8;
      }
      *(undefined1 *)(param_1 + 0x16f) = 2;
    }
  case 2:
    fn_00698c7c(param_1);
    break;
  case 3:
    if (*(int *)(param_1 + 0x2c) != 0) {
      fn_0023db04();
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      fn_001c93c8();
    }
    *(undefined1 *)(param_1 + 0x16f) = 0;
    iVar3 = (int)*(char *)(param_1 + 0x16c);
    break;
  case 4:
    fn_00699ba8(param_1,0);
  }
  return iVar3;
}



undefined4 fn_00699c5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x16d) < '\x02') {
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0xac);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0xdc);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xe4);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xec);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xfc);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x10c);
    fn_0011a24c(param_1 + 0xe0);
  }
  if (((((-1 < *(char *)(param_1 + 0x16d)) || (iVar1 = fn_006956f4(param_1), uVar2 = 0, iVar1 != 0)
        ) && (('\0' < *(char *)(param_1 + 0x16d) ||
              (iVar1 = fn_00699e18(param_1), uVar2 = 0, iVar1 != 0)))) &&
      (('\x01' < *(char *)(param_1 + 0x16d) ||
       (iVar1 = fn_006996b0(param_1), uVar2 = 0, iVar1 != 0)))) &&
     (('\x02' < *(char *)(param_1 + 0x16d) || (iVar1 = fn_00694648(param_1), uVar2 = 0, iVar1 != 0)
      ))) {
    *(undefined1 *)(param_1 + 0x16d) = 3;
    *(undefined1 *)(param_1 + 0x16c) = 0xff;
    if (*(int *)(param_1 + 200) == 0) {
      fn_001f0fb4(*(undefined4 *)(param_1 + 0x30),5,0);
      *(undefined1 *)(param_1 + 0x16f) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x16f) = 2;
    }
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_00699e18(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  if ((*(code **)(param_1 + 0x1b0) != (code *)0x0) &&
     ((**(code **)(param_1 + 0x1b0))(), *(char *)(param_1 + 0x19d) != '\0')) {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    *(undefined1 *)(param_1 + 0x19d) = 0;
  }
  fn_00176fb0(param_1 + 0x164);
  fn_00176fb0(param_1 + 0x154,param_1 + 0x15c);
  fn_0011a300(param_1 + 0x15c);
  if (*(int *)(param_1 + 0x154) == 0) {
    iVar3 = fn_006b5184(*(undefined4 *)(DAT_00897804 + 0x1c));
    iVar2 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 0xa8));
    bVar5 = iVar2 == -1 || iVar2 == iVar3;
    if (iVar2 == -1 || iVar2 == iVar3) {
      bVar5 = *(int *)(param_1 + 0x164) == 0;
    }
    if (!bVar5) {
      uVar4 = *(undefined4 *)(DAT_00897804 + 0x1c);
      fn_002425a8(uVar4);
      fn_00242784(uVar4);
      uVar1 = fn_005f65d4();
      fn_00242778(uVar4,uVar1);
      fn_00365c70(*(undefined4 *)
                    (*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 100) * 4));
    }
    iVar3 = fn_002fb6ec();
    if (iVar3 != 0) {
      fn_00242784(*(undefined4 *)(DAT_00897804 + 0x1c));
      fn_002fb6fc(0);
    }
  }
  else {
    fn_0069344c(*(undefined4 *)(param_1 + 0x40),param_1 + 0x154);
    *(code **)(param_1 + 0x178) = fn_00697860;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    uVar1 = fn_006f6e50(*(undefined4 *)(param_1 + 0x40));
    uVar1 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar1);
    uVar4 = *(undefined4 *)(DAT_00897804 + 0x1c);
    fn_002425a8(uVar4,uVar1);
    fn_00242784(uVar4);
    uVar1 = fn_005f65d4();
    fn_00242778(uVar4,uVar1);
    uVar1 = fn_006f6e50(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0xa8) = uVar1;
    fn_00365c70(*(undefined4 *)
                  (*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 100) * 4));
  }
  fn_002b04a4(*(undefined4 *)(param_1 + 4));
  iVar3 = fn_006f6fc4(*(undefined4 *)(param_1 + 0x40));
  if (iVar3 != 0) {
    uVar1 = fn_006f6f28(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0xa8) = uVar1;
  }
  return 1;
}



void fn_006992a0(int param_1)

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
  return;
}



void fn_0069922c(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = in_r3;
  uVar1 = fn_001603f8(auStack_8,0);
  fn_00163988(DAT_00897808,uVar1,0x14);
  uVar1 = fn_001603f8(auStack_8,0);
  fn_00163988(DAT_0089780c,uVar1,0x14);
  uVar1 = fn_001603f8(auStack_8,0);
  fn_00163988(DAT_00897810,uVar1,0x14);
  return;
}



void fn_0069909c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float in_s0;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x1c);
  iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006f7564);
  local_40 = *(int *)(param_1 + 0xa8);
  if (local_40 != iVar1) {
    local_3c = (uint)*(byte *)(param_1 + 0xac);
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4) +
                    4);
    local_38 = *(undefined4 *)(iVar1 + 0x20);
    local_34 = *(float *)(iVar1 + 0x24);
    uStack_30 = *(undefined4 *)(iVar1 + 0x28);
    if (param_2 == 0) {
      fn_002426c8(uVar2,(int)*(char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                                         *(int *)(param_1 + 0x60) * 4) + 4) + 0x208)
                  );
    }
    else {
      iVar1 = fn_006aba74();
      if ((iVar1 != 0) &&
         (iVar1 = fn_006a99b0(*(undefined4 *)
                                (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                         *(int *)(param_1 + 0x60) * 4) + 4)), iVar1 != 0)) {
        in_s0 = *(float *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                            *(int *)(param_1 + 0x60) * 4) + 4) + 0x10c) + local_34;
        local_34 = in_s0;
      }
    }
    local_2c = *(undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                  *(int *)(param_1 + 0x60) * 4) + 4) + 0x30);
    local_28 = *(undefined4 *)(param_1 + 0xc0);
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                             *(int *)(param_1 + 0x70) * 4) + 0x30) + 0x24) + 0x24))
              ();
    local_20 = in_s0;
    local_1c = (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                                        *(int *)(param_1 + 0x70) * 4) + 0x30) + 0x28
                                      ) + 0x24))();
    local_24 = *(undefined4 *)(param_1 + 0xd8);
    local_18 = *(undefined4 *)(param_1 + 0xdc);
    fn_002425c0(uVar2,&local_40);
  }
  return;
}


