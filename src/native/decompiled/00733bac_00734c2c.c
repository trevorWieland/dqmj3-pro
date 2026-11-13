#include "00733bac_00734c2c.h"



void fn_00734c2c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  
  piVar6 = (int *)*param_1;
  iVar2 = fn_00153d6c();
  iVar1 = DAT_008e3104;
  uVar4 = *(undefined4 *)(*piVar6 + iVar2 * 0x10 + 4);
  uVar3 = *(undefined4 *)(*piVar6 + iVar2 * 0x10 + 8);
  iVar2 = DAT_008bf790 - *(int *)(DAT_008e3104 + 4);
  *(int *)(DAT_008e3104 + 0xc) = iVar2;
  if (*(int *)(iVar1 + 0x14) != iVar2) {
    fn_001467fc();
  }
  if (*(int *)(iVar1 + 0x14) != *(int *)(iVar1 + 0xc)) {
    return;
  }
  puVar5 = (undefined1 *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x20) * 0x1c);
  *puVar5 = 1;
  *(undefined4 *)(puVar5 + 4) = uVar3;
  *(undefined4 *)(puVar5 + 8) = uVar4;
  *(uint *)(puVar5 + 0xc) = *(uint *)(puVar5 + 0xc) | 6;
  fn_00150284();
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  if (((DAT_008e3108 == iVar1) && (DAT_008e307a != '\0')) && (DAT_008e3079 == '\0')) {
    DAT_008e3079 = '\x01';
    fn_0016720c();
  }
  fn_00150294();
  return;
}



