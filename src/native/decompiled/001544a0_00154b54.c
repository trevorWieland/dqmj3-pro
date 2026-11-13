#include "001544a0_00154b54.h"



undefined4 fn_00154b54(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (-1 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 4);
    if ((iVar3 != *(int *)(param_1 + 8)) && (param_2 < (uint)(*(int *)(param_1 + 8) - iVar3 >> 2)))
    {
      piVar1 = *(int **)(iVar3 + param_2 * 4);
      if (piVar1 == (int *)0x0) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00154b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*piVar1 + 0xc))();
      return uVar2;
    }
  }
  return 0;
}



void fn_00154b30(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined4 fn_00154aec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00163e50(param_1,param_2,1);
  if (iVar1 != 0) {
    fn_001639b8(param_2);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return 0x21;
}



void fn_00154ac0(undefined4 param_1,undefined4 param_2)

{
  fn_001560b4(*(undefined4 *)(DAT_00897804 + 8),param_2);
  return;
}



bool fn_00154a6c(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float in_s0;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x10) + in_s0;
  uVar2 = fn_00176970();
  fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  bVar1 = fVar3 < fVar4;
  if (bVar1) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x10) = fVar4;
  return bVar1;
}



void fn_00154a58(int param_1)

{
  fn_0016397c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 0x14));
  return;
}



void fn_00154a48(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 200) = param_2;
  }
  return;
}



void fn_00154774(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  uint local_24;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    piVar10 = *(int **)(param_1 + 0x18);
    for (piVar8 = *(int **)(param_1 + 0x14); piVar8 != piVar10; piVar8 = piVar8 + 1) {
      if ((int *)*piVar8 != (int *)0x0) {
        (**(code **)(*(int *)*piVar8 + 4))();
      }
      *piVar8 = 0;
    }
    puVar9 = (undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
    if ((*(uint *)(param_1 + 0x1c) & 0xc0000000) == 0x40000000) {
      local_30 = (int *)*puVar9;
      uVar4 = *(uint *)(param_1 + 0x1c);
      local_24 = 0;
      uVar5 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
      if (uVar5 == 0) {
        local_2c = (undefined4 *)0x0;
      }
      else {
        local_2c = (undefined4 *)(**(code **)(*local_30 + 8))(local_30,uVar5 << 2,0x20);
      }
      uVar4 = uVar4 & 0xc0000000;
      local_24 = uVar5 & 0x3fffffff | uVar4;
      local_28 = local_2c;
      uVar7 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
      if (-1 < (int)uVar7) {
        if ((int)(uVar5 & 0x3fffffff) < (int)uVar7) {
          if (((local_30 == (int *)0x0) || (uVar4 != 0x40000000)) ||
             (puVar2 = (undefined4 *)(**(code **)(*local_30 + 8))(local_30,uVar7 << 2,0x20),
             puVar3 = puVar2, puVar1 = local_2c, puVar2 == (undefined4 *)0x0)) {
            uVar7 = local_24 & 0x3fffffff;
          }
          else {
            for (; puVar1 != local_28; puVar1 = puVar1 + 1) {
              if (puVar3 != (undefined4 *)0x0) {
                *puVar3 = *puVar1;
              }
              puVar3 = puVar3 + 1;
            }
            if (local_2c != (undefined4 *)0x0) {
              local_28 = local_2c;
              (**(code **)(*local_30 + 0xc))(local_30,local_2c);
            }
            local_24 = local_24 & 0xc0000000 | uVar7;
            local_2c = puVar2;
          }
        }
        local_28 = local_2c + uVar7;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x14);
      puVar2 = *(undefined4 **)(param_1 + 0x18);
      puVar1 = local_2c;
      if (puVar3 < puVar2) {
        uVar4 = (int)puVar2 - (int)puVar3;
        if (0 < (int)uVar4) {
          uVar5 = (uVar4 & 7) >> 2;
          if (uVar5 != 0) {
            *local_2c = *puVar3;
          }
          uVar7 = (uint)(uVar5 != 0);
          for (; (int)uVar5 < (int)uVar4 >> 2; uVar5 = uVar5 + 2) {
            local_2c[uVar7] = puVar3[uVar7];
            local_2c[uVar7 + 1] = puVar3[uVar7 + 1];
            uVar7 = uVar7 + 2;
          }
        }
      }
      else {
        for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
          *puVar1 = *puVar3;
          puVar1 = puVar1 + 1;
        }
      }
      if ((int **)puVar9 != &local_30) {
        puVar3 = *(undefined4 **)(param_1 + 0x14);
        uVar4 = *(uint *)(param_1 + 0x1c);
        piVar8 = (int *)*puVar9;
        *puVar9 = local_30;
        *(undefined4 **)(param_1 + 0x14) = local_2c;
        *(undefined4 **)(param_1 + 0x18) = local_28;
        *(uint *)(param_1 + 0x1c) = local_24;
        local_30 = piVar8;
        local_2c = puVar3;
        local_24 = uVar4;
      }
      local_28 = local_2c;
      puVar9 = (undefined4 *)0x0;
      if (local_30 != (int *)0x0) {
        puVar9 = local_2c;
      }
      if (local_30 != (int *)0x0 && puVar9 != (undefined4 *)0x0) {
        (**(code **)(*local_30 + 0xc))(local_30,local_2c);
      }
    }
    iVar6 = *(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x18) - iVar6 >> 2 < 1) {
      *(int *)(param_1 + 0x18) = iVar6;
    }
    else {
      *(int *)(param_1 + 0x18) = iVar6;
    }
  }
  return;
}



