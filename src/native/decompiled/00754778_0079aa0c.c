#include "00754778_0079aa0c.h"



void fn_0079aa0c(uint *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  puVar1 = (undefined1 *)param_1[1];
  uVar4 = (int)puVar1 - *param_1;
  if (param_1[2] - *param_1 <= uVar4) {
    uVar8 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar8 < uVar4 + 0x20) {
      uVar8 = uVar4 + 0x20;
    }
    puVar2 = (undefined1 *)fn_00100fc6(uVar8,0);
    puVar7 = puVar2;
    for (puVar1 = (undefined1 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = *puVar1;
      }
      puVar7 = puVar7 + 1;
    }
    if (puVar2 + ((int)param_2 - *param_1) != (undefined1 *)0x0) {
      puVar2[(int)param_2 - *param_1] = *param_3;
    }
    puVar7 = (undefined1 *)param_1[1];
    puVar1 = puVar2 + ((int)param_2 - *param_1);
    for (; param_2 != puVar7; param_2 = param_2 + 1) {
      puVar1 = puVar1 + 1;
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = *param_2;
      }
    }
    uVar3 = *param_1;
    uVar6 = param_1[1];
    uVar4 = uVar3;
    if (uVar6 < uVar3) {
      do {
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
    fn_001008c4(uVar3,param_1[2] - uVar3,0);
    *param_1 = (uint)puVar2;
    param_1[1] = (uint)(puVar2 + (uVar6 - uVar3) + 1);
    param_1[2] = (uint)(puVar2 + uVar8);
    return;
  }
  param_1[1] = (uint)(puVar1 + 1);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = puVar1[-1];
  }
  puVar7 = puVar1 + -1;
  if (param_2 < puVar7) {
    uVar4 = (int)puVar7 - (int)param_2;
    if (0 < (int)uVar4) {
      if ((uVar4 & 1) != 0) {
        puVar7 = puVar1 + -2;
        puVar1 = puVar1 + -1;
        *puVar1 = *puVar7;
      }
      for (iVar5 = (int)uVar4 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1[-1] = puVar7[-1];
        puVar7 = puVar7 + -2;
        puVar1 = puVar1 + -2;
        *puVar1 = *puVar7;
      }
    }
  }
  else {
    while (param_2 != puVar7) {
      puVar7 = puVar7 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar7;
    }
  }
  *param_2 = *param_3;
  return;
}



void fn_0077f768(void)

{
  fn_0066e530(DAT_00897850);
  return;
}



void fn_0077f008(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return;
  }
  iVar1 = (int)param_3 / 2;
  uVar2 = *(uint *)(param_2 + iVar1 * 0xf0);
  if ((uVar2 != 0) && (param_1 > uVar2 || uVar2 == param_1)) {
    if (param_1 <= uVar2) {
      return;
    }
    param_2 = param_2 + ((param_3 & 1) + iVar1) * 0xf0;
  }
  fn_0077f008(param_1,param_2,iVar1);
  return;
}



void fn_00754778(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = &DAT_00855b14;
  iVar1 = param_1[1];
  iVar4 = param_1[3];
  if (iVar1 == iVar4) {
    return;
  }
  do {
    iVar2 = *(int *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0xc) = iVar2;
    }
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x10) = iVar3;
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    if (param_1[1] == iVar1) {
      param_1[1] = iVar2;
    }
    if (param_1[2] == iVar1) {
      param_1[2] = iVar3;
    }
    param_1[4] = param_1[4] + -1;
    iVar1 = iVar2;
  } while (iVar2 != iVar4);
  return;
}


