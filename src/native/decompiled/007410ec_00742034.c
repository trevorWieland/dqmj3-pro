#include "007410ec_00742034.h"



undefined4 fn_00742034(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint local_18;
  int *local_14;
  int local_10;
  
  local_10 = 0;
  iVar1 = fn_00159164(param_1,param_2,0x8004000,&local_10);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  piVar2 = (int *)fn_00173d4c(param_1,0xffffffff);
  local_18 = 0x1000001;
  local_14 = (int *)0x0;
  if (*piVar2 == 0x1000001) {
    fn_0019e864(&local_18,*(int *)(local_10 + 4) + 0x44);
    fn_0017ff68(param_1);
    fn_00173d1c(param_1,&local_18);
    if ((local_18 & 0x8000000) == 0) {
      return 0;
    }
    iVar1 = local_14[1] + -1;
    local_14[1] = iVar1;
  }
  else {
    iVar1 = fn_00665ccc(*(int *)(local_10 + 4),piVar2,&local_18);
    if (iVar1 == 0) {
      uVar3 = fn_001581d0(param_1,(char *)&DAT_00742194);
      if (((local_18 & 0x8000000) != 0) &&
         (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_14 + 8))();
      }
      return uVar3;
    }
    fn_0017ff68(param_1);
    fn_00173d1c(param_1,&local_18);
    if ((local_18 & 0x8000000) == 0) {
      return 0;
    }
    iVar1 = local_14[1] + -1;
    local_14[1] = iVar1;
  }
  if (iVar1 == 0) {
    (**(code **)(*local_14 + 8))();
  }
  return 0;
}



void fn_00742020(int param_1,int param_2)

{
  *(bool *)(*(int *)(param_1 + 0x8c) + 0xa8) = param_2 != 0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00741f48) */

undefined4 fn_00741f30(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)fn_00173d4c();
  if (*piVar1 == 0x8000040) {
    iVar3 = piVar1[1];
    fn_0019d320(iVar3 + 0x18,0,&DAT_008c06e8);
    uVar4 = *(uint *)(iVar3 + 0x1c);
    if ((uVar4 <= *(uint *)(iVar3 + 0x20) >> 2) && (4 < uVar4)) {
      uVar2 = fn_0018388c(*(undefined4 *)(iVar3 + 0x18),*(uint *)(iVar3 + 0x20) << 3,uVar4 << 3);
      *(undefined4 *)(iVar3 + 0x18) = uVar2;
      *(uint *)(iVar3 + 0x20) = uVar4;
    }
  }
  else {
    if (*piVar1 != 0xa000020) {
      uVar2 = fn_001581d0(param_1,(char *)&DAT_00741ff8);
      return uVar2;
    }
    fn_0019b4c8(piVar1[1]);
  }
  return 0;
}



undefined4 fn_00741724(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_28;
  int *local_24;
  int local_20 [2];
  
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x34) < 1) {
    fn_0019813c(param_1,(char *)&DAT_00741828);
  }
  else {
    iVar2 = fn_00159164(param_1,0xffffffff,0x8000040,local_20);
    if (iVar2 != 0) {
      iVar2 = *(int *)(local_20[0] + 4);
      if (0 < *(int *)(iVar2 + 0x1c)) {
        iVar4 = 0;
        local_28 = 0x1000001;
        local_24 = (int *)0x0;
        iVar3 = *(int *)(iVar2 + 0x1c);
        iVar1 = iVar3 >> 1;
        if (0 < iVar1) {
          do {
            fn_0019e864(&local_28,*(int *)(iVar2 + 0x18) + iVar4 * 8);
            iVar5 = (iVar3 + -1) - iVar4;
            fn_0019e864(*(int *)(iVar2 + 0x18) + iVar4 * 8,*(int *)(iVar2 + 0x18) + iVar5 * 8);
            fn_0019e864(*(int *)(iVar2 + 0x18) + iVar5 * 8,&local_28);
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar1);
        }
        if (((local_28 & 0x8000000) != 0) &&
           (iVar2 = local_24[1], local_24[1] = iVar2 + -1, iVar2 + -1 == 0)) {
          (**(code **)(*local_24 + 8))();
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}



undefined4 fn_007415e0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int local_10;
  
  local_10 = param_4;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x34) < 1) {
    fn_0019813c(param_1,(char *)&DAT_007416f4);
  }
  else {
    iVar1 = fn_00159164(param_1,param_2,0x8000040,&local_10);
    if (iVar1 != 0) {
      iVar1 = *(int *)(*(int *)(local_10 + 4) + 0x1c);
      if (iVar1 < 1) {
        uVar3 = fn_001581d0(param_1,(char *)&DAT_00741718);
        return uVar3;
      }
      if (param_3 != 0) {
        fn_00173d1c(param_1,iVar1 * 8 + -8 + *(int *)(*(int *)(local_10 + 4) + 0x18));
      }
      iVar1 = *(int *)(local_10 + 4);
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + -1;
      puVar2 = (uint *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x1c) * 8);
      if (((*puVar2 & 0x8000000) != 0) &&
         (iVar4 = *(int *)(puVar2[1] + 4) + -1, *(int *)(puVar2[1] + 4) = iVar4, iVar4 == 0)) {
        (**(code **)(*(int *)puVar2[1] + 8))();
      }
      uVar5 = *(uint *)(iVar1 + 0x1c);
      if ((uVar5 <= *(uint *)(iVar1 + 0x20) >> 2) && (4 < uVar5)) {
        uVar3 = fn_0018388c(*(undefined4 *)(iVar1 + 0x18),*(uint *)(iVar1 + 0x20) << 3,uVar5 << 3);
        *(undefined4 *)(iVar1 + 0x18) = uVar3;
        *(uint *)(iVar1 + 0x20) = uVar5;
      }
      return 0;
    }
  }
  return 0xffffffff;
}



