#include "005e9048_005e98cc.h"



int * fn_005e98cc(int *param_1)

{
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0x10))();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
  }
  return param_1;
}



void fn_005e9894(int param_1)

{
  fn_005e990c(*(undefined4 *)(param_1 + 4));
  return;
}



void fn_005e9800(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  if (param_4 == 0) {
    param_4 = fn_00118290();
  }
  piVar1 = (int *)fn_005e6ee4(param_2,param_4);
  piVar2 = *(int **)(iVar3 + 8);
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(int **)(iVar3 + 8) = piVar1;
  }
  piVar1 = (int *)fn_005e6ee4(param_3,param_4);
  piVar2 = *(int **)(iVar3 + 0xc);
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(int **)(iVar3 + 0xc) = piVar1;
  }
  return;
}



void fn_005e9778(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  puVar1 = (uint *)(param_1 + 0x20);
  *puVar1 = *param_2;
  *(uint *)(param_1 + 0x24) = uVar2;
  *(uint *)(param_1 + 0x28) = uVar3;
  if (((int)(0x7f800000 - (*puVar1 & 0x7fffffff)) < 0) || (*puVar1 * -2 == 0x1000000)) {
    *puVar1 = 0;
  }
  if (((int)(0x7f800000 - (*(uint *)(param_1 + 0x24) & 0x7fffffff)) < 0) ||
     (*(uint *)(param_1 + 0x24) * -2 == 0x1000000)) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (((int)(0x7f800000 - (*(uint *)(param_1 + 0x28) & 0x7fffffff)) < 0) ||
     (*(uint *)(param_1 + 0x28) * -2 == 0x1000000)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



undefined4 * fn_005e96b4(undefined4 *param_1)

{
  *param_1 = &DAT_00858d04;
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
    param_1[3] = 0;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



undefined4 * fn_005e9568(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  
  *param_1 = &DAT_00858d04;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  piVar1 = (int *)(**(code **)(*param_3 + 8))(param_3);
  piVar1 = (int *)fn_005e783c(0x80000000 >> (LZCOUNT(*piVar1 + -1) - 1U & 0xff),
                               0x80000000 >> (LZCOUNT(piVar1[1] + -1) - 1U & 0xff),0,piVar1[3],0,0,
                               param_4);
  piVar2 = (int *)param_1[1];
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    param_1[1] = piVar1;
  }
  piVar1 = (int *)fn_005e6ee4(param_2,param_4);
  piVar2 = (int *)param_1[2];
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    param_1[2] = piVar1;
  }
  piVar1 = (int *)fn_005e762c(param_4);
  piVar2 = (int *)param_1[3];
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    param_1[3] = piVar1;
  }
  fn_005ea2ac(param_1[2],0,param_1[1]);
  fn_005ea648(param_1[2],0);
  fn_005e7d28(param_1[2],0,1);
  return param_1;
}



void fn_005e950c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (local_10 = param_4, iVar1 = fn_006eba5c(), iVar1 != 0)) {
    fn_006eb49c(&local_10);
    *(undefined1 *)(param_1 + 2) = (undefined1)local_10;
    *(undefined1 *)(param_1 + 3) = ((unsigned int)(local_10) >> 8) & 0xff;
    *(undefined1 *)(param_1 + 4) = ((unsigned int)(local_10) >> 16) & 0xff;
    *(undefined1 *)(param_1 + 0x15) = 1;
    fn_005e6d00(*(undefined4 *)(param_1 + 0x18));
  }
  return;
}



