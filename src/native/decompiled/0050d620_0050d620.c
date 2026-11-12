#include "0050d620_0050d620.h"



void fn_0050d620(int param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  undefined1 auStack_84 [4];
  int local_80;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [12];
  int local_6c;
  undefined1 auStack_50 [12];
  int local_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (0x3fefffff < *(int *)(DAT_008bf4cc + 0xa4) - 0x100000U) {
    return;
  }
  iVar7 = *param_2;
  if (*(char *)(iVar7 + 2) != '\x05') {
    fn_0050e05c(param_1,param_2 + 3,2);
    return;
  }
  cVar6 = *(char *)(iVar7 + 3);
  if ((cVar6 != '\0') && (cVar6 != '\x01')) {
    return;
  }
  uVar2 = fn_006db3a8(DAT_008c0690,iVar7,param_2[1]);
  cVar1 = *(char *)(iVar7 + 1);
  fn_00124e48(auStack_84);
  fn_00518060(auStack_84,iVar7 + 4);
  puVar3 = (undefined4 *)fn_006db530(DAT_008c06a0,auStack_84);
  if (puVar3 == (undefined4 *)0x0 && param_3 == 0) {
    puVar3 = (undefined4 *)fn_0050b144(DAT_008bf4cc,param_2 + 3);
    iVar7 = fn_006d6d58(auStack_78);
    if ((((iVar7 != 0) && (iVar7 = fn_006d6d58(auStack_50), iVar7 == 0)) &&
        (iVar7 = fn_006db790(DAT_008c06a0,&local_80,1), iVar7 != 0)) &&
       (iVar7 = fn_006db790(DAT_008c06a0,&local_80,0), iVar7 == 0)) {
      (**(code **)(local_80 + 0x14))(&local_80,*(code **)(local_80 + 0x14),0x80000,0);
      fn_0050e05c(param_1,param_2 + 3,1);
      fn_0051811c(auStack_84);
      return;
    }
    iVar7 = fn_006d6e30(auStack_7c);
    if (iVar7 == 0) goto LAB_0050d858;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)fn_006db790(DAT_008c06a0,&local_80,0);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(puVar3,*(code **)*puVar3,0x80080000,0);
        if (cVar6 == '\0') {
          *(undefined1 *)(puVar3 + 8) = 6;
          fn_0051811c(auStack_84);
          return;
        }
        (**(code **)puVar3[1])(puVar3 + 1,*(code **)puVar3[1],0x80000,0);
        (**(code **)param_2[3])(param_2 + 3,*(code **)param_2[3],0x80000,0);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        fn_004ed810(puVar3 + 1,param_2 + 3);
        goto LAB_0050d860;
      }
      goto LAB_0050d8a4;
    }
