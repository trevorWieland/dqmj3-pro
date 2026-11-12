#include "0030208c_00302734.h"



void fn_00302734(undefined4 param_1)

{
  fn_00302bb8(8,param_1);
  return;
}



void fn_003026f0(int param_1)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffdf;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x28)) {
    fn_003026a4(param_1);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffcfff | 0x10;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffbfbf;
  return;
}



undefined4 fn_003026a4(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (*(uint *)(param_1 + 0x2c) <= *(uint *)(param_1 + 4)) {
    uVar1 = *(uint *)(param_1 + 4);
  }
  uVar3 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = uVar3 & 0xffd7ffff;
  if ((int)(uVar3 << 0xf) < 0) {
    if ((uVar1 != uVar4) && (iVar2 = fn_00302658(uVar4,uVar1 - uVar4,param_1), iVar2 != 0)) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 0x2c) = uVar4;
    *(uint *)(param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 8) = 0;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffeffff;
  }
  return 0;
}



undefined8 fn_00302658(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_3 + 0xc);
  uVar3 = *(undefined4 *)(param_3 + 0x14);
  iVar4 = param_2;
  iVar5 = param_3;
  if ((uVar2 & 0x20010) == 0) {
LAB_0030267c:
    uVar2 = fn_00401510(uVar3,param_1,param_2,uVar2,param_1,iVar4,iVar5);
    *(uint *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + (param_2 - (uVar2 & 0x7fffffff));
    uVar3 = 0;
    if (uVar2 == 0) goto LAB_003026a2;
  }
  else {
    iVar1 = fn_0040150c(uVar3,*(undefined4 *)(param_3 + 0x18));
    if (-1 < iVar1) {
      uVar2 = uVar2 & 0xfffdffef;
      *(uint *)(param_3 + 0xc) = uVar2;
      goto LAB_0030267c;
    }
  }
  fn_00302644(param_3);
  uVar3 = 0xffffffff;
LAB_003026a2:
  return CONCAT44(param_1,uVar3);
}



void fn_00302644(undefined4 *param_1)

{
  param_1[3] = param_1[3] & 0xffdfffff | 0x80;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}



uint fn_003023b0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  
  puVar10 = (uint *)(param_1 + 0x30);
  (**(code **)(*param_2 + 0xa0))(param_2,param_3,param_3,*(code **)(*param_2 + 0xa0),param_4);
  puVar4 = *(undefined4 **)(param_1 + 0x34);
  uVar9 = 0;
  if ((int)((int)puVar4 - *puVar10) >> 2 != 0) {
    do {
      uVar11 = (int)((int)puVar4 - *puVar10) >> 2;
      if (uVar11 <= uVar9) {
        fn_002ff628(9,&DAT_008c7645,&DAT_008c7645,uVar9,uVar11);
      }
      if (*(int *)(*puVar10 + uVar9 * 4) == 0) {
        uVar11 = (int)(*(int *)(param_1 + 0x34) - *puVar10) >> 2;
        if (uVar11 <= uVar9) {
          fn_002ff628(9,&DAT_008c7645,&DAT_008c7645,uVar9,uVar11);
        }
        *(int **)(*puVar10 + uVar9 * 4) = param_2;
        return uVar9;
      }
      puVar4 = *(undefined4 **)(param_1 + 0x34);
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((int)((int)puVar4 - *puVar10) >> 2));
  }
  if (puVar4 == *(undefined4 **)(param_1 + 0x38)) {
    uVar9 = (int)((int)puVar4 - *puVar10) >> 2;
    if (uVar9 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x38) - *puVar10) >> 2)) {
      *(undefined4 **)(param_1 + 0x34) = puVar4 + 1;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = puVar4[-1];
      }
      puVar2 = puVar4 + -1;
      puVar6 = puVar4;
      if (puVar4 < puVar2) {
        if (0 < (int)puVar2 - (int)puVar4) {
          iVar8 = (int)puVar2 - (int)puVar4 >> 2;
          iVar5 = 0;
          do {
            iVar8 = iVar8 + -1;
            puVar4[iVar5 + -1] = puVar2[iVar5 + -1];
            iVar5 = iVar5 + -1;
          } while (iVar8 != 0);
        }
      }
      else {
        while (puVar4 != puVar2) {
          puVar2 = puVar2 + -1;
          puVar6[-1] = *puVar2;
          puVar6 = puVar6 + -1;
        }
      }
      *puVar4 = param_2;
    }
    else {
      uVar11 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (uVar11 < uVar9 + 0x20) {
        uVar11 = uVar9 + 0x20;
      }
      puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
      puVar6 = puVar1;
      for (puVar2 = (undefined4 *)*puVar10; puVar2 != puVar4; puVar2 = puVar2 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar2;
        }
        puVar6 = puVar6 + 1;
      }
      puVar2 = (undefined4 *)(((int)puVar4 - *puVar10 & 0xfffffffc) + (int)puVar1);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = param_2;
      }
      puVar6 = *(undefined4 **)(param_1 + 0x34);
      puVar2 = (undefined4 *)(((int)puVar4 - *puVar10 & 0xfffffffc) + (int)puVar1);
      for (; puVar4 != puVar6; puVar4 = puVar4 + 1) {
        puVar2 = puVar2 + 1;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar4;
        }
      }
      uVar7 = *puVar10;
      uVar3 = *(uint *)(param_1 + 0x34);
      uVar9 = uVar7;
      if (uVar3 < uVar7) {
        do {
          uVar9 = uVar9 + 4;
        } while (uVar9 != uVar3);
      }
      fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0x38) - uVar7) >> 2,0);
      *(undefined4 **)(param_1 + 0x38) = puVar1 + uVar11;
      *(undefined4 **)(param_1 + 0x34) = puVar1 + ((int)(uVar3 - uVar7) >> 2) + 1;
      *puVar10 = (uint)puVar1;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x34) = puVar4 + 1;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = param_2;
    }
  }
  return ((int)(*(int *)(param_1 + 0x34) - *puVar10) >> 2) - 1;
}



