#include "0046b5e0_0046ba34.h"



undefined4 fn_0046ba34(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  bool bVar10;
  char *local_3c;
  char *local_38;
  undefined1 local_34;
  undefined *local_30;
  short local_2c;
  undefined4 local_28;
  
  iVar2 = fn_001249d0();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar7 = *(int *)(param_1 + 0x14);
  iVar2 = iVar7;
  if (*(int *)(iVar7 + 4) != 0) {
    iVar4 = *(int *)(iVar7 + 4);
    do {
      if ((short)(*(short *)(param_1 + 0x28) - *(short *)(iVar4 + 0x14)) < 1) {
        iVar5 = *(int *)(iVar4 + 8);
        iVar2 = iVar4;
      }
      else {
        iVar5 = *(int *)(iVar4 + 0xc);
      }
      iVar4 = iVar5;
    } while (iVar5 != 0);
  }
  if ((iVar2 == iVar7) || (0 < (short)(*(short *)(iVar2 + 0x14) - *(short *)(param_1 + 0x28)))) {
    iVar2 = iVar7;
  }
  if ((iVar2 != iVar7) || (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x18) < 1)) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  piVar8 = (int *)(param_2 + 4);
  do {
    bVar10 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar10);
  *piVar8 = *piVar8 + 1;
  if ((*(ushort *)(param_2 + 0x3c) & 0xf) == 2) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  local_30 = &DAT_00853688;
  local_2c = *(short *)(param_1 + 0x28);
  local_28 = 0;
  pcVar9 = *(char **)(param_1 + 0x14);
  bVar10 = true;
  pcVar1 = pcVar9;
  pcVar6 = *(char **)(pcVar9 + 4);
  while (pcVar6 != (char *)0x0) {
    bVar10 = 0 < (short)(*(short *)(pcVar6 + 0x14) - local_2c);
    pcVar1 = pcVar6;
    if (bVar10) {
      pcVar6 = *(char **)(pcVar6 + 8);
    }
    else {
      pcVar6 = *(char **)(pcVar6 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    local_38 = pcVar1;
    if (bVar10) {
      if (pcVar1 == *(char **)(pcVar9 + 8)) goto LAB_0046bc64;
      if ((*pcVar1 == '\0') && (*(char **)(*(int *)(pcVar1 + 4) + 4) == pcVar1)) {
        local_38 = *(char **)(pcVar1 + 0xc);
      }
      else {
        local_38 = *(char **)(pcVar1 + 8);
        if (local_38 == (char *)0x0) {
          local_38 = *(char **)(pcVar1 + 4);
          pcVar6 = local_38;
          if (pcVar1 == *(char **)(local_38 + 8)) {
            do {
              local_38 = *(char **)(pcVar6 + 4);
              bVar10 = pcVar6 == *(char **)(local_38 + 8);
              pcVar6 = local_38;
            } while (bVar10);
          }
        }
        else {
          for (pcVar1 = *(char **)(local_38 + 0xc); pcVar1 != (char *)0x0;
              pcVar1 = *(char **)(pcVar1 + 0xc)) {
            local_38 = pcVar1;
          }
        }
      }
    }
    if ((short)(local_2c - *(short *)(local_38 + 0x14)) < 1) {
      local_34 = 0;
      goto LAB_0046bc7c;
    }
  }
LAB_0046bc64:
  fn_00768624(&local_3c);
  local_38 = local_3c;
  local_34 = 1;
LAB_0046bc7c:
  *(int *)(local_38 + 0x18) = param_2;
  *(undefined2 *)(param_2 + 0x44) = *(undefined2 *)(param_1 + 0x28);
  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



undefined4 fn_0046b964(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar2 = fn_001249d0();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  sVar1 = *(short *)(param_1 + 0x30);
  uVar6 = 0;
  if ((int)(short)(sVar1 - *(short *)(param_1 + 0x38)) < (int)(uint)*(ushort *)(param_1 + 0x20)) {
    iVar5 = *(int *)(param_1 + 0x14);
    iVar3 = iVar5;
    iVar2 = *(int *)(iVar5 + 4);
    while (iVar2 != 0) {
      if ((short)(sVar1 - *(short *)(iVar2 + 0x14)) < 1) {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar2 + 8);
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc);
      }
    }
    if ((iVar3 == iVar5) || (0 < (short)(*(short *)(iVar3 + 0x14) - sVar1))) {
      iVar3 = iVar5;
    }
    if (iVar3 != iVar5) {
      *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
      uVar6 = *(undefined4 *)(iVar3 + 0x18);
    }
  }
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return uVar6;
}



