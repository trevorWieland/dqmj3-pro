#include "003d2db4_003d31b0.h"



void fn_003d31b0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int iStack_34;
  undefined4 local_30;
  int local_2c;
  uint uStack_28;
  
  puVar2 = &local_48;
  puVar12 = *(undefined4 **)(param_1 + 4);
  puVar10 = *(undefined4 **)(param_1 + 8);
  puVar11 = puVar12;
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  if (puVar12 != puVar10) {
    do {
      (**(code **)*puVar11)(puVar11);
      puVar11 = puVar11 + 2;
    } while (puVar11 != puVar10);
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) - ((int)puVar10 - (int)puVar12 & 0xfffffff8U);
  }
  piVar9 = (int *)(param_1 + 4);
  local_44 = param_4;
  if (0x1fffffff < param_4) {
    local_48 = 0x1fffffff;
    fn_002ff628(8,&DAT_008c761a,&DAT_008c761a,param_4);
  }
  if ((uint)(*(int *)(param_1 + 0xc) - *piVar9 >> 3) < local_44) {
    uVar13 = *(int *)(param_1 + 8) - *piVar9 >> 3;
    local_48 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
    if (local_48 < uVar13 + 0x20) {
      local_48 = uVar13 + 0x20;
    }
    if (local_48 <= local_44) {
      puVar2 = &local_44;
    }
    uVar13 = *puVar2;
    puVar10 = (undefined4 *)fn_00100fc6(uVar13 << 3,0);
    iVar8 = *(int *)(param_1 + 8);
    puVar11 = puVar10;
    for (iVar6 = *piVar9; iVar6 != iVar8; iVar6 = iVar6 + 8) {
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = &DAT_0083af1c;
        puVar11[1] = *(undefined4 *)(iVar6 + 4);
      }
      puVar11 = puVar11 + 2;
    }
    puVar12 = *(undefined4 **)(param_1 + 8);
    for (puVar11 = (undefined4 *)*piVar9; puVar11 != puVar12; puVar11 = puVar11 + 2) {
      (**(code **)*puVar11)(puVar11);
    }
    fn_001008c4(*piVar9,*(int *)(param_1 + 0xc) - *piVar9 >> 3,0);
    iVar6 = *piVar9;
    *piVar9 = (int)puVar10;
    *(uint *)(param_1 + 8) = (*(int *)(param_1 + 8) - iVar6 & 0xfffffff8U) + (int)puVar10;
    *(undefined4 **)(param_1 + 0xc) = puVar10 + uVar13 * 2;
  }
  uVar13 = 0;
  if (param_4 != 0) {
    do {
      uVar3 = fn_001828f0(local_30,*(undefined4 *)(local_2c + uVar13 * 4));
      piVar9 = (int *)(param_1 + 4);
      iVar6 = fn_004233e8(&local_48,uVar3);
      puVar11 = *(undefined4 **)(param_1 + 8);
      if (puVar11 == *(undefined4 **)(param_1 + 0xc)) {
        uVar1 = (int)puVar11 - *piVar9 >> 3;
        if (uVar1 < (uint)((int)*(undefined4 **)(param_1 + 0xc) - *piVar9 >> 3)) {
          *(undefined4 **)(param_1 + 8) = puVar11 + 2;
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = &DAT_0083af1c;
            puVar11[1] = puVar11[-1];
          }
          puVar12 = puVar11 + -2;
          puVar10 = puVar11;
          if (puVar11 < puVar12) {
            iVar7 = 1;
            iVar8 = (int)puVar12 - (int)puVar11 >> 3;
            if (1 < iVar8 + 1) {
              do {
                iVar7 = iVar7 + 1;
                puVar10[-1] = puVar12[-1];
                puVar12 = puVar12 + -2;
                puVar10 = puVar10 + -2;
              } while (iVar7 < iVar8 + 1);
            }
          }
          else {
            for (; puVar11 != puVar12; puVar12 = puVar12 + -2) {
              puVar10[-1] = puVar12[-1];
              puVar10 = puVar10 + -2;
            }
          }
          puVar11[1] = *(undefined4 *)(iVar6 + 4);
        }
        else {
          local_40 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (local_40 < uVar1 + 0x20) {
            local_40 = uVar1 + 0x20;
          }
          puVar4 = (undefined4 *)fn_00100fc6(local_40 << 3,0);
          puVar12 = puVar4;
          for (puVar10 = (undefined4 *)*piVar9; puVar10 != puVar11; puVar10 = puVar10 + 2) {
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = &DAT_0083af1c;
              puVar12[1] = puVar10[1];
            }
            puVar12 = puVar12 + 2;
          }
          puVar10 = (undefined4 *)(((int)puVar11 - *piVar9 & 0xfffffff8U) + (int)puVar4);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = &DAT_0083af1c;
            puVar10[1] = *(undefined4 *)(iVar6 + 4);
          }
          puVar12 = *(undefined4 **)(param_1 + 8);
          puVar10 = (undefined4 *)(((int)puVar11 - *piVar9 & 0xfffffff8U) + (int)puVar4);
          for (; puVar11 != puVar12; puVar11 = puVar11 + 2) {
            puVar5 = puVar10 + 2;
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = &DAT_0083af1c;
              puVar10[3] = puVar11[1];
            }
            puVar10 = puVar5;
          }
          puVar11 = (undefined4 *)*piVar9;
          puVar10 = *(undefined4 **)(param_1 + 8);
          local_3c = (int)puVar10 - (int)puVar11 >> 3;
          for (; puVar11 != puVar10; puVar11 = puVar11 + 2) {
            (**(code **)*puVar11)(puVar11);
          }
          fn_001008c4(*piVar9,*(int *)(param_1 + 0xc) - *piVar9 >> 3,0);
          *(undefined4 **)(param_1 + 0xc) = puVar4 + local_40 * 2;
          *(undefined4 **)(param_1 + 8) = puVar4 + local_3c * 2 + 2;
          *piVar9 = (int)puVar4;
        }
      }
      else {
        *(undefined4 **)(param_1 + 8) = puVar11 + 2;
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = &DAT_0083af1c;
          puVar11[1] = *(undefined4 *)(iVar6 + 4);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_4);
  }
  uVar13 = 0;
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3 != 0) {
    do {
      fn_00423200(*(int *)(param_1 + 4) + uVar13 * 8,0);
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3));
  }
  return;
}



