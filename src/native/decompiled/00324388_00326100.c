#include "00324388_00326100.h"



void fn_00326100(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    if (param_1[0x34] < 1) {
      iVar2 = param_1[0x34] + 1;
    }
    else {
      iVar2 = 0;
    }
    param_1[0x34] = iVar2;
  }
  uVar1 = (**(code **)(*param_1 + 0x168))(param_1);
  fn_0022e4c4(param_1 + 0x38,uVar1);
  (**(code **)(*param_1 + 0x15c))(param_1);
  (**(code **)(*param_1 + 0x164))(param_1);
  if (param_3 == 0) {
    fn_0068ab44(param_1,0x1000950);
    return;
  }
  return;
}



void fn_00326048(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  sVar1 = (**(code **)(*param_1 + 0x17c))(param_1);
  iVar2 = fn_002298d8(*(undefined4 *)(DAT_00897804 + 0x14),(int)sVar1);
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1[0x33] + 0x3c) * iVar2;
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (0 < iVar2) {
    fn_00101a50(&local_28,0xc,&DAT_003260f8);
  }
  fn_0031b78c(param_1,param_1[0x35] % 8,4,&local_28);
  return;
}



void fn_00325e7c(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint local_28;
  
  iVar2 = fn_006ba284();
  uVar6 = param_2 + iVar2 * 8;
  uVar1 = param_1[0x39] - param_1[0x38] >> 1;
  local_28 = param_4;
  if (uVar1 <= uVar6) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6);
    local_28 = uVar1;
  }
  iVar7 = (int)*(short *)(param_1[0x38] + uVar6 * 2);
  iVar2 = fn_003e53e0(param_1,iVar7);
  iVar3 = fn_00660fe0(iVar7);
  iVar4 = fn_002298d8(*(undefined4 *)(DAT_00897804 + 0x14),iVar7);
  if (iVar3 == iVar2) {
    *(undefined4 *)(param_1[0x17] + 0x38) = 0x100094d;
    uVar5 = fn_0022f584((char *)&DAT_00326018,0);
    (**(code **)(*param_1 + 0x13c))(param_1,uVar5,0,3);
  }
  else {
    iVar2 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
    if (iVar2 < iVar4) {
      *(undefined4 *)(param_1[0x17] + 0x38) = 0x100094d;
      uVar5 = fn_0022f584((char *)&DAT_00326030,0);
      (**(code **)(*param_1 + 0x13c))(param_1,uVar5,0,3);
    }
    else {
      iVar2 = fn_006cb910(param_1,iVar7);
      if (iVar2 == 0) {
        fn_003e5958(param_1,param_2);
      }
      else {
        *(int *)(param_1[0x2c] + 8) = iVar7;
        fn_006899f4(param_1,0x8e,0);
      }
      fn_0068ab44(param_1,0x100094b);
    }
  }
  fn_00289d5c(*(undefined4 *)(DAT_00897804 + 0x24),(int)(short)param_1[0x3b]);
  fn_002c32c4(param_1,param_2,0,local_28);
  return;
}



void fn_00325d64(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  fn_0034d7dc();
  fn_003261bc(param_1,param_2);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x6c))();
  if (-1 < iVar2) {
    fn_002c32c4(param_1,iVar2,0);
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x34))();
  if ((iVar2 == 0) && (iVar2 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x38))(), iVar2 == 0)) {
    if (*(int *)(param_1 + 0xec) != 0) {
      fn_00289d5c(*(undefined4 *)(DAT_00897804 + 0x24),(int)(short)*(int *)(param_1 + 0xec));
    }
    iVar2 = fn_006ba284(param_1);
    uVar3 = param_2 + iVar2 * 8;
    uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 1;
    if (uVar1 <= uVar3) {
      fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar3,uVar1);
    }
    *(int *)(param_1 + 0xec) = (int)*(short *)(*(int *)(param_1 + 0xe0) + uVar3 * 2);
  }
  return;
}



void fn_00325d20(int param_1)

{
  fn_00289d5c(*(undefined4 *)(DAT_00897804 + 0x24),(int)*(short *)(param_1 + 0xec));
  fn_003e5a94(param_1);
  fn_006899f4(param_1,0x8b,0);
  return;
}



