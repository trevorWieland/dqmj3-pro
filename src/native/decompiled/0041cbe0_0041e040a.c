#include "0041cbe0_0041e040a.h"



void fn_0041d6b4(int param_1)

{
  fn_002c3d68();
  (**(code **)(**(int **)(param_1 + 0x100) + 0xc))();
  fn_006899f4(param_1,0xdc,1);
  fn_003e6b34(param_1,5);
  return;
}



void fn_0041d338(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = param_1[0x3a];
  if (iVar2 == 0) {
    iVar2 = fn_006cb994(param_1);
    if (iVar2 != 0) {
      fn_003e6f38(param_1);
      iVar2 = 1;
LAB_0041d50c:
      param_1[0x3a] = iVar2;
      return;
    }
  }
  else if (iVar2 == 1) {
    iVar2 = fn_006f6a6c(param_1);
    if (iVar2 == 1) {
      if ((char)((int *)param_1[0x40])[6] == '\0') {
        (**(code **)(*(int *)param_1[0x40] + 0xc))();
        fn_006899f4(param_1,0xdc,1);
        fn_003e6b34(param_1,5);
        return;
      }
      iVar2 = (**(code **)(*param_1 + 0x14c))(param_1);
      iVar3 = fn_002940c0();
      bVar1 = 0;
      if (iVar3 != 0) {
        bVar1 = *(byte *)(iVar2 + 0xa74);
      }
      if ((iVar3 == 0 || (bVar1 & 2) == 0) || (*(short *)(iVar2 + 0xa72) == 0)) {
        fn_001f7cac(param_1,1,0);
        goto LAB_0041d374;
      }
      uVar4 = (**(code **)(*param_1 + 0x14c))(param_1);
      fn_003e7084(param_1,uVar4);
      param_1[0x3a] = 2;
    }
  }
  else if (iVar2 == 2) {
    iVar2 = fn_006f6a6c(param_1);
    if (iVar2 != 0) {
      if (iVar2 == 2) {
        uVar4 = (**(code **)(*param_1 + 0x14c))(param_1);
        fn_003e6fc0(param_1,uVar4);
        iVar2 = 3;
        goto LAB_0041d50c;
      }
      if (iVar2 == 3) {
        uVar4 = fn_00689b18(param_1);
        iVar2 = (**(code **)(*param_1 + 0x14c))(param_1);
        fn_00292108((int)*(short *)(iVar2 + 0xa72),uVar4,0xdd);
        *(undefined1 *)(param_1[0x40] + 0x19) = 1;
        fn_003e6b34(param_1,5);
        return;
      }
    }
  }
  else if ((iVar2 == 3) && (iVar2 = fn_006f6a6c(param_1), iVar2 == 1)) {
LAB_0041d374:
    fn_003e6b34(param_1,4);
    return;
  }
  return;
}



void fn_0041d1f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 0x14c))();
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x38);
  if ((*(byte *)(puVar1 + 0x29d) & 8) != 0) {
    fn_0028bb6c(uVar2,0);
  }
  fn_0028ba38(uVar2,*puVar1);
  uVar2 = fn_0022f584((char *)&DAT_0041d274,0);
  fn_0068974c(*(undefined4 *)(param_1 + 4),uVar2,0,1);
  fn_003e6b34(*(undefined4 *)(param_1 + 4),6);
  return;
}



