#include "0012eb18_0012f208.h"



void fn_0012f208(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  fn_001433d8(*(int *)(param_1 + 4) + param_2 * 0x34);
  piVar2 = (int *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *piVar2 = 0;
  return;
}



void fn_0012f1a0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_2 + 0x14) = 10;
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 != 0) {
    fn_0014720c(iVar2,param_2);
    fn_00147178(iVar2,param_2);
  }
  uVar1 = fn_00156024(param_1,(char *)&DAT_0012f1f8);
  fn_00147178(uVar1,param_2);
  return;
}



void fn_0012f13c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_2 + 0x14) = 10;
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 != 0) {
    fn_0014720c(iVar2,param_2);
    fn_00147178(iVar2,param_2);
  }
  uVar1 = fn_00156024(param_1,(char *)&DAT_0012f194);
  fn_00147178(uVar1,param_2);
  return;
}



undefined4 * fn_0012f110(undefined4 *param_1)

{
  fn_002feef8(*param_1);
  return param_1;
}



int * fn_0012eebc(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  piVar1 = (int *)fn_00100fc6(0xc,0);
  iVar2 = fn_00100fc6(0x180,0);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 0x20;
  *param_1 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[2] = iVar2;
  param_1[3] = iVar2 + 0x180;
  param_1[4] = iVar2;
  param_1[2] = iVar2 + 0xc;
  *(int *)iVar2 = iVar2;
  *(int *)(param_1[4] + 4) = param_1[4];
  piVar10 = *(int **)(param_2 + 0x10);
  iVar2 = *(int *)param_1[4];
  for (piVar1 = (int *)*piVar10; piVar1 != piVar10; piVar1 = (int *)*piVar1) {
    piVar8 = (int *)param_1[1];
    if (piVar8 == (int *)0x0) {
      if (param_1[2] == param_1[3]) {
        if (*param_1 == 0) {
          uVar9 = 0x20;
        }
        else {
          uVar3 = *(uint *)(*param_1 + 4);
          uVar9 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
          if (uVar9 < uVar3 + 0x20) {
            uVar9 = uVar3 + 0x20;
          }
        }
        piVar8 = (int *)fn_00100fc6(0xc,0);
        iVar4 = fn_00100fc6(uVar9 * 0xc,0);
        piVar8[2] = iVar4;
        *piVar8 = *param_1;
        piVar8[1] = uVar9;
        *param_1 = (int)piVar8;
        iVar4 = piVar8[2];
        param_1[2] = iVar4;
        param_1[3] = iVar4 + uVar9 * 0xc;
      }
      piVar8 = (int *)param_1[2];
      param_1[2] = (int)(piVar8 + 3);
    }
    else {
      param_1[1] = *piVar8;
    }
    piVar5 = piVar8 + 2;
    if (piVar5 != (int *)0x0) {
      iVar4 = piVar1[2];
      if (*(int *)(iVar4 + -0xc) == -1) {
        uVar9 = *(uint *)(iVar4 + -4);
        if (0xfffffff1 < uVar9) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
        }
        if (uVar9 == 0) {
          puVar6 = &DAT_008f9ce8;
        }
        else {
          puVar6 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
          }
          puVar6[1] = uVar9;
          puVar7 = (undefined2 *)((int)puVar6 + uVar9 * 2 + 0xc);
          *puVar6 = 0;
          puVar6[2] = uVar9;
          if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = 0;
          }
        }
        *piVar5 = (int)(puVar6 + 3);
        fn_00301a9c(puVar6 + 3,piVar1[2],uVar9 << 1);
      }
      else {
        *piVar5 = iVar4;
        piVar5 = (int *)(iVar4 + -0xc);
        if (piVar5 != &DAT_008f9ce8) {
          *piVar5 = *piVar5 + 1;
        }
      }
    }
    *piVar8 = iVar2;
    piVar8[1] = *(int *)(iVar2 + 4);
    **(undefined4 **)(iVar2 + 4) = piVar8;
    *(int **)(iVar2 + 4) = piVar8;
    param_1[5] = param_1[5] + 1;
  }
  return param_1;
}



void fn_0012ee94(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00156ef0();
  if (iVar1 < 1) {
    return;
  }
  fn_00116dcc(param_1,*(undefined4 *)(param_1 + 0x1c));
  return;
}



