#include "00183a34_00183eb0.h"



void fn_00183eb0(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar8 + 1);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *param_2;
    }
    return;
  }
  uVar3 = (int)((int)puVar8 - *param_1) >> 2;
  if ((uint)((int)((int)param_1[2] - *param_1) >> 2) <= uVar3) {
    uVar10 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar10 < uVar3 + 0x20) {
      uVar10 = uVar3 + 0x20;
    }
    puVar1 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar6 = puVar1;
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar8; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *param_2;
    }
    puVar6 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
    for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
      puVar5 = puVar5 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
      }
    }
    uVar2 = *param_1;
    uVar7 = param_1[1];
    uVar3 = uVar2;
    if (uVar7 < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar7);
    }
    fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 2,0);
    param_1[2] = (uint)(puVar1 + uVar10);
    param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar2) >> 2) + 1);
    *param_1 = (uint)puVar1;
    return;
  }
  param_1[1] = (uint)(puVar8 + 1);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = puVar8[-1];
  }
  puVar5 = puVar8 + -1;
  puVar6 = puVar8;
  if (puVar8 < puVar5) {
    if (0 < (int)puVar5 - (int)puVar8) {
      iVar9 = (int)puVar5 - (int)puVar8 >> 2;
      iVar4 = 0;
      do {
        iVar9 = iVar9 + -1;
        puVar8[iVar4 + -1] = puVar5[iVar4 + -1];
        iVar4 = iVar4 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    while (puVar8 != puVar5) {
      puVar5 = puVar5 + -1;
      puVar6[-1] = *puVar5;
      puVar6 = puVar6 + -1;
    }
  }
  *puVar8 = *param_2;
  return;
}



int * fn_00183dcc(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_20 [3];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_20[0] = (param_2[1] - *param_2) / 0xc;
  puVar2 = local_20;
  if (local_20[0] < 0x20) {
    puVar2 = local_20 + 1;
  }
  local_20[1] = 0x20;
  uVar5 = *puVar2;
  puVar1 = (undefined4 *)fn_00100fc6(uVar5 * 0xc,0);
  *param_1 = (int)puVar1;
  puVar3 = (undefined4 *)param_2[1];
  for (puVar4 = (undefined4 *)*param_2; puVar4 != puVar3; puVar4 = puVar4 + 3) {
    if (puVar1 != (undefined4 *)0x0) {
      uVar6 = puVar4[1];
      uVar7 = puVar4[2];
      *puVar1 = *puVar4;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
    }
    puVar1 = puVar1 + 3;
  }
  param_1[1] = *param_1 + ((param_2[1] - *param_2) / 0xc) * 0xc;
  param_1[2] = *param_1 + uVar5 * 0xc;
  return param_1;
}



void fn_00183a34(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

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
      iVar3 = fn_0015ece0(uVar9 << 5);
      piVar2[2] = iVar3;
      *piVar2 = *param_2;
      piVar2[1] = uVar9;
      *param_2 = (int)piVar2;
      pcVar8 = (char *)piVar2[2];
      param_2[3] = (int)(pcVar8 + uVar9 * 0x20);
      param_2[2] = (int)(pcVar8 + 0x20);
    }
    else {
      param_2[2] = (int)(pcVar8 + 0x20);
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
    *(undefined **)(pcVar8 + 0x10) = &DAT_00855a94;
    fn_0015e6f0(pcVar8 + 0x14,*(undefined4 *)(param_5 + 4));
    *(undefined **)(pcVar8 + 0x18) = &DAT_00855a94;
    fn_0015e6f0(pcVar8 + 0x1c,*(undefined4 *)(param_5 + 0xc));
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
      if (pcVar5 != pcVar6) break;
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
        iVar7 = *(int *)(*(int *)(pcVar4 + 4) + 4);
        iVar3 = *(int *)(iVar7 + 8);
        *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar3 + 0xc);
        if (*(int *)(iVar3 + 0xc) != 0) {
          *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar7;
        }
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar7 + 4);
        if (*(int *)(param_2[4] + 4) == iVar7) {
          *(int *)(param_2[4] + 4) = iVar3;
        }
        else {
          iVar10 = *(int *)(iVar7 + 4);
          if (*(int *)(iVar10 + 0xc) == iVar7) {
            *(int *)(iVar10 + 0xc) = iVar3;
          }
          else {
            *(int *)(iVar10 + 8) = iVar3;
          }
        }
        *(int *)(iVar3 + 0xc) = iVar7;
        *(int *)(iVar7 + 4) = iVar3;
      }
      else {
LAB_00183c94:
        *pcVar5 = '\x01';
        *pcVar6 = '\x01';
        **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
        pcVar4 = *(char **)(*(int *)(pcVar4 + 4) + 4);
      }
    }
    if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\0')) goto LAB_00183c94;
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
    *(int *)(iVar3 + 4) = iVar7;
  } while( true );
}


