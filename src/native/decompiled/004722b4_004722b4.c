#include "004722b4_004722b4.h"



void fn_004722b4(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  int *piVar12;
  bool bVar13;
  bool bVar14;
  int **local_78;
  int iStack_74;
  int *local_70;
  uint local_6c;
  int *piStack_68;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_4c;
  char *local_48 [2];
  char *local_40;
  undefined1 local_3c;
  char *local_38;
  undefined1 local_34;
  int *local_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  int *local_24;
  
  iStack_28 = param_1;
  local_24 = param_2;
  iVar2 = fn_001249d0();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  piVar12 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar12 + 8))(piVar12);
  if (*(char *)(param_1 + 0x3c) != '\0') {
    uVar1 = *(ushort *)(local_24 + 0xf);
    bVar13 = (uVar1 & 0xf) != 0;
    if (bVar13) {
      uVar1 = uVar1 & 0xf;
    }
    if ((!bVar13 || uVar1 == 1) || uVar1 == 3) {
      *(undefined4 *)(local_24[0x46] + 4) = 1;
      iVar2 = local_24[0x46];
      *(undefined4 *)(iVar2 + 0x10) = 1;
      *(undefined4 *)(iVar2 + 0x14) = 0;
    }
  }
  iVar2 = local_24[0x46];
  fn_0013d0fc(&local_78);
  uVar3 = *(uint *)(iVar2 + 4);
  if ((int)uVar3 < 0) {
    iStack_74 = iStack_74 - (((int)-uVar3 >> 0x1f) + (uint)(local_78 < (int **)-uVar3));
  }
  else {
    iStack_74 = iStack_74 + ((int)uVar3 >> 0x1f) + (uint)CARRY4((uint)local_78,uVar3);
  }
  *(uint *)(iVar2 + 8) = (int)local_78 + uVar3;
  *(int *)(iVar2 + 0xc) = iStack_74;
  piVar5 = local_24 + 1;
  do {
    bVar13 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar13);
  *piVar5 = *piVar5 + 1;
  iVar8 = *(int *)(param_1 + 0x14);
  iVar2 = iVar8;
  iVar4 = *(int *)(iVar8 + 4);
  while (iVar4 != 0) {
    if (*(int **)(iVar4 + 0x10) < local_24) {
      iVar4 = *(int *)(iVar4 + 0xc);
    }
    else {
      iVar2 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
  }
  piVar5 = (int *)0x0;
  if ((iVar2 == iVar8) || (piVar5 = *(int **)(iVar2 + 0x10), local_24 < piVar5)) {
    iVar2 = iVar8;
  }
  if ((iVar2 != iVar8) &&
     (piVar5 = (int *)(*(int **)(param_1 + 0x30))[2], piVar5 != *(int **)(param_1 + 0x30))) {
LAB_004723fc:
    if ((int *)piVar5[6] != local_24) goto LAB_00472568;
    local_30 = piVar5;
    fn_00769544(auStack_2c,param_1 + 0x20);
    local_58 = *(char **)(param_1 + 0x14);
    pcVar6 = *(char **)(*(char **)(param_1 + 0x14) + 4);
    while (pcVar6 != (char *)0x0) {
      if (*(int **)(pcVar6 + 0x10) < local_24) {
        pcVar6 = *(char **)(pcVar6 + 0xc);
      }
      else {
        local_58 = pcVar6;
        pcVar6 = *(char **)(pcVar6 + 8);
      }
    }
    local_5c = *(char **)(param_1 + 0x14);
    pcVar6 = *(char **)(*(char **)(param_1 + 0x14) + 4);
    while (pcVar7 = local_58, pcVar6 != (char *)0x0) {
      if (local_24 < *(int **)(pcVar6 + 0x10)) {
        local_5c = pcVar6;
        pcVar6 = *(char **)(pcVar6 + 8);
      }
      else {
        pcVar6 = *(char **)(pcVar6 + 0xc);
      }
    }
    while (pcVar7 != local_5c) {
      pcVar6 = *(char **)(pcVar7 + 0xc);
      if (*(char **)(pcVar7 + 0xc) == (char *)0x0) {
        pcVar6 = *(char **)(pcVar7 + 4);
        if (pcVar7 == *(char **)(pcVar6 + 0xc)) {
          do {
            pcVar7 = pcVar6;
            pcVar6 = *(char **)(pcVar7 + 4);
          } while (pcVar7 == *(char **)(pcVar6 + 0xc));
        }
        if (*(char **)(pcVar7 + 0xc) != pcVar6) {
          pcVar7 = pcVar6;
        }
      }
      else {
        do {
          pcVar7 = pcVar6;
          pcVar6 = *(char **)(pcVar7 + 8);
        } while (*(char **)(pcVar7 + 8) != (char *)0x0);
      }
    }
    local_54 = local_5c;
    local_4c = local_58;
    fn_0076ea8c(local_48,param_1 + 4,&local_4c,&local_5c);
    piVar5 = (int *)&DAT_ffffffff;
    piVar9 = local_24 + 1;
    do {
      iVar2 = *piVar9 + -1;
      bVar13 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar13);
    *piVar9 = iVar2;
    if (iVar2 == 0) {
      piVar5 = (int *)(uint)*(byte *)(local_24 + 2);
    }
    if (iVar2 == 0 && piVar5 == (int *)0x0) {
      *(undefined1 *)(local_24 + 2) = 1;
      piVar5 = (int *)(**(code **)(*local_24 + 4))(local_24);
    }
  }
LAB_004725c4:
  pcVar6 = *(char **)(param_1 + 0x14);
  bVar13 = *(char **)(pcVar6 + 4) != (char *)0x0;
  if (bVar13) {
    piVar5 = local_24;
  }
  bVar14 = true;
  pcVar7 = pcVar6;
  pcVar11 = *(char **)(pcVar6 + 4);
  while (bVar13) {
    bVar14 = piVar5 < *(int **)(pcVar11 + 0x10);
    if (bVar14) {
      pcVar10 = *(char **)(pcVar11 + 8);
    }
    else {
      pcVar10 = *(char **)(pcVar11 + 0xc);
    }
    bVar13 = pcVar10 != (char *)0x0;
    pcVar7 = pcVar11;
    pcVar11 = pcVar10;
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    local_40 = pcVar7;
    if (bVar14) {
      if (pcVar7 == *(char **)(pcVar6 + 8)) goto LAB_004726c0;
      if ((*pcVar7 == '\0') && (*(char **)(*(int *)(pcVar7 + 4) + 4) == pcVar7)) {
        local_40 = *(char **)(pcVar7 + 0xc);
      }
      else {
        local_40 = *(char **)(pcVar7 + 8);
        if (local_40 == (char *)0x0) {
          local_40 = *(char **)(pcVar7 + 4);
          pcVar6 = local_40;
          if (pcVar7 == *(char **)(local_40 + 8)) {
            do {
              local_40 = *(char **)(pcVar6 + 4);
              bVar13 = pcVar6 == *(char **)(local_40 + 8);
              pcVar6 = local_40;
            } while (bVar13);
          }
        }
        else {
          for (pcVar6 = *(char **)(local_40 + 0xc); pcVar6 != (char *)0x0;
              pcVar6 = *(char **)(pcVar6 + 0xc)) {
            local_40 = pcVar6;
          }
        }
      }
    }
    if (*(int **)(local_40 + 0x10) < local_24) goto LAB_004726c0;
    local_3c = 0;
  }
  else {
LAB_004726c0:
    local_78 = &local_24;
    fn_0076f234(local_48);
    local_40 = local_48[0];
    local_3c = 1;
  }
  bVar13 = true;
  local_38 = local_40;
  local_34 = local_3c;
  local_70 = *(int **)(local_24[0x46] + 8);
  local_6c = *(uint *)(local_24[0x46] + 0xc);
  piStack_68 = local_24;
  pcVar11 = *(char **)(param_1 + 0x30);
  pcVar6 = pcVar11;
  pcVar7 = *(char **)(pcVar11 + 4);
  while (pcVar7 != (char *)0x0) {
    bVar13 = local_6c <= *(uint *)(pcVar7 + 0x14) &&
             (uint)(*(int **)(pcVar7 + 0x10) <= local_70) <= local_6c - *(uint *)(pcVar7 + 0x14);
    pcVar6 = pcVar7;
    if (bVar13) {
      pcVar7 = *(char **)(pcVar7 + 8);
    }
    else {
      pcVar7 = *(char **)(pcVar7 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    pcVar7 = pcVar6;
    if (bVar13) {
      if (pcVar6 == *(char **)(pcVar11 + 8)) goto LAB_0047280c;
      if ((*pcVar6 == '\0') && (*(char **)(*(int *)(pcVar6 + 4) + 4) == pcVar6)) {
        pcVar7 = *(char **)(pcVar6 + 0xc);
      }
      else {
        pcVar7 = *(char **)(pcVar6 + 8);
        if (pcVar7 == (char *)0x0) {
          pcVar7 = *(char **)(pcVar6 + 4);
          pcVar11 = pcVar7;
          if (pcVar6 == *(char **)(pcVar7 + 8)) {
            do {
              pcVar7 = *(char **)(pcVar11 + 4);
              bVar13 = pcVar11 == *(char **)(pcVar7 + 8);
              pcVar11 = pcVar7;
            } while (bVar13);
          }
        }
        else {
          for (pcVar6 = *(char **)(pcVar7 + 0xc); pcVar6 != (char *)0x0;
              pcVar6 = *(char **)(pcVar6 + 0xc)) {
            pcVar7 = pcVar6;
          }
        }
      }
    }
    if (local_6c < *(uint *)(pcVar7 + 0x14) ||
        *(uint *)(pcVar7 + 0x14) - local_6c < (uint)(local_70 <= *(int **)(pcVar7 + 0x10))) {
      local_3c = 0;
      local_40 = pcVar7;
      goto LAB_00472824;
    }
  }
LAB_0047280c:
  local_78 = &local_70;
  fn_00769bdc(&local_4c);
  local_40 = local_4c;
  local_3c = 1;
LAB_00472824:
  (**(code **)(*piVar12 + 0xc))(piVar12);
  return;
LAB_00472568:
  piVar9 = (int *)piVar5[3];
  if ((int *)piVar5[3] == (int *)0x0) {
    piVar9 = (int *)piVar5[1];
    if (piVar5 == (int *)piVar9[3]) {
      do {
        piVar5 = piVar9;
        piVar9 = (int *)piVar5[1];
      } while (piVar5 == (int *)piVar9[3]);
    }
    if ((int *)piVar5[3] != piVar9) {
      piVar5 = piVar9;
    }
  }
  else {
    do {
      piVar5 = piVar9;
      piVar9 = (int *)piVar5[2];
    } while ((int *)piVar5[2] != (int *)0x0);
  }
  if (piVar5 == *(int **)(param_1 + 0x30)) goto LAB_004725c4;
  goto LAB_004723fc;
}


