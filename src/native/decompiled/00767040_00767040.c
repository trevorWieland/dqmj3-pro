#include "00767040_00767040.h"



void fn_00767040(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  char *pcVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)param_2[2];
    if (pcVar3 == (char *)param_2[3]) {
      if (*param_2 == 0) {
        uVar9 = 0x20;
      }
      else {
        uVar4 = *(uint *)(*param_2 + 4);
        uVar9 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (uVar9 < uVar4 + 0x20) {
          uVar9 = uVar4 + 0x20;
        }
      }
      piVar5 = (int *)fn_0015ece0(0xc);
      iVar6 = fn_0015ece0(uVar9 * 0x38);
      piVar5[2] = iVar6;
      *piVar5 = *param_2;
      piVar5[1] = uVar9;
      *param_2 = (int)piVar5;
      pcVar3 = (char *)piVar5[2];
      param_2[3] = (int)(pcVar3 + uVar9 * 0x38);
      param_2[2] = (int)(pcVar3 + 0x38);
    }
    else {
      param_2[2] = (int)(pcVar3 + 0x38);
    }
  }
  else {
    param_2[1] = *(int *)(pcVar3 + 0xc);
  }
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  pcVar3[8] = '\0';
  pcVar3[9] = '\0';
  pcVar3[10] = '\0';
  pcVar3[0xb] = '\0';
  pcVar3[0xc] = '\0';
  pcVar3[0xd] = '\0';
  pcVar3[0xe] = '\0';
  pcVar3[0xf] = '\0';
  *pcVar3 = '\0';
  if (pcVar3 + 0x10 != (char *)0x0) {
    *(undefined **)(pcVar3 + 0x10) = &DAT_008528bc;
    uVar13 = *(undefined4 *)(param_5 + 8);
    uVar14 = *(undefined4 *)(param_5 + 0xc);
    uVar15 = *(undefined4 *)(param_5 + 0x10);
    uVar16 = *(undefined4 *)(param_5 + 0x14);
    uVar17 = *(undefined4 *)(param_5 + 0x18);
    uVar18 = *(undefined4 *)(param_5 + 0x1c);
    *(undefined4 *)(pcVar3 + 0x14) = *(undefined4 *)(param_5 + 4);
    *(undefined4 *)(pcVar3 + 0x18) = uVar13;
    *(undefined4 *)(pcVar3 + 0x1c) = uVar14;
    *(undefined4 *)(pcVar3 + 0x20) = uVar15;
    *(undefined4 *)(pcVar3 + 0x24) = uVar16;
    *(undefined4 *)(pcVar3 + 0x28) = uVar17;
    *(undefined4 *)(pcVar3 + 0x2c) = uVar18;
    pcVar3[0x30] = *(char *)(param_5 + 0x20);
    *(undefined4 *)(pcVar3 + 0x34) = *(undefined4 *)(param_5 + 0x24);
  }
  param_2[5] = param_2[5] + 1;
  if ((param_2[4] != param_4) && (param_3 == 0)) {
    uVar1 = *(ushort *)(param_5 + 6);
    uVar2 = *(ushort *)(param_4 + 0x16);
    iVar11 = *(int *)(param_5 + 8);
    iVar6 = *(int *)(param_4 + 0x18);
    if (((int)(iVar11 - (iVar6 + (uint)(uVar1 < uVar2))) < 0 ==
         (SBORROW4(iVar11,iVar6) != SBORROW4(iVar11 - iVar6,(uint)(uVar1 < uVar2)))) &&
       ((iVar11 != iVar6 || uVar1 != uVar2 ||
        (*(byte *)(param_4 + 0x30) <= *(byte *)(param_5 + 0x20))))) {
      *(char **)(param_4 + 0xc) = pcVar3;
      if (*(int *)(param_2[4] + 0xc) == param_4) {
        *(char **)(param_2[4] + 0xc) = pcVar3;
      }
      goto LAB_007671cc;
    }
  }
  *(char **)(param_4 + 8) = pcVar3;
  iVar6 = param_2[4];
  if (iVar6 == param_4) {
    *(char **)(iVar6 + 4) = pcVar3;
    *(char **)(param_2[4] + 0xc) = pcVar3;
  }
  else if (*(int *)(iVar6 + 8) == param_4) {
    *(char **)(iVar6 + 8) = pcVar3;
  }
