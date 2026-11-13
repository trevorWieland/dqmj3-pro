#include "00772a50_00773090.h"



int fn_00773090(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  if (param_1 != param_2) {
    local_14 = *(int *)(param_1 + 0x10);
    local_18 = *(undefined4 *)(local_14 + 8);
    fn_00772324(auStack_10,param_1,&local_18,&local_14);
    iVar1 = fn_00772b6c(param_1,*(undefined4 *)(*(int *)(param_2 + 0x10) + 4),
                         *(undefined4 *)(param_1 + 0x10));
    *(int *)(*(int *)(param_1 + 0x10) + 4) = iVar1;
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      *(int *)(iVar3 + 8) = iVar3;
      *(int *)(*(int *)(param_1 + 0x10) + 0xc) = *(int *)(param_1 + 0x10);
    }
    else {
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)(iVar2 + 8);
      } while (iVar1 != 0);
      *(int *)(iVar3 + 8) = iVar2;
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
      do {
        iVar3 = iVar1;
        iVar1 = *(int *)(iVar3 + 0xc);
      } while (iVar1 != 0);
      *(int *)(*(int *)(param_1 + 0x10) + 0xc) = iVar3;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  }
  return param_1;
}



void fn_00772c98(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_00772c98(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}



undefined1 * fn_00772b6c(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  puVar6 = param_2;
  for (; param_2 != (undefined1 *)0x0; param_2 = *(undefined1 **)(param_2 + 8)) {
    puVar8 = (undefined1 *)param_1[1];
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)param_1[2];
      if (puVar8 == (undefined1 *)param_1[3]) {
        if (*param_1 == 0) {
          uVar7 = 0x20;
        }
        else {
          uVar1 = *(uint *)(*param_1 + 4);
          uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar7 < uVar1 + 0x20) {
            uVar7 = uVar1 + 0x20;
          }
        }
        piVar2 = (int *)fn_00100fc6(0xc,0);
        iVar3 = fn_00100fc6(uVar7 << 5,0);
        piVar2[2] = iVar3;
        *piVar2 = *param_1;
        piVar2[1] = uVar7;
        *param_1 = (int)piVar2;
        puVar8 = (undefined1 *)piVar2[2];
        param_1[3] = (int)(puVar8 + uVar7 * 0x20);
        param_1[2] = (int)(puVar8 + 0x20);
      }
      else {
        param_1[2] = (int)(puVar8 + 0x20);
      }
    }
    else {
      param_1[1] = *(int *)(puVar8 + 0xc);
    }
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined4 *)(puVar8 + 8) = 0;
    *(undefined4 *)(puVar8 + 0xc) = 0;
    *puVar8 = 0;
    if (puVar8 + 0x10 != (undefined1 *)0x0) {
      puVar8[0x10] = param_2[0x10];
      uVar4 = *(undefined4 *)(param_2 + 0x18);
      uVar5 = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(puVar8 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(puVar8 + 0x18) = uVar4;
      *(undefined4 *)(puVar8 + 0x1c) = uVar5;
    }
    *(undefined1 **)(param_3 + 8) = puVar8;
    *(undefined1 **)(puVar8 + 4) = param_3;
    if (puVar6 == param_2) {
      puVar6 = puVar8;
    }
    *puVar8 = *param_2;
    uVar4 = fn_00772b6c(param_1,*(undefined4 *)(param_2 + 0xc),puVar8);
    *(undefined4 *)(puVar8 + 0xc) = uVar4;
    param_3 = puVar8;
  }
  *(undefined4 *)(param_3 + 8) = 0;
  return puVar6;
}



void fn_00772a50(undefined4 *param_1,int param_2,byte *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  undefined4 local_1c;
  
  pcVar2 = *(char **)(param_2 + 0x10);
  bVar4 = true;
  pcVar3 = pcVar2;
  if (*(char **)(pcVar2 + 4) != (char *)0x0) {
    pcVar1 = *(char **)(pcVar2 + 4);
    do {
      pcVar3 = pcVar1;
      bVar4 = *param_3 < (byte)pcVar3[0x10];
      if (bVar4) {
        pcVar1 = *(char **)(pcVar3 + 8);
      }
      else {
        pcVar1 = *(char **)(pcVar3 + 0xc);
      }
    } while (pcVar1 != (char *)0x0);
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    if (bVar4) {
      if (pcVar3 == *(char **)(pcVar2 + 8)) goto LAB_00772ac8;
      if ((*pcVar3 == '\0') && (*(char **)(*(int *)(pcVar3 + 4) + 4) == pcVar3)) {
        pcVar3 = *(char **)(pcVar3 + 0xc);
      }
      else {
        pcVar2 = *(char **)(pcVar3 + 8);
        if (*(char **)(pcVar3 + 8) == (char *)0x0) {
          pcVar2 = *(char **)(pcVar3 + 4);
          pcVar1 = pcVar3;
          while (pcVar3 = pcVar2, pcVar1 == *(char **)(pcVar3 + 8)) {
            pcVar2 = *(char **)(pcVar3 + 4);
            pcVar1 = pcVar3;
          }
        }
        else {
          do {
            pcVar3 = pcVar2;
            pcVar2 = *(char **)(pcVar3 + 0xc);
          } while (*(char **)(pcVar3 + 0xc) != (char *)0x0);
        }
      }
    }
    if (*param_3 <= (byte)pcVar3[0x10]) {
      *param_1 = pcVar3;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
LAB_00772ac8:
  fn_00772cd4(&local_1c);
  *param_1 = local_1c;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


