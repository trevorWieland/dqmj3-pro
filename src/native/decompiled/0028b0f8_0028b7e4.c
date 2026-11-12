#include "0028b0f8_0028b7e4.h"



undefined4 fn_0028b7e4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar6 = iVar1 + 4;
  if (*(int *)(iVar6 + param_2 * 4) == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = -param_2 + 3;
    *(undefined4 *)(iVar6 + param_2 * 4) = 0;
    if (0 < iVar3) {
      puVar4 = (undefined4 *)(iVar6 + param_2 * 4);
      puVar5 = puVar4;
      if ((-param_2 + 4U & 1) == 0) {
        puVar5 = puVar4 + 1;
        *puVar4 = *puVar5;
      }
      for (iVar3 = iVar3 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = puVar5[1];
        puVar5[1] = puVar5[2];
        puVar5 = puVar5 + 2;
      }
    }
    uVar2 = 1;
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return uVar2;
}



int fn_0028b7ac(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4) + 4;
  iVar1 = 0;
  do {
    if (*(int *)(iVar2 + iVar1 * 4) == 0) {
      *(undefined4 *)(iVar2 + iVar1 * 4) = param_2;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return -1;
}



void fn_0028b680(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x28) = 0;
  return;
}



void fn_0028b568(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  return;
}



undefined4 fn_0028b528(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined4 *)fn_0077f1f8(*(int *)(param_1 + 4) + 0x2c,500);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    fn_0017821c(puVar1,param_2,0xf0);
    *puVar1 = uVar2;
  }
  return uVar2;
}



void fn_0028b3b0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_30 [12];
  
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 4);
  iVar6 = 0;
  iVar4 = 0;
  do {
    iVar2 = *(int *)(iVar1 + 0x14 + iVar4 * 4);
    if (iVar2 == -0x1194d800) {
      piVar3 = (int *)fn_001c2350(DAT_008977e4);
LAB_0028b3f0:
      iVar2 = 0;
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar3;
      }
      if (piVar3 != (int *)0x0 && iVar2 != 0) {
        iVar6 = iVar6 + 1;
      }
    }
    else {
      uVar7 = fn_0077f008(iVar2,*(int *)(param_1 + 4) + 0x2c,500);
      iVar2 = (int)((ulonglong)uVar7 >> 0x20);
      piVar3 = (int *)uVar7;
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar3;
      }
      if (piVar3 != (int *)0x0 && iVar2 != 0) goto LAB_0028b3f0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  if (0 < iVar6) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + iVar5 * 4 + 0x14);
      if (iVar1 == -0x1194d800) {
        piVar3 = (int *)fn_001c2350(DAT_008977e4);
LAB_0028b434:
        if (piVar3 != (int *)0x0) {
          fn_0020bbc4(auStack_30,piVar3);
          fn_0020ba60(auStack_30);
        }
      }
      else {
        uVar7 = fn_0077f008(iVar1,*(int *)(param_1 + 4) + 0x2c,500);
        iVar1 = (int)((ulonglong)uVar7 >> 0x20);
        piVar3 = (int *)uVar7;
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
        }
        if (piVar3 != (int *)0x0 && iVar1 != 0) goto LAB_0028b434;
      }
      iVar1 = *(int *)(param_1 + 4);
      iVar6 = 0;
      iVar4 = 0;
      iVar5 = iVar5 + 1;
      do {
        iVar2 = *(int *)(iVar1 + 0x14 + iVar4 * 4);
        if (iVar2 == -0x1194d800) {
          piVar3 = (int *)fn_001c2350(DAT_008977e4);
LAB_0028b48c:
          iVar2 = 0;
          if (piVar3 != (int *)0x0) {
            iVar2 = *piVar3;
          }
          if (piVar3 != (int *)0x0 && iVar2 != 0) {
            iVar6 = iVar6 + 1;
          }
        }
        else {
          uVar7 = fn_0077f008(iVar2,*(int *)(param_1 + 4) + 0x2c,500);
          iVar2 = (int)((ulonglong)uVar7 >> 0x20);
          piVar3 = (int *)uVar7;
          if (piVar3 != (int *)0x0) {
            iVar2 = *piVar3;
          }
          if (piVar3 != (int *)0x0 && iVar2 != 0) goto LAB_0028b48c;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
    } while (iVar5 < iVar6);
  }
  return;
}



