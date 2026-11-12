#include "00199cb8_0019a308.h"



void fn_0019a308(int param_1)

{
  *(undefined1 *)(param_1 + 0x54) = 1;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  fn_0019a308(*(int *)(param_1 + 0x1c));
  return;
}



undefined4 fn_0019a208(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint local_18;
  int *local_14;
  
  local_18 = 0x1000001;
  local_14 = (int *)0x0;
  iVar1 = fn_001a1dc8(*(undefined4 *)(param_1 + 0x18),param_2,&local_18);
  if (iVar1 == 0) {
    if (((local_18 & 0x8000000) != 0) &&
       (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_14 + 8))();
    }
    return 0;
  }
  if (((uint)local_14 & 0x2000000) == 0) {
    fn_0019e864(*(int *)(param_1 + 0x2c) + ((uint)local_14 & 0xffffff) * 0x10 + 8,param_3);
  }
  else {
    fn_0019e864(*(int *)(param_1 + 0x20) + ((uint)local_14 & 0xffffff) * 0x10 + 8,param_3);
  }
  if (((local_18 & 0x8000000) != 0) &&
     (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_14 + 8))();
  }
  return 1;
}



undefined4
fn_00199cb8(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  short sVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  uint local_b8;
  int *local_b4;
  undefined4 local_b0;
  int local_ac;
  uint local_a8;
  int *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  int *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_44;
  uint local_40;
  int *local_3c;
  int local_38;
  int iStack_34;
  int *piStack_30;
  undefined4 local_2c;
  int iStack_28;
  
  local_44 = param_2[9];
  local_7c = *(int *)(local_44 + 0x3c);
  local_38 = *(int *)(local_44 + 0x1c) + param_5;
  iStack_34 = param_1;
  piStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  if (local_7c != param_4) {
    iVar10 = *(int *)(local_44 + 0x54);
    bVar12 = iVar10 == 0;
    iVar8 = 0;
    iVar5 = local_44;
    if (!bVar12) {
      iVar8 = local_7c - param_4;
      iVar5 = local_7c;
    }
    if (((bVar12 || iVar5 == param_4) || iVar8 < 0 != (!bVar12 && SBORROW4(iVar5,param_4))) ||
       (iVar10 < iVar5 - param_4)) {
      if ((*(char *)(local_44 + 0x21) == '\0') || (param_4 < local_7c)) {
        fn_0019813c(param_1,(char *)&DAT_0019a1e4);
        return 0;
      }
      local_ac = param_4 - local_7c;
      iVar8 = 0;
      if (0 < local_ac) {
        local_a8 = local_7c + param_5;
        do {
          iVar5 = local_a8 + iVar8;
          piVar4 = (int *)(param_1 + 0x24);
          puVar3 = (uint *)(*(int *)(param_1 + 0x18) + iVar5 * 8);
          if (*(uint *)(param_1 + 0x2c) <= *(uint *)(param_1 + 0x28)) {
            local_b8 = *(uint *)(param_1 + 0x28) << 1;
            if (local_b8 == 0) {
              local_b8 = 4;
            }
            iVar10 = fn_0018388c(*piVar4,*(uint *)(param_1 + 0x2c) << 3,local_b8 << 3);
            *piVar4 = iVar10;
            *(uint *)(param_1 + 0x2c) = local_b8;
          }
          puVar2 = (uint *)(*piVar4 + *(int *)(param_1 + 0x28) * 8);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          if (puVar2 != (uint *)0x0) {
            *puVar2 = *puVar3;
            uVar6 = puVar3[1];
            puVar2[1] = uVar6;
            if ((*puVar2 & 0x8000000) != 0) {
              *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
            }
          }
          fn_0019e864(*(int *)(param_1 + 0x18) + iVar5 * 8,&DAT_008c06e8);
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_ac);
      }
    }
    else {
      for (iVar8 = iVar10 - (iVar5 - param_4); iVar8 < iVar10; iVar8 = iVar8 + 1) {
        iVar5 = param_5 + param_4;
        param_4 = param_4 + 1;
        fn_0019e864(*(int *)(param_1 + 0x18) + iVar5 * 8,param_2[0xd] + iVar8 * 8);
      }
    }
  }
  if (param_2[6] == 0x8010000) {
    iVar8 = param_2[7];
    uVar6 = *(uint *)(iVar8 + 0x10);
    puVar3 = (uint *)(*(int *)(param_1 + 0x18) + param_5 * 8);
    uVar11 = *puVar3;
    piVar4 = (int *)puVar3[1];
    puVar3[1] = uVar6;
    uVar7 = *(uint *)(iVar8 + 0xc);
    *puVar3 = uVar7;
    if ((uVar7 & 0x8000000) != 0) {
      *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
    }
    if (((uVar11 & 0x8000000) != 0) && (iVar8 = piVar4[1], piVar4[1] = iVar8 + -1, iVar8 + -1 == 0))
    {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  if (param_6 == 0) {
    local_a8 = 0x1000001;
    local_a4 = (int *)0x0;
    local_84 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_98 = param_5 - *(int *)(param_1 + 0x34);
    local_90 = local_2c;
    local_94 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x34);
    local_8c = 1;
    local_88 = 0;
    if (*(int *)(param_1 + 100) == *(int *)(param_1 + 0x68)) {
      local_74 = 0;
      local_60 = 0;
      iVar8 = *(int *)(param_1 + 0x68) << 1;
      local_78 = 0;
      local_6c = (int *)0x0;
      local_68 = 0;
      local_64 = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_70 = 0x1000001;
      local_4c = 0;
      fn_0019d408(param_1 + 0x6c,iVar8,&local_78);
      if (((local_70 & 0x8000000) != 0) &&
         (iVar5 = local_6c[1], local_6c[1] = iVar5 + -1, iVar5 + -1 == 0)) {
        (**(code **)(*local_6c + 8))();
      }
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
      *(int *)(param_1 + 0x68) = iVar8;
    }
    puVar9 = (undefined4 *)(*(int *)(param_1 + 0x60) + *(int *)(param_1 + 100) * 0x30);
    *(undefined4 **)(param_1 + 0x84) = puVar9;
    *puVar9 = local_b0;
    puVar9[1] = local_ac;
    fn_0019e864(puVar9 + 2,&local_a8);
    puVar9[4] = local_a0;
    puVar9[5] = local_9c;
    puVar9[6] = local_98;
    puVar9[7] = local_94;
    puVar9[8] = local_90;
    puVar9[9] = local_8c;
    puVar9[10] = local_88;
    puVar9[0xb] = local_84;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if (((local_a8 & 0x8000000) != 0) &&
       (iVar8 = local_a4[1], local_a4[1] = iVar8 + -1, iVar8 + -1 == 0)) {
      (**(code **)(*local_a4 + 8))();
    }
  }
  else {
    *(int *)(*(int *)(param_1 + 0x84) + 0x24) = *(int *)(*(int *)(param_1 + 0x84) + 0x24) + 1;
  }
  sVar1 = (short)param_4 - (short)local_7c;
  *(short *)(*(int *)(param_1 + 0x84) + 0x2c) = sVar1;
  *(short *)(*(int *)(param_1 + 0x84) + 0x2e) = (short)*(undefined4 *)(param_1 + 0x28) - sVar1;
  local_40 = 0x8000100;
  local_3c = param_2;
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590(0,&local_40);
  }
  param_2[1] = param_2[1] + 1;
  fn_0019e864(*(int *)(param_1 + 0x84) + 8);
  if (((local_40 & 0x8000000) != 0) &&
     (iVar8 = local_3c[1], local_3c[1] = iVar8 + -1, iVar8 + -1 == 0)) {
    (**(code **)(*local_3c + 8))();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x84) + 4) = *(undefined4 *)(local_44 + 0x38);
  **(int **)(param_1 + 0x84) = local_44 + 0x60;
  if (*(uint *)(param_1 + 0x1c) < (uint)(local_38 + *(int *)(local_44 + 0x1c) * 2)) {
    local_b8 = 0x1000001;
    local_b4 = (int *)0x0;
    fn_0019d320(param_1 + 0x18,*(int *)(param_1 + 0x1c) + *(int *)(local_44 + 0x1c) * 2,&local_b8);
    if (((local_b8 & 0x8000000) != 0) &&
       (iVar8 = local_b4[1], local_b4[1] = iVar8 + -1, iVar8 + -1 == 0)) {
      (**(code **)(*local_b4 + 8))();
    }
  }
  *(int *)(param_1 + 0x30) = local_38;
  *(int *)(param_1 + 0x34) = param_5;
  if ((*(int *)(param_1 + 0x50) != 0x1000001) &&
     (*(int *)(param_1 + 0x54) != *(int *)(*(int *)(param_1 + 0x84) + 0xc))) {
    fn_001a0d30(param_1,99,0);
  }
  return 1;
}