int fn_00302364(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  if ((uVar3 & 3) == 0) {
    puVar2 = (undefined4 *)fn_002ff798();
    *puVar2 = 1;
    return -1;
  }
  if ((int)(uVar3 << 0x1a) < 0) {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar1 = (*(int *)(param_1 + 4) + *(int *)(param_1 + 0x18)) - *(int *)(param_1 + 0x10);
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    if (((int)(uVar3 << 0xc) < 0) && (0 < iVar1)) {
      return iVar1 + -1;
    }
  }
  else {
    iVar1 = iVar1 - (uint)*(byte *)(param_1 + 0x49);
  }
  return iVar1;
}



int fn_00302340(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_002fea64();
  if ((int)((uint)*(byte *)(*piVar1 + param_1) << 0x1b) < 0) {
    return param_1 + 0x20;
  }
  return param_1;
}



uint fn_0030208c(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  puVar9 = (uint *)(param_1 + 0xc);
  uVar10 = 0;
  piVar3 = *(int **)(param_1 + 0x10);
  if ((int)((int)piVar3 - *puVar9) >> 2 != 0) {
    do {
      uVar11 = (int)((int)piVar3 - *puVar9) >> 2;
      if (uVar11 <= uVar10) {
        fn_002ff628(9,&DAT_008c765c,&DAT_008c765c,uVar10,uVar11);
        param_4 = uVar11;
      }
      if (*(int *)(*puVar9 + uVar10 * 4) == 0) {
        uVar11 = (int)(*(int *)(param_1 + 0x10) - *puVar9) >> 2;
        if (uVar11 <= uVar10) {
          fn_002ff628(9,&DAT_008c765c,&DAT_008c765c,uVar10,uVar11);
        }
        *(int *)(*puVar9 + uVar10 * 4) = param_2;
        goto LAB_003022f4;
      }
      piVar3 = *(int **)(param_1 + 0x10);
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)((int)((int)piVar3 - *puVar9) >> 2));
  }
  if (piVar3 == *(int **)(param_1 + 0x14)) {
    uVar10 = (int)((int)piVar3 - *puVar9) >> 2;
    if (uVar10 < (uint)((int)((int)*(int **)(param_1 + 0x14) - *puVar9) >> 2)) {
      *(int **)(param_1 + 0x10) = piVar3 + 1;
      if (piVar3 != (int *)0x0) {
        *piVar3 = piVar3[-1];
      }
      piVar5 = piVar3 + -1;
      piVar6 = piVar3;
      if (piVar3 < piVar5) {
        if (0 < (int)piVar5 - (int)piVar3) {
          iVar8 = (int)piVar5 - (int)piVar3 >> 2;
          iVar4 = 0;
          do {
            iVar8 = iVar8 + -1;
            piVar3[iVar4 + -1] = piVar5[iVar4 + -1];
            iVar4 = iVar4 + -1;
          } while (iVar8 != 0);
        }
      }
      else {
        while (piVar3 != piVar5) {
          piVar5 = piVar5 + -1;
          piVar6[-1] = *piVar5;
          piVar6 = piVar6 + -1;
        }
      }
      *piVar3 = param_2;
    }
    else {
      uVar11 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
      if (uVar11 < uVar10 + 0x20) {
        uVar11 = uVar10 + 0x20;
      }
      piVar1 = (int *)fn_00100fc6(uVar11 << 2,0);
      piVar6 = piVar1;
      for (piVar5 = (int *)*puVar9; piVar5 != piVar3; piVar5 = piVar5 + 1) {
        if (piVar6 != (int *)0x0) {
          *piVar6 = *piVar5;
        }
        piVar6 = piVar6 + 1;
      }
      piVar5 = (int *)(((int)piVar3 - *puVar9 & 0xfffffffc) + (int)piVar1);
      if (piVar5 != (int *)0x0) {
        *piVar5 = param_2;
      }
      piVar6 = *(int **)(param_1 + 0x10);
      piVar5 = (int *)(((int)piVar3 - *puVar9 & 0xfffffffc) + (int)piVar1);
      for (; piVar3 != piVar6; piVar3 = piVar3 + 1) {
        piVar5 = piVar5 + 1;
        if (piVar5 != (int *)0x0) {
          *piVar5 = *piVar3;
        }
      }
      uVar2 = *puVar9;
      uVar7 = *(uint *)(param_1 + 0x10);
      uVar10 = uVar2;
      if (uVar7 < uVar2) {
        do {
          uVar10 = uVar10 + 4;
        } while (uVar10 != uVar7);
      }
      fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x14) - uVar2) >> 2,0,uVar2,param_4);
      *(int **)(param_1 + 0x14) = piVar1 + uVar11;
      *(int **)(param_1 + 0x10) = piVar1 + ((int)(uVar7 - uVar2) >> 2) + 1;
      *puVar9 = (uint)piVar1;
    }
  }
  else {
    *(int **)(param_1 + 0x10) = piVar3 + 1;
    if (piVar3 != (int *)0x0) {
      *piVar3 = param_2;
    }
  }
  uVar10 = ((int)(*(int *)(param_1 + 0x10) - *puVar9) >> 2) - 1;
LAB_003022f4:
  DAT_008917a4 = DAT_008917a4 + 1;
  if (0xffffff < DAT_008917a4) {
    DAT_008917a4 = 1;
  }
  *(uint *)(param_2 + 0x13c) = DAT_008917a4 | 0x4000000;
  return uVar10;
}