undefined4 * fn_0015467c(undefined4 *param_1,int param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &DAT_00850a9c;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0x1000001;
  param_1[0xf] = 0;
  param_1[0x10] = 0x1000001;
  param_1[0x11] = 0;
  param_1[0x12] = 0x1000001;
  param_1[0x13] = 0;
  param_1[0x14] = 0x1000001;
  param_1[0x15] = 0;
  param_1[0x16] = 0x1000001;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((int)param_1 + 0xa6) = 0;
  param_1[0x27] = 0xffffffff;
  param_1[0x25] = 0;
  param_1[0x28] = 0xffffffff;
  param_1[0x26] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = param_2;
  param_1[0x24] = 0;
  fn_0019e864(param_1 + 0x10,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x12,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x14,&DAT_008c06e8);
  param_1[0x21] = 0;
  param_1[3] = 0;
  param_1[0x23] = param_2;
  param_1[4] = 0;
  fn_0019e8c4(param_2 + 0x44,param_1);
  return param_1;
}



undefined4 fn_001544a0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_70;
  int *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  int *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  int *local_34;
  
  local_70 = 0x1000001;
  local_6c = (int *)0x0;
  fn_0019d320(param_1 + 0x18,param_3,&local_70);
  if (((local_70 & 0x8000000) != 0) &&
     (iVar1 = local_6c[1], local_6c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_6c + 8))();
  }
  *(undefined4 *)(param_1 + 0x68) = 4;
  local_64 = 0;
  local_50 = 0;
  local_68 = 0;
  local_5c = (int *)0x0;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_60 = 0x1000001;
  local_3c = 0;
  fn_0019d408(param_1 + 0x6c,*(undefined4 *)(param_1 + 0x68),&local_68);
  if ((local_60 & 0x8000000) != 0) {
    iVar1 = local_5c[1];
    local_5c[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)(*local_5c + 8))();
    }
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_2 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x8c);
    local_34 = (int *)fn_002fece8(0x2c);
    if (local_34 != (int *)0x0) {
      fn_0019b998(local_34,uVar2,0);
    }
    local_34[6] = 0;
    local_38 = 0xa000020;
    if (local_34 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    local_34[1] = local_34[1] + 1;
    fn_0019e864(param_1 + 0x38,&local_38);
    if ((local_38 & 0x8000000) != 0) {
      iVar1 = local_34[1];
      local_34[1] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*local_34 + 8))();
      }
    }
  }
  else {
    fn_0019e864(param_1 + 0x38,param_2 + 0x38);
    fn_0019e864(param_1 + 0x48,param_2 + 0x48);
    fn_0019e864(param_1 + 0x50,param_2 + 0x50);
  }
  fn_00158fd0(param_1);
  return 1;
}


