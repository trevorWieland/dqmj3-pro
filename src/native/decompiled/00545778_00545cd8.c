#include "00545778_00545cd8.h"



undefined4 * fn_00545cd8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_s0;
  undefined4 *in_stack_00000000;
  undefined4 *in_stack_00000004;
  undefined1 in_stack_00000008;
  
  puVar1 = (undefined4 *)fn_00543524();
  *puVar1 = &DAT_008578dc;
  uVar2 = fn_00171688();
  fn_001781f0(puVar1 + 0x52,uVar2);
  uVar2 = fn_00171688();
  fn_001781f0(puVar1 + 0x5e,uVar2);
  uVar2 = fn_00525a2c();
  fn_001694c0(puVar1 + 0x6a,uVar2);
  uVar2 = fn_00525a2c();
  fn_001694c0(puVar1 + 0x7a,uVar2);
  uVar2 = fn_00171688();
  fn_001781f0(puVar1 + 0x8a,uVar2);
  puVar1[0x96] = *in_stack_00000000;
  *(undefined1 *)(puVar1 + 0x97) = *(undefined1 *)(in_stack_00000000 + 1);
  *in_stack_00000000 = 0;
  puVar1[0x98] = *in_stack_00000004;
  *(undefined1 *)(puVar1 + 0x99) = *(undefined1 *)(in_stack_00000004 + 1);
  *in_stack_00000004 = 0;
  puVar1[0x9a] = 0;
  puVar1[0x9b] = 0;
  puVar1[0xa5] = in_s0;
  *(undefined1 *)(puVar1 + 0xa6) = in_stack_00000008;
  return puVar1;
}



void fn_00545c9c(int param_1)

{
  uint *puVar1;
  uint in_s0;
  
  puVar1 = (uint *)(**(code **)(**(int **)(param_1 + 600) + 0x10))();
  if ((puVar1 != (uint *)0x0) && ((*puVar1 & 0x80000000) == 0)) {
    puVar1 = (uint *)0x0;
  }
  puVar1[5] = in_s0;
  return;
}



void fn_00545c14(int param_1)

{
  uint *puVar1;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  uint in_s4;
  uint in_s5;
  
  puVar1 = (uint *)(**(code **)(**(int **)(param_1 + 0x260) + 0x10))();
  if ((puVar1 != (uint *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
    puVar1 = (uint *)0x0;
  }
  puVar1[4] = (uint)(in_s3 - in_s2);
  puVar1[3] = (uint)((in_s1 - in_s0) / (in_s3 - in_s2));
  puVar1[5] = (uint)((in_s1 + in_s0) * 0.5);
  puVar1[6] = (uint)((in_s3 + in_s2) * 0.5);
  puVar1[1] = in_s4;
  puVar1[2] = in_s5;
  return;
}



void fn_00545bec(int param_1)

{
  int iVar1;
  undefined4 in_s0;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x260) + 0x10))();
  *(undefined4 *)(iVar1 + 4) = in_s0;
  return;
}



void fn_00545bc4(int param_1)

{
  int iVar1;
  undefined4 in_s0;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x260) + 0x10))();
  *(undefined4 *)(iVar1 + 8) = in_s0;
  return;
}



void fn_00545b74(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_2 + 0x20))(param_2,param_1);
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  for (puVar1 = *(undefined4 **)(param_1 + 0x18); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_2);
  }
  return;
}



