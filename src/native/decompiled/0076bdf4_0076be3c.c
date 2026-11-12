#include "0076bdf4_0076be3c.h"



void fn_0076be3c(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  
  pcVar7 = (char *)param_2[1];
  if (pcVar7 == (char *)0x0) {
    pcVar7 = (char *)param_2[2];
    if (pcVar7 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar8 = 0x20;
      }
      else {
        uVar1 = *(uint *)(*param_2 + 4);
        uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar8 < uVar1 + 0x20) {
          uVar8 = uVar1 + 0x20;
        }
      }
      piVar2 = (int *)fn_0015ece0(0xc);
      iVar3 = fn_0015ece0(uVar8 * 0x1c);
      piVar2[2] = iVar3;
      *piVar2 = *param_2;
      piVar2[1] = uVar8;
      *param_2 = (int)piVar2;
      pcVar7 = (char *)piVar2[2];
      param_2[3] = (int)(pcVar7 + uVar8 * 0x1c);
      param_2[2] = (int)(pcVar7 + 0x1c);
    }
    else {
      param_2[2] = (int)(pcVar7 + 0x1c);
    }
  }
  else {
    param_2[1] = *(int *)(pcVar7 + 0xc);
  }
  pcVar7[4] = '\0';
  pcVar7[5] = '\0';
  pcVar7[6] = '\0';
  pcVar7[7] = '\0';
  pcVar7[8] = '\0';
  pcVar7[9] = '\0';
  pcVar7[10] = '\0';
  pcVar7[0xb] = '\0';
  pcVar7[0xc] = '\0';
  pcVar7[0xd] = '\0';
  pcVar7[0xe] = '\0';
  pcVar7[0xf] = '\0';
  *pcVar7 = '\0';
  if (pcVar7 + 0x10 != (char *)0x0) {
    *(undefined **)(pcVar7 + 0x10) = &DAT_00855a94;
    fn_0015e6f0(pcVar7 + 0x14,*(undefined4 *)(param_5 + 4));
    *(undefined4 *)(pcVar7 + 0x18) = *(undefined4 *)(param_5 + 8);
  }
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) ||
     (iVar3 = fn_00190ef0(param_5,param_4 + 0x10), iVar3 != 0)) {
    *(char **)(param_4 + 8) = pcVar7;
    iVar3 = param_2[4];
    if (iVar3 == param_4) {
      *(char **)(iVar3 + 4) = pcVar7;
      *(char **)(param_2[4] + 0xc) = pcVar7;
    }
    else if (*(int *)(iVar3 + 8) == param_4) {
      *(char **)(iVar3 + 8) = pcVar7;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar7;
    if (*(int *)(param_2[4] + 0xc) == param_4) {
      *(char **)(param_2[4] + 0xc) = pcVar7;
    }
  }
  *(int *)(pcVar7 + 4) = param_4;
  pcVar4 = pcVar7;
  do {
    while( true ) {
      if ((*(char **)(param_2[4] + 4) == pcVar4) ||
         (pcVar5 = *(char **)(pcVar4 + 4), *pcVar5 != '\0')) {
        **(undefined1 **)(param_2[4] + 4) = 1;
        *param_1 = pcVar7;
        return;
      }
      pcVar9 = *(char **)(*(int *)(pcVar5 + 4) + 8);
      if (pcVar5 != pcVar9) break;
      pcVar9 = *(char **)(*(int *)(pcVar5 + 4) + 0xc);
      if ((pcVar9 == (char *)0x0) || (*pcVar9 != '\0')) {
        pcVar9 = *(char **)(pcVar5 + 0xc);
        if (pcVar9 == pcVar4) {
          *(undefined4 *)(pcVar5 + 0xc) = *(undefined4 *)(pcVar9 + 8);
          if (*(int *)(pcVar9 + 8) != 0) {
            *(char **)(*(int *)(pcVar9 + 8) + 4) = pcVar5;
          }
          *(undefined4 *)(pcVar9 + 4) = *(undefined4 *)(pcVar5 + 4);
          if (*(char **)(param_2[4] + 4) == pcVar5) {
            *(char **)(param_2[4] + 4) = pcVar9;
          }
          else {
            iVar3 = *(int *)(pcVar5 + 4);
            if (*(char **)(iVar3 + 8) == pcVar5) {
              *(char **)(iVar3 + 8) = pcVar9;
            }
            else {
              *(char **)(iVar3 + 0xc) = pcVar9;
            }
          }
          *(char **)(pcVar9 + 8) = pcVar5;
          *(char **)(pcVar5 + 4) = pcVar9;
          pcVar4 = pcVar5;
        }
        **(undefined1 **)(pcVar4 + 4) = 1;
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
        iVar6 = *(int *)(iVar3 + 8);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar6 + 0xc);
        if (*(int *)(iVar6 + 0xc) != 0) {
          *(int *)(*(int *)(iVar6 + 0xc) + 4) = iVar3;
        }
        *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
        if (*(int *)(param_2[4] + 4) == iVar3) {
          *(int *)(param_2[4] + 4) = iVar6;
        }
        else {
          iVar10 = *(int *)(iVar3 + 4);
          if (*(int *)(iVar10 + 0xc) == iVar3) {
            *(int *)(iVar10 + 0xc) = iVar6;
          }
          else {
            *(int *)(iVar10 + 8) = iVar6;
          }
        }
        *(int *)(iVar6 + 0xc) = iVar3;
LAB_0076c194:
        *(int *)(iVar3 + 4) = iVar6;
      }
      else {
        *pcVar5 = '\x01';
        *pcVar9 = '\x01';
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
      }
    }
    if ((pcVar9 == (char *)0x0) || (*pcVar9 != '\0')) {
      pcVar9 = *(char **)(pcVar5 + 8);
      if (pcVar9 == pcVar4) {
        *(undefined4 *)(pcVar5 + 8) = *(undefined4 *)(pcVar9 + 0xc);
        if (*(int *)(pcVar9 + 0xc) != 0) {
          *(char **)(*(int *)(pcVar9 + 0xc) + 4) = pcVar5;
        }
        *(undefined4 *)(pcVar9 + 4) = *(undefined4 *)(pcVar5 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar5) {
          *(char **)(param_2[4] + 4) = pcVar9;
        }
        else {
          iVar3 = *(int *)(pcVar5 + 4);
          if (*(char **)(iVar3 + 0xc) == pcVar5) {
            *(char **)(iVar3 + 0xc) = pcVar9;
          }
          else {
            *(char **)(iVar3 + 8) = pcVar9;
          }
        }
        *(char **)(pcVar9 + 0xc) = pcVar5;
        *(char **)(pcVar5 + 4) = pcVar9;
        pcVar4 = pcVar5;
      }
      **(undefined1 **)(pcVar4 + 4) = 1;
      **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
      iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
      iVar6 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar6 + 8);
      if (*(int *)(iVar6 + 8) != 0) {
        *(int *)(*(int *)(iVar6 + 8) + 4) = iVar3;
      }
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
      if (*(int *)(param_2[4] + 4) == iVar3) {
        *(int *)(param_2[4] + 4) = iVar6;
      }
      else {
        iVar10 = *(int *)(iVar3 + 4);
        if (*(int *)(iVar10 + 8) == iVar3) {
          *(int *)(iVar10 + 8) = iVar6;
        }
        else {
          *(int *)(iVar10 + 0xc) = iVar6;
        }
      }
      *(int *)(iVar6 + 8) = iVar3;
      goto LAB_0076c194;
    }
    *pcVar5 = '\x01';
    *pcVar9 = '\x01';
    **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
    pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
  } while( true );
}



void fn_0076bdf4(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_0076bdf4(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    fn_00170f54(param_2 + 0x10);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}


