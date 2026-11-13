#include "003c319c_003c3934.h"



void fn_003c3934(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  
  iVar1 = param_1[0x3a];
  if (iVar1 == 0) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        iVar1 = (**(code **)(*param_1 + 0x14c))(param_1);
        if ((*(byte *)(iVar1 + 0xa74) & 1) == 0) {
          fn_003e6b34(param_1,0);
          return;
        }
        uVar2 = fn_0022f584((char *)&DAT_003c3c4c);
        fn_0068974c(param_1,uVar2,0,1);
        iVar1 = 3;
LAB_003c3ad8:
        param_1[0x3a] = iVar1;
        return;
      }
      if (iVar1 == 3) {
        iVar1 = fn_006b876c(*(undefined4 *)(DAT_00897804 + 0x38));
        if (iVar1 + 1 < 0x1f) {
          uVar6 = *(undefined4 *)(DAT_00897804 + 0x38);
          uVar2 = (**(code **)(*param_1 + 0x14c))(param_1);
          fn_0028b988(uVar6,uVar2);
          (**(code **)(*param_1 + 0x150))(param_1);
          fn_0015b0dc();
          uVar2 = fn_0022f584((char *)&DAT_003c3c28,0);
          fn_0068974c(param_1,uVar2,0,1);
          iVar1 = 2;
          goto LAB_003c3ad8;
        }
        uVar2 = fn_0022f584((char *)&DAT_003c3c08,0);
        fn_0068974c(param_1,uVar2,0,1);
        param_1[0x3a] = 1;
      }
    }
  }
  else {
    piVar7 = (int *)0x0;
    if (iVar1 == 1) {
      iVar1 = fn_006f6a6c(param_1);
      if (iVar1 == 1) {
        *(undefined1 *)(param_1[0x40] + 0x18) = 1;
        puVar5 = (undefined4 *)fn_001f74ec(param_1,0xdb);
        if (puVar5 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(**(code **)*puVar5)(puVar5);
          do {
            if (puVar3 == &DAT_00896770) goto LAB_003c3b4c;
            puVar3 = (undefined4 *)*puVar3;
          } while (puVar3 != (undefined4 *)0x0);
        }
        puVar5 = (undefined4 *)0x0;
LAB_003c3b4c:
        puVar5[5] = 0xd8;
        puVar5[6] = 0;
        fn_005841e4(puVar5,*(undefined4 *)(param_1[0x40] + 0x14));
        fn_006899f4(param_1,0xdb,1);
        goto LAB_003c39bc;
      }
    }
    else if ((iVar1 == 2 || iVar1 == 3) && (iVar1 = fn_006f6a6c(param_1), iVar1 == 1)) {
      uVar6 = *(undefined4 *)(param_1[0x40] + 0x14);
      uVar2 = fn_00292f20();
      fn_0030d6bc(uVar2,uVar6);
      fn_00292f20();
      iVar1 = fn_006be118();
      if (iVar1 == 0) {
        (**(code **)(*(int *)param_1[0x40] + 0xc))();
        piVar4 = (int *)fn_001f74ec(param_1,0xd7);
        if (piVar4 != (int *)0x0) {
          puVar5 = (undefined4 *)(**(code **)*piVar4)(piVar4);
          do {
            if (puVar5 == &DAT_0089679c) {
              piVar7 = piVar4;
              break;
            }
            puVar5 = (undefined4 *)*puVar5;
          } while (puVar5 != (undefined4 *)0x0);
        }
        (**(code **)(*piVar7 + 0xc))(piVar7);
        fn_006899f4(param_1,0xd4,1);
      }
      else {
        (**(code **)(*(int *)param_1[0x40] + 0xc))();
        fn_006899f4(param_1,0xd7,1);
      }
LAB_003c39bc:
      fn_003e6b34(param_1,5);
      return;
    }
  }
  return;
}



