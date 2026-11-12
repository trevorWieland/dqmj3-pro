#include "004783ec_00479644.h"



void fn_00479644(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  uint extraout_r1;
  uint extraout_r1_00;
  uint *puVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  int local_28;
  int local_24 [2];
  
  *param_1 = (int)&PTR_FUN_008534b4;
  *(undefined1 *)(param_1 + 0x54) = 1;
  piVar1 = (int *)0x0;
  if (DAT_008b6387 != '\0') {
    piVar1 = (int *)param_1[0x4e];
  }
  if (DAT_008b6387 != '\0' && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
    if ((int *)param_1[0x4e] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x4e] + 4))();
    }
    param_1[0x4e] = 0;
  }
  if (param_1[0x4f] != 0) {
    iVar2 = fn_001249d0();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0xc);
    }
    if (iVar2 != 0 && iVar3 != 0) {
      iVar3 = fn_001249d0();
      uVar4 = 0;
      if (iVar3 != 0) {
        uVar4 = *(undefined4 *)(iVar3 + 0xc);
      }
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      fn_004bd8d0(uVar4,param_1[0x4f]);
      piVar1 = (int *)param_1[0x4f];
      puVar9 = (uint *)(piVar1 + 1);
      do {
        uVar7 = *puVar9 - 1;
        bVar11 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar11);
      *puVar9 = uVar7;
      bVar11 = uVar7 == 0;
      if (bVar11) {
        uVar7 = (uint)*(byte *)(piVar1 + 2);
      }
      if (bVar11 && uVar7 == 0) {
        *(undefined1 *)(piVar1 + 2) = 1;
        (**(code **)(*piVar1 + 4))();
      }
      param_1[0x4f] = 0;
    }
  }
  if (param_1[0x2b] != 0) {
    iVar3 = fn_001249d0();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    piVar1 = (int *)(iVar3 + 0x50);
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2b] = 0;
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  iVar3 = fn_001249d0();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  piVar1 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar1 + 8))();
  do {
    if ((undefined2 *)param_1[0x51] == (undefined2 *)param_1[0x52]) {
      pcVar8 = *(code **)(*piVar1 + 0xc);
      goto LAB_004797a4;
    }
    iVar3 = (**(code **)(*param_1 + 0x14))(param_1,*(undefined2 *)param_1[0x51]);
  } while (iVar3 != 0);
  pcVar8 = *(code **)(*piVar1 + 0xc);
LAB_004797a4:
  (*pcVar8)(piVar1);
  if (param_1[0x94] != 0) {
    iVar3 = fn_0047a798();
    if (iVar3 != 0) {
      if (*(code **)(iVar3 + -8) == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (**(code **)(iVar3 + -8))();
      }
    }
    param_1[0x94] = 0;
  }
  (**(code **)(*(int *)param_1[0x5d] + 8))();
  if ((int *)param_1[0x5d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5d] + 4))();
  }
  iVar3 = param_1[0x5f];
  while (iVar3 != param_1[0x61]) {
    local_24[0] = iVar3;
    fn_004a34f4(&local_28,param_1 + 0x5e,local_24);
    iVar3 = local_28;
  }
  fn_00459c64(param_1 + 0x57);
  fn_00170704(&DAT_008e7794);
  piVar5 = (int *)fn_001249d0();
  piVar1 = piVar5 + 1;
  do {
    iVar3 = *piVar1 + -1;
    bVar11 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar11);
  *piVar1 = iVar3;
  if (iVar3 == 0) {
    piVar1 = (int *)(uint)*(byte *)(piVar5 + 2);
  }
  if (iVar3 == 0 && piVar1 == (int *)0x0) {
    *(undefined1 *)(piVar5 + 2) = 1;
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  if (DAT_008b63e8 == 0) {
    DAT_008b637c = 0;
  }
  fn_004747a4();
  fn_001707b4(&DAT_008e7794);
  param_1[0x85] = (int)&DAT_00855a08;
  if (*(char *)((int)param_1 + 0x21d) != '\0') {
    iVar3 = *(int *)(param_1[0x86] + 8);
    if (iVar3 != 0) {
      iVar3 = fn_0049599c(iVar3 + 0x94,*(undefined1 *)(param_1[0x86] + 4),0xf);
      *(bool *)((int)param_1 + 0x21d) = iVar3 == 0;
    }
    fn_004b4a60(param_1 + 0x85);
  }
  if ((int *)param_1[0x86] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x86] + 4))();
  }
  iVar3 = fn_004b5c8c(param_1 + 0x81);
  iVar3 = fn_00466f1c(iVar3 + -0x74);
  iVar3 = fn_00754868(iVar3 + -0x18);
  *(undefined4 *)(iVar3 + -0x1c) = &DAT_008529d4;
  fn_00459c64((undefined4 *)(iVar3 + -0x1c));
  uVar12 = fn_00754778(iVar3 + -0x18);
  uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
  iVar3 = (int)uVar12;
  *(undefined4 *)(iVar3 + -0xc) = 0;
  if (*(int *)(iVar3 + -8) != 0) {
    uVar12 = fn_00100654(*(int *)(iVar3 + -8),&LAB_0045fb6c);
    uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 != 0) {
      pcVar8 = *(code **)((int)uVar12 + -8);
      if (pcVar8 == (code *)0x0) {
        fn_0030233c();
        uVar7 = extraout_r1_00;
      }
      else {
        (*pcVar8)();
        uVar7 = extraout_r1;
      }
    }
    *(undefined4 *)(iVar3 + -8) = 0;
  }
  uVar6 = *(uint *)(iVar3 + -0x1c);
  uVar10 = *(uint *)(iVar3 + -0x18);
  if (uVar6 < uVar10) {
    uVar7 = uVar10 - uVar6;
  }
  if (uVar6 < uVar10) {
    uVar7 = uVar7 << 0x1c;
  }
  if (uVar6 < uVar10) {
    uVar7 = uVar7 >> 0x1f;
  }
  else {
    uVar7 = 0;
  }
  iVar2 = uVar7 + 1;
  if (iVar2 < ((int)(uVar10 - uVar6) >> 3) + 1) {
    do {
      iVar2 = iVar2 + 2;
    } while (iVar2 < ((int)(uVar10 - uVar6) >> 3) + 1);
  }
  if (uVar6 != 0) {
    if (*(code **)(uVar6 - 8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(uVar6 - 8))();
    }
  }
  fn_004699ec(iVar3 + -0x160);
  return;
}



