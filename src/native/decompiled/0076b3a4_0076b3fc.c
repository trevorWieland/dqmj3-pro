#include "0076b3a4_0076b3fc.h"



void fn_0076b3fc(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  
  pcVar8 = (char *)param_2[1];
  if (pcVar8 == (char *)0x0) {
    pcVar8 = (char *)param_2[2];
    if (pcVar8 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar9 = 0x20;
      }
      else {
        uVar1 = *(uint *)(*param_2 + 4);
        uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar9 < uVar1 + 0x20) {
          uVar9 = uVar1 + 0x20;
        }
      }
      piVar2 = (int *)fn_0015ece0(0xc);
      iVar3 = fn_0015ece0(uVar9 * 0x24);
      piVar2[2] = iVar3;
      *piVar2 = *param_2;
      piVar2[1] = uVar9;
      *param_2 = (int)piVar2;
      pcVar8 = (char *)piVar2[2];
      param_2[3] = (int)(pcVar8 + uVar9 * 0x24);
      param_2[2] = (int)(pcVar8 + 0x24);
    }
    else {
      param_2[2] = (int)(pcVar8 + 0x24);
    }
  }
  else {
    param_2[1] = *(int *)(pcVar8 + 0xc);
  }
  pcVar8[4] = '\0';
  pcVar8[5] = '\0';
  pcVar8[6] = '\0';
  pcVar8[7] = '\0';
  pcVar8[8] = '\0';
  pcVar8[9] = '\0';
  pcVar8[10] = '\0';
  pcVar8[0xb] = '\0';
  pcVar8[0xc] = '\0';
  pcVar8[0xd] = '\0';
  pcVar8[0xe] = '\0';
  pcVar8[0xf] = '\0';
  *pcVar8 = '\0';
  if (pcVar8 + 0x10 != (char *)0x0) {
    iVar3 = fn_004b637c(pcVar8 + 0x10,param_5);
    fn_004b9334(iVar3 + 8,param_5 + 8);
  }
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) ||
     (iVar3 = fn_00190ef0(param_5,param_4 + 0x10), iVar3 != 0)) {
    *(char **)(param_4 + 8) = pcVar8;
    iVar3 = param_2[4];
    if (iVar3 == param_4) {
      *(char **)(iVar3 + 4) = pcVar8;
      *(char **)(param_2[4] + 0xc) = pcVar8;
    }
    else if (*(int *)(iVar3 + 8) == param_4) {
      *(char **)(iVar3 + 8) = pcVar8;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar8;
    if (*(int *)(param_2[4] + 0xc) == param_4) {
      *(char **)(param_2[4] + 0xc) = pcVar8;
    }
  }
  *(int *)(pcVar8 + 4) = param_4;
  pcVar4 = pcVar8;
  do {
    while( true ) {
      if ((*(char **)(param_2[4] + 4) == pcVar4) ||
         (pcVar5 = *(char **)(pcVar4 + 4), *pcVar5 != '\0')) {
        **(undefined1 **)(param_2[4] + 4) = 1;
        *param_1 = pcVar8;
        return;
      }
      pcVar6 = *(char **)(*(int *)(pcVar5 + 4) + 8);
      if (pcVar5 == pcVar6) break;
      if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\0')) goto LAB_0076b654;
      pcVar6 = *(char **)(pcVar5 + 8);
      if (pcVar6 == pcVar4) {
        *(undefined4 *)(pcVar5 + 8) = *(undefined4 *)(pcVar6 + 0xc);
        if (*(int *)(pcVar6 + 0xc) != 0) {
          *(char **)(*(int *)(pcVar6 + 0xc) + 4) = pcVar5;
        }
        *(undefined4 *)(pcVar6 + 4) = *(undefined4 *)(pcVar5 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar5) {
          *(char **)(param_2[4] + 4) = pcVar6;
        }
        else {
          iVar3 = *(int *)(pcVar5 + 4);
          if (*(char **)(iVar3 + 0xc) == pcVar5) {
            *(char **)(iVar3 + 0xc) = pcVar6;
          }
          else {
            *(char **)(iVar3 + 8) = pcVar6;
          }
        }
        *(char **)(pcVar6 + 0xc) = pcVar5;
        *(char **)(pcVar5 + 4) = pcVar6;
        pcVar4 = pcVar5;
      }
      **(undefined1 **)(pcVar4 + 4) = 1;
      **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
      iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
      iVar7 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar7 + 8);
      if (*(int *)(iVar7 + 8) != 0) {
        *(int *)(*(int *)(iVar7 + 8) + 4) = iVar3;
      }
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar3 + 4);
      if (*(int *)(param_2[4] + 4) == iVar3) {
        *(int *)(param_2[4] + 4) = iVar7;
      }
      else {
        iVar10 = *(int *)(iVar3 + 4);
        if (*(int *)(iVar10 + 8) == iVar3) {
          *(int *)(iVar10 + 8) = iVar7;
        }
        else {
          *(int *)(iVar10 + 0xc) = iVar7;
        }
      }
      *(int *)(iVar7 + 8) = iVar3;
LAB_0076b74c:
      *(int *)(iVar3 + 4) = iVar7;
    }
    pcVar6 = *(char **)(*(int *)(pcVar5 + 4) + 0xc);
    if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\0')) {
      pcVar6 = *(char **)(pcVar5 + 0xc);
      if (pcVar6 == pcVar4) {
        *(undefined4 *)(pcVar5 + 0xc) = *(undefined4 *)(pcVar6 + 8);
        if (*(int *)(pcVar6 + 8) != 0) {
          *(char **)(*(int *)(pcVar6 + 8) + 4) = pcVar5;
        }
        *(undefined4 *)(pcVar6 + 4) = *(undefined4 *)(pcVar5 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar5) {
          *(char **)(param_2[4] + 4) = pcVar6;
        }
        else {
          iVar3 = *(int *)(pcVar5 + 4);
          if (*(char **)(iVar3 + 8) == pcVar5) {
            *(char **)(iVar3 + 8) = pcVar6;
          }
          else {
            *(char **)(iVar3 + 0xc) = pcVar6;
          }
        }
        *(char **)(pcVar6 + 8) = pcVar5;
        *(char **)(pcVar5 + 4) = pcVar6;
        pcVar4 = pcVar5;
      }
      **(undefined1 **)(pcVar4 + 4) = 1;
      **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
      iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
      iVar7 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar7 + 0xc);
      if (*(int *)(iVar7 + 0xc) != 0) {
        *(int *)(*(int *)(iVar7 + 0xc) + 4) = iVar3;
      }
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar3 + 4);
      if (*(int *)(param_2[4] + 4) == iVar3) {
        *(int *)(param_2[4] + 4) = iVar7;
      }
      else {
        iVar10 = *(int *)(iVar3 + 4);
        if (*(int *)(iVar10 + 0xc) == iVar3) {
          *(int *)(iVar10 + 0xc) = iVar7;
        }
        else {
          *(int *)(iVar10 + 8) = iVar7;
        }
      }
      *(int *)(iVar7 + 0xc) = iVar3;
      goto LAB_0076b74c;
    }
LAB_0076b654:
    *pcVar5 = '\x01';
    *pcVar6 = '\x01';
    **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
    pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
  } while( true );
}



void fn_0076b3a4(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_0076b3a4(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    fn_0014f1bc(*(undefined4 *)(param_2 + 0x18));
    fn_00170f54(param_2 + 0x10);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}


