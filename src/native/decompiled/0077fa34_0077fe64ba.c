#include "0077fa34_0077fe64ba.h"



int fn_0077fc60(uint *param_1,uint *param_2,undefined4 *param_3,int *param_4,undefined4 param_5,
                undefined4 param_6,uint param_7)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_190 [256];
  int local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_68;
  uint local_64;
  uint local_4c;
  int *local_48;
  uint local_44 [4];
  uint *puStack_34;
  uint *local_30;
  undefined4 *local_2c;
  int *piStack_28;
  
  local_4c = 0;
  local_68 = param_6;
  local_48 = param_4;
  puStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  piStack_28 = param_4;
  fn_00169f1c(param_5,param_1[2]);
  iVar1 = fn_0044d104(param_1[3],4,*param_1 + extraout_r1 * 4,
                       param_1[1] + (uint)CARRY4(*param_1,extraout_r1 * 4),local_44,4);
  if (-1 < iVar1) {
    if (local_44[0] != 0xffffffff) {
      local_64 = param_7 >> 1;
      uVar4 = local_44[0];
      do {
        uVar2 = param_1[4];
        uVar3 = uVar2 + uVar4;
        iVar5 = param_1[5] + (uint)CARRY4(uVar2,uVar4);
        iVar1 = fn_0044d104(param_1[7],uVar2,uVar3,iVar5,&local_90,0x20);
        uVar2 = 0;
        if ((-1 < iVar1) &&
           ((uVar2 = local_74, local_74 == 0 ||
            (iVar1 = fn_0044d104(param_1[7],0,uVar3 + 0x20,iVar5 + (uint)(0xffffffdf < uVar3),
                                  auStack_190,local_74), -1 < iVar1)))) {
          iVar1 = 0;
        }
        if (iVar1 < 0) goto LAB_0077fd90;
        if ((*local_48 == local_90 && param_7 == uVar2) &&
           (iVar1 = fn_001006b6(local_68,auStack_190,local_64), iVar1 == 0)) {
          iVar1 = 0;
          local_4c = uVar4;
          goto LAB_0077fd90;
        }
        uVar4 = local_78;
      } while (local_78 != 0xffffffff);
    }
    iVar1 = -0x377fbb91;
  }
LAB_0077fd90:
  if (-1 < iVar1) {
    *local_30 = local_4c;
    local_2c[4] = local_7c;
    *local_2c = local_8c;
    local_2c[1] = uStack_88;
    local_2c[2] = uStack_84;
    local_2c[3] = uStack_80;
    iVar1 = 0;
  }
  return iVar1;
}


