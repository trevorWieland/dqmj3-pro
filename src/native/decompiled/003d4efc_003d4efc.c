#include "003d4efc_003d4efc.h"



void fn_003d4efc(int param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  short extraout_r1;
  uint *puVar12;
  undefined2 *puVar13;
  uint uVar14;
  undefined4 **ppuVar15;
  uint uVar16;
  uint local_54 [2];
  undefined2 **local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined2 *local_3c;
  undefined2 *local_38;
  undefined2 *local_34;
  uint local_30 [2];
  short local_28 [4];
  
  uVar3 = fn_005f65ec();
  fn_00107aac(*(undefined4 *)(*(int *)(param_1 + 8) + 0x10));
  iVar4 = fn_00163868(param_2[1] - *param_2 >> 2);
  ppuVar15 = (undefined4 **)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x28) + *(int *)(*param_2 + iVar4 * 4) * 0x12;
  fn_006af3a8(&local_44,*(undefined4 *)(DAT_008977e0 + 0x1c),iVar4 + 4,3);
  if (&local_44 != ppuVar15) {
    uVar14 = (int)local_40 - (int)local_44;
    puVar5 = *ppuVar15;
    uVar16 = (int)uVar14 >> 2;
    if ((uint)(*(int *)(param_1 + 0x38) - (int)puVar5 >> 2) < uVar16) {
      local_54[0] = uVar16;
      uVar14 = *(int *)(param_1 + 0x34) - (int)*ppuVar15 >> 2;
      local_30[0] = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
      if (local_30[0] < uVar14 + 0x20) {
        local_30[0] = uVar14 + 0x20;
      }
      puVar12 = local_30;
      if (local_30[0] <= uVar16) {
        puVar12 = local_54;
      }
      uVar16 = *puVar12;
      puVar6 = (undefined4 *)fn_00100fc6(uVar16 << 2,0);
      puVar7 = puVar6;
      for (puVar5 = local_44; puVar5 != local_40; puVar5 = puVar5 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar5;
        }
        puVar7 = puVar7 + 1;
      }
      puVar7 = *ppuVar15;
      puVar5 = puVar7;
      if (*(undefined4 **)(param_1 + 0x34) < puVar7) {
        do {
          puVar5 = puVar5 + 1;
        } while (puVar5 != *(undefined4 **)(param_1 + 0x34));
      }
      fn_001008c4(puVar7,*(int *)(param_1 + 0x38) - (int)puVar7 >> 2,0);
      *ppuVar15 = puVar6;
      *(undefined4 **)(param_1 + 0x34) = puVar6 + ((int)local_40 - (int)local_44 >> 2);
      *(undefined4 **)(param_1 + 0x38) = puVar6 + uVar16;
    }
    else {
      uVar1 = *(int *)(param_1 + 0x34) - (int)puVar5 >> 2;
      if (uVar1 < uVar16) {
        puVar6 = local_44 + uVar1;
        puVar7 = local_44;
        if (local_44 < puVar6) {
          iVar10 = (int)puVar6 - (int)local_44;
          if (0 < iVar10) {
            puVar7 = puVar5 + -1;
            puVar6 = local_44 + -1;
            if (iVar10 * 0x20000000 < 0) {
              *puVar5 = *local_44;
              puVar7 = puVar5;
              puVar6 = local_44;
            }
            for (iVar10 = iVar10 >> 3; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar7[1] = puVar6[1];
              puVar6 = puVar6 + 2;
              puVar7 = puVar7 + 2;
              *puVar7 = *puVar6;
            }
          }
        }
        else {
          for (; puVar7 != puVar6; puVar7 = puVar7 + 1) {
            *puVar5 = *puVar7;
            puVar5 = puVar5 + 1;
          }
        }
        *(undefined4 **)(param_1 + 0x34) = *ppuVar15 + ((int)local_40 - (int)local_44 >> 2);
        puVar7 = *ppuVar15 + uVar1;
        for (puVar5 = local_44 + uVar1; puVar5 != local_40; puVar5 = puVar5 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar5;
          }
          puVar7 = puVar7 + 1;
        }
      }
      else {
        puVar7 = local_44;
        if (local_44 < local_40) {
          if (0 < (int)uVar14) {
            puVar7 = puVar5 + -1;
            puVar6 = local_44 + -1;
            if ((int)(uVar14 * 0x20000000) < 0) {
              *puVar5 = *local_44;
              puVar7 = puVar5;
              puVar6 = local_44;
            }
            for (iVar10 = (int)uVar14 >> 3; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar7[1] = puVar6[1];
              puVar6 = puVar6 + 2;
              puVar7 = puVar7 + 2;
              *puVar7 = *puVar6;
            }
            puVar5 = (undefined4 *)((int)puVar5 + (uVar14 & 0xfffffffc));
          }
        }
        else {
          for (; puVar7 != local_40; puVar7 = puVar7 + 1) {
            *puVar5 = *puVar7;
            puVar5 = puVar5 + 1;
          }
        }
        if (*(undefined4 **)(param_1 + 0x34) < puVar5) {
          do {
            puVar5 = puVar5 + 1;
          } while (puVar5 != *(undefined4 **)(param_1 + 0x34));
        }
        *(undefined4 **)(param_1 + 0x34) = *ppuVar15 + ((int)local_40 - (int)local_44 >> 2);
        *(undefined4 **)(param_1 + 0x38) = *ppuVar15 + ((int)local_40 - (int)local_44 >> 2);
      }
    }
  }
  puVar5 = local_44;
  if (local_40 < local_44) {
    do {
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_40);
  }
  fn_001008c4(local_44,(int)local_3c - (int)local_44 >> 2,0);
  *(uint *)(param_1 + 0xc) = (uint)*(byte *)(iVar4 + 10);
  uVar8 = fn_00163868(100);
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  uVar8 = fn_005f65d4();
  *(undefined4 *)(param_1 + 0x48) = uVar8;
  iVar4 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
  cVar2 = *(char *)(iVar4 + 7);
  if (cVar2 == '\0') {
    local_3c = (undefined2 *)0x0;
    local_38 = (undefined2 *)0x0;
    local_34 = (undefined2 *)0x0;
    fn_0079e608(param_1 + 0x54);
    local_28[0] = -1;
    iVar4 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 10));
    if (*(char *)(iVar4 + 0xb) == '\0') {
      iVar4 = fn_006c97c0(param_1);
      iVar10 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          if (*(short *)(*(int *)(param_1 + 0x24) + iVar10 * 0x40) == iVar4) {
            local_28[0] = (short)iVar10;
            break;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(param_1 + 0x14));
      }
    }
    else {
      local_44 = (undefined4 *)0x0;
      local_40 = (undefined4 *)0x0;
      local_48 = (undefined4 *)0x0;
      local_54[0] = 1;
      local_54[1] = 0;
      local_4c = &local_3c;
      fn_006c9c84(param_1,1,&local_48,0xffffffff,1);
      iVar4 = fn_00163868((int)local_44 - (int)local_48 >> 1);
      local_28[0] = *(short *)((int)local_48 + iVar4 * 2);
      puVar5 = local_48;
      if (local_44 < local_48) {
        do {
          puVar5 = (undefined4 *)((int)puVar5 + 2);
        } while (puVar5 != local_44);
      }
      fn_001008c4(local_48,(int)local_40 - (int)local_48 >> 1,0);
    }
    fn_0079e764(param_1 + 0x54,local_28);
    fn_0079e764(&local_3c,local_28);
    fn_0066173c((int)*(short *)(*(int *)(param_1 + 0x24) + local_28[0] * 0x40));
    iVar4 = fn_003634ec();
    if (iVar4 < 4) {
LAB_003d53c8:
      local_44 = (undefined4 *)0x0;
      local_48 = (undefined4 *)0x0;
      local_40 = (undefined4 *)0x0;
      local_54[0] = 0;
      local_54[1] = 1;
      local_4c = &local_3c;
      fn_006c9c84(param_1,1,&local_48,0xffffffff,1);
      if (local_44 != local_48) goto LAB_003d543c;
      puVar5 = local_48;
      if (local_44 <= local_48) {
        for (; puVar5 != local_44; puVar5 = (undefined4 *)((int)puVar5 + 2)) {
        }
      }
      fn_001008c4(local_48,(int)local_40 - (int)local_48 >> 1,0);
    }