void fn_00545778(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  local_5c = *(undefined4 *)(param_1 + 0x98);
  uStack_58 = *(undefined4 *)(param_1 + 0xa8);
  uStack_54 = *(undefined4 *)(param_1 + 0xb8);
  piVar4 = *(int **)(param_1 + 600);
  if (*(int **)(param_1 + 0xc) == (int *)0x0) {
    uVar1 = fn_00171688();
    (**(code **)(*piVar4 + 0xc))(piVar4,param_1 + 0x148,uVar1,&local_5c);
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
    (**(code **)(*piVar4 + 0xc))(piVar4,param_1 + 0x148,uVar1,&local_5c);
  }
  iVar2 = fn_001ad184(param_1 + 0x178,param_1 + 0x148);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)fn_00171688();
    uVar1 = puVar3[1];
    uVar7 = puVar3[2];
    uVar9 = puVar3[3];
    uVar11 = puVar3[4];
    uVar13 = puVar3[5];
    uVar15 = puVar3[6];
    uVar17 = puVar3[7];
    *(undefined4 *)(param_1 + 0x178) = *puVar3;
    *(undefined4 *)(param_1 + 0x17c) = uVar1;
    *(undefined4 *)(param_1 + 0x180) = uVar7;
    *(undefined4 *)(param_1 + 0x184) = uVar9;
    *(undefined4 *)(param_1 + 0x188) = uVar11;
    *(undefined4 *)(param_1 + 0x18c) = uVar13;
    *(undefined4 *)(param_1 + 400) = uVar15;
    *(undefined4 *)(param_1 + 0x194) = uVar17;
    uVar1 = puVar3[9];
    uVar7 = puVar3[10];
    uVar9 = puVar3[0xb];
    *(undefined4 *)(param_1 + 0x198) = puVar3[8];
    *(undefined4 *)(param_1 + 0x19c) = uVar1;
    *(undefined4 *)(param_1 + 0x1a0) = uVar7;
    *(undefined4 *)(param_1 + 0x1a4) = uVar9;
  }
  (**(code **)(**(int **)(param_1 + 0x260) + 0xc))
            (*(int **)(param_1 + 0x260),param_1 + 0x1a8,param_1 + 0x228);
  fVar22 = *(float *)(param_1 + 0x1bc);
  fVar23 = *(float *)(param_1 + 0x1d4);
  fVar14 = *(float *)(param_1 + 0x1b8);
  fVar12 = *(float *)(param_1 + 0x1c0);
  fVar5 = *(float *)(param_1 + 0x1e4);
  fVar21 = *(float *)(param_1 + 0x1c4);
  fVar26 = *(float *)(param_1 + 0x1c8);
  fVar8 = *(float *)(param_1 + 0x1dc);
  fVar6 = *(float *)(param_1 + 0x1e0);
  fVar20 = *(float *)(param_1 + 0x1a8);
  fVar10 = *(float *)(param_1 + 0x1d8);
  fVar19 = *(float *)(param_1 + 0x1ac);
  fVar18 = *(float *)(param_1 + 0x1b0);
  fVar16 = *(float *)(param_1 + 0x1b4);
  fVar24 = *(float *)(param_1 + 0x1cc);
  fVar25 = *(float *)(param_1 + 0x1d0);
  fVar31 = fVar22 * fVar23;
  fVar39 = fVar14 * fVar25;
  fVar27 = fVar21 * fVar25;
  fVar28 = fVar21 * fVar26;
  fVar29 = fVar22 * fVar26;
  fVar30 = fVar12 * fVar24;
  fVar35 = (((((fVar22 * fVar25 * fVar5 + fVar12 * fVar23 * fVar8 + fVar21 * fVar24 * fVar6) *
               fVar20 + fVar19 * (fVar14 * fVar23 * fVar6 + fVar12 * fVar26 * fVar5 +
                                 fVar27 * fVar10) +
               fVar18 * (fVar14 * fVar24 * fVar5 + fVar31 * fVar10 + fVar28 * fVar8) +
              fVar16 * (fVar39 * fVar8 + fVar29 * fVar6 + fVar30 * fVar10)) -
             fVar20 * (fVar31 * fVar6 + fVar30 * fVar5 + fVar27 * fVar8)) -
            fVar19 * (fVar39 * fVar5 + fVar12 * fVar23 * fVar10 + fVar28 * fVar6)) -
           fVar18 * (fVar14 * fVar23 * fVar8 + fVar29 * fVar5 + fVar21 * fVar24 * fVar10)) -
           fVar16 * (fVar14 * fVar24 * fVar6 + fVar22 * fVar25 * fVar10 + fVar12 * fVar26 * fVar8);
  if (fVar35 == 0.0) {
    puVar3 = (undefined4 *)fn_00525a2c();
    uVar1 = puVar3[1];
    uVar7 = puVar3[2];
    uVar9 = puVar3[3];
    uVar11 = puVar3[4];
    uVar13 = puVar3[5];
    uVar15 = puVar3[6];
    uVar17 = puVar3[7];
    *(undefined4 *)(param_1 + 0x1e8) = *puVar3;
    *(undefined4 *)(param_1 + 0x1ec) = uVar1;
    *(undefined4 *)(param_1 + 0x1f0) = uVar7;
    *(undefined4 *)(param_1 + 500) = uVar9;
    *(undefined4 *)(param_1 + 0x1f8) = uVar11;
    *(undefined4 *)(param_1 + 0x1fc) = uVar13;
    *(undefined4 *)(param_1 + 0x200) = uVar15;
    *(undefined4 *)(param_1 + 0x204) = uVar17;
    uVar1 = puVar3[9];
    uVar7 = puVar3[10];
    uVar9 = puVar3[0xb];
    uVar11 = puVar3[0xc];
    uVar13 = puVar3[0xd];
    uVar15 = puVar3[0xe];
    uVar17 = puVar3[0xf];
    *(undefined4 *)(param_1 + 0x208) = puVar3[8];
    *(undefined4 *)(param_1 + 0x20c) = uVar1;
    *(undefined4 *)(param_1 + 0x210) = uVar7;
    *(undefined4 *)(param_1 + 0x214) = uVar9;
    *(undefined4 *)(param_1 + 0x218) = uVar11;
    *(undefined4 *)(param_1 + 0x21c) = uVar13;
    *(undefined4 *)(param_1 + 0x220) = uVar15;
    *(undefined4 *)(param_1 + 0x224) = uVar17;
    return;
  }
  fVar30 = fVar30 - fVar22 * fVar25;
  fVar27 = fVar27 - fVar12 * fVar23;
  fVar28 = fVar28 - fVar14 * fVar23;
  fVar29 = fVar29 - fVar14 * fVar24;
  fVar34 = fVar25 * fVar5 - fVar23 * fVar6;
  fVar33 = fVar24 * fVar5 - fVar23 * fVar8;
  fVar36 = fVar26 * fVar5 - fVar23 * fVar10;
  fVar32 = fVar25 * fVar8 - fVar24 * fVar6;
  fVar31 = fVar31 - fVar21 * fVar24;
  fVar25 = fVar25 * fVar10 - fVar26 * fVar6;
  fVar39 = fVar39 - fVar12 * fVar26;
  fVar23 = fVar24 * fVar10 - fVar26 * fVar8;
  fVar24 = fVar21 * fVar8 - fVar22 * fVar5;
  fVar37 = fVar14 * fVar5 - fVar21 * fVar10;
  fVar38 = fVar14 * fVar8 - fVar22 * fVar10;
  fVar26 = fVar12 * fVar5 - fVar21 * fVar6;
  fVar5 = fVar22 * fVar6 - fVar12 * fVar8;
  fVar6 = fVar12 * fVar10 - fVar14 * fVar6;
  fVar35 = 1.0 / fVar35;
  *(float *)(param_1 + 0x1e8) = ((fVar22 * fVar34 - fVar12 * fVar33) - fVar21 * fVar32) * fVar35;
  *(float *)(param_1 + 0x1ec) = ((fVar18 * fVar33 + fVar16 * fVar32) - fVar19 * fVar34) * fVar35;
  *(float *)(param_1 + 0x1f0) = (fVar19 * fVar26 + fVar18 * fVar24 + fVar16 * fVar5) * fVar35;
  *(float *)(param_1 + 500) = (fVar19 * fVar27 + fVar18 * fVar31 + fVar16 * fVar30) * fVar35;
  *(float *)(param_1 + 0x1f8) = ((fVar12 * fVar36 + fVar21 * fVar25) - fVar14 * fVar34) * fVar35;
  *(float *)(param_1 + 0x1fc) = ((fVar20 * fVar34 - fVar18 * fVar36) - fVar16 * fVar25) * fVar35;
  *(float *)(param_1 + 0x200) = ((fVar18 * fVar37 + fVar16 * fVar6) - fVar20 * fVar26) * fVar35;
  *(float *)(param_1 + 0x204) = ((fVar18 * fVar28 + fVar16 * fVar39) - fVar20 * fVar27) * fVar35;
  *(float *)(param_1 + 0x210) = ((fVar16 * fVar38 - fVar20 * fVar24) - fVar19 * fVar37) * fVar35;
  *(float *)(param_1 + 0x214) = ((fVar16 * fVar29 - fVar20 * fVar31) - fVar19 * fVar28) * fVar35;
  *(float *)(param_1 + 0x220) = ((-(fVar18 * fVar38) - fVar20 * fVar5) - fVar19 * fVar6) * fVar35;
  *(float *)(param_1 + 0x224) = ((-(fVar18 * fVar29) - fVar20 * fVar30) - fVar19 * fVar39) * fVar35;
  *(float *)(param_1 + 0x208) = ((fVar14 * fVar33 - fVar22 * fVar36) - fVar21 * fVar23) * fVar35;
  *(float *)(param_1 + 0x20c) = ((fVar19 * fVar36 + fVar16 * fVar23) - fVar20 * fVar33) * fVar35;
  *(float *)(param_1 + 0x218) = ((fVar14 * fVar32 - fVar22 * fVar25) + fVar12 * fVar23) * fVar35;
  *(float *)(param_1 + 0x21c) = ((fVar19 * fVar25 - fVar18 * fVar23) - fVar20 * fVar32) * fVar35;
  return;
}


