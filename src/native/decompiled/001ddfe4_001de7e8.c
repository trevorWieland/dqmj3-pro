#include "001ddfe4_001de7e8.h"



void fn_001de7e8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar1 = fn_006b51d8(*(undefined4 *)(DAT_00897804 + 0x1c),3);
  *(undefined4 *)(param_1 + 0x204) = uVar1;
  iVar2 = fn_006a7f8c(param_1 + 0x254);
  if (iVar2 == 0) {
    iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar1);
    uVar1 = fn_006f7a9c(DAT_008977e0);
    fn_001c6c54(&local_20,uVar1,(int)*(short *)(iVar2 + 0x1c),0);
    *(undefined4 *)(param_1 + 0x254) = local_20;
    *(undefined4 *)(param_1 + 600) = uStack_1c;
    *(undefined4 *)(param_1 + 0x25c) = uStack_18;
    fn_001e1268(param_1,3);
  }
  fn_001e8ef0(param_1,3,1);
  uVar1 = fn_006f7a5c(DAT_008977e0);
  fn_001d7084(uVar1,&DAT_007be734);
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
  uVar1 = fn_0016a9b0(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7537,uVar1,2);
  *(undefined4 *)(param_1 + 0x318) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 400) + 0x3d) = 1;
  fn_00121838(DAT_00897800,DAT_008917b4,1);
  fn_001ea890(param_1,4);
  *(undefined1 *)(param_1 + 0x398) = 1;
  return;
}



void fn_001de754(int *param_1)

{
  if (*(char *)((int)param_1 + 0x22d) == '\r') {
    return;
  }
  fn_001ea890(param_1,0xd);
  if ((char)param_1[0x82] == -1) {
    (**(code **)(*param_1 + 0x44))(param_1,0x15,4,0);
  }
  else {
    (**(code **)(*param_1 + 0x44))(param_1,8);
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_001de698(int param_1)

{
  if (*(int *)(param_1 + 0x1ec) != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
  }
  fn_00259728(param_1 + 0x1e8,1);
  if (-1 < *(int *)(param_1 + 0x300)) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x300) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x40c) != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x40c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1f0) != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x1f0) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 500) = 0;
  return;
}



void fn_001de4fc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  
  fn_006f7a5c(DAT_008977e0);
  puVar1 = (undefined4 *)fn_006a91b8();
  uVar17 = *puVar1;
  fn_006f7a5c(DAT_008977e0);
  puVar1 = (undefined4 *)fn_006a93f0();
  uVar12 = 0;
  uVar11 = 0x41c80000;
  uVar14 = *puVar1;
  uVar15 = puVar1[2];
  if (*(char *)(param_1 + 0x208) == -1) {
    fVar8 = 16.0;
    fVar16 = -35.0;
    fVar9 = fVar8;
  }
  else {
    iVar2 = fn_006aa538(param_1);
    iVar3 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
    fVar13 = *(float *)(&DAT_007be818 + iVar3 * 4);
    iVar3 = fn_006f7358(DAT_008977e0);
    if (iVar3 == 0) {
      pbVar4 = (byte *)fn_00242a30(iVar2);
      uVar5 = (uint)*(byte *)(param_1 + 0x22d);
      fVar9 = (float)VectorUnsignedToFloat((uint)pbVar4[1],(byte)(in_fpscr >> 0x16) & 3);
      fVar16 = (float)VectorUnsignedToFloat((uint)pbVar4[2],(byte)(in_fpscr >> 0x16) & 3);
      fVar8 = (float)VectorUnsignedToFloat((uint)*pbVar4,(byte)(in_fpscr >> 0x16) & 3);
      fVar9 = fVar9 * fVar13;
      fVar16 = -(fVar16 * fVar13);
      fVar8 = fVar8 * fVar13;
      if ((uVar5 != 0xb) || (uVar5 = *(uint *)(param_1 + 0x438), uVar5 == 5)) {
        bVar6 = iVar2 != 0x1e0;
        if (bVar6) {
          uVar5 = 0xfffffe1f;
        }
        bVar7 = iVar2 + uVar5 == 0;
        if ((!bVar6 || bVar7) || iVar2 == 0x36c) {
          uVar11 = 0x42480000;
        }
        if ((!bVar6 || bVar7) || iVar2 == 0x36c) {
          uVar12 = uVar11;
        }
      }
    }
    else {
      pbVar4 = (byte *)fn_00242a70();
      fVar10 = (float)VectorUnsignedToFloat((uint)pbVar4[1],(byte)(in_fpscr >> 0x16) & 3);
      fVar9 = (float)VectorUnsignedToFloat((uint)pbVar4[2],(byte)(in_fpscr >> 0x16) & 3);
      fVar8 = (float)VectorUnsignedToFloat((uint)*pbVar4,(byte)(in_fpscr >> 0x16) & 3);
      fVar16 = -(fVar9 * fVar13);
      fVar8 = fVar8 * fVar13;
      fVar9 = fVar10 * fVar13;
    }
  }
  iVar2 = fn_006f7a5c(DAT_008977e0);
  *(undefined4 *)(iVar2 + 0x34) = uVar17;
  *(float *)(iVar2 + 0x38) = fVar9;
  *(float *)(iVar2 + 0x3c) = fVar16;
  iVar2 = fn_006f7a5c(DAT_008977e0);
  *(undefined4 *)(iVar2 + 0x40) = uVar14;
  *(float *)(iVar2 + 0x44) = fVar8;
  *(undefined4 *)(iVar2 + 0x48) = uVar15;
  iVar2 = fn_006f7a5c(DAT_008977e0);
  *(undefined4 *)(iVar2 + 0xb4) = uVar12;
  *(undefined4 *)(iVar2 + 0xb8) = uVar11;
  uVar12 = *(undefined4 *)(iVar2 + 0xb0);
  fn_00764608();
  *(undefined4 *)(iVar2 + 0xb0) = uVar12;
  return;
}



