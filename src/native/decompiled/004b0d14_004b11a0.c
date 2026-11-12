#include "004b0d14_004b11a0.h"



void fn_004b11a0(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_150 [112];
  undefined1 auStack_e0 [112];
  undefined1 auStack_70 [4];
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *puStack_64;
  int *local_60;
  int local_5c;
  int local_50 [3];
  int local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c [4];
  
  iVar2 = fn_0048cbf8(param_2,0);
  if (iVar2 != 0) {
    piVar7 = *(int **)(iVar2 + 0x10);
    piVar10 = (int *)*piVar7;
    iVar11 = local_44;
    while (local_44 = (int)piVar10, (int *)local_44 != piVar7) {
      fn_00786e84(&local_30,iVar2,&local_44);
      piVar10 = local_30;
      iVar11 = local_44;
    }
    iVar3 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar3 + 0x10) - iVar5) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      uVar8 = 0;
      puVar4 = (uint *)(*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0xc) + iVar5);
      uVar6 = *puVar4;
      bVar1 = *(byte *)((int)puVar4 + 3);
      *(int *)(param_1 + 0xc) = iVar5 + 4;
      local_44 = iVar11;
      while ((uVar8 < (uVar6 & 0xffffff | (uint)bVar1 << 0x18) && (*(char *)(param_1 + 4) == '\0')))
      {
        fn_00124930(auStack_150);
        fn_004a1fa4(param_1,auStack_150);
        if (*(char *)(param_1 + 4) != '\0') {
          piVar7 = *(int **)(iVar2 + 0x10);
          piVar10 = (int *)*piVar7;
          iVar11 = local_40;
          while (local_40 = (int)piVar10, (int *)local_40 != piVar7) {
            fn_00786e84(local_2c,iVar2,&local_40);
            piVar10 = local_2c[0];
            iVar11 = local_40;
          }
          local_40 = iVar11;
          fn_004a2158(auStack_150);
          return;
        }
        piVar10 = *(int **)(iVar2 + 4);
        iVar11 = *(int *)(iVar2 + 0x10);
        if (piVar10 == (int *)0x0) {
          if (*(int *)(iVar2 + 8) == *(int *)(iVar2 + 0xc)) {
            fn_00786da0(iVar2,0);
          }
          piVar10 = *(int **)(iVar2 + 8);
          *(int **)(iVar2 + 8) = piVar10 + 0x1e;
        }
        else {
          *(int *)(iVar2 + 4) = *piVar10;
        }
        if (piVar10 + 2 != (int *)0x0) {
          fn_0048c758(piVar10 + 2,auStack_150);
        }
        *piVar10 = iVar11;
        piVar10[1] = *(int *)(iVar11 + 4);
        **(undefined4 **)(iVar11 + 4) = piVar10;
        *(int **)(iVar11 + 4) = piVar10;
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
        fn_004a2158(auStack_150);
        uVar8 = uVar8 + 1;
      }
    }
    return;
  }
  fn_00101a1c(auStack_70,fn_004b5170,0x18,1);
  piVar10 = local_60;
  piVar7 = (int *)*local_60;
  iVar2 = local_50[0];
  while (local_50[0] = (int)piVar7, (int *)local_50[0] != piVar10) {
    fn_00786e84(&local_38,auStack_70,local_50);
    piVar7 = local_38;
    iVar2 = local_50[0];
  }
  iVar11 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  local_50[0] = iVar2;
  if ((uint)(*(int *)(iVar11 + 0x10) - iVar3) < 4) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    uVar8 = 0;
    puVar4 = (uint *)(*(int *)(iVar11 + 0x18) + *(int *)(iVar11 + 0xc) + iVar3);
    uVar6 = *puVar4;
    bVar1 = *(byte *)((int)puVar4 + 3);
    *(int *)(param_1 + 0xc) = iVar3 + 4;
    while ((uVar8 < (uVar6 & 0xffffff | (uint)bVar1 << 0x18) && (*(char *)(param_1 + 4) == '\0'))) {
      fn_00124930(auStack_e0);
      fn_004a1fa4(param_1,auStack_e0);
      piVar10 = local_60;
      if (*(char *)(param_1 + 4) != '\0') {
        piVar7 = (int *)*local_60;
        piVar10 = local_3c;
        while (local_3c = piVar7, local_3c != local_60) {
          fn_00786e84(&local_34,auStack_70,&local_3c);
          piVar7 = local_34;
          piVar10 = local_3c;
        }
        local_3c = piVar10;
        fn_004a2158(auStack_e0);
        break;
      }
      if (local_6c == (undefined4 *)0x0) {
        if (local_68 == puStack_64) {
          fn_00786da0(auStack_70,0);
        }
        puVar9 = local_68;
        local_68 = local_68 + 0x1e;
      }
      else {
        puVar9 = local_6c;
        local_6c = (undefined4 *)*local_6c;
      }
      if (puVar9 + 2 != (undefined4 *)0x0) {
        fn_0048c758(puVar9 + 2,auStack_e0);
      }
      *puVar9 = piVar10;
      puVar9[1] = piVar10[1];
      *(undefined4 **)piVar10[1] = puVar9;
      piVar10[1] = (int)puVar9;
      local_5c = local_5c + 1;
      fn_004a2158(auStack_e0);
      uVar8 = uVar8 + 1;
    }
  }
  fn_00100414(auStack_70,fn_004b51c4,0x18,1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x004b0fcc) */