void fn_0046b5e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  undefined1 auStack_2c [8];
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = iVar1;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar5 = *(int *)(iVar1 + 4);
    do {
      if ((short)(*(short *)(param_2 + 4) - *(short *)(iVar5 + 0x14)) < 1) {
        iVar4 = *(int *)(iVar5 + 8);
        iVar2 = iVar5;
      }
      else {
        iVar4 = *(int *)(iVar5 + 0xc);
      }
      iVar5 = iVar4;
    } while (iVar4 != 0);
  }
  if ((iVar2 == iVar1) || (0 < (short)(*(short *)(iVar2 + 0x14) - *(short *)(param_2 + 4)))) {
    iVar2 = iVar1;
  }
  if (iVar2 != iVar1) {
    piVar9 = *(int **)(iVar2 + 0x18);
    local_38 = piVar9[0x52];
    if (local_38 != 0) {
      iVar4 = *(int *)(param_3 + 0x10);
      iVar1 = iVar4;
      iVar5 = *(int *)(iVar4 + 4);
      while (iVar5 != 0) {
        if (*(uint *)(iVar5 + 0x10) < local_38) {
          iVar5 = *(int *)(iVar5 + 0xc);
        }
        else {
          iVar1 = iVar5;
          iVar5 = *(int *)(iVar5 + 8);
        }
      }
      if ((iVar1 == iVar4) || (local_38 < *(uint *)(iVar1 + 0x10))) {
        iVar1 = iVar4;
      }
      if ((iVar1 != iVar4) &&
         (iVar5 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar5, iVar5 == 0)) {
        iVar1 = fn_004b7748();
        piVar10 = (int *)(iVar1 + 0x388);
        (**(code **)(*(int *)(iVar1 + 0x388) + 8))(piVar10);
        iVar1 = fn_004b7748();
        puVar8 = *(uint **)(iVar1 + 0x380);
        if (puVar8 == *(uint **)(iVar1 + 900)) {
          fn_0079d8f8(iVar1 + 0x37c,puVar8,&local_38);
        }
        else {
          *(uint **)(iVar1 + 0x380) = puVar8 + 1;
          if (puVar8 != (uint *)0x0) {
            *puVar8 = local_38;
          }
        }
        local_40 = *(int *)(param_3 + 0x10);
        iVar1 = *(int *)(*(int *)(param_3 + 0x10) + 4);
        while (iVar1 != 0) {
          if (*(uint *)(iVar1 + 0x10) < local_38) {
            iVar1 = *(int *)(iVar1 + 0xc);
          }
          else {
            local_40 = iVar1;
            iVar1 = *(int *)(iVar1 + 8);
          }
        }
        local_3c = *(int *)(param_3 + 0x10);
        iVar1 = *(int *)(*(int *)(param_3 + 0x10) + 4);
        while (iVar5 = local_40, iVar1 != 0) {
          if (local_38 < *(uint *)(iVar1 + 0x10)) {
            local_3c = iVar1;
            iVar1 = *(int *)(iVar1 + 8);
          }
          else {
            iVar1 = *(int *)(iVar1 + 0xc);
          }
        }
        while (iVar5 != local_3c) {
          iVar1 = *(int *)(iVar5 + 0xc);
          if (*(int *)(iVar5 + 0xc) == 0) {
            iVar1 = *(int *)(iVar5 + 4);
            if (iVar5 == *(int *)(iVar1 + 0xc)) {
              do {
                iVar5 = iVar1;
                iVar1 = *(int *)(iVar5 + 4);
              } while (iVar5 == *(int *)(iVar1 + 0xc));
            }
            if (*(int *)(iVar5 + 0xc) != iVar1) {
              iVar5 = iVar1;
            }
          }
          else {
            do {
              iVar5 = iVar1;
              iVar1 = *(int *)(iVar5 + 8);
            } while (*(int *)(iVar5 + 8) != 0);
          }
        }
        local_34 = local_3c;
        local_30 = local_40;
        fn_0077ba40(auStack_2c,param_3,&local_30,&local_34);
        (**(code **)(*piVar10 + 0xc))(piVar10);
      }
    }
    *(undefined1 *)((int)piVar9 + 0x131) = 1;
    iVar1 = *(int *)(iVar2 + 0xc);
    if (*(int *)(iVar2 + 0xc) == 0) {
      iVar1 = *(int *)(iVar2 + 4);
      iVar5 = iVar2;
      if (iVar2 == *(int *)(iVar1 + 0xc)) {
        do {
          iVar5 = iVar1;
          iVar1 = *(int *)(iVar5 + 4);
        } while (iVar5 == *(int *)(iVar1 + 0xc));
      }
      if (*(int *)(iVar5 + 0xc) != iVar1) {
        iVar5 = iVar1;
      }
    }
    else {
      do {
        iVar5 = iVar1;
        iVar1 = *(int *)(iVar5 + 8);
      } while (*(int *)(iVar5 + 8) != 0);
    }
    local_40 = iVar2;
    fn_00767f88(&local_3c,param_1 + 4,&local_40);
    if (*(short *)(param_2 + 4) == *(short *)(param_1 + 0x38)) {
      if (iVar5 == *(int *)(param_1 + 0x14)) {
        uVar7 = *(undefined2 *)(param_1 + 0x28);
      }
      else {
        uVar7 = *(undefined2 *)(iVar5 + 0x14);
      }
      *(undefined2 *)(param_1 + 0x38) = uVar7;
    }
    if ((*(ushort *)(piVar9 + 0xf) & 0xf) == 2) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    }
    puVar8 = (uint *)(piVar9 + 1);
    do {
      uVar6 = *puVar8 - 1;
      bVar11 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar11);
    *puVar8 = uVar6;
    bVar11 = uVar6 == 0;
    if (bVar11) {
      uVar6 = (uint)*(byte *)(piVar9 + 2);
    }
    if (bVar11 && uVar6 == 0) {
      *(undefined1 *)(piVar9 + 2) = 1;
      (**(code **)(*piVar9 + 4))(piVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0046b960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}


