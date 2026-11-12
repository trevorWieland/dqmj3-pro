#include "0036bb20_0036c13c.h"



int fn_0036c13c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined2 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puStack_34;
  uint auStack_30 [3];
  
  piVar5 = (int *)(param_1 + 0xc);
  uVar1 = fn_00100b58(param_2);
  if (uVar1 == 0) {
    puStack_34 = &DAT_008f9cf4;
  }
  else {
    puVar3 = auStack_30 + 1;
    if (0x20 < uVar1) {
      puVar3 = auStack_30;
    }
    auStack_30[0] = uVar1;
    auStack_30[1] = 0x20;
    uVar8 = *puVar3;
    if (0xfffffff1 < uVar8) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,0xfffffff1);
    }
    if (uVar8 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar8);
    }
    if (uVar8 == 0) {
      puStack_34 = &DAT_008f9ce8;
    }
    else {
      puStack_34 = (undefined4 *)fn_00100fc6((uVar8 + 8) * 2,0);
      if (puStack_34 != (undefined4 *)0x0) {
        *puStack_34 = 0;
        puStack_34[1] = 0;
        puStack_34[2] = 0;
      }
      puStack_34[2] = uVar1;
      puVar4 = (undefined2 *)((int)puStack_34 + uVar1 * 2 + 0xc);
      *puStack_34 = 0;
      puStack_34[1] = uVar8;
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    puStack_34 = puStack_34 + 3;
  }
  fn_00301a9c(puStack_34,param_2,uVar1 << 1);
  piVar6 = *(int **)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 0x1c);
  if (piVar6 == (int *)0x0) {
    piVar6 = *(int **)(param_1 + 0x14);
    if (piVar6 == *(int **)(param_1 + 0x18)) {
      if (*piVar5 == 0) {
        uVar1 = 0x20;
      }
      else {
        uVar8 = *(uint *)(*piVar5 + 4);
        uVar1 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
        if (uVar1 < uVar8 + 0x20) {
          uVar1 = uVar8 + 0x20;
        }
      }
      piVar6 = (int *)fn_00100fc6(0xc,0);
      iVar2 = fn_00100fc6(uVar1 * 0xc,0);
      piVar6[2] = iVar2;
      *piVar6 = *piVar5;
      piVar6[1] = uVar1;
      *piVar5 = (int)piVar6;
      piVar6 = (int *)piVar6[2];
      *(int **)(param_1 + 0x14) = piVar6;
      *(int **)(param_1 + 0x18) = piVar6 + uVar1 * 3;
    }
    *(int **)(param_1 + 0x14) = piVar6 + 3;
  }
  else {
    *(int *)(param_1 + 0x10) = *piVar6;
  }
  if (piVar6 + 2 != (int *)0x0) {
    fn_00785420(piVar6 + 2,&puStack_34);
  }
  *piVar6 = iVar7;
  piVar6[1] = *(int *)(iVar7 + 4);
  **(undefined4 **)(iVar7 + 4) = piVar6;
  *(int **)(iVar7 + 4) = piVar6;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  fn_001588d4(&puStack_34);
  iVar2 = fn_0022eb34(param_2);
  iVar2 = iVar2 + 1;
  iVar7 = iVar2;
  if (iVar2 < 3) {
    iVar7 = 3;
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(int *)(param_1 + 0x2c) = iVar7;
  return iVar2;
}



void fn_0036bfcc(int param_1)

{
  if (*(char *)(param_1 + 0x5d) != '\0') {
    *(undefined4 *)(param_1 + 0x2c) = 3;
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined1 *)(param_1 + 9) = 1;
    *(undefined1 *)(param_1 + 0x49) = 1;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x51) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 1;
    *(undefined4 *)(param_1 + 100) = 0x14f000f;
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  if (*(char *)(param_1 + 0x5f) == '\0') {
    *(undefined4 *)(param_1 + 0x38) = 0x1000950;
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 0x1000950;
  }
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x100094b;
  *(undefined4 *)(param_1 + 0x44) = 0x100094c;
  return;
}



void fn_0036beac(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_00893bf0) goto LAB_0036bef4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0036bef4:
  if (*(char *)((int)puVar3 + 9) == '\0') {
    if (*(char *)(param_1 + 0x74) == '\0') {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    piVar2 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x70));
    (**(code **)(*piVar2 + 0xc))(piVar2);
    (**(code **)(*piVar2 + 0x14))(piVar2);
    if ((float)piVar2[9] == 0.0) {
      *(undefined1 *)(puVar3 + 2) = 1;
    }
  }
  return;
}



undefined4 fn_0036bd3c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00893bf0) goto LAB_0036bd88;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0036bd88:
  *(undefined1 *)(puVar5 + 2) = 0;
  uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 100),
                       L"rom:/data/Layout/performance/battle_performance_stage.arc",&DAT_0036be34,1,
                       1);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar2,(char *)&DAT_0036be50,
                       &DAT_0036be3c,0,1,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  uVar2 = fn_001853ec(*(undefined4 *)(param_1 + 100),&LAB_0036be78,uVar2);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  piVar3 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 100),uVar2);
  (**(code **)(*piVar3 + 0x50))(piVar3,0);
  iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  *(byte *)(*(int *)(iVar4 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar4 + 0x10) + 0x44) & 0xfe | 1;
  return 1;
}



void fn_0036bcf8(int param_1)

{
  if (*(int *)(param_1 + 0x70) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 0x68) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 100));
  }
  return;
}



void fn_0036bcc8(undefined4 param_1,short param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00203e08(param_1,0);
  *param_3 = *puVar1;
  *(short *)((int)param_3 + 2) = *(short *)((int)param_3 + 2) * (param_2 + 1);
  return;
}



undefined4 fn_0036bb90(undefined4 param_1,short param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *local_18;
  undefined4 *local_14;
  
  fn_0023097c(&local_18,param_1,0);
  fn_0015b0dc(local_18);
  puVar1 = (uint *)fn_00203e08(param_1,0);
  uVar2 = *puVar1;
  fn_0023097c(&local_14,(int)(short)uVar2,0);
  fn_0015b0dc(local_14);
  fn_0015b0f8((int)(uVar2 & 0xffff |
                    (int)(short)(uVar2 >> 0x10) * (int)(short)(param_2 + 1) * 0x10000) >> 0x10);
  uVar3 = fn_0022f584((char *)&DAT_0036bca4,0);
  if (local_14 != &DAT_008f9cf4) {
    piVar4 = local_14 + -3;
    iVar5 = *piVar4;
    if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_14 + -3,local_14[-2] + 8,0);
    }
  }
  if (local_18 != &DAT_008f9cf4) {
    piVar4 = local_18 + -3;
    iVar5 = *piVar4;
    if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_18 + -3,local_18[-2] + 8,0);
    }
  }
  return uVar3;
}



uint fn_0036bb80(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 1;
  if (3 < uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}



uint fn_0036bb70(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 1;
  if (1 < uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}



bool fn_0036bb48(void)

{
  int iVar1;
  
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  return 99 < iVar1;
}



bool fn_0036bb20(void)

{
  int iVar1;
  
  iVar1 = fn_006b4fb8(*(undefined4 *)(DAT_00897804 + 0x18));
  return 99 < iVar1;
}


