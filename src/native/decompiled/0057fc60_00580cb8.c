#include "0057fc60_00580cb8.h"



void fn_00580cb8(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    fn_00190d50(**(undefined4 **)(*(int *)(param_1 + 0xd0) + 0x18),param_3);
    return;
  }
  fn_00190d50(*(undefined4 *)(param_1 + param_2 * 4 + 0xe0),param_3);
  return;
}



void fn_00580c88(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_8 [2];
  
  local_8[0] = *param_3;
  fn_00394a9c(param_1,param_2,local_8);
  return;
}



void fn_00580c50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_008937e0,1);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  fn_003947d8(param_1);
  return;
}



void fn_00580c14(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00394af0();
  *puVar1 = &DAT_00842428;
  return;
}



void fn_00580ae4(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_008422a0;
  piVar4 = (int *)param_1[0x45];
  param_1[0x45] = 0;
  piVar5 = (int *)param_1[0x46];
  param_1[0x46] = 0;
  iVar6 = param_1[0x47];
  param_1[0x47] = 0;
  for (piVar3 = piVar4; piVar3 != piVar5; piVar3 = piVar3 + 1) {
    if ((undefined4 *)*piVar3 != &DAT_008f9cf4) {
      piVar1 = (undefined4 *)*piVar3 + -3;
      iVar2 = *piVar1;
      if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(*piVar3 + -0xc,*(int *)(*piVar3 + -8) + 8,0);
      }
    }
  }
  fn_001008c4(piVar4,iVar6 - (int)piVar4 >> 2,0);
  piVar4 = (int *)param_1[0x46];
  for (piVar3 = (int *)param_1[0x45]; piVar3 != piVar4; piVar3 = piVar3 + 1) {
    if ((undefined4 *)*piVar3 != &DAT_008f9cf4) {
      piVar5 = (undefined4 *)*piVar3 + -3;
      iVar6 = *piVar5;
      if ((iVar6 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar6 + -1, iVar6 == 0)))) {
        fn_001008c4(*piVar3 + -0xc,*(int *)(*piVar3 + -8) + 8,0);
      }
    }
  }
  iVar6 = param_1[0x45];
  fn_001008c4(iVar6,param_1[0x47] - iVar6 >> 2,0);
  fn_0074908c(param_1);
  return;
}



void fn_00580300(int *param_1,int param_2)

{
  int iVar1;
  
  if ((char)param_1[3] == '\x03') {
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    iVar1 = fn_002e8098(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10),
                         *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x14));
    if (iVar1 != 0) {
      iVar1 = fn_00748844(param_1,param_2);
      if (iVar1 != 0) {
        param_1[0x42] = param_2;
        if ((char)param_1[0x41] != '\0') {
          return;
        }
        iVar1 = fn_0066eb80(DAT_00898840,8);
        if ((*(byte *)(iVar1 + 0x4c) & 4) == 0) {
          if ((char)param_1[0x4b] != '\0') {
            (**(code **)(*param_1 + 0x178))(param_1,0);
            *(undefined1 *)(param_1 + 0x41) = 1;
            param_1[0x49] = 0;
            fn_0068ab44(param_1,0x100094b);
            return;
          }
        }
        else if ((char)param_1[0x4b] != '\0') {
          (**(code **)(*param_1 + 0x178))(param_1,1);
          *(undefined1 *)(param_1 + 0x41) = 2;
          param_1[0x49] = 0;
          fn_0068ab44(param_1,0x100094b);
          return;
        }
      }
      fn_0068ab44(param_1,0x100094d);
      return;
    }
  }
  return;
}



void fn_005801e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  short *psVar5;
  
  if (*(char *)(param_1 + 0xec) == '\0') {
    return;
  }
  psVar5 = *(short **)(*(int *)(param_1 + 0x114) + param_2 * 4);
  if (*psVar5 == 0) {
    psVar5 = (short *)fn_0022f750((char *)&DAT_005802b4);
  }
  iVar1 = fn_0077f9bc(param_1,param_2);
  uVar2 = fn_0016ba34(DAT_00897800,DAT_00898230,*(undefined4 *)(iVar1 + 4),0);
  puVar3 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008942dc) goto LAB_00580288;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_00580288:
  fn_00321118(puVar3,psVar5,uVar2);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_0058013c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((char)param_1[3] == '\x03') {
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    iVar1 = fn_002e8098(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10),
                         *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x14));
    if ((iVar1 != 0) && ((char)param_1[0x41] == '\0')) {
      *(undefined4 *)(param_1[0x17] + 0x38) = 0;
      uVar2 = fn_0022f584((char *)&DAT_005801bc);
      fn_00748898(param_1,uVar2);
      *(undefined1 *)(param_1 + 0x41) = 5;
      fn_0068ab44(param_1,0x100094c);
      return;
    }
  }
  return;
}



