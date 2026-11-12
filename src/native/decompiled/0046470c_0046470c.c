#include "0046470c_0046470c.h"



void fn_0046470c(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,uint param_7,undefined1 param_8,uint param_9,undefined1 param_10
                 )

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  int *local_58;
  uint local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  int *local_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 *local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  uVar8 = 0;
  iVar11 = 0;
  cVar12 = '\x01';
  local_50 = (undefined4 *)0x0;
  local_4c = (undefined4 *)0x0;
  local_48 = (undefined4 *)0x0;
  puVar7 = local_4c;
  local_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
LAB_0046494c:
  local_4c = puVar7;
  if (*(uint *)(param_3 + 0x10) <= uVar8) goto LAB_00464958;
  if ((*(byte *)(param_3 + 0x1c) & 4) == 0) {
    iVar1 = fn_0015ece0(0x20);
    if (iVar1 == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)fn_004b5488(iVar1,local_28);
    }
  }
  else {
    iVar1 = fn_00455040(0x20,0);
    if ((iVar1 == 0) || (piVar9 = (int *)fn_0045b64c(iVar1,local_28), piVar9 == (int *)0x0))
    goto LAB_00464958;
    if (piVar9[3] == 0) {
      pcVar3 = *(code **)(*piVar9 + 4);
      goto LAB_00464790;
    }
  }
  uVar4 = *(int *)(param_3 + 0x10) - uVar8;
  if (param_5 < uVar4) {
    uVar4 = param_5;
  }
  fn_0015ef58(piVar9,*(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x18) + uVar8,uVar4,0xffffffff);
  local_44 = (int *)0x0;
  if ((*(byte *)(param_3 + 0x1c) & 4) == 0) {
    iVar1 = fn_0015ece0(0x150);
    piVar10 = (int *)0x0;
    if (iVar1 != 0) {
      local_54 = param_9;
      local_58 = piVar9;
      piVar10 = (int *)fn_004bc1a4(iVar1,param_2,param_6,param_7);
    }
    local_44 = piVar10;
  }
  else {
    iVar1 = fn_00455040(0x150,0);
    piVar10 = (int *)0x0;
    if (iVar1 != 0) {
      local_54 = param_9;
      local_58 = piVar9;
      piVar10 = (int *)fn_00491934(iVar1,param_2,param_6,param_7);
    }
    local_44 = piVar10;
    if ((piVar10 == (int *)0x0) ||
       (((*(ushort *)(piVar10 + 0xf) & 0x40) != 0 && (piVar10[0x46] == 0)))) {
      puVar5 = (uint *)(piVar9 + 1);
      do {
        uVar8 = *puVar5 - 1;
        bVar13 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar13);
      *puVar5 = uVar8;
      bVar13 = uVar8 == 0;
      if (bVar13) {
        uVar8 = (uint)*(byte *)(piVar9 + 2);
      }
      if (bVar13 && uVar8 == 0) {
        *(undefined1 *)(piVar9 + 2) = 1;
        (**(code **)(*piVar9 + 4))();
      }
      if (local_44 != (int *)0x0) {
        pcVar3 = *(code **)(*local_44 + 4);
        piVar9 = local_44;
LAB_00464790:
        (*pcVar3)(piVar9);
      }
LAB_00464958:
      for (puVar7 = local_50; local_4c != puVar7; puVar7 = puVar7 + 1) {
        piVar9 = (int *)*puVar7;
        piVar10 = (int *)piVar9[0x36];
        fn_0045fd08(&local_44,param_2);
        if ((int)local_44 < 0) goto LAB_004649c4;
        puVar5 = (uint *)(piVar9 + 1);
        do {
          uVar8 = *puVar5 - 1;
          bVar13 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar13);
        *puVar5 = uVar8;
        bVar13 = uVar8 == 0;
        if (bVar13) {
          uVar8 = (uint)*(byte *)(piVar9 + 2);
        }
        if (bVar13 && uVar8 == 0) {
          *(undefined1 *)(piVar9 + 2) = 1;
          (**(code **)(*piVar9 + 4))(piVar9);
        }
        puVar5 = (uint *)(piVar10 + 1);
        do {
          uVar8 = *puVar5 - 1;
          bVar13 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar13);
        *puVar5 = uVar8;
        bVar13 = uVar8 == 0;
        if (bVar13) {
          uVar8 = (uint)*(byte *)(piVar10 + 2);
        }
        if (bVar13 && uVar8 == 0) {
          *(undefined1 *)(piVar10 + 2) = 1;
          (**(code **)(*piVar10 + 4))(piVar10);
        }
      }
      bVar13 = (param_7 & 0x20) != 0;
      if (bVar13) {
        param_7 = param_9;
      }
      if (bVar13 && param_7 != 0) {
        local_40 = param_9;
        uStack_3c = 0;
        fn_001777e0(&local_58,param_2 + 0x340);
        local_58[5] = iVar11;
      }
      puVar6 = &DAT_007dba44;
      *local_34 = 0x10001;
      local_34[1] = &DAT_007dba44;
      local_34[2] = 0x71;
      if (local_50 < local_4c) {
        puVar6 = (undefined *)((int)local_4c - (int)local_50);
      }
      if (local_50 < local_4c) {
        puVar6 = (undefined *)((int)puVar6 << 0x1d);
      }
      if (local_50 < local_4c) {
        uVar8 = (uint)puVar6 >> 0x1f;
      }
      else {
        uVar8 = 0;
      }
      for (iVar11 = uVar8 + 1; iVar11 < ((int)local_4c - (int)local_50 >> 2) + 1;
          iVar11 = iVar11 + 2) {
      }
      if (local_50 == (undefined4 *)0x0) {
        return;
      }
      pcVar3 = (code *)local_50[-2];
      goto joined_r0x00464abc;
    }
  }
  uVar8 = uVar8 + param_5;
  *(undefined1 *)(local_44 + 0x4c) = param_8;
  *(undefined1 *)(local_44 + 9) = *(undefined1 *)(param_2 + 0x14c);
  *(undefined1 *)(local_44 + 0x21) = param_10;
  if (uVar8 < *(uint *)(param_3 + 0x10)) {
    cVar2 = cVar12 + '\x01';
    *(char *)(local_44 + 0x19) = cVar12;
    cVar12 = cVar2;
    if (cVar2 == '\0') {
      cVar12 = '\x01';
    }
  }
  else {
    *(undefined1 *)(local_44 + 0x19) = 0;
  }
  iVar11 = iVar11 + 1;
  if (local_4c == local_48) {
    fn_00798d0c(&local_50,local_4c,&local_44);
    puVar7 = local_4c;
  }
  else {
    puVar7 = local_4c + 1;
    if (local_4c != (undefined4 *)0x0) {
      *local_4c = local_44;
    }
  }
  goto LAB_0046494c;
