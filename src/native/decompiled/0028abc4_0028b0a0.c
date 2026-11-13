#include "0028abc4_0028b0a0.h"



int * fn_0028b0a0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + param_2 * 4 + 4);
  if (iVar1 == -0x1194d800) {
    piVar2 = (int *)fn_001c2350(DAT_008977e4);
    return piVar2;
  }
  uVar3 = fn_0077f008(iVar1,*(int *)(param_1 + 4) + 0x2c,500);
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  piVar2 = (int *)uVar3;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
  }
  if (piVar2 == (int *)0x0 || iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



int * fn_0028b09c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + param_2 * 4 + 4);
  if (iVar1 == -0x1194d800) {
    piVar2 = (int *)fn_001c2350(DAT_008977e4);
    return piVar2;
  }
  uVar3 = fn_0077f008(iVar1,*(int *)(param_1 + 4) + 0x2c,500);
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  piVar2 = (int *)uVar3;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
  }
  if (piVar2 == (int *)0x0 || iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



int fn_0028b074(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (499 < param_2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + 0x2c + param_2 * 0xf0;
  }
  return iVar1;
}



int fn_0028afe0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 0x2c + iVar1 * 0xf0) == 0) break;
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar1 < 500);
  iVar1 = 0;
  if (0 < iVar3) {
    do {
      if ((((-1 < iVar1) && (iVar1 < 500)) &&
          (iVar2 = *(int *)(param_1 + 4) + 0x2c + iVar1 * 0xf0, iVar2 != 0)) &&
         (*(int *)(iVar2 + 0xe0) == param_2)) {
        return iVar2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  return 0;
}



int fn_0028af90(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_r12;
  undefined8 uVar4;
  
  uVar4 = fn_006b83e4();
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  if (0 < iVar1) {
    iVar3 = *(int *)(param_1 + 4);
  }
  if (iVar1 != 0) {
    param_3 = 0;
    param_4 = param_3;
  }
  if (0 < iVar1) {
    in_r12 = 4;
  }
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar2 = param_4, 0 < iVar1)) {
    do {
      iVar2 = param_3 * 4;
      param_3 = param_3 + 1;
      if (*(int *)(iVar3 + in_r12 + iVar2) == param_2) {
        param_4 = 1;
      }
      iVar2 = param_4;
    } while (param_3 < iVar1);
  }
  return iVar2;
}



undefined4 fn_0028aec8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  iVar1 = fn_006b83e4();
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + iVar4 * 4 + 4);
      if (iVar2 == -0x1194d800) {
        piVar3 = (int *)fn_001c2350(DAT_008977e4);
LAB_0028af10:
        if (piVar3 != (int *)0x0) {
          fn_0020bbc4(auStack_28);
          iVar2 = fn_006bf5bc(auStack_24);
          if (0 < iVar2) {
            return 0;
          }
        }
      }
      else {
        uVar5 = fn_0077f008(iVar2,*(int *)(param_1 + 4) + 0x2c,500);
        iVar2 = (int)((ulonglong)uVar5 >> 0x20);
        piVar3 = (int *)uVar5;
        if (piVar3 != (int *)0x0) {
          iVar2 = *piVar3;
        }
        if (piVar3 != (int *)0x0 && iVar2 != 0) goto LAB_0028af10;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 1;
}



void fn_0028ae08(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_28 [16];
  
  iVar3 = 0;
  iVar1 = fn_006b83e4();
  if (0 < iVar1) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + iVar3 * 4 + 4);
      if (iVar1 == -0x1194d800) {
        piVar2 = (int *)fn_001c2350(DAT_008977e4);
LAB_0028ae54:
        if (piVar2 != (int *)0x0) {
          fn_0020bbc4(auStack_28);
          fn_0020b9c4(auStack_28);
        }
      }
      else {
        uVar4 = fn_0077f008(iVar1,*(int *)(param_1 + 4) + 0x2c,500);
        iVar1 = (int)((ulonglong)uVar4 >> 0x20);
        piVar2 = (int *)uVar4;
        if (piVar2 != (int *)0x0) {
          iVar1 = *piVar2;
        }
        if (piVar2 != (int *)0x0 && iVar1 != 0) goto LAB_0028ae54;
      }
      iVar3 = iVar3 + 1;
      iVar1 = fn_006b83e4(param_1);
    } while (iVar3 < iVar1);
  }
  return;
}



void fn_0028ad34(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = 0;
  do {
    if (*(short *)(iVar2 + iVar1 * 2 + 0x1d4ec) == param_2) {
      iVar1 = iVar1 * 4 + 0x1d53c;
LAB_0028ad90:
      if (*(int *)(iVar2 + iVar1) != 0) {
        return;
      }
      break;
    }
    if (*(short *)(iVar2 + iVar1 * 2 + 0x1d4ee) == param_2) {
      iVar1 = iVar1 * 4 + 0x1d540;
      goto LAB_0028ad90;
    }
    iVar1 = iVar1 + 2;
  } while (iVar1 < 0x28);
  iVar1 = fn_0012f254(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      if (*(short *)(*(int *)(param_1 + 4) + iVar1 * 2 + 0x1d4ec) == 0) {
        *(short *)(*(int *)(param_1 + 4) + iVar1 * 2 + 0x1d4ec) = (short)param_2;
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar1 * 4 + 0x1d53c) = param_3;
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x28);
  }
  return;
}



void fn_0028ad24(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x24) = 0;
  return;
}



void fn_0028acf4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  do {
    iVar2 = iVar2 + -1;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
  } while (iVar2 != 0);
  return;
}



undefined1 * fn_0028abc4(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  short *psVar4;
  short local_20 [2];
  short local_1c [2];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  if (param_2 == 0) {
    return param_1;
  }
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 0x2c + iVar1 * 0xf0) == 0) break;
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar1 < 500);
  puVar2 = (undefined1 *)0x0;
  if (0 < iVar3) {
    while (((((int)puVar2 < 0 || (499 < (int)puVar2)) ||
            (iVar1 = *(int *)(param_1 + 4) + 0x2c + (int)puVar2 * 0xf0, iVar1 == 0)) ||
           (*(int *)(iVar1 + 0xe0) != param_2))) {
      puVar2 = puVar2 + 1;
      if (iVar3 <= (int)puVar2) {
        return puVar2;
      }
    }
    *(undefined4 *)(iVar1 + 0xe0) = 0;
    *(undefined4 *)(iVar1 + 0xe4) = 0;
    *(undefined4 *)(iVar1 + 0xe8) = 0;
    *(undefined4 *)(iVar1 + 0xec) = 0;
    fn_0020bbc4(auStack_18,iVar1);
    local_20[0] = fn_006bf5bc(auStack_14);
    local_1c[0] = fn_006c0028(auStack_14);
    psVar4 = local_20;
    if (local_1c[0] < local_20[0]) {
      psVar4 = local_1c;
    }
    *(short *)(iVar1 + 0x22) = *psVar4;
    local_1c[0] = fn_006bf5c8(auStack_14);
    local_20[0] = fn_006c0114(auStack_14);
    psVar4 = local_1c;
    if (local_20[0] < local_1c[0]) {
      psVar4 = local_20;
    }
    *(short *)(iVar1 + 0x24) = *psVar4;
    puVar2 = auStack_18;
  }
  return puVar2;
}


