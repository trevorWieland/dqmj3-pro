#include "001f3688_001f3ab4.h"



uint fn_001f3ab4(int param_1,uint param_2)

{
  int iVar1;
  
  if ((((int)param_2 < 0) || (0x4f < param_2)) ||
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 == 0)) {
    return 0;
  }
  return (*(uint *)(iVar1 + 0x138) & 0x1ff) >> 8;
}



bool fn_001f3a6c(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = fn_006b873c(*(undefined4 *)(DAT_00897804 + 0x30));
  uVar1 = *(ushort *)(iVar2 + 8);
  iVar2 = fn_006b8718(*(undefined4 *)(DAT_00897804 + 0x30));
  return param_2 <= ((uint)*(ushort *)(iVar2 + 8) + (uint)uVar1 & 0xffff);
}



void fn_001f3a50(void)

{
  int iVar1;
  
  iVar1 = fn_006f756c(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x006bad3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(iVar1 + 0x58) + 0xc))();
  return;
}



void fn_001f38e8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_150 [4];
  undefined4 local_14c;
  undefined1 local_148;
  undefined1 local_147;
  undefined4 local_144;
  undefined2 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined2 local_12e;
  undefined1 local_12a;
  undefined1 local_123;
  undefined2 local_122;
  
  fn_001cff74(auStack_150);
  if (param_3 == 0) {
    local_14c = fn_002ea648(param_2);
  }
  else {
    fn_006f7a84(DAT_008977e0);
    local_14c = fn_006ab040();
  }
  local_12e = fn_002ea764(param_2);
  local_12a = fn_002ea7f0(param_2);
  local_144 = fn_002ea824(param_2);
  local_122 = fn_002ea730(param_2);
  local_130 = 1;
  local_138 = fn_00363c3c(param_2);
  iVar1 = fn_006afabc(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  local_148 = 0;
  if (iVar1 != 0) {
    iVar1 = fn_006f7a0c(DAT_008977e0);
    iVar1 = fn_006c3a70(*(undefined4 *)(iVar1 + 0x30));
    local_148 = 0;
    if (iVar1 != 0) {
      local_148 = 1;
    }
  }
  iVar1 = fn_006afb24(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  local_147 = 0;
  if (iVar1 != 0) {
    iVar1 = fn_006f7a0c(DAT_008977e0);
    iVar1 = fn_006c3a84(*(undefined4 *)(iVar1 + 0x30));
    local_147 = 0;
    if (iVar1 != 0) {
      local_147 = 1;
    }
  }
  local_140 = 5;
  local_123 = fn_006b6398(*(undefined4 *)(DAT_00897804 + 8));
  fn_003642cc(auStack_150,param_2);
  uVar2 = fn_00154ae0(DAT_008977e4);
  fn_001d1284(uVar2,auStack_150);
  fn_006952bc(DAT_008977e0);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x001f3910) */

void fn_001f38e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_150 [4];
  undefined4 uStack_14c;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined4 uStack_144;
  undefined2 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined2 uStack_12e;
  undefined1 uStack_12a;
  undefined1 uStack_123;
  undefined2 uStack_122;
  
  fn_001cff74(auStack_150);
  uStack_14c = fn_002ea648(param_2);
  uStack_12e = fn_002ea764(param_2);
  uStack_12a = fn_002ea7f0(param_2);
  uStack_144 = fn_002ea824(param_2);
  uStack_122 = fn_002ea730(param_2);
  uStack_130 = 1;
  uStack_138 = fn_00363c3c(param_2);
  iVar1 = fn_006afabc(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  uStack_148 = 0;
  if (iVar1 != 0) {
    iVar1 = fn_006f7a0c(DAT_008977e0);
    iVar1 = fn_006c3a70(*(undefined4 *)(iVar1 + 0x30));
    uStack_148 = 0;
    if (iVar1 != 0) {
      uStack_148 = 1;
    }
  }
  iVar1 = fn_006afb24(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  uStack_147 = 0;
  if (iVar1 != 0) {
    iVar1 = fn_006f7a0c(DAT_008977e0);
    iVar1 = fn_006c3a84(*(undefined4 *)(iVar1 + 0x30));
    uStack_147 = 0;
    if (iVar1 != 0) {
      uStack_147 = 1;
    }
  }
  uStack_140 = 5;
  uStack_123 = fn_006b6398(*(undefined4 *)(DAT_00897804 + 8));
  fn_003642cc(auStack_150,param_2);
  uVar2 = fn_00154ae0(DAT_008977e4);
  fn_001d1284(uVar2,auStack_150);
  fn_006952bc(DAT_008977e0);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



void fn_001f3898(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006abd58(param_1,param_3);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = fn_006f72b4(DAT_008977e0);
  fn_0021ed50(uVar2,param_2,iVar1 + 0x20,0);
  return;
}



void fn_001f3840(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  iVar13 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
  if (iVar13 == 0) {
    return;
  }
  iVar2 = fn_001747a8(param_4);
  if (iVar2 < 0) {
    return;
  }
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),iVar2,iVar2,param_5,param_5,unaff_r4,unaff_r5,
               unaff_r6);
  uVar8 = unaff_r5 & 0xffffff00;
  uVar9 = *(uint *)(iVar13 + 0x2f0);
  uVar3 = uVar9 & 0x3fffffff;
  if ((int)uVar3 <= (*(int *)(iVar13 + 0x2ec) - *(int *)(iVar13 + 0x2e8)) / 0x14) {
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar3 << 1;
    }
    if ((uVar9 & 0x3fffffff) < uVar3) {
      piVar4 = *(int **)(iVar13 + 0x2e4);
      if (piVar4 == (int *)0x0) {
        return;
      }
      if ((uVar9 & 0xc0000000) != 0x40000000) {
        return;
      }
      puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4,uVar3 * 0x14,0x20);
      if (puVar5 == (undefined4 *)0x0) {
        return;
      }
      iVar14 = 0;
      puVar10 = *(undefined4 **)(iVar13 + 0x2e8);
      puVar11 = *(undefined4 **)(iVar13 + 0x2ec);
      puVar6 = puVar5;
      if (puVar10 != puVar11) {
        do {
          if (puVar6 != (undefined4 *)0x0) {
            uVar15 = puVar10[1];
            uVar16 = puVar10[2];
            uVar17 = puVar10[3];
            uVar18 = puVar10[4];
            *puVar6 = *puVar10;
            puVar6[1] = uVar15;
            puVar6[2] = uVar16;
            puVar6[3] = uVar17;
            puVar6[4] = uVar18;
          }
          puVar10 = puVar10 + 5;
          puVar6 = puVar6 + 5;
        } while (puVar10 != puVar11);
        iVar14 = (*(int *)(iVar13 + 0x2ec) - *(int *)(iVar13 + 0x2e8)) / 0x14;
      }
      uVar9 = *(uint *)(iVar13 + 0x2e8);
      if (uVar9 != 0) {
        uVar12 = *(uint *)(iVar13 + 0x2ec);
        uVar1 = uVar9;
        if (uVar9 < uVar12) {
          iVar7 = 1;
          if (1 < (int)(uVar12 - uVar9) / 0x14 + 1) {
            do {
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)(uVar12 - uVar9) / 0x14 + 1);
          }
        }
        else {
          for (; uVar1 != uVar12; uVar1 = uVar1 + 0x14) {
          }
        }
        *(uint *)(iVar13 + 0x2ec) = uVar9;
        piVar4 = *(int **)(iVar13 + 0x2e4);
        (**(code **)(*piVar4 + 0xc))(piVar4,*(undefined4 *)(iVar13 + 0x2e8));
      }
      *(undefined4 **)(iVar13 + 0x2e8) = puVar5;
      *(undefined4 **)(iVar13 + 0x2ec) = puVar5 + iVar14 * 5;
      *(uint *)(iVar13 + 0x2f0) = *(uint *)(iVar13 + 0x2f0) & 0xc0000000 | uVar3;
    }
  }
  puVar5 = *(undefined4 **)(iVar13 + 0x2ec);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = param_3;
    puVar5[3] = param_5;
    puVar5[1] = iVar2;
    puVar5[2] = 0xffffffff;
    puVar5[4] = uVar8;
  }
  *(int *)(iVar13 + 0x2ec) = *(int *)(iVar13 + 0x2ec) + 0x14;
  return;
}



