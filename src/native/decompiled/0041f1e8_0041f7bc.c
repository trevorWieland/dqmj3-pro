#include "0041f1e8_0041f7bc.h"



undefined4 fn_0041f7bc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_00689930(param_1,0x7f,0);
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x7f);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893bf0) goto LAB_0041f81c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0041f81c:
  *(undefined1 *)((int)puVar1 + 9) = 1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x7f);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893bf0) goto LAB_0041f864;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0041f864:
  puVar1[3] = 0x1000194;
  *(code **)(param_1 + 0x78) = fn_0041f8a4;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(code **)(param_1 + 0x70) = fn_0041f8a4;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(code **)(param_1 + 0x68) = fn_0041f8a4;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return 1;
}



void fn_0041f77c(undefined4 *param_1)

{
  *param_1 = &DAT_0083a7a8;
  if (param_1[2] != -1) {
    fn_0023d3f4(param_1[1]);
    param_1[2] = 0xffffffff;
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_0041f760(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &DAT_0083a7a8;
  param_1[1] = param_2;
  param_1[2] = 0xffffffff;
  return param_1;
}



void fn_0041f738(int param_1)

{
  if (*(int *)(param_1 + 8) == -1) {
    return;
  }
  fn_0023d3f4(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



void fn_0041f71c(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(&DAT_007c64e4 + param_2 * 4);
  fn_002a4648(*(undefined4 *)(param_1 + 4));
  return;
}



undefined4 *
fn_0041f638(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  
  piVar1 = (int *)fn_00145b00(0x20,&DAT_00812c8c,param_3,param_4,param_4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    *(undefined1 *)(piVar1 + 6) = 1;
    *(undefined1 *)((int)piVar1 + 0x19) = 1;
    piVar1[3] = 0;
    piVar1[2] = 0;
    piVar1[1] = 0;
    piVar2 = (int *)fn_00100fc6(0xc,0);
    iVar3 = fn_00100fc6(0x300,0);
    piVar2[2] = iVar3;
    *piVar2 = *piVar1;
    piVar2[1] = 0x20;
    *piVar1 = (int)piVar2;
    puVar4 = (undefined1 *)piVar2[2];
    piVar1[2] = (int)puVar4;
    piVar1[3] = (int)(puVar4 + 0x300);
    piVar1[2] = (int)(puVar4 + 0x18);
    *(undefined4 *)(puVar4 + 8) = 0;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    *puVar4 = 0;
    piVar1[4] = (int)puVar4;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(int *)(piVar1[4] + 8) = piVar1[4];
    *(int *)(piVar1[4] + 0xc) = piVar1[4];
    iVar5 = fn_00145b00(8,&DAT_00812c8c);
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = fn_005e1058();
    }
    piVar1[7] = iVar3;
    fn_005e0f10(iVar3,param_2);
  }
  *param_1 = piVar1;
  return param_1;
}



undefined4
fn_0041f36c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            undefined4 param_6,int *param_7,int *param_8)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *local_3c;
  int local_38;
  undefined4 uStack_34;
  char *local_30;
  bool local_2c;
  
  local_3c = (char *)fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (local_3c != (char *)0x0) {
    fn_0068cb08(DAT_008977e8);
    uVar3 = fn_0030ff0c();
    uVar3 = fn_00371940(local_3c,uVar3,param_3,param_4,param_2);
  }
  iVar8 = *param_1;
  pcVar6 = *(char **)(iVar8 + 0x10);
  bVar1 = true;
  pcVar2 = pcVar6;
  pcVar4 = *(char **)(pcVar6 + 4);
  while (pcVar4 != (char *)0x0) {
    bVar1 = param_2 < *(int *)(pcVar4 + 0x10);
    pcVar2 = pcVar4;
    if (bVar1) {
      pcVar4 = *(char **)(pcVar4 + 8);
    }
    else {
      pcVar4 = *(char **)(pcVar4 + 0xc);
    }
  }
  local_38 = param_2;
  uStack_34 = uVar3;
  if (*(char *)(iVar8 + 0x18) == '\0') {
    local_30 = pcVar2;
    if (bVar1) {
      if (pcVar2 == *(char **)(pcVar6 + 8)) {
        fn_00773cac(&local_3c,iVar8,0,pcVar2,&local_38);
        local_30 = local_3c;
        local_2c = true;
        goto LAB_0041f530;
      }
      if ((*pcVar2 == '\0') && (*(char **)(*(int *)(pcVar2 + 4) + 4) == pcVar2)) {
        local_30 = *(char **)(pcVar2 + 0xc);
      }
      else {
        pcVar4 = *(char **)(pcVar2 + 8);
        if (*(char **)(pcVar2 + 8) == (char *)0x0) {
          pcVar4 = pcVar2;
          local_30 = *(char **)(pcVar2 + 4);
          while (pcVar4 == *(char **)(local_30 + 8)) {
            pcVar4 = local_30;
            local_30 = *(char **)(local_30 + 4);
          }
        }
        else {
          do {
            local_30 = pcVar4;
            pcVar4 = *(char **)(local_30 + 0xc);
          } while (*(char **)(local_30 + 0xc) != (char *)0x0);
        }
      }
    }
    iVar5 = *(int *)(local_30 + 0x10);
    if (param_2 > iVar5) {
      fn_00773cac(&local_3c,iVar8,0,pcVar2,&local_38);
      local_30 = local_3c;
    }
    local_2c = param_2 > iVar5;
  }
  else {
    fn_00773cac(&local_3c,iVar8,0,pcVar2,&local_38);
    local_30 = local_3c;
    local_2c = true;
  }
LAB_0041f530:
  fn_005e0bd4(*(undefined4 *)(*param_1 + 0x1c),uVar3);
  if ((param_5 != (int *)0x0) &&
     (uVar7 = 0, iVar8 = param_5[1] - *param_5 >> 0x1f,
     (param_5[1] - *param_5) / 0xc + iVar8 != iVar8)) {
    do {
      fn_00371264(uVar3,*param_5 + uVar7 * 0xc);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((param_5[1] - *param_5) / 0xc));
  }
  if ((param_7 != (int *)0x0 && param_8 != (int *)0x0) &&
     (uVar7 = 0, iVar8 = param_7[1] - *param_7 >> 0x1f,
     (param_7[1] - *param_7) / 0xc + iVar8 != iVar8)) {
    do {
      fn_003714b0(uVar3,*param_7 + uVar7 * 0xc,*param_8 + uVar7 * 0xc);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((param_7[1] - *param_7) / 0xc));
  }
  return uVar3;
}



void fn_0041f1e8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  
  iVar3 = *(int *)(*(int *)(*param_1 + 0x10) + 8);
  if (iVar3 != *(int *)(*param_1 + 0x10)) {
    do {
      if (*(int *)(iVar3 + 0x14) == param_2) {
        fn_00154a58(*(undefined4 *)(iVar3 + 0x14));
        iVar1 = fn_0068cad4(DAT_008977e8);
        if (iVar1 != 0) {
          iVar1 = fn_0068cad4(DAT_008977e8);
          *(undefined1 *)(iVar1 + 0xd) = 1;
        }
        fn_00127fb4(*(undefined4 *)(*param_1 + 0x1c),*(undefined4 *)(iVar3 + 0x14));
        iVar1 = fn_0068cad4(DAT_008977e8);
        if (iVar1 != 0) {
          iVar1 = fn_0068cad4(DAT_008977e8);
          *(undefined1 *)(iVar1 + 0xd) = 0;
        }
        iVar1 = *(int *)(iVar3 + 0xc);
        if (*(int *)(iVar3 + 0xc) == 0) {
          iVar1 = *(int *)(iVar3 + 4);
          while (iVar2 = iVar1, iVar3 == *(int *)(iVar2 + 0xc)) {
            iVar3 = iVar2;
            iVar1 = *(int *)(iVar2 + 4);
          }
          if (*(int *)(iVar3 + 0xc) != iVar2) {
            iVar3 = iVar2;
          }
        }
        else {
          do {
            iVar3 = iVar1;
            iVar1 = *(int *)(iVar3 + 8);
          } while (*(int *)(iVar3 + 8) != 0);
        }
        fn_00147274(auStack_1c,*param_1);
      }
      else {
        iVar1 = *(int *)(iVar3 + 0xc);
        if (*(int *)(iVar3 + 0xc) == 0) {
          iVar1 = *(int *)(iVar3 + 4);
          while (iVar2 = iVar1, iVar3 == *(int *)(iVar2 + 0xc)) {
            iVar3 = iVar2;
            iVar1 = *(int *)(iVar2 + 4);
          }
          if (*(int *)(iVar3 + 0xc) != iVar2) {
            iVar3 = iVar2;
          }
        }
        else {
          do {
            iVar3 = iVar1;
            iVar1 = *(int *)(iVar3 + 8);
          } while (*(int *)(iVar3 + 8) != 0);
        }
      }
    } while (iVar3 != *(int *)(*param_1 + 0x10));
  }
  return;
}