LAB_007671cc:
  *(int *)(pcVar3 + 4) = param_4;
  pcVar7 = pcVar3;
  do {
    while( true ) {
      if ((*(char **)(param_2[4] + 4) == pcVar7) ||
         (pcVar8 = *(char **)(pcVar7 + 4), *pcVar8 != '\0')) {
        **(undefined1 **)(param_2[4] + 4) = 1;
        *param_1 = pcVar3;
        return;
      }
      pcVar10 = *(char **)(*(int *)(pcVar8 + 4) + 8);
      if (pcVar8 != pcVar10) break;
      pcVar10 = *(char **)(*(int *)(pcVar8 + 4) + 0xc);
      if ((pcVar10 != (char *)0x0) && (*pcVar10 == '\0')) goto LAB_007672cc;
      pcVar10 = *(char **)(pcVar8 + 0xc);
      if (pcVar10 == pcVar7) {
        *(undefined4 *)(pcVar8 + 0xc) = *(undefined4 *)(pcVar10 + 8);
        if (*(int *)(pcVar10 + 8) != 0) {
          *(char **)(*(int *)(pcVar10 + 8) + 4) = pcVar8;
        }
        *(undefined4 *)(pcVar10 + 4) = *(undefined4 *)(pcVar8 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar8) {
          *(char **)(param_2[4] + 4) = pcVar10;
        }
        else {
          iVar6 = *(int *)(pcVar8 + 4);
          if (*(char **)(iVar6 + 8) == pcVar8) {
            *(char **)(iVar6 + 8) = pcVar10;
          }
          else {
            *(char **)(iVar6 + 0xc) = pcVar10;
          }
        }
        *(char **)(pcVar10 + 8) = pcVar8;
        *(char **)(pcVar8 + 4) = pcVar10;
        pcVar7 = pcVar8;
      }
      **(undefined1 **)(pcVar7 + 4) = 1;
      **(undefined1 **)(*(int *)(pcVar7 + 4) + 4) = 0;
      iVar6 = *(int *)(*(int *)(pcVar7 + 4) + 4);
      iVar11 = *(int *)(iVar6 + 8);
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar11 + 0xc);
      if (*(int *)(iVar11 + 0xc) != 0) {
        *(int *)(*(int *)(iVar11 + 0xc) + 4) = iVar6;
      }
      *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar6 + 4);
      if (*(int *)(param_2[4] + 4) == iVar6) {
        *(int *)(param_2[4] + 4) = iVar11;
      }
      else {
        iVar12 = *(int *)(iVar6 + 4);
        if (*(int *)(iVar12 + 0xc) == iVar6) {
          *(int *)(iVar12 + 0xc) = iVar11;
        }
        else {
          *(int *)(iVar12 + 8) = iVar11;
        }
      }
      *(int *)(iVar11 + 0xc) = iVar6;
LAB_007673c4:
      *(int *)(iVar6 + 4) = iVar11;
    }
    if ((pcVar10 == (char *)0x0) || (*pcVar10 != '\0')) {
      pcVar10 = *(char **)(pcVar8 + 8);
      if (pcVar10 == pcVar7) {
        *(undefined4 *)(pcVar8 + 8) = *(undefined4 *)(pcVar10 + 0xc);
        if (*(int *)(pcVar10 + 0xc) != 0) {
          *(char **)(*(int *)(pcVar10 + 0xc) + 4) = pcVar8;
        }
        *(undefined4 *)(pcVar10 + 4) = *(undefined4 *)(pcVar8 + 4);
        if (*(char **)(param_2[4] + 4) == pcVar8) {
          *(char **)(param_2[4] + 4) = pcVar10;
        }
        else {
          iVar6 = *(int *)(pcVar8 + 4);
          if (*(char **)(iVar6 + 0xc) == pcVar8) {
            *(char **)(iVar6 + 0xc) = pcVar10;
          }
          else {
            *(char **)(iVar6 + 8) = pcVar10;
          }
        }
        *(char **)(pcVar10 + 0xc) = pcVar8;
        *(char **)(pcVar8 + 4) = pcVar10;
        pcVar7 = pcVar8;
      }
      **(undefined1 **)(pcVar7 + 4) = 1;
      **(undefined1 **)(*(int *)(pcVar7 + 4) + 4) = 0;
      iVar6 = *(int *)(*(int *)(pcVar7 + 4) + 4);
      iVar11 = *(int *)(iVar6 + 0xc);
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar11 + 8);
      if (*(int *)(iVar11 + 8) != 0) {
        *(int *)(*(int *)(iVar11 + 8) + 4) = iVar6;
      }
      *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar6 + 4);
      if (*(int *)(param_2[4] + 4) == iVar6) {
        *(int *)(param_2[4] + 4) = iVar11;
      }
      else {
        iVar12 = *(int *)(iVar6 + 4);
        if (*(int *)(iVar12 + 8) == iVar6) {
          *(int *)(iVar12 + 8) = iVar11;
        }
        else {
          *(int *)(iVar12 + 0xc) = iVar11;
        }
      }
      *(int *)(iVar11 + 8) = iVar6;
      goto LAB_007673c4;
    }
LAB_007672cc:
    *pcVar8 = '\x01';
    *pcVar10 = '\x01';
    **(undefined1 **)(*(int *)(pcVar7 + 4) + 4) = 0;
    pcVar7 = *(char **)(*(int *)(pcVar7 + 4) + 4);
  } while( true );
}


