#include "0012275c_00122c7c.h"



void fn_00122c7c(void)

{
  fn_0012d73c(DAT_00896ca0);
  DAT_00896ca0 = 0;
  return;
}



void fn_00122c58(void)

{
  fn_0012d73c(DAT_00896ccc);
  DAT_00896ccc = 0;
  DAT_00896cd0 = 0;
  return;
}



void fn_00122c48(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  puVar1 = *(undefined4 **)(param_1 + 4);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  puVar1[5] = uVar6;
  puVar1[6] = uVar7;
  puVar1[7] = uVar8;
  return;
}



void fn_00122c28(void)

{
  fn_0012d73c(DAT_00896ca4);
  DAT_00896ca4 = 0;
  return;
}



void fn_00122c04(void)

{
  fn_0012d73c(DAT_00896cd4);
  DAT_00896cd4 = 0;
  DAT_00896cd8 = 0;
  return;
}



void fn_00122be4(int param_1)

{
  fn_00243d10(*(undefined4 *)(param_1 + 0xd8));
  fn_0022ccb4(param_1);
  fn_0012d73c(DAT_00896cd4);
  DAT_00896cd4 = 0;
  DAT_00896cd8 = 0;
  return;
}



void fn_00122b48(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_48 [56];
  
  if (*(int *)(param_1 + 4) < 2) {
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 8) + 4))();
      *(undefined4 *)(param_1 + 8) = 0;
    }
    fn_001433d8(param_1 + 0x10);
    puVar1 = (undefined4 *)fn_001283fc(auStack_48);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    uVar5 = puVar1[4];
    uVar6 = puVar1[5];
    uVar7 = puVar1[6];
    uVar8 = puVar1[7];
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(undefined4 *)(param_1 + 0x20) = uVar5;
    *(undefined4 *)(param_1 + 0x24) = uVar6;
    *(undefined4 *)(param_1 + 0x28) = uVar7;
    *(undefined4 *)(param_1 + 0x2c) = uVar8;
    uVar2 = puVar1[9];
    uVar3 = puVar1[10];
    uVar4 = puVar1[0xb];
    uVar5 = puVar1[0xc];
    *(undefined4 *)(param_1 + 0x30) = puVar1[8];
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    *(undefined4 *)(param_1 + 0x38) = uVar3;
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    *(undefined4 *)(param_1 + 0x40) = uVar5;
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_0012d73c();
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  return;
}



void fn_00122af4(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar3 = (int *)(*(int *)(param_1 + 4) + iVar1 * 4);
    piVar2 = (int *)*piVar3;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      *piVar3 = 0;
    }
  }
  return;
}



void fn_00122ae4(undefined4 *param_1)

{
  *param_1 = &DAT_00822518;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00122abc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00147080();
  *puVar1 = &DAT_008224a0;
  puVar1[1] = _DAT_008981c0;
  return;
}



undefined4 * fn_00122a84(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      fn_001446c0();
      fn_002feef8();
    }
    fn_002feef8(piVar1);
  }
  return param_1;
}



void fn_00122a34(int param_1)

{
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    fn_0012d73c();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



void fn_00122958(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  piVar1 = param_1;
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 4);
  }
  if (iVar2 != 0 && piVar1 != (int *)0x0) {
    iVar4 = piVar1[3];
    iVar3 = 0;
    if (iVar4 == iVar2) {
      piVar1[3] = *(int *)(iVar2 + 8);
    }
    else {
      iVar3 = iVar4;
      for (iVar4 = *(int *)(iVar4 + 8); iVar4 != iVar2; iVar4 = *(int *)(iVar4 + 8)) {
        iVar3 = iVar4;
      }
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
    }
    if (piVar1[4] == iVar2) {
      piVar1[4] = iVar3;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
    fn_00143174(*(undefined4 *)(*param_1 + 0x20));
  }
  fn_00129004();
  fn_00121084();
  fn_00129004();
  fn_00120f74();
  fn_00129004();
  fn_001210e8();
  iVar2 = param_1[9];
  if (iVar2 == 0) {
    return;
  }
  if (*(int **)(iVar2 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + 0x3c) + 8))();
  }
  if (*(int **)(iVar2 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + 0x3c) + 4))();
    *(undefined4 *)(iVar2 + 0x3c) = 0;
  }
  fn_0015cba8(*(undefined4 *)(iVar2 + 0x30),*(undefined4 *)(iVar2 + 0x40));
  *(undefined4 *)(iVar2 + 0x40) = 0xffffffff;
  return;
}



int * fn_0012291c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x1c) + 4))();
    }
    fn_002feef8(iVar1);
  }
  return param_1;
}



void fn_0012275c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  
  param_1 = (undefined4 *)*param_1;
  local_20 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  puVar1 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar2 = puVar1;
  for (puVar3 = local_20; puVar3 != local_1c; puVar3 = puVar3 + 1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar3;
    }
    puVar2 = puVar2 + 1;
  }
  puVar3 = local_20;
  if (local_1c < local_20) {
    do {
      puVar3 = puVar3 + 1;
    } while (puVar3 != local_1c);
  }
  fn_001008c4(local_20,(int)local_18 - (int)local_20 >> 2,0);
  local_1c = (undefined4 *)(((int)local_1c - (int)local_20 & 0xfffffffcU) + (int)puVar1);
  local_18 = puVar1 + 0x20;
  local_20 = puVar1;
  uVar4 = fn_00144810(DAT_008977e8);
  uVar4 = fn_0014495c(uVar4,0);
  uVar5 = fn_0014481c(DAT_008977e8);
  fn_00144ac0(uVar5,uVar4,&local_20);
  uVar6 = 0;
  if ((int)local_1c - (int)local_20 >> 2 != 0) {
    do {
      fn_001448d0(local_20[uVar6]);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)((int)local_1c - (int)local_20 >> 2));
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
    param_1[7] = 0;
  }
  if (param_1[5] != -1) {
    fn_00159f34(*param_1);
  }
  fn_0016a43c(*param_1,param_1[4]);
  fn_0016a43c(*param_1,param_1[2]);
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*param_1,param_1[3]);
}


