#include "0015ed28_0015f1d0.h"



undefined4 fn_0015f1d0(int param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;
  
  *(char *)(param_1 + 0x26) = (char)param_2;
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(&DAT_008f0660 + (uint)DAT_008f08de * 4);
  *(undefined2 *)((int)puVar2 + 0x1a) = param_2;
  *puVar2 = *puVar2 | 0x10000000;
  fn_00193380();
  return 1;
}



undefined4 fn_0015ef58(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (param_4 == 0xffffffff) {
    param_4 = uVar2;
  }
  if (uVar2 < param_4) {
    uVar2 = param_4 + param_3;
  }
  else if (uVar2 < param_4 + param_3) {
    uVar2 = param_4 + param_3;
  }
  uVar1 = fn_0015efdc(*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x18) + uVar2);
  fn_0015f0f4(param_1,uVar1);
  *(uint *)(param_1 + 0x10) = uVar2;
  fn_00301a9c(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18) + param_4,param_2,param_3);
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x0015ef88) */

undefined4 fn_0015ef4c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_3 == 0) {
    return 1;
  }
  uVar3 = *(uint *)(iVar1 + 0x10);
  uVar4 = uVar3;
  if (uVar3 < uVar3 + param_3) {
    uVar4 = uVar3 + param_3;
  }
  uVar2 = fn_0015efdc(*(undefined4 *)(iVar1 + 0x14),*(int *)(iVar1 + 0x18) + uVar4);
  fn_0015f0f4(iVar1,uVar2);
  *(uint *)(iVar1 + 0x10) = uVar4;
  fn_00301a9c(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x18) + uVar3,param_2,param_3);
  return 1;
}



void fn_0015f0f4(int param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  
  if (*(uint *)(param_1 + 0x14) != param_2) {
    iVar1 = fn_00170e68(param_1);
    if (iVar1 == 0) {
      *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfb;
      iVar1 = fn_00170e68(param_1,param_2);
    }
    uVar3 = *(uint *)(param_1 + 0x14);
    if (param_2 <= *(uint *)(param_1 + 0x14)) {
      uVar3 = param_2;
    }
    fn_00301a9c(iVar1,*(undefined4 *)(param_1 + 0xc),uVar3);
    if (*(int *)(param_1 + 0xc) != 0) {
      pcVar2 = *(code **)(*(int *)(param_1 + 0xc) + -8);
      if (pcVar2 == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (*pcVar2)();
      }
    }
    *(int *)(param_1 + 0xc) = iVar1;
    *(uint *)(param_1 + 0x14) = param_2;
  }
  return;
}



