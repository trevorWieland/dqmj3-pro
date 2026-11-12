#include "001c8a8c_001c91a4b.h"



undefined4 fn_001c91a4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_3 == -1) {
    return 0xffffffff;
  }
  iVar1 = fn_00183970(param_1,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38,param_3);
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  if (param_4 != 0) {
    iVar1 = fn_00172c98(uVar4);
    uVar4 = *(undefined4 *)(iVar1 + 0xac);
  }
  uVar2 = fn_001774dc(param_1,param_1 + 0x40,0);
  uVar3 = fn_00194f08(uVar4,param_2,0,1);
  iVar1 = fn_00145b00(0x20,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_0016a2c0(iVar1,uVar2,0,0,uVar3,0,uVar4);
  }
  fn_0017d948(param_1 + 0x40,param_1 + 0x44,iVar1 + 0x18);
  return uVar2;
}



void fn_001c9058(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  piVar7 = (int *)*(int *)(param_1 + 0x50);
LAB_001c906c:
  piVar6 = piVar7;
  if (piVar6 == (int *)(param_1 + 0x50)) {
    return;
  }
  piVar7 = (int *)*piVar6;
  iVar1 = fn_00167500(param_1,*(undefined4 *)(param_1 + 8),param_1 + 8,piVar6[-2]);
  for (piVar2 = *(int **)(iVar1 + 0x14); piVar2 != (int *)(iVar1 + 0x14); piVar2 = (int *)*piVar2) {
    if (piVar2[-5] == piVar6[-1]) {
      puVar8 = piVar2 + -5;
      goto LAB_001c90d4;
    }
  }
  puVar8 = (undefined4 *)0x0;
LAB_001c90d4:
  if (puVar8[4] == 0) goto code_r0x001c90e0;
  goto LAB_001c9174;
code_r0x001c90e0:
  iVar3 = fn_0012ead8(*(undefined4 *)(param_1 + 100),*puVar8);
  if (iVar3 != 0) {
    iVar3 = fn_0012ead8(*(undefined4 *)(param_1 + 100),*puVar8);
    if ((iVar3 != 0) && (puVar8[4] == 0)) {
      puVar4 = (undefined4 *)fn_00145b00(100,&DAT_00812c8c);
      iVar3 = 0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        iVar3 = fn_0013f7ec(puVar4 + 2);
        iVar3 = iVar3 + -8;
      }
      puVar8[4] = iVar3;
      uVar9 = puVar8[3];
      uVar5 = fn_0012ea14(*(undefined4 *)(param_1 + 100),*puVar8);
      fn_0013f814(puVar8[4],uVar5,uVar9);
      fn_0017d938(*(undefined4 *)(iVar1 + 0xc),puVar8[4]);
    }
LAB_001c9174:
    fn_0017d90c(param_1 + 0x4c,piVar6);
    fn_002feef8(piVar6 + -2);
  }
  goto LAB_001c906c;
}



void fn_001c9000(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_4 == -1) {
    return;
  }
  uVar1 = fn_00183970(param_1,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38);
  fn_001c87b4(param_1,param_2,param_3,uVar1,param_5);
  return;
}



void fn_001c8df0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint local_30;
  undefined1 auStack_2c [4];
  uint local_28 [2];
  
  piVar5 = *(int **)(param_1 + 0x20);
  piVar1 = (int *)fn_00168a24(auStack_2c,param_2,&local_30);
  do {
    if (piVar5 == (int *)(param_1 + 0x20)) {
      iVar2 = 0;
LAB_001c8ea0:
      fn_001588d4(auStack_2c);
      fn_001c8ec4(param_1,iVar2);
      return;
    }
    uVar3 = *(uint *)(piVar5[-2] + -4);
    if (uVar3 == *(uint *)(*piVar1 + -4)) {
      local_30 = uVar3;
      puVar4 = local_28;
      if (uVar3 <= *(uint *)(*piVar1 + -4)) {
        puVar4 = &local_30;
      }
      local_28[0] = *(uint *)(*piVar1 + -4);
      iVar2 = fn_001006de(piVar5[-2],*piVar1,*puVar4);
      if ((iVar2 == 0) && (*(int *)(piVar5[-2] + -4) == *(int *)(*piVar1 + -4))) {
        iVar2 = (int)(piVar5 + -3);
        goto LAB_001c8ea0;
      }
    }
    piVar5 = (int *)*piVar5;
  } while( true );
}



undefined4 fn_001c8ec4(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  uint local_30;
  uint local_2c [2];
  
  iVar1 = param_2[2];
  uVar6 = *param_2;
  param_2[2] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    piVar5 = (int *)*(int *)(param_1 + 0x2c);
    while (piVar4 = piVar5, piVar4 != (int *)(param_1 + 0x2c)) {
      piVar5 = (int *)*piVar4;
      uVar2 = *(uint *)(piVar4[-3] + -4);
      if (uVar2 == *(uint *)(param_2[1] + -4)) {
        local_30 = uVar2;
        local_2c[0] = *(uint *)(param_2[1] + -4);
        puVar3 = local_2c;
        if (uVar2 <= local_2c[0]) {
          puVar3 = &local_30;
        }
        iVar1 = fn_001006de(piVar4[-3],param_2[1],*puVar3);
        if ((iVar1 == 0) && (*(int *)(piVar4[-3] + -4) == *(int *)(param_2[1] + -4))) {
          fn_0054a6c8(piVar4[-1],piVar4[-2]);
          fn_0017d90c(param_1 + 0x28,piVar4);
          if (piVar4 != (int *)0x14) {
            iVar1 = fn_001588d4(piVar4 + -3);
            fn_002feef8(iVar1 + -8);
          }
        }
      }
    }
    fn_0017d90c(param_1 + 0x1c,param_2 + 3);
    if (param_2 != (undefined4 *)0x0) {
      iVar1 = fn_001588d4(param_2 + 1);
      fn_002feef8(iVar1 + -4);
    }
  }
  fn_00110a84(*(undefined4 *)(param_1 + 0x68),uVar6);
  return 1;
}


