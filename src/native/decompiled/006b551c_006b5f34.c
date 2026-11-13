#include "006b551c_006b5f34.h"



undefined4
fn_006b5f34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 == 0) {
    uVar2 = fn_006b48ec(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4
fn_006b5ecc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 == 0) {
    uVar2 = fn_006b4634(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4
fn_006b5e64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 == 0) {
    uVar2 = fn_006b42e0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



char fn_006b5df8(int param_1)

{
  char cVar1;
  
  cVar1 = **(int **)(param_1 + 4) != 0;
  if ((*(int **)(param_1 + 4))[1] != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}



bool fn_006b5dc8(int param_1)

{
  char cVar1;
  
  cVar1 = **(int **)(param_1 + 4) != 0;
  if ((*(int **)(param_1 + 4))[1] != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1 == '\x02';
}



bool fn_006b5db4(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 4) + param_2 * 4) != 0;
}



undefined4 fn_006b5ce8(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  fn_0020bbc4(auStack_28,*(int *)(param_1 + 0x10) + param_2 * 0x104 + 0x10);
  uVar1 = fn_006bfdec(auStack_24);
  uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),**(undefined4 **)(param_1 + 4));
  fn_0020bbc4(auStack_20,uVar2);
  uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                       *(undefined4 *)(*(int *)(param_1 + 4) + 4));
  fn_0020bbc4(auStack_18,uVar2);
  uVar3 = fn_006bfdec(auStack_1c);
  if ((uVar3 < uVar1) && (uVar3 = fn_006bfdec(auStack_14), uVar3 < uVar1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



int * fn_006b5998(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar1 = param_1 + param_2 * 0x1c;
  uVar4 = 0;
  piVar5 = (int *)(iVar1 + 0x34);
  do {
    iVar2 = fn_00163940((int)(short)piVar5[uVar4 + 2]);
    if (iVar2 != 0) {
      uVar4 = uVar4 + 1;
    }
  } while (iVar2 != 0 && uVar4 < 5);
  if ((0 < (int)uVar4) && (*piVar5 <= param_4)) {
    uVar6 = *(undefined4 *)(iVar1 + 0x38);
    iVar1 = fn_00300f74(param_3,uVar6);
    iVar2 = fn_00300f74(param_4,uVar6);
    if (iVar1 != iVar2) {
      iVar1 = fn_00163868(uVar4);
      return piVar5 + iVar1 + 2;
    }
  }
  param_1 = param_1 + param_2 * 0xc;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8) - iVar2 >> 3;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return (int *)0x0;
    }
    iVar3 = *(int *)(iVar2 + iVar1 * 8);
  } while ((iVar3 <= param_3) || (param_4 < iVar3));
  return (int *)(iVar2 + iVar1 * 8 + 4);
}



