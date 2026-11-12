#include "004952a0_004955f0.h"



undefined4 fn_004955f0(int param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  uint *local_50 [2];
  uint *local_48;
  undefined1 *local_44;
  int local_40;
  int iStack_34;
  uint local_30;
  uint uStack_2c;
  undefined1 *local_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  uVar15 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  if (param_3 == 0) {
    param_3 = 0xf;
    do {
      puVar12 = (uint *)(param_3 | (*(byte *)(local_30 + 4) & 0xf) << 4);
      local_50[0] = puVar12;
      iVar2 = fn_00495d00(param_1,local_50);
      if (iVar2 == 0) {
        if (param_3 != 0) goto LAB_004956b4;
        break;
      }
      param_3 = param_3 - 1 & 0xff;
    } while (param_3 != 0);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    uVar4 = 0;
  }
  else {
    puVar12 = (uint *)((param_3 | (uint)*(byte *)(local_30 + 4) << 4) & 0xff);
LAB_004956b4:
    local_48 = puVar12;
    iVar2 = fn_00495d00(param_1,&local_48);
    if (iVar2 == 0) {
      puVar13 = *(uint **)(param_1 + 8);
      puVar9 = *(uint **)(param_1 + 0xc);
      uVar17 = (int)puVar9 - (int)puVar13 >> 3;
      puVar14 = puVar13;
      uVar16 = uVar17;
      while (uVar8 = uVar16, 0 < (int)uVar8) {
        uVar16 = (int)uVar8 / 2;
        if ((uint *)(uint)(byte)puVar14[uVar16 * 2] < puVar12) {
          puVar14 = puVar14 + uVar16 * 2 + 2;
          uVar16 = (uVar8 - uVar16) - 1;
        }
      }
      if ((puVar9 == puVar14) ||
         (local_44 = (undefined1 *)local_50, puVar12 < (uint *)(uint)(byte)*puVar14)) {
        local_40 = (int)puVar14 - (int)puVar13 >> 3;
        if ((puVar9 == *(uint **)(param_1 + 0x10)) || (puVar9 != puVar14)) {
          if (uVar17 < (uint)((int)*(uint **)(param_1 + 0x10) - (int)puVar13 >> 3)) {
            *(uint **)(param_1 + 0xc) = puVar9 + 2;
            if (puVar9 != (uint *)0x0) {
              *(byte *)puVar9 = (byte)puVar9[-2];
              puVar9[1] = puVar9[-1];
            }
            puVar13 = puVar9 + -2;
            iVar2 = (int)puVar13 - (int)puVar14;
            if (0 < iVar2 >> 3) {
              puVar10 = puVar9;
              if (iVar2 * 0x10000000 < 0) {
                puVar13 = puVar9 + -4;
                puVar10 = puVar9 + -2;
                *puVar10 = *puVar13;
                puVar9[-1] = puVar9[-3];
              }
              for (iVar2 = iVar2 >> 4; iVar2 != 0; iVar2 = iVar2 + -1) {
                uVar17 = puVar13[-1];
                puVar10[-2] = puVar13[-2];
                puVar10[-1] = uVar17;
                uVar17 = puVar13[-3];
                puVar10[-4] = puVar13[-4];
                puVar10[-3] = uVar17;
                puVar13 = puVar13 + -4;
                puVar10 = puVar10 + -4;
              }
            }
            *puVar14 = (uint)puVar12;
            puVar14[1] = local_30;
            local_44 = (undefined1 *)local_50;
          }
          else {
            uVar16 = uVar17 + (uVar17 >> 1) + (uVar17 >> 3);
            if (uVar16 < uVar17 + 0x20) {
              uVar16 = uVar17 + 0x20;
            }
            uVar17 = local_30;
            local_44 = (undefined1 *)local_50;
            pbVar5 = (byte *)fn_0015ece0(uVar16 << 3);
            pbVar6 = pbVar5;
            for (puVar9 = *(uint **)(param_1 + 8); puVar9 != puVar14; puVar9 = puVar9 + 2) {
              if (pbVar6 != (byte *)0x0) {
                *pbVar6 = (byte)*puVar9;
                *(uint *)(pbVar6 + 4) = puVar9[1];
              }
              pbVar6 = pbVar6 + 8;
            }
            pbVar6 = pbVar5 + ((int)puVar14 - *(int *)(param_1 + 8) & 0xfffffff8);
            if (pbVar6 != (byte *)0x0) {
              *(uint *)(pbVar6 + 4) = uVar17;
              *pbVar6 = (byte)puVar12;
            }
            puVar12 = *(uint **)(param_1 + 0xc);
            pbVar6 = pbVar5 + ((int)puVar14 - *(int *)(param_1 + 8) & 0xfffffff8);
            for (; puVar14 != puVar12; puVar14 = puVar14 + 2) {
              pbVar7 = pbVar6 + 8;
              if (pbVar7 != (byte *)0x0) {
                *pbVar7 = (byte)*puVar14;
                *(uint *)(pbVar6 + 0xc) = puVar14[1];
              }
              pbVar6 = pbVar7;
            }
            uVar8 = *(uint *)(param_1 + 8);
            uVar11 = *(uint *)(param_1 + 0xc);
            uVar17 = uVar11;
            if (uVar8 < uVar11) {
              uVar17 = (uVar11 - uVar8) * 0x10000000;
            }
            iVar2 = (int)(uVar11 - uVar8) >> 3;
            if (uVar8 < uVar11) {
              uVar17 = uVar17 >> 0x1f;
            }
            else {
              uVar17 = 0;
            }
            for (iVar1 = uVar17 + 1; iVar1 < iVar2 + 1; iVar1 = iVar1 + 2) {
            }
            if (uVar8 != 0) {
              if (*(code **)(uVar8 - 8) == (code *)0x0) {
                fn_0030233c();
              }
              else {
                (**(code **)(uVar8 - 8))();
              }
            }
            *(byte **)(param_1 + 0x10) = pbVar5 + uVar16 * 8;
            *(byte **)(param_1 + 0xc) = pbVar5 + iVar2 * 8 + 8;
            *(byte **)(param_1 + 8) = pbVar5;
          }
        }
        else {
          *(uint **)(param_1 + 0xc) = puVar9 + 2;
          local_44 = (undefined1 *)local_50;
          if (puVar9 != (uint *)0x0) {
            *(byte *)puVar9 = (byte)puVar12;
            puVar9[1] = local_30;
            local_44 = (undefined1 *)local_50;
          }
        }
        uVar15 = 1;
        puVar14 = (uint *)(*(int *)(param_1 + 8) + local_40 * 8);
      }
      local_44[4] = uVar15;
      if (local_28 != (undefined1 *)0x0) {
        *local_28 = (char)param_3;
      }
      local_50[0] = puVar14;
      (**(code **)(*piVar3 + 0xc))(piVar3);
      uVar4 = 1;
    }
    else {
      (**(code **)(*piVar3 + 0xc))(piVar3);
      uVar4 = 0;
    }
  }
  return uVar4;
}



