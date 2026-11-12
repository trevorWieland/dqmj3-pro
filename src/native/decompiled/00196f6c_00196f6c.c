#include "00196f6c_00196f6c.h"



undefined4
fn_00196f6c(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5,undefined1 *param_6
            )

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  uint local_a8;
  int *local_a4;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90;
  int *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  int *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  int *local_2c;
  
  if (99 < *(int *)(param_1 + 0x90)) {
    fn_0019813c(param_1,(char *)&DAT_00197330);
    return 0;
  }
  iVar1 = param_2[6];
  bVar13 = iVar1 < 0;
  if (iVar1 < 1) {
    if (bVar13) {
      iVar1 = -iVar1;
    }
    if (bVar13 && param_3 < iVar1) goto LAB_00196fb8;
  }
  else if (iVar1 != param_3) {
LAB_00196fb8:
    fn_0019813c(param_1,(char *)&DAT_00197348);
    return 0;
  }
  if (param_2[8] != 0) {
    iVar1 = 0;
    while( true ) {
      iVar11 = param_3;
      if (iVar1 < param_3) {
        iVar11 = param_2[8];
      }
      if (iVar11 <= iVar1) break;
      uVar8 = *(uint *)(param_2[7] + iVar1 * 4);
      if ((uVar8 != 0xffffffff) &&
         ((*(uint *)(*(int *)(param_1 + 0x18) + (param_4 + iVar1) * 8) & uVar8) == 0)) {
        fn_001a1010(param_1,iVar1,uVar8,
                     *(undefined4 *)(*(int *)(param_1 + 0x18) + (param_4 + iVar1) * 8));
        return 0;
      }
      iVar1 = iVar1 + 1;
    }
  }
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x30) + 10) {
    local_a4 = (int *)0x0;
    local_a8 = 0x1000001;
    fn_0019d320(param_1 + 0x18,*(int *)(param_1 + 0x1c) + 0x14,&local_a8);
    if (((local_a8 & 0x8000000) != 0) &&
       (iVar1 = local_a4[1], local_a4[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_a4 + 8))();
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = param_4 + param_3;
  iVar11 = *(int *)(param_1 + 0x34);
  local_58 = 0x1000001;
  local_54 = (int *)0x0;
  local_30 = 0x8000200;
  local_34 = 0;
  local_2c = param_2;
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590(0,&local_30);
  }
  param_2[1] = param_2[1] + 1;
  fn_0019e864(&local_58);
  if (((local_30 & 0x8000000) != 0) &&
     (iVar5 = local_2c[1], local_2c[1] = iVar5 + -1, iVar5 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  local_50 = 0;
  local_4c = 0;
  local_44 = iVar1 - iVar11;
  local_48 = param_4 - *(int *)(param_1 + 0x34);
  local_3c = 1;
  if (*(int *)(param_1 + 100) == *(int *)(param_1 + 0x68)) {
    local_94 = 0;
    local_80 = 0;
    local_98 = 0;
    local_8c = (int *)0x0;
    local_88 = 0;
    local_84 = 0;
    local_7c = 0;
    iVar5 = *(int *)(param_1 + 0x68) << 1;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_90 = 0x1000001;
    fn_0019d408(param_1 + 0x6c,iVar5,&local_98);
    if (((local_90 & 0x8000000) != 0) &&
       (iVar6 = local_8c[1], local_8c[1] = iVar6 + -1, iVar6 + -1 == 0)) {
      (**(code **)(*local_8c + 8))();
    }
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
    *(int *)(param_1 + 0x68) = iVar5;
  }
  puVar10 = (undefined4 *)(*(int *)(param_1 + 0x60) + *(int *)(param_1 + 100) * 0x30);
  *(undefined4 **)(param_1 + 0x84) = puVar10;
  *puVar10 = local_60;
  puVar10[1] = local_5c;
  fn_0019e864(puVar10 + 2,&local_58);
  puVar10[4] = local_50;
  puVar10[5] = local_4c;
  puVar10[6] = local_48;
  puVar10[7] = local_44;
  puVar10[8] = local_40;
  puVar10[9] = local_3c;
  puVar10[10] = local_38;
  puVar10[0xb] = local_34;
  iVar5 = 0;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  *(int *)(param_1 + 0x34) = param_4;
  iVar6 = param_2[0xb];
  if (0 < iVar6) {
    do {
      iVar2 = param_2[10];
      iVar3 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar3 + 1;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar3 * 8,iVar2 + iVar5 * 8);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  if (param_2[0xd] == 0x8010000) {
    iVar5 = param_2[0xe];
    uVar9 = *(uint *)(iVar5 + 0x10);
    puVar4 = (uint *)(*(int *)(param_1 + 0x18) + param_4 * 8);
    uVar12 = *puVar4;
    piVar7 = (int *)puVar4[1];
    puVar4[1] = uVar9;
    uVar8 = *(uint *)(iVar5 + 0xc);
    *puVar4 = uVar8;
    if ((uVar8 & 0x8000000) != 0) {
      *(int *)(uVar9 + 4) = *(int *)(uVar9 + 4) + 1;
    }
    if (((uVar12 & 0x8000000) != 0) && (iVar5 = piVar7[1], piVar7[1] = iVar5 + -1, iVar5 + -1 == 0))
    {
      (**(code **)(*piVar7 + 8))(piVar7);
    }
  }
  iVar5 = (*(code *)param_2[0xf])(param_1);
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
  *param_6 = 0;
  if (iVar5 == -0x29a) {
    *param_6 = 1;
  }
  else {
    if (iVar5 < 0) {
      *(int *)(param_1 + 0x30) = iVar1;
      *(int *)(param_1 + 0x34) = iVar11;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
      iVar1 = *(int *)(param_1 + 0x84);
      uVar8 = *(uint *)(iVar1 + 8);
      piVar7 = *(int **)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 8) = 0x1000001;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      if (((uVar8 & 0x8000000) != 0) && (iVar1 = piVar7[1], piVar7[1] = iVar1 + -1, iVar1 + -1 == 0)
         ) {
        (**(code **)(*piVar7 + 8))(piVar7);
      }
      if (*(int *)(param_1 + 100) == 0) {
        *(undefined4 *)(param_1 + 0x84) = 0;
      }
      else {
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 100) * 0x30 + -0x30 + *(int *)(param_1 + 0x60)
        ;
      }
      fn_00198230(param_1,param_1 + 0x40);
      if ((local_58 & 0x8000000) == 0) {
        return 0;
      }
      iVar1 = local_54[1];
      local_54[1] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*local_54 + 8))();
        return 0;
      }
      return 0;
    }
    if (iVar5 == 0) {
      fn_0019e864(param_5,&DAT_008c06e8);
      goto LAB_001974f8;
    }
  }
  fn_0019e864(param_5,*(int *)(param_1 + 0x30) * 8 + -8 + *(int *)(param_1 + 0x18));
  puVar4 = (uint *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x30) * 8 + -8);
  uVar8 = *puVar4;
  piVar7 = (int *)puVar4[1];
  puVar4[1] = 0;
  *puVar4 = 0x1000001;
  if (((uVar8 & 0x8000000) != 0) && (iVar5 = piVar7[1], piVar7[1] = iVar5 + -1, iVar5 + -1 == 0)) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
LAB_001974f8:
  *(int *)(param_1 + 0x30) = iVar1;
  *(int *)(param_1 + 0x34) = iVar11;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  iVar1 = *(int *)(param_1 + 0x84);
  uVar8 = *(uint *)(iVar1 + 8);
  piVar7 = *(int **)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 8) = 0x1000001;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  if (((uVar8 & 0x8000000) != 0) && (iVar1 = piVar7[1], piVar7[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  if (*(int *)(param_1 + 100) == 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  else {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 100) * 0x30 + -0x30 + *(int *)(param_1 + 0x60);
  }
  if (((local_58 & 0x8000000) != 0) &&
     (iVar1 = local_54[1], local_54[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_54 + 8))();
  }
  return 1;
}


