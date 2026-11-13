#include "002ff1b4_002ff628.h"



undefined8
fn_002ff628(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
            )

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 uStack00000000;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_008c3dc0 != (code *)0x0) {
    uStack_c = param_2;
    uStack_8 = param_3;
    uStack_4 = param_4;
    if (param_1 < 4) {
      (*DAT_008c3dc0)(param_1,0);
    }
    else {
      if (&param_5 == &DAT_00000030) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = (int *)fn_00100380();
      }
      fn_001002f8(piVar1,param_1,&uStack_c);
      uVar2 = (**(code **)(*piVar1 + 8))(piVar1);
      (*DAT_008c3dc0)(param_1,uVar2);
      (**(code **)*piVar1)(piVar1);
    }
  }
  return CONCAT44(param_2,param_1);
}



int fn_002ff5e0(ushort *param_1,int param_2,int param_3,uint param_4)

{
  ushort uVar1;
  bool bVar2;
  
  do {
    bVar2 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar2) {
      return param_3;
    }
    uVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (uVar1 != param_4);
  if (param_3 == 0) {
    return 1;
  }
  return 0;
}



undefined4 fn_002ff59c(undefined1 *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)fn_002fea64();
  iVar3 = *piVar1;
  if (*(char *)(iVar3 + 0x101) == '\x01') {
    uVar2 = (*(code *)(iVar3 + *(int *)(iVar3 + 0x107) + 0x107))(param_1,param_2,param_3);
    return uVar2;
  }
  if ((param_2 < 0x100) && (*(char *)(iVar3 + param_2) != '\0')) {
    *param_1 = (char)param_2;
    return 1;
  }
  return 0xffffffff;
}



void fn_002ff3b4(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  
  puVar9 = (uint *)(param_1 + 0x4c);
  piVar7 = *(int **)(param_1 + 0x50);
  piVar8 = *(int **)(param_1 + 0x4c);
  for (piVar5 = piVar8; piVar7 != piVar5; piVar5 = piVar5 + 1) {
    if (*piVar5 == param_2) {
      return;
    }
  }
  if (piVar7 != *(int **)(param_1 + 0x54)) {
    *(int **)(param_1 + 0x50) = piVar7 + 1;
    if (piVar7 != (int *)0x0) {
      *piVar7 = param_2;
    }
    return;
  }
  uVar2 = (int)piVar7 - (int)piVar8 >> 2;
  if ((uint)((int)*(int **)(param_1 + 0x54) - (int)piVar8 >> 2) <= uVar2) {
    uVar4 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
    uVar10 = uVar2 + 0x20;
    if (uVar2 + 0x20 <= uVar4) {
      uVar10 = uVar4;
    }
    piVar1 = (int *)fn_00100fc6(uVar10 << 2,0);
    piVar8 = piVar1;
    for (piVar5 = (int *)*puVar9; piVar5 != piVar7; piVar5 = piVar5 + 1) {
      if (piVar8 != (int *)0x0) {
        *piVar8 = *piVar5;
      }
      piVar8 = piVar8 + 1;
    }
    piVar5 = (int *)(((int)piVar7 - *puVar9 & 0xfffffffc) + (int)piVar1);
    if (piVar5 != (int *)0x0) {
      *piVar5 = param_2;
    }
    piVar8 = *(int **)(param_1 + 0x50);
    piVar5 = (int *)(((int)piVar7 - *puVar9 & 0xfffffffc) + (int)piVar1);
    for (; piVar7 != piVar8; piVar7 = piVar7 + 1) {
      piVar5 = piVar5 + 1;
      if (piVar5 != (int *)0x0) {
        *piVar5 = *piVar7;
      }
    }
    uVar4 = *puVar9;
    uVar6 = *(uint *)(param_1 + 0x50);
    uVar2 = uVar4;
    if (uVar6 < uVar4) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar6);
    }
    fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x54) - uVar4) >> 2,0);
    *(int **)(param_1 + 0x54) = piVar1 + uVar10;
    *(int **)(param_1 + 0x50) = piVar1 + ((int)(uVar6 - uVar4) >> 2) + 1;
    *puVar9 = (uint)piVar1;
    return;
  }
  *(int **)(param_1 + 0x50) = piVar7 + 1;
  if (piVar7 != (int *)0x0) {
    *piVar7 = piVar7[-1];
  }
  piVar5 = piVar7 + -1;
  piVar8 = piVar7;
  if (piVar7 < piVar5) {
    iVar3 = (int)piVar5 - (int)piVar7;
    if (0 < iVar3) {
      if (iVar3 * 0x20000000 < 0) {
        piVar5 = piVar7 + -2;
        piVar8 = piVar7 + -1;
        *piVar8 = *piVar5;
      }
      for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        piVar8[-1] = piVar5[-1];
        piVar5 = piVar5 + -2;
        piVar8 = piVar8 + -2;
        *piVar8 = *piVar5;
      }
    }
  }
  else {
    while (piVar7 != piVar5) {
      piVar5 = piVar5 + -1;
      piVar8[-1] = *piVar5;
      piVar8 = piVar8 + -1;
    }
  }
  *piVar7 = param_2;
  return;
}



