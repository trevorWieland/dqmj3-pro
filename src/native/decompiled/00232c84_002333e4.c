#include "00232c84_002333e4.h"



void fn_002333e4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (*(int *)(param_1 + 0x90) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  }
  uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  iVar3 = fn_0068c694(DAT_008977e8);
  iVar3 = fn_006ebf84(*(undefined4 *)(iVar3 + 0x24),uVar2);
  if (iVar3 != 0) {
    uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
    iVar3 = fn_0068c694(DAT_008977e8);
    fn_00162d54(*(undefined4 *)(iVar3 + 0x24),uVar2);
    iVar3 = fn_0068c694(DAT_008977e8);
    fn_00162d44(*(undefined4 *)(iVar3 + 0x24));
  }
  puVar8 = *(undefined4 **)(param_1 + 0xb0);
  for (puVar7 = *(undefined4 **)(param_1 + 0xac); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    (**(code **)(*(int *)*puVar7 + 0xc))((int *)*puVar7,param_1);
  }
  uVar5 = *(uint *)(param_1 + 0xac);
  uVar6 = *(uint *)(param_1 + 0xb0);
  if (uVar5 != uVar6) {
    uVar4 = uVar5;
    if (uVar6 <= uVar5) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar6);
    }
    *(uint *)(param_1 + 0xb0) = uVar6 - (uVar6 - uVar5 & 0xfffffffc);
  }
  return;
}



int fn_0023322c(int *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_s0;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005e846c();
  }
  piVar5 = (int *)param_1[1];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[1] = (int)piVar2;
  }
  iVar1 = fn_0068eb30(DAT_008977e8);
  if (((int)param_2 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_2))
  {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + param_2 * 0x34;
  }
  iVar1 = fn_0069ee40(param_1[1],iVar1,0);
  if (iVar1 != 0) {
    if (param_3 != 0xffffffff) {
      iVar3 = fn_0068eb30(DAT_008977e8);
      if (((int)param_3 < 0) ||
         ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= param_3)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4) + param_3 * 0x34;
      }
      fn_0069eb10(param_1[1],iVar3,0);
    }
    fn_002cd59c(2);
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar4 = fn_0017fde4(param_1[1]);
    iVar3 = fn_0068c694(DAT_008977e8);
    fn_001969a4(*(undefined4 *)(iVar3 + 0x24),uVar4);
    iVar3 = fn_0068c694(DAT_008977e8);
    fn_00162d44(*(undefined4 *)(iVar3 + 0x24));
    uVar4 = fn_0017fde4(param_1[1]);
    fn_0017fc28(uVar4,1);
  }
  fn_001cac80(2);
  param_1[0x12] = in_s0;
  param_1[0x1e] = param_4;
  param_1[0xf] = 0;
  param_1[0x10] = in_s0;
  param_1[0x11] = 0;
  return iVar1;
}



void fn_00233014(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  cVar1 = *(char *)(param_1 + 0x98);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x9a) = 2;
    }
    else if (cVar1 == '\x02') {
      if (*(int *)(param_1 + 0x90) != -1) {
        piVar2 = (int *)fn_0068c7e8(DAT_008977e8);
        (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_1 + 0x90));
        *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
      }
      iVar3 = fn_00145b00(0xc,&DAT_00812c8c);
      piVar2 = (int *)0x0;
      if (iVar3 != 0) {
        piVar2 = (int *)fn_005e846c();
      }
      piVar6 = *(int **)(param_1 + 4);
      if (piVar6 != piVar2) {
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
        *(int **)(param_1 + 4) = piVar2;
      }
      iVar3 = fn_0068eb30(DAT_008977e8);
      uVar4 = *(uint *)(param_1 + 0xa4);
      if (((int)uVar4 < 0) || ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= uVar4))
      {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4) + uVar4 * 0x34;
      }
      iVar3 = fn_0069ee40(*(undefined4 *)(param_1 + 4),iVar3,0);
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0xa8) != -1) {
          iVar3 = fn_0068eb30(DAT_008977e8);
          uVar4 = *(uint *)(param_1 + 0xa8);
          if (((int)uVar4 < 0) ||
             ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= uVar4)) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(iVar3 + 4) + uVar4 * 0x34;
          }
          fn_0069eb10(*(undefined4 *)(param_1 + 4),iVar3,0);
        }
        uVar5 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
        iVar3 = fn_0068c694(DAT_008977e8);
        fn_001969a4(*(undefined4 *)(iVar3 + 0x24),uVar5);
        iVar3 = fn_0068c694(DAT_008977e8);
        fn_00162d44(*(undefined4 *)(iVar3 + 0x24));
        uVar5 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
        fn_0017fc28(uVar5,1);
      }
      *(undefined1 *)(param_1 + 0x9a) = 0;
    }
  }
  cVar1 = *(char *)(param_1 + 0x98);
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  *(char *)(param_1 + 0x99) = cVar1;
  *(char *)(param_1 + 0x98) = *(char *)(param_1 + 0x9a);
  if (cVar1 == *(char *)(param_1 + 0x9a)) {
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return;
}