void fn_001de2b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  float in_s1;
  float fVar5;
  
  if (param_5 == 0) {
    *(undefined1 *)(param_1 + 0x2fd) = 0;
  }
  else if (*(char *)(*(int *)(param_1 + 400) + 0x3c) != '\0') {
    fn_001e1698(param_1);
    *(undefined4 *)(*(int *)(param_1 + 400) + 0x1c) = 0x41000000;
    *(undefined1 *)(*(int *)(param_1 + 400) + 0x3c) = 0;
    fn_0023f454(*(undefined4 *)(param_1 + 400));
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) & 0xfffffffb;
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  if ((*(char *)(param_1 + 0x324) != '\0') &&
     (*(undefined1 *)(param_1 + 0x324) = 0, *(float *)(param_1 + 0x24) < in_s1)) {
    *(undefined4 *)(param_1 + 0x228) = 1;
  }
  *(undefined1 *)(param_1 + 0x3f4) = 0;
  if (*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0') {
    fn_001e1c54(param_1,param_5);
    iVar2 = fn_006f7a48(DAT_008977e0);
    cVar1 = *(char *)(iVar2 + 4);
    fVar5 = 0.0;
    bVar4 = cVar1 != '\x04';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x22c);
    }
    if (bVar4 && cVar1 != '\0') {
      uVar3 = fn_006f7a5c(DAT_008977e0);
      fn_001d6988(uVar3,4);
      *(undefined1 *)(param_1 + 0x22c) = 0;
    }
    if (param_5 != 0) {
      iVar2 = fn_006f7370(DAT_008977e0);
      if (iVar2 == 0) {
        fn_001eab44(param_1,0x7534,param_4);
      }
      else {
        fn_001eab44(param_1,0x7564,param_4);
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    iVar2 = fn_001dcf20(param_1,param_2,param_3,1);
    if (iVar2 == 0) {
      fn_001dcc90(param_1,param_2,param_3);
    }
    if (0xc1efffff < *(uint *)(param_1 + 0x31c)) {
      *(undefined1 *)(param_1 + 0x401) = 1;
    }
    bVar4 = *(float *)(param_1 + 0x44) == fVar5;
    if (bVar4) {
      in_s1 = *(float *)(param_1 + 0x4c);
    }
    if (!bVar4 || (!bVar4 || in_s1 != fVar5)) {
      *(float *)(param_1 + 0x344) = *(float *)(param_1 + 0x44) * 1.2;
      *(float *)(param_1 + 0x34c) = *(float *)(param_1 + 0x4c) * 1.2;
      *(float *)(param_1 + 0x348) = fVar5;
    }
    *(float *)(param_1 + 0x31c) = fVar5;
  }
  return;
}