void fn_00325c24(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0xd4);
  uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 1;
  if (uVar1 <= uVar2) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar2,uVar1);
  }
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0xe0) + uVar2 * 2);
  fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14),iVar3,
               (int)*(short *)(*(int *)(param_1 + 0xcc) + 0x3c));
  iVar3 = fn_002298d8(*(undefined4 *)(DAT_00897804 + 0x14),iVar3);
  *(int *)(param_1 + 0xc4) = -(iVar3 * *(int *)(*(int *)(param_1 + 0xcc) + 0x3c));
  return;
}



int fn_00325b78(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(param_1 + 0xd4);
  uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 1;
  if (uVar1 <= uVar6) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar1);
  }
  iVar7 = (int)*(short *)(*(int *)(param_1 + 0xe0) + uVar6 * 2);
  iVar2 = fn_003e53e0(param_1,iVar7);
  iVar3 = fn_00660fe0(iVar7);
  uVar4 = fn_002298d8(*(undefined4 *)(DAT_00897804 + 0x14),iVar7);
  uVar5 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  iVar7 = fn_00300f74(uVar5,uVar4);
  if (iVar3 < iVar7 + iVar2) {
    iVar7 = iVar3 - iVar2;
  }
  return iVar7;
}



void fn_00325b44(int *param_1)

{
  (**(code **)(*param_1 + 0x124))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00325b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x16c))(param_1,1,0);
  return;
}



undefined4 fn_003257a8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x8b);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894f2c) goto LAB_003257f0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003257f0:
  *(undefined4 **)(param_1 + 0xb0) = puVar1;
  fn_00666698();
  fn_0034d2b0(param_1);
  return 1;
}



void fn_00324598(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    fn_0036e168(param_1,param_2);
    if (4 < param_2) {
      return;
    }
    fn_00689824(param_1,0);
    uVar2 = 7;
    *(uint *)(param_1 + 0x10c) = param_2;
  }
  else {
    iVar1 = fn_0030e3e0(*(undefined4 *)(param_1 + 0xec));
    if (iVar1 == 0) {
      fn_0036e15c(param_1);
      fn_006899f4(param_1,0xcd,0,1);
      *(undefined4 *)(param_1 + 0xd8) = 0x1f;
      goto LAB_003245fc;
    }
    fn_00689824(param_1,0);
    uVar2 = 8;
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
LAB_003245fc:
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00324568(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x144,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003252b8(iVar1,param_1);
  return;
}



void fn_0032453c(int param_1)

{
  fn_0036e15c();
  fn_006899f4(param_1,0xcd,0,1);
  *(undefined4 *)(param_1 + 0xd8) = 0x1f;
  return;
}



void fn_00324388(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  
  if (*(int *)(param_1 + 300) == 0) {
    fn_0030e740(*(undefined4 *)(param_1 + 0xec));
    *(undefined4 *)(param_1 + 300) = 1;
  }
  else if (*(int *)(param_1 + 300) == 1) {
    iVar1 = fn_006b7258(*(undefined4 *)(param_1 + 0xec));
    if (iVar1 == 0) {
      uVar2 = fn_0030e4dc(*(undefined4 *)(param_1 + 0xec),8);
      fn_0030e8d4(*(undefined4 *)(param_1 + 0xec),uVar2);
      iVar1 = fn_0030e4dc(*(undefined4 *)(param_1 + 0xec),8);
      bVar4 = -1 < iVar1;
      if (bVar4) {
        uVar2 = 0;
        *(undefined4 *)(param_1 + 300) = 0;
      }
      else {
        uVar2 = 0x1d;
      }
      uVar3 = (uint)bVar4;
      if (!bVar4) {
        *(undefined4 *)(param_1 + 0xd8) = uVar2;
        do {
          iVar1 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar3);
          if ((iVar1 != 0) &&
             ((iVar1 = fn_0030e6bc(*(undefined4 *)(param_1 + 0xec),uVar3), iVar1 == -1 ||
              (iVar1 = fn_006c48e0(*(undefined4 *)(param_1 + 0xec),uVar3), iVar1 == 1)))) {
            fn_0031b78c(param_1,uVar3,0,&DAT_00324ef8);
            fn_0030e38c(*(undefined4 *)(param_1 + 0xec),uVar3);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < 5);
        goto LAB_003244a8;
      }
    }
    else {
      iVar1 = fn_006b72c0();
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x104) = 1;
        *(undefined4 *)(param_1 + 0xe4) = 0x1e;
        *(undefined4 *)(param_1 + 0xd8) = 0x1a;
        fn_0036c340(*(undefined4 *)(param_1 + 0x5c));
LAB_003244a8:
        *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 0;
        return;
      }
    }
  }
  return;
}


