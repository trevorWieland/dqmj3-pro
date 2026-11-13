#include "001b3f90_001b4970.h"



undefined4 fn_001b4970(void)

{
  return DAT_008bf6c8;
}



void fn_001b4928(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    DAT_008e9ab2 = *param_1;
    DAT_008e9ab6 = param_1[1];
    DAT_008e9aba = param_1[2];
    DAT_008e9abe = param_1[3];
  }
  DAT_008bf6c7 = param_1 != (undefined4 *)0x0;
  return;
}



undefined4 * fn_001b490c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (DAT_008bf6c5 != '\0') {
    puVar1 = &DAT_008e9a89;
  }
  return puVar1;
}



int fn_001b474c(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
                int param_6,int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if ((param_3 | param_5) == 0 || param_10 == 0) {
    iVar1 = -0x193;
  }
  else {
    iVar2 = fn_00740a4c(param_3 | param_5);
    piVar3 = (int *)fn_00741220(0x14);
    if (iVar2 == 0 || piVar3 == (int *)0x0) {
      fn_007407d4();
      fn_00740adc(iVar2);
      iVar1 = -0x191;
    }
    else {
      *piVar3 = param_10;
      piVar3[1] = param_11;
      piVar3[2] = param_7;
      piVar3[3] = param_8;
      piVar3[4] = param_9;
      if (param_3 == 0) {
        iVar1 = fn_00740840(iVar2,(char *)&DAT_001b48e8,param_5,0x10,1);
      }
      else {
        uVar4 = fn_002febd8(param_3);
        iVar1 = fn_00740840(iVar2,(char *)&DAT_001b48dc,param_3,uVar4,1);
      }
      if ((((iVar1 != 0) ||
           ((param_6 != 0 &&
            (iVar1 = fn_00740840(iVar2,&DAT_001b48f8,param_6,param_8,0), iVar1 != 0)))) ||
          ((param_4 != 0 && (iVar1 = fn_00740840(iVar2,(char *)&DAT_001b4900,param_4,0xc,1), iVar1 != 0))))
         || (iVar1 = fn_00740ee8(iVar2,param_1,param_2,piVar3), iVar1 != 0)) {
        fn_007407d4(piVar3);
        fn_00740adc(iVar2);
      }
    }
  }
  return iVar1;
}



undefined4 fn_001b471c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00157ff4();
  iVar1 = fn_00157c74(param_1,iVar1 + -1,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_001b4718(int param_1)

{
  if (*(int *)(param_1 + 0x94) != 0) {
    fn_001581d0(param_1,"cannot suspend an already suspended vm");
    return;
  }
  if (*(int *)(param_1 + 0x90) == 2) {
    return;
  }
  fn_001581d0(param_1,"cannot suspend through native calls/metamethods");
  return;
}



undefined4 fn_001b459c(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_18;
  int *local_14;
  
  iVar1 = fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  puVar2 = (uint *)fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  local_18 = 0x1000001;
  local_14 = (int *)0x0;
  if ((*puVar2 & 0x4000000) == 0) {
    uVar4 = fn_001581d0(param_1,(char *)&DAT_001b4700);
    if (((local_18 & 0x8000000) != 0) &&
       (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_14 + 8))();
    }
    return uVar4;
  }
  iVar3 = fn_00157ff4(param_1);
  if (2 < iVar3) {
    uVar4 = fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 2);
    fn_0019e864(&local_18,uVar4);
  }
  iVar1 = *(int *)(iVar1 + 4);
  if (*puVar2 == 0x5000004) {
    uVar5 = (uint)(float)puVar2[1];
  }
  else {
    uVar5 = puVar2[1];
  }
  fn_0019d320(iVar1 + 0x18,uVar5,&local_18);
  uVar5 = *(uint *)(iVar1 + 0x1c);
  if ((uVar5 <= *(uint *)(iVar1 + 0x20) >> 2) && (4 < uVar5)) {
    uVar4 = fn_0018388c(*(undefined4 *)(iVar1 + 0x18),*(uint *)(iVar1 + 0x20) << 3,uVar5 << 3);
    *(undefined4 *)(iVar1 + 0x18) = uVar4;
    *(uint *)(iVar1 + 0x20) = uVar5;
  }
  if (((local_18 & 0x8000000) != 0) &&
     (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_14 + 8))();
  }
  return 0;
}



