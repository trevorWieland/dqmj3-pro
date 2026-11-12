#include "00774f50_00774f8c.h"



void fn_00774f8c(undefined4 *param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  
  pcVar6 = (char *)param_2[1];
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)param_2[2];
    if (pcVar6 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar7 = 0x20;
      }
      else {
        uVar1 = *(uint *)(*param_2 + 4);
        uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar7 < uVar1 + 0x20) {
          uVar7 = uVar1 + 0x20;
        }
      }
      piVar2 = (int *)fn_00100fc6(0xc,0);
      iVar3 = fn_00100fc6(uVar7 * 0x18,0);
      piVar2[2] = iVar3;
      *piVar2 = *param_2;
      piVar2[1] = uVar7;
      *param_2 = (int)piVar2;
      pcVar6 = (char *)piVar2[2];
      param_2[2] = (int)pcVar6;
      param_2[3] = (int)(pcVar6 + uVar7 * 0x18);
      param_2[2] = (int)(pcVar6 + 0x18);
    }
    else {
      param_2[2] = (int)(pcVar6 + 0x18);
    }
  }
  else {
    param_2[1] = *(int *)(pcVar6 + 0xc);
  }
  pcVar6[4] = '\0';
  pcVar6[5] = '\0';
  pcVar6[6] = '\0';
  pcVar6[7] = '\0';
  pcVar6[8] = '\0';
  pcVar6[9] = '\0';
  pcVar6[10] = '\0';
  pcVar6[0xb] = '\0';
  pcVar6[0xc] = '\0';
  pcVar6[0xd] = '\0';
  pcVar6[0xe] = '\0';
  pcVar6[0xf] = '\0';
  *pcVar6 = '\0';
  *(int *)(pcVar6 + 0x10) = *param_5;
  *(int *)(pcVar6 + 0x14) = param_5[1];
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) || (*param_5 < *(int *)(param_4 + 0x10))) {
    *(char **)(param_4 + 8) = pcVar6;
    iVar3 = param_2[4];
    if (iVar3 == param_4) {
      *(char **)(iVar3 + 4) = pcVar6;
      *(char **)(param_2[4] + 0xc) = pcVar6;
    }
    else if (*(int *)(iVar3 + 8) == param_4) {
      *(char **)(iVar3 + 8) = pcVar6;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar6;
    if (*(int *)(param_2[4] + 0xc) == param_4) {
      *(char **)(param_2[4] + 0xc) = pcVar6;
    }
  }
  *(int *)(pcVar6 + 4) = param_4;
  pcVar4 = pcVar6;
  do {
    while( true ) {
      if ((*(char **)(param_2[4] + 4) == pcVar4) ||
         (pcVar5 = *(char **)(pcVar4 + 4), *pcVar5 != '\0')) {
        **(undefined1 **)(param_2[4] + 4) = 1;
        *param_1 = pcVar6;
        return;
      }
      pcVar8 = *(char **)(*(int *)(pcVar5 + 4) + 8);
      if (pcVar5 != pcVar8) break;
      pcVar8 = *(char **)(*(int *)(pcVar5 + 4) + 0xc);
      if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\0')) {
        if (*(char **)(pcVar5 + 0xc) == pcVar4) {
          iVar3 = *(int *)(pcVar5 + 0xc);
          *(undefined4 *)(pcVar5 + 0xc) = *(undefined4 *)(iVar3 + 8);
          if (*(int *)(iVar3 + 8) != 0) {
            *(char **)(*(int *)(iVar3 + 8) + 4) = pcVar5;
          }
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar5 + 4);
          if (*(char **)(param_2[4] + 4) == pcVar5) {
            *(int *)(param_2[4] + 4) = iVar3;
          }
          else {
            iVar9 = *(int *)(pcVar5 + 4);
            if (*(char **)(iVar9 + 8) == pcVar5) {
              *(int *)(iVar9 + 8) = iVar3;
            }
            else {
              *(int *)(iVar9 + 0xc) = iVar3;
            }
          }
          *(char **)(iVar3 + 8) = pcVar5;
          *(int *)(pcVar5 + 4) = iVar3;
          pcVar4 = pcVar5;
        }
        **(undefined1 **)(pcVar4 + 4) = 1;
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
        iVar9 = *(int *)(iVar3 + 8);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar9 + 0xc);
        iVar10 = *(int *)(iVar9 + 0xc);
        if (iVar10 != 0) {
          *(int *)(iVar10 + 4) = iVar3;
        }
        *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar3 + 4);
        if (*(int *)(param_2[4] + 4) == iVar3) {
          *(int *)(param_2[4] + 4) = iVar9;
        }
        else {
          iVar10 = *(int *)(iVar3 + 4);
          if (*(int *)(iVar10 + 0xc) == iVar3) {
            *(int *)(iVar10 + 0xc) = iVar9;
          }
          else {
            *(int *)(iVar10 + 8) = iVar9;
          }
        }
        *(int *)(iVar9 + 0xc) = iVar3;
        *(int *)(iVar3 + 4) = iVar9;
      }
      else {
        *pcVar5 = '\x01';
        *pcVar8 = '\x01';
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        iVar3 = *(int *)(pcVar4 + 4);
LAB_0077537c:
        pcVar4 = *(char **)(iVar3 + 4);
      }
    }
    if ((pcVar8 != (char *)0x0) && (*pcVar8 == '\0')) {
      *pcVar5 = '\x01';
      *pcVar8 = '\x01';
      **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
      iVar3 = *(int *)(pcVar4 + 4);
      goto LAB_0077537c;
    }
    if (*(char **)(pcVar5 + 8) == pcVar4) {
      iVar3 = *(int *)(pcVar5 + 8);
      *(int *)(pcVar5 + 8) = *(int *)(iVar3 + 0xc);
      if (*(int *)(iVar3 + 0xc) != 0) {
        *(char **)(*(int *)(iVar3 + 0xc) + 4) = pcVar5;
      }
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar5 + 4);
      if (*(char **)(param_2[4] + 4) == pcVar5) {
        *(int *)(param_2[4] + 4) = iVar3;
      }
      else {
        iVar9 = *(int *)(pcVar5 + 4);
        if (*(char **)(iVar9 + 0xc) == pcVar5) {
          *(int *)(iVar9 + 0xc) = iVar3;
        }
        else {
          *(int *)(iVar9 + 8) = iVar3;
        }
      }
      *(char **)(iVar3 + 0xc) = pcVar5;
      *(int *)(pcVar5 + 4) = iVar3;
      pcVar4 = pcVar5;
    }
    **(undefined1 **)(pcVar4 + 4) = 1;
    **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
    iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
    iVar9 = *(int *)(iVar3 + 0xc);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar9 + 8);
    if (*(int *)(iVar9 + 8) != 0) {
      *(int *)(*(int *)(iVar9 + 8) + 4) = iVar3;
    }
    *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar3 + 4);
    if (*(int *)(param_2[4] + 4) == iVar3) {
      *(int *)(param_2[4] + 4) = iVar9;
    }
    else {
      iVar10 = *(int *)(iVar3 + 4);
      if (*(int *)(iVar10 + 8) == iVar3) {
        *(int *)(iVar10 + 8) = iVar9;
      }
      else {
        *(int *)(iVar10 + 0xc) = iVar9;
      }
    }
    *(int *)(iVar9 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar9;
  } while( true );
}



void fn_00774f50(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_00774f50(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}