void fn_005e9084(char *param_1,undefined4 param_2,int param_3,char *param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_328 [512];
  float local_128;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float local_94;
  float local_90;
  float local_88;
  float local_80;
  float local_78;
  
  *param_4 = *param_1;
  if ((*param_1 != '\0') &&
     (pbVar1 = (byte *)fn_006ea000(param_2), param_1[0x15] != '\0' || (*pbVar1 & 2) != 0)) {
    param_4[1] = param_1[1];
    param_4[2] = param_1[2];
    param_4[3] = param_1[3];
    param_4[4] = param_1[4];
    fn_006e9fcc(param_2);
    iVar2 = fn_006ea00c(param_2);
    if (iVar2 == 0) {
      fVar15 = *(float *)(param_3 + 0x1bc);
      fVar16 = *(float *)(param_3 + 0x1d4);
      fVar9 = *(float *)(param_3 + 0x1b8);
      fVar8 = *(float *)(param_3 + 0x1c0);
      local_78 = fVar15 * fVar16;
      fVar17 = *(float *)(param_3 + 0x1cc);
      fVar18 = *(float *)(param_3 + 0x1d0);
      local_128 = fVar9 * fVar16;
      fVar4 = *(float *)(param_3 + 0x1e4);
      fVar14 = *(float *)(param_3 + 0x1c4);
      fVar20 = *(float *)(param_3 + 0x1c8);
      local_90 = fVar15 * fVar18;
      fVar32 = fVar9 * fVar18;
      fVar6 = *(float *)(param_3 + 0x1dc);
      fVar5 = *(float *)(param_3 + 0x1e0);
      fVar13 = *(float *)(param_3 + 0x1a8);
      fVar7 = *(float *)(param_3 + 0x1d8);
      fVar12 = *(float *)(param_3 + 0x1ac);
      fVar11 = *(float *)(param_3 + 0x1b0);
      fVar10 = *(float *)(param_3 + 0x1b4);
      local_80 = fVar9 * fVar17;
      fVar23 = fVar8 * fVar17;
      local_88 = fVar14 * fVar18;
      fVar21 = fVar14 * fVar20;
      fVar22 = fVar15 * fVar20;
      fVar24 = (((((local_90 * fVar4 + fVar8 * fVar16 * fVar6 + fVar14 * fVar17 * fVar5) * fVar13 +
                   fVar12 * (local_128 * fVar5 + fVar8 * fVar20 * fVar4 + local_88 * fVar7) +
                   fVar11 * (local_80 * fVar4 + local_78 * fVar7 + fVar21 * fVar6) +
                  fVar10 * (fVar32 * fVar6 + fVar22 * fVar5 + fVar23 * fVar7)) -
                 fVar13 * (local_78 * fVar5 + fVar23 * fVar4 + local_88 * fVar6)) -
                fVar12 * (fVar32 * fVar4 + fVar8 * fVar16 * fVar7 + fVar21 * fVar5)) -
               fVar11 * (local_128 * fVar6 + fVar22 * fVar4 + fVar14 * fVar17 * fVar7)) -
               fVar10 * (local_80 * fVar5 + local_90 * fVar7 + fVar8 * fVar20 * fVar6);
      if (fVar24 != 0.0) {
        fVar23 = fVar23 - fVar15 * fVar18;
        fVar21 = fVar21 - fVar9 * fVar16;
        fVar19 = local_88 - fVar8 * fVar16;
        fVar27 = fVar18 * fVar4 - fVar16 * fVar5;
        fVar26 = fVar17 * fVar4 - fVar16 * fVar6;
        fVar28 = fVar20 * fVar4 - fVar16 * fVar7;
        fVar25 = fVar18 * fVar6 - fVar17 * fVar5;
        fVar22 = fVar22 - fVar9 * fVar17;
        fVar30 = local_78 - fVar14 * fVar17;
        fVar18 = fVar18 * fVar7 - fVar20 * fVar5;
        fVar32 = fVar32 - fVar8 * fVar20;
        fVar16 = fVar17 * fVar7 - fVar20 * fVar6;
        fVar17 = fVar14 * fVar6 - fVar15 * fVar4;
        fVar20 = fVar8 * fVar4 - fVar14 * fVar5;
        fVar29 = fVar9 * fVar4 - fVar14 * fVar7;
        fVar31 = fVar9 * fVar6 - fVar15 * fVar7;
        fVar4 = fVar15 * fVar5 - fVar8 * fVar6;
        fVar5 = fVar8 * fVar7 - fVar9 * fVar5;
        local_94 = fVar12 * fVar20 + fVar11 * fVar17 + fVar10 * fVar4;
        fVar24 = 1.0 / fVar24;
        fStack_cc = ((fVar13 * fVar27 - fVar11 * fVar28) - fVar10 * fVar18) * fVar24;
        local_c8 = ((fVar11 * fVar29 + fVar10 * fVar5) - fVar13 * fVar20) * fVar24;
        local_c4 = ((fVar11 * fVar21 + fVar10 * fVar32) - fVar13 * fVar19) * fVar24;
        local_e0 = ((fVar15 * fVar27 - fVar8 * fVar26) - fVar14 * fVar25) * fVar24;
        local_c0 = ((fVar9 * fVar26 - fVar15 * fVar28) - fVar14 * fVar16) * fVar24;
        fStack_dc = ((fVar11 * fVar26 + fVar10 * fVar25) - fVar12 * fVar27) * fVar24;
        local_d8 = local_94 * fVar24;
        local_bc = ((fVar12 * fVar28 + fVar10 * fVar16) - fVar13 * fVar26) * fVar24;
        local_b8 = ((fVar10 * fVar31 - fVar13 * fVar17) - fVar12 * fVar29) * fVar24;
        local_b0 = ((fVar9 * fVar25 - fVar15 * fVar18) + fVar8 * fVar16) * fVar24;
        local_d4 = (fVar12 * fVar19 + fVar11 * fVar30 + fVar10 * fVar23) * fVar24;
        local_b4 = ((fVar10 * fVar22 - fVar13 * fVar30) - fVar12 * fVar21) * fVar24;
        fStack_d0 = ((fVar8 * fVar28 + fVar14 * fVar18) - fVar9 * fVar27) * fVar24;
        fStack_ac = ((fVar12 * fVar18 - fVar11 * fVar16) - fVar13 * fVar25) * fVar24;
        local_a8 = ((-(fVar11 * fVar31) - fVar13 * fVar4) - fVar12 * fVar5) * fVar24;
        local_a4 = ((-(fVar11 * fVar22) - fVar13 * fVar23) - fVar12 * fVar32) * fVar24;
      }
      switch(param_1[0x14]) {
      default:
        uVar3 = 0;
        break;
      case '\x01':
        uVar3 = 1;
        break;
      case '\x02':
        uVar3 = 2;
        break;
      case '\x03':
        uVar3 = 3;
        break;
      case '\x04':
        uVar3 = 4;
      }
      fn_00549b64(auStack_328,uVar3,&local_e0);
    }
    else {
      fn_00156298(param_3);
      fn_001562b4(param_3);
      switch(param_1[0x14]) {
      default:
        uVar3 = 0;
        break;
      case '\x01':
        uVar3 = 1;
        break;
      case '\x02':
        uVar3 = 2;
        break;
      case '\x03':
        uVar3 = 3;
        break;
      case '\x04':
        uVar3 = 4;
      }
      fn_005498c4(auStack_328,uVar3);
    }
    fn_0044f020(param_4,auStack_328);
    param_1[0x15] = '\0';
  }
  return;
}



void fn_005e9048(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  *param_1 = 1;
  param_1[1] = param_2;
  param_1[0x15] = 1;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  *(undefined4 *)(param_1 + 8) = in_s0;
  *(undefined4 *)(param_1 + 0xc) = in_s1;
  *(undefined4 *)(param_1 + 0x10) = in_s2;
  param_1[0x14] = param_6;
  return;
}


