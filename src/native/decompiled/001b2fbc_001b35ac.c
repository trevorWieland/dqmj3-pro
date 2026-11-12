#include "001b2fbc_001b35ac.h"



undefined4 fn_001b35ac(void)

{
  return *(undefined4 *)(&DAT_007e19ac + DAT_008bf75c * 4);
}



undefined4 fn_001b358c(void)

{
  undefined4 uVar1;
  
  if (DAT_008bf754 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_008bf760;
  }
  return uVar1;
}



undefined4 fn_001b3540(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  fn_007434e8(param_1,2);
  fn_00157fb0(param_1,0xffffffff,&local_10);
  pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0xa4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,&DAT_001b3588,local_10);
  }
  return 0;
}



undefined4 fn_001b33dc(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_20;
  int *local_1c;
  
  piVar1 = (int *)fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  iVar2 = fn_00157ff4(param_1);
  if (iVar2 < 3) {
    if (*piVar1 == 0x5000004) {
      iVar2 = (int)(float)piVar1[1];
    }
    else {
      iVar2 = piVar1[1];
    }
    piVar3 = (int *)fn_00665a44(*(undefined4 *)(param_1 + 0x8c),iVar2);
  }
  else {
    piVar3 = (int *)fn_00665a44(*(undefined4 *)(param_1 + 0x8c),0);
    if (*piVar1 == 0x5000004) {
      iVar2 = (int)(float)piVar1[1];
    }
    else {
      iVar2 = piVar1[1];
    }
    uVar4 = fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 2);
    fn_0019d320(piVar3 + 6,iVar2,uVar4);
    uVar5 = piVar3[7];
    if ((uVar5 <= (uint)piVar3[8] >> 2) && (4 < uVar5)) {
      iVar2 = fn_0018388c(piVar3[6],piVar3[8] << 3,uVar5 << 3);
      piVar3[6] = iVar2;
      piVar3[8] = uVar5;
    }
  }
  local_20 = 0x8000040;
  local_1c = piVar3;
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590(0,&local_20);
  }
  piVar3[1] = piVar3[1] + 1;
  fn_00173d1c(param_1);
  if (((local_20 & 0x8000000) != 0) &&
     (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  return 1;
}



undefined4 fn_001b32f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  uVar8 = 0xffffffff;
  iVar1 = fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34),param_3,param_4,param_4);
  if (1 < *(int *)(*(int *)(iVar1 + 4) + 0x1c)) {
    iVar2 = fn_00157ff4(param_1);
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar2 == 2) {
      uVar8 = 2;
    }
    iVar9 = *(int *)(iVar1 + 0x1c);
    for (iVar2 = iVar9 / 2; -1 < iVar2; iVar2 = iVar2 + -1) {
      iVar3 = fn_001b86e8(param_1,iVar1,iVar2,iVar9 + -1,uVar8);
      if (iVar3 == 0) {
        return 0xffffffff;
      }
    }
    while (iVar2 = iVar9 + -1, 0 < iVar2) {
      puVar4 = *(undefined4 **)(iVar1 + 0x18);
      puVar5 = puVar4 + iVar2 * 2;
      uVar6 = *puVar4;
      uVar7 = puVar4[1];
      *puVar4 = *puVar5;
      puVar4[1] = puVar5[1];
      *puVar5 = uVar6;
      puVar5[1] = uVar7;
      iVar3 = fn_001b86e8(param_1,iVar1,0,iVar9 + -2,uVar8);
      iVar9 = iVar2;
      if (iVar3 == 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}



undefined4 fn_001b2fbc(int param_1,undefined4 param_2,code *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_34 [3];
  uint local_28;
  int *local_24;
  int local_20 [2];
  
  iVar1 = (*param_3)(param_2,local_20,4);
  if (iVar1 != 4) goto LAB_001b2ff0;
  if (local_20[0] == 0x1000001) {
    fn_0019e864(param_4,&DAT_008c06e8);
  }
  else {
    if (local_20[0] == 0x5000002) {
      iVar1 = (*param_3)(param_2);
      if (iVar1 != 4) goto LAB_001b2ff0;
      if (((*param_4 & 0x8000000) != 0) &&
         (iVar1 = *(int *)(param_4[1] + 4) + -1, *(int *)(param_4[1] + 4) = iVar1, iVar1 == 0)) {
        (**(code **)(*(int *)param_4[1] + 8))();
      }
      uVar4 = 0x5000002;
    }
    else {
      if (local_20[0] != 0x5000004) {
        if (local_20[0] != 0x8000010) {
          uVar2 = fn_00191f28();
          fn_0019813c(param_1,(char *)&DAT_001b3208,uVar2);
          return 0;
        }
        iVar1 = (*param_3)(param_2,local_34,4);
        if ((iVar1 == 4) &&
           ((uVar2 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),local_34[0]), uVar4 = local_34[0],
            local_34[0] == 0 || (uVar3 = (*param_3)(param_2,uVar2,local_34[0]), uVar3 == uVar4)))) {
          iVar1 = *(int *)(param_1 + 0x8c);
          uVar2 = fn_001a36d4(iVar1,0xffffffff);
          local_24 = (int *)fn_0016b5f0(*(undefined4 *)(iVar1 + 0x14),uVar2,local_34[0]);
          local_24[3] = iVar1;
          local_28 = 0x8000010;
          if (local_24 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            fn_00146590();
          }
          local_24[1] = local_24[1] + 1;
          fn_0019e864(param_4,&local_28);
          if ((local_28 & 0x8000000) == 0) {
            return 1;
          }
          iVar1 = local_24[1];
          local_24[1] = iVar1 + -1;
          if (iVar1 + -1 == 0) {
            (**(code **)(*local_24 + 8))();
            return 1;
          }
          return 1;
        }
LAB_001b2ff0:
        fn_0019813c(param_1,
                     "io error, read function failure, the origin stream could be corrupted/trucated"
                    );
        return 0;
      }
      iVar1 = (*param_3)(param_2,local_34,4);
      if (iVar1 != 4) goto LAB_001b2ff0;
      if (((*param_4 & 0x8000000) != 0) &&
         (iVar1 = *(int *)(param_4[1] + 4) + -1, *(int *)(param_4[1] + 4) = iVar1, iVar1 == 0)) {
        (**(code **)(*(int *)param_4[1] + 8))();
      }
      uVar4 = 0x5000004;
    }
    *param_4 = uVar4;
    param_4[1] = local_34[0];
  }
  return 1;
}


