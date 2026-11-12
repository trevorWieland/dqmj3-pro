#include "00772cd4_00776c90.h"



void fn_00776c90(undefined4 *param_1,int *param_2,int param_3,int param_4,uint *param_5)

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
      iVar3 = fn_0015ece0(uVar9 * 0x34);
      piVar2[2] = iVar3;
      *piVar2 = *param_2;
      piVar2[1] = uVar9;
      *param_2 = (int)piVar2;
      pcVar8 = (char *)piVar2[2];
      param_2[3] = (int)(pcVar8 + uVar9 * 0x34);
      param_2[2] = (int)(pcVar8 + 0x34);
    }
    else {
      param_2[2] = (int)(pcVar8 + 0x34);
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
  if ((uint *)(pcVar8 + 0x10) != (uint *)0x0) {
    *(uint *)(pcVar8 + 0x10) = *param_5;
    fn_004b5404(pcVar8 + 0x14,param_5 + 1);
  }
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) || (*param_5 < *(uint *)(param_4 + 0x10))) {
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
      if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\0')) goto LAB_00776edc;
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
LAB_00776fd4:
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
      goto LAB_00776fd4;
    }
LAB_00776edc:
    *pcVar5 = '\x01';
    *pcVar6 = '\x01';
    **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
    pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
  } while( true );
}



void fn_00772cd4(undefined4 *param_1,int *param_2,int param_3,int param_4,byte *param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  
  pcVar7 = (char *)param_2[1];
  if (pcVar7 == (char *)0x0) {
    pcVar7 = (char *)param_2[2];
    if (pcVar7 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar11 = 0x20;
      }
      else {
        uVar1 = *(uint *)(*param_2 + 4);
        uVar5 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        uVar11 = uVar1 + 0x20;
        if (uVar1 + 0x20 <= uVar5) {
          uVar11 = uVar5;
        }
      }
      piVar2 = (int *)fn_00100fc6(0xc,0);
      iVar3 = fn_00100fc6(uVar11 << 5,0);
      piVar2[2] = iVar3;
      *piVar2 = *param_2;
      piVar2[1] = uVar11;
      *param_2 = (int)piVar2;
      iVar3 = piVar2[2];
      param_2[2] = iVar3;
      param_2[3] = iVar3 + uVar11 * 0x20;
      pcVar7 = (char *)param_2[2];
      param_2[2] = (int)(pcVar7 + 0x20);
    }
    else {
      param_2[2] = (int)(pcVar7 + 0x20);
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
  pcVar7[0x10] = *param_5;
  uVar8 = *(undefined4 *)(param_5 + 8);
  uVar12 = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)(pcVar7 + 0x14) = *(undefined4 *)(param_5 + 4);
  *(undefined4 *)(pcVar7 + 0x18) = uVar8;
  *(undefined4 *)(pcVar7 + 0x1c) = uVar12;
  param_2[5] = param_2[5] + 1;
  if (((param_2[4] == param_4) || (param_3 != 0)) || (*param_5 < *(byte *)(param_4 + 0x10))) {
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
         (pcVar6 = *(char **)(pcVar4 + 4), *pcVar6 != '\0')) {
        **(undefined1 **)(param_2[4] + 4) = 1;
        *param_1 = pcVar7;
        return;
      }
      pcVar9 = *(char **)(*(int *)(pcVar6 + 4) + 8);
      if (pcVar6 != pcVar9) break;
      pcVar9 = *(char **)(*(int *)(pcVar6 + 4) + 0xc);
      if ((pcVar9 == (char *)0x0) || (*pcVar9 != '\0')) {
        if (*(char **)(pcVar6 + 0xc) == pcVar4) {
          iVar3 = *(int *)(pcVar6 + 0xc);
          *(int *)(pcVar6 + 0xc) = *(int *)(iVar3 + 8);
          if (*(int *)(iVar3 + 8) != 0) {
            *(char **)(*(int *)(iVar3 + 8) + 4) = pcVar6;
          }
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pcVar6 + 4);
          if (*(char **)(param_2[4] + 4) == pcVar6) {
            *(int *)(param_2[4] + 4) = iVar3;
          }
          else {
            iVar10 = *(int *)(pcVar6 + 4);
            if (*(char **)(iVar10 + 8) == pcVar6) {
              *(int *)(iVar10 + 8) = iVar3;
            }
            else {
              *(int *)(iVar10 + 0xc) = iVar3;
            }
          }
          *(char **)(iVar3 + 8) = pcVar6;
          *(int *)(pcVar6 + 4) = iVar3;
          pcVar4 = pcVar6;
        }
        **(undefined1 **)(pcVar4 + 4) = 1;
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
        iVar10 = *(int *)(iVar3 + 8);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar10 + 0xc);
        iVar13 = *(int *)(iVar10 + 0xc);
        if (iVar13 != 0) {
          *(int *)(iVar13 + 4) = iVar3;
        }
        *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar3 + 4);
        if (*(int *)(param_2[4] + 4) == iVar3) {
          *(int *)(param_2[4] + 4) = iVar10;
        }
        else {
          iVar13 = *(int *)(iVar3 + 4);
          if (*(int *)(iVar13 + 0xc) == iVar3) {
            *(int *)(iVar13 + 0xc) = iVar10;
          }
          else {
            *(int *)(iVar13 + 8) = iVar10;
          }
        }
        *(int *)(iVar10 + 0xc) = iVar3;
        *(int *)(iVar3 + 4) = iVar10;
      }
      else {
LAB_00773070:
        *pcVar6 = '\x01';
        *pcVar9 = '\x01';
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
      }
    }
    if ((pcVar9 != (char *)0x0) && (*pcVar9 == '\0')) goto LAB_00773070;
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
        iVar10 = *(int *)(pcVar6 + 4);
        if (*(char **)(iVar10 + 0xc) == pcVar6) {
          *(int *)(iVar10 + 0xc) = iVar3;
        }
        else {
          *(int *)(iVar10 + 8) = iVar3;
        }
      }
      *(char **)(iVar3 + 0xc) = pcVar6;
      *(int *)(pcVar6 + 4) = iVar3;
      pcVar4 = pcVar6;
    }
    **(undefined1 **)(pcVar4 + 4) = 1;
    **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
    iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
    iVar10 = *(int *)(iVar3 + 0xc);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar10 + 8);
    if (*(int *)(iVar10 + 8) != 0) {
      *(int *)(*(int *)(iVar10 + 8) + 4) = iVar3;
    }
    *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar3 + 4);
    if (*(int *)(param_2[4] + 4) == iVar3) {
      *(int *)(param_2[4] + 4) = iVar10;
    }
    else {
      iVar13 = *(int *)(iVar3 + 4);
      if (*(int *)(iVar13 + 8) == iVar3) {
        *(int *)(iVar13 + 8) = iVar10;
      }
      else {
        *(int *)(iVar13 + 0xc) = iVar10;
      }
    }
    *(int *)(iVar10 + 8) = iVar3;
    *(int *)(iVar3 + 4) = iVar10;
  } while( true );
}


