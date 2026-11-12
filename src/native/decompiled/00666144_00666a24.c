#include "00666144_00666a24.h"



undefined4 fn_00666a24(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_10 [16];
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    fn_006d1828(auStack_10);
    uVar1 = fn_006d3b8c(auStack_10);
  }
  return uVar1;
}



undefined4 fn_00666848(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_28 [8];
  
  fn_0066eb80(DAT_00898840,4);
  fn_0066db88();
  if (*(undefined4 **)(param_1 + 0x49c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x49c))();
    *(undefined4 *)(param_1 + 0x49c) = 0;
  }
  fn_002feca8(*(undefined4 *)(param_1 + 0x498));
  *(undefined4 *)(param_1 + 0x498) = 0;
  if (*(undefined4 **)(param_1 + 0x4a4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x4a4))();
    *(undefined4 *)(param_1 + 0x4a4) = 0;
  }
  fn_002feca8(*(undefined4 *)(param_1 + 0x4a0));
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
      fn_00456400();
    }
    fn_004740f4(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x9c));
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
  }
  piVar7 = *(int **)(param_1 + 0x588);
  for (piVar6 = (int *)*piVar7; piVar6 != piVar7; piVar6 = (int *)*piVar6) {
    uVar1 = fn_006d0be8(piVar6 + 2);
    fn_0013d3e8(auStack_28,uVar1);
    fn_00455a9c(piVar6 + 2,auStack_28,0);
    fn_00170f54(auStack_28);
  }
  fn_00147b74(param_1 + 0x578);
  fn_0079bd60(param_1 + 0x5a8);
  if (*(undefined4 **)(param_1 + 0x84) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x84))();
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (*(undefined4 **)(param_1 + 0x9c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x9c))();
  }
  fn_002feca8(*(undefined4 *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x80) = 0;
  fn_002feca8(*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  uVar5 = *(uint *)(param_1 + 0x678);
  *(undefined4 *)(param_1 + 0x678) = 0;
  uVar3 = *(uint *)(param_1 + 0x67c);
  *(undefined4 *)(param_1 + 0x67c) = 0;
  iVar4 = *(int *)(param_1 + 0x680);
  *(undefined4 *)(param_1 + 0x680) = 0;
  uVar2 = uVar5;
  if (uVar3 < uVar5) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != uVar3);
  }
  fn_001008c4(uVar5,(int)(iVar4 - uVar5) >> 2,0);
  fn_004747a4();
  fn_00474864();
  return 0;
}



bool fn_0066680c(int *param_1)

{
  bool bVar1;
  
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



void fn_006667e4(void)

{
  fn_0012d73c(DAT_008928bc);
  DAT_008928c0 = 0;
  DAT_008928bc = 0;
  DAT_008928c4 = 0;
  return;
}



int fn_006667ac(int param_1,int param_2,int param_3)

{
  return (int)*(char *)(param_3 + param_1 * 4 + DAT_008928c0 + param_2 * 0x52 + 2);
}



undefined4 fn_00666698(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (DAT_008928c0 == 0) {
    DAT_008928bc = fn_0011c1b4(L"patch:/data/Parameter/ShopItemParam.tp",0,0,0,0,0,0,0,5);
    iVar1 = fn_00145ac0();
    uVar6 = fn_0012a26c(DAT_008928bc);
    iVar4 = (int)((ulonglong)uVar6 >> 0x20);
    uVar2 = (uint)uVar6;
    if (((iVar1 == 0) || (iVar4 < (int)(uint)(uVar2 == 0))) ||
       (iVar3 = fn_00147e6c(iVar1,&DAT_006667a4,4), iVar3 != 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + 4;
    }
    iVar3 = 0x52;
    iVar5 = 0;
    fn_0011c134(uVar2 - 4,iVar4 - (uint)(uVar2 < 4));
    if (iVar3 != 0 || iVar5 != 0) {
      iVar1 = 0;
    }
    DAT_008928c0 = iVar1;
    uVar6 = fn_0012a26c(DAT_008928bc);
    iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    uVar2 = (uint)uVar6;
    if ((int)-(iVar1 + (uint)(4 < uVar2)) < 0 ==
        (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(4 < uVar2)))) {
      DAT_008928c4 = 0;
    }
    else {
      DAT_008928c4 = fn_0011c134(uVar2 - 4,iVar1 - (uint)(uVar2 < 4),0x52,0);
    }
    if (DAT_008928c4 < 1) {
      return 0;
    }
  }
  return 1;
}



int fn_0066662c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_60 [2];
  char local_5e [82];
  
  iVar2 = 0;
  fn_00301a9c(auStack_60,DAT_008928c0,0x52);
  if (0 < param_1) {
    iVar1 = 0;
    do {
      if ((local_5e[iVar1] == '\0') && (iVar2 = iVar2 + 1, param_1 < iVar2)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x50);
  }
  return 0;
}



void fn_00666540(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  *param_1 = &DAT_00850dac;
  fn_0019e2e8(param_1,0);
  if ((param_1[1] & 0x80000000) == 0) {
    fn_0024d73c(param_1[5] + 0x44,param_1);
  }
  iVar1 = param_1[9];
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      puVar3 = (uint *)(param_1[8] + iVar2 * 0x14);
      if ((puVar3[2] & 0x8000000) != 0) {
        iVar1 = *(int *)(puVar3[3] + 4) + -1;
        *(int *)(puVar3[3] + 4) = iVar1;
        if (iVar1 == 0) {
          (**(code **)(*(int *)puVar3[3] + 8))();
        }
      }
      if (((*puVar3 & 0x8000000) != 0) &&
         (iVar1 = *(int *)(puVar3[1] + 4) + -1, *(int *)(puVar3[1] + 4) = iVar1, iVar1 == 0)) {
        (**(code **)(*(int *)puVar3[1] + 8))();
      }
      iVar1 = param_1[9];
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  fn_0019d680(param_1[8],iVar1 * 0x14);
  *param_1 = &DAT_0081d020;
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = 0x1000001;
    *(undefined4 *)(param_1[2] + 0x10) = 0;
  }
  return;
}