uint fn_0015efdc(uint param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  
  if (param_2 <= param_1) {
    return param_1;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  uVar6 = 0;
  if (DAT_008b637e == '\0') {
    uVar4 = 0;
  }
  else {
    puVar1 = (undefined4 *)fn_001775e8(DAT_008b63d8,param_2,param_3);
    uVar4 = *puVar1;
  }
  iVar2 = fn_00170de0(&DAT_008e769c,0xe,uVar4);
  if (iVar2 != 0) {
    if (DAT_008b637e != '\0') {
      fn_001775e8(DAT_008b63d8);
    }
    iVar2 = fn_00170de0(&DAT_008e769c,0xe);
    piVar5 = *(int **)(iVar2 + 0x38);
    uVar6 = 0;
    if ((piVar5 != (int *)0x0) && (uVar6 = 0, param_2 <= (uint)piVar5[2])) {
      uVar3 = 0;
      if (piVar5[1] != 0) {
        do {
          if (param_2 <= *(uint *)(*piVar5 + uVar3 * 0x34 + 8)) {
            uVar6 = *(uint *)(*piVar5 + uVar3 * 0x34 + 8);
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)piVar5[1]);
      }
    }
  }
  if (param_2 <= uVar6) {
    param_1 = uVar6;
  }
  for (; param_1 < param_2; param_1 = param_1 << 1) {
  }
  return param_1;
}



int fn_0015ed58(int param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  
  piVar9 = (int *)(param_1 + 0xc);
  piVar10 = (int *)(param_2 + 0xc);
  if (piVar10 != piVar9) {
    puVar5 = (undefined1 *)*piVar10;
    puVar8 = (undefined1 *)*piVar9;
    uVar11 = *(int *)(param_2 + 0x10) - (int)puVar5;
    if ((uint)(*(int *)(param_1 + 0x14) - (int)puVar8) < uVar11) {
      uVar1 = *(int *)(param_1 + 0x10) - (int)puVar8;
      uVar3 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      uVar12 = uVar1 + 0x20;
      if (uVar1 + 0x20 <= uVar3) {
        uVar12 = uVar3;
      }
      if ((uVar11 <= uVar12) && (uVar11 = uVar3, uVar3 < uVar1 + 0x20)) {
        uVar11 = uVar1 + 0x20;
      }
      puVar2 = (undefined1 *)fn_0015ece0(uVar11);
      puVar6 = *(undefined1 **)(param_2 + 0x10);
      puVar8 = puVar2;
      for (puVar5 = (undefined1 *)*piVar10; puVar5 != puVar6; puVar5 = puVar5 + 1) {
        if (puVar8 != (undefined1 *)0x0) {
          *puVar8 = *puVar5;
        }
        puVar8 = puVar8 + 1;
      }
      if (*piVar9 != 0) {
        pcVar4 = *(code **)(*piVar9 + -8);
        if (pcVar4 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar4)();
        }
      }
      *piVar9 = (int)puVar2;
      *(undefined1 **)(param_1 + 0x10) = puVar2 + (*(int *)(param_2 + 0x10) - *piVar10);
      *(undefined1 **)(param_1 + 0x14) = puVar2 + uVar11;
    }
    else {
      uVar12 = *(int *)(param_1 + 0x10) - (int)puVar8;
      if (uVar12 < uVar11) {
        if (0 < (int)uVar12) {
          puVar2 = puVar8 + -1;
          puVar6 = puVar5 + -1;
          if ((uVar12 & 1) != 0) {
            *puVar8 = *puVar5;
            puVar2 = puVar8;
            puVar6 = puVar5;
          }
          for (iVar7 = (int)uVar12 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2[1] = puVar6[1];
            puVar6 = puVar6 + 2;
            puVar2 = puVar2 + 2;
            *puVar2 = *puVar6;
          }
        }
        *(int *)(param_1 + 0x10) = (*(int *)(param_2 + 0x10) - *piVar10) + *piVar9;
        puVar2 = *(undefined1 **)(param_2 + 0x10);
        puVar8 = (undefined1 *)(*piVar9 + uVar12);
        for (puVar5 = (undefined1 *)(*piVar10 + uVar12); puVar5 != puVar2; puVar5 = puVar5 + 1) {
          if (puVar8 != (undefined1 *)0x0) {
            *puVar8 = *puVar5;
          }
          puVar8 = puVar8 + 1;
        }
      }
      else {
        if (0 < (int)uVar11) {
          puVar2 = puVar5 + -1;
          puVar6 = puVar8 + -1;
          if ((uVar11 & 1) != 0) {
            *puVar8 = *puVar5;
            puVar2 = puVar5;
            puVar6 = puVar8;
          }
          for (iVar7 = (int)uVar11 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar6[1] = puVar2[1];
            puVar2 = puVar2 + 2;
            puVar6 = puVar6 + 2;
            *puVar6 = *puVar2;
          }
        }
        iVar7 = (*(int *)(param_2 + 0x10) - *piVar10) + *piVar9;
        *(int *)(param_1 + 0x10) = iVar7;
        *(int *)(param_1 + 0x14) = iVar7;
      }
    }
  }
  return param_1;
}



