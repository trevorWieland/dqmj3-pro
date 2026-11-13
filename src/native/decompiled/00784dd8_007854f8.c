#include "00784dd8_007854f8.h"



int * fn_007854f8(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  piVar2 = (int *)(iVar1 + -0xc);
  if (*piVar2 == -1) {
    if (param_1 != param_2) {
      fn_00177c88(param_1,0,*(undefined4 *)(*param_1 + -4),iVar1,*(undefined4 *)(iVar1 + -4),0,
                   *(undefined4 *)(iVar1 + -4));
    }
  }
  else {
    if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = *piVar2 + 1;
    }
    if ((undefined4 *)*param_1 != &DAT_008f9cf4) {
      piVar2 = (undefined4 *)*param_1 + -3;
      iVar1 = *piVar2;
      if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 8,0);
      }
    }
    *param_1 = *param_2;
  }
  return param_1;
}



int * fn_00785420(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = *param_2;
  puVar5 = &DAT_008f9ce8;
  if (*(int *)(iVar1 + -0xc) == -1) {
    uVar4 = *(uint *)(iVar1 + -4);
    if (0xfffffff1 < uVar4) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,0xfffffff1);
    }
    if (uVar4 != 0) {
      puVar5 = (undefined4 *)fn_00100fc6((uVar4 + 8) * 2,0);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      puVar5[1] = uVar4;
      puVar3 = (undefined2 *)((int)puVar5 + uVar4 * 2 + 0xc);
      *puVar5 = 0;
      puVar5[2] = uVar4;
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    *param_1 = (int)(puVar5 + 3);
    fn_00301a9c(puVar5 + 3,*param_2,uVar4 << 1);
  }
  else {
    *param_1 = iVar1;
    piVar2 = (int *)(iVar1 + -0xc);
    if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = *piVar2 + 1;
    }
  }
  return param_1;
}



int fn_00785320(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(uint *)(*param_1 + -4) <= param_2) {
    fn_002ff628(9,&DAT_008c760e,&DAT_008c760e,param_2,*(uint *)(*param_1 + -4));
  }
  if (1 < *(int *)(*param_1 + -0xc) + 1U) {
    uVar3 = *(undefined4 *)(*param_1 + -4);
    iVar1 = fn_00168984(param_1,uVar3,uVar3);
    fn_00301a9c(iVar1 + 0xc,*param_1,*(int *)(*param_1 + -4) << 1);
    if ((undefined4 *)*param_1 != &DAT_008f9cf4) {
      piVar2 = (undefined4 *)*param_1 + -3;
      iVar4 = *piVar2;
      if ((iVar4 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar4 + -1, iVar4 == 0)))) {
        fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 8,0);
      }
    }
    *param_1 = iVar1 + 0xc;
  }
  if ((undefined4 *)(*param_1 + -0xc) != &DAT_008f9ce8) {
    *(undefined4 *)(*param_1 + -0xc) = 0xffffffff;
  }
  return *param_1 + param_2 * 2;
}



void fn_007852d4(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  iVar3 = param_2[1];
  iVar5 = param_2[2];
  piVar6 = (int *)param_2[3];
  uVar4 = param_3 + (*param_2 - iVar3 >> 2);
  if ((int)uVar4 < 0) {
    uVar1 = -(0x1f - uVar4 >> 5);
  }
  else {
    uVar1 = uVar4 >> 5;
  }
  if (uVar1 == 0) {
    iVar2 = *param_2 + param_3 * 4;
  }
  else {
    piVar6 = piVar6 + uVar1;
    iVar3 = *piVar6;
    iVar5 = iVar3 + 0x80;
    iVar2 = iVar3 + (uVar4 + uVar1 * -0x20) * 4;
  }
  *param_1 = iVar2;
  param_1[1] = iVar3;
  param_1[2] = iVar5;
  param_1[3] = (int)piVar6;
  return;
}



undefined4 fn_00785054(undefined4 param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char local_38 [4];
  char *local_34;
  char *local_30;
  char *local_2c;
  undefined *local_28;
  short local_24;
  char local_22;
  char local_21;
  undefined1 local_20;
  undefined4 local_1c [2];
  
  uVar2 = 0;
  if (*(char *)(param_2 + 8) == '\0') {
    bVar1 = true;
    iVar6 = 0;
    local_28 = &DAT_008595d8;
    local_24 = *(short *)(param_2 + 4);
    local_38[0] = *(char *)(param_2 + 6);
    local_21 = *(char *)(param_2 + 7);
    pcVar5 = (char *)(int)local_21;
    local_20 = *(undefined1 *)(param_2 + 8);
    local_30 = (char *)0x0;
    local_34 = (char *)0x0;
    local_2c = (char *)0x0;
    local_22 = local_38[0];
    local_1c[0] = param_3;
    if ((int)local_38[0] < (int)pcVar5) {
      do {
        iVar3 = fn_006f0a88(&local_28,(int)local_38[0]);
        if ((iVar3 != 0) && (iVar3 = fn_006f14ec(param_1,(int)local_38[0]), iVar3 != 0)) {
          pcVar5 = (char *)(int)local_38[0];
          iVar3 = fn_006507bc(local_1c,iVar3);
          if ((bVar1) || (iVar6 < iVar3)) {
            bVar1 = false;
            if (local_34 != local_30) {
              pcVar5 = local_34;
              if (local_30 < local_34) {
                do {
                  pcVar5 = pcVar5 + 1;
                } while (pcVar5 != local_30);
              }
              local_30 = local_34;
            }
            iVar6 = iVar3;
            pcVar7 = local_30;
            if (local_30 != local_2c) goto joined_r0x0078517c;
LAB_007851bc:
            pcVar5 = local_38;
            fn_0079aa0c(&local_34);
          }
          else if (iVar3 == iVar6) {
            pcVar7 = local_30;
            if (local_30 == local_2c) goto LAB_007851bc;
joined_r0x0078517c:
            local_30 = pcVar7 + 1;
            pcVar5 = local_2c;
            if (pcVar7 != (char *)0x0) {
              *pcVar7 = local_38[0];
            }
          }
        }
        local_38[0] = local_38[0] + '\x01';
      } while (local_38[0] < local_21);
    }
    pcVar7 = (char *)(int)local_22;
    if ((int)pcVar7 < (int)local_21) {
      do {
        pcVar4 = local_34;
        while( true ) {
          if (pcVar4 != local_30) {
            pcVar5 = (char *)(int)*pcVar4;
          }
          if (pcVar4 == local_30 || pcVar5 == pcVar7) break;
          pcVar4 = pcVar4 + 1;
        }
        if (pcVar4 == local_30) {
          fn_0063b148(&local_28,pcVar7);
        }
        pcVar7 = (char *)(int)(char)((char)pcVar7 + '\x01');
      } while ((int)pcVar7 < (int)local_21);
    }
    if ((*(char *)(param_2 + 8) == '\0') && (local_24 != 0)) {
      *(short *)(param_2 + 4) = local_24;
      uVar2 = 1;
      *(char *)(param_2 + 6) = local_22;
      *(char *)(param_2 + 7) = local_21;
      *(undefined1 *)(param_2 + 8) = local_20;
    }
    else {
      uVar2 = 0;
    }
    pcVar5 = local_34;
    if (local_30 < local_34) {
      do {
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 != local_30);
    }
    fn_001008c4(local_34,(int)local_2c - (int)local_34,0);
  }
  return uVar2;
}