undefined1 * fn_003d308c(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined2 local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  int local_20 [2];
  
  if (param_3 == 0) {
    puVar3 = (undefined1 *)fn_00423200(*(int *)(param_1 + 4) + param_2 * 8,0);
    return puVar3;
  }
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
  fn_0020bbc4(auStack_28,uVar1);
  iVar2 = fn_006c0010(auStack_24);
  pcVar4 = (char *)(iVar2 + param_4 * 6);
  if (*pcVar4 == '\0') {
    fn_00423200(*(int *)(param_1 + 4) + param_2 * 8,0);
  }
  else {
    fn_006bfda8(auStack_24);
    iVar2 = fn_002429d0();
    local_2c[0] = *(undefined1 *)(iVar2 + param_4);
    local_20[0] = (int)pcVar4[1];
    fn_006a82f4(local_30,local_2c,local_20);
    local_38 = 1;
    local_37 = local_30[0];
    local_36 = *(undefined2 *)(pcVar4 + 2);
    local_34 = *(undefined2 *)(pcVar4 + 4);
    fn_00423218(*(int *)(param_1 + 4) + param_2 * 8,&local_38);
    fn_00423200(*(int *)(param_1 + 4) + param_2 * 8,1);
  }
  return auStack_28;
}



undefined1 * fn_003d2fa4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined2 local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  int local_20 [2];
  
  fn_0020bbc4(auStack_28,param_3);
  iVar1 = fn_006c0010(auStack_24);
  pcVar2 = (char *)(iVar1 + param_4 * 6);
  if (*pcVar2 == '\0') {
    fn_00423200(*(int *)(param_1 + 4) + param_2 * 8,0);
  }
  else {
    fn_006bfda8(auStack_24);
    iVar1 = fn_002429d0();
    local_2c[0] = *(undefined1 *)(iVar1 + param_4);
    local_20[0] = (int)pcVar2[1];
    fn_006a82f4(local_30,local_2c,local_20);
    local_38 = 1;
    local_37 = local_30[0];
    local_36 = *(undefined2 *)(pcVar2 + 2);
    local_34 = *(undefined2 *)(pcVar2 + 4);
    fn_00423218(*(int *)(param_1 + 4) + param_2 * 8,&local_38);
    fn_00423200(*(int *)(param_1 + 4) + param_2 * 8,1);
  }
  return auStack_28;
}