LAB_0050d860:
    if (cVar6 == '\0') {
      (**(code **)*puVar3)(puVar3,*(code **)*puVar3,0x80080000,0);
      if (*(char *)((int)puVar3 + 0x51) == cVar1) goto LAB_0050ddf4;
      *(char *)((int)puVar3 + 0x51) = cVar1;
    }
    if (*(char *)((int)puVar3 + 0x51) == '\0') {
      *(char *)((int)puVar3 + 0x51) = cVar1;
      (**(code **)*puVar3)(puVar3,*(code **)*puVar3,0x80000000,0);
    }
    else if (*(char *)((int)puVar3 + 0x51) != cVar1) {
      (**(code **)*puVar3)(puVar3,*(code **)*puVar3,0x80000000,0);
      fn_0051811c(auStack_84);
      return;
    }
    if (*(char *)(puVar3 + 8) != '\x02') {
      if (param_3 == 0) {
        local_28 = *(undefined4 *)(param_1 + 0xc);
        iVar7 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                          (*(int **)(param_1 + 0x10),&local_28,puVar3 + 1,8,0);
joined_r0x0050dba8:
        if (iVar7 - 0x100000U < 0x3ff00000) {
          local_30 = 5;
          local_2c = 0;
          fn_004ed514(&local_2c,uVar2);
          fn_001694d4(iVar7,&local_30);
          fn_0050a490(*(undefined4 *)(param_1 + 0x10));
        }
        if (*(byte *)(puVar3 + 5) < 0xc) goto LAB_0050ddf4;
      }
      else if (*(char *)(puVar3 + 5) != -3) {
        local_28 = *(undefined4 *)(param_1 + 0xc);
        iVar7 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                          (*(int **)(param_1 + 0x10),&local_28,*(char *)(puVar3 + 5),8,0);
        goto joined_r0x0050dba8;
      }
      uVar2 = *(undefined4 *)(DAT_008bf4d4 + 0xc);
      puVar3[0x18] = *(undefined4 *)(DAT_008bf4d4 + 8);
      puVar3[0x19] = uVar2;
      goto LAB_0050ddf4;
    }
    uVar9 = puVar3[0xb];
    iVar7 = fn_006d88c8(uVar9);
    if ((iVar7 == 5) ||
       ((iVar7 = fn_006d88c8(uVar9), iVar7 != 1 && (iVar7 = fn_006d88c8(uVar9), iVar7 != 4))))
    goto LAB_0050ddf4;
  }
  else {
LAB_0050d858:
    if (puVar3 != (undefined4 *)0x0) goto LAB_0050d860;
LAB_0050d8a4:
    if (cVar6 == '\x01') goto LAB_0050ddf4;
    if (*(uint *)(DAT_008bf4d4 + 0x30) <= *(uint *)(DAT_008bf4cc + 0x38)) {
joined_r0x0050d8d4:
      if (param_3 == 0) {
        fn_0050e05c(param_1,param_2 + 3,1);
      }
      goto LAB_0050ddf4;
    }
    bVar10 = local_6c == 0;
    if (bVar10) {
      local_6c = local_44;
    }
    iVar7 = 0;
    if (!bVar10 || local_6c != 0) {
      iVar7 = local_6c;
    }
    if (*(char *)(DAT_008bf4d4 + 0x80) != '\0') {
      iVar11 = 0;
      if (iVar7 != 0) {
        iVar11 = fn_006d9e60(*(undefined4 *)(DAT_008bf4d4 + 0x7c),iVar7);
      }
      uVar4 = fn_006d9c3c(*(undefined4 *)(DAT_008bf4d4 + 0x7c));
      if (((*(uint *)(DAT_008bf4d4 + 0x30) <= uVar4) ||
          (iVar8 = *(int *)(DAT_008bf4d4 + 0x7c), uVar4 = fn_006d9c3c(iVar8),
          *(uint *)(iVar8 + 0x34) <= uVar4)) && (iVar11 == 0)) goto joined_r0x0050d8d4;
    }
    iVar11 = DAT_008bf4cc;
    if (iVar7 != 0) {
      for (piVar5 = (int *)(DAT_008bf4cc + 0x3c);
          piVar5 != (int *)(iVar11 + *(int *)(iVar11 + 0x38) * 4 + 0x3c); piVar5 = piVar5 + 1) {
        if (*(int *)(*piVar5 + 0x18) == iVar7 && *(int *)(*piVar5 + 0x1c) == 0) {
          iVar8 = *piVar5;
          if (*(char *)(iVar8 + 0x20) == '\x05') {
            *(undefined1 *)(iVar8 + 0x68) = 1;
          }
          else {
            *(undefined1 *)(iVar8 + 0x20) = 6;
          }
        }
      }
    }
    puVar3 = (undefined4 *)fn_0050b370(DAT_008bf4cc);
    fn_0051cbd0(puVar3,param_1);
    *(undefined1 *)(puVar3 + 8) = 3;
    if (iVar7 != 0) {
      fn_0051c658(puVar3,iVar7,0);
    }
    *(char *)((int)puVar3 + 0x51) = cVar1;
    local_30 = 0;
    local_2c = 0;
    fn_004f01f4(&local_30);
    cVar6 = -2;
    fn_00169c20(local_30,local_2c,0xfe,0);
    piVar5 = (int *)puVar3[0xb];
    *(char *)(puVar3 + 0x14) = cVar6 + '\x02';
    iVar7 = fn_006d88c8(piVar5);
    if ((iVar7 != 0) && (iVar7 = fn_006d88c8(piVar5), iVar7 != 5)) {
      fn_0050faac(piVar5);
      (**(code **)(*piVar5 + 8))(piVar5,1);
    }
  }
  iVar7 = fn_0051b784(DAT_008c06a0,puVar3,auStack_84);
  if (iVar7 < 0) {
    (**(code **)(*DAT_008c06a0 + 8))(DAT_008c06a0,*(code **)(*DAT_008c06a0 + 8),0x80000,0);
    fn_0051811c(auStack_84);
    return;
  }
  uVar9 = puVar3[0xd];
  if (param_3 == 0) {
    iVar7 = fn_0051c178(uVar9,puVar3,*(undefined4 *)(param_1 + 0x14));
  }
  else {
    iVar7 = fn_0051bf00(uVar9,puVar3,*(undefined4 *)(param_1 + 0x14));
  }
  if (iVar7 == 0) {
    fn_0051ba28(DAT_008c06a0,puVar3);
    goto LAB_0050ddf4;
  }
  fn_004efcf4(uVar9,0);
  if (param_3 == 0) {
    local_28 = *(undefined4 *)(param_1 + 0xc);
    iVar7 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                      (*(int **)(param_1 + 0x10),&local_28,puVar3 + 1,8,0);
joined_r0x0050dd80:
    if (iVar7 - 0x100000U < 0x3ff00000) {
      local_30 = 5;
      local_2c = 0;
      fn_004ed514(&local_2c,uVar2);
      fn_001694d4(iVar7,&local_30);
      fn_0050a490(*(undefined4 *)(param_1 + 0x10));
    }
    if (*(byte *)(puVar3 + 5) < 0xc) goto LAB_0050ddf4;
  }
  else if (*(byte *)(puVar3 + 5) < 0xc) {
    local_28 = *(undefined4 *)(param_1 + 0xc);
    iVar7 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                      (*(int **)(param_1 + 0x10),&local_28,*(byte *)(puVar3 + 5),8,0);
    goto joined_r0x0050dd80;
  }
  iVar7 = DAT_008bf4d4;
  uVar2 = *(undefined4 *)(DAT_008bf4d4 + 0xc);
  puVar3[0x18] = *(undefined4 *)(DAT_008bf4d4 + 8);
  puVar3[0x19] = uVar2;
  uVar2 = *(undefined4 *)(iVar7 + 0xc);
  puVar3[0x16] = *(undefined4 *)(iVar7 + 8);
  puVar3[0x17] = uVar2;
LAB_0050ddf4:
  fn_0051811c(auStack_84);
  return;
}


