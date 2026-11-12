#include "002d6530_002d68ac.h"



void fn_002d68ac(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(char *)(iVar1 + 0x10) == '\0') {
    iVar2 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
    if (iVar2 == 3) {
      fn_002426a8(*(undefined4 *)(DAT_00897804 + 0x1c),1);
      *(undefined1 *)(iVar1 + 0x10) = 1;
    }
  }
  return;
}



void fn_002d686c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(char *)(iVar1 + 0x10) != '\0') {
    fn_002426a8(*(undefined4 *)(DAT_00897804 + 0x1c),3);
    *(undefined1 *)(iVar1 + 0x10) = 0;
  }
  return;
}



void fn_002d6810(int param_1)

{
  if (1 < *(uint *)(param_1 + 0xc)) {
    if (*(int *)(param_1 + 4) != 0) {
      fn_001221d4(*(undefined4 *)(DAT_00897804 + 0xc),*(int *)(param_1 + 4),1);
    }
    if (*(int *)(param_1 + 8) != 0) {
      fn_00121118(*(undefined4 *)(DAT_00897804 + 0x18));
      return;
    }
  }
  return;
}



void fn_002d6808(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (1 < *(uint *)(iVar1 + 0xc)) {
    if (*(int *)(iVar1 + 4) != 0) {
      fn_001221d4(*(undefined4 *)(DAT_00897804 + 0xc),*(int *)(iVar1 + 4),1);
    }
    if (*(int *)(iVar1 + 8) != 0) {
      fn_00121118(*(undefined4 *)(DAT_00897804 + 0x18));
      return;
    }
  }
  return;
}



void fn_002d66fc(int param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 4) == 0) &&
     (uVar2 = fn_00145b00(0x1db7c,&DAT_00812c8c), param_2 = (int)((ulonglong)uVar2 >> 0x20),
     *(int *)(param_1 + 4) != (int)uVar2)) {
    fn_002feef8();
    *(int *)(param_1 + 4) = (int)uVar2;
    param_2 = extraout_r1;
  }
  if ((*(int *)(param_1 + 8) == 0) &&
     (uVar2 = fn_00145b00(0xc88,&DAT_00812c8c), param_2 = (int)((ulonglong)uVar2 >> 0x20),
     *(int *)(param_1 + 8) != (int)uVar2)) {
    fn_002feef8();
    *(int *)(param_1 + 8) = (int)uVar2;
    param_2 = extraout_r1_00;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 0) {
      param_2 = *(int *)(param_1 + 8);
    }
    if (iVar1 != 0 && param_2 != 0) {
      fn_00301f50(iVar1,0x1db7c);
      fn_00301f50(*(undefined4 *)(param_1 + 8),0xc88);
      *(undefined4 *)(param_1 + 0xc) = 1;
      fn_0017821c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(*(int *)(DAT_00897804 + 0xc) + 4),
                   0x1db7c);
      fn_0017821c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(*(int *)(DAT_00897804 + 0x18) + 4),
                   0xc88);
      *(undefined4 *)(param_1 + 0xc) = 2;
    }
  }
  return;
}



void fn_002d66f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((*(int *)(iVar1 + 4) == 0) &&
     (uVar3 = fn_00145b00(0x1db7c,&DAT_00812c8c), param_2 = (int)((ulonglong)uVar3 >> 0x20),
     *(int *)(iVar1 + 4) != (int)uVar3)) {
    fn_002feef8();
    *(int *)(iVar1 + 4) = (int)uVar3;
    param_2 = extraout_r1;
  }
  if ((*(int *)(iVar1 + 8) == 0) &&
     (uVar3 = fn_00145b00(0xc88,&DAT_00812c8c), param_2 = (int)((ulonglong)uVar3 >> 0x20),
     *(int *)(iVar1 + 8) != (int)uVar3)) {
    fn_002feef8();
    *(int *)(iVar1 + 8) = (int)uVar3;
    param_2 = extraout_r1_00;
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    iVar2 = *(int *)(iVar1 + 4);
    if (iVar2 != 0) {
      param_2 = *(int *)(iVar1 + 8);
    }
    if (iVar2 != 0 && param_2 != 0) {
      fn_00301f50(iVar2,0x1db7c);
      fn_00301f50(*(undefined4 *)(iVar1 + 8),0xc88);
      *(undefined4 *)(iVar1 + 0xc) = 1;
      fn_0017821c(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(*(int *)(DAT_00897804 + 0xc) + 4),
                   0x1db7c);
      fn_0017821c(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(*(int *)(DAT_00897804 + 0x18) + 4),
                   0xc88);
      *(undefined4 *)(iVar1 + 0xc) = 2;
    }
  }
  return;
}



undefined4 * fn_002d65b4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  *param_1 = &DAT_008201a8;
  puVar5 = param_1 + 2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)(param_2 + 5);
  puVar4 = (undefined4 *)(param_2 + 8);
  *puVar5 = *puVar4;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *puVar5 = *puVar4;
  param_1[3] = uVar1;
  *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  puVar7 = (undefined4 *)(param_2 + 0x1c);
  *puVar5 = *puVar4;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  puVar8 = param_1 + 7;
  fn_0017821c(param_1 + 2,param_2 + 8,0x48);
  fn_0017821c(param_1 + 2,param_2 + 8,0x4c);
  puVar5 = (undefined4 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)puVar5;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  uVar9 = *puVar7;
  uVar10 = *(undefined4 *)(param_2 + 0x20);
  uVar11 = *(undefined4 *)(param_2 + 0x24);
  param_1[2] = *puVar5;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  *puVar8 = uVar9;
  param_1[8] = uVar10;
  param_1[9] = uVar11;
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  puVar4 = param_1 + 2;
  *puVar4 = *puVar5;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  *puVar4 = *puVar5;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  *puVar4 = *puVar5;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  *puVar4 = *puVar5;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  *puVar4 = *puVar5;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  param_1[2] = *puVar5;
  param_1[2] = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = uVar1;
  fn_0017821c(param_1 + 2,param_2 + 8,0x58);
  fn_0017821c(param_1 + 2,param_2 + 8,0x58);
  fn_0017821c(param_1 + 2,param_2 + 8,0x58);
  puVar5 = (undefined4 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  uVar9 = *puVar7;
  param_1[2] = *puVar5;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  *puVar8 = uVar9;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  uVar9 = *puVar7;
  param_1[2] = *puVar5;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  *puVar8 = uVar9;
  param_1[2] = *puVar5;
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 8);
  return param_1;
}



void fn_002d6598(undefined4 *param_1,undefined1 param_2)

{
  *param_1 = &DAT_008201a8;
  *(undefined1 *)((int)param_1 + 5) = param_2;
  *(undefined1 *)(param_1 + 1) = 0xff;
  return;
}



void fn_002d6580(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



void fn_002d656c(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 4) = 0x15;
  fn_0017821c(param_1 + 8,param_2,0x4c);
  return;
}



void fn_002d6558(int param_1,undefined2 *param_2)

{
  *(undefined1 *)(param_1 + 4) = 0x12;
  *(undefined2 *)(param_1 + 8) = *param_2;
  return;
}



void fn_002d6530(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined1 *)(param_1 + 4) = 0x17;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  return;
}


