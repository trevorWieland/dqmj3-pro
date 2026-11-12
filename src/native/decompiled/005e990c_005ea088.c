#include "005e990c_005ea088.h"



undefined4 fn_005ea088(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = fn_00183654();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_005ea654(param_1,iVar3);
      fn_005e7d48(uVar2,1);
      uVar2 = fn_006eba9c(uVar2,5);
      fn_005e8e44(uVar2,0x17);
      fn_005e8e30(uVar2,param_2);
      fn_005e8e60(uVar2,0xf,0xe,0,0xf,0xe,0);
      fn_005e8b80(uVar2,0,0,0,0,0,0);
      fn_005e8b70(uVar2,1,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 1;
}



undefined4 fn_005e9fb0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = fn_00183654();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_005ea654(param_1,iVar3);
      fn_005e7d48(uVar2,1);
      uVar2 = fn_006eba9c(uVar2,5);
      fn_005e8e44(uVar2,0x17);
      fn_005e8e30(uVar2,param_2);
      fn_005e8e60(uVar2,0xf,0xe,0,0xf,0xe,0);
      fn_005e8b80(uVar2,0,0,0,0,0,0);
      fn_005e8b70(uVar2,2,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 1;
}



undefined2 fn_005e9f78(undefined4 *param_1,int param_2)

{
  param_1 = (undefined4 *)*param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      param_1 = param_1 + 2;
    }
    else if (param_2 == 2) {
      param_1 = param_1 + 4;
    }
  }
  return *(undefined2 *)*param_1;
}



uint fn_005e9f40(int *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar1 = puVar1 + 2;
    }
    else if (param_2 == 2) {
      puVar1 = puVar1 + 4;
    }
  }
  return *(uint *)*puVar1 >> 0x10;
}



void fn_005e9f00(undefined4 *param_1)

{
  *param_1 = &DAT_00858d28;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  fn_002feef8(param_1);
  return;
}



void fn_005e9db0(int param_1)

{
  float in_s0;
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= in_s0) && (fVar1 = in_s0, 0x3f800000 < (int)in_s0)) {
    fVar1 = 1.0;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x58) = fVar1;
  return;
}



void fn_005e9d98(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005e9dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 0xdc) + 4) + 8))();
  return;
}



undefined4 * fn_005e9d6c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 unaff_r4;
  int *piVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,8,4);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = &DAT_00858d28;
  puVar1[1] = 0;
  iVar2 = fn_00145b00(0x5c,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar3 = (undefined4 *)fn_005eece8();
    *puVar3 = &DAT_00858d14;
    iVar2 = fn_00101a1c(puVar3 + 6,&LAB_005e98b8,0xc,4,unaff_r4);
    piVar5 = (int *)(iVar2 + -0x18);
    *(undefined4 *)(iVar2 + 0x30) = 0x30000;
    *(undefined1 *)(iVar2 + 0x34) = 1;
    *(undefined1 *)(iVar2 + 0x35) = 1;
    *(undefined4 *)(iVar2 + 0x38) = 1;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    *(undefined4 *)(iVar2 + 0x40) = 0x3f000000;
    iVar6 = 0;
    do {
      if ((int *)piVar5[iVar6 * 3 + 6] != (int *)0x0) {
        (**(code **)(*(int *)piVar5[iVar6 * 3 + 6] + 4))();
        piVar5[iVar6 * 3 + 6] = 0;
      }
      piVar4 = (int *)piVar5[iVar6 * 3 + 7];
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x10))();
        piVar5[iVar6 * 3 + 7] = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar2 + 0x38));
  }
  piVar4 = (int *)puVar1[1];
  if (piVar4 != piVar5) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    puVar1[1] = piVar5;
  }
  return puVar1;
}



void fn_005e9cc4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + 4);
  if (*(char *)(iVar1 + 0x4d) != '\0') {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x50)) {
      uVar3 = 0x3f80000000000000;
      do {
        fn_006ec068(iVar1,param_2,*(undefined4 *)(iVar1 + iVar2 * 0xc + 0x1c));
        local_28 = (undefined4)uVar3;
        uStack_1c = (undefined4)((ulonglong)uVar3 >> 0x20);
        local_24 = local_28;
        local_20 = local_28;
        fn_00117604(param_2,1,&local_28);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x50));
    }
    *(undefined1 *)(iVar1 + 0x4d) = 0;
  }
  return;
}



