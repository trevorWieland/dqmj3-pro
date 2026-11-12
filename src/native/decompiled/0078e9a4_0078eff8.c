#include "0078e9a4_0078eff8.h"



void fn_0078eff8(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  puVar1 = (undefined4 *)param_1[1];
  uVar5 = (int)((int)puVar1 - *param_1) / 0x12;
  if ((uint)((int)(param_1[2] - *param_1) / 0x12) <= uVar5) {
    uVar9 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
    if (uVar9 < uVar5 + 0x20) {
      uVar9 = uVar5 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar9 * 0x12,0);
    puVar8 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2;
        puVar1 = (undefined4 *)((int)puVar1 + 0x12)) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar1;
        puVar8[1] = puVar1[1];
        puVar8[2] = puVar1[2];
        puVar8[3] = puVar1[3];
        *(undefined2 *)(puVar8 + 4) = *(undefined2 *)(puVar1 + 4);
      }
      puVar8 = (undefined4 *)((int)puVar8 + 0x12);
    }
    puVar1 = (undefined4 *)((int)puVar2 + ((int)((int)param_2 - *param_1) / 0x12) * 0x12);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1[2] = param_3[2];
      puVar1[3] = param_3[3];
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(param_3 + 4);
    }
    puVar8 = (undefined4 *)param_1[1];
    puVar1 = (undefined4 *)((int)puVar2 + ((int)((int)param_2 - *param_1) / 0x12) * 0x12);
    for (; param_2 != puVar8; param_2 = (undefined4 *)((int)param_2 + 0x12)) {
      puVar3 = (undefined4 *)((int)puVar1 + 0x12);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *param_2;
        *(undefined4 *)((int)puVar1 + 0x16) = param_2[1];
        *(undefined4 *)((int)puVar1 + 0x1a) = param_2[2];
        *(undefined4 *)((int)puVar1 + 0x1e) = param_2[3];
        *(undefined2 *)((int)puVar1 + 0x22) = *(undefined2 *)(param_2 + 4);
      }
      puVar1 = puVar3;
    }
    uVar4 = *param_1;
    uVar7 = param_1[1];
    uVar5 = uVar4;
    if (uVar7 < uVar4) {
      do {
        uVar5 = uVar5 + 0x12;
      } while (uVar5 != uVar7);
    }
    fn_001008c4(uVar4,(int)(param_1[2] - uVar4) / 0x12,0);
    *param_1 = (uint)puVar2;
    param_1[1] = (int)puVar2 + ((int)(uVar7 - uVar4) / 0x12) * 0x12 + 0x12;
    param_1[2] = (int)puVar2 + uVar9 * 0x12;
    return;
  }
  param_1[1] = (int)puVar1 + 0x12;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)puVar1 - 0x12);
    puVar1[1] = *(undefined4 *)((int)puVar1 - 0xe);
    puVar1[2] = *(undefined4 *)((int)puVar1 - 10);
    puVar1[3] = *(undefined4 *)((int)puVar1 - 6);
    *(undefined2 *)(puVar1 + 4) = *(undefined2 *)((int)puVar1 - 2);
  }
  puVar8 = (undefined4 *)((int)puVar1 - 0x12);
  if (param_2 < puVar8) {
    if (0 < (int)puVar8 - (int)param_2) {
      uVar5 = ((int)puVar8 - (int)param_2) / 0x12;
      puVar2 = puVar1;
      if ((uVar5 & 1) != 0) {
        puVar8 = puVar1 + -9;
        puVar2 = (undefined4 *)((int)puVar1 - 0x12);
        *puVar2 = *puVar8;
        *(undefined4 *)((int)puVar1 - 0xe) = puVar1[-8];
        *(undefined4 *)((int)puVar1 - 10) = puVar1[-7];
        *(undefined4 *)((int)puVar1 - 6) = puVar1[-6];
        *(undefined2 *)((int)puVar1 - 2) = *(undefined2 *)(puVar1 + -5);
      }
      for (iVar6 = (int)uVar5 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)((int)puVar2 - 0x12) = *(undefined4 *)((int)puVar8 + -0x12);
        *(undefined4 *)((int)puVar2 - 0xe) = *(undefined4 *)((int)puVar8 + -0xe);
        *(undefined4 *)((int)puVar2 - 10) = *(undefined4 *)((int)puVar8 + -10);
        *(undefined4 *)((int)puVar2 - 6) = *(undefined4 *)((int)puVar8 + -6);
        *(undefined2 *)((int)puVar2 - 2) = *(undefined2 *)((int)puVar8 + -2);
        puVar2[-9] = puVar8[-9];
        puVar2[-8] = puVar8[-8];
        puVar2[-7] = puVar8[-7];
        puVar2[-6] = puVar8[-6];
        *(undefined2 *)(puVar2 + -5) = *(undefined2 *)(puVar8 + -5);
        puVar2 = puVar2 + -9;
        puVar8 = puVar8 + -9;
      }
    }
  }
  else {
    while (param_2 != puVar8) {
      *(undefined4 *)((int)puVar1 - 0x12U) = *(undefined4 *)((int)puVar8 + -0x12);
      *(undefined4 *)((int)puVar1 - 0xe) = *(undefined4 *)((int)puVar8 + -0xe);
      *(undefined4 *)((int)puVar1 - 10) = *(undefined4 *)((int)puVar8 + -10);
      *(undefined4 *)((int)puVar1 - 6) = *(undefined4 *)((int)puVar8 + -6);
      *(undefined2 *)((int)puVar1 - 2) = *(undefined2 *)((int)puVar8 + -2);
      puVar1 = (undefined4 *)((int)puVar1 - 0x12U);
      puVar8 = (undefined4 *)((int)puVar8 + -0x12);
    }
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_3 + 4);
  return;
}