void fn_004955c8(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_0085450c;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[4] = 0;
  return;
}



void fn_00495580(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_10 = param_4;
    iVar1 = fn_00169c08(&local_10,0xffff8000);
    if (iVar1 < 0) {
      fn_0015e294();
    }
    *(undefined4 *)(param_1 + 8) = local_10;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}



undefined4 * fn_00495394(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined4 *local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  
  *param_1 = &DAT_008544fc;
  local_40 = (undefined4 *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  puVar1 = (undefined4 *)fn_0015ece0(0xc);
  uVar2 = fn_0015ece0(0x18);
  puVar1[2] = uVar2;
  *puVar1 = local_40;
  puVar1[1] = 1;
  local_30 = puVar1[2];
  local_38 = local_30 + 0x18;
  *(int *)local_30 = local_30;
  *(int *)(local_30 + 4) = local_30;
  local_40 = puVar1;
  local_34 = local_38;
  puVar1 = (undefined4 *)fn_00488798(param_1 + 1);
  *puVar1 = &DAT_00853324;
  iVar3 = fn_004b4d90(puVar1 + 3,&local_40);
  puVar1 = (undefined4 *)fn_004745d8(iVar3 + 0x18,1);
  piVar6 = puVar1 + 10;
  *puVar1 = &PTR_LAB_00854110;
  puVar1[10] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  *(char *)((int)puVar1 + 0x41) = (char)puVar1;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  piVar4 = (int *)fn_0015ece0(0xc);
  iVar3 = fn_0015ece0(0x580);
  piVar4[2] = iVar3;
  *piVar4 = *piVar6;
  piVar4[1] = 0x20;
  *piVar6 = (int)piVar4;
  iVar3 = piVar4[2];
  puVar1[0xc] = iVar3;
  puVar1[0xd] = iVar3 + 0x580;
  puVar5 = (undefined1 *)puVar1[0xc];
  puVar1[0xc] = puVar5 + 0x2c;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  *puVar5 = 0;
  puVar1[0xe] = puVar5;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)(puVar1[0xe] + 8) = puVar1[0xe];
  *(undefined4 *)(puVar1[0xe] + 0xc) = puVar1[0xe];
  iVar3 = fn_00169c08(local_28,0xffff8000);
  if (iVar3 < 0) {
    fn_0015e294();
  }
  local_20[0] = local_28[0];
  uVar2 = fn_00785c48(piVar6,local_20);
  fn_00786a18(uVar2,&local_40);
  fn_004b4f20(&local_40);
  return puVar1 + -10;
}



void fn_004952a0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = (int *)fn_0074c2b8(param_1 + 4);
  iVar6 = *(int *)piVar1[4];
  piVar2 = (int *)piVar1[1];
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)piVar1[2];
    if (piVar2 == (int *)piVar1[3]) {
      if (*piVar1 == 0) {
        uVar5 = 0x20;
      }
      else {
        uVar3 = *(uint *)(*piVar1 + 4);
        uVar5 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
        if (uVar5 < uVar3 + 0x20) {
          uVar5 = uVar3 + 0x20;
        }
      }
      piVar2 = (int *)fn_0015ece0(0xc);
      iVar4 = fn_0015ece0(uVar5 * 0x18);
      piVar2[2] = iVar4;
      *piVar2 = *piVar1;
      piVar2[1] = uVar5;
      *piVar1 = (int)piVar2;
      piVar2 = (int *)piVar2[2];
      piVar1[2] = (int)piVar2;
      piVar1[3] = (int)(piVar2 + uVar5 * 6);
    }
    piVar1[2] = (int)(piVar2 + 6);
  }
  else {
    piVar1[1] = *piVar2;
  }
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = (int)&DAT_0085346c;
    piVar2[5] = param_4;
    piVar2[3] = param_2;
    piVar2[4] = param_3;
  }
  *piVar2 = iVar6;
  piVar2[1] = *(int *)(iVar6 + 4);
  **(undefined4 **)(iVar6 + 4) = piVar2;
  *(int **)(iVar6 + 4) = piVar2;
  piVar1[5] = piVar1[5] + 1;
  return;
}