void fn_00580100(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x5c))();
  if (((int)uVar2 < 0) || (*(uint *)(param_1 + 0x128) <= uVar2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 300) = uVar1;
  return;
}



void fn_005800a4(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  puVar2 = auStack_18;
  if (param_3 == 0) {
    puVar2 = auStack_14;
    puVar1 = (undefined *)fn_0022f750((char *)&DAT_005800ec,param_2,0);
  }
  else {
    puVar1 = &DAT_005800e8;
  }
  fn_00168a24(param_1,puVar1,puVar2);
  return;
}



void fn_0057ffec(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008963ac) goto LAB_00580044;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_00580044:
    fn_00675a7c(puVar1[0x11],1,param_1[0x42],2);
  }
  *(undefined4 *)(param_1[0x17] + 0x38) = 0;
  uVar3 = fn_0022f584((char *)&DAT_00580084);
  fn_00748898(param_1,uVar3);
  return;
}



undefined4 fn_0057fc60(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *local_2c;
  undefined4 local_28;
  
  local_28 = fn_0043cd80();
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008963ac) goto LAB_0057fcbc;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0057fcbc:
  uVar5 = (**(code **)(**(int **)(*(int *)(puVar3[0x10] + 4) + 8) + 0x14))();
  fn_0066e4a4(DAT_00897850,0,uVar5);
  fn_006732a0(puVar3[0x12],1,7,2);
  fn_003f71d0(puVar3[0x10],0);
  puVar3 = (undefined4 *)fn_00689c1c(param_1,0x80);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008964f4) goto LAB_0057fd48;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0057fd48:
  param_1[0x48] = (int)puVar3;
  *(undefined1 *)(puVar3 + 2) = 1;
  *(undefined4 *)(param_1[0x48] + 0x10) = 0xda;
  local_2c = &DAT_008f9cf4;
  piVar9 = (int *)param_1[0x45];
  piVar7 = (int *)param_1[0x46];
  uVar10 = param_1[0x3d] - param_1[0x3c] >> 4;
  uVar1 = (int)piVar7 - (int)piVar9 >> 2;
  if (uVar1 < uVar10) {
    fn_00799de8(param_1 + 0x45,piVar7,uVar10 - uVar1,&local_2c);
  }
  else if ((uVar10 < uVar1) && (piVar2 = piVar9 + uVar10, piVar9 != piVar7)) {
    for (; piVar2 != piVar7; piVar2 = piVar2 + 1) {
      if ((undefined4 *)*piVar2 != &DAT_008f9cf4) {
        piVar6 = (undefined4 *)*piVar2 + -3;
        iVar8 = *piVar6;
        if ((iVar8 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar8 + -1, iVar8 == 0)))) {
          fn_001008c4(*piVar2 + -0xc,*(int *)(*piVar2 + -8) + 8,0);
        }
      }
    }
    param_1[0x46] = param_1[0x46] - ((int)piVar7 - (int)(piVar9 + uVar10) & 0xfffffffcU);
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar7 = local_2c + -3;
    iVar8 = *piVar7;
    if ((iVar8 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  uVar10 = 0;
  if (param_1[0x46] - param_1[0x45] >> 2 != 0) {
    do {
      piVar7 = (int *)(param_1[0x45] + uVar10 * 4);
      iVar8 = fn_00100b58(&LAB_0057ff88);
      if (iVar8 == 0) {
        puVar3 = (undefined4 *)*piVar7;
        piVar9 = puVar3 + -3;
        iVar8 = *piVar9;
        if (iVar8 == 0) {
          puVar3[-1] = 0;
          *(undefined2 *)*piVar7 = 0;
        }
        else {
          if ((puVar3 != &DAT_008f9cf4) &&
             ((iVar8 == -1 || ((piVar9 != &DAT_008f9ce8 && (*piVar9 = iVar8 + -1, iVar8 == 0)))))) {
            fn_001008c4(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 8,0);
          }
          *piVar7 = (int)&DAT_008f9cf4;
        }
      }
      else {
        fn_00177c88(piVar7,0,*(undefined4 *)(*piVar7 + -4),&LAB_0057ff88,iVar8,0,iVar8);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)(param_1[0x46] - param_1[0x45] >> 2));
  }
  param_1[0x49] = 0;
  return local_28;
}


