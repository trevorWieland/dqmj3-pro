#include "00467160_00467564.h"



void fn_00467564(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  undefined *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int *local_70;
  undefined *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  uint uStack_44;
  int local_38;
  int iStack_34;
  int *piStack_2c;
  undefined4 local_28;
  
  if (*(char *)(param_1[0x3c] + 4) != '\0') {
    iVar6 = 0;
    piStack_2c = param_1;
    local_28 = param_2;
    while ((iVar2 = (**(code **)(*param_1 + 0x18))(param_1), iVar2 != 0 && (iVar6 == 0))) {
      iVar6 = fn_0015ece0(0x20);
      if (iVar6 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)fn_004b5488(iVar6,local_28);
      }
      local_90 = &DAT_008528bc;
      local_88 = 0;
      local_8c = 0x200;
      iVar6 = (**(code **)(*param_1 + 0x20))(param_1,piVar7,&local_90);
      if (iVar6 == 0) {
        local_6c = &DAT_008528bc;
        piVar3 = piVar7 + 1;
        do {
          bVar8 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar8);
        *piVar3 = *piVar3 + 1;
        local_68 = local_8c;
        local_64 = local_88;
        uStack_60 = uStack_84;
        uStack_5c = uStack_80;
        uStack_58 = uStack_7c;
        uStack_54 = uStack_78;
        uStack_50 = uStack_74;
        local_70 = piVar7;
        fn_0013d0fc(&local_48);
        if ((uint)param_1[0x33] <= uStack_44 &&
            (uint)(local_48 <= (uint)param_1[0x32]) <= param_1[0x33] - uStack_44) {
          param_1[0x32] = local_48;
          param_1[0x33] = uStack_44;
        }
        local_38 = param_1[0x32];
        iStack_34 = param_1[0x33];
        fn_0074a6d0(param_1 + 0x2a,&local_70,&local_38);
        if (*(int *)(param_1[0x31] + 0xc) != -1) {
          uVar1 = fn_00169f1c(local_70[4] * 8000);
          uVar4 = param_1[0x32];
          param_1[0x32] = uVar4 + uVar1;
          param_1[0x33] = param_1[0x33] + (uint)CARRY4(uVar4,uVar1);
        }
        puVar5 = (uint *)(local_70 + 1);
        do {
          uVar1 = *puVar5 - 1;
          bVar8 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar8);
        *puVar5 = uVar1;
        bVar8 = uVar1 == 0;
        if (bVar8) {
          uVar1 = (uint)*(byte *)(local_70 + 2);
        }
        if (bVar8 && uVar1 == 0) {
          *(undefined1 *)(local_70 + 2) = 1;
          (**(code **)(*local_70 + 4))(local_70);
        }
      }
      puVar5 = (uint *)(piVar7 + 1);
      do {
        uVar1 = *puVar5 - 1;
        bVar8 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar8);
      *puVar5 = uVar1;
      bVar8 = uVar1 == 0;
      if (bVar8) {
        uVar1 = (uint)*(byte *)(piVar7 + 2);
      }
      if (bVar8 && uVar1 == 0) {
        *(undefined1 *)(piVar7 + 2) = 1;
        (**(code **)(*piVar7 + 4))(piVar7);
      }
    }
  }
  return;
}



int * fn_00467160(int param_1,undefined4 param_2,int param_3,int param_4,undefined1 *param_5)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_50;
  uint local_4c;
  undefined *local_48;
  undefined1 local_44;
  int local_40;
  undefined4 local_3c;
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  if (*(char *)(param_1 + 0x11c) != '\0') {
    iVar2 = fn_00455040(0x118,0);
    if (iVar2 != 0) {
      uVar8 = *(undefined4 *)(param_4 + 0x10);
      piVar3 = (int *)fn_004b579c();
      *piVar3 = (int)&DAT_00853d08;
      iVar2 = fn_00455040(0x20,0);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = fn_0045b64c(iVar2,uVar8);
      }
      piVar4 = (int *)piVar3[0x36];
      if (piVar4 != (int *)0x0) {
        puVar7 = (uint *)(piVar4 + 1);
        do {
          uVar6 = *puVar7 - 1;
          bVar9 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar9);
        *puVar7 = uVar6;
        bVar9 = uVar6 == 0;
        if (bVar9) {
          uVar6 = (uint)*(byte *)(piVar4 + 2);
        }
        if (bVar9 && uVar6 == 0) {
          *(undefined1 *)(piVar4 + 2) = 1;
          piVar4 = (int *)(**(code **)(*piVar4 + 4))();
        }
      }
      piVar3[0x36] = iVar2;
      if (iVar2 != 0) {
        piVar4 = *(int **)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && piVar4 != (int *)0x0) goto LAB_004672d8;
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *param_5 = 1;
    return (int *)0x0;
  }
  iVar2 = fn_0015ece0(0x118);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_004b579c();
    *piVar3 = (int)&DAT_00855cc4;
    iVar2 = fn_0015ece0(0x20);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_004b54dc();
    }
    piVar4 = (int *)piVar3[0x36];
    if (piVar4 != (int *)0x0) {
      puVar7 = (uint *)(piVar4 + 1);
      do {
        uVar6 = *puVar7 - 1;
        bVar9 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar9);
      *puVar7 = uVar6;
      bVar9 = uVar6 == 0;
      if (bVar9) {
        uVar6 = (uint)*(byte *)(piVar4 + 2);
      }
      if (bVar9 && uVar6 == 0) {
        *(undefined1 *)(piVar4 + 2) = 1;
        (**(code **)(*piVar4 + 4))();
      }
    }
    piVar3[0x36] = iVar2;
  }