void fn_003d2f50(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3 != 0) {
    do {
      fn_00423200(*(int *)(param_1 + 4) + uVar1 * 8,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3));
  }
  return;
}



undefined4 * fn_003d2db4(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint local_20;
  uint local_1c [2];
  
  *param_1 = &DAT_00831328;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = param_2;
  uVar7 = *(uint *)(param_2 + 0xc);
  uVar9 = *(uint *)(param_2 + 0x10);
  if (uVar7 != uVar9) {
    uVar1 = uVar7;
    if (uVar9 <= uVar7) {
      do {
        uVar1 = uVar1 + 2;
      } while (uVar1 != uVar9);
    }
    *(uint *)(param_2 + 0x10) = uVar9 - (uVar9 - uVar7 & 0xfffffffe);
  }
  iVar2 = param_1[1];
  puVar10 = (uint *)(iVar2 + 0xc);
  local_20 = 0x3ff;
  if ((uint)((int)(*(int *)(iVar2 + 0x14) - *puVar10) >> 1) < 0x3ff) {
    uVar7 = (int)(*(int *)(iVar2 + 0x10) - *puVar10) >> 1;
    local_1c[0] = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
    if (local_1c[0] < uVar7 + 0x20) {
      local_1c[0] = uVar7 + 0x20;
    }
    puVar3 = local_1c;
    if (local_1c[0] < 0x400) {
      puVar3 = &local_20;
    }
    uVar7 = *puVar3;
    puVar4 = (undefined2 *)fn_00100fc6(uVar7 << 1,0);
    puVar8 = *(undefined2 **)(iVar2 + 0x10);
    puVar5 = puVar4;
    for (puVar6 = (undefined2 *)*puVar10; puVar6 != puVar8; puVar6 = puVar6 + 1) {
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = *puVar6;
      }
      puVar5 = puVar5 + 1;
    }
    uVar1 = *puVar10;
    uVar9 = uVar1;
    if (*(uint *)(iVar2 + 0x10) < uVar1) {
      do {
        uVar9 = uVar9 + 2;
      } while (uVar9 != *(uint *)(iVar2 + 0x10));
    }
    fn_001008c4(uVar1,(int)(*(int *)(iVar2 + 0x14) - uVar1) >> 1,0);
    uVar9 = *puVar10;
    *(undefined2 **)(iVar2 + 0xc) = puVar4;
    *(int *)(iVar2 + 0x10) = (*(int *)(iVar2 + 0x10) - uVar9 & 0xfffffffe) + (int)puVar4;
    *(undefined2 **)(iVar2 + 0x14) = puVar4 + uVar7;
  }
  iVar2 = param_1[1];
  uVar7 = *(uint *)(iVar2 + 0xc);
  uVar9 = *(uint *)(iVar2 + 0x10);
  if (uVar7 != uVar9) {
    uVar1 = uVar7;
    if (uVar9 <= uVar7) {
      do {
        uVar1 = uVar1 + 2;
      } while (uVar1 != uVar9);
    }
    *(uint *)(iVar2 + 0x10) = uVar9 - (uVar9 - uVar7 & 0xfffffffe);
  }
  return param_1;
}


