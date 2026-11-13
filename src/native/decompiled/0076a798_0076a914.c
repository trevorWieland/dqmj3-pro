#include "0076a798_0076a914.h"



void fn_0076a914(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar1 = (char *)fn_00769f74(param_2);
  if (pcVar1 + 0x10 != (char *)0x0) {
    iVar2 = fn_004b637c(pcVar1 + 0x10,param_5);
    fn_004b8770(iVar2 + 8,param_5 + 8);
  }
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  if (((*(int *)(param_2 + 0x10) == param_4) || (param_3 != 0)) ||
     (iVar2 = fn_00190ef0(param_5,param_4 + 0x10), iVar2 != 0)) {
    *(char **)(param_4 + 8) = pcVar1;
    iVar2 = *(int *)(param_2 + 0x10);
    if (iVar2 == param_4) {
      *(char **)(iVar2 + 4) = pcVar1;
      *(char **)(*(int *)(param_2 + 0x10) + 0xc) = pcVar1;
    }
    else if (*(int *)(iVar2 + 8) == param_4) {
      *(char **)(iVar2 + 8) = pcVar1;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar1;
    if (*(int *)(*(int *)(param_2 + 0x10) + 0xc) == param_4) {
      *(char **)(*(int *)(param_2 + 0x10) + 0xc) = pcVar1;
    }
  }
  *(int *)(pcVar1 + 4) = param_4;
  pcVar3 = pcVar1;
  do {
    while( true ) {
      if ((*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar3) ||
         (pcVar4 = *(char **)(pcVar3 + 4), *pcVar4 != '\0')) {
        **(undefined1 **)(*(int *)(param_2 + 0x10) + 4) = 1;
        *param_1 = pcVar1;
        return;
      }
      pcVar6 = *(char **)(*(int *)(pcVar4 + 4) + 8);
      if (pcVar4 == pcVar6) break;
      if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\0')) goto LAB_0076aad8;
      pcVar6 = *(char **)(pcVar4 + 8);
      if (pcVar6 == pcVar3) {
        *(undefined4 *)(pcVar4 + 8) = *(undefined4 *)(pcVar6 + 0xc);
        if (*(int *)(pcVar6 + 0xc) != 0) {
          *(char **)(*(int *)(pcVar6 + 0xc) + 4) = pcVar4;
        }
        *(undefined4 *)(pcVar6 + 4) = *(undefined4 *)(pcVar4 + 4);
        if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar4) {
          *(char **)(*(int *)(param_2 + 0x10) + 4) = pcVar6;
        }
        else {
          iVar2 = *(int *)(pcVar4 + 4);
          if (*(char **)(iVar2 + 0xc) == pcVar4) {
            *(char **)(iVar2 + 0xc) = pcVar6;
          }
          else {
            *(char **)(iVar2 + 8) = pcVar6;
          }
        }
        *(char **)(pcVar6 + 0xc) = pcVar4;
        *(char **)(pcVar4 + 4) = pcVar6;
        pcVar3 = pcVar4;
      }
      **(undefined1 **)(pcVar3 + 4) = 1;
      **(undefined1 **)(*(int *)(pcVar3 + 4) + 4) = 0;
      iVar2 = *(int *)(*(int *)(pcVar3 + 4) + 4);
      iVar7 = *(int *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar7 + 8);
      if (*(int *)(iVar7 + 8) != 0) {
        *(int *)(*(int *)(iVar7 + 8) + 4) = iVar2;
      }
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar2 + 4);
      if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar2) {
        *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
      }
      else {
        iVar5 = *(int *)(iVar2 + 4);
        if (*(int *)(iVar5 + 8) == iVar2) {
          *(int *)(iVar5 + 8) = iVar7;
        }
        else {
          *(int *)(iVar5 + 0xc) = iVar7;
        }
      }
      *(int *)(iVar7 + 8) = iVar2;
LAB_0076abd0:
      *(int *)(iVar2 + 4) = iVar7;
    }
    pcVar6 = *(char **)(*(int *)(pcVar4 + 4) + 0xc);
    if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\0')) {
      pcVar6 = *(char **)(pcVar4 + 0xc);
      if (pcVar6 == pcVar3) {
        *(undefined4 *)(pcVar4 + 0xc) = *(undefined4 *)(pcVar6 + 8);
        if (*(int *)(pcVar6 + 8) != 0) {
          *(char **)(*(int *)(pcVar6 + 8) + 4) = pcVar4;
        }
        *(undefined4 *)(pcVar6 + 4) = *(undefined4 *)(pcVar4 + 4);
        if (*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar4) {
          *(char **)(*(int *)(param_2 + 0x10) + 4) = pcVar6;
        }
        else {
          iVar2 = *(int *)(pcVar4 + 4);
          if (*(char **)(iVar2 + 8) == pcVar4) {
            *(char **)(iVar2 + 8) = pcVar6;
          }
          else {
            *(char **)(iVar2 + 0xc) = pcVar6;
          }
        }
        *(char **)(pcVar6 + 8) = pcVar4;
        *(char **)(pcVar4 + 4) = pcVar6;
        pcVar3 = pcVar4;
      }
      **(undefined1 **)(pcVar3 + 4) = 1;
      **(undefined1 **)(*(int *)(pcVar3 + 4) + 4) = 0;
      iVar2 = *(int *)(*(int *)(pcVar3 + 4) + 4);
      iVar7 = *(int *)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar7 + 0xc);
      if (*(int *)(iVar7 + 0xc) != 0) {
        *(int *)(*(int *)(iVar7 + 0xc) + 4) = iVar2;
      }
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar2 + 4);
      if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar2) {
        *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
      }
      else {
        iVar5 = *(int *)(iVar2 + 4);
        if (*(int *)(iVar5 + 0xc) == iVar2) {
          *(int *)(iVar5 + 0xc) = iVar7;
        }
        else {
          *(int *)(iVar5 + 8) = iVar7;
        }
      }
      *(int *)(iVar7 + 0xc) = iVar2;
      goto LAB_0076abd0;
    }
