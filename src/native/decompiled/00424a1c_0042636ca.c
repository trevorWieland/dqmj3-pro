#include "00424a1c_0042636ca.h"



void fn_00424e3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_005ca2ac(*(undefined4 *)(param_1 + 0x9c),0);
  if (iVar1 != 0) {
    uVar2 = fn_005ca270(*(undefined4 *)(param_1 + 0x9c),0);
    fn_00385b60(param_1,uVar2);
  }
  iVar1 = fn_005ca2ac(*(undefined4 *)(param_1 + 0x9c),1);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = fn_005ca270(*(undefined4 *)(param_1 + 0x9c),1);
  fn_00190d50(*(undefined4 *)(param_1 + 0xa0),uVar2);
  return;
}



void fn_00424e0c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00424eac(iVar1,param_1);
  return;
}



undefined4 fn_00424d88(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00891a60,DAT_00891a64,DAT_00891a68);
  iVar1 = fn_0068897c(*(undefined4 *)(param_1[0x1d] + 0x10),DAT_00891a6c);
  param_1[0x28] = iVar1;
  puVar3 = (undefined4 *)param_1[0x26];
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar2 == &DAT_00891a34) goto LAB_00424df8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_00424df8:
  param_1[0x27] = (int)puVar3;
  return 1;
}



int * fn_00424c9c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  fn_001218d4(DAT_00897800,L"rom:/data/Message/FieldAthleticsMessage.mes");
  iVar4 = param_1[1];
  for (iVar3 = *param_1; iVar3 != iVar4; iVar3 = iVar3 + 0x18) {
    uVar1 = *(uint *)(iVar3 + 8);
    uVar2 = uVar1;
    if (*(uint *)(iVar3 + 0xc) < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != *(uint *)(iVar3 + 0xc));
    }
    fn_001008c4(uVar1,(int)(*(int *)(iVar3 + 0x10) - uVar1) >> 2,0);
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x18,0);
  return param_1;
}



undefined4 * fn_00424c50(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  fn_00121838(DAT_00897800,L"rom:/data/Message/FieldAthleticsMessage.mes",1);
  return param_1;
}



void fn_00424a1c(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_r4;
  uint *puVar6;
  int iVar7;
  undefined4 unaff_r5;
  int iVar8;
  undefined4 unaff_r6;
  int *piVar9;
  int iVar10;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int *piVar11;
  int iVar12;
  
  puVar6 = (uint *)(param_1 + 0x18);
  iVar3 = (int)(*(int *)(param_1 + 0x1c) - *puVar6) >> 2;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    piVar1 = *(int **)(*puVar6 + iVar3 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xa4))();
      piVar11 = (int *)(*puVar6 + iVar3 * 4);
      piVar1 = (int *)*piVar11;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *piVar11 = 0;
    }
  }
  uVar2 = *puVar6;
  uVar5 = *(uint *)(param_1 + 0x1c);
  if (uVar2 != uVar5) {
    uVar4 = uVar2;
    if (uVar5 <= uVar2) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar5);
    }
    *(uint *)(param_1 + 0x1c) = uVar5 - (uVar5 - uVar2 & 0xfffffffc);
  }
  piVar1 = *(int **)(param_1 + 0x60);
  iVar3 = fn_006f7a5c(DAT_008977e0);
  if (iVar3 != 0) {
    fn_006f7a5c(DAT_008977e0);
    fn_001d8140();
  }
  iVar12 = 0;
  iVar3 = (piVar1[1] - *piVar1) / 0x18;
  if (0 < iVar3) {
    do {
      iVar8 = 0;
      iVar7 = *piVar1 + iVar12 * 0x18;
      iVar10 = *(int *)(iVar7 + 0xc) - *(int *)(iVar7 + 8) >> 2;
      if (0 < iVar10) {
        do {
          (**(code **)(**(int **)(*(int *)(iVar7 + 8) + iVar8 * 4) + 0xa4))();
          piVar9 = (int *)(*(int *)(iVar7 + 8) + iVar8 * 4);
          piVar11 = (int *)*piVar9;
          if (piVar11 != (int *)0x0) {
            (**(code **)(*piVar11 + 4))();
          }
          iVar8 = iVar8 + 1;
          *piVar9 = 0;
        } while (iVar8 < iVar10);
      }
      if (*(int *)(iVar7 + 4) != 0) {
        fn_003d4e64();
        fn_002feef8();
      }
      iVar12 = iVar12 + 1;
      *(undefined4 *)(iVar7 + 4) = 0;
    } while (iVar12 < iVar3);
  }
  iVar12 = *piVar1;
  iVar10 = piVar1[1];
  iVar3 = iVar12;
  if (iVar12 != iVar10) {
    do {
      uVar5 = *(uint *)(iVar3 + 8);
      uVar4 = *(uint *)(iVar3 + 0xc);
      uVar2 = uVar5;
      if (uVar4 <= uVar5) {
        for (; uVar2 != uVar4; uVar2 = uVar2 + 4) {
        }
      }
      fn_001008c4(uVar5,(int)(*(int *)(iVar3 + 0x10) - uVar5) >> 2,0,uVar4,unaff_r4,unaff_r5,
                   unaff_r6,unaff_r7,unaff_r8);
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != iVar10);
    piVar1[1] = piVar1[1] + ((iVar10 - iVar12) / 0x18) * -0x18;
  }
  return;
}


