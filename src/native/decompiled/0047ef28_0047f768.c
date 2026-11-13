#include "0047ef28_0047f768.h"



void fn_0047f768(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined4 uStack_10;
  
  fn_00455e10(param_2);
  uStack_18 = 0x10001;
  puStack_14 = &DAT_007dba44;
  uStack_10 = 0x71;
  fn_00455e8c(param_2,2,&uStack_18,1);
  return;
}



void fn_0047f3e8(undefined4 *param_1)

{
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  return;
}



void fn_0047f300(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = &DAT_0085435c;
  *(undefined1 *)(param_1 + 1) = 1;
  iVar1 = fn_0013ce04(param_1 + 2);
  piVar4 = (int *)(iVar1 + 0x68);
  *piVar4 = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  piVar2 = (int *)fn_0015ece0(0xc);
  iVar3 = fn_0015ece0(0xc);
  piVar2[2] = iVar3;
  *piVar2 = *piVar4;
  piVar2[1] = 1;
  *piVar4 = (int)piVar2;
  iVar3 = piVar2[2];
  *(int *)(iVar1 + 0x70) = iVar3;
  *(int *)(iVar1 + 0x74) = iVar3 + 0xc;
  *(int *)(iVar1 + 0x78) = iVar3;
  *(int *)(iVar1 + 0x70) = iVar3 + 0xc;
  *(int *)iVar3 = iVar3;
  *(int *)(*(int *)(iVar1 + 0x78) + 4) = *(int *)(iVar1 + 0x78);
  iVar1 = fn_0013ce04(iVar1 + 0x80);
  iVar1 = fn_00124be8(iVar1 + 0x68);
  *(undefined **)(iVar1 + -0xf0) = &DAT_00853720;
  return;
}



int fn_0047f1c8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &DAT_00853710;
  iVar2 = *(int *)(param_1[5] + 8);
  if (iVar2 != param_1[5]) {
    do {
      if (*(int **)(iVar2 + 0x14) != (int *)0x0) {
        (**(code **)(**(int **)(iVar2 + 0x14) + 4))();
      }
      iVar1 = *(int *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar1 = *(int *)(iVar2 + 4);
        if (iVar2 == *(int *)(iVar1 + 0xc)) {
          do {
            iVar2 = iVar1;
            iVar1 = *(int *)(iVar2 + 4);
          } while (iVar2 == *(int *)(iVar1 + 0xc));
        }
        if (*(int *)(iVar2 + 0xc) != iVar1) {
          iVar2 = iVar1;
        }
      }
      else {
        do {
          iVar2 = iVar1;
          iVar1 = *(int *)(iVar2 + 8);
        } while (*(int *)(iVar2 + 8) != 0);
      }
    } while (iVar2 != param_1[5]);
  }
  iVar2 = *(int *)(param_1[0xc] + 8);
  if (iVar2 != param_1[0xc]) {
    do {
      if (*(int **)(iVar2 + 0x14) != (int *)0x0) {
        (**(code **)(**(int **)(iVar2 + 0x14) + 4))();
      }
      iVar1 = *(int *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar1 = *(int *)(iVar2 + 4);
        if (iVar2 == *(int *)(iVar1 + 0xc)) {
          do {
            iVar2 = iVar1;
            iVar1 = *(int *)(iVar2 + 4);
          } while (iVar2 == *(int *)(iVar1 + 0xc));
        }
        if (*(int *)(iVar2 + 0xc) != iVar1) {
          iVar2 = iVar1;
        }
      }
      else {
        do {
          iVar2 = iVar1;
          iVar1 = *(int *)(iVar2 + 8);
        } while (*(int *)(iVar2 + 8) != 0);
      }
    } while (iVar2 != param_1[0xc]);
  }
  iVar2 = fn_004b4658(param_1 + 8);
  iVar2 = fn_004b4658(iVar2 + -0x1c);
  return iVar2 + -4;
}



void fn_0047f194(undefined4 param_1,undefined2 param_2,int param_3)

{
  *(undefined2 *)(param_3 + 0x20) = param_2;
  fn_0047ef88(param_1,param_3);
  return;
}



undefined4 fn_0047ef88(int param_1,int *param_2)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  char *local_34;
  char *local_30;
  undefined1 local_2c;
  ushort local_28;
  undefined4 local_24;
  
  iVar3 = fn_001249d0();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  iVar3 = (**(code **)(*param_2 + 0x40))(param_2);
  if (iVar3 == 1) {
    param_1 = param_1 + 0x20;
  }
  else {
    param_1 = param_1 + 4;
  }
  uVar1 = *(ushort *)(param_2 + 8);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar3 = iVar5;
  iVar7 = *(int *)(iVar5 + 4);
  while (iVar7 != 0) {
    if (*(ushort *)(iVar7 + 0x10) < uVar1) {
      iVar7 = *(int *)(iVar7 + 0xc);
    }
    else {
      iVar3 = iVar7;
      iVar7 = *(int *)(iVar7 + 8);
    }
  }
  if ((iVar3 == iVar5) || (uVar1 < *(ushort *)(iVar3 + 0x10))) {
    iVar3 = iVar5;
  }
  if (iVar3 != iVar5) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))(param_2);
    }
    goto LAB_0047f048;
  }
  local_24 = 0;
  pcVar8 = *(char **)(param_1 + 0x10);
  bVar9 = true;
  pcVar2 = pcVar8;
  pcVar6 = *(char **)(pcVar8 + 4);
  while (pcVar6 != (char *)0x0) {
    bVar9 = uVar1 < *(ushort *)(pcVar6 + 0x10);
    pcVar2 = pcVar6;
    if (bVar9) {
      pcVar6 = *(char **)(pcVar6 + 8);
    }
    else {
      pcVar6 = *(char **)(pcVar6 + 0xc);
    }
  }
  local_28 = uVar1;
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_30 = pcVar2;
    if (bVar9) {
      if (pcVar2 == *(char **)(pcVar8 + 8)) goto LAB_0047f170;
      if ((*pcVar2 == '\0') && (*(char **)(*(int *)(pcVar2 + 4) + 4) == pcVar2)) {
        local_30 = *(char **)(pcVar2 + 0xc);
      }
      else {
        local_30 = *(char **)(pcVar2 + 8);
        if (local_30 == (char *)0x0) {
          local_30 = *(char **)(pcVar2 + 4);
          pcVar6 = local_30;
          if (pcVar2 == *(char **)(local_30 + 8)) {
            do {
              local_30 = *(char **)(pcVar6 + 4);
              bVar9 = pcVar6 == *(char **)(local_30 + 8);
              pcVar6 = local_30;
            } while (bVar9);
          }
        }
        else {
          for (pcVar2 = *(char **)(local_30 + 0xc); pcVar2 != (char *)0x0;
              pcVar2 = *(char **)(pcVar2 + 0xc)) {
            local_30 = pcVar2;
          }
        }
      }
    }
    if (*(ushort *)(local_30 + 0x10) < uVar1) goto LAB_0047f170;
    local_2c = 0;
  }
  else {
LAB_0047f170:
    fn_0077eb2c(&local_34);
    local_30 = local_34;
    local_2c = 1;
  }
  *(int **)(local_30 + 0x14) = param_2;