undefined4 fn_001de26c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x50))(param_1), iVar1 == 7)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* WARNING: Removing unreachable block (ram,0x001de19c) */
/* WARNING: Removing unreachable block (ram,0x001de1b8) */

void fn_001ddfe4(undefined4 param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint in_fpscr;
  float in_s0;
  float fVar6;
  float in_s1;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  undefined4 local_2c;
  
  fn_00171634();
  uVar18 = 0;
  local_60 = -in_s1;
  in_fpscr = in_fpscr & 0xfffffff;
  local_64 = 0.0;
  bVar4 = false;
  if (in_s0 == 0.0) {
    in_fpscr = in_fpscr | 0x40000000;
    bVar4 = SUB41(in_fpscr >> 0x1e,0);
  }
  bVar5 = false;
  if (bVar4) {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(local_60 == 0.0) << 0x1e;
    bVar5 = SUB41(in_fpscr >> 0x1e,0);
  }
  local_68 = in_s0;
  if (!bVar5) {
    fVar7 = 1.0 / SQRT(in_s0 * in_s0 + 0.0 + local_60 * local_60);
    local_68 = in_s0 * fVar7;
    local_64 = fVar7 * 0.0;
    local_60 = local_60 * fVar7;
    iVar1 = fn_006f7a5c(DAT_008977e0);
    fVar6 = (*(float *)(iVar1 + 0x14) + 3.1415927) * 40.743664;
    fVar16 = (float)uVar18;
    in_fpscr = in_fpscr & 0xfffffff;
    for (fVar7 = ABS(fVar6); fVar17 = fVar16, 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
    }
    while (0x477fffff < (int)fVar17) {
      fVar17 = (float)uVar18 - 65536.0;
      uVar18 = (ulonglong)(uint)fVar17;
    }
    uVar8 = VectorFloatToUnsigned(fVar16,3);
    uVar9 = VectorFloatToUnsigned(fVar7,3);
    uVar10 = VectorFloatToUnsigned(fVar17,3);
    uVar3 = uVar8 & 0xff;
    fVar14 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = uVar9 & 0xff;
    fVar13 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar8 = uVar10 & 0xff;
    fVar11 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (float)(&DAT_007d6f20)[uVar3 * 4] +
             (fVar16 - fVar14) * (float)(&DAT_007d6f28)[uVar3 * 4];
    fVar15 = (float)(&DAT_007d6f24)[uVar3 * 4] +
             (fVar16 - fVar14) * (float)(&DAT_007d6f2c)[uVar3 * 4];
    fVar14 = (float)(&DAT_007d6f20)[uVar2 * 4] +
             (fVar7 - fVar13) * (float)(&DAT_007d6f28)[uVar2 * 4];
    fStack_30 = (float)(&DAT_007d6f24)[uVar2 * 4] +
                (fVar7 - fVar13) * (float)(&DAT_007d6f2c)[uVar2 * 4];
    fVar13 = (float)(&DAT_007d6f20)[uVar8 * 4] +
             (fVar17 - fVar11) * (float)(&DAT_007d6f28)[uVar8 * 4];
    fVar7 = (float)(&DAT_007d6f24)[uVar8 * 4] +
            (fVar17 - fVar11) * (float)(&DAT_007d6f2c)[uVar8 * 4];
    if (fVar6 < fVar16) {
      fVar14 = -fVar14;
    }
    local_58 = fVar7 * fStack_30;
    local_48 = fVar13 * fStack_30;
    local_34 = fVar12 * fStack_30;
    fStack_30 = fVar15 * fStack_30;
    local_38 = -fVar14;
    local_54 = fVar12 * fVar7 * fVar14 - fVar15 * fVar13;
    local_50 = fVar12 * fVar13 + fVar15 * fVar7 * fVar14;
    fStack_40 = fVar15 * fVar13 * fVar14 - fVar12 * fVar7;
    local_44 = fVar15 * fVar7 + fVar12 * fVar13 * fVar14;
    local_4c = 0;
    local_3c = 0;
    local_2c = 0;
    fn_0016947c(&local_68,&local_58);
  }
  if (param_2 != (float *)0x0) {
    *param_2 = local_68;
    param_2[1] = local_64;
    param_2[2] = local_60;
  }
  return;
}


