#include "0054a4f4_0054ab60.h"



void fn_0054ab60(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0054ab6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))();
  return;
}



int * fn_0054ab00(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = param_1[1];
    fn_0017d90c(param_1,iVar1);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x98) != 0) {
        fn_0054a67c(iVar1 + 0x88);
      }
      fn_0019fb94(iVar1);
    }
    iVar1 = *param_1;
  }
  return param_1;
}



undefined4 * fn_0054aa6c(int param_1,char *param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar1 = (undefined4 *)fn_00194ee4(0x9c,4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[0x22] = 0;
    *(undefined2 *)(puVar1 + 0x23) = 0;
    *(undefined2 *)((int)puVar1 + 0x8e) = 0;
    *(undefined2 *)(puVar1 + 0x25) = 0;
    *(undefined2 *)((int)puVar1 + 0x96) = 0;
    puVar1[0x26] = 0;
    uVar4 = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    pcVar2 = (char *)(puVar1 + 2);
    do {
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar2 + 1;
      *pcVar2 = *param_2;
      param_2 = param_2 + 1;
      bVar6 = *param_2 == '\0';
      uVar5 = 0;
      if (!bVar6) {
        uVar5 = 0x7f;
      }
      pcVar2 = pcVar3;
    } while ((bVar6 || uVar4 <= uVar5) && (!bVar6 && uVar5 != uVar4));
    *pcVar3 = '\0';
    fn_0017d948(param_1,param_1 + 4,puVar1);
    puVar1 = puVar1 + 0x22;
  }
  return puVar1;
}



undefined4 fn_0054a990(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,0x74696d67,param_3,&local_10);
  if (iVar1 != 0) {
    param_3 = local_10;
  }
  if (iVar1 != 0 && param_3 != 0) {
    iVar1 = fn_0054a338(param_2);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



int fn_0054a928(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      fn_00150c1c(param_1,piVar1);
      if (((char)piVar1[6] == '\0') && (piVar1 = piVar1 + -1, piVar1 != (int *)0x0)) {
        (**(code **)*piVar1)(piVar1);
        fn_0019fb94(piVar1);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return param_1;
}



void fn_0054a918(int param_1,int param_2)

{
  fn_0017d948(param_1,param_1 + 4,param_2 + 4);
  return;
}



void fn_0054a8d8(int *param_1,int param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x2c))(param_1);
  param_1[0xc] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0054a910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  return;
}



void fn_0054a814(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 < 2) {
    *param_1 = *(undefined4 *)(param_2 + param_3 * 4 + 0x6c);
    return;
  }
  if (((*(ushort *)(param_2 + 0x74) & 0x1000) == 0) || (4 < param_3 - 2)) {
    *param_1 = 0xffffffff;
    return;
  }
  iVar1 = fn_006e2ab0(param_2);
  *param_1 = *(undefined4 *)(iVar1 + ((param_3 - 2) % 5) * 4 + 4);
  return;
}



int * fn_0054a790(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = param_1[1];
    fn_0017d90c(param_1,iVar1);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 0x8c) != '\0') {
        piVar2 = *(int **)(iVar1 + 0x88);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))(piVar2);
          fn_0019fb94(piVar2);
        }
        *(undefined4 *)(iVar1 + 0x88) = 0;
      }
      fn_0019fb94(iVar1);
    }
    iVar1 = *param_1;
  }
  return param_1;
}



undefined4 fn_0054a72c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  do {
    if (piVar2 == (int *)(param_1 + 4)) {
      return 0;
    }
    iVar1 = 0;
    while (*(char *)(param_2 + iVar1) == *(char *)((int)piVar2 + iVar1 + 8)) {
      if ((*(char *)(param_2 + iVar1) == '\0') || (iVar1 = iVar1 + 1, 0x7f < iVar1)) {
        return piVar2[0x22];
      }
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}



void fn_0054a6c8(int param_1,int param_2)

{
  int *piVar1;
  
  fn_0017d90c(param_1 + 0x10);
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x8c) != '\0') {
    piVar1 = *(int **)(param_2 + 0x88);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
      fn_0019fb94(piVar1);
    }
    *(undefined4 *)(param_2 + 0x88) = 0;
  }
  fn_0019fb94(param_2);
  return;
}



void fn_0054a67c(uint *param_1)

{
  uint uVar1;
  code *local_10;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    local_10 = (code *)0x0;
    fn_00191540(0,&local_10);
    if (local_10 != (code *)0x0) {
      (*local_10)((uVar1 & 3) << 0x10,0x101,0,uVar1 & 0xfffffffc);
    }
  }
  return;
}



void fn_0054a630(int *param_1,int param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x28))(param_1,param_2,0);
  param_1[0xc] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0054a66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  return;
}



uint fn_0054a4f4(int param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = 0;
  iVar3 = 0;
  cVar2 = *param_2;
  while (cVar2 != '\0') {
    pcVar1 = param_2 + iVar3;
    iVar3 = iVar3 + 1;
    uVar9 = uVar9 * *(int *)(*(int *)(param_1 + 4) + 8) + (int)*pcVar1;
    cVar2 = param_2[iVar3];
  }
  uVar10 = *(uint *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  uVar4 = uVar10;
  uVar7 = 0;
  while( true ) {
    uVar5 = (int)(uVar7 + uVar4) / 2;
    uVar8 = *(uint *)(iVar3 + uVar5 * 0x10);
    if (uVar8 == uVar9) break;
    if (uVar8 < uVar9) {
      if (uVar7 == uVar5) {
        return 0xffffffff;
      }
      uVar7 = uVar5;
    }
    else {
      if (uVar4 == uVar5) {
        return 0xffffffff;
      }
      uVar4 = uVar5;
    }
  }
  if (uVar5 == 0xffffffff) {
    return 0xffffffff;
  }
  if (uVar5 < uVar10) {
    iVar3 = iVar3 + uVar5 * 0x10;
  }
  if (*(uint *)(iVar3 + 4) != 0) {
    uVar5 = uVar5 - (*(uint *)(iVar3 + 4) >> 0x18);
    do {
      uVar5 = uVar5 + 1;
      if ((int)uVar10 <= (int)uVar5) {
        return uVar5;
      }
      if (uVar5 < *(uint *)(param_1 + 0xc)) {
        puVar6 = (uint *)(*(int *)(param_1 + 0x10) + uVar5 * 0x10);
      }
      else {
        puVar6 = (uint *)0x0;
      }
      if (*puVar6 != uVar9) {
        return 0xffffffff;
      }
      if (*(uint *)(param_1 + 0x14) < *(int *)(param_1 + 8) + (puVar6[1] & 0xffffff)) {
        return 0xffffffff;
      }
      iVar3 = fn_003035b0(param_2,*(int *)(param_1 + 8) + (puVar6[1] & 0xffffff) * 4);
    } while (iVar3 != 0);
  }
  return uVar5;
}


