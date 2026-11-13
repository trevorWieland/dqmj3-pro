#include "007b773c_007b7ab8.h"



void fn_007b7ab8(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *in_r12;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int *piStack_34;
  int *local_30;
  int *piStack_2c;
  undefined4 uStack_28;
  
  local_38 = (int)param_2 - (int)param_1;
  local_40 = local_38 >> 2;
  local_3c = param_3 + local_40;
  piVar3 = param_1;
  iVar11 = local_40;
  while (6 < iVar11) {
    piVar5 = piVar3 + 7;
    if (piVar3 != piVar5) {
      in_r12 = piVar3 + 1;
    }
    if (piVar3 != piVar5 && in_r12 != piVar5) {
      do {
        iVar11 = *in_r12;
        if (iVar11 >> 0x10 < (int)*(short *)((int)piVar3 + 2)) {
          piVar8 = in_r12 + 1;
          piVar1 = in_r12;
          if (piVar3 < in_r12) {
            iVar12 = (int)in_r12 - (int)piVar3;
            if (0 < iVar12) {
              if (iVar12 * 0x20000000 < 0) {
                piVar1 = in_r12 + -1;
                *in_r12 = *piVar1;
                piVar8 = in_r12;
              }
              for (iVar12 = iVar12 >> 3; iVar12 != 0; iVar12 = iVar12 + -1) {
                piVar8[-1] = piVar1[-1];
                piVar1 = piVar1 + -2;
                piVar8 = piVar8 + -2;
                *piVar8 = *piVar1;
              }
            }
          }
          else {
            while (piVar3 != piVar1) {
              piVar8 = piVar8 + -1;
              *piVar8 = piVar1[-1];
              piVar1 = piVar1 + -1;
            }
          }
          *piVar3 = iVar11;
        }
        else {
          piVar8 = in_r12;
          while (iVar11 >> 0x10 < (int)*(short *)((int)piVar8 + -2)) {
            *piVar8 = piVar8[-1];
            piVar8 = piVar8 + -1;
          }
          *piVar8 = iVar11;
        }
        in_r12 = in_r12 + 1;
      } while (in_r12 != piVar5);
    }
    piVar3 = piVar5;
    iVar11 = (int)param_2 - (int)piVar5 >> 2;
  }
  piStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  uStack_28 = param_4;
  fn_007a52d8(piVar3,param_2);
  if (7 < local_40) {
    iVar12 = (int)local_3c - (int)param_3;
    iVar11 = 7;
    do {
      piVar8 = local_30;
      local_48 = iVar11;
      piVar3 = param_3;
      piVar5 = param_1;
      iVar9 = local_38;
      while (iVar11 * 2 <= iVar9 >> 2) {
        piVar7 = piVar5 + iVar11 * 2;
        piVar6 = piVar5;
        piVar1 = piVar5 + local_48;
        while (piVar6 != piVar5 + local_48 && piVar1 != piVar7) {
          if (*(short *)((int)piVar1 + 2) < *(short *)((int)piVar6 + 2)) {
            iVar9 = *piVar1;
            piVar4 = piVar6;
            piVar1 = piVar1 + 1;
          }
          else {
            piVar4 = piVar6 + 1;
            iVar9 = *piVar6;
          }
          *piVar3 = iVar9;
          piVar6 = piVar4;
          piVar3 = piVar3 + 1;
        }
        uVar2 = fn_007b89a8();
        piVar3 = (int *)fn_007b89a8(piVar1,piVar7,uVar2);
        piVar5 = piVar7;
        iVar9 = (int)piVar8 - (int)piVar7;
      }
      local_44 = (int)piVar8 - (int)piVar5 >> 2;
      piVar1 = &local_44;
      if (local_48 < local_44) {
        piVar1 = &local_48;
      }
      local_48 = *piVar1;
      piVar6 = piVar5;
      piVar1 = piVar5 + local_48;
      while (piVar6 != piVar5 + local_48 && piVar1 != piVar8) {
        if (*(short *)((int)piVar1 + 2) < *(short *)((int)piVar6 + 2)) {
          iVar9 = *piVar1;
          piVar7 = piVar6;
          piVar1 = piVar1 + 1;
        }
        else {
          piVar7 = piVar6 + 1;
          iVar9 = *piVar6;
        }
        *piVar3 = iVar9;
        piVar6 = piVar7;
        piVar3 = piVar3 + 1;
      }
      uVar2 = fn_007b89a8();
      fn_007b89a8(piVar1,piVar8,uVar2);
      piVar8 = local_3c;
      iVar9 = iVar11 * 4;
      local_48 = iVar11 * 2;
      piVar3 = param_3;
      piVar5 = param_1;
      iVar10 = iVar12;
      while (iVar9 <= iVar10 >> 2) {
        piVar7 = piVar3 + iVar11 * 4;
        piVar6 = piVar3;
        piVar1 = piVar3 + local_48;
        while (piVar6 != piVar3 + local_48 && piVar1 != piVar7) {
          if (*(short *)((int)piVar1 + 2) < *(short *)((int)piVar6 + 2)) {
            iVar10 = *piVar1;
            piVar4 = piVar6;
            piVar1 = piVar1 + 1;
          }
          else {
            piVar4 = piVar6 + 1;
            iVar10 = *piVar6;
          }
          *piVar5 = iVar10;
          piVar6 = piVar4;
          piVar5 = piVar5 + 1;
        }
        uVar2 = fn_007b89a8();
        piVar5 = (int *)fn_007b89a8(piVar1,piVar7,uVar2);
        piVar3 = piVar7;
        iVar10 = (int)piVar8 - (int)piVar7;
      }
      local_44 = (int)piVar8 - (int)piVar3 >> 2;
      piVar1 = &local_44;
      if (local_48 < local_44) {
        piVar1 = &local_48;
      }
      local_48 = *piVar1;
      piVar6 = piVar3;
      piVar1 = piVar3 + local_48;
      while (piVar6 != piVar3 + local_48 && piVar1 != piVar8) {
        if (*(short *)((int)piVar1 + 2) < *(short *)((int)piVar6 + 2)) {
          iVar11 = *piVar1;
          piVar7 = piVar6;
          piVar1 = piVar1 + 1;
        }
        else {
          piVar7 = piVar6 + 1;
          iVar11 = *piVar6;
        }
        *piVar5 = iVar11;
        piVar6 = piVar7;
        piVar5 = piVar5 + 1;
      }
      uVar2 = fn_007b89a8();
      fn_007b89a8(piVar1,piVar8,uVar2);
      iVar11 = iVar9;
    } while (iVar9 < local_40);
  }
  return;
}



