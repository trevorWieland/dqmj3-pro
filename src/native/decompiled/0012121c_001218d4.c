#include "0012121c_001218d4.h"



void fn_001218d4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puStack_20;
  undefined1 auStack_1c [8];
  
  iVar1 = fn_0016752c(param_1,param_1 + 8,param_2);
  fn_00168a24(&puStack_20,*(undefined4 *)(iVar1 + 8),auStack_1c);
  iVar2 = *(int *)(iVar1 + 4) + -1;
  *(int *)(iVar1 + 4) = iVar2;
  if ((iVar2 != 0) || (fn_0017d90c(param_1 + 8,iVar1 + 0x10), iVar1 == 0)) goto LAB_00121994;
  puVar3 = *(undefined4 **)(iVar1 + 8);
  if (puVar3 != &DAT_008f9cf4) {
    piVar4 = puVar3 + -3;
    iVar2 = *piVar4;
    if (iVar2 == -1) {
LAB_00121974:
      iVar2 = *(int *)(iVar1 + 8);
      fn_001008c4(iVar2 + -0xc,*(int *)(iVar2 + -8) + 8,0);
    }
    else if (piVar4 != &DAT_008f9ce8) {
      *piVar4 = iVar2 + -1;
      if (iVar2 == 0) goto LAB_00121974;
    }
  }
  fn_002feef8(iVar1);
LAB_00121994:
  fn_00148b70(*(undefined4 *)(param_1 + 4),puStack_20);
  if (puStack_20 != &DAT_008f9cf4) {
    piVar4 = puStack_20 + -3;
    iVar1 = *piVar4;
    if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(puStack_20 + -3,puStack_20[-2] + 8,0);
    }
  }
  return;
}



undefined4 fn_00121838(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00118290();
  uVar1 = fn_0012e958(*(undefined4 *)(param_1 + 4),param_2,uVar1,param_3);
  iVar2 = fn_0016752c(param_1,param_1 + 8,param_2);
  if (iVar2 == 0) {
    iVar2 = fn_00145b00(0x18,&DAT_00812c8c);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_0012174c(iVar2,uVar1,param_2);
    }
    fn_0017d948(param_1 + 8,param_1 + 0xc,iVar2 + 0x10);
  }
  else {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  return uVar1;
}



undefined4 * fn_0012174c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  param_1[2] = &DAT_008f9cf4;
  piVar4 = param_1 + 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 1;
  *param_1 = param_2;
  iVar1 = fn_00100b58(param_3);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)*piVar4;
    piVar3 = puVar2 + -3;
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      puVar2[-1] = 0;
      *(undefined2 *)*piVar4 = 0;
    }
    else {
      if ((puVar2 != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(*piVar4 + -0xc,*(int *)(*piVar4 + -8) + 8,0);
      }
      *piVar4 = (int)&DAT_008f9cf4;
    }
  }
  else {
    fn_00177c88(piVar4,0,*(undefined4 *)(*piVar4 + -4),param_3,iVar1,0,iVar1);
  }
  param_1[3] = 0;
  return param_1;
}



void fn_00121688(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xe0) < 2) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (*(int *)(param_1 + 0xdc) != 0) {
      iVar1 = 0;
      do {
        iVar2 = param_1 + iVar1 * 0x38;
        fn_001433d8(iVar2 + 8);
        fn_0012d73c(*(undefined4 *)(iVar2 + 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < 2);
      if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xdc) + 4))();
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
    }
  }
  else {
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + -1;
  }
  return;
}



undefined4 fn_00121630(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18 [3];
  
  uVar2 = 0;
  local_18[0] = 0x30;
  local_18[1] = 0x36;
  do {
    iVar1 = fn_00154ac8(local_18[uVar2]);
    if (iVar1 != 0) break;
    uVar2 = (uint)(char)((char)uVar2 + '\x01');
  } while (uVar2 < 2);
  return (&DAT_007c449c)[uVar2];
}



undefined4 fn_0012162c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 auStack_18 [3];
  
  uVar2 = 0;
  auStack_18[0] = 0x30;
  auStack_18[1] = 0x36;
  do {
    iVar1 = fn_00154ac8(auStack_18[uVar2]);
    if (iVar1 != 0) break;
    uVar2 = (uint)(char)((char)uVar2 + '\x01');
  } while (uVar2 < 2);
  return (&DAT_007c449c)[uVar2];
}



void fn_0012154c(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  do {
    uVar6 = 0;
    iVar4 = param_1 + uVar7 * 0xc;
    if (*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 4 != 0) {
      do {
        puVar5 = (undefined4 *)(*(int *)(iVar4 + 0x1c) + uVar6 * 0x10);
        if (0 < (int)puVar5[3]) {
          fn_0012f208(param_1,puVar5[1]);
          fn_0012d73c(puVar5[2]);
          *puVar5 = 0xffffffff;
          puVar5[2] = 0;
          puVar5[1] = 0xffffffff;
          puVar5[3] = 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)(*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 4));
    }
    uVar3 = *(uint *)(iVar4 + 0x1c);
    *(undefined4 *)(iVar4 + 0x1c) = 0;
    uVar1 = *(uint *)(iVar4 + 0x20);
    *(undefined4 *)(iVar4 + 0x20) = 0;
    iVar2 = *(int *)(iVar4 + 0x24);
    *(undefined4 *)(iVar4 + 0x24) = 0;
    uVar6 = uVar3;
    if (uVar1 < uVar3) {
      do {
        uVar6 = uVar6 + 0x10;
      } while (uVar6 != uVar1);
    }
    fn_001008c4(uVar3,(int)(iVar2 - uVar3) >> 4,0);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0xc);
  return;
}



