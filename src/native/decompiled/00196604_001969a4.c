#include "00196604_001969a4.h"



void fn_001969a4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar9 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  if (*(int *)(iVar9 + 0xc) != 0) {
    if (*(int *)(iVar9 + 0xc) == param_2) {
      return;
    }
    iVar2 = fn_0019bb90();
    if (iVar2 != 0) {
      return;
    }
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    return;
  }
  uVar7 = *(uint *)(iVar9 + 0x20);
  uVar3 = uVar7 & 0x3fffffff;
  if ((int)uVar3 <= *(int *)(iVar9 + 0x1c) - *(int *)(iVar9 + 0x18) >> 2) {
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar3 << 1;
    }
    if ((uVar7 & 0x3fffffff) < uVar3) {
      piVar4 = *(int **)(iVar9 + 0x14);
      if ((piVar4 == (int *)0x0) || ((uVar7 & 0xc0000000) != 0x40000000)) {
        bVar1 = false;
        goto LAB_00196a40;
      }
      puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4,uVar3 << 2,0x20);
      if (puVar5 == (undefined4 *)0x0) {
        return;
      }
      puVar6 = *(undefined4 **)(iVar9 + 0x1c);
      puVar8 = *(undefined4 **)(iVar9 + 0x18);
      iVar2 = 0;
      puVar10 = puVar5;
      if (puVar8 != puVar6) {
        do {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = *puVar8;
          }
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        } while (puVar8 != puVar6);
        iVar2 = *(int *)(iVar9 + 0x1c) - *(int *)(iVar9 + 0x18) >> 2;
      }
      if (*(int *)(iVar9 + 0x18) != 0) {
        *(int *)(iVar9 + 0x1c) = *(int *)(iVar9 + 0x18);
        (**(code **)(**(int **)(iVar9 + 0x14) + 0xc))();
      }
      *(undefined4 **)(iVar9 + 0x1c) = puVar5 + iVar2;
      *(undefined4 **)(iVar9 + 0x18) = puVar5;
      *(uint *)(iVar9 + 0x20) = *(uint *)(iVar9 + 0x20) & 0xc0000000 | uVar3;
    }
  }
  bVar1 = true;
  if (*(int **)(iVar9 + 0x1c) != (int *)0x0) {
    **(int **)(iVar9 + 0x1c) = param_2;
  }
  *(int *)(iVar9 + 0x1c) = *(int *)(iVar9 + 0x1c) + 4;
LAB_00196a40:
  if (bVar1) {
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar9 + 0x10);
  }
  return;
}



int * fn_0019695c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x148) + param_2 * 4;
  piVar1 = *(int **)(iVar2 + 0x78);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(iVar2 + 0x78) = 0;
  }
  return piVar1;
}



undefined4 * fn_00196930(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001a0ba8();
  *puVar1 = &DAT_00858ccc;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return puVar1;
}



void fn_00196910(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_001a0b88();
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  return;
}



void fn_00196764(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  fn_001a0abc(param_1[0x10]);
  piVar3 = (int *)*param_1;
  if ((int)(param_1[1] - (int)piVar3) >> 2 != 0) {
    for (; (int *)param_1[1] != piVar3; piVar3 = piVar3 + 1) {
      (**(code **)(**(int **)(*piVar3 + 0x28) + 0x24))
                (*(int **)(*piVar3 + 0x28),(int)*(char *)(param_1[0x10] + 0xe0));
      fn_002feef8(*piVar3);
      *piVar3 = 0;
    }
  }
  uVar4 = 0;
  do {
    if (param_1[uVar4 + 0x11] != 0) {
      fn_001a0c94(param_1[uVar4 + 0x11],param_1[0x18]);
      piVar3 = (int *)param_1[uVar4 + 0x11];
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      param_1[uVar4 + 0x11] = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  uVar4 = 0;
  if ((int)(param_1[0x14] - param_1[0x13]) >> 2 != 0) {
    do {
      uVar2 = (int)(param_1[0x14] - param_1[0x13]) >> 2;
      if (uVar2 <= uVar4) {
        fn_002ff628(9,&DAT_008c765a,&DAT_008c765a,uVar4,uVar2);
      }
      iVar5 = *(int *)(param_1[0x13] + uVar4 * 4);
      fn_001a0be0(iVar5);
      if (iVar5 != 0) {
        fn_001a0c2c(iVar5);
        fn_002feef8();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(param_1[0x14] - param_1[0x13]) >> 2));
  }
  uVar4 = *param_1;
  uVar2 = param_1[1];
  if (uVar4 != uVar2) {
    uVar1 = uVar4;
    if (uVar2 <= uVar4) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar2);
    }
    param_1[1] = uVar2 - (uVar2 - uVar4 & 0xfffffffc);
  }
  return;
}



void fn_00196754(int param_1,int param_2)

{
  fn_0017d948(param_1,param_1 + 4,param_2 + 4);
  return;
}



void fn_001966d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x166) != '\0') {
    uVar1 = fn_00172fc4();
    fn_001a071c(uVar1,param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x166) = 0;
  }
  iVar2 = 0;
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  do {
    if (iVar2 < 0x10) {
      iVar3 = param_1 + iVar2 * 4;
      if (*(int *)(iVar3 + 0x90) != 0) {
        fn_001a0728();
        (**(code **)(**(int **)(param_1 + 0x84) + 0xc))
                  (*(int **)(param_1 + 0x84),*(undefined4 *)(iVar3 + 0x90));
        *(undefined4 *)(iVar3 + 0x90) = 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}



undefined4 fn_00196604(int *param_1,int param_2)

{
  uint uVar1;
  int extraout_r1;
  uint uVar2;
  
  if (*(char *)(param_2 + 8) == '\0') {
    uVar1 = 0;
    if ((char)param_1[0x1f] == '\0') {
      uVar1 = param_1[0x20];
    }
    else if ((char)param_1[0x1f] == '\x01') {
      uVar2 = param_1[0x20];
      uVar1 = *(uint *)(param_2 + 4);
      fn_00169c20((int)((ulonglong)uVar1 * (ulonglong)uVar2),
                   ((int)uVar2 >> 0x1f) * uVar1 + (int)((ulonglong)uVar1 * (ulonglong)uVar2 >> 0x20)
                   ,1000,0);
      if (extraout_r1 == 0) {
        uVar1 = fn_00169c20((int)((ulonglong)uVar1 * (ulonglong)uVar2),
                             ((int)uVar2 >> 0x1f) * uVar1 +
                             (int)((ulonglong)uVar1 * (ulonglong)uVar2 >> 0x20),1000,0);
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
    if (*(uint *)(param_2 + 0x10) <= uVar1) {
      *(undefined1 *)((int)param_1 + 0xf) = 1;
      (**(code **)(*param_1 + 0x14))(param_1);
      return 0;
    }
  }
  fn_001a0958(param_1,param_2);
  return 1;
}