undefined4 fn_001f37f0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  if ((iVar1 == 0) || (iVar1 = fn_003358b4(iVar1,uVar2), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = fn_0015a130(param_1);
  return uVar2;
}



undefined4
fn_001f3688(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  uint in_fpscr;
  float in_s0;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_44;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  iVar1 = fn_006abd58(param_1,param_3);
  if (iVar1 != 0) {
    uVar2 = fn_006ad62c(param_1,param_2);
    fn_00191638(&local_38,uVar2);
    fn_00191638(&local_38,(float *)(iVar1 + 0x20));
    pfVar3 = (float *)fn_006ad62c(param_1,param_2);
    fVar6 = *(float *)(iVar1 + 0x20) - *pfVar3;
    fVar5 = *(float *)(iVar1 + 0x24) - pfVar3[1];
    fVar4 = *(float *)(iVar1 + 0x28) - pfVar3[2];
    if (param_5 == 0) {
      param_4 = (int)(SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) / in_s0);
    }
    else if (param_5 == 1) {
      VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    }
    local_44 = 0;
    uStack_3c = 0;
    local_40 = param_4;
    iVar1 = fn_00145b00(0x44,&DAT_00812c8c);
    if ((iVar1 != 0) && (iVar1 = fn_002f8f8c(iVar1,param_2,&local_38,&local_44), iVar1 != 0)) {
      uVar2 = fn_0015a130(param_1);
      fn_00168b28(&local_38);
      return uVar2;
    }
  }
  fn_00168b28(&local_38);
  return 0xffffffff;
}