void fn_004783ec(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  undefined4 *unaff_r11;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  uint local_a0;
  uint uStack_9c;
  int local_98;
  undefined1 auStack_94 [4];
  undefined *local_90;
  undefined4 local_8c;
  undefined *puStack_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  int *local_60 [10];
  undefined4 local_38 [2];
  undefined1 auStack_30 [12];
  
  if ((((DAT_008b6393 != '\0') && (*(int *)(*(int *)(param_1 + 0x174) + 0x14) == 0)) &&
      (*(int *)(param_1 + 0x188) != 0)) &&
     (fn_0013d0fc(&local_a0),
     *(uint *)(param_1 + 0x24c) < uStack_9c ||
     uStack_9c - *(uint *)(param_1 + 0x24c) < (uint)(*(uint *)(param_1 + 0x248) <= local_a0))) {
    fn_004680fc(*(undefined4 *)(param_1 + 0x174),param_1 + 0x178,
                 *(undefined2 *)(*(int *)(param_1 + 0x17c) + 0x86));
    *(uint *)(param_1 + 0x24c) = uStack_9c + (0xfffffff0 < local_a0);
    *(uint *)(param_1 + 0x248) = local_a0 + 0xf;
  }
  while( true ) {
    uVar8 = SUB41(unaff_r11,0);
    if (*(int *)(*(int *)(param_1 + 0x174) + 0x14) == 0) break;
    iVar6 = *(int *)(*(int *)(param_1 + 0x174) + 8);
    uVar1 = *(undefined2 *)(iVar6 + 0x86);
    piVar2 = (int *)fn_004790f8(param_1,uVar1);
    if (piVar2 == (int *)0x0) {
      local_98 = iVar6;
      (**(code **)(**(int **)(param_1 + 0x174) + 0x14))
                (auStack_94,*(int **)(param_1 + 0x174),&local_98);
    }
    else {
      local_90 = &DAT_008528bc;
      local_78 = *(undefined4 *)(iVar6 + 0xf4);
      local_8c = *(uint *)(iVar6 + 0xe0);
      puStack_88 = *(undefined **)(iVar6 + 0xe4);
      uStack_84 = *(undefined4 *)(iVar6 + 0xe8);
      local_80 = *(undefined4 *)(iVar6 + 0xec);
      uStack_7c = *(undefined4 *)(iVar6 + 0xf0);
      unaff_r11 = &local_8c;
      uVar8 = SUB41(unaff_r11,0);
      local_74 = *(undefined4 *)(iVar6 + 0xf8);
      iVar7 = *(int *)(param_1 + 0x54);
      iVar6 = fn_004b47c0(param_1 + 0x214,&local_90);
      if (iVar6 == 0) {
        iVar6 = fn_004b5930(param_1 + 0x204,&local_90);
        if (iVar6 != 0) {
          iVar7 = iVar7 + -0x18;
        }
      }
      else {
        iVar7 = iVar7 + -0x2c;
      }
      piVar3 = (int *)fn_0046774c(piVar2,*(undefined4 *)(param_1 + 0x174),param_1 + 0x178,iVar7);
      if (piVar3 == (int *)0x0) break;
      if ((local_8c & 0xff0000) == 0 && ((unsigned int)(local_8c) >> 16) & 0xffff >> 8 == 0) {
        iVar6 = fn_00478b90(param_1,piVar3,uVar1);
joined_r0x00478628:
        if (iVar6 == 0) {
LAB_004785ac:
          *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + 1;
          (**(code **)(*piVar2 + 0x14))(piVar2,piVar3,&local_90);
        }
      }
      else {
        iVar6 = fn_004b47c0(param_1 + 0x214,&local_90);
        if (iVar6 == 0) {
          iVar6 = fn_004b5930(param_1 + 0x204,&local_90);
          if (iVar6 == 0) {
            if (*(int *)(param_1 + 0x100) != 0) {
              iVar6 = fn_0048cd74(*(int *)(param_1 + 0x100),&local_90);
              goto joined_r0x00478628;
            }
            goto LAB_004785ac;
          }
          fn_004b59d0(param_1 + 0x204,piVar3,&local_90,uVar1);
        }
        else {
          fn_004b4860(param_1 + 0x214,piVar3,&local_90,uVar1);
        }
      }
      puVar5 = (uint *)(piVar3 + 1);
      do {
        uVar4 = *puVar5 - 1;
        bVar10 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar10);
      *puVar5 = uVar4;
      bVar10 = uVar4 == 0;
      if (bVar10) {
        uVar4 = (uint)*(byte *)(piVar3 + 2);
      }
      if (bVar10 && uVar4 == 0) {
        *(undefined1 *)(piVar3 + 2) = 1;
        (**(code **)(*piVar3 + 4))(piVar3);
      }
    }
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    iVar6 = *(int *)(param_1 + 0x144);
    bVar10 = *(int *)(param_1 + 0x148) == iVar6;
    if (!bVar10) {
      uVar8 = 2;
    }
    if (!bVar10) {
      do {
        piVar2 = *(int **)(iVar6 + 4);
        if (*(char *)(piVar2[0x26] + 4) != '\0') {
          while( true ) {
            puStack_88 = &DAT_008528bc;
            uStack_84 = (uint)CONCAT11(uVar8,bVar10);
            local_80 = (uint)bVar10;
            iVar7 = fn_00476a94(piVar2 + 0x12,local_38,&puStack_88);
            if (iVar7 == 0) break;
            (**(code **)(*piVar2 + 0x1c))(piVar2,local_38[0],&puStack_88);
            fn_0013d0fc(auStack_30);
            fn_0074a8dc(local_60,piVar2 + 0x1e,auStack_30);
            piVar3 = *(int **)piVar2[0x23];
            if (piVar3 != (int *)piVar2[0x23]) {
              *(int *)piVar3[1] = *piVar3;
              *(int *)(*piVar3 + 4) = piVar3[1];
              piVar2[0x24] = piVar2[0x24] + -1;
              piVar9 = (int *)piVar3[2];
              puVar5 = (uint *)(piVar9 + 1);
              do {
                uVar4 = *puVar5 - 1;
                bVar11 = (bool)hasExclusiveAccess(puVar5);
              } while (!bVar11);
              *puVar5 = uVar4;
              bVar11 = uVar4 == 0;
              if (bVar11) {
                uVar4 = (uint)*(byte *)(piVar9 + 2);
              }
              if (bVar11 && uVar4 == 0) {
                *(undefined1 *)(piVar9 + 2) = 1;
                (**(code **)(*piVar9 + 4))(piVar9);
              }
              *piVar3 = piVar2[0x20];
              piVar2[0x20] = (int)piVar3;
            }
            puVar5 = (uint *)(local_60[0] + 1);
            do {
              uVar4 = *puVar5 - 1;
              bVar11 = (bool)hasExclusiveAccess(puVar5);
            } while (!bVar11);
            *puVar5 = uVar4;
            bVar11 = uVar4 == 0;
            if (bVar11) {
              uVar4 = (uint)*(byte *)(local_60[0] + 2);
            }
            if (bVar11 && uVar4 == 0) {
              *(undefined1 *)(local_60[0] + 2) = 1;
              (**(code **)(*local_60[0] + 4))(local_60[0]);
            }
          }
        }
        iVar6 = iVar6 + 8;
      } while (*(int *)(param_1 + 0x148) != iVar6);
    }
  }
  return;
}