undefined4 fn_0012eb18(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_001287b4();
  uVar1 = fn_0012e958(*(undefined4 *)(param_1 + 0x10),param_2,uVar1,param_3);
  iVar2 = fn_0012ebb4(param_1,param_1 + 4,param_2);
  if (iVar2 == 0) {
    iVar2 = fn_00145b00(0x18,&DAT_00812c8c);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_0012ec2c(iVar2,uVar1,param_2);
    }
    fn_0017d948(param_1 + 4,param_1 + 8,iVar2 + 0x10);
  }
  else {
    *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  }
  return uVar1;
}



undefined4 * fn_0012ec2c(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  uint local_2c;
  uint uStack_28;
  
  piVar9 = param_1 + 1;
  param_1[1] = &DAT_008f9cf4;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = param_2;
  uVar1 = fn_00100b58(param_3);
  puVar2 = (undefined4 *)*piVar9;
  if (uVar1 == 0) {
    piVar3 = puVar2 + -3;
    iVar6 = *piVar3;
    if (iVar6 != 0) {
      if ((puVar2 != &DAT_008f9cf4) &&
         ((iVar6 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))))) {
        fn_001008c4(*piVar9 + -0xc,*(int *)(*piVar9 + -8) + 8,0);
      }
      *piVar9 = (int)&DAT_008f9cf4;
      goto LAB_0012ee58;
    }
    puVar2[-1] = 0;
    puVar5 = (undefined2 *)*piVar9;
  }
  else {
    if (((1 < puVar2[-3] + 1) || ((uint)puVar2[-2] < uVar1)) ||
       ((param_3 != (undefined4 *)0x0 &&
        ((puVar2 <= param_3 && (param_3 < (undefined4 *)((int)puVar2 + puVar2[-1] * 2))))))) {
      uVar7 = puVar2[-1];
      local_2c = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
      if (local_2c < uVar7 + 0x80) {
        local_2c = uVar7 + 0x80;
      }
      puVar8 = &uStack_28;
      if (uVar1 <= local_2c) {
        puVar8 = &local_2c;
      }
      uStack_28 = uVar1;
      uVar7 = *puVar8;
      if (0xfffffff1 < uVar7) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
      }
      if (uVar7 < uVar1) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar7);
      }
      if (uVar7 == 0) {
        puVar2 = &DAT_008f9ce8;
      }
      else {
        puVar2 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        puVar5 = (undefined2 *)((int)puVar2 + uVar1 * 2 + 0xc);
        *puVar2 = 0;
        puVar2[1] = uVar7;
        puVar2[2] = uVar1;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
      }
      fn_00301a9c(puVar2 + 3,param_3,uVar1 << 1);
      if ((undefined4 *)*piVar9 != &DAT_008f9cf4) {
        piVar3 = (undefined4 *)*piVar9 + -3;
        iVar6 = *piVar3;
        if ((iVar6 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(*piVar9 + -0xc,*(int *)(*piVar9 + -8) + 8,0);
        }
      }
      *piVar9 = (int)(puVar2 + 3);
      goto LAB_0012ee58;
    }
    fn_001006ac(puVar2,param_3,uVar1);
    *(uint *)(*piVar9 + -4) = uVar1;
    puVar5 = (undefined2 *)(*piVar9 + uVar1 * 2);
  }
  *puVar5 = 0;
LAB_0012ee58:
  iVar6 = fn_00145b00(0x48,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar6 != 0) {
    uVar4 = fn_00127ab0();
  }
  param_1[2] = uVar4;
  param_1[3] = 1;
  return param_1;
}



undefined4 * fn_0012ebb4(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar4 = *(undefined4 **)(param_2 + 4);
  while( true ) {
    if (puVar4 == (undefined4 *)(param_2 + 4)) {
      return (undefined4 *)0x0;
    }
    uVar5 = *(uint *)(puVar4[-3] + -4);
    uVar1 = fn_00100b58(param_3);
    uVar2 = *(uint *)(puVar4[-3] + -4);
    if (uVar2 < uVar5) {
      uVar5 = uVar2;
    }
    iVar3 = fn_001006de(puVar4[-3],param_3);
    if (iVar3 == 0 && uVar5 == uVar1) break;
    puVar4 = (undefined4 *)*puVar4;
  }
  return puVar4 + -4;
}