undefined4
fn_00734594(int param_1,ushort *param_2,uint param_3,int *param_4,uint *param_5,undefined *param_6)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ushort uVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  uint local_b8;
  undefined *local_a8;
  undefined *local_a4;
  ushort auStack_98 [16];
  ushort local_78 [18];
  int local_54;
  uint local_4c;
  uint local_44;
  uint local_40;
  int local_34;
  ushort *local_30;
  uint uStack_2c;
  int *local_28;
  
  local_28 = param_4;
  uStack_2c = param_3;
  local_30 = param_2;
  local_34 = param_1;
  puVar8 = local_78;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_78[0xc] = 0;
  local_78[0xd] = 0;
  local_78[0xe] = 0;
  local_78[0xf] = 0;
  if (param_3 != 0) {
    puVar2 = param_2 + -1;
    if ((param_3 & 1) != 0) {
      puVar8[*param_2] = puVar8[*param_2] + 1;
      puVar2 = param_2;
    }
    for (uVar4 = param_3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar8[puVar2[1]] = puVar8[puVar2[1]] + 1;
      puVar2 = puVar2 + 2;
      puVar8[*puVar2] = puVar8[*puVar2] + 1;
    }
  }
  uVar4 = 0xf;
  do {
    if (puVar8[uVar4] != 0) break;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  local_b8 = *param_5;
  if (uVar4 < *param_5) {
    local_b8 = uVar4;
  }
  if (uVar4 == 0) {
    puVar5 = (undefined4 *)*local_28;
    *local_28 = (int)(puVar5 + 1);
    *puVar5 = 0x140;
    puVar5 = (undefined4 *)*local_28;
    *local_28 = (int)(puVar5 + 1);
    *puVar5 = 0x140;
    *param_5 = 1;
    return 0;
  }
  uVar3 = 1;
  if (1 < uVar4) {
    do {
      if (puVar8[uVar3] != 0) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  iVar7 = 1;
  uVar16 = 1;
  if (local_b8 < uVar3) {
    local_b8 = uVar3;
  }
  do {
    iVar7 = iVar7 * 2 - (uint)puVar8[uVar16];
    if (iVar7 < 0) {
      return 0xffffffff;
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 < 0x10);
  if ((0 < iVar7) && ((local_34 == 0 || (uVar4 != 1)))) {
    return 0xffffffff;
  }
  puVar2 = auStack_98;
  iVar7 = 7;
  auStack_98[1] = 0;
  do {
    uVar14 = puVar8[1];
    iVar7 = iVar7 + -1;
    puVar2[2] = uVar14 + puVar2[1];
    puVar8 = puVar8 + 2;
    puVar2[3] = uVar14 + puVar2[1] + *puVar8;
    puVar2 = puVar2 + 2;
  } while (iVar7 != 0);
  if (param_3 != 0) {
    sVar15 = 0;
    puVar8 = local_30;
    do {
      if (*puVar8 != 0) {
        *(short *)(param_6 + (uint)auStack_98[*puVar8] * 2) = sVar15;
        auStack_98[*puVar8] = auStack_98[*puVar8] + 1;
      }
      param_3 = param_3 - 1;
      puVar8 = puVar8 + 1;
      sVar15 = sVar15 + 1;
    } while (param_3 != 0);
  }
  if (local_34 == 0) {
    local_a8 = param_6;
    local_a4 = param_6;
    local_54 = 0x13;
  }
  else if (local_34 == 1) {
    local_a4 = &DAT_007f2956;
    local_a8 = &DAT_007f2994;
    local_54 = 0x100;
  }
  else {
    local_a4 = &DAT_007f2bd4;
    local_a8 = &DAT_007f2c14;
    local_54 = -1;
  }
  uVar17 = 0;
  local_44 = 1 << (local_b8 & 0xff);
  iVar7 = *local_28;
  iVar12 = 0;
  uVar16 = 0;
  local_40 = local_44 - 1;
  if (local_34 == 1) {
    if (local_44 < 0x354) goto LAB_0073489c;
  }
  else if ((local_34 != 2) || (local_44 < 0x250)) {
LAB_0073489c:
    local_4c = local_b8 & 0xff;
    uVar6 = local_b8;
    uVar11 = 0xffffffff;
    do {
      do {
        uVar9 = (uint)*(ushort *)(param_6 + iVar12 * 2);
        uVar13 = (uVar3 - uVar16) * 0x100 & 0xff00;
        if ((int)uVar9 < local_54) {
          uVar13 = uVar13 | uVar9 << 0x10;
        }
        else if (local_54 < (int)uVar9) {
          uVar13 = *(ushort *)(local_a8 + uVar9 * 2) & 0xff | uVar13 |
                   (uint)*(ushort *)(local_a4 + uVar9 * 2) << 0x10;
        }
        else {
          uVar13 = uVar13 | 0x60;
        }
        iVar1 = 1 << (uVar6 & 0xff);
        iVar10 = iVar1;
        do {
          iVar10 = iVar10 - (1 << (uVar3 - uVar16 & 0xff));
          *(uint *)(iVar7 + ((uVar17 >> (uVar16 & 0xff)) + iVar10) * 4) = uVar13;
        } while (iVar10 != 0);
        for (uVar13 = 1 << (uVar3 - 1 & 0xff); (uVar17 & uVar13) != 0; uVar13 = uVar13 >> 1) {
        }
        if (uVar13 != 0) {
          uVar17 = (uVar17 & uVar13 - 1) + uVar13;
        }
        if (uVar13 == 0) {
          uVar17 = 0;
        }
        iVar12 = iVar12 + 1;
        uVar14 = local_78[uVar3] - 1;
        local_78[uVar3] = uVar14;
        if (uVar14 == 0) {
          if (uVar3 == uVar4) {
            if (uVar17 != 0) {
              *(uint *)(iVar7 + uVar17 * 4) = (uVar3 - uVar16) * 0x100 & 0xff00 | 0x40;
            }
            *local_28 = *local_28 + local_44 * 4;
            *param_5 = local_b8;
            return 0;
          }
          uVar3 = (uint)local_30[*(ushort *)(param_6 + iVar12 * 2)];
        }
      } while ((uVar3 <= local_b8) || (uVar13 = uVar17 & local_40, uVar13 == uVar11));
      if (uVar16 == 0) {
        uVar16 = local_b8;
      }
      uVar6 = uVar3 - uVar16;
      iVar7 = iVar7 + iVar1 * 4;
      for (iVar1 = 1 << (uVar6 & 0xff);
          (uVar6 + uVar16 < uVar4 &&
          (iVar10 = uVar6 + uVar16, 0 < (int)(iVar1 - (uint)local_78[iVar10])));
          iVar1 = (iVar1 - (uint)local_78[iVar10]) * 2) {
        uVar6 = uVar6 + 1;
      }
      local_44 = local_44 + (1 << (uVar6 & 0xff));
      if (local_34 == 1) {
        if (0x353 < local_44) {
          return 1;
        }
      }
      else if ((local_34 == 2) && (0x24f < local_44)) {
        return 1;
      }
      *(char *)(*local_28 + uVar13 * 4) = (char)uVar6;
      *(char *)(*local_28 + uVar13 * 4 + 1) = (char)local_4c;
      *(short *)(*local_28 + uVar13 * 4 + 2) = (short)((iVar7 - *local_28 & 0x3ffffU) >> 2);
      uVar11 = uVar13;
    } while( true );
  }
  return 1;
}



int fn_00733bfc(int param_1,uint param_2,char *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    return -6;
  }
  if (param_1 == 0) {
    return -2;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(code **)(param_1 + 0x20) = fn_00734b34;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(code **)(param_1 + 0x24) = fn_00734b3c;
  }
  iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x1bcc);
  if (iVar1 == 0) {
    return -4;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  iVar3 = *(int *)(param_1 + 0x1c);
  uVar2 = 0xfffffffe;
  if (iVar3 == 0) {
LAB_00733cf0:
    iVar3 = -2;
  }
  else {
    if ((int)param_2 < 0) {
      iVar4 = 0;
      param_2 = -param_2;
LAB_00733cdc:
      if (param_2 != 0) goto LAB_00733ce4;
    }
    else {
      iVar4 = ((int)param_2 >> 4) + 1;
      if ((int)param_2 < 0x30) {
        param_2 = param_2 & 0xf;
        goto LAB_00733cdc;
      }
LAB_00733ce4:
      if (7 < param_2 - 8) goto LAB_00733cf0;
    }
    bVar5 = *(int *)(iVar3 + 0x34) != 0;
    if (bVar5) {
      uVar2 = *(uint *)(iVar3 + 0x24);
    }
    if (bVar5 && uVar2 != param_2) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(iVar3 + 0x34) = 0;
    }
    *(int *)(iVar3 + 8) = iVar4;
    *(uint *)(iVar3 + 0x24) = param_2;
    iVar3 = fn_00733d78(param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return iVar3;
}



void fn_00733bac(int param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = param_1 == 0;
  iVar1 = 0;
  if (!bVar2) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  bVar3 = iVar1 == 0;
  if (!bVar2 && !bVar3) {
    param_3 = *(code **)(param_1 + 0x24);
  }
  if ((bVar2 || bVar3) || param_3 == (code *)0x0) {
    iVar1 = -2;
  }
  if ((!bVar2 && !bVar3) && param_3 != (code *)0x0) {
    if (*(int *)(iVar1 + 0x34) != 0) {
      (*param_3)(*(undefined4 *)(param_1 + 0x28));
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