void fn_00232fb8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x90) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  }
  uVar2 = fn_001cc600(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  return;
}



void fn_00232fa8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(undefined1 *)(param_1 + 0x74) = 1;
  return;
}



void fn_00232f80(int *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  return;
}



void fn_00232e34(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  int local_30 [2];
  int local_28 [2];
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  if ((char)param_1[0x1d] == '\x02') {
    local_20 = param_1[2];
    iStack_1c = param_1[3];
    iStack_18 = param_1[4];
    if ((param_1[0x1c] != 0) && (iVar2 = fn_0068f384(param_1[0x1c],&local_20), iVar2 != 0)) {
      (**(code **)(*param_1 + 0x34))(param_1);
      if (((char)param_1[0x17] == '\0') && (0xe < param_1[0x1b])) {
        bVar6 = *(char *)((int)param_1 + 0x8d) != '\0';
        local_30[0] = 0;
        if (bVar6) {
          local_30[0] = 99;
        }
        cVar1 = *(char *)(param_1[0x19] + 0x53);
        if (!bVar6) {
          local_30[0] = 3;
        }
        uVar3 = fn_00144810(DAT_008977e8);
        local_28[0] = fn_006a8858(uVar3,cVar1,0);
        piVar5 = local_30;
        if (local_28[0] < local_30[0]) {
          piVar5 = local_28;
        }
        iVar2 = *piVar5;
        uVar3 = fn_00144810(DAT_008977e8);
        fn_001cc250(uVar3,(int)cVar1,iVar2);
        fn_0068bea4(param_1[0x19]);
        fn_00144810(DAT_008977e8);
        iVar2 = fn_006a8708();
        param_1[0x18] = iVar2;
        *(undefined1 *)(param_1 + 0x17) = 1;
        puVar4 = (undefined4 *)param_1[0x1c];
        if (puVar4 != (undefined4 *)0x0) {
          fn_002feef8(*puVar4);
          fn_002feef8(puVar4);
          param_1[0x1c] = 0;
        }
      }
      param_1[0x1b] = param_1[0x1b] + 1;
    }
    (**(code **)(*param_1 + 0x1c))(param_1,&local_20);
  }
  return;
}



void fn_00232c84(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  
  puVar10 = (uint *)(param_1 + 0xac);
  puVar9 = *(undefined4 **)(param_1 + 0xb0);
  if (puVar9 != *(undefined4 **)(param_1 + 0xb4)) {
    *(undefined4 **)(param_1 + 0xb0) = puVar9 + 1;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = param_2;
    }
    return;
  }
  uVar3 = (int)((int)puVar9 - *puVar10) >> 2;
  if ((uint)((int)((int)*(undefined4 **)(param_1 + 0xb4) - *puVar10) >> 2) <= uVar3) {
    uVar11 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar11 < uVar3 + 0x20) {
      uVar11 = uVar3 + 0x20;
    }
    puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar6 = puVar1;
    for (puVar5 = (undefined4 *)*puVar10; puVar5 != puVar9; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar1);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = param_2;
    }
    puVar6 = *(undefined4 **)(param_1 + 0xb0);
    puVar5 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar1);
    for (; puVar9 != puVar6; puVar9 = puVar9 + 1) {
      puVar5 = puVar5 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar9;
      }
    }
    uVar2 = *puVar10;
    uVar7 = *(uint *)(param_1 + 0xb0);
    uVar3 = uVar2;
    if (uVar7 < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar7);
    }
    fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0xb4) - uVar2) >> 2,0);
    *(undefined4 **)(param_1 + 0xb4) = puVar1 + uVar11;
    *(undefined4 **)(param_1 + 0xb0) = puVar1 + ((int)(uVar7 - uVar2) >> 2) + 1;
    *puVar10 = (uint)puVar1;
    return;
  }
  *(undefined4 **)(param_1 + 0xb0) = puVar9 + 1;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = puVar9[-1];
  }
  puVar5 = puVar9 + -1;
  puVar6 = puVar9;
  if (puVar9 < puVar5) {
    if (0 < (int)puVar5 - (int)puVar9) {
      iVar8 = (int)puVar5 - (int)puVar9 >> 2;
      iVar4 = 0;
      do {
        iVar8 = iVar8 + -1;
        puVar9[iVar4 + -1] = puVar5[iVar4 + -1];
        iVar4 = iVar4 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    while (puVar9 != puVar5) {
      puVar5 = puVar5 + -1;
      puVar6[-1] = *puVar5;
      puVar6 = puVar6 + -1;
    }
  }
  *puVar9 = param_2;
  return;
}


