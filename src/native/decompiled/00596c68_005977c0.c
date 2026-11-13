#include "00596c68_005977c0.h"



void fn_005977c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xec,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0059790c(iVar1,param_1);
  return;
}



undefined4 fn_005974c0(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_78;
  undefined4 *local_70;
  undefined1 auStack_64 [12];
  undefined4 local_58;
  undefined1 auStack_50 [32];
  uint local_30;
  uint local_2c [2];
  
  fn_00397774(&local_8c);
  local_8c = DAT_00892e74;
  local_88 = DAT_00892e78;
  local_58 = 1;
  puVar1 = (undefined4 *)fn_0022f750((char *)&DAT_00597798);
  uVar2 = fn_00100b58();
  puVar9 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar3 = local_70 + -3;
    iVar8 = *piVar3;
    if (iVar8 != 0) {
      if ((local_70 != &DAT_008f9cf4) &&
         ((iVar8 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar8 + -1, iVar8 == 0)))))) {
        fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
      }
      local_70 = &DAT_008f9cf4;
      goto LAB_00597710;
    }
    local_70[-1] = 0;
    puVar1 = local_70;
  }
  else {
    if ((1 < local_70[-3] + 1) || ((uint)local_70[-2] < uVar2)) {
LAB_00597564:
      uVar5 = local_70[-1];
      local_30 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (local_30 < uVar5 + 0x80) {
        local_30 = uVar5 + 0x80;
      }
      local_2c[0] = uVar2;
      puVar6 = &local_30;
      if (local_30 < uVar2) {
        puVar6 = local_2c;
      }
      uVar5 = *puVar6;
      if (0xfffffff1 < uVar5) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
      }
      if (uVar5 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar5);
      }
      if (uVar5 != 0) {
        puVar9 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        puVar7 = (undefined2 *)((int)puVar9 + uVar2 * 2 + 0xc);
        *puVar9 = 0;
        puVar9[1] = uVar5;
        puVar9[2] = uVar2;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
      }
      fn_00301a9c(puVar9 + 3,puVar1,uVar2 << 1);
      if (local_70 != &DAT_008f9cf4) {
        piVar3 = local_70 + -3;
        iVar8 = *piVar3;
        if ((iVar8 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar8 + -1, iVar8 == 0)))) {
          fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
        }
      }
      local_70 = puVar9 + 3;
      goto LAB_00597710;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar10 = puVar1 <= local_70;
      if (local_70 <= puVar1) {
        bVar10 = (undefined4 *)((int)local_70 + local_70[-1] * 2) <= puVar1;
      }
      if (!bVar10) goto LAB_00597564;
    }
    fn_001006ac(local_70,puVar1,uVar2);
    local_70[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_70 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_00597710:
  local_84 = fn_006c5b04(*(undefined4 *)(DAT_00897840 + 0x30));
  local_78 = local_84;
  uVar4 = fn_00397618(param_1,&local_8c);
  fn_00100414(auStack_50,&LAB_0059e0e0,8,4);
  iVar8 = fn_001588d4(auStack_64);
  iVar8 = fn_001588d4(iVar8 + -4);
  iVar8 = fn_001588d4(iVar8 + -4);
  fn_001588d4(iVar8 + -4);
  return uVar4;
}



undefined4 * fn_00597314(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  *param_1 = &DAT_00845698;
  fn_005970a8(param_1);
  uVar2 = param_1[2];
  param_1[2] = 0;
  uVar4 = param_1[3];
  param_1[3] = 0;
  iVar3 = param_1[4];
  param_1[4] = 0;
  uVar1 = uVar2;
  if (uVar4 < uVar2) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar4);
  }
  fn_001008c4(uVar2,(int)(iVar3 - uVar2) >> 2,0);
  uVar2 = param_1[2];
  uVar1 = uVar2;
  if ((uint)param_1[3] < uVar2) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != param_1[3]);
  }
  fn_001008c4(uVar2,(int)(param_1[4] - uVar2) >> 2,0);
  return param_1;
}