undefined4 fn_007414a0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int local_20;
  
  local_20 = param_4;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x34) < 2) {
    fn_0019813c(param_1,(char *)&DAT_007415bc);
  }
  else {
    iVar1 = fn_00159164(param_1,0xfffffffe,0x8000040,&local_20);
    if (iVar1 != 0) {
      iVar1 = *(int *)(local_20 + 4);
      puVar2 = (uint *)fn_00173d4c(param_1,0xffffffff);
      uVar5 = *puVar2;
      piVar4 = (int *)puVar2[1];
      if ((uVar5 & 0x8000000) != 0) {
        piVar4[1] = piVar4[1] + 1;
      }
      if (*(uint *)(iVar1 + 0x20) <= *(uint *)(iVar1 + 0x1c)) {
        iVar6 = *(uint *)(iVar1 + 0x1c) << 1;
        if (iVar6 == 0) {
          iVar6 = 4;
        }
        uVar3 = fn_0018388c(*(undefined4 *)(iVar1 + 0x18),*(uint *)(iVar1 + 0x20) << 3,iVar6 << 3);
        *(undefined4 *)(iVar1 + 0x18) = uVar3;
        *(int *)(iVar1 + 0x20) = iVar6;
      }
      puVar2 = (uint *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x1c) * 8);
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      if (puVar2 != (uint *)0x0) {
        puVar2[1] = (uint)piVar4;
        *puVar2 = uVar5;
        if ((uVar5 & 0x8000000) != 0) {
          piVar4[1] = piVar4[1] + 1;
        }
      }
      if (((uVar5 & 0x8000000) != 0) && (iVar1 = piVar4[1], piVar4[1] = iVar1 + -1, iVar1 + -1 == 0)
         ) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      fn_00173cd0(param_1,1);
      return 0;
    }
  }
  return 0xffffffff;
}



undefined4 fn_00741330(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (DAT_00899ea4 != '\0') {
    fn_001b5afc();
    uVar2 = 0xfffffc7a;
    if (DAT_00899ea6 != '\0') {
      uVar1 = fn_0052da7c();
      if ((uVar1 & 0x80000000) != 0) goto LAB_007413b4;
      DAT_00899ea6 = '\0';
    }
    if (DAT_00899ea5 != '\0') {
      uVar1 = fn_0044c4a4();
      if ((uVar1 & 0x80000000) != 0) {
        if (uVar1 == 0x209ff8) {
          uVar2 = 0xfffffe6e;
        }
LAB_007413b4:
        uVar2 = fn_001b8438(1,uVar2,(char *)&DAT_007d5eb4);
        return uVar2;
      }
      DAT_00899ea5 = '\0';
    }
    fn_001b83fc();
    fn_001b963c(0);
    fn_001b96c4(0);
    DAT_00899ea4 = '\0';
  }
  return 0;
}



void fn_00741310(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_001b9684();
  fn_001b8438(1,uVar1,(char *)&DAT_007d5ebc);
  return;
}



int fn_00741220(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  iVar1 = (*DAT_00899ebc)(param_1);
  if ((iVar1 != 0) && (-1 < DAT_00899ec4)) {
    DAT_00899ec4 = DAT_00899ec4 + 1;
  }
  return iVar1;
}



undefined4 fn_007410ec(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (DAT_00899ea4 == '\0') {
    if (param_1 == 0 || param_2 == 0) {
      uVar3 = fn_001b8438(1,0xfffffe6d,(char *)&DAT_007d5eac);
      return uVar3;
    }
    fn_00113d34(0);
    iVar1 = fn_0044bcec();
    uVar3 = 0xfffffc7a;
    if (iVar1 == 0) {
      uVar2 = fn_0044bb24();
      if ((uVar2 & 0x80000000) != 0) {
        if (uVar2 == 0x209ff9) {
          uVar3 = 0xfffffe6e;
        }
        goto LAB_007411e0;
      }
      DAT_00899ea5 = 1;
    }
    iVar1 = fn_0052c6ec();
    if (iVar1 == 0) {
      uVar2 = fn_0052c494();
      if ((uVar2 & 0x80000000) != 0) {
LAB_007411e0:
        uVar3 = fn_001b8438(1,uVar3,(char *)&DAT_007d5eac);
        return uVar3;
      }
      DAT_00899ea6 = 1;
    }
    fn_001b5a4c();
    fn_001b96c4(param_1);
    fn_001b963c(param_2);
    DAT_00899ea4 = '\x01';
  }
  return 0;
}