void fn_0041d04c(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (param_1[0x3a] == 0) {
    iVar2 = fn_006ad868(param_1,1,0);
    if (iVar2 != 0) {
      iVar2 = fn_006cb974(param_1);
      fn_002940dc(iVar2 + -1,iVar2,&local_18);
      (**(code **)(*param_1 + 0x14c))(param_1);
      iVar2 = fn_00294100();
      if (iVar2 != 0) {
        uStack_10 = (uStack_10 & ~((unsigned int)0xffffff << 0)) | ((unsigned int)(CONCAT12(1,(undefined2)uStack_10)) & 0xffffff);
      }
      fn_003e6cc0(param_1,&local_18);
      iVar2 = param_1[0x40];
      *(undefined4 *)(iVar2 + 0x1c) = local_18;
      *(undefined4 *)(iVar2 + 0x20) = uStack_14;
      *(undefined4 *)(iVar2 + 0x24) = uStack_10;
      param_1[0x3a] = 1;
    }
  }
  else if (param_1[0x3a] == 1) {
    uVar1 = fn_006f6a38(param_1);
    if ((uVar1 & 0x400000) != 0) {
      *(undefined1 *)(param_1[0x3d] + 0xe11) = 1;
    }
    if (*(char *)(param_1[0x3d] + 0xe10) != '\0') {
      *(undefined1 *)(param_1[0x3d] + 0xe10) = 0;
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return;
}



undefined4 fn_0041cbe0(int *param_1)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
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
  uint local_2c [2];
  
  puVar12 = (undefined4 *)param_1[6];
  if (puVar12 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar12)(puVar12);
    do {
      if (puVar3 == &DAT_0089687c) goto LAB_0041cc28;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar12 = (undefined4 *)0x0;
LAB_0041cc28:
  param_1[0x40] = (int)puVar12;
  fn_003e6b8c(param_1);
  iVar4 = fn_00292f20();
  cVar2 = *(char *)(iVar4 + 0xad0);
  if (cVar2 != '\0') {
    iVar4 = fn_00292f20();
    *(undefined1 *)(iVar4 + 0xad0) = 0;
    iVar4 = fn_0028bb88(*(undefined4 *)(DAT_00897804 + 0x38),*(undefined4 *)(param_1[0x40] + 0x14))
    ;
    *(uint *)(iVar4 + 0xa74) = *(uint *)(iVar4 + 0xa74) | 1;
    iVar5 = fn_001c232c(DAT_008977e4);
    cVar1 = *(char *)(iVar5 + 8);
    if (cVar1 != '\x01') {
      if ((cVar1 == '\x02') || (cVar1 != '\x05')) goto LAB_0041cce4;
      *(uint *)(iVar4 + 0xa74) = *(uint *)(iVar4 + 0xa74) | 4;
    }
    if ((*(byte *)(iVar4 + 0xa74) & 2) == 0) {
      *(undefined1 *)(param_1[0x40] + 0x18) = 1;
      fn_00292778();
    }
    *(uint *)(iVar4 + 0xa74) = *(uint *)(iVar4 + 0xa74) | 2;
  }
LAB_0041cce4:
  fn_00397774(&local_8c);
  local_8c = DAT_00896854;
  local_88 = DAT_00896858;
  uStack_84 = 5;
  local_80 = *(undefined4 *)(param_1[0x40] + 8);
  puVar12 = (undefined4 *)fn_0022f750((char *)&DAT_0041d030);
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
    goto LAB_0041cf40;
  }
  if ((local_70[-3] + 1 < 2) && (uVar6 <= (uint)local_70[-2])) {
    if (puVar12 != (undefined4 *)0x0) {
      bVar13 = puVar12 <= local_70;
      if (local_70 <= puVar12) {
        bVar13 = (undefined4 *)((int)local_70 + local_70[-1] * 2) <= puVar12;
      }
      if (!bVar13) goto LAB_0041cd84;
    }
    fn_001006ac(local_70,puVar12,uVar6);
    local_70[-1] = uVar6;
    *(undefined2 *)((int)local_70 + uVar6 * 2) = 0;
  }
  else {
LAB_0041cd84:
    uVar9 = local_70[-1];
    local_30 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_30 < uVar9 + 0x80) {
      local_30 = uVar9 + 0x80;
    }
    local_2c[0] = uVar6;
    puVar10 = &local_30;
    if (local_30 < uVar6) {
      puVar10 = local_2c;
    }
    uVar9 = *puVar10;
    if (0xfffffff1 < uVar9) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
    }
    if (uVar9 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,uVar9);
    }
    if (uVar9 != 0) {
      puVar3 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar11 = (undefined2 *)((int)puVar3 + uVar6 * 2 + 0xc);
      *puVar3 = 0;
      puVar3[1] = uVar9;
      puVar3[2] = uVar6;
      if (puVar11 != (undefined2 *)0x0) {
        *puVar11 = 0;
      }
    }
    fn_00301a9c(puVar3 + 3,puVar12,uVar6 << 1);
    if (local_70 != &DAT_008f9cf4) {
      piVar7 = local_70 + -3;
      iVar4 = *piVar7;
      if ((iVar4 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar4 + -1, iVar4 == 0)))) {
        fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
      }
    }
    local_70 = puVar3 + 3;
  }
LAB_0041cf40:
  local_5a = 1;
  local_58 = 1;
  fn_00397618(param_1,&local_8c);
  uVar8 = (**(code **)(*param_1 + 0x150))(param_1);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,uVar8);
  if (cVar2 == '\0') {
    if (*(char *)(param_1[0x40] + 0x19) == '\0') {
      fn_006898d4(param_1);
    }
    else {
      fn_003e6b58();
    }
  }
  else {
    fn_003e6de8(param_1);
  }
  fn_00100414(auStack_50,&LAB_0059e0e0,8,4);
  iVar4 = fn_001588d4(auStack_64);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  return 1;
}