LAB_004672d8:
  iVar2 = *(int *)(param_3 + 8);
  iVar10 = *(int *)(param_3 + 0xc);
  iVar11 = *(int *)(param_3 + 0x10);
  iVar12 = *(int *)(param_3 + 0x14);
  iVar13 = *(int *)(param_3 + 0x18);
  iVar14 = *(int *)(param_3 + 0x1c);
  piVar4 = (int *)(param_4 + 4);
  piVar3[0x38] = *(int *)(param_3 + 4);
  piVar3[0x39] = iVar2;
  piVar3[0x3a] = iVar10;
  piVar3[0x3b] = iVar11;
  piVar3[0x3c] = iVar12;
  piVar3[0x3d] = iVar13;
  piVar3[0x3e] = iVar14;
  local_48 = &DAT_00852740;
  do {
    bVar9 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar9);
  *piVar4 = *piVar4 + 1;
  local_44 = 0;
  local_3c = 0;
  local_40 = param_4;
  if (DAT_008b6393 != '\0') {
    iVar10 = 0;
    iVar2 = fn_004b7748();
    piVar4 = (int *)(iVar2 + 0x104);
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x104) + 0x1c))(piVar4,&local_48,piVar3,&local_50);
    if (iVar2 != 0) {
      while( true ) {
        uVar1 = *(ushort *)(piVar3 + 0xf);
        uVar6 = uVar1 & 0xf;
        bVar9 = uVar6 != 2;
        if (!bVar9) {
          uVar6 = (uint)*(byte *)((int)piVar3 + 0x25);
        }
        if ((((bVar9 || uVar6 >> 4 != 1) || (DAT_008b6395 == '\0' && (uVar1 & 0x30) == 0)) ||
            (((DAT_008b6394 == '\0' || ((uVar1 & 0x10) != 0)) && ((uVar1 & 0x30) != 0)))) ||
           (DAT_008b6396 == '\0' && (uVar1 & 0x800) == 0)) break;
        local_4c = (uint)*(byte *)((int)piVar3 + 0x26);
        piVar5 = (int *)fn_00495d00(local_30,&local_4c);
        if ((piVar5 == (int *)0x0) ||
           (iVar2 = (**(code **)(*piVar5 + 0x10))(piVar5,piVar3), iVar2 == 0)) break;
        iVar10 = iVar10 + local_50;
        iVar2 = (**(code **)(*piVar4 + 0x1c))(piVar4,&local_48,piVar3,&local_50);
        if (iVar2 == 0) break;
      }
      if (iVar10 != 0) {
        iVar2 = *(int *)(param_4 + 0x10) - iVar10;
        if (iVar2 == 0) {
          *(undefined4 *)(param_4 + 0x10) = 0;
          puVar7 = (uint *)(piVar3 + 1);
          *(undefined4 *)(param_4 + 0x18) = 0;
          do {
            uVar6 = *puVar7 - 1;
            bVar9 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar9);
          *puVar7 = uVar6;
          bVar9 = uVar6 == 0;
          if (bVar9) {
            uVar6 = (uint)*(byte *)(piVar3 + 2);
          }
          if (bVar9 && uVar6 == 0) {
            *(undefined1 *)(piVar3 + 2) = 1;
            (**(code **)(*piVar3 + 4))();
          }
          fn_00454d0c(&local_48);
          return (int *)0x0;
        }
        fn_0015ef58(param_4,*(int *)(param_4 + 0xc) + *(int *)(param_4 + 0x18) + iVar10,iVar2,0);
        *(int *)(param_4 + 0x10) = iVar2;
      }
    }
  }
  local_3c = 0;
  iVar2 = (**(code **)(**(int **)(param_1 + 0xfc) + 0x18))
                    (*(int **)(param_1 + 0xfc),&local_48,piVar3,&local_50);
  if (iVar2 == 0) {
    puVar7 = (uint *)(piVar3 + 1);
    do {
      uVar6 = *puVar7 - 1;
      bVar9 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar9);
    *puVar7 = uVar6;
    bVar9 = uVar6 == 0;
    if (bVar9) {
      uVar6 = (uint)*(byte *)(piVar3 + 2);
    }
    if (bVar9 && uVar6 == 0) {
      *(undefined1 *)(piVar3 + 2) = 1;
      (**(code **)(*piVar3 + 4))();
    }
    piVar3 = (int *)0x0;
  }
  else {
    iVar2 = *(int *)(param_4 + 0x18);
    local_50 = local_50 + iVar2;
    *(int *)(param_4 + 0x18) = local_50;
    *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + (iVar2 - local_50);
  }
  fn_00454d0c(&local_48);
  return piVar3;
}


