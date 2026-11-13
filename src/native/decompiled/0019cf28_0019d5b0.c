#include "0019cf28_0019d5b0.h"



uint fn_0019d5b0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *in_lr;
  bool bVar2;
  
  if ((((int)*in_lr < 0) || (param_3 = param_2 * 2, param_3 < 0xff000001)) &&
     (param_1 * 2 < 0xff000001)) {
    if (param_1 * 2 == 0xff000000) {
      uVar1 = ((int)param_1 >> 0x1f) * -3 + 2;
      if (param_3 == 0xff000000) {
        uVar1 = (uVar1 - ((int)param_2 >> 0x1f)) + 1;
      }
    }
    else {
      uVar1 = param_2 >> 0x1f;
    }
  }
  else {
    uVar1 = 8;
  }
  uVar1 = *in_lr >> uVar1 * 3 & 7;
  switch(uVar1) {
  case 4:
    break;
  case 5:
    param_2 = param_1;
    break;
  case 6:
  case 7:
    return 0x7fc00000;
  default:
                    /* WARNING: Could not recover jumptable at 0x0019d618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(in_lr + uVar1 + 1))();
    return uVar1;
  }
  bVar2 = SUB41(param_2 >> 0x1f,0);
  uVar1 = param_2 * 2;
  if (uVar1 != 0) {
    bVar2 = uVar1 < 0x1000001;
  }
  if (bVar2 && (uVar1 != 0 && uVar1 != 0x1000000)) {
    param_2 = 0;
  }
  return param_2;
}



undefined4 * fn_0019d558(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    iVar3 = param_1[1] << 1;
    if (iVar3 == 0) {
      iVar3 = 4;
    }
    iVar1 = fn_0018388c(*param_1,param_1[2] << 2,iVar3 << 2);
    *param_1 = iVar1;
    param_1[2] = iVar3;
  }
  puVar2 = (undefined4 *)(*param_1 + param_1[1] * 4);
  param_1[1] = param_1[1] + 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = *param_2;
  }
  return puVar2;
}



void fn_0019d408(int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((uint)param_1[2] < param_2) {
    uVar4 = param_2;
    if (param_2 == 0) {
      uVar4 = 4;
    }
    iVar1 = fn_0018388c(*param_1,param_1[2] * 0x30,uVar4 * 0x30);
    *param_1 = iVar1;
    param_1[2] = uVar4;
  }
  uVar4 = param_1[1];
  if (uVar4 < param_2) {
    do {
      puVar2 = (undefined4 *)(*param_1 + uVar4 * 0x30);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *param_3;
        puVar2[1] = param_3[1];
        puVar2[2] = param_3[2];
        iVar1 = param_3[3];
        puVar2[3] = iVar1;
        if ((puVar2[2] & 0x8000000) != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
        puVar2[4] = param_3[4];
        puVar2[5] = param_3[5];
        puVar2[6] = param_3[6];
        puVar2[7] = param_3[7];
        puVar2[8] = param_3[8];
        puVar2[9] = param_3[9];
        puVar2[10] = param_3[10];
        puVar2[0xb] = param_3[0xb];
      }
      uVar4 = param_1[1] + 1;
      param_1[1] = uVar4;
    } while (uVar4 < param_2);
    return;
  }
  uVar5 = param_2;
  if (param_2 < uVar4) {
    do {
      iVar1 = *param_1 + uVar5 * 0x30;
      if (((*(uint *)(iVar1 + 8) & 0x8000000) != 0) &&
         (iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + 4) + -1,
         *(int *)(*(int *)(iVar1 + 0xc) + 4) = iVar3, iVar3 == 0)) {
        (**(code **)(**(int **)(iVar1 + 0xc) + 8))();
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)param_1[1]);
  }
  param_1[1] = param_2;
  return;
}



void fn_0019d320(int *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  if ((uint)param_1[2] < param_2) {
    uVar4 = param_2;
    if (param_2 == 0) {
      uVar4 = 4;
    }
    iVar1 = fn_0018388c(*param_1,param_1[2] << 3,uVar4 << 3);
    *param_1 = iVar1;
    param_1[2] = uVar4;
  }
  uVar4 = param_1[1];
  if (uVar4 < param_2) {
    do {
      puVar2 = (uint *)(*param_1 + uVar4 * 8);
      if (puVar2 != (uint *)0x0) {
        uVar4 = *param_3;
        *puVar2 = uVar4;
        uVar3 = param_3[1];
        puVar2[1] = uVar3;
        if ((uVar4 & 0x8000000) != 0) {
          *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
        }
      }
      uVar4 = param_1[1] + 1;
      param_1[1] = uVar4;
    } while (uVar4 < param_2);
    return;
  }
  uVar3 = param_2;
  if (param_2 < uVar4) {
    do {
      puVar2 = (uint *)(*param_1 + uVar3 * 8);
      if (((*puVar2 & 0x8000000) != 0) &&
         (iVar1 = *(int *)(puVar2[1] + 4) + -1, *(int *)(puVar2[1] + 4) = iVar1, iVar1 == 0)) {
        (**(code **)(*(int *)puVar2[1] + 8))();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[1]);
  }
  param_1[1] = param_2;
  return;
}



void fn_0019cf28(undefined4 *param_1,int *param_2,int param_3,int param_4,uint *param_5)

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
  *(uint *)(pcVar6 + 0x10) = *param_5;
  *(uint *)(pcVar6 + 0x14) = param_5[1];
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
LAB_0019d318:
        pcVar4 = *(char **)(iVar3 + 4);
      }
    }
    if ((pcVar8 != (char *)0x0) && (*pcVar8 == '\0')) {
      *pcVar5 = '\x01';
      *pcVar8 = '\x01';
      **(undefined1 **)(*(int *)(pcVar4 + 4) + 4) = 0;
      iVar3 = *(int *)(pcVar4 + 4);
      goto LAB_0019d318;
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