void fn_003c36d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = param_1[0x3a];
  if (iVar1 == 0) {
    iVar1 = fn_006ad868(param_1,1,0);
    if (iVar1 != 0) {
      iVar1 = fn_006cb974(param_1);
      fn_002940dc(iVar1 + -1,iVar1,&local_20);
      (**(code **)(*param_1 + 0x14c))(param_1);
      iVar1 = fn_00294100();
      if (iVar1 != 0) {
        uStack_18 = (uStack_18 & ~((unsigned int)0xffffff << 0)) | ((unsigned int)(CONCAT12(1,(undefined2)uStack_18)) & 0xffffff);
      }
      fn_003e6cc0(param_1,&local_20);
      iVar1 = param_1[0x40];
      *(undefined4 *)(iVar1 + 0x1c) = local_20;
      *(undefined4 *)(iVar1 + 0x20) = uStack_1c;
      *(undefined4 *)(iVar1 + 0x24) = uStack_18;
      param_1[0x3a] = 1;
    }
  }
  else if (iVar1 == 1) {
    uVar4 = fn_006f6a38(param_1);
    if ((uVar4 & 0x400000) != 0) {
      *(undefined1 *)(param_1[0x3d] + 0xe11) = 1;
    }
    if (*(char *)(param_1[0x3d] + 0xe10) != '\0') {
      *(undefined1 *)(param_1[0x3d] + 0xe10) = 0;
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  else if ((iVar1 == 2) && (iVar1 = fn_006ad868(param_1,1), iVar1 != 0)) {
    iVar1 = param_1[0x40];
    uVar2 = fn_00689b18(param_1);
    iVar3 = fn_0029226c(iVar1 + 0x1c,uVar2,0xd8);
    if (iVar3 == 0) {
      fn_00291da8(iVar1 + 0x1c);
      (**(code **)(*param_1 + 0x150))(param_1);
      fn_0015b0dc();
      uVar2 = fn_0022f584((char *)&DAT_003c3ea8,0);
      fn_0068974c(param_1,uVar2,1);
      fn_003e6b34(param_1,6);
      return;
    }
    *(undefined1 *)(param_1[0x40] + 0x18) = 1;
    fn_003e6b34(param_1,5);
    return;
  }
  return;
}



undefined4 fn_003c319c(int *param_1)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 *local_70;
  undefined1 auStack_64 [10];
  undefined1 local_5a;
  undefined4 local_58;
  undefined1 auStack_50 [32];
  uint local_30;
  uint auStack_2c [2];
  
  puVar11 = (undefined4 *)param_1[6];
  if (puVar11 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar11)(puVar11);
    do {
      if (puVar3 == &DAT_0089666c) goto LAB_003c31e4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar11 = (undefined4 *)0x0;
LAB_003c31e4:
  param_1[0x40] = (int)puVar11;
  fn_003e6b8c(param_1);
  iVar4 = fn_00292f20();
  cVar2 = *(char *)(iVar4 + 0xad0);
  if (cVar2 != '\0') {
    iVar4 = fn_00292f20();
    *(undefined1 *)(iVar4 + 0xad0) = 0;
    iVar4 = (**(code **)(*param_1 + 0x14c))(param_1);
    if ((*(byte *)(iVar4 + 0xa74) & 1) == 0) {
      uVar12 = 0;
      bVar14 = false;
      iVar4 = fn_001c232c(DAT_008977e4);
      cVar1 = *(char *)(iVar4 + 8);
      if ((cVar1 == '\x01') || ((cVar1 != '\x02' && (bVar14 = cVar1 == '\x05', bVar14)))) {
        uVar12 = 1;
      }
      uVar13 = *(undefined4 *)(param_1[0x40] + 0x14);
      uVar5 = fn_00292f20();
      fn_0030ceec(uVar5,uVar13,uVar12,bVar14);
    }
    iVar4 = (**(code **)(*param_1 + 0x154))(param_1);
    if (iVar4 != 0) {
      fn_00292778();
    }
  }
  fn_00397774(&local_8c);
  local_8c = DAT_00896648;
  local_88 = DAT_0089664c;
  uStack_84 = 4;
  local_80 = *(undefined4 *)(param_1[0x40] + 8);
  puVar11 = (undefined4 *)fn_0022f584((char *)&DAT_003c35e0,0);
  uVar6 = fn_00100b58();
  puVar3 = &DAT_008f9ce8;
  if (uVar6 == 0) {
    piVar7 = local_70 + -3;
    iVar4 = *piVar7;
    if (iVar4 == 0) {
      local_70[-1] = 0;
      *(undefined2 *)local_70 = 0;
    }
    else {
      if ((local_70 != &DAT_008f9cf4) &&
         ((iVar4 == -1 || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar4 + -1, iVar4 == 0)))))) {
        fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
      }
      local_70 = &DAT_008f9cf4;
    }
  }
  else if ((local_70[-3] + 1 < 2) && (uVar6 <= (uint)local_70[-2])) {
    if (puVar11 != (undefined4 *)0x0) {
      bVar14 = puVar11 <= local_70;
      if (local_70 <= puVar11) {
        bVar14 = (undefined4 *)((int)local_70 + local_70[-1] * 2) <= puVar11;
      }
      if (!bVar14) goto LAB_003c3340;
    }
    fn_001006ac(local_70,puVar11,uVar6);
    local_70[-1] = uVar6;
    *(undefined2 *)((int)local_70 + uVar6 * 2) = 0;
  }
  else {
LAB_003c3340:
    uVar8 = local_70[-1];
    local_30 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
    if (local_30 < uVar8 + 0x80) {
      local_30 = uVar8 + 0x80;
    }
    puVar9 = auStack_2c;
    if (uVar6 <= local_30) {
      puVar9 = &local_30;
    }
    auStack_2c[0] = uVar6;
    uVar8 = *puVar9;
    if (0xfffffff1 < uVar8) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,0xfffffff1);
    }
    if (uVar8 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,uVar8);
    }
    if (uVar8 != 0) {
      puVar3 = (undefined4 *)fn_00100fc6((uVar8 + 8) * 2,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar10 = (undefined2 *)((int)puVar3 + uVar6 * 2 + 0xc);
      *puVar3 = 0;
      puVar3[1] = uVar8;
      puVar3[2] = uVar6;
      if (puVar10 != (undefined2 *)0x0) {
        *puVar10 = 0;
      }
    }
    fn_00301a9c(puVar3 + 3,puVar11,uVar6 << 1);
    if (local_70 != &DAT_008f9cf4) {
      piVar7 = local_70 + -3;
      iVar4 = *piVar7;
      if ((iVar4 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar4 + -1, iVar4 == 0)))) {
        fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
      }
    }
    local_70 = puVar3 + 3;
  }
  local_5a = 1;
  local_58 = 1;
  fn_00397618(param_1,&local_8c);
  uVar12 = (**(code **)(*param_1 + 0x150))(param_1);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,uVar12);
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_1[0x40] + 0x18);
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if (cVar2 == '\x02') {
        fn_003e6b58(param_1);
        goto LAB_003c3580;
      }
    }
    fn_006898d4(param_1);
  }
  else {
    fn_003e6de8(param_1);
  }
LAB_003c3580:
  fn_00100414(auStack_50,&LAB_0059e0e0,8,4);
  iVar4 = fn_001588d4(auStack_64);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  return 1;
}