void fn_006b56d8(int param_1,uint *param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint *local_28;
  
  puVar13 = (uint *)0x0;
  uVar11 = 0;
  iVar1 = param_1 + param_3 * 0x1c;
  puVar14 = (uint *)(iVar1 + 0x34);
  local_28 = param_4;
  do {
    iVar2 = fn_00163940((int)(short)puVar14[uVar11 + 2]);
    if (iVar2 != 0) {
      uVar11 = uVar11 + 1;
    }
  } while (iVar2 != 0 && uVar11 < 5);
  if ((0 < (int)uVar11) && (puVar3 = (uint *)*puVar14, (int)puVar3 <= (int)param_5)) {
    for (; puVar3 <= param_5; puVar3 = (uint *)((int)puVar3 + *(int *)(iVar1 + 0x38))) {
      if ((param_4 < puVar3) && (puVar3 <= param_5)) {
        iVar1 = fn_00163868(uVar11);
        puVar13 = puVar14 + iVar1 + 2;
        break;
      }
    }
  }
  local_28 = puVar13;
  if (puVar13 != (uint *)0x0) {
    puVar6 = (undefined4 *)param_2[1];
    if (puVar6 == (undefined4 *)param_2[2]) {
      fn_007989d4(param_2,puVar6,&local_28);
    }
    else {
      param_2[1] = (uint)(puVar6 + 1);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = puVar13;
      }
    }
  }
  param_1 = param_1 + param_3 * 0xc;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = (*(int *)(param_1 + 8) - iVar2 >> 3) + -1;
  if (-1 < iVar1) {
    while ((iVar7 = *(int *)(iVar2 + iVar1 * 8), iVar7 <= (int)param_4 || ((int)param_5 < iVar7))) {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return;
      }
    }
    piVar12 = (int *)param_2[1];
    iVar1 = iVar2 + iVar1 * 8 + 4;
    if (piVar12 == (int *)param_2[2]) {
      uVar11 = (int)((int)piVar12 - *param_2) >> 2;
      if ((uint)((int)((int)param_2[2] - *param_2) >> 2) <= uVar11) {
        uVar15 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
        if (uVar15 < uVar11 + 0x20) {
          uVar15 = uVar11 + 0x20;
        }
        piVar4 = (int *)fn_00100fc6(uVar15 << 2,0);
        piVar9 = piVar4;
        for (piVar8 = (int *)*param_2; piVar8 != piVar12; piVar8 = piVar8 + 1) {
          if (piVar9 != (int *)0x0) {
            *piVar9 = *piVar8;
          }
          piVar9 = piVar9 + 1;
        }
        piVar8 = (int *)(((int)piVar12 - *param_2 & 0xfffffffc) + (int)piVar4);
        if (piVar8 != (int *)0x0) {
          *piVar8 = iVar1;
        }
        piVar9 = (int *)param_2[1];
        piVar8 = (int *)(((int)piVar12 - *param_2 & 0xfffffffc) + (int)piVar4);
        for (; piVar12 != piVar9; piVar12 = piVar12 + 1) {
          piVar8 = piVar8 + 1;
          if (piVar8 != (int *)0x0) {
            *piVar8 = *piVar12;
          }
        }
        uVar5 = *param_2;
        uVar10 = param_2[1];
        uVar11 = uVar5;
        if (uVar10 < uVar5) {
          do {
            uVar11 = uVar11 + 4;
          } while (uVar11 != uVar10);
        }
        fn_001008c4(uVar5,(int)(param_2[2] - uVar5) >> 2,0);
        param_2[2] = (uint)(piVar4 + uVar15);
        param_2[1] = (uint)(piVar4 + ((int)(uVar10 - uVar5) >> 2) + 1);
        *param_2 = (uint)piVar4;
        return;
      }
      param_2[1] = (uint)(piVar12 + 1);
      if (piVar12 != (int *)0x0) {
        *piVar12 = piVar12[-1];
      }
      piVar8 = piVar12 + -1;
      piVar9 = piVar12;
      if (piVar12 < piVar8) {
        if (0 < (int)piVar8 - (int)piVar12) {
          iVar2 = (int)piVar8 - (int)piVar12 >> 2;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + -1;
            piVar12[iVar7 + -1] = piVar8[iVar7 + -1];
            iVar7 = iVar7 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        while (piVar12 != piVar8) {
          piVar8 = piVar8 + -1;
          piVar9[-1] = *piVar8;
          piVar9 = piVar9 + -1;
        }
      }
      *piVar12 = iVar1;
      return;
    }
    param_2[1] = (uint)(piVar12 + 1);
    if (piVar12 != (int *)0x0) {
      *piVar12 = iVar1;
    }
  }
  return;
}



undefined4 fn_006b5694(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((byte)param_1[1] < 7) {
    iVar1 = fn_006bc7fc(*(undefined4 *)(DAT_00897804 + 0x5c));
    iVar2 = (int)*param_1;
    bVar4 = iVar2 == 0;
    if (-1 < iVar2) {
      bVar4 = iVar1 == iVar2;
    }
    if (!bVar4 && (-1 < iVar2 && iVar2 <= iVar1)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



int fn_006b5640(int *param_1)

{
  return *(int *)(*param_1 + 0x28) - *(int *)(*param_1 + 0x24) >> 2;
}



int fn_006b5558(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(*(int *)(*param_1 + 0x2c) + 8) == '\0') {
    iVar1 = 0;
  }
  else {
    uVar2 = *(uint *)(*(int *)(*param_1 + 0x2c) + 0x28);
    iVar1 = (int)((longlong)(int)uVar2 * -0x77777777 + ((ulonglong)uVar2 << 0x20) >> 0x20);
    iVar1 = 0xf - ((iVar1 >> 4) - (iVar1 >> 0x1f));
  }
  return iVar1;
}



undefined1 fn_006b551c(int *param_1)

{
  return *(undefined1 *)(*(int *)(*param_1 + 0x2c) + 8);
}