int fn_0015ed28(int param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  
  fn_0048b3d8(param_1 + 4);
  fn_0014f200(param_1 + 0x234,param_2);
  piVar9 = (int *)(param_1 + 0x2f0);
  piVar10 = (int *)(param_2 + 0xc);
  if (piVar10 != piVar9) {
    puVar5 = (undefined1 *)*piVar10;
    puVar8 = (undefined1 *)*piVar9;
    uVar11 = *(int *)(param_2 + 0x10) - (int)puVar5;
    if ((uint)(*(int *)(param_1 + 0x2f8) - (int)puVar8) < uVar11) {
      uVar1 = *(int *)(param_1 + 0x2f4) - (int)puVar8;
      uVar3 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      uVar12 = uVar1 + 0x20;
      if (uVar1 + 0x20 <= uVar3) {
        uVar12 = uVar3;
      }
      if ((uVar11 <= uVar12) && (uVar11 = uVar3, uVar3 < uVar1 + 0x20)) {
        uVar11 = uVar1 + 0x20;
      }
      puVar2 = (undefined1 *)fn_0015ece0(uVar11);
      puVar6 = *(undefined1 **)(param_2 + 0x10);
      puVar8 = puVar2;
      for (puVar5 = (undefined1 *)*piVar10; puVar5 != puVar6; puVar5 = puVar5 + 1) {
        if (puVar8 != (undefined1 *)0x0) {
          *puVar8 = *puVar5;
        }
        puVar8 = puVar8 + 1;
      }
      if (*piVar9 != 0) {
        pcVar4 = *(code **)(*piVar9 + -8);
        if (pcVar4 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar4)();
        }
      }
      *piVar9 = (int)puVar2;
      *(undefined1 **)(param_1 + 0x2f4) = puVar2 + (*(int *)(param_2 + 0x10) - *piVar10);
      *(undefined1 **)(param_1 + 0x2f8) = puVar2 + uVar11;
    }
    else {
      uVar12 = *(int *)(param_1 + 0x2f4) - (int)puVar8;
      if (uVar12 < uVar11) {
        if (0 < (int)uVar12) {
          puVar2 = puVar8 + -1;
          puVar6 = puVar5 + -1;
          if ((uVar12 & 1) != 0) {
            *puVar8 = *puVar5;
            puVar2 = puVar8;
            puVar6 = puVar5;
          }
          for (iVar7 = (int)uVar12 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2[1] = puVar6[1];
            puVar6 = puVar6 + 2;
            puVar2 = puVar2 + 2;
            *puVar2 = *puVar6;
          }
        }
        *(int *)(param_1 + 0x2f4) = (*(int *)(param_2 + 0x10) - *piVar10) + *piVar9;
        puVar2 = *(undefined1 **)(param_2 + 0x10);
        puVar8 = (undefined1 *)(*piVar9 + uVar12);
        for (puVar5 = (undefined1 *)(*piVar10 + uVar12); puVar5 != puVar2; puVar5 = puVar5 + 1) {
          if (puVar8 != (undefined1 *)0x0) {
            *puVar8 = *puVar5;
          }
          puVar8 = puVar8 + 1;
        }
      }
      else {
        if (0 < (int)uVar11) {
          puVar2 = puVar5 + -1;
          puVar6 = puVar8 + -1;
          if ((uVar11 & 1) != 0) {
            *puVar8 = *puVar5;
            puVar2 = puVar5;
            puVar6 = puVar8;
          }
          for (iVar7 = (int)uVar11 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar6[1] = puVar2[1];
            puVar2 = puVar2 + 2;
            puVar6 = puVar6 + 2;
            *puVar6 = *puVar2;
          }
        }
        iVar7 = (*(int *)(param_2 + 0x10) - *piVar10) + *piVar9;
        *(int *)(param_1 + 0x2f4) = iVar7;
        *(int *)(param_1 + 0x2f8) = iVar7;
      }
    }
  }
  return param_1 + 0x2e4;
}