void fn_005e9b4c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  
  iVar1 = fn_006eb610(*(undefined4 *)(param_1 + 0x10));
  uVar2 = fn_006eb278(param_2);
  fn_005e2a6c(uVar2,0,iVar1);
  fn_005e5e5c(param_2,0);
  fn_005e5f50(param_2,iVar1 + 0x1a8,iVar1 + 0x148,param_3);
  fn_005e1b70(uVar2,param_3);
  fn_005ea270(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  fn_005ea270(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  fn_005e9a40(param_1,param_2,param_3);
  if (*(char *)(param_1 + 0x4d) == '\0') {
    fn_006ec11c(param_1,param_2,*(undefined4 *)(param_1 + *(int *)(param_1 + 0x54) * 0xc + 0x1c),
                 param_3);
    fn_005ea2ac(*(undefined4 *)(param_1 + 0xc),0,*(undefined4 *)(param_1 + 4));
    fn_005ec4fc(*(undefined4 *)(param_1 + 0xc),param_2,param_3);
    *(undefined1 *)(param_1 + *(int *)(param_1 + 0x54) * 0xc + 0x20) = 1;
    fn_005e6088(param_2);
  }
  uVar2 = fn_00117984();
  fn_005efee0(uVar2,param_3);
  fn_00300f74(*(int *)(param_1 + 0x54) + 1,*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x54) = extraout_r1;
  return;
}



void fn_005e9a40(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  
  if ((*(char *)(param_1 + 0x4d) == '\0') &&
     (*(char *)(param_1 + *(int *)(param_1 + 0x54) * 0xc + 0x20) != '\0')) {
    fVar3 = *(float *)(param_1 + 0x58);
    if (1.0 < fVar3) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = 0.0;
      if (0.0 <= fVar3) {
        fVar1 = fVar3;
      }
    }
    local_20 = 0;
    local_1f = 0;
    local_1e = 0;
    uVar2 = VectorFloatToUnsigned(fVar1 * 255.0 + 0.5,3);
    local_1d = (undefined1)uVar2;
    fn_005ea348(*(undefined4 *)(param_1 + 8),0,&local_20);
    fn_005ea2ac(*(undefined4 *)(param_1 + 8),0,
                 *(undefined4 *)(param_1 + *(int *)(param_1 + 0x54) * 0xc + 0x18));
    fn_005ec4fc(*(undefined4 *)(param_1 + 8),param_2,param_3);
    *(undefined1 *)(param_1 + *(int *)(param_1 + 0x54) * 0xc + 0x20) = 0;
  }
  return;
}



void fn_005e990c(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  
  iVar6 = param_1;
  uVar7 = param_2;
  iVar9 = param_4;
  if (param_6 == 0) {
    param_6 = fn_00118290();
  }
  fn_005eec4c(param_1,param_2,param_6);
  uVar8 = 0x80000000 >> (LZCOUNT(param_3 + -1) - 1U & 0xff);
  *(int *)(param_1 + 0x50) = param_5;
  iVar5 = 0;
  if (0 < param_5) {
    do {
      piVar1 = (int *)fn_005e783c(uVar8,0x80000000 >> (LZCOUNT(param_4 + -1) - 1U & 0xff),1,0,
                                   *(undefined4 *)(param_1 + 0x48),0,param_6,iVar6,uVar7,uVar8,iVar9
                                  );
      iVar4 = param_1 + iVar5 * 0xc;
      piVar2 = *(int **)(iVar4 + 0x18);
      if (piVar2 != piVar1) {
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
        *(int **)(iVar4 + 0x18) = piVar1;
      }
      uVar3 = fn_006eb61c(*(undefined4 *)(iVar4 + 0x18));
      piVar1 = (int *)fn_005e5770(param_6,uVar3);
      piVar2 = *(int **)(iVar4 + 0x1c);
      if (piVar2 != piVar1) {
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))();
        }
        *(int **)(iVar4 + 0x1c) = piVar1;
      }
      *(undefined1 *)(iVar4 + 0x20) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x50));
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  return;
}