void fn_007b773c(char *param_1,char *param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  int unaff_r9;
  undefined4 uVar13;
  char *pcVar14;
  int local_70;
  int local_6c;
  int local_60 [2];
  int local_58;
  int local_40 [2];
  char *local_38;
  char *pcStack_34;
  char *local_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  
  iVar2 = ((int)param_2 - (int)param_1) / 0xc;
  local_38 = param_3 + iVar2 * 0xc;
  pcVar10 = param_1;
  local_6c = iVar2;
  pcStack_34 = param_1;
  local_30 = param_2;
  pcStack_2c = param_3;
  uStack_28 = param_4;
  if (6 < iVar2) {
    unaff_r9 = 0x15;
    pcVar5 = param_1;
    do {
      pcVar10 = pcVar5 + 0x54;
      fn_007a3cc4(pcVar5,pcVar10);
      pcVar5 = pcVar10;
    } while (6 < ((int)param_2 - (int)pcVar10) / 0xc);
  }
  fn_007a3cc4(pcVar10,param_2);
  if (7 < iVar2) {
    local_58 = ((int)local_38 - (int)param_3) / 0xc;
    iVar9 = 7;
    do {
      pcVar10 = local_30;
      iVar1 = iVar9 * 2;
      if (iVar1 <= local_6c) {
        unaff_r9 = iVar9 * 6;
      }
      local_70 = iVar9;
      pcVar5 = param_3;
      pcVar6 = param_1;
      iVar3 = local_6c;
      while (iVar1 <= iVar3) {
        pcVar11 = pcVar6 + unaff_r9 * 4;
        pcVar7 = pcVar6 + local_70 * 0xc;
        pcVar14 = pcVar7;
        while (pcVar6 != pcVar7 && pcVar14 != pcVar11) {
          if (*pcVar14 == *pcVar6) {
            if ((byte)pcVar6[1] <= (byte)pcVar14[1]) goto LAB_007b785c;
LAB_007b7854:
            uVar4 = *(undefined4 *)pcVar14;
            uVar12 = *(undefined4 *)(pcVar14 + 4);
            uVar13 = *(undefined4 *)(pcVar14 + 8);
            pcVar14 = pcVar14 + 0xc;
          }
          else {
            if (*pcVar14 != '\0') goto LAB_007b7854;
LAB_007b785c:
            uVar4 = *(undefined4 *)pcVar6;
            uVar12 = *(undefined4 *)(pcVar6 + 4);
            uVar13 = *(undefined4 *)(pcVar6 + 8);
            pcVar6 = pcVar6 + 0xc;
          }
          *(undefined4 *)pcVar5 = uVar4;
          *(undefined4 *)(pcVar5 + 4) = uVar12;
          *(undefined4 *)(pcVar5 + 8) = uVar13;
          pcVar5 = pcVar5 + 0xc;
        }
        uVar4 = fn_007b8910();
        pcVar5 = (char *)fn_007b8910(pcVar14,pcVar11,uVar4);
        pcVar6 = pcVar11;
        iVar3 = ((int)pcVar10 - (int)pcVar11) / 0xc;
      }
      piVar8 = local_40;
      local_40[0] = ((int)pcVar10 - (int)pcVar6) / 0xc;
      if (local_70 < local_40[0]) {
        piVar8 = &local_70;
      }
      local_70 = *piVar8;
      pcVar7 = pcVar6 + local_70 * 0xc;
      pcVar14 = pcVar7;
      while (pcVar6 != pcVar7 && pcVar14 != pcVar10) {
        if (*pcVar14 == *pcVar6) {
          if ((byte)pcVar6[1] <= (byte)pcVar14[1]) goto LAB_007b7918;
LAB_007b7910:
          uVar4 = *(undefined4 *)pcVar14;
          uVar12 = *(undefined4 *)(pcVar14 + 4);
          uVar13 = *(undefined4 *)(pcVar14 + 8);
          pcVar14 = pcVar14 + 0xc;
        }
        else {
          if (*pcVar14 != '\0') goto LAB_007b7910;
LAB_007b7918:
          uVar4 = *(undefined4 *)pcVar6;
          uVar12 = *(undefined4 *)(pcVar6 + 4);
          uVar13 = *(undefined4 *)(pcVar6 + 8);
          pcVar6 = pcVar6 + 0xc;
        }
        *(undefined4 *)pcVar5 = uVar4;
        *(undefined4 *)(pcVar5 + 4) = uVar12;
        *(undefined4 *)(pcVar5 + 8) = uVar13;
        pcVar5 = pcVar5 + 0xc;
      }
      uVar4 = fn_007b8910();
      fn_007b8910(pcVar14,pcVar10,uVar4);
      pcVar10 = local_38;
      local_60[0] = iVar1;
      iVar1 = iVar9 * 4;
      pcVar5 = param_3;
      pcVar6 = param_1;
      if (iVar1 <= local_58) {
        unaff_r9 = iVar9 * 0xc;
        pcVar14 = param_3;
        do {
          pcVar5 = pcVar14 + iVar9 * 0x30;
          pcVar11 = pcVar14 + local_60[0] * 0xc;
          pcVar7 = pcVar11;
          while (pcVar14 != pcVar11 && pcVar7 != pcVar5) {
            if (*pcVar7 == *pcVar14) {
              if ((byte)pcVar14[1] <= (byte)pcVar7[1]) goto LAB_007b79b4;
LAB_007b79ac:
              uVar4 = *(undefined4 *)pcVar7;
              uVar12 = *(undefined4 *)(pcVar7 + 4);
              uVar13 = *(undefined4 *)(pcVar7 + 8);
              pcVar7 = pcVar7 + 0xc;
            }
            else {
              if (*pcVar7 != '\0') goto LAB_007b79ac;
LAB_007b79b4:
              uVar4 = *(undefined4 *)pcVar14;
              uVar12 = *(undefined4 *)(pcVar14 + 4);
              uVar13 = *(undefined4 *)(pcVar14 + 8);
              pcVar14 = pcVar14 + 0xc;
            }
            *(undefined4 *)pcVar6 = uVar4;
            *(undefined4 *)(pcVar6 + 4) = uVar12;
            *(undefined4 *)(pcVar6 + 8) = uVar13;
            pcVar6 = pcVar6 + 0xc;
          }
          uVar4 = fn_007b8910();
          pcVar6 = (char *)fn_007b8910(pcVar7,pcVar5,uVar4);
          pcVar14 = pcVar5;
        } while (iVar1 <= ((int)pcVar10 - (int)pcVar5) / 0xc);
      }
      local_40[0] = ((int)pcVar10 - (int)pcVar5) / 0xc;
      piVar8 = local_40;
      if (local_60[0] < local_40[0]) {
        piVar8 = local_60;
      }
      local_60[0] = *piVar8;
      pcVar7 = pcVar5 + local_60[0] * 0xc;
      pcVar14 = pcVar7;
      while (pcVar5 != pcVar7 && pcVar14 != pcVar10) {
        if (*pcVar14 == *pcVar5) {
          if ((byte)pcVar5[1] <= (byte)pcVar14[1]) goto LAB_007b7a74;
LAB_007b7a6c:
          uVar4 = *(undefined4 *)pcVar14;
          uVar12 = *(undefined4 *)(pcVar14 + 4);
          uVar13 = *(undefined4 *)(pcVar14 + 8);
          pcVar14 = pcVar14 + 0xc;
        }
        else {
          if (*pcVar14 != '\0') goto LAB_007b7a6c;
LAB_007b7a74:
          uVar4 = *(undefined4 *)pcVar5;
          uVar12 = *(undefined4 *)(pcVar5 + 4);
          uVar13 = *(undefined4 *)(pcVar5 + 8);
          pcVar5 = pcVar5 + 0xc;
        }
        *(undefined4 *)pcVar6 = uVar4;
        *(undefined4 *)(pcVar6 + 4) = uVar12;
        *(undefined4 *)(pcVar6 + 8) = uVar13;
        pcVar6 = pcVar6 + 0xc;
      }
      uVar4 = fn_007b8910();
      fn_007b8910(pcVar14,pcVar10,uVar4);
      iVar9 = iVar1;
    } while (iVar1 < iVar2);
  }
  return;
}