undefined4 fn_002ff33c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x3c);
  uVar4 = 0;
  if ((int)(*(int *)(param_1 + 0x40) - uVar3) >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        uVar3 = (uint)*(byte *)(piVar1 + 0x16);
      }
      if ((piVar1 != (int *)0x0 && uVar3 != 0) &&
         (iVar2 = (**(code **)(*piVar1 + 0xbc))(piVar1,param_2), iVar2 != 0)) {
        return 1;
      }
      uVar3 = *(uint *)(param_1 + 0x40);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(uVar3 - *(int *)(param_1 + 0x3c)) >> 2));
  }
  return 0;
}



uint fn_002ff310(int param_1)

{
  uint uVar1;
  
  DAT_008917a4 = DAT_008917a4 + 1;
  uVar1 = DAT_008917a4;
  if (0xffffff < DAT_008917a4) {
    uVar1 = 1;
  }
  if (0xffffff < DAT_008917a4) {
    DAT_008917a4 = uVar1;
  }
  return param_1 << 0x18 | uVar1;
}



undefined8 fn_002ff2f8(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_4 * param_1 +
                  param_3 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



void fn_002ff2a4(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x30) + param_2 * 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xa4))();
    piVar2 = (int *)(*(int *)(param_1 + 0x30) + param_2 * 4);
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *piVar2 = 0;
  }
  return;
}



uint fn_002ff284(uint param_1,uint param_2)

{
  if (param_1 < 0x3a) {
    param_1 = param_1 - 0x30;
  }
  if (0x40 < (param_1 & 0xffffffdf)) {
    param_1 = (param_1 & 0xffffffdf) - 0x37;
  }
  if (param_2 <= param_1) {
    param_1 = 0xffffffff;
  }
  return param_1;
}



undefined4 fn_002ff1fc(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar5 = 0;
  if ((int)(*(int *)(param_1 + 0x1c) - uVar4) >> 2 != 0) {
    do {
      piVar1 = *(int **)(uVar4 + uVar5 * 4);
      if (piVar1 != (int *)0x0) {
        uVar4 = (uint)*(byte *)(piVar1 + 0x16);
      }
      if ((piVar1 != (int *)0x0 && uVar4 != 0) &&
         (iVar2 = (**(code **)(*piVar1 + 0xbc))(piVar1,param_2), iVar2 != 0)) goto LAB_002ff27c;
      uVar4 = *(uint *)(param_1 + 0x18);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((int)(*(int *)(param_1 + 0x1c) - uVar4) >> 2));
  }
  iVar2 = fn_00424968(*(undefined4 *)(param_1 + 0x60),param_2);
  uVar3 = 0;
  if (iVar2 != 0) {
LAB_002ff27c:
    uVar3 = 1;
  }
  return uVar3;
}



void fn_002ff1b4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  if ((undefined1 *)*param_1 != &DAT_008f9d04) {
    piVar2 = (int *)((undefined1 *)*param_1 + -0xc);
    iVar1 = *piVar2;
    if ((iVar1 == -1) || ((piVar2 != &DAT_008f9cf8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 0xe,0,param_4,param_4);
    }
  }
  return;
}