LAB_0047f048:
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return 1;
}



undefined4 fn_0047ef28(int param_1,int *param_2)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  bool bVar11;
  char *pcStack_34;
  char *pcStack_30;
  undefined1 uStack_2c;
  ushort uStack_28;
  undefined4 uStack_24;
  
  iVar5 = param_2[8];
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined4 *)(param_1 + 8));
  *(short *)(param_2 + 8) = (short)iVar5;
  iVar3 = fn_0045c8f4();
  iVar3 = *(int *)(iVar3 + 0xc);
  piVar4 = (int *)(**(code **)(*param_2 + 0x54))(param_2);
  *(short *)(piVar4 + 8) = (short)iVar5;
  iVar5 = fn_001249d0();
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0xc);
  }
  piVar6 = (int *)(iVar5 + 0x50);
  (**(code **)(*piVar6 + 8))();
  iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4);
  if (iVar5 == 1) {
    iVar3 = iVar3 + 0x20;
  }
  else {
    iVar3 = iVar3 + 4;
  }
  uVar1 = *(ushort *)(piVar4 + 8);
  iVar7 = *(int *)(iVar3 + 0x10);
  iVar5 = iVar7;
  iVar9 = *(int *)(iVar7 + 4);
  while (iVar9 != 0) {
    if (*(ushort *)(iVar9 + 0x10) < uVar1) {
      iVar9 = *(int *)(iVar9 + 0xc);
    }
    else {
      iVar5 = iVar9;
      iVar9 = *(int *)(iVar9 + 8);
    }
  }
  if ((iVar5 == iVar7) || (uVar1 < *(ushort *)(iVar5 + 0x10))) {
    iVar5 = iVar7;
  }
  if (iVar5 != iVar7) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    goto LAB_0047f048;
  }
  uStack_24 = 0;
  pcVar10 = *(char **)(iVar3 + 0x10);
  bVar11 = true;
  pcVar2 = pcVar10;
  pcVar8 = *(char **)(pcVar10 + 4);
  while (pcVar8 != (char *)0x0) {
    bVar11 = uVar1 < *(ushort *)(pcVar8 + 0x10);
    pcVar2 = pcVar8;
    if (bVar11) {
      pcVar8 = *(char **)(pcVar8 + 8);
    }
    else {
      pcVar8 = *(char **)(pcVar8 + 0xc);
    }
  }
  uStack_28 = uVar1;
  if (*(char *)(iVar3 + 0x18) == '\0') {
    pcStack_30 = pcVar2;
    if (bVar11) {
      if (pcVar2 == *(char **)(pcVar10 + 8)) goto LAB_0047f170;
      if ((*pcVar2 == '\0') && (*(char **)(*(int *)(pcVar2 + 4) + 4) == pcVar2)) {
        pcStack_30 = *(char **)(pcVar2 + 0xc);
      }
      else {
        pcStack_30 = *(char **)(pcVar2 + 8);
        if (pcStack_30 == (char *)0x0) {
          pcStack_30 = *(char **)(pcVar2 + 4);
          pcVar8 = pcStack_30;
          if (pcVar2 == *(char **)(pcStack_30 + 8)) {
            do {
              pcStack_30 = *(char **)(pcVar8 + 4);
              bVar11 = pcVar8 == *(char **)(pcStack_30 + 8);
              pcVar8 = pcStack_30;
            } while (bVar11);
          }
        }
        else {
          for (pcVar2 = *(char **)(pcStack_30 + 0xc); pcVar2 != (char *)0x0;
              pcVar2 = *(char **)(pcVar2 + 0xc)) {
            pcStack_30 = pcVar2;
          }
        }
      }
    }
    if (*(ushort *)(pcStack_30 + 0x10) < uVar1) goto LAB_0047f170;
    uStack_2c = 0;
  }
  else {
LAB_0047f170:
    fn_0077eb2c(&pcStack_34);
    pcStack_30 = pcStack_34;
    uStack_2c = 1;
  }
  *(int **)(pcStack_30 + 0x14) = piVar4;
LAB_0047f048:
  (**(code **)(*piVar6 + 0xc))(piVar6);
  return 1;
}


