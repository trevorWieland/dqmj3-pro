#include "00773874_007738b0.h"



void fn_007738b0(undefined4 *param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  pcVar5 = (char *)param_2[1];
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)param_2[2];
    if (pcVar5 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar1 = *(uint *)(*param_2 + 4);
        uVar6 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar6 < uVar1 + 0x20) {
          uVar6 = uVar1 + 0x20;
        }
      }
      piVar2 = (int *)fn_00100fc6(0xc,0);
      iVar8 = fn_00100fc6(uVar6 << 6,0);
      piVar2[2] = iVar8;
      *piVar2 = *param_2;
      piVar2[1] = uVar6;
      *param_2 = (int)piVar2;
      iVar8 = piVar2[2];
      param_2[2] = iVar8;
      param_2[3] = iVar8 + uVar6 * 0x40;
      pcVar5 = (char *)param_2[2];
      param_2[2] = (int)(pcVar5 + 0x40);
    }
    else {
      param_2[2] = (int)(pcVar5 + 0x40);
    }
  }
  else {
    param_2[1] = *(int *)(pcVar5 + 0xc);
  }
  pcVar5[4] = '\0';
  pcVar5[5] = '\0';
  pcVar5[6] = '\0';
  pcVar5[7] = '\0';
  pcVar5[8] = '\0';
  pcVar5[9] = '\0';
  pcVar5[10] = '\0';
  pcVar5[0xb] = '\0';
  pcVar5[0xc] = '\0';
  pcVar5[0xd] = '\0';
  pcVar5[0xe] = '\0';
  pcVar5[0xf] = '\0';
  *pcVar5 = '\0';
  *(int *)(pcVar5 + 0x10) = *param_5;
  iVar8 = param_5[2];
  iVar9 = param_5[3];
  iVar10 = param_5[4];
  iVar11 = param_5[5];
  iVar12 = param_5[6];
  iVar13 = param_5[7];
  iVar14 = param_5[8];
  *(int *)(pcVar5 + 0x14) = param_5[1];
  *(int *)(pcVar5 + 0x18) = iVar8;
  *(int *)(pcVar5 + 0x1c) = iVar9;
  *(int *)(pcVar5 + 0x20) = iVar10;
  *(int *)(pcVar5 + 0x24) = iVar11;
  *(int *)(pcVar5 + 0x28) = iVar12;
  *(int *)(pcVar5 + 0x2c) = iVar13;
  *(int *)(pcVar5 + 0x30) = iVar14;
  iVar8 = param_5[10];
  iVar9 = param_5[0xb];
  *(int *)(pcVar5 + 0x34) = param_5[9];
  *(int *)(pcVar5 + 0x38) = iVar8;
  *(int *)(pcVar5 + 0x3c) = iVar9;
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) || (*param_5 < *(int *)(param_4 + 0x10))) {
    *(char **)(param_4 + 8) = pcVar5;
    iVar8 = param_2[4];
    if (iVar8 == param_4) {
      *(char **)(iVar8 + 4) = pcVar5;
      *(char **)(param_2[4] + 0xc) = pcVar5;
    }
    else if (*(int *)(iVar8 + 8) == param_4) {
      *(char **)(iVar8 + 8) = pcVar5;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar5;
    if (*(int *)(param_2[4] + 0xc) == param_4) {
      *(char **)(param_2[4] + 0xc) = pcVar5;
    }
  }
  *(int *)(pcVar5 + 4) = param_4;
  pcVar3 = pcVar5;
  do {
    while( true ) {
      if ((*(char **)(param_2[4] + 4) == pcVar3) ||
         (pcVar4 = *(char **)(pcVar3 + 4), *pcVar4 != '\0')) {
        **(undefined1 **)(param_2[4] + 4) = 1;
        *param_1 = pcVar5;
        return;
      }
      pcVar7 = *(char **)(*(int *)(pcVar4 + 4) + 8);
      if (pcVar4 != pcVar7) break;
      pcVar7 = *(char **)(*(int *)(pcVar4 + 4) + 0xc);
      if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\0')) {
        if (*(char **)(pcVar4 + 0xc) == pcVar3) {
          iVar8 = *(int *)(pcVar4 + 0xc);
          *(int *)(pcVar4 + 0xc) = *(int *)(iVar8 + 8);
          if (*(int *)(iVar8 + 8) != 0) {
            *(char **)(*(int *)(iVar8 + 8) + 4) = pcVar4;
          }
          *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(pcVar4 + 4);
          if (*(char **)(param_2[4] + 4) == pcVar4) {
            *(int *)(param_2[4] + 4) = iVar8;
          }
          else {
            iVar9 = *(int *)(pcVar4 + 4);
            if (*(char **)(iVar9 + 8) == pcVar4) {
              *(int *)(iVar9 + 8) = iVar8;
            }
            else {
              *(int *)(iVar9 + 0xc) = iVar8;
            }
          }
          *(char **)(iVar8 + 8) = pcVar4;
          *(int *)(pcVar4 + 4) = iVar8;
          pcVar3 = pcVar4;
        }
        **(undefined1 **)(pcVar3 + 4) = 1;
        **(undefined1 **)(*(int *)(pcVar3 + 4) + 4) = 0;
        iVar8 = *(int *)(*(int *)(pcVar3 + 4) + 4);
        iVar9 = *(int *)(iVar8 + 8);
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar9 + 0xc);
        if (*(int *)(iVar9 + 0xc) != 0) {
          *(int *)(*(int *)(iVar9 + 0xc) + 4) = iVar8;
        }
        *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar8 + 4);
        if (*(int *)(param_2[4] + 4) == iVar8) {
          *(int *)(param_2[4] + 4) = iVar9;
        }
        else {
          iVar10 = *(int *)(iVar8 + 4);
          if (*(int *)(iVar10 + 0xc) == iVar8) {
            *(int *)(iVar10 + 0xc) = iVar9;
          }
          else {
            *(int *)(iVar10 + 8) = iVar9;
          }
        }
        *(int *)(iVar9 + 0xc) = iVar8;
        *(int *)(iVar8 + 4) = iVar9;
      }
      else {
        *pcVar4 = '\x01';
        *pcVar7 = '\x01';
        **(undefined1 **)(*(int *)(pcVar3 + 4) + 4) = 0;
        iVar8 = *(int *)(pcVar3 + 4);
LAB_00773ca4:
        pcVar3 = *(char **)(iVar8 + 4);
      }
    }
    if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\0')) {
      *pcVar4 = '\x01';
      *pcVar7 = '\x01';
      **(undefined1 **)(*(int *)(pcVar3 + 4) + 4) = 0;
      iVar8 = *(int *)(pcVar3 + 4);
      goto LAB_00773ca4;
    }
    if (*(char **)(pcVar4 + 8) == pcVar3) {
      iVar8 = *(int *)(pcVar4 + 8);
      *(int *)(pcVar4 + 8) = *(int *)(iVar8 + 0xc);
      if (*(int *)(iVar8 + 0xc) != 0) {
        *(char **)(*(int *)(iVar8 + 0xc) + 4) = pcVar4;
      }
      *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(pcVar4 + 4);
      if (*(char **)(param_2[4] + 4) == pcVar4) {
        *(int *)(param_2[4] + 4) = iVar8;
      }
      else {
        iVar9 = *(int *)(pcVar4 + 4);
        if (*(char **)(iVar9 + 0xc) == pcVar4) {
          *(int *)(iVar9 + 0xc) = iVar8;
        }
        else {
          *(int *)(iVar9 + 8) = iVar8;
        }
      }
      *(char **)(iVar8 + 0xc) = pcVar4;
      *(int *)(pcVar4 + 4) = iVar8;
      pcVar3 = pcVar4;
    }
    **(undefined1 **)(pcVar3 + 4) = 1;
    **(undefined1 **)(*(int *)(pcVar3 + 4) + 4) = 0;
    iVar8 = *(int *)(*(int *)(pcVar3 + 4) + 4);
    iVar9 = *(int *)(iVar8 + 0xc);
    *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar9 + 8);
    if (*(int *)(iVar9 + 8) != 0) {
      *(int *)(*(int *)(iVar9 + 8) + 4) = iVar8;
    }
    *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar8 + 4);
    if (*(int *)(param_2[4] + 4) == iVar8) {
      *(int *)(param_2[4] + 4) = iVar9;
    }
    else {
      iVar10 = *(int *)(iVar8 + 4);
      if (*(int *)(iVar10 + 8) == iVar8) {
        *(int *)(iVar10 + 8) = iVar9;
      }
      else {
        *(int *)(iVar10 + 0xc) = iVar9;
      }
    }
    *(int *)(iVar9 + 8) = iVar8;
    *(int *)(iVar8 + 4) = iVar9;
  } while( true );
}



void fn_00773874(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_00773874(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}