void fn_005970a8(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2 != 0) {
    do {
      uVar4 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
      if (uVar4 <= uVar6) {
        fn_002ff628(9,&DAT_008c765d,&DAT_008c765d,uVar6,uVar4);
      }
      piVar5 = *(int **)(*(int *)(param_1 + 8) + uVar6 * 4);
      if (piVar5 != (int *)0x0) {
        if ((undefined4 *)*piVar5 != &DAT_008f9cf4) {
          piVar1 = (undefined4 *)*piVar5 + -3;
          iVar2 = *piVar1;
          if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
            fn_001008c4(*piVar5 + -0xc,*(int *)(*piVar5 + -8) + 8,0);
          }
        }
        fn_002feef8(piVar5);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2));
  }
  uVar6 = *(uint *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  if (uVar6 != uVar4) {
    uVar3 = uVar6;
    if (uVar4 <= uVar6) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar4);
    }
    *(uint *)(param_1 + 0xc) = uVar4 - (uVar4 - uVar6 & 0xfffffffc);
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}



void fn_00596c68(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint local_34;
  uint uStack_30;
  int local_2c;
  uint *puStack_28;
  
  local_2c = param_1;
  puStack_28 = param_2;
  puVar1 = (uint *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = (uint)&DAT_008f9cf4;
    uVar2 = *param_2;
    piVar3 = (int *)(uVar2 - 0xc);
    if (*piVar3 == -1) {
      if ((puVar1 != param_2) && (uVar14 = *(uint *)(uVar2 - 4), uVar14 != 0)) {
        if (((DAT_008f9ce8 + 1U < 2) && (uVar14 <= DAT_008f9cec)) &&
           (((uVar2 == 0 || (uVar2 < 0x8f9cf4)) || ((int)&DAT_008f9cf4 + DAT_008f9cf0 * 2 <= uVar2))
           )) {
          fn_001006ac(&DAT_008f9cf4,uVar2,uVar14);
          *(uint *)(*puVar1 - 4) = uVar14;
          *(undefined2 *)(*puVar1 + uVar14 * 2) = 0;
        }
        else {
          local_34 = DAT_008f9cf0 + (DAT_008f9cf0 >> 1) + (DAT_008f9cf0 >> 3);
          if (local_34 < DAT_008f9cf0 + 0x80) {
            local_34 = DAT_008f9cf0 + 0x80;
          }
          puVar13 = &uStack_30;
          if (uVar14 <= local_34) {
            puVar13 = &local_34;
          }
          uStack_30 = uVar14;
          uVar5 = *puVar13;
          if (0xfffffff1 < uVar5) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
          }
          if (uVar5 < uVar14) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar14,uVar5);
          }
          if (uVar5 == 0) {
            puVar12 = &DAT_008f9ce8;
          }
          else {
            puVar12 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
            }
            *puVar12 = 0;
            puVar12[1] = uVar5;
            puVar12[2] = uVar14;
            puVar6 = (undefined2 *)((int)puVar12 + uVar14 * 2 + 0xc);
            if (puVar6 != (undefined2 *)0x0) {
              *puVar6 = 0;
            }
          }
          fn_00301a9c(puVar12 + 3,uVar2,uVar14 << 1);
          if ((undefined4 *)*puVar1 != &DAT_008f9cf4) {
            piVar3 = (undefined4 *)*puVar1 + -3;
            iVar11 = *piVar3;
            if ((iVar11 == -1) ||
               ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar11 + -1, iVar11 == 0)))) {
              fn_001008c4(*puVar1 - 0xc,*(int *)(*puVar1 - 8) + 8,0);
            }
          }
          *puVar1 = (uint)(puVar12 + 3);
        }
      }
    }
    else {
      if (piVar3 != &DAT_008f9ce8) {
        *piVar3 = *piVar3 + 1;
      }
      if ((undefined4 *)*puVar1 != &DAT_008f9cf4) {
        piVar3 = (undefined4 *)*puVar1 + -3;
        iVar11 = *piVar3;
        if ((iVar11 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar11 + -1, iVar11 == 0)))) {
          fn_001008c4(*puVar1 - 0xc,*(int *)(*puVar1 - 8) + 8,0);
        }
      }
      *puVar1 = *param_2;
    }
    *(char *)(puVar1 + 1) = (char)param_2[1];
    *(undefined1 *)((int)puVar1 + 5) = *(undefined1 *)((int)param_2 + 5);
    *(undefined1 *)((int)puVar1 + 6) = *(undefined1 *)((int)param_2 + 6);
    *(undefined1 *)((int)puVar1 + 7) = *(undefined1 *)((int)param_2 + 7);
  }
  iVar11 = local_2c;
  puVar13 = (uint *)(local_2c + 8);
  puVar12 = *(undefined4 **)(local_2c + 0xc);
  if (puVar12 != *(undefined4 **)(local_2c + 0x10)) {
    *(undefined4 **)(local_2c + 0xc) = puVar12 + 1;
    if (puVar12 != (undefined4 *)0x0) {
      *puVar12 = puVar1;
    }
    return;
  }
  uVar2 = (int)((int)puVar12 - *puVar13) >> 2;
  if (uVar2 < (uint)((int)((int)*(undefined4 **)(local_2c + 0x10) - *puVar13) >> 2)) {
    *(undefined4 **)(local_2c + 0xc) = puVar12 + 1;
    if (puVar12 != (undefined4 *)0x0) {
      *puVar12 = puVar12[-1];
    }
    puVar8 = puVar12 + -1;
    puVar9 = puVar12;
    if (puVar12 < puVar8) {
      if (0 < (int)puVar8 - (int)puVar12) {
        iVar11 = (int)puVar8 - (int)puVar12 >> 2;
        iVar7 = 0;
        do {
          iVar11 = iVar11 + -1;
          puVar12[iVar7 + -1] = puVar8[iVar7 + -1];
          iVar7 = iVar7 + -1;
        } while (iVar11 != 0);
      }
    }
    else {
      while (puVar12 != puVar8) {
        puVar8 = puVar8 + -1;
        puVar9[-1] = *puVar8;
        puVar9 = puVar9 + -1;
      }
    }
    *puVar12 = puVar1;
    return;
  }
  uVar14 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
  if (uVar14 < uVar2 + 0x20) {
    uVar14 = uVar2 + 0x20;
  }
  puVar4 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
  puVar9 = puVar4;
  for (puVar8 = (undefined4 *)*puVar13; puVar8 != puVar12; puVar8 = puVar8 + 1) {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = *puVar8;
    }
    puVar9 = puVar9 + 1;
  }
  puVar8 = (undefined4 *)(((int)puVar12 - *puVar13 & 0xfffffffc) + (int)puVar4);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = puVar1;
  }
  puVar9 = *(undefined4 **)(iVar11 + 0xc);
  puVar8 = (undefined4 *)(((int)puVar12 - *puVar13 & 0xfffffffc) + (int)puVar4);
  for (; puVar12 != puVar9; puVar12 = puVar12 + 1) {
    puVar8 = puVar8 + 1;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar12;
    }
  }
  uVar5 = *puVar13;
  uVar10 = *(uint *)(iVar11 + 0xc);
  uVar2 = uVar5;
  if (uVar10 < uVar5) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != uVar10);
  }
  fn_001008c4(uVar5,(int)(*(int *)(iVar11 + 0x10) - uVar5) >> 2,0);
  *(undefined4 **)(iVar11 + 0x10) = puVar4 + uVar14;
  *(undefined4 **)(iVar11 + 0xc) = puVar4 + ((int)(uVar10 - uVar5) >> 2) + 1;
  *puVar13 = (uint)puVar4;
  return;
}