void fn_0012148c(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = DAT_00896f54;
  if (DAT_00896f54 != (int *)0x0) {
    iVar4 = *DAT_00896f54;
    if (iVar4 != 0) {
      uVar2 = *(uint *)(iVar4 + 0x30);
      uVar3 = uVar2;
      if (*(uint *)(iVar4 + 0x34) < uVar2) {
        do {
          uVar3 = uVar3 + 4;
        } while (uVar3 != *(uint *)(iVar4 + 0x34));
      }
      fn_001008c4(uVar2,(int)(*(int *)(iVar4 + 0x38) - uVar2) >> 2,0);
      uVar2 = *(uint *)(iVar4 + 0x24);
      uVar3 = uVar2;
      if (*(uint *)(iVar4 + 0x28) < uVar2) {
        do {
          uVar3 = uVar3 + 4;
        } while (uVar3 != *(uint *)(iVar4 + 0x28));
      }
      fn_001008c4(uVar2,(int)(*(int *)(iVar4 + 0x2c) - uVar2) >> 2,0);
      fn_002feef8(iVar4);
    }
    fn_002feef8(piVar1);
    DAT_00896f54 = (int *)0x0;
  }
  return;
}



void fn_0012121c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  iVar4 = DAT_008cd578;
  uVar3 = DAT_008cd574;
  uVar2 = DAT_008cd570;
  DAT_00896f40 = 0xffffffff;
  DAT_00896f4c = 0;
  DAT_008cd594 = 0xffffffff;
  DAT_008cd5a4 = 0xffffffff;
  DAT_008cd598 = 0xffffffff;
  DAT_008cd5a8 = 0xffffffff;
  DAT_008cd59c = 0xffffffff;
  DAT_008cd5ac = 0xffffffff;
  DAT_008cd5a0 = 0xffffffff;
  DAT_008cd5b0 = 0xffffffff;
  DAT_00896f50 = 0xffffffff;
  DAT_008cd570 = 0;
  DAT_008cd574 = 0;
  DAT_008cd578 = 0;
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    for (; uVar1 != uVar3; uVar1 = uVar1 + 1) {
    }
  }
  fn_001008c4(uVar2,iVar4 - uVar2,0);
  iVar4 = DAT_008cd584;
  uVar3 = DAT_008cd580;
  uVar2 = DAT_008cd57c;
  DAT_008cd57c = 0;
  DAT_008cd580 = 0;
  DAT_008cd584 = 0;
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    for (; uVar1 != uVar3; uVar1 = uVar1 + 1) {
    }
  }
  fn_001008c4(uVar2,iVar4 - uVar2,0);
  iVar4 = DAT_008cd590;
  uVar3 = DAT_008cd58c;
  uVar2 = DAT_008cd588;
  DAT_008cd588 = 0;
  DAT_008cd58c = 0;
  DAT_008cd590 = 0;
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    for (; uVar1 != uVar3; uVar1 = uVar1 + 1) {
    }
  }
  fn_001008c4(uVar2,iVar4 - uVar2,0);
  iVar4 = DAT_008cd548;
  uVar3 = DAT_008cd544;
  uVar2 = DAT_008cd540;
  DAT_008cd540 = 0;
  DAT_008cd544 = 0;
  DAT_008cd548 = 0;
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    for (; uVar1 != uVar3; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(iVar4 - uVar2) >> 2,0);
  iVar4 = DAT_008cd554;
  uVar3 = DAT_008cd550;
  uVar2 = DAT_008cd54c;
  DAT_008cd54c = 0;
  DAT_008cd550 = 0;
  DAT_008cd554 = 0;
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    for (; uVar1 != uVar3; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(iVar4 - uVar2) >> 2,0);
  iVar4 = DAT_008cd560;
  uVar3 = DAT_008cd55c;
  uVar2 = DAT_008cd558;
  DAT_008cd558 = 0;
  DAT_008cd55c = 0;
  DAT_008cd560 = 0;
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    for (; uVar1 != uVar3; uVar1 = uVar1 + 8) {
    }
  }
  fn_001008c4(uVar2,(int)(iVar4 - uVar2) >> 3,0);
  iVar4 = DAT_008cd56c;
  uVar3 = DAT_008cd568;
  uVar2 = DAT_008cd564;
  DAT_008cd564 = 0;
  DAT_008cd568 = 0;
  DAT_008cd56c = 0;
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    for (; uVar1 != uVar3; uVar1 = uVar1 + 8) {
    }
  }
  fn_002feef8(uVar2,(int)(iVar4 - uVar2) >> 3,0,&DAT_008cd564,unaff_r4,in_lr);
  return;
}


