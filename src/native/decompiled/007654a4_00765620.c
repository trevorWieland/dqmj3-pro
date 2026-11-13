#include "007654a4_00765620.h"



void fn_00765620(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  pcVar6 = (char *)param_2[1];
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)param_2[2];
    if (pcVar6 == (char *)param_2[3]) {
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
      iVar3 = fn_0015ece0(uVar9 * 0x54);
      piVar2[2] = iVar3;
      *piVar2 = *param_2;
      piVar2[1] = uVar9;
      *param_2 = (int)piVar2;
      pcVar6 = (char *)piVar2[2];
      param_2[3] = (int)(pcVar6 + uVar9 * 0x54);
      param_2[2] = (int)(pcVar6 + 0x54);
    }
    else {
      param_2[2] = (int)(pcVar6 + 0x54);
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
  if (pcVar6 + 0x10 != (char *)0x0) {
    *(undefined **)(pcVar6 + 0x10) = &DAT_008528bc;
    uVar12 = *(undefined4 *)(param_5 + 8);
    uVar13 = *(undefined4 *)(param_5 + 0xc);
    uVar14 = *(undefined4 *)(param_5 + 0x10);
    uVar15 = *(undefined4 *)(param_5 + 0x14);
    uVar16 = *(undefined4 *)(param_5 + 0x18);
    uVar17 = *(undefined4 *)(param_5 + 0x1c);
    *(undefined4 *)(pcVar6 + 0x14) = *(undefined4 *)(param_5 + 4);
    *(undefined4 *)(pcVar6 + 0x18) = uVar12;
    *(undefined4 *)(pcVar6 + 0x1c) = uVar13;
    *(undefined4 *)(pcVar6 + 0x20) = uVar14;
    *(undefined4 *)(pcVar6 + 0x24) = uVar15;
    *(undefined4 *)(pcVar6 + 0x28) = uVar16;
    *(undefined4 *)(pcVar6 + 0x2c) = uVar17;
    *(undefined **)(pcVar6 + 0x30) = &DAT_008528bc;
    uVar12 = *(undefined4 *)(param_5 + 0x28);
    uVar13 = *(undefined4 *)(param_5 + 0x2c);
    uVar14 = *(undefined4 *)(param_5 + 0x30);
    uVar15 = *(undefined4 *)(param_5 + 0x34);
    uVar16 = *(undefined4 *)(param_5 + 0x38);
    uVar17 = *(undefined4 *)(param_5 + 0x3c);
    *(undefined4 *)(pcVar6 + 0x34) = *(undefined4 *)(param_5 + 0x24);
    *(undefined4 *)(pcVar6 + 0x38) = uVar12;
    *(undefined4 *)(pcVar6 + 0x3c) = uVar13;
    *(undefined4 *)(pcVar6 + 0x40) = uVar14;
    *(undefined4 *)(pcVar6 + 0x44) = uVar15;
    *(undefined4 *)(pcVar6 + 0x48) = uVar16;
    *(undefined4 *)(pcVar6 + 0x4c) = uVar17;
    *(undefined4 *)(pcVar6 + 0x50) = *(undefined4 *)(param_5 + 0x40);
  }
  param_2[5] = param_2[5] + 1;
  if ((param_2[4] != param_4) && (param_3 == 0)) {
    iVar3 = *(int *)(param_5 + 8);
    iVar10 = *(int *)(param_4 + 0x18);
    bVar11 = *(ushort *)(param_5 + 6) < *(ushort *)(param_4 + 0x16);
    if ((int)(iVar3 - (iVar10 + (uint)bVar11)) < 0 ==
        (SBORROW4(iVar3,iVar10) != SBORROW4(iVar3 - iVar10,(uint)bVar11))) {
      *(char **)(param_4 + 0xc) = pcVar6;
      if (*(int *)(param_2[4] + 0xc) == param_4) {
        *(char **)(param_2[4] + 0xc) = pcVar6;
      }
      goto LAB_00765770;
    }
  }
  *(char **)(param_4 + 8) = pcVar6;
  iVar3 = param_2[4];
  if (iVar3 == param_4) {
    *(char **)(iVar3 + 4) = pcVar6;
    *(char **)(param_2[4] + 0xc) = pcVar6;
  }
  else if (*(int *)(iVar3 + 8) == param_4) {
    *(char **)(iVar3 + 8) = pcVar6;
  }
LAB_00765770:
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
        iVar3 = *(int *)(*(int *)(pcVar4 + 4) + 4);
        iVar10 = *(int *)(iVar3 + 8);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar10 + 0xc);
        if (*(int *)(iVar10 + 0xc) != 0) {
          *(int *)(*(int *)(iVar10 + 0xc) + 4) = iVar3;
        }
        *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar3 + 4);
        if (*(int *)(param_2[4] + 4) == iVar3) {
          *(int *)(param_2[4] + 4) = iVar10;
        }
        else {
          iVar8 = *(int *)(iVar3 + 4);
          if (*(int *)(iVar8 + 0xc) == iVar3) {
            *(int *)(iVar8 + 0xc) = iVar10;
          }
          else {
            *(int *)(iVar8 + 8) = iVar10;
          }
        }
        *(int *)(iVar10 + 0xc) = iVar3;
LAB_00765998:
        *(int *)(iVar3 + 4) = iVar10;
      }
      else {
        *pcVar5 = '\x01';
        *pcVar7 = '\x01';
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
      }
    }
    if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\0')) {
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
        iVar8 = *(int *)(iVar3 + 4);
        if (*(int *)(iVar8 + 8) == iVar3) {
          *(int *)(iVar8 + 8) = iVar10;
        }
        else {
          *(int *)(iVar8 + 0xc) = iVar10;
        }
      }
      *(int *)(iVar10 + 8) = iVar3;
      goto LAB_00765998;
    }
    *pcVar5 = '\x01';
    *pcVar7 = '\x01';
    **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
    pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
  } while( true );
}



void fn_007654a4(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_20;
  int local_1c [2];
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  iVar1 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(iVar1 + 8);
  bVar3 = *param_3 != iVar2;
  if (!bVar3) {
    iVar2 = *param_4;
  }
  if ((bVar3 || iVar2 != iVar1) || (*(int *)(param_2 + 0x14) == 0)) {
    while (local_1c[0] = *param_3, local_1c[0] != *param_4) {
      iVar2 = *(int *)(local_1c[0] + 0xc);
      if (iVar2 == 0) {
        iVar1 = *(int *)(local_1c[0] + 4);
        iVar2 = iVar1;
        if (local_1c[0] == *(int *)(iVar1 + 0xc)) {
          do {
            *param_3 = iVar2;
            iVar1 = *(int *)(iVar2 + 4);
            bVar3 = iVar2 == *(int *)(iVar1 + 0xc);
            iVar2 = iVar1;
          } while (bVar3);
        }
        if (*(int *)(*param_3 + 0xc) != iVar1) {
          *param_3 = iVar1;
        }
      }
      else {
        *param_3 = iVar2;
        while (iVar2 = *(int *)(iVar2 + 8), iVar2 != 0) {
          *param_3 = iVar2;
        }
      }
      fn_00764e48(&local_20,param_2,local_1c);
      *param_1 = local_20;
    }
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
    while (iVar2 != 0) {
      fn_007655e4(param_2,*(undefined4 *)(iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 4);
      *(int *)(param_2 + 4) = iVar2;
      iVar2 = iVar1;
    }
    *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x10);
  }
  return;
}



void fn_007655e4(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_007655e4(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}