undefined4 fn_001b4344(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint in_r12;
  bool bVar7;
  uint local_18;
  int *local_14;
  
  iVar1 = fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  puVar2 = (uint *)fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  if ((*puVar2 & 0x4000000) == 0) {
    uVar3 = fn_001581d0(param_1,(char *)&DAT_001b457c);
    return uVar3;
  }
  local_18 = 0x1000001;
  local_14 = (int *)0x0;
  if (*puVar2 == 0x5000004) {
    uVar4 = (uint)(float)puVar2[1];
  }
  else {
    uVar4 = puVar2[1];
  }
  bVar7 = uVar4 == 0;
  if (-1 < (int)uVar4) {
    in_r12 = *(uint *)(*(int *)(iVar1 + 4) + 0x1c);
    bVar7 = in_r12 == uVar4;
  }
  if (!bVar7 && (-1 < (int)uVar4 && (int)uVar4 <= (int)in_r12)) {
    puVar5 = (uint *)(*(int *)(*(int *)(iVar1 + 4) + 0x18) + uVar4 * 8);
    local_18 = *puVar5;
    local_14 = (int *)puVar5[1];
    if (local_18 == 0x8010000) {
      local_18 = local_14[3];
      local_14 = (int *)local_14[4];
    }
    if ((local_18 & 0x8000000) != 0) {
      local_14[1] = local_14[1] + 1;
    }
    iVar1 = *(int *)(iVar1 + 4);
    if (*puVar2 == 0x5000004) {
      puVar5 = (uint *)(int)(float)puVar2[1];
    }
    else {
      puVar5 = (uint *)puVar2[1];
    }
    bVar7 = puVar5 == (uint *)0x0;
    if (-1 < (int)puVar5) {
      puVar2 = *(uint **)(iVar1 + 0x1c);
      bVar7 = puVar2 == puVar5;
    }
    if (!bVar7 && (-1 < (int)puVar5 && (int)puVar5 <= (int)puVar2)) {
      puVar2 = (uint *)(*(int *)(iVar1 + 0x18) + (int)puVar5 * 8);
      if (((*puVar2 & 0x8000000) != 0) &&
         (iVar6 = *(int *)(puVar2[1] + 4) + -1, *(int *)(puVar2[1] + 4) = iVar6, iVar6 == 0)) {
        (**(code **)(*(int *)puVar2[1] + 8))();
      }
      if (puVar5 < (uint *)(*(int *)(iVar1 + 0x1c) + -1)) {
        fn_0018437c(*(int *)(iVar1 + 0x18) + (int)puVar5 * 8,
                     *(int *)(iVar1 + 0x18) + (int)puVar5 * 8 + 8,
                     (*(int *)(iVar1 + 0x1c) - (int)puVar5) * 8 + -8);
      }
      uVar4 = *(int *)(iVar1 + 0x1c) - 1;
      *(uint *)(iVar1 + 0x1c) = uVar4;
      if ((uVar4 <= *(uint *)(iVar1 + 0x20) >> 2) && (4 < uVar4)) {
        uVar3 = fn_0018388c(*(undefined4 *)(iVar1 + 0x18),*(uint *)(iVar1 + 0x20) << 3,uVar4 * 8);
        *(undefined4 *)(iVar1 + 0x18) = uVar3;
        *(uint *)(iVar1 + 0x20) = uVar4;
      }
    }
    fn_00173d1c(param_1,&local_18);
    if (((local_18 & 0x8000000) != 0) &&
       (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_14 + 8))();
    }
    return 1;
  }
  uVar3 = fn_001581d0(param_1,(char *)&DAT_001b4588);
  if (((local_18 & 0x8000000) != 0) &&
     (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_14 + 8))();
  }
  return uVar3;
}



undefined4 fn_001b4150(int param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_30;
  int *local_2c;
  uint local_28;
  int *local_24;
  
  iVar1 = fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  piVar2 = (int *)fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  puVar3 = (uint *)fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 2);
  iVar7 = *(int *)(iVar1 + 4);
  iVar1 = *piVar2 + -0x5000004;
  if (iVar1 == 0) {
    uVar11 = (uint)(float)piVar2[1];
  }
  else {
    uVar11 = piVar2[1];
  }
  if (-1 < (int)uVar11) {
    iVar1 = *(int *)(iVar7 + 0x1c);
  }
  if (-1 < (int)uVar11 && (int)uVar11 <= iVar1) {
    piVar2 = (int *)(iVar7 + 0x18);
    local_30 = *puVar3;
    local_2c = (int *)puVar3[1];
    if ((local_30 & 0x8000000) != 0) {
      local_2c[1] = local_2c[1] + 1;
    }
    local_28 = 0x1000001;
    local_24 = (int *)0x0;
    fn_0019d320(piVar2,*(int *)(iVar7 + 0x1c) + 1);
    if (((local_28 & 0x8000000) != 0) &&
       (iVar1 = local_24[1], local_24[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_24 + 8))();
    }
    uVar4 = *(uint *)(iVar7 + 0x1c);
    while (uVar4 = uVar4 - 1, uVar11 < uVar4) {
      puVar8 = (uint *)(*piVar2 + uVar4 * 8 + -8);
      puVar3 = (uint *)(*piVar2 + uVar4 * 8);
      uVar10 = puVar8[1];
      piVar5 = (int *)puVar3[1];
      uVar12 = *puVar3;
      puVar3[1] = uVar10;
      uVar9 = *puVar8;
      *puVar3 = uVar9;
      if ((uVar9 & 0x8000000) != 0) {
        *(int *)(uVar10 + 4) = *(int *)(uVar10 + 4) + 1;
      }
      if (((uVar12 & 0x8000000) != 0) &&
         (iVar1 = piVar5[1], piVar5[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*piVar5 + 8))();
      }
    }
    fn_0019e864(*piVar2 + uVar11 * 8,&local_30);
    if (((local_30 & 0x8000000) != 0) &&
       (iVar1 = local_2c[1], local_2c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_2c + 8))();
    }
    return 0;
  }
  uVar6 = fn_001581d0(param_1,(char *)&DAT_001b4330);
  return uVar6;
}



undefined4 fn_001b4114(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  uVar2 = *(undefined4 *)(iVar1 + 4);
  iVar1 = fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  fn_00665b00(*(undefined4 *)(iVar1 + 4),uVar2);
  return 0;
}



void fn_001b3f90(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  fn_0012bc84(0x208,&local_18);
  uVar1 = local_18;
  if (param_2 == 0) {
    uStack_14 = 0x10104;
    local_18 = 0;
    fn_00301a9c(uVar1,&local_18,8);
  }
  else {
    uStack_14 = 0x30104;
    local_18 = 0x61;
    fn_00301a9c(uVar1,&local_18,8);
  }
  fn_001467e4(8);
  return;
}


