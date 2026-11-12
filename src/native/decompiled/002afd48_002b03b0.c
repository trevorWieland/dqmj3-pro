#include "002afd48_002b03b0.h"



undefined4 fn_002b03b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  *(int *)(param_1 + 0x18) = iVar1;
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + iVar2 * 4) + 0x10))();
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  return 1;
}



void fn_002b0318(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      (**(code **)(**(int **)(*(int *)(param_1 + 4) + iVar1 * 4) + 0x24))();
    }
    iVar1 = *(int *)(param_1 + 0x14);
    iVar3 = *(int *)(param_1 + 0x18) + -1;
    if (iVar1 <= iVar3) {
      do {
        piVar4 = (int *)(*(int *)(param_1 + 4) + iVar3 * 4);
        piVar2 = (int *)*piVar4;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
        *piVar4 = 0;
        iVar1 = *(int *)(param_1 + 0x14);
        iVar3 = iVar3 + -1;
      } while (iVar1 <= iVar3);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    fn_0079868c(param_1 + 4,iVar1,0);
  }
  return;
}



int fn_002b0148(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  puVar10 = (uint *)(param_1 + 4);
  if (puVar4 == *(undefined4 **)(param_1 + 0xc)) {
    uVar3 = (int)((int)puVar4 - *puVar10) >> 2;
    if (uVar3 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xc) - *puVar10) >> 2)) {
      *(undefined4 **)(param_1 + 8) = puVar4 + 1;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = puVar4[-1];
      }
      puVar5 = puVar4 + -1;
      puVar6 = puVar4;
      if (puVar4 < puVar5) {
        if (0 < (int)puVar5 - (int)puVar4) {
          iVar9 = (int)puVar5 - (int)puVar4 >> 2;
          iVar8 = 0;
          do {
            iVar9 = iVar9 + -1;
            puVar4[iVar8 + -1] = puVar5[iVar8 + -1];
            iVar8 = iVar8 + -1;
          } while (iVar9 != 0);
        }
      }
      else {
        while (puVar4 != puVar5) {
          puVar5 = puVar5 + -1;
          puVar6[-1] = *puVar5;
          puVar6 = puVar6 + -1;
        }
      }
      *puVar4 = param_2;
    }
    else {
      uVar11 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
      if (uVar11 < uVar3 + 0x20) {
        uVar11 = uVar3 + 0x20;
      }
      puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
      puVar6 = puVar1;
      for (puVar5 = (undefined4 *)*puVar10; puVar5 != puVar4; puVar5 = puVar5 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar5;
        }
        puVar6 = puVar6 + 1;
      }
      puVar5 = (undefined4 *)(((int)puVar4 - *puVar10 & 0xfffffffc) + (int)puVar1);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = param_2;
      }
      puVar6 = *(undefined4 **)(param_1 + 8);
      puVar5 = (undefined4 *)(((int)puVar4 - *puVar10 & 0xfffffffc) + (int)puVar1);
      for (; puVar4 != puVar6; puVar4 = puVar4 + 1) {
        puVar5 = puVar5 + 1;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar4;
        }
      }
      uVar2 = *puVar10;
      uVar7 = *(uint *)(param_1 + 8);
      uVar3 = uVar2;
      if (uVar7 < uVar2) {
        do {
          uVar3 = uVar3 + 4;
        } while (uVar3 != uVar7);
      }
      fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0xc) - uVar2) >> 2,0);
      *(undefined4 **)(param_1 + 0xc) = puVar1 + uVar11;
      *(undefined4 **)(param_1 + 8) = puVar1 + ((int)(uVar7 - uVar2) >> 2) + 1;
      *puVar10 = (uint)puVar1;
    }
  }
  else {
    *(undefined4 **)(param_1 + 8) = puVar4 + 1;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = param_2;
    }
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + -1;
}



undefined4 fn_002b00ec(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  *(int *)(param_1 + 0x1c) = iVar1;
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + iVar2 * 4) + 0x2c))();
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x1c));
  }
  return 1;
}



void fn_002b00a4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 != 0) {
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      (**(code **)(**(int **)(*(int *)(param_1 + 4) + iVar1 * 4) + 0x30))();
    }
  }
  return;
}



undefined4 fn_002b0048(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  *(int *)(param_1 + 0x10) = iVar1;
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + iVar2 * 4) + 8))();
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  return 1;
}



void fn_002affbc(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      (**(code **)(**(int **)(*(int *)(param_1 + 4) + iVar1 * 4) + 0x1c))();
    }
    iVar1 = *(int *)(param_1 + 0x10);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      piVar3 = (int *)(*(int *)(param_1 + 4) + iVar1 * 4);
      piVar2 = (int *)*piVar3;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      *piVar3 = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    fn_0079868c(param_1 + 4,0,0);
  }
  return;
}



undefined4 fn_002aff60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  *(int *)(param_1 + 0x20) = iVar1;
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + iVar2 * 4) + 0x14))();
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  return 1;
}



void fn_002afec4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      (**(code **)(**(int **)(*(int *)(param_1 + 4) + iVar1 * 4) + 0x28))();
    }
    iVar1 = *(int *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0x20) + -1;
    if (iVar1 <= iVar3) {
      do {
        piVar4 = (int *)(*(int *)(param_1 + 4) + iVar3 * 4);
        piVar2 = (int *)*piVar4;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
        *piVar4 = 0;
        iVar1 = *(int *)(param_1 + 0x18);
        iVar3 = iVar3 + -1;
      } while (iVar1 <= iVar3);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    fn_0079868c(param_1 + 4,iVar1,0);
  }
  return;
}



void fn_002afe84(void)

{
  return;
}



void fn_002afe58(void)

{
  if (DAT_0089187c != 0) {
    fn_0012d73c();
    DAT_0089187c = 0;
  }
  DAT_00891884 = 0;
  return;
}



int fn_002afe44(void)

{
  return (int)(short)DAT_00891884;
}



void fn_002afd5c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_118 [256];
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = 0x50584f42;
  uStack_14 = 0;
  fn_00301f50(auStack_118,0x100);
  fn_00101a50(auStack_118,0x80,L"rom:/data/Field/Hit/%s/%s_W.param",param_1,param_1);
  DAT_0089187c = fn_0011c184(auStack_118,param_2,4,5);
  iVar1 = fn_00145ac0();
  iVar2 = fn_0012a26c(DAT_0089187c);
  if (((iVar1 != 0) && (0 < iVar2)) && (iVar2 = fn_00147e6c(iVar1,&local_18,4), iVar2 == 0)) {
    DAT_00891880 = iVar1 + 4;
    iVar1 = 0;
    do {
      if (*(short *)(DAT_00891880 + iVar1 * 0x10 + 8) == -1) break;
      DAT_00891884 = DAT_00891884 + 1;
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < 0x40);
  }
  return;
}



void fn_002afd48(void)

{
  return;
}


