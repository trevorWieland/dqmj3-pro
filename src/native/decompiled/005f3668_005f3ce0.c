#include "005f3668_005f3ce0.h"



void fn_005f3ce0(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 in_lr;
  
  puVar7 = (undefined4 *)param_2[1];
  for (puVar5 = (undefined4 *)*param_2; puVar5 != puVar7; puVar5 = puVar5 + 1) {
    puVar6 = (undefined4 *)*puVar5;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      (**(code **)(*(int *)puVar6[1] + 0xc))((int *)puVar6[1],puVar6);
      *puVar5 = 0;
    }
  }
  uVar2 = param_2[1];
  uVar4 = *param_2;
  if (uVar4 != uVar2) {
    uVar1 = uVar4;
    if (uVar2 <= uVar4) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar2);
    }
    param_2[1] = uVar2 - (uVar2 - uVar4 & 0xfffffffc);
  }
  *param_2 = 0;
  uVar1 = param_2[1];
  param_2[1] = 0;
  uVar3 = param_2[2];
  param_2[2] = 0;
  uVar2 = uVar4;
  if (uVar1 <= uVar4) {
    for (; uVar2 != uVar1; uVar2 = uVar2 + 4) {
    }
  }
  fn_002feef8(uVar4,(int)(uVar3 - uVar4) >> 2,0,param_4,unaff_r4,in_lr);
  return;
}



void fn_005f3c98(void)

{
  DAT_0089a4d1 = 1;
  fn_0052c424(&DAT_008d192c);
  DAT_008d192c = 2;
  DAT_008d1936 = 0;
  DAT_008d1934 = 0;
  DAT_008d2810 = 0;
  DAT_008d2811 = 0;
  DAT_008d2812 = 0;
  return;
}



void fn_005f3c94(void)

{
  DAT_0089a4d1 = 1;
  fn_0052c424(&DAT_008d192c);
  DAT_008d192c = 2;
  DAT_008d1936 = 0;
  DAT_008d1934 = 0;
  DAT_008d2810 = 0;
  DAT_008d2811 = 0;
  DAT_008d2812 = 0;
  return;
}



void fn_005f3c48(uint param_1)

{
  DAT_0089a4d4 = DAT_0089a4d4 & ~param_1;
  return;
}



void fn_005f3b74(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  DAT_0089a4d1 = 1;
  fn_0052c424(&DAT_008d192c);
  DAT_008d192c = 0;
  DAT_008d1930 = param_2;
  DAT_008d1936 = 0;
  DAT_008d1934 = 0;
  DAT_008d2810 = 0;
  DAT_008d2811 = 0;
  DAT_008d2812 = 0;
  return;
}



void fn_005f3ad4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_14 [4];
  
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  iVar1 = fn_00100b58(param_2);
  DAT_0089a4d1 = 1;
  fn_0052c424(&DAT_008d192c);
  DAT_008d192c = 1;
  uVar2 = 0x76c;
  if (iVar1 + 1U < 0x76c) {
    uVar2 = iVar1 + 1U;
  }
  fn_0010288c(&DAT_008d1938,uVar2,param_2,auStack_14,param_2);
  DAT_008d1936 = 0;
  DAT_008d1934 = 0;
  DAT_008d2810 = 0;
  DAT_008d2811 = 0;
  DAT_008d2812 = 0;
  return;
}



void fn_005f3aac(uint param_1)

{
  DAT_0089a4d8 = DAT_0089a4d8 & ~param_1;
  if (DAT_0089a4d8 == 0xffffffff) {
    return;
  }
  fn_00125150(1);
  return;
}



int fn_005f3a9c(void)

{
  return (int)DAT_0089a4d1;
}



undefined4 * fn_005f3a1c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &DAT_00858f10;
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    iVar2 = iVar3 + 0x35c;
    *(undefined4 *)(iVar3 + 0x364) = *(undefined4 *)(iVar3 + 0x360);
    piVar1 = *(int **)(iVar3 + 0x35c);
    if (piVar1 != (int *)0x0) {
      iVar2 = *(int *)(iVar3 + 0x360);
    }
    if (piVar1 != (int *)0x0 && iVar2 != 0) {
      (**(code **)(*piVar1 + 0xc))();
    }
    iVar3 = fn_00116ea0(iVar3 + 0x33c);
    iVar3 = fn_00116284(iVar3 + -0x220);
    iVar3 = fn_00116988(iVar3 + -0x118);
    fn_002feef8(iVar3 + -4);
  }
  return param_1;
}



void fn_005f3990(undefined4 *param_1)

{
  *param_1 = &DAT_00858eec;
  fn_002feef8(param_1[2]);
  fn_005f1264(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_005f38fc(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  puVar1 = (undefined4 *)fn_00153bfc();
  puVar1[2] = 0;
  *puVar1 = &DAT_00858eec;
  puVar2 = (undefined4 *)fn_00145b00(0x18,&DAT_00812c8c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = in_r3;
    puVar2[1] = in_stack_00000000;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0xffffffff;
    puVar2[4] = in_stack_00000008;
    puVar2[5] = in_stack_0000000c;
  }
  if ((undefined4 *)puVar1[2] != puVar2) {
    fn_002feef8();
    puVar1[2] = puVar2;
  }
  return puVar1;
}



/* WARNING: Type propagation algorithm not settling */

void fn_005f3668(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint local_30;
  int local_2c;
  undefined *local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_24 = 0;
  local_28 = &DAT_008523fc;
  local_18 = 0;
  local_14 = 0;
  local_20 = 0;
  local_1c = 0;
  uVar1 = fn_0014d6cc(&local_24,param_3,6);
  if ((uVar1 & 0x80000000) == 0) {
    iVar2 = fn_001560d8(&local_24,&local_30);
    if (iVar2 < 0) {
      fn_0015e590(iVar2,0x5f3738);
    }
    param_1[2] = local_30;
    param_1[3] = local_2c;
    if (((int)-(local_2c + (uint)(local_30 != 0)) < 0 ==
         (SBORROW4(0,local_2c) != SBORROW4(-local_2c,(uint)(local_30 != 0)))) ||
       (iVar2 = param_1[5],
       (int)(local_2c - (iVar2 + (uint)(local_30 < (uint)param_1[4]))) < 0 ==
       (SBORROW4(local_2c,iVar2) != SBORROW4(local_2c - iVar2,(uint)(local_30 < (uint)param_1[4]))))
       ) {
      iVar2 = fn_0015cfa4(&local_24,local_2c,param_1[4],param_1[5]);
      if (iVar2 < 0) {
        fn_0015e590(iVar2,0x5f37b8);
      }
      local_30 = 1;
      iVar2 = fn_00193178(&local_24,&local_2c,*param_1,param_1[1]);
      if (iVar2 < 0) {
        fn_0015e590(iVar2,0x5f37e0);
      }
      if (param_1[1] == local_2c) {
        iVar2 = fn_001560d8(&local_24,&local_30);
        if (iVar2 < 0) {
          fn_0015e590(iVar2,0x5f3844);
        }
        param_1[2] = local_30;
        param_1[3] = local_2c;
        *param_1 = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        param_1[5] = 0;
        fn_005f11cc(param_2,1);
      }
      else {
        *param_1 = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        param_1[5] = 0;
        fn_005f11cc(param_2,2);
      }
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      fn_005f11cc(param_2,2);
    }
  }
  else {
    *param_1 = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[5] = 0;
    fn_005f11cc(param_2,2);
  }
  if ((local_24 & 0xfffffffe) != 0) {
    if ((local_24 & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(local_24 & 0xfffffffe);
  }
  return;
}