LAB_004649c4:
  for (; local_4c != puVar7; puVar7 = puVar7 + 1) {
    piVar9 = (int *)*puVar7;
    puVar5 = (uint *)(piVar9 + 1);
    piVar10 = (int *)piVar9[0x36];
    do {
      uVar8 = *puVar5 - 1;
      bVar13 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar13);
    *puVar5 = uVar8;
    bVar13 = uVar8 == 0;
    if (bVar13) {
      uVar8 = (uint)*(byte *)(piVar9 + 2);
    }
    if (bVar13 && uVar8 == 0) {
      *(undefined1 *)(piVar9 + 2) = 1;
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    puVar5 = (uint *)(piVar10 + 1);
    do {
      uVar8 = *puVar5 - 1;
      bVar13 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar13);
    *puVar5 = uVar8;
    bVar13 = uVar8 == 0;
    if (bVar13) {
      uVar8 = (uint)*(byte *)(piVar10 + 2);
    }
    if (bVar13 && uVar8 == 0) {
      *(undefined1 *)(piVar10 + 2) = 1;
      (**(code **)(*piVar10 + 4))(piVar10);
    }
  }
  *local_34 = local_44;
  local_34[1] = local_40;
  local_34[2] = uStack_3c;
  uVar8 = local_40;
  if (local_50 < local_4c) {
    uVar8 = (int)local_4c - (int)local_50;
  }
  if (local_50 < local_4c) {
    uVar8 = uVar8 << 0x1d;
  }
  if (local_50 < local_4c) {
    uVar8 = uVar8 >> 0x1f;
  }
  else {
    uVar8 = 0;
  }
  for (iVar11 = uVar8 + 1; iVar11 < ((int)local_4c - (int)local_50 >> 2) + 1; iVar11 = iVar11 + 2) {
  }
  if (local_50 == (undefined4 *)0x0) {
    return;
  }
  pcVar3 = (code *)local_50[-2];
joined_r0x00464abc:
  if (pcVar3 == (code *)0x0) {
    fn_0030233c();
    return;
  }
  (*pcVar3)();
  return;
}