LAB_0076aad8:
    *pcVar4 = '\x01';
    *pcVar6 = '\x01';
    **(undefined1 **)(*(int *)(pcVar3 + 4) + 4) = 0;
    pcVar3 = *(char **)(*(int *)(pcVar3 + 4) + 4);
  } while( true );
}



void fn_0076a8c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_0076a8c0(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar2 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    iVar1 = fn_004b87dc(param_2 + 0x18);
    fn_00170f54(iVar1 + -8);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar2;
  } while (iVar2 != 0);
  return;
}



undefined1 * fn_0076a798(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  puVar8 = param_2;
  for (; param_2 != (undefined1 *)0x0; param_2 = *(undefined1 **)(param_2 + 8)) {
    puVar6 = (undefined1 *)param_1[1];
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)param_1[2];
      if (puVar6 == (undefined1 *)param_1[3]) {
        if (*param_1 == 0) {
          uVar7 = 0x20;
        }
        else {
          uVar1 = *(uint *)(*param_1 + 4);
          uVar5 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          uVar7 = uVar1 + 0x20;
          if (uVar1 + 0x20 <= uVar5) {
            uVar7 = uVar5;
          }
        }
        piVar2 = (int *)fn_0015ece0(0xc);
        iVar3 = fn_0015ece0(uVar7 * 0x28);
        piVar2[2] = iVar3;
        *piVar2 = *param_1;
        piVar2[1] = uVar7;
        *param_1 = (int)piVar2;
        puVar6 = (undefined1 *)piVar2[2];
        param_1[3] = (int)(puVar6 + uVar7 * 0x28);
        param_1[2] = (int)(puVar6 + 0x28);
      }
      else {
        param_1[2] = (int)(puVar6 + 0x28);
      }
    }
    else {
      param_1[1] = *(int *)(puVar6 + 0xc);
    }
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    *puVar6 = 0;
    if (puVar6 + 0x10 != (undefined1 *)0x0) {
      iVar3 = fn_004b637c(puVar6 + 0x10,param_2 + 0x10);
      fn_004b8770(iVar3 + 8,param_2 + 0x18);
    }
    *(undefined1 **)(param_3 + 8) = puVar6;
    *(undefined1 **)(puVar6 + 4) = param_3;
    if (puVar8 == param_2) {
      puVar8 = puVar6;
    }
    *puVar6 = *param_2;
    uVar4 = fn_0076a798(param_1,*(undefined4 *)(param_2 + 0xc),puVar6);
    *(undefined4 *)(puVar6 + 0xc) = uVar4;
    param_3 = puVar6;
  }
  *(undefined4 *)(param_3 + 8) = 0;
  return puVar8;
}


