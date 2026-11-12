#include "007b653c_007b6a60a.h"



void fn_007b653c(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_3c;
  char *local_38;
  
  iVar3 = 0;
  if (param_4 != 0) {
    iVar3 = param_5;
  }
  if (param_4 != 0 && iVar3 != 0) {
    if (param_4 + param_5 != 2) {
      if (param_5 < param_4) {
        local_3c = param_4 / 2;
        pcVar7 = param_1 + local_3c * 0xc;
        iVar3 = (param_3 - (int)param_2) / 0xc;
        local_38 = param_2;
        if (0 < iVar3) {
          do {
            iVar4 = iVar3 / 2;
            pcVar8 = local_38 + iVar4 * 0xc;
            if (*pcVar8 == *pcVar7) {
              if ((byte)pcVar8[1] < (byte)pcVar7[1]) goto LAB_007b663c;
            }
            else if (*pcVar8 != '\0') {
LAB_007b663c:
              local_38 = pcVar8 + 0xc;
              iVar4 = (iVar3 - iVar4) + -1;
            }
            iVar3 = iVar4;
          } while (0 < iVar4);
        }
        iVar3 = ((int)local_38 - (int)param_2) / 0xc;
      }
      else {
        iVar3 = param_5 / 2;
        local_38 = param_2 + iVar3 * 0xc;
        iVar4 = ((int)param_2 - (int)param_1) / 0xc;
        pcVar7 = param_1;
        if (0 < iVar4) {
          do {
            iVar5 = iVar4 / 2;
            pcVar8 = pcVar7 + iVar5 * 0xc;
            if (*local_38 == *pcVar8) {
              if ((byte)pcVar8[1] <= (byte)local_38[1]) goto LAB_007b66e8;
            }
            else if (*local_38 == '\0') {
LAB_007b66e8:
              pcVar7 = pcVar8 + 0xc;
              iVar5 = (iVar4 - iVar5) + -1;
            }
            iVar4 = iVar5;
          } while (0 < iVar5);
        }
        local_3c = ((int)pcVar7 - (int)param_1) / 0xc;
      }
      if (pcVar7 != param_2 && param_2 != local_38) {
        iVar5 = ((int)param_2 - (int)pcVar7) / 0xc;
        iVar4 = ((int)local_38 - (int)pcVar7) / 0xc;
        while (iVar1 = iVar5, iVar1 != 0) {
          fn_00300f74(iVar4,iVar1);
          iVar4 = iVar1;
          iVar5 = extraout_r1;
        }
        if (iVar4 != 0) {
          iVar5 = ((int)param_2 - (int)pcVar7) / 0xc;
          do {
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar7 + iVar4 * 0xc;
            uVar9 = *(undefined4 *)pcVar6;
            uVar10 = *(undefined4 *)(pcVar6 + 4);
            uVar11 = *(undefined4 *)(pcVar6 + 8);
            pcVar8 = pcVar6;
            pcVar2 = pcVar6 + iVar5 * 0xc;
            while (pcVar2 != pcVar6) {
              uVar12 = *(undefined4 *)(pcVar2 + 4);
              uVar13 = *(undefined4 *)(pcVar2 + 8);
              *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
              *(undefined4 *)(pcVar8 + 4) = uVar12;
              *(undefined4 *)(pcVar8 + 8) = uVar13;
              iVar1 = ((int)local_38 - (int)pcVar2) / 0xc;
              pcVar8 = pcVar2;
              if (iVar5 < iVar1) {
                pcVar2 = pcVar2 + iVar5 * 0xc;
              }
              else {
                pcVar2 = pcVar7 + (iVar5 - iVar1) * 0xc;
              }
            }
            *(undefined4 *)pcVar8 = uVar9;
            *(undefined4 *)(pcVar8 + 4) = uVar10;
            *(undefined4 *)(pcVar8 + 8) = uVar11;
          } while (iVar4 != 0);
        }
      }
      fn_007b653c(param_1,pcVar7,pcVar7 + iVar3 * 0xc,local_3c,iVar3);
      fn_007b653c(pcVar7 + iVar3 * 0xc,local_38,param_3,param_4 - local_3c,param_5 - iVar3);
      return;
    }
    if (*param_2 == *param_1) {
      if ((byte)param_1[1] <= (byte)param_2[1]) {
        return;
      }
    }
    else if (*param_2 == '\0') {
      return;
    }
    uVar11 = *(undefined4 *)(param_2 + 4);
    uVar12 = *(undefined4 *)(param_2 + 8);
    uVar9 = *(undefined4 *)param_1;
    uVar10 = *(undefined4 *)(param_1 + 4);
    uVar13 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = uVar11;
    *(undefined4 *)(param_1 + 8) = uVar12;
    *(undefined4 *)param_2 = uVar9;
    *(undefined4 *)(param_2 + 4) = uVar10;
    *(undefined4 *)(param_2 + 8) = uVar13;
  }
  return;
}


