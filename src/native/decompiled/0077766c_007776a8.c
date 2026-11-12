#include "0077766c_007776a8.h"



void fn_007776a8(undefined4 *param_1,int *param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  pcVar6 = (char *)param_2[1];
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)param_2[2];
    if (pcVar6 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar10 = 0x20;
      }
      else {
        uVar1 = *(uint *)(*param_2 + 4);
        uVar10 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar10 < uVar1 + 0x20) {
          uVar10 = uVar1 + 0x20;
        }
      }
      piVar2 = (int *)fn_0015ece0(0xc);
      iVar3 = fn_0015ece0(uVar10 * 0x18);
      piVar2[2] = iVar3;
      *piVar2 = *param_2;
      piVar2[1] = uVar10;
      *param_2 = (int)piVar2;
      pcVar6 = (char *)piVar2[2];
      param_2[3] = (int)(pcVar6 + uVar10 * 0x18);
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
  if ((uint *)(pcVar6 + 0x10) != (uint *)0x0) {
    *(uint *)(pcVar6 + 0x10) = *param_5;
    *(uint *)(pcVar6 + 0x14) = param_5[1];
  }
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) || (*param_5 < *(uint *)(param_4 + 0x10))) {
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
      pcVar7 = *(char **)(*(int *)(pcVar5 + 4) + 8);
      if (pcVar5 != pcVar7) break;
      pcVar7 = *(char **)(*(int *)(pcVar5 + 4) + 0xc);
      if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\0')) {
        pcVar7 = *(char **)(pcVar5 + 0xc);
        if (pcVar7 == pcVar4) {
          *(undefined4 *)(pcVar5 + 0xc) = *(undefined4 *)(pcVar7 + 8);
          if (*(int *)(pcVar7 + 8) != 0) {
            *(char **)(*(int *)(pcVar7 + 8) + 4) = pcVar5;
          }
          *(undefined4 *)(pcVar7 + 4) = *(undefined4 *)(pcVar5 + 4);
          if (*(char **)(param_2[4] + 4) == pcVar5) {
            *(char **)(param_2[4] + 4) = pcVar7;
          }
          else {
            iVar3 = *(int *)(pcVar5 + 4);
            if (*(char **)(iVar3 + 8) == pcVar5) {
              *(char **)(iVar3 + 8) = pcVar7;
            }
            else {
              *(char **)(iVar3 + 0xc) = pcVar7;
            }
          }
          *(char **)(pcVar7 + 8) = pcVar5;
          *(char **)(pcVar5 + 4) = pcVar7;
          pcVar4 = pcVar5;
        }
        **(undefined1 **)(pcVar4 + 4) = 1;
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        iVar8 = *(int *)(*(int *)(pcVar4 + 4) + 4);
        iVar3 = *(int *)(iVar8 + 8);
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar3 + 0xc);
        if (*(int *)(iVar3 + 0xc) != 0) {
          *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar8;
        }
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar8 + 4);
        if (*(int *)(param_2[4] + 4) == iVar8) {
          *(int *)(param_2[4] + 4) = iVar3;
        }
        else {
          iVar9 = *(int *)(iVar8 + 4);
          if (*(int *)(iVar9 + 0xc) == iVar8) {
            *(int *)(iVar9 + 0xc) = iVar3;
          }
          else {
            *(int *)(iVar9 + 8) = iVar3;
          }
        }
        *(int *)(iVar3 + 0xc) = iVar8;
        *(int *)(iVar8 + 4) = iVar3;
      }
      else {
LAB_007778f4:
        *pcVar5 = '\x01';
        *pcVar7 = '\x01';
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
      }
    }
    if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\0')) goto LAB_007778f4;
    pcVar7 = *(char **)(pcVar5 + 8);
    if (pcVar7 == pcVar4) {
      *(undefined4 *)(pcVar5 + 8) = *(undefined4 *)(pcVar7 + 0xc);
      if (*(int *)(pcVar7 + 0xc) != 0) {
        *(char **)(*(int *)(pcVar7 + 0xc) + 4) = pcVar5;
      }
      *(undefined4 *)(pcVar7 + 4) = *(undefined4 *)(pcVar5 + 4);
      if (*(char **)(param_2[4] + 4) == pcVar5) {
        *(char **)(param_2[4] + 4) = pcVar7;
      }
      else {
        iVar3 = *(int *)(pcVar5 + 4);
        if (*(char **)(iVar3 + 0xc) == pcVar5) {
          *(char **)(iVar3 + 0xc) = pcVar7;
        }
        else {
          *(char **)(iVar3 + 8) = pcVar7;
        }
      }
      *(char **)(pcVar7 + 0xc) = pcVar5;
      *(char **)(pcVar5 + 4) = pcVar7;
      pcVar4 = pcVar5;
    }
    **(undefined1 **)(pcVar4 + 4) = 1;
    **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
    iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
    iVar8 = *(int *)(iVar3 + 0xc);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar8 + 8);
    if (*(int *)(iVar8 + 8) != 0) {
      *(int *)(*(int *)(iVar8 + 8) + 4) = iVar3;
    }
    *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar3 + 4);
    if (*(int *)(param_2[4] + 4) == iVar3) {
      *(int *)(param_2[4] + 4) = iVar8;
    }
    else {
      iVar9 = *(int *)(iVar3 + 4);
      if (*(int *)(iVar9 + 8) == iVar3) {
        *(int *)(iVar9 + 8) = iVar8;
      }
      else {
        *(int *)(iVar9 + 0xc) = iVar8;
      }
    }
    *(int *)(iVar8 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar8;
  } while( true );
}



void fn_0077766c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_0077766c(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}