void fn_00666518(undefined4 *param_1)

{
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,0x2c);
  return;
}



void fn_00666470(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 4) & 0x80000000) != 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 0x18);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
  }
  iVar3 = *(int *)(param_1 + 0x24);
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      fn_0024d77c(iVar2 * 0x14 + 8 + *(int *)(param_1 + 0x20),param_2);
      fn_0024d77c(*(int *)(param_1 + 0x20) + iVar2 * 0x14,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  fn_0024d73c(*(int *)(param_1 + 0x14) + 0x44,param_1);
  fn_0019e8c4(param_2,param_1);
  return;
}



void fn_00666144(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  *param_1 = &DAT_00850d90;
  if ((param_1[1] & 0x80000000) == 0) {
    fn_0024d73c(param_1[5] + 0x44,param_1);
  }
  fn_00665f20(param_1);
  if (((param_1[0x11] & 0x8000000) != 0) &&
     (iVar2 = *(int *)(param_1[0x12] + 4) + -1, *(int *)(param_1[0x12] + 4) = iVar2, iVar2 == 0)) {
    (**(code **)(*(int *)param_1[0x12] + 8))();
  }
  if (param_1[0x10] != 0) {
    uVar3 = 0;
    if (param_1[0xf] != 0) {
      do {
        puVar1 = (uint *)(param_1[0xe] + uVar3 * 8);
        if ((*puVar1 & 0x8000000) != 0) {
          iVar2 = *(int *)(puVar1[1] + 4) + -1;
          *(int *)(puVar1[1] + 4) = iVar2;
          if (iVar2 == 0) {
            (**(code **)(*(int *)puVar1[1] + 8))();
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[0xf]);
    }
    fn_0019d680(param_1[0xe],param_1[0x10] << 3);
  }
  if (param_1[0xd] != 0) {
    uVar3 = 0;
    if (param_1[0xc] != 0) {
      do {
        puVar1 = (uint *)(param_1[0xb] + uVar3 * 0x10);
        if ((puVar1[2] & 0x8000000) != 0) {
          iVar2 = *(int *)(puVar1[3] + 4) + -1;
          *(int *)(puVar1[3] + 4) = iVar2;
          if (iVar2 == 0) {
            (**(code **)(*(int *)puVar1[3] + 8))();
          }
        }
        if (((*puVar1 & 0x8000000) != 0) &&
           (iVar2 = *(int *)(puVar1[1] + 4) + -1, *(int *)(puVar1[1] + 4) = iVar2, iVar2 == 0)) {
          (**(code **)(*(int *)puVar1[1] + 8))();
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[0xc]);
    }
    fn_0019d680(param_1[0xb],param_1[0xd] << 4);
  }
  if (param_1[10] != 0) {
    uVar3 = 0;
    if (param_1[9] != 0) {
      do {
        puVar1 = (uint *)(param_1[8] + uVar3 * 0x10);
        if ((puVar1[2] & 0x8000000) != 0) {
          iVar2 = *(int *)(puVar1[3] + 4) + -1;
          *(int *)(puVar1[3] + 4) = iVar2;
          if (iVar2 == 0) {
            (**(code **)(*(int *)puVar1[3] + 8))();
          }
        }
        if (((*puVar1 & 0x8000000) != 0) &&
           (iVar2 = *(int *)(puVar1[1] + 4) + -1, *(int *)(puVar1[1] + 4) = iVar2, iVar2 == 0)) {
          (**(code **)(*(int *)puVar1[1] + 8))();
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[9]);
    }
    fn_0019d680(param_1[8],param_1[10] << 4);
  }
  *param_1 = &DAT_0081d020;
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = 0x1000001;
    *(undefined4 *)(param_1[2] + 0x10) = 0;
  }
  return;
}