/* WARNING: Removing unreachable block (ram,0x004b0da8) */
/* WARNING: Removing unreachable block (ram,0x004b0db0) */
/* WARNING: Removing unreachable block (ram,0x004b0fd4) */

void fn_004b0d14(int param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  piVar2 = (int *)fn_0048cbf8(param_2,0);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 != piVar2[1]) {
      piVar2[1] = *piVar2;
    }
    iVar6 = *(int *)(param_1 + 8);
    iVar10 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar6 + 0x10) - iVar10) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      puVar7 = (uint *)(*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0xc) + iVar10);
      uVar11 = *puVar7;
      bVar1 = *(byte *)((int)puVar7 + 3);
      *(int *)(param_1 + 0xc) = iVar10 + 4;
      uVar11 = uVar11 & 0xffffff | (uint)bVar1 << 0x18;
      if ((uint)(piVar2[2] - *piVar2) < uVar11) {
        uVar8 = piVar2[1] - *piVar2;
        uVar3 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
        if (uVar3 < uVar8 + 0x20) {
          uVar3 = uVar8 + 0x20;
        }
        uVar8 = uVar11;
        if (uVar11 < uVar3) {
          uVar8 = uVar3;
        }
        puVar4 = (undefined1 *)fn_0015ece0(uVar8);
        puVar12 = (undefined1 *)piVar2[1];
        puVar5 = puVar4;
        for (puVar9 = (undefined1 *)*piVar2; puVar9 != puVar12; puVar9 = puVar9 + 1) {
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = *puVar9;
          }
          puVar5 = puVar5 + 1;
        }
        for (iVar6 = *piVar2; iVar6 != piVar2[1]; iVar6 = iVar6 + 1) {
        }
        fn_0014f1bc(*piVar2);
        piVar2[1] = (int)(puVar4 + (piVar2[1] - *piVar2));
        *piVar2 = (int)puVar4;
        piVar2[2] = (int)(puVar4 + uVar8);
      }
      uVar3 = 0;
      while( true ) {
        if (uVar11 <= uVar3) {
          return;
        }
        if (*(char *)(param_1 + 4) != '\0') {
          return;
        }
        iVar6 = *(int *)(param_1 + 8);
        iVar10 = *(int *)(param_1 + 0xc);
        if (*(int *)(iVar6 + 0x10) == iVar10) {
          *(undefined1 *)(param_1 + 4) = 1;
          local_24[0] = 0;
        }
        else {
          local_24[0] = *(undefined1 *)(*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0xc) + iVar10);
          *(int *)(param_1 + 0xc) = iVar10 + 1;
        }
        if (*(char *)(param_1 + 4) != '\0') break;
        puVar9 = (undefined1 *)piVar2[1];
        if (puVar9 == (undefined1 *)piVar2[2]) {
          fn_0079b730(piVar2,puVar9,local_24);
        }
        else {
          piVar2[1] = (int)(puVar9 + 1);
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = local_24[0];
          }
        }
        uVar3 = uVar3 + 1;
      }
      if (*piVar2 != piVar2[1]) {
        piVar2[1] = *piVar2;
      }
    }
    return;
  }
  fn_00101a1c(&local_34,&LAB_0075552c,0xc,1);
  puVar9 = local_34;
  if (local_34 != local_30) {
    do {
      puVar9 = puVar9 + 1;
    } while (puVar9 != local_30);
    local_30 = local_34;
  }
  iVar6 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0xc);
  if ((uint)(*(int *)(iVar6 + 0x10) - iVar10) < 4) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    puVar7 = (uint *)(*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0xc) + iVar10);
    uVar11 = *puVar7;
    bVar1 = *(byte *)((int)puVar7 + 3);
    *(int *)(param_1 + 0xc) = iVar10 + 4;
    uVar11 = uVar11 & 0xffffff | (uint)bVar1 << 0x18;
    if ((uint)((int)local_2c - (int)local_34) < uVar11) {
      uVar8 = (int)local_30 - (int)local_34;
      uVar3 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
      if (uVar3 < uVar8 + 0x20) {
        uVar3 = uVar8 + 0x20;
      }
      if (uVar3 <= uVar11) {
        uVar3 = uVar11;
      }
      puVar4 = (undefined1 *)fn_0015ece0();
      puVar5 = puVar4;
      for (puVar9 = local_34; puVar12 = local_34, puVar9 != local_30; puVar9 = puVar9 + 1) {
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = *puVar9;
        }
        puVar5 = puVar5 + 1;
      }
      for (; puVar12 != local_30; puVar12 = puVar12 + 1) {
      }
      fn_0014f1bc(local_34);
      local_30 = puVar4 + ((int)local_30 - (int)local_34);
      local_2c = puVar4 + uVar3;
      local_34 = puVar4;
    }
    uVar3 = 0;
    while( true ) {
      if ((uVar11 <= uVar3) || (*(char *)(param_1 + 4) != '\0')) goto LAB_004b117c;
      iVar6 = *(int *)(param_1 + 8);
      iVar10 = *(int *)(param_1 + 0xc);
      if (*(int *)(iVar6 + 0x10) == iVar10) {
        *(undefined1 *)(param_1 + 4) = 1;
        local_28[0] = 0;
      }
      else {
        local_28[0] = *(undefined1 *)(*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0xc) + iVar10);
        *(int *)(param_1 + 0xc) = iVar10 + 1;
      }
      if (*(char *)(param_1 + 4) != '\0') break;
      if (local_30 == local_2c) {
        fn_0079b730(&local_34,local_30,local_28);
        puVar9 = local_30;
      }
      else {
        puVar9 = local_30 + 1;
        if (local_30 != (undefined1 *)0x0) {
          *local_30 = local_28[0];
        }
      }
      local_30 = puVar9;
      uVar3 = uVar3 + 1;
    }
    puVar9 = local_34;
    if (local_34 != local_30) {
      do {
        puVar9 = puVar9 + 1;
      } while (puVar9 != local_30);
      local_30 = local_34;
    }
  }
LAB_004b117c:
  fn_00100414(&local_34,fn_004b93c4,0xc,1);
  return;
}


