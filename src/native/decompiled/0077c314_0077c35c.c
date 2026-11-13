#include "0077c314_0077c35c.h"



void fn_0077c35c(undefined4 *param_1,int *param_2,int param_3,int param_4,short *param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  
  pcVar9 = (char *)param_2[1];
  if (pcVar9 == (char *)0x0) {
    pcVar9 = (char *)param_2[2];
    if (pcVar9 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar10 = 0x20;
      }
      else {
        uVar1 = *(uint *)(*param_2 + 4);
        uVar5 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        uVar10 = uVar1 + 0x20;
        if (uVar1 + 0x20 <= uVar5) {
          uVar10 = uVar5;
        }
      }
      piVar2 = (int *)fn_00100fc6(0xc,0);
      iVar3 = fn_00100fc6(uVar10 << 6,0);
      piVar2[2] = iVar3;
      *piVar2 = *param_2;
      piVar2[1] = uVar10;
      *param_2 = (int)piVar2;
      pcVar9 = (char *)piVar2[2];
      param_2[2] = (int)pcVar9;
      param_2[3] = (int)(pcVar9 + uVar10 * 0x40);
      param_2[2] = (int)(pcVar9 + 0x40);
    }
    else {
      param_2[2] = (int)(pcVar9 + 0x40);
    }
  }
  else {
    param_2[1] = *(int *)(pcVar9 + 0xc);
  }
  pcVar9[4] = '\0';
  pcVar9[5] = '\0';
  pcVar9[6] = '\0';
  pcVar9[7] = '\0';
  pcVar9[8] = '\0';
  pcVar9[9] = '\0';
  pcVar9[10] = '\0';
  pcVar9[0xb] = '\0';
  pcVar9[0xc] = '\0';
  pcVar9[0xd] = '\0';
  pcVar9[0xe] = '\0';
  pcVar9[0xf] = '\0';
  *pcVar9 = '\0';
  *(short *)(pcVar9 + 0x10) = *param_5;
  iVar3 = fn_001c6ba4(pcVar9 + 0x14,param_5 + 2);
  *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(param_5 + 0x16);
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) || (*param_5 < *(short *)(param_4 + 0x10))) {
    *(char **)(param_4 + 8) = pcVar9;
    iVar3 = param_2[4];
    if (iVar3 == param_4) {
      *(char **)(iVar3 + 4) = pcVar9;
      *(char **)(param_2[4] + 0xc) = pcVar9;
    }
    else if (*(int *)(iVar3 + 8) == param_4) {
      *(char **)(iVar3 + 8) = pcVar9;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar9;
    if (*(int *)(param_2[4] + 0xc) == param_4) {
      *(char **)(param_2[4] + 0xc) = pcVar9;
    }
  }
  *(int *)(pcVar9 + 4) = param_4;
  pcVar4 = pcVar9;
  do {
    while( true ) {
      if ((*(char **)(param_2[4] + 4) == pcVar4) ||
         (pcVar6 = *(char **)(pcVar4 + 4), *pcVar6 != '\0')) {
        **(undefined1 **)(param_2[4] + 4) = 1;
        *param_1 = pcVar9;
        return;
      }
      pcVar7 = *(char **)(*(int *)(pcVar6 + 4) + 8);
      if (pcVar6 != pcVar7) break;
      pcVar7 = *(char **)(*(int *)(pcVar6 + 4) + 0xc);
      if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\0')) {
        if (*(char **)(pcVar6 + 0xc) == pcVar4) {
          iVar3 = *(int *)(pcVar6 + 0xc);
          *(undefined4 *)(pcVar6 + 0xc) = *(undefined4 *)(iVar3 + 8);
          if (*(int *)(iVar3 + 8) != 0) {
            *(char **)(*(int *)(iVar3 + 8) + 4) = pcVar6;
          }
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar6 + 4);
          if (*(char **)(param_2[4] + 4) == pcVar6) {
            *(int *)(param_2[4] + 4) = iVar3;
          }
          else {
            iVar8 = *(int *)(pcVar6 + 4);
            if (*(char **)(iVar8 + 8) == pcVar6) {
              *(int *)(iVar8 + 8) = iVar3;
            }
            else {
              *(int *)(iVar8 + 0xc) = iVar3;
            }
          }
          *(char **)(iVar3 + 8) = pcVar6;
          *(int *)(pcVar6 + 4) = iVar3;
          pcVar4 = pcVar6;
        }
        **(undefined1 **)(pcVar4 + 4) = 1;
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
        iVar8 = *(int *)(iVar3 + 8);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar8 + 0xc);
        if (*(int *)(iVar8 + 0xc) != 0) {
          *(int *)(*(int *)(iVar8 + 0xc) + 4) = iVar3;
        }
        *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar3 + 4);
        if (*(int *)(param_2[4] + 4) == iVar3) {
          *(int *)(param_2[4] + 4) = iVar8;
        }
        else {
          iVar11 = *(int *)(iVar3 + 4);
          if (*(int *)(iVar11 + 0xc) == iVar3) {
            *(int *)(iVar11 + 0xc) = iVar8;
          }
          else {
            *(int *)(iVar11 + 8) = iVar8;
          }
        }
        *(int *)(iVar8 + 0xc) = iVar3;
        *(int *)(iVar3 + 4) = iVar8;
      }
      else {
        *pcVar6 = '\x01';
        *pcVar7 = '\x01';
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        iVar3 = *(int *)(pcVar4 + 4);
LAB_0077c738:
        pcVar4 = *(char **)(iVar3 + 4);
      }
    }
    if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\0')) {
      *pcVar6 = '\x01';
      *pcVar7 = '\x01';
      **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
      iVar3 = *(int *)(pcVar4 + 4);
      goto LAB_0077c738;
    }
    if (*(char **)(pcVar6 + 8) == pcVar4) {
      iVar3 = *(int *)(pcVar6 + 8);
      *(int *)(pcVar6 + 8) = *(int *)(iVar3 + 0xc);
      if (*(int *)(iVar3 + 0xc) != 0) {
        *(char **)(*(int *)(iVar3 + 0xc) + 4) = pcVar6;
      }
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar6 + 4);
      if (*(char **)(param_2[4] + 4) == pcVar6) {
        *(int *)(param_2[4] + 4) = iVar3;
      }
      else {
        iVar8 = *(int *)(pcVar6 + 4);
        if (*(char **)(iVar8 + 0xc) == pcVar6) {
          *(int *)(iVar8 + 0xc) = iVar3;
        }
        else {
          *(int *)(iVar8 + 8) = iVar3;
        }
      }
      *(char **)(iVar3 + 0xc) = pcVar6;
      *(int *)(pcVar6 + 4) = iVar3;
      pcVar4 = pcVar6;
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
      iVar11 = *(int *)(iVar3 + 4);
      if (*(int *)(iVar11 + 8) == iVar3) {
        *(int *)(iVar11 + 8) = iVar8;
      }
      else {
        *(int *)(iVar11 + 0xc) = iVar8;
      }
    }
    *(int *)(iVar8 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar8;
  } while( true );
}



void fn_0077c314(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_0077c314(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    fn_002fedf4(param_2 + 0x14);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}