undefined4 fn_00784dd8(undefined4 param_1,int param_2)

{
  int iVar1;
  char **ppcVar2;
  uint *puVar3;
  undefined1 uVar4;
  ushort uVar5;
  bool bVar6;
  uint3 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char **ppcVar12;
  uint uVar13;
  int iVar14;
  char **ppcVar15;
  char local_60 [8];
  char *local_58;
  char *local_54;
  char *local_50;
  undefined4 local_40;
  
  uVar8 = 0;
  if (*(char *)(param_2 + 8) == '\0') {
    puVar3 = (uint *)(param_2 + 4);
    uVar5 = *(ushort *)puVar3;
    local_60[0] = *(char *)(param_2 + 6);
    uVar7 = *(uint3 *)puVar3;
    uVar4 = *(undefined1 *)(param_2 + 8);
    uVar13 = *puVar3;
    bVar6 = true;
    iVar14 = 0;
    local_58 = (char *)0x0;
    local_54 = (char *)0x0;
    local_50 = (char *)0x0;
    iVar1 = (int)uVar13 >> 0x18;
    local_40 = param_1;
    if (local_60[0] < *(char *)(param_2 + 7)) {
      do {
        if ((((uint)uVar5 & 1 << ((int)local_60[0] - ((int)((uint)uVar7 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar9 = fn_006f14ec(local_40), iVar9 != 0)) {
          iVar10 = fn_006f4520();
          iVar9 = fn_006f4044(iVar9);
          iVar10 = iVar10 + iVar9 * 2;
          if ((bVar6) || (iVar14 < iVar10)) {
            bVar6 = false;
            if (local_58 != local_54) {
              pcVar11 = local_58;
              if (local_54 < local_58) {
                do {
                  pcVar11 = pcVar11 + 1;
                } while (pcVar11 != local_54);
              }
              local_54 = local_58;
            }
            iVar14 = iVar10;
            pcVar11 = local_54;
            if (local_54 != local_50) goto joined_r0x00784f14;
LAB_00784f54:
            fn_0079aa0c(&local_58,local_54,local_60);
          }
          else if (iVar10 == iVar14) {
            pcVar11 = local_54;
            if (local_54 == local_50) goto LAB_00784f54;
joined_r0x00784f14:
            local_54 = pcVar11 + 1;
            if (pcVar11 != (char *)0x0) {
              *pcVar11 = local_60[0];
            }
          }
        }
        local_60[0] = local_60[0] + '\x01';
      } while (local_60[0] < iVar1);
    }
    ppcVar2 = (char **)((int)((uint)uVar7 << 8) >> 0x18);
    for (ppcVar12 = ppcVar2; (int)ppcVar12 < iVar1;
        ppcVar12 = (char **)(int)(char)((char)ppcVar12 + '\x01')) {
      ppcVar15 = &local_58;
      pcVar11 = local_58;
      while( true ) {
        if (pcVar11 != local_54) {
          ppcVar15 = (char **)(int)*pcVar11;
        }
        if (pcVar11 == local_54 || ppcVar15 == ppcVar12) break;
        pcVar11 = pcVar11 + 1;
      }
      if (pcVar11 == local_54) {
        uVar13 = uVar13 & 0xffff0000 |
                 uVar13 & 0xffff & ~(1 << ((int)ppcVar12 - (int)ppcVar2 & 0xffU));
      }
    }
    if ((*(char *)(param_2 + 8) == '\0') && ((uVar13 & 0xffff) != 0)) {
      *(short *)(param_2 + 4) = (short)uVar13;
      *(char *)(param_2 + 6) = (char)(uVar13 >> 0x10);
      *(char *)(param_2 + 7) = (char)(uVar13 >> 0x18);
      uVar8 = 1;
      *(undefined1 *)(param_2 + 8) = uVar4;
    }
    else {
      uVar8 = 0;
    }
    pcVar11 = local_58;
    if (local_54 < local_58) {
      do {
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 != local_54);
    }
    fn_001008c4(local_58,(int)local_50 - (int)local_58,0);
  }
  return uVar8;
}