LAB_003d5550:
    fn_006c8ce8(param_1,param_1 + 0x54);
    puVar11 = local_3c;
    if (local_38 < local_3c) {
      do {
        puVar11 = puVar11 + 1;
      } while (puVar11 != local_38);
    }
    fn_001008c4(local_3c,(int)local_34 - (int)local_3c >> 1,0);
  }
  else if (cVar2 == '\x01') {
    fn_0079e608(param_1 + 0x54);
  }
  else if (cVar2 == '\x02') {
    fn_0079e608(param_1 + 0x54);
    local_44 = (undefined4 *)0x0;
    local_40 = (undefined4 *)0x0;
    local_48 = (undefined4 *)0x0;
    local_54[0] = 0;
    local_54[1] = 0;
    local_4c = (undefined2 **)0x0;
    fn_006c9c84(param_1,2,&local_48,0xffffffff,1);
    iVar4 = (int)local_44 - (int)local_48;
    uVar8 = fn_005f65d4();
    fn_00169f1c(uVar8,iVar4 >> 1);
    fn_0079e764(param_1 + 0x54,(int)local_48 + extraout_r1 * 2);
    puVar5 = local_48;
    if (local_44 < local_48) {
      do {
        puVar5 = (undefined4 *)((int)puVar5 + 2);
      } while (puVar5 != local_44);
    }
    fn_001008c4(local_48,(int)local_40 - (int)local_48 >> 1,0);
  }
  fn_0079e608(param_1 + 0x60);
  fn_003d5fc8(param_1,param_1 + 0x60);
  fn_00107aac(uVar3);
  return;
