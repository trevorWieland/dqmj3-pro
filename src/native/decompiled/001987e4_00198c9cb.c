#include "001987e4_00198c9cb.h"



undefined4 fn_00198c9c(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint *local_70;
  int *local_6c;
  uint local_68;
  int *local_64;
  uint local_60;
  int *local_5c;
  uint local_58;
  int *local_54;
  uint local_50;
  int *local_4c;
  int iStack_30;
  int *piStack_2c;
  undefined4 local_28;
  
  local_54 = (int *)0x0;
  local_5c = (int *)0x0;
  local_58 = 0x1000001;
  local_60 = 0x1000001;
  iVar1 = *param_2;
  iStack_30 = param_1;
  piStack_2c = param_2;
  local_28 = param_3;
  if (iVar1 == 0x8000040) {
    iVar1 = param_2[1];
    iVar9 = *(int *)(iVar1 + 0x14);
    uVar10 = *(undefined4 *)(iVar1 + 0x1c);
    piVar2 = (int *)fn_002fece8(0x24);
    if (piVar2 != (int *)0x0) {
      piVar2[1] = 0;
      *piVar2 = (int)&DAT_00850d74;
      piVar2[2] = 0;
      piVar2[6] = 0;
      piVar2[7] = 0;
      piVar2[8] = 0;
      local_64 = (int *)0x0;
      local_68 = 0x1000001;
      fn_0019d320(piVar2 + 6,uVar10,&local_68);
      if (((local_68 & 0x8000000) != 0) &&
         (iVar4 = local_64[1], local_64[1] = iVar4 + -1, iVar4 + -1 == 0)) {
        (**(code **)(*local_64 + 8))();
      }
      piVar2[5] = iVar9;
      piVar2[3] = 0;
      piVar2[4] = 0;
      fn_0019e8c4(iVar9 + 0x44,piVar2);
    }
    local_6c = (int *)0x0;
    local_70 = (uint *)0x1000001;
    fn_0019d320(piVar2 + 6,*(undefined4 *)(iVar1 + 0x1c),&local_70);
    if ((((uint)local_70 & 0x8000000) != 0) &&
       (iVar9 = local_6c[1], local_6c[1] = iVar9 + -1, iVar9 + -1 == 0)) {
      (**(code **)(*local_6c + 8))();
    }
    uVar3 = 0;
    if (*(int *)(iVar1 + 0x1c) != 0) {
      do {
        puVar5 = (uint *)(piVar2[6] + uVar3 * 8);
        if (puVar5 != (uint *)0x0) {
          puVar6 = (uint *)(*(int *)(iVar1 + 0x18) + uVar3 * 8);
          uVar8 = *puVar6;
          *puVar5 = uVar8;
          uVar7 = puVar6[1];
          puVar5[1] = uVar7;
          if ((uVar8 & 0x8000000) != 0) {
            *(int *)(uVar7 + 4) = *(int *)(uVar7 + 4) + 1;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(iVar1 + 0x1c));
    }
    piVar2[7] = *(int *)(iVar1 + 0x1c);
    local_50 = 0x8000040;
    local_4c = piVar2;
    if (piVar2 == (int *)0x0) goto code_r0x001990b4;
    piVar2[1] = piVar2[1] + 1;
    fn_0019e864(local_28,&local_50);
    if (((local_50 & 0x8000000) != 0) &&
       (iVar1 = local_4c[1], local_4c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_4c + 8))();
    }
    if (((local_60 & 0x8000000) != 0) &&
       (iVar1 = local_5c[1], local_5c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_5c + 8))();
    }
    if ((local_58 & 0x8000000) == 0) {
      return 1;
    }
    iVar1 = local_54[1] + -1;
    local_54[1] = iVar1;
  }
  else {
    if (iVar1 == 0xa000020) {
      local_6c = (int *)fn_001a4734(param_2[1]);
      local_70 = (uint *)0xa000020;
      if (local_6c == (int *)0x0) goto code_r0x001990b4;
      local_6c[1] = local_6c[1] + 1;
      fn_0019e864(&local_60,&local_70);
      if ((((uint)local_70 & 0x8000000) != 0) &&
         (iVar1 = local_6c[1], local_6c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_6c + 8))();
      }
    }
    else {
      if (iVar1 != 0xa008000) {
        return 0;
      }
      iVar9 = param_2[1];
      uVar10 = *(undefined4 *)(param_1 + 0x8c);
      iVar1 = *(int *)(*(int *)(iVar9 + 0x1c) + 0x24);
      if (iVar1 != 0) {
        iVar1 = iVar1 + -1;
      }
      iVar1 = iVar1 * 8 + 0x34 + *(int *)(*(int *)(iVar9 + 0x1c) + 0x58);
      local_64 = (int *)fn_002fece8(iVar1);
      if (local_64 != (int *)0x0) {
        fn_0019e1ec(local_64,uVar10,iVar9,iVar1);
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x1c) + 0x58);
      if (iVar9 != 0) {
        local_64[8] = (iVar1 - iVar9) + (int)local_64;
      }
      local_68 = 0xa008000;
      if (local_64 == (int *)0x0) {
code_r0x001990b4:
                    /* WARNING: Subroutine does not return */
        fn_00146590();
      }
      local_64[1] = local_64[1] + 1;
      fn_0019e864(&local_60,&local_68);
      if (((local_68 & 0x8000000) != 0) &&
         (iVar1 = local_64[1], local_64[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_64 + 8))();
      }
    }
    if (local_5c[6] != 0) {
      iVar1 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,&local_60);
      iVar1 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,param_2);
      local_70 = &local_58;
      fn_0018d4fc(param_1,local_5c,0xc,2);
    }
    fn_0019e864(local_28,&local_60);
    if (((local_60 & 0x8000000) != 0) &&
       (iVar1 = local_5c[1], local_5c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_5c + 8))();
    }
    if ((local_58 & 0x8000000) == 0) {
      return 1;
    }
    iVar1 = local_54[1] + -1;
    local_54[1] = iVar1;
  }
  if (iVar1 == 0) {
    (**(code **)(*local_54 + 8))();
  }
  return 1;
}


