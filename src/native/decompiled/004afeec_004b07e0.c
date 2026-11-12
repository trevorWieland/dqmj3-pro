#include "004afeec_004b07e0.h"



/* WARNING: Removing unreachable block (ram,0x004b0b40) */
/* WARNING: Removing unreachable block (ram,0x004b091c) */
/* WARNING: Removing unreachable block (ram,0x004b0924) */
/* WARNING: Removing unreachable block (ram,0x004b0b48) */

void fn_004b07e0(int param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  puVar3 = (uint *)fn_0048cbf8(param_2,0);
  if (puVar3 == (uint *)0x0) {
    if ((uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    }
    cVar1 = *(char *)(param_1 + 4);
  }
  else {
    iVar8 = *(int *)(param_1 + 8);
    if ((uint)(*(int *)(iVar8 + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
      *puVar3 = 0;
    }
    else {
      puVar9 = (uint *)(*(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0xc) + *(int *)(param_1 + 0xc));
      *puVar3 = *puVar9 & 0xffffff | (uint)*(byte *)((int)puVar9 + 3) << 0x18;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    }
    cVar1 = *(char *)(param_1 + 4);
  }
  if (cVar1 == '\0') {
    piVar4 = (int *)fn_0048cbf8(param_2,1);
    if (piVar4 == (int *)0x0) {
      fn_00101a1c(&local_34,&LAB_0075552c,0xc,1);
      puVar11 = local_34;
      if (local_34 != local_30) {
        do {
          puVar11 = puVar11 + 1;
        } while (puVar11 != local_30);
        local_30 = local_34;
      }
      iVar8 = *(int *)(param_1 + 8);
      iVar12 = *(int *)(param_1 + 0xc);
      if ((uint)(*(int *)(iVar8 + 0x10) - iVar12) < 4) {
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        puVar3 = (uint *)(*(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0xc) + iVar12);
        uVar14 = *puVar3;
        bVar2 = *(byte *)((int)puVar3 + 3);
        *(int *)(param_1 + 0xc) = iVar12 + 4;
        uVar14 = uVar14 & 0xffffff | (uint)bVar2 << 0x18;
        if ((uint)((int)local_2c - (int)local_34) < uVar14) {
          uVar10 = (int)local_30 - (int)local_34;
          uVar5 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
          if (uVar5 < uVar10 + 0x20) {
            uVar5 = uVar10 + 0x20;
          }
          uVar10 = uVar14;
          if (uVar14 < uVar5) {
            uVar10 = uVar5;
          }
          puVar6 = (undefined1 *)fn_0015ece0(uVar10);
          puVar7 = puVar6;
          for (puVar11 = local_34; puVar13 = local_34, puVar11 != local_30; puVar11 = puVar11 + 1) {
            if (puVar7 != (undefined1 *)0x0) {
              *puVar7 = *puVar11;
            }
            puVar7 = puVar7 + 1;
          }
          for (; puVar13 != local_30; puVar13 = puVar13 + 1) {
          }
          fn_0014f1bc(local_34);
          local_30 = puVar6 + ((int)local_30 - (int)local_34);
          local_2c = puVar6 + uVar10;
          local_34 = puVar6;
        }
        uVar5 = 0;
        while( true ) {
          if ((uVar14 <= uVar5) || (*(char *)(param_1 + 4) != '\0')) goto LAB_004b0cf0;
          iVar8 = *(int *)(param_1 + 8);
          iVar12 = *(int *)(param_1 + 0xc);
          if (*(int *)(iVar8 + 0x10) == iVar12) {
            *(undefined1 *)(param_1 + 4) = 1;
            local_28[0] = 0;
          }
          else {
            local_28[0] = *(undefined1 *)(*(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0xc) + iVar12);
            *(int *)(param_1 + 0xc) = iVar12 + 1;
          }
          if (*(char *)(param_1 + 4) != '\0') break;
          if (local_30 == local_2c) {
            fn_0079b730(&local_34,local_30,local_28);
            puVar11 = local_30;
          }
          else {
            puVar11 = local_30 + 1;
            if (local_30 != (undefined1 *)0x0) {
              *local_30 = local_28[0];
            }
          }
          local_30 = puVar11;
          uVar5 = uVar5 + 1;
        }
        puVar11 = local_34;
        if (local_34 != local_30) {
          do {
            puVar11 = puVar11 + 1;
          } while (puVar11 != local_30);
          local_30 = local_34;
        }
      }
LAB_004b0cf0:
      fn_00100414(&local_34,fn_004b93c4,0xc,1);
      return;
    }
    if (*piVar4 != piVar4[1]) {
      piVar4[1] = *piVar4;
    }
    iVar12 = *(int *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar12 + 0x10) - iVar8) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      puVar3 = (uint *)(iVar8 + *(int *)(iVar12 + 0xc) + *(int *)(iVar12 + 0x18));
      uVar14 = *puVar3;
      bVar2 = *(byte *)((int)puVar3 + 3);
      *(int *)(param_1 + 0xc) = iVar8 + 4;
      uVar14 = uVar14 & 0xffffff | (uint)bVar2 << 0x18;
      if ((uint)(piVar4[2] - *piVar4) < uVar14) {
        uVar10 = piVar4[1] - *piVar4;
        uVar5 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
        if (uVar5 < uVar10 + 0x20) {
          uVar5 = uVar10 + 0x20;
        }
        uVar10 = uVar14;
        if (uVar14 < uVar5) {
          uVar10 = uVar5;
        }
        puVar6 = (undefined1 *)fn_0015ece0(uVar10);
        puVar13 = (undefined1 *)piVar4[1];
        puVar7 = puVar6;
        for (puVar11 = (undefined1 *)*piVar4; puVar11 != puVar13; puVar11 = puVar11 + 1) {
          if (puVar7 != (undefined1 *)0x0) {
            *puVar7 = *puVar11;
          }
          puVar7 = puVar7 + 1;
        }
        for (iVar8 = *piVar4; iVar8 != piVar4[1]; iVar8 = iVar8 + 1) {
        }
        fn_0014f1bc(*piVar4);
        piVar4[1] = (int)(puVar6 + (piVar4[1] - *piVar4));
        *piVar4 = (int)puVar6;
        piVar4[2] = (int)(puVar6 + uVar10);
      }
      uVar5 = 0;
      while( true ) {
        if (uVar14 <= uVar5) {
          return;
        }
        if (*(char *)(param_1 + 4) != '\0') {
          return;
        }
        iVar8 = *(int *)(param_1 + 8);
        iVar12 = *(int *)(param_1 + 0xc);
        if (*(int *)(iVar8 + 0x10) == iVar12) {
          *(undefined1 *)(param_1 + 4) = 1;
          local_24[0] = 0;
        }
        else {
          local_24[0] = *(undefined1 *)(*(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0xc) + iVar12);
          *(int *)(param_1 + 0xc) = iVar12 + 1;
        }
        if (*(char *)(param_1 + 4) != '\0') break;
        puVar11 = (undefined1 *)piVar4[1];
        if (puVar11 == (undefined1 *)piVar4[2]) {
          fn_0079b730(piVar4,puVar11,local_24);
        }
        else {
          piVar4[1] = (int)(puVar11 + 1);
          if (puVar11 != (undefined1 *)0x0) {
            *puVar11 = local_24[0];
          }
        }
        uVar5 = uVar5 + 1;
      }
      if (*piVar4 != piVar4[1]) {
        piVar4[1] = *piVar4;
      }
    }
  }
  return;
}



void fn_004afeec(int param_1,undefined4 param_2)

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