void fn_0078ef08(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 local_30;
  int local_2c;
  undefined1 auStack_28 [8];
  
  iVar5 = param_1[1];
  iVar6 = *param_1;
  iVar1 = iVar6;
  if (iVar6 != iVar5) {
    for (; iVar1 != iVar5; iVar1 = iVar1 + 0x28) {
      local_2c = *(int *)(iVar1 + 0x14);
      piVar4 = (int *)(iVar1 + 4);
      if (local_2c != 0) {
        local_30 = *(undefined4 *)(local_2c + 8);
        fn_00772324(auStack_28,piVar4,&local_30,&local_2c);
        iVar2 = *(int *)(iVar1 + 0x14);
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 8);
        *(int *)(iVar1 + 8) = iVar2;
        piVar3 = (int *)*piVar4;
        while (piVar3 != (int *)0x0) {
          *piVar4 = *piVar3;
          fn_001008c4(piVar3[2],piVar3[1],0);
          fn_001008c4(piVar3,1,0);
          piVar3 = (int *)*piVar4;
        }
      }
    }
    param_1[1] = param_1[1] + ((iVar5 - iVar6) / 0x28) * -0x28;
  }
  return;
}



void fn_0078e9a4(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined1 auStack_3c [8];
  int *piStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *local_28;
  
  if (param_3 != param_4) {
    iVar1 = ((int)param_4 - (int)param_3) / 0x28;
    puVar10 = (undefined4 *)param_1[1];
    local_50 = ((int)puVar10 - *param_1) / 0x28 + iVar1;
    piStack_34 = param_1;
    puStack_30 = param_2;
    puStack_2c = param_3;
    local_28 = param_4;
    if ((uint)((param_1[2] - *param_1) / 0x28) < local_50) {
      uVar11 = (param_1[1] - *param_1) / 0x28;
      local_4c = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
      if (local_4c < uVar11 + 0x20) {
        local_4c = uVar11 + 0x20;
      }
      puVar6 = &local_50;
      if (local_50 < local_4c) {
        puVar6 = &local_4c;
      }
      uVar11 = *puVar6;
      iVar2 = fn_00100fc6(uVar11 * 0x28,0);
      fn_007b5ae8(*param_1,param_2,iVar2,param_1);
      fn_007b56d0(param_3,local_28,iVar2 + (((int)param_2 - *param_1) / 0x28) * 0x28,param_1);
      fn_007b5ae8(param_2,param_1[1],iVar2 + (((int)param_2 - *param_1) / 0x28 + iVar1) * 0x28,
                   param_1);
      iVar5 = *param_1;
      iVar12 = param_1[1];
      local_40 = (iVar12 - iVar5) / 0x28;
      iVar3 = local_44;
      for (; iVar5 != iVar12; iVar5 = iVar5 + 0x28) {
        local_44 = *(int *)(iVar5 + 0x14);
        piVar7 = (int *)(iVar5 + 4);
        if (local_44 != 0) {
          local_48 = *(undefined4 *)(local_44 + 8);
          fn_00772324(auStack_3c,piVar7,&local_48,&local_44);
          iVar3 = *(int *)(iVar5 + 0x14);
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar5 + 8);
          *(int *)(iVar5 + 8) = iVar3;
          piVar4 = (int *)*piVar7;
          while (iVar3 = local_44, piVar4 != (int *)0x0) {
            *piVar7 = *piVar4;
            fn_001008c4(piVar4[2],piVar4[1],0);
            fn_001008c4(piVar4,1,0);
            piVar4 = (int *)*piVar7;
          }
        }
        local_44 = iVar3;
        iVar3 = local_44;
      }
      local_44 = iVar3;
      fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x28,0);
      *param_1 = iVar2;
      param_1[1] = iVar2 + local_40 * 0x28 + iVar1 * 0x28;
      param_1[2] = iVar2 + uVar11 * 0x28;
      return;
    }
    param_1[1] = (int)(puVar10 + iVar1 * 10);
    if (param_2 + iVar1 * 10 < puVar10) {
      fn_007b5ae8(puVar10 + iVar1 * -10,puVar10,puVar10,param_1);
      puVar9 = puVar10 + iVar1 * -10;
      puVar8 = local_28;
      while (local_28 = puVar8, param_2 != puVar9) {
        puVar8 = puVar10 + -9;
        puVar10[-10] = puVar9[-10];
        if (puVar8 != puVar9 + -9) {
          local_4c = puVar10[-5];
          local_50 = *(uint *)(local_4c + 8);
          fn_00772324(&local_48,puVar8,&local_50,&local_4c);
          iVar1 = fn_00772b6c(puVar8,*(undefined4 *)(puVar9[-5] + 4),puVar10[-5]);
          *(int *)(puVar10[-5] + 4) = iVar1;
          iVar5 = puVar10[-5];
          if (iVar1 == 0) {
            *(int *)(iVar5 + 8) = iVar5;
            *(undefined4 *)(puVar10[-5] + 0xc) = puVar10[-5];
          }
          else {
            do {
              iVar3 = iVar1;
              iVar1 = *(int *)(iVar3 + 8);
            } while (iVar1 != 0);
            *(int *)(iVar5 + 8) = iVar3;
            iVar1 = *(int *)(puVar10[-5] + 4);
            do {
              iVar5 = iVar1;
              iVar1 = *(int *)(iVar5 + 0xc);
            } while (iVar1 != 0);
            *(int *)(puVar10[-5] + 0xc) = iVar5;
          }
          puVar10[-4] = puVar9[-4];
        }
        puVar10[-2] = puVar9[-2];
        puVar10[-1] = puVar9[-1];
        puVar10 = puVar10 + -10;
        puVar9 = puVar9 + -10;
        puVar8 = local_28;
      }
      for (; param_3 != puVar8; param_3 = param_3 + 10) {
        puVar10 = param_2 + 1;
        *param_2 = *param_3;
        if (puVar10 != param_3 + 1) {
          local_4c = param_2[5];
          local_50 = *(uint *)(local_4c + 8);
          fn_00772324(&local_48,puVar10,&local_50,&local_4c);
          iVar1 = fn_00772b6c(puVar10,*(undefined4 *)(param_3[5] + 4),param_2[5]);
          *(int *)(param_2[5] + 4) = iVar1;
          iVar5 = param_2[5];
          if (iVar1 == 0) {
            *(int *)(iVar5 + 8) = iVar5;
            *(undefined4 *)(param_2[5] + 0xc) = param_2[5];
          }
          else {
            do {
              iVar3 = iVar1;
              iVar1 = *(int *)(iVar3 + 8);
            } while (iVar1 != 0);
            *(int *)(iVar5 + 8) = iVar3;
            iVar1 = *(int *)(param_2[5] + 4);
            do {
              iVar5 = iVar1;
              iVar1 = *(int *)(iVar5 + 0xc);
            } while (iVar1 != 0);
            *(int *)(param_2[5] + 0xc) = iVar5;
          }
          param_2[6] = param_3[6];
        }
        param_2[8] = param_3[8];
        param_2[9] = param_3[9];
        param_2 = param_2 + 10;
      }
    }
    else {
      puVar9 = param_3 + (((int)puVar10 - (int)param_2) / 0x28) * 10;
      fn_007b56d0(puVar9,param_4,puVar10,param_1);
      fn_007b5ae8(param_2,puVar10,param_2 + iVar1 * 10,param_1);
      if (param_3 != puVar9) {
        do {
          puVar10 = param_2 + 1;
          *param_2 = *param_3;
          if (puVar10 != param_3 + 1) {
            local_4c = param_2[5];
            local_50 = *(uint *)(local_4c + 8);
            fn_00772324(&local_48,puVar10,&local_50,&local_4c);
            iVar1 = fn_00772b6c(puVar10,*(undefined4 *)(param_3[5] + 4),param_2[5]);
            *(int *)(param_2[5] + 4) = iVar1;
            iVar5 = param_2[5];
            if (iVar1 == 0) {
              *(int *)(iVar5 + 8) = iVar5;
              *(undefined4 *)(param_2[5] + 0xc) = param_2[5];
            }
            else {
              do {
                iVar3 = iVar1;
                iVar1 = *(int *)(iVar3 + 8);
              } while (iVar1 != 0);
              *(int *)(iVar5 + 8) = iVar3;
              iVar1 = *(int *)(param_2[5] + 4);
              do {
                iVar5 = iVar1;
                iVar1 = *(int *)(iVar5 + 0xc);
              } while (iVar1 != 0);
              *(int *)(param_2[5] + 0xc) = iVar5;
            }
            param_2[6] = param_3[6];
          }
          puVar10 = param_3 + 10;
          param_2[8] = param_3[8];
          param_2[9] = param_3[9];
          param_2 = param_2 + 10;
          param_3 = puVar10;
        } while (puVar10 != puVar9);
        return;
      }
    }
  }
  return;
}


