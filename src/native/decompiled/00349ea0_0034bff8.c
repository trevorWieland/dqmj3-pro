#include "00349ea0_0034bff8.h"



undefined4 fn_0034bff8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951b8) goto LAB_0034c038;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0034c038:
  return puVar1[0xfd];
}



undefined4 fn_0034bfa4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951b8) goto LAB_0034bfe4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0034bfe4:
  return puVar1[0xfc];
}



int fn_0034bf40(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951b8) goto LAB_0034bf84;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0034bf84:
  iVar3 = fn_006ce908(puVar1,param_2);
  if (*(short *)(iVar3 + 0x1c) == 0) {
    iVar3 = 0;
  }
  return iVar3;
}



int fn_0034b9e0(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  
  puVar2 = *(undefined4 **)(param_1 + 0x98);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951b8) goto LAB_0034ba20;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0034ba20:
  iVar6 = 4;
  psVar5 = (short *)(puVar2 + 0x105);
  iVar4 = 0;
  do {
    sVar1 = *psVar5;
    psVar5 = psVar5 + 0x78;
    if (sVar1 != 0) {
      iVar4 = iVar4 + 1;
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return iVar4;
}



void fn_0034b73c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint local_2c;
  uint local_28;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x1c);
  uVar10 = *(uint *)(*(int *)(param_1 + 0xb4) + -4);
  uVar2 = fn_00100b58();
  uVar3 = *(uint *)(*(int *)(param_1 + 0xb4) + -4);
  if (uVar3 < uVar10) {
    uVar10 = uVar3;
  }
  iVar4 = fn_001006de(*(int *)(param_1 + 0xb4),uVar1);
  if (iVar4 == 0 && uVar10 == uVar2) {
    return;
  }
  piVar11 = (int *)(param_1 + 0xb4);
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x98) + 0x1c);
  uVar10 = fn_00100b58();
  puVar12 = &DAT_008f9ce8;
  puVar6 = (undefined4 *)*piVar11;
  if (uVar10 == 0) {
    piVar7 = puVar6 + -3;
    iVar4 = *piVar7;
    if (iVar4 == 0) {
      puVar6[-1] = 0;
      *(undefined2 *)*piVar11 = 0;
    }
    else {
      if ((puVar6 != &DAT_008f9cf4) &&
         ((iVar4 == -1 || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar4 + -1, iVar4 == 0)))))) {
        fn_001008c4(*piVar11 + -0xc,*(int *)(*piVar11 + -8) + 8,0);
      }
      *piVar11 = (int)&DAT_008f9cf4;
    }
  }
  else {
    uVar2 = puVar6[-1];
    if (((puVar6[-3] + 1 < 2) && (uVar10 <= (uint)puVar6[-2])) &&
       ((puVar5 == (undefined4 *)0x0 ||
        ((puVar5 < puVar6 || ((undefined4 *)((int)puVar6 + uVar2 * 2) <= puVar5)))))) {
      fn_001006ac(puVar6,puVar5,uVar10);
      *(uint *)(*piVar11 + -4) = uVar10;
      *(undefined2 *)(*piVar11 + uVar10 * 2) = 0;
    }
    else {
      local_2c = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
      if (local_2c < uVar2 + 0x80) {
        local_2c = uVar2 + 0x80;
      }
      local_28 = uVar10;
      puVar8 = &local_2c;
      if (local_2c < uVar10) {
        puVar8 = &local_28;
      }
      uVar2 = *puVar8;
      if (0xfffffff1 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,0xfffffff1);
      }
      if (uVar2 < uVar10) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar10,uVar2);
      }
      if (uVar2 != 0) {
        puVar12 = (undefined4 *)fn_00100fc6((uVar2 + 8) * 2,0);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
        }
        puVar9 = (undefined2 *)((int)puVar12 + uVar10 * 2 + 0xc);
        *puVar12 = 0;
        puVar12[1] = uVar2;
        puVar12[2] = uVar10;
        if (puVar9 != (undefined2 *)0x0) {
          *puVar9 = 0;
        }
      }
      fn_00301a9c(puVar12 + 3,puVar5,uVar10 << 1);
      if ((undefined4 *)*piVar11 != &DAT_008f9cf4) {
        piVar7 = (undefined4 *)*piVar11 + -3;
        iVar4 = *piVar7;
        if ((iVar4 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar4 + -1, iVar4 == 0)))) {
          fn_001008c4(*piVar11 + -0xc,*(int *)(*piVar11 + -8) + 8,0);
        }
      }
      *piVar11 = (int)(puVar12 + 3);
    }
  }
  fn_0039b5a8(param_1);
  return;
}



void fn_0034b4e8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)fn_001f74ec(param_1,0x88);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_008939e8) goto LAB_0034b56c;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_0034b56c:
    puVar2[5] = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0xc);
    puVar2[6] = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0xe4) + 8) = param_2;
    fn_006899f4(param_1,0x88,0);
  }
  else {
    fn_006899f4(param_1,0x86,0);
    (**(code **)(**(int **)(param_1 + 0xe4) + 0xc))();
  }
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_0034b3e8(int param_1)

{
  fn_002c3d68();
  fn_006899f4(param_1,0x86,0);
  (**(code **)(**(int **)(param_1 + 0xe4) + 0xc))();
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_0034b000(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xac,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0034b030(iVar1,param_1);
  return;
}



void fn_0034b030(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0069eaa0();
  *puVar1 = &DAT_008256f0;
  puVar1[0x1f] = 0;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  puVar1[0x21] = 0xffffffff;
  puVar1[0x20] = uVar2;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x24) = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 18000;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  *(undefined1 *)(puVar1 + 0x2a) = 0;
  return;
}



undefined4 fn_0034a0f0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_001481c8(param_1[0x20],DAT_00896500,&DAT_0034a21c,1,1);
  param_1[0x21] = iVar1;
  iVar1 = fn_001480d0(param_1[0x20],iVar1,DAT_00896504,&DAT_0034a224,0,1,4);
  param_1[0x22] = iVar1;
  fn_00178eec(param_1[0x20],iVar1,0);
  puVar3 = (undefined4 *)param_1[6];
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar2 == &DAT_008964f4) goto LAB_0034a198;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0034a198:
  param_1[0x28] = (int)puVar3;
  iVar1 = *(int *)(DAT_00897850 + 0x34);
  param_1[0x23] = iVar1;
  if ((iVar1 == 0) &&
     (puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1), puVar3 != (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar2 == &DAT_008963ac) {
        if (puVar3 != (undefined4 *)0x0) {
          param_1[0x23] = puVar3[0xd];
        }
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  *(undefined1 *)(param_1[0x28] + 0xb) = 0;
  return 1;
}



void fn_0034a09c(int param_1)

{
  if (*(int **)(param_1 + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa4) + 4))();
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (*(int *)(param_1 + 0x88) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x80));
  }
  if (*(int *)(param_1 + 0x84) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x80));
  }
  return;
}



void fn_00349ea0(int *param_1)

{
  int iVar1;
  
  fn_006899f4(param_1,param_1[0x3a],0);
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  fn_0068ab44(param_1,0x100094c);
  return;
}