int * fn_0028b348(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + param_2 * 4 + 0x14);
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



undefined1 * fn_0028b1fc(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  iVar1 = fn_006b83e4();
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + iVar6 * 4 + 4);
      if (iVar2 == -0x1194d800) {
        piVar3 = (int *)fn_001c2350(DAT_008977e4);
      }
      else {
        uVar7 = fn_0077f008(iVar2,*(int *)(param_1 + 4) + 0x2c,500);
        iVar2 = (int)((ulonglong)uVar7 >> 0x20);
        piVar3 = (int *)uVar7;
        if (piVar3 != (int *)0x0) {
          iVar2 = *piVar3;
        }
        if (piVar3 == (int *)0x0 || iVar2 == 0) {
          piVar3 = (int *)0x0;
        }
      }
      fn_0020bbc4(auStack_30,piVar3);
      iVar2 = fn_006bfffc(auStack_2c);
      if (iVar2 != 0) {
        fn_0020b99c(auStack_30);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  puVar4 = (undefined1 *)fn_006b84b0(param_1);
  iVar1 = 0;
  puVar5 = puVar4;
  if (0 < (int)puVar4) {
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 4) + iVar1 * 4 + 0x14);
      if (iVar6 == -0x1194d800) {
        piVar3 = (int *)fn_001c2350(DAT_008977e4);
      }
      else {
        uVar7 = fn_0077f008(iVar6,*(int *)(param_1 + 4) + 0x2c,500);
        iVar6 = (int)((ulonglong)uVar7 >> 0x20);
        piVar3 = (int *)uVar7;
        if (piVar3 != (int *)0x0) {
          iVar6 = *piVar3;
        }
        if (piVar3 == (int *)0x0 || iVar6 == 0) {
          piVar3 = (int *)0x0;
        }
      }
      fn_0020bbc4(auStack_30,piVar3);
      iVar6 = fn_006bfffc(auStack_2c);
      if (iVar6 != 0) {
        fn_0020b99c(auStack_30);
      }
      iVar1 = iVar1 + 1;
      puVar5 = auStack_30;
    } while (iVar1 < (int)puVar4);
  }
  return puVar5;
}



void fn_0028b148(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_20 [8];
  
  iVar3 = 0;
  iVar1 = fn_006b83e4();
  if (0 < iVar1) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + iVar3 * 4 + 4);
      if (iVar1 == -0x1194d800) {
        piVar2 = (int *)fn_001c2350(DAT_008977e4);
LAB_0028b18c:
        if (piVar2 != (int *)0x0) {
          fn_0020bbc4(auStack_20);
          fn_0020ba60(auStack_20);
        }
      }
      else {
        uVar4 = fn_0077f008(iVar1,*(int *)(param_1 + 4) + 0x2c,500);
        iVar1 = (int)((ulonglong)uVar4 >> 0x20);
        piVar2 = (int *)uVar4;
        if (piVar2 != (int *)0x0) {
          iVar1 = *piVar2;
        }
        if (piVar2 != (int *)0x0 && iVar1 != 0) goto LAB_0028b18c;
      }
      iVar3 = iVar3 + 1;
      iVar1 = fn_006b83e4(param_1);
    } while (iVar3 < iVar1);
  }
  return;
}



int fn_0028b0f8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_r12;
  undefined8 uVar4;
  
  uVar4 = fn_006b84b0();
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
    in_r12 = 0x14;
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


