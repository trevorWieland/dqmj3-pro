#include "00375a4c_003824d8.h"



void fn_003824d8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_1 + 0x104) == '\0') {
    if (*(char *)(param_1 + 0x7c) == '\0') {
      puVar2 = (undefined4 *)fn_001f7510(param_1,0x49);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_008942dc) goto LAB_00382590;
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      puVar2 = (undefined4 *)0x0;
LAB_00382590:
      uVar4 = fn_0016ba34(DAT_00897800,DAT_0089877c,(char *)&DAT_003825f0,0);
      uVar5 = fn_0022eefc(0x1f5,0);
      fn_00321118(puVar2,uVar4,uVar5);
      fn_00689bd0(param_1,0x49,0);
      return;
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 0xc);
    if (*(char *)(param_1 + 0x105) != '\0') {
      if (*(int *)(param_1 + 0xd8) == iVar1) {
        iVar1 = 0;
      }
      *(int *)(param_1 + 0xd8) = iVar1;
      if ((iVar1 != 0) && (iVar1 == *(int *)(param_1 + 0xdc))) {
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
      fn_00381e08(param_1);
      fn_0068ab44(param_1,0x100094b);
      return;
    }
  }
  return;
}



undefined4 *
fn_0037b53c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  iVar3 = fn_00211c48(param_1,0x21);
  puVar4 = (undefined4 *)fn_00289390(iVar3 + 0x19c,iVar3);
  puVar4[9] = param_3;
  puVar4[8] = param_2;
  *puVar4 = &DAT_00828ea8;
  puVar4[-0x67] = &PTR_FUN_00828d64;
  *(undefined2 *)(puVar4 + 10) = param_4;
  puVar4[0xb] = 0;
  iVar5 = fn_00145b00(0x4c,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar5 != 0) {
    puVar6 = (undefined4 *)fn_00289284();
    *puVar6 = &DAT_008521d0;
    iVar3 = fn_001c6d34(puVar6 + 0xb);
    iVar3 = iVar3 + -0x2c;
  }
  puVar4[0xc] = iVar3;
  puVar4[0xd] = 0;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  *(undefined1 *)((int)puVar4 + 0x39) = 0;
  puVar4[0xf] = 0x3cf5c28f;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar1 = DAT_008f9e34;
  uVar7 = DAT_008f9e30;
  puVar4[0x10] = DAT_008f9e2c;
  puVar4[0x11] = uVar7;
  puVar4[0x12] = uVar1;
  *(undefined2 *)(puVar4 + 0x13) = 0;
  if (*(short *)(puVar4 + 10) < 1) {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = fn_002ea524();
  }
  *(undefined2 *)((int)puVar4 + 0x2a) = uVar2;
  uVar7 = fn_006b2b44(*(undefined4 *)(DAT_00897804 + 0x14),param_3,1);
  puVar4[3] = uVar7;
  return puVar4 + -0x67;
}



undefined4 * fn_00378838(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 in_r3;
  undefined4 local_20;
  
  local_20 = in_r3;
  puVar1 = (undefined4 *)fn_00338160();
  puVar1[5] = 0;
  *puVar1 = &DAT_00828b54;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined1 *)((int)puVar1 + 0x19) = 0;
  *(undefined1 *)((int)puVar1 + 0x1a) = 0;
  fn_0017481c(DAT_008977e4);
  uVar2 = fn_002539bc();
  iVar3 = fn_00145b00(8,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_005efdbc();
  }
  piVar6 = (int *)puVar1[5];
  if (piVar6 != piVar4) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    puVar1[5] = piVar4;
  }
  iVar3 = fn_0017481c(DAT_008977e4);
  if (((int)uVar2 < 0) || ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= uVar2)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 4) + uVar2 * 0x34;
  }
  fn_0069ee40(puVar1[5],iVar3,0);
  uVar5 = fn_0017fde4(puVar1[5]);
  fn_00183638(uVar5,0);
  local_20 = 0;
  uVar5 = fn_0017fde4(puVar1[5]);
  fn_0017fc08(uVar5,0,&local_20);
  *(undefined1 *)(puVar1 + 6) = 0;
  return puVar1;
}



void fn_00376140(int param_1)

{
  float *pfVar1;
  float in_s0;
  float local_10;
  float local_c;
  float local_8 [2];
  
  pfVar1 = &local_10;
  local_10 = *(float *)(param_1 + 8) + in_s0;
  *(float *)(param_1 + 8) = local_10;
  local_8[0] = *(float *)(param_1 + 0x10);
  local_c = *(float *)(param_1 + 0xc);
  if (local_c < local_8[0]) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  if (local_10 < local_8[0]) {
    pfVar1 = local_8;
  }
  if (local_c < *pfVar1) {
    pfVar1 = &local_c;
  }
  *(float *)(param_1 + 8) = *pfVar1;
  return;
}



void fn_00375a4c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  fn_0043c608();
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00893b10) goto LAB_00375a9c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00375a9c:
  *(undefined4 **)(param_1 + 0xd0) = puVar5;
  puVar5 = (undefined4 *)fn_00689c1c(param_1,0x5e);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00895b24) goto LAB_00375ae0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00375ae0:
  *(undefined4 **)(param_1 + 0xd4) = puVar5;
  fn_002d66f4(DAT_00897830);
  iVar2 = fn_00445fb8(*(undefined4 *)(param_1 + 0xd4));
  if (iVar2 == 0) {
    fn_00689878(param_1,0x5e);
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  else {
    iVar2 = fn_001f7e04(param_1,0x80);
    if (iVar2 == 0) {
      fn_00689878(param_1,0x80);
    }
    puVar5 = (undefined4 *)fn_00689c1c(param_1,0x80);
    if (puVar5 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
      do {
        if (puVar1 == &DAT_008964f4) goto LAB_00375b88;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar5 = (undefined4 *)0x0;
LAB_00375b88:
    *(undefined1 *)(puVar5 + 2) = 1;
    *(undefined4 *)(param_1 + 0xd8) = 1;
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_008963ac) goto LAB_00375bcc;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00375bcc:
  *(undefined4 **)(param_1 + 0xe0) = puVar5;
  **(undefined1 **)(puVar5[0xf] + 8) = 3;
  iVar2 = fn_0028eac0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),0x39);
  if (iVar2 == 0) {
    fn_00689930(param_1,0x39,0);
  }
  else {
    fn_0042f204(*(undefined4 *)(param_1 + 200),0);
  }
  iVar2 = fn_00145b00(0x9c,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    puVar5 = (undefined4 *)fn_005f62c0();
    puVar5[8] = &DAT_00859420;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    *puVar5 = &DAT_00859b38;
    iVar2 = fn_00119b40(puVar5 + 0x10);
    piVar3 = (int *)(iVar2 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar2 + 0x18,s_TaskFriendSearch_008c6e1a);
    *piVar3 = (int)&DAT_00859e2c;
    fn_00673a70(piVar3);
  }
  piVar4 = *(int **)(param_1 + 0xdc);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int **)(param_1 + 0xdc) = piVar3;
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