LAB_003d543c:
  iVar9 = fn_00163868((int)local_44 - (int)local_48 >> 1);
  fn_0066173c((int)*(short *)(*(int *)(param_1 + 0x24) +
                              *(short *)((int)local_48 + iVar9 * 2) * 0x40));
  iVar10 = fn_003634ec();
  iVar10 = iVar10 + iVar4;
  if (iVar10 < 5) {
    puVar13 = *(undefined2 **)(param_1 + 0x58);
    if (puVar13 == *(undefined2 **)(param_1 + 0x5c)) {
      fn_0079e460(param_1 + 0x54);
      puVar11 = local_38;
    }
    else {
      *(undefined2 **)(param_1 + 0x58) = puVar13 + 1;
      puVar11 = local_38;
      if (puVar13 != (undefined2 *)0x0) {
        *puVar13 = *(undefined2 *)((int)local_48 + iVar9 * 2);
      }
    }
  }
  else {
    iVar10 = iVar4;
    if (local_38 == local_34) {
      fn_0079e460(&local_3c);
      puVar11 = local_38;
    }
    else {
      puVar11 = local_38 + 1;
      if (local_38 != (undefined2 *)0x0) {
        *local_38 = *(undefined2 *)((int)local_48 + iVar9 * 2);
      }
    }
  }
  local_38 = puVar11;
  puVar5 = local_48;
  if (local_44 < local_48) {
    do {
      puVar5 = (undefined4 *)((int)puVar5 + 2);
    } while (puVar5 != local_44);
  }
  fn_001008c4(local_48,(int)local_40 - (int)local_48 >> 1,0);
  iVar4 = iVar10;
  if (3 < iVar10) goto LAB_003d5550;
  goto LAB_003d53c8;
}


