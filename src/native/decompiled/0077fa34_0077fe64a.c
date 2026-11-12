#include "0077fa34_0077fe64a.h"



uint fn_0077fba0(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int *param_5,
                 uint param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_24;
  
  uVar3 = *(uint *)(param_1 + 0x10) + param_6;
  iVar2 = *(int *)(param_1 + 0x14) + (uint)CARRY4(*(uint *)(param_1 + 0x10),param_6);
  uVar1 = fn_0044d104(*(undefined4 *)(param_1 + 0x1c),&local_38,uVar3,iVar2,&local_38,0x18);
  if ((-1 < (int)(uVar1 & 0x80000000)) &&
     (((param_4 == 0 || param_5 == (int *)0x0 || (*param_5 = local_24, local_24 == 0)) ||
      (uVar1 = fn_0044d104(*(undefined4 *)(param_1 + 0x1c),uVar1 & 0x80000000,uVar3 + 0x18,
                            iVar2 + (uint)(0xffffffe7 < uVar3),param_4,local_24), -1 < (int)uVar1)))
     ) {
    uVar1 = 0;
  }
  if (-1 < (int)uVar1) {
    *param_2 = local_38;
    *param_3 = local_34;
    param_3[1] = uStack_30;
    param_3[2] = uStack_2c;
    uVar1 = 0;
  }
  return uVar1;
}



uint fn_0077fa34(uint *param_1,uint *param_2,undefined4 *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7)

{
  uint uVar1;
  int extraout_r1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auStack_160 [256];
  int local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  int *local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *puStack_34;
  uint *local_30;
  undefined4 *local_2c;
  int *piStack_28;
  
  local_48 = param_6;
  local_40 = 0;
  local_44 = param_4;
  puStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  piStack_28 = param_4;
  fn_00169f1c(param_5,param_1[2]);
  uVar1 = fn_0044d104(param_1[3],4,*param_1 + extraout_r1 * 4,
                       param_1[1] + (uint)CARRY4(*param_1,extraout_r1 * 4),&local_3c,4);
  puVar2 = (undefined1 *)(uVar1 & 0x80000000);
  if (-1 < (int)puVar2) {
    if (local_3c != 0xffffffff) {
      local_38 = param_7 >> 1;
      uVar5 = local_3c;
      do {
        uVar3 = param_1[4] + uVar5;
        iVar4 = param_1[5] + (uint)CARRY4(param_1[4],uVar5);
        uVar1 = fn_0044d104(param_1[7],puVar2,uVar3,iVar4,&local_60,0x18);
        uVar6 = 0;
        if ((-1 < (int)uVar1) &&
           ((uVar6 = local_4c, local_4c == 0 ||
            (uVar1 = fn_0044d104(param_1[7],0,uVar3 + 0x18,iVar4 + (uint)(0xffffffe7 < uVar3),
                                  auStack_160,local_4c), -1 < (int)uVar1)))) {
          uVar1 = 0;
        }
        if ((int)uVar1 < 0) goto LAB_0077fb60;
        puVar2 = auStack_160;
        if (*local_44 == local_60 && param_7 == uVar6) {
          uVar7 = fn_001006b6(local_48,puVar2,local_38);
          puVar2 = (undefined1 *)((ulonglong)uVar7 >> 0x20);
          if ((int)uVar7 == 0) {
            uVar1 = 0;
            local_40 = uVar5;
            goto LAB_0077fb60;
          }
        }
        uVar5 = local_50;
      } while (local_50 != 0xffffffff);
    }
    uVar1 = 0xc880446f;
  }
LAB_0077fb60:
  if (-1 < (int)uVar1) {
    *local_30 = local_40;
    *local_2c = local_5c;
    local_2c[1] = uStack_58;
    local_2c[2] = uStack_54;
    uVar1 = 0;
  }
  return uVar1;
}


