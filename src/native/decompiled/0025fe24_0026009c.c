#include "0025fe24_0026009c.h"



void fn_0026009c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  
  if (param_3 != 0) {
    uVar1 = fn_00156f30(param_2,0);
    uVar2 = fn_0014481c(DAT_008977e8);
    fn_00144ac0(uVar2,uVar1,param_1 + 0x68);
    return;
  }
  puVar12 = (uint *)(param_1 + 0x68);
  puVar11 = *(undefined4 **)(param_1 + 0x6c);
  if (puVar11 != *(undefined4 **)(param_1 + 0x70)) {
    *(undefined4 **)(param_1 + 0x6c) = puVar11 + 1;
    if (puVar11 != (undefined4 *)0x0) {
      *puVar11 = param_2;
    }
    return;
  }
  uVar5 = (int)((int)puVar11 - *puVar12) >> 2;
  if ((uint)((int)((int)*(undefined4 **)(param_1 + 0x70) - *puVar12) >> 2) <= uVar5) {
    uVar13 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
    if (uVar13 < uVar5 + 0x20) {
      uVar13 = uVar5 + 0x20;
    }
    puVar3 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
    puVar8 = puVar3;
    for (puVar7 = (undefined4 *)*puVar12; puVar7 != puVar11; puVar7 = puVar7 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar7;
      }
      puVar8 = puVar8 + 1;
    }
    puVar7 = (undefined4 *)(((int)puVar11 - *puVar12 & 0xfffffffc) + (int)puVar3);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_2;
    }
    puVar8 = *(undefined4 **)(param_1 + 0x6c);
    puVar7 = (undefined4 *)(((int)puVar11 - *puVar12 & 0xfffffffc) + (int)puVar3);
    for (; puVar11 != puVar8; puVar11 = puVar11 + 1) {
      puVar7 = puVar7 + 1;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar11;
      }
    }
    uVar4 = *puVar12;
    uVar9 = *(uint *)(param_1 + 0x6c);
    uVar5 = uVar4;
    if (uVar9 < uVar4) {
      do {
        uVar5 = uVar5 + 4;
      } while (uVar5 != uVar9);
    }
    fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x70) - uVar4) >> 2,0);
    *(undefined4 **)(param_1 + 0x70) = puVar3 + uVar13;
    *(undefined4 **)(param_1 + 0x6c) = puVar3 + ((int)(uVar9 - uVar4) >> 2) + 1;
    *puVar12 = (uint)puVar3;
    return;
  }
  *(undefined4 **)(param_1 + 0x6c) = puVar11 + 1;
  if (puVar11 != (undefined4 *)0x0) {
    *puVar11 = puVar11[-1];
  }
  puVar7 = puVar11 + -1;
  puVar8 = puVar11;
  if (puVar11 < puVar7) {
    if (0 < (int)puVar7 - (int)puVar11) {
      iVar10 = (int)puVar7 - (int)puVar11 >> 2;
      iVar6 = 0;
      do {
        iVar10 = iVar10 + -1;
        puVar11[iVar6 + -1] = puVar7[iVar6 + -1];
        iVar6 = iVar6 + -1;
      } while (iVar10 != 0);
    }
  }
  else {
    while (puVar11 != puVar7) {
      puVar7 = puVar7 + -1;
      puVar8[-1] = *puVar7;
      puVar8 = puVar8 + -1;
    }
  }
  *puVar11 = param_2;
  return;
}



void fn_00260088(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x54)) {
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  }
  return;
}



bool fn_0026005c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int in_r12;
  
  piVar1 = *(int **)(param_1 + 0x68);
  piVar2 = *(int **)(param_1 + 0x6c);
  while( true ) {
    if (piVar1 != piVar2) {
      in_r12 = *piVar1;
    }
    if (piVar1 == piVar2 || in_r12 == param_2) break;
    piVar1 = piVar1 + 1;
  }
  return piVar2 != piVar1;
}



void fn_00260014(int param_1,int param_2)

{
  int *piVar1;
  
  if (-1 < *(int *)(param_1 + 0x54)) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x54));
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    }
  }
  return;
}



int fn_0025ff70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int in_r12;
  
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6bc4();
  uVar7 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b71a8(uVar2,uVar7 & 0xff);
      piVar5 = *(int **)(param_1 + 0x68);
      piVar6 = *(int **)(param_1 + 0x6c);
      while( true ) {
        if (piVar5 != piVar6) {
          in_r12 = *piVar5;
        }
        if (piVar5 == piVar6 || in_r12 == iVar3) break;
        piVar5 = piVar5 + 1;
      }
      if ((piVar6 == piVar5) && (iVar4 = fn_006a8a84(param_1,iVar3 + 0x3c,iVar3 + 8,1), iVar4 != 0)
         ) {
        return iVar3;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar1);
  }
  return 0;
}



void fn_0025ff50(void)

{
  DAT_008bf668 = 0;
  DAT_008bf66c = 0;
  return;
}



int fn_0025ff10(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008bf668;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008bf66c;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008bf668;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008bf668 + (int)param_1 * 0x20;
  }
  if ((-1 < (int)param_2) && (param_2 < 5)) {
    iVar2 = iVar2 + param_2 * 4;
  }
  iVar2 = (int)*(short *)(iVar2 + 8);
  iVar1 = DAT_008bf670;
  if ((-1 < iVar2) && (iVar2 < DAT_008bf674)) {
    iVar1 = DAT_008bf670 + iVar2 * 8;
  }
  return (int)*(short *)(iVar1 + 4);
}



int fn_0025fed0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008bf668;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008bf66c;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008bf668;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008bf668 + (int)param_1 * 0x20;
  }
  if ((-1 < (int)param_2) && (param_2 < 5)) {
    iVar2 = iVar2 + param_2 * 4;
  }
  iVar2 = (int)*(short *)(iVar2 + 8);
  iVar1 = DAT_008bf670;
  if ((-1 < iVar2) && (iVar2 < DAT_008bf674)) {
    iVar1 = DAT_008bf670 + iVar2 * 8;
  }
  return (int)*(short *)(iVar1 + 2);
}



int fn_0025fe88(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008bf668;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008bf66c;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008bf668;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008bf668 + (int)param_1 * 0x20;
  }
  return (int)(short)(*(short *)(iVar2 + 10) + *(short *)(iVar2 + 0xe) + *(short *)(iVar2 + 0x12) +
                      *(short *)(iVar2 + 0x16) + *(short *)(iVar2 + 0x1a));
}



int fn_0025fe48(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008bf668;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008bf66c;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008bf668;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008bf668 + (int)param_1 * 0x20;
  }
  if ((-1 < (int)param_2) && (param_2 < 5)) {
    iVar2 = iVar2 + param_2 * 4;
  }
  iVar2 = (int)*(short *)(iVar2 + 8);
  iVar1 = DAT_008bf670;
  if ((-1 < iVar2) && (iVar2 < DAT_008bf674)) {
    iVar1 = DAT_008bf670 + iVar2 * 8;
  }
  return (int)*(short *)(iVar1 + 6);
}



void fn_0025fe24(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008bf668;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008bf66c;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008bf668;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008bf668 + (int)param_1 * 0x20;
  }
  fn_003e6aec((int)*(short *)(iVar2 + 4));
  return;
}


