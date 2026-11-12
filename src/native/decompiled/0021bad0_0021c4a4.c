#include "0021bad0_0021c4a4.h"



void fn_0021c4a4(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x68f) = param_2;
  *(byte *)(*(int *)(param_1 + 0x84) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0x84) + 0x44) & 0xfe;
  return;
}



void fn_0021c488(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x135) = param_2;
  *(byte *)(*(int *)(param_1 + 0x74) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0x74) + 0x44) & 0xfe;
  return;
}



void fn_0021c438(int param_1,int param_2)

{
  char *pcVar1;
  
  if (*(char *)(param_1 + 0x136) != param_2) {
    if (param_2 == 0) {
      pcVar1 = (char *)&DAT_0021c470;
    }
    else {
      pcVar1 = (char *)&DAT_0021c47c;
    }
    fn_0021b104(param_1,pcVar1);
    *(char *)(param_1 + 0x136) = (char)param_2;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0021be8c) */
/* WARNING: Removing unreachable block (ram,0x0021be9c) */

void fn_0021bcf4(int param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  undefined4 in_s0;
  float in_s1;
  float in_s2;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x100);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(param_1 + 0x68c) | *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(char *)(param_1 + 0x68c) == '\0' | *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    if (*(char *)(param_1 + 0x68c) == '\0') {
      iVar1 = *(int *)(param_1 + 0x60);
      bVar2 = *(byte *)(iVar1 + 0x44) & 0xbf;
    }
    else {
      fn_006b15ac(param_1,param_2);
      in_fpscr = in_fpscr & 0xfffffff;
      for (fVar6 = ABS(in_s2 * 40.743664); 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
      }
      uVar7 = VectorFloatToUnsigned(0,3);
      uVar8 = VectorFloatToUnsigned(0,3);
      uVar9 = VectorFloatToUnsigned(fVar6,3);
      uVar4 = uVar8 & 0xff;
      uVar3 = uVar7 & 0xff;
      uVar5 = uVar9 & 0xff;
      fVar12 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      fVar13 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      fVar11 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      fVar10 = (float)(&DAT_007d6f20)[uVar3 * 4] +
               (0.0 - fVar12) * (float)(&DAT_007d6f28)[uVar3 * 4];
      fVar15 = (float)(&DAT_007d6f24)[uVar3 * 4] +
               (0.0 - fVar12) * (float)(&DAT_007d6f2c)[uVar3 * 4];
      fVar14 = (float)(&DAT_007d6f24)[uVar4 * 4] +
               (0.0 - fVar13) * (float)(&DAT_007d6f2c)[uVar4 * 4];
      fVar12 = (float)(&DAT_007d6f20)[uVar4 * 4] +
               (0.0 - fVar13) * (float)(&DAT_007d6f28)[uVar4 * 4];
      fVar13 = (float)(&DAT_007d6f20)[uVar5 * 4] +
               (fVar6 - fVar11) * (float)(&DAT_007d6f28)[uVar5 * 4];
      fVar6 = (float)(&DAT_007d6f24)[uVar5 * 4] +
              (fVar6 - fVar11) * (float)(&DAT_007d6f2c)[uVar5 * 4];
      iVar1 = *(int *)(param_1 + 0x60);
      if (in_s2 * 40.743664 < 0.0) {
        fVar13 = -fVar13;
      }
      *(float *)(iVar1 + 0x48) = fVar6 * fVar14;
      *(float *)(iVar1 + 0x4c) = fVar10 * fVar6 * fVar12 - fVar15 * fVar13;
      *(float *)(iVar1 + 0x50) = fVar10 * fVar13 + fVar15 * fVar6 * fVar12;
      *(undefined4 *)(iVar1 + 0x54) = in_s0;
      *(float *)(iVar1 + 0x58) = fVar13 * fVar14;
      *(float *)(iVar1 + 100) = -in_s1;
      *(float *)(iVar1 + 0x68) = -fVar12;
      *(float *)(iVar1 + 0x6c) = fVar10 * fVar14;
      *(float *)(iVar1 + 0x70) = fVar15 * fVar14;
      *(undefined4 *)(iVar1 + 0x74) = 0;
      *(float *)(iVar1 + 0x5c) = fVar15 * fVar6 + fVar10 * fVar13 * fVar12;
      *(float *)(iVar1 + 0x60) = fVar15 * fVar13 * fVar12 - fVar10 * fVar6;
      bVar2 = *(byte *)(iVar1 + 0x44) & 0xbf | 0x40;
    }
    *(byte *)(iVar1 + 0x44) = bVar2;
  }
  return;
}



void fn_0021bc18(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int **)(param_1 + 0x694) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x694) + 4))();
    *(undefined4 *)(param_1 + 0x694) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  uVar2 = *(uint *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  iVar4 = *(int *)(param_1 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 0x74;
    } while (uVar1 != uVar2);
  }
  uVar1 = iVar4 - uVar3;
  iVar4 = (int)((longlong)(int)uVar1 * -0x72c234f7 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  fn_001008c4(uVar3,(iVar4 >> 6) - (iVar4 >> 0x1f),0);
  uVar3 = *(uint *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x218) = 0;
  uVar2 = *(uint *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x21c) = 0;
  iVar4 = *(int *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x220) = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 0x74;
    } while (uVar1 != uVar2);
  }
  uVar1 = iVar4 - uVar3;
  iVar4 = (int)((longlong)(int)uVar1 * -0x72c234f7 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  fn_001008c4(uVar3,(iVar4 >> 6) - (iVar4 >> 0x1f),0);
  fn_0021e3f4(param_1);
  return;
}



undefined4 fn_0021bb28(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float local_28;
  float fStack_24;
  float fStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  piVar3 = (int *)**(int **)(param_1 + 0x20c);
  while( true ) {
    if (piVar3 == *(int **)(param_1 + 0x20c)) {
      return 0;
    }
    if (piVar3[2] == param_2) break;
    piVar3 = (int *)*piVar3;
  }
  iVar4 = piVar3[5];
  iVar1 = *(int *)(param_1 + 0x68);
  local_28 = *(float *)(iVar4 + 0x1c) + *(float *)(iVar1 + 0x1c);
  fStack_24 = *(float *)(iVar4 + 0x20) + *(float *)(iVar1 + 0x20);
  fStack_20 = *(float *)(iVar4 + 0x24) + *(float *)(iVar1 + 0x24);
  if (*(int *)(param_1 + 0x138) != 4 && *(int *)(param_1 + 0x138) != 1) {
    iVar1 = *(int *)(param_1 + 0x68);
    uVar2 = *(undefined4 *)(iVar1 + 0x20);
    uVar5 = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(param_1 + 0x140) = uVar2;
    *(undefined4 *)(param_1 + 0x144) = uVar5;
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  fn_0021b74c(param_1,&local_28,&local_1c);
  *(undefined4 *)(param_1 + 0x138) = 4;
  if (param_3 != 0) {
    fn_0021c13c(param_1,1);
    *(undefined4 *)(param_1 + 0x138) = 3;
  }
  return 1;
}



bool fn_0021c13c(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float local_18;
  float fStack_14;
  
  iVar2 = *(int *)(param_1 + 0x688) + 1;
  *(int *)(param_1 + 0x688) = iVar2;
  fVar4 = *(float *)(param_1 + 0x66c);
  fVar8 = fVar4 - *(float *)(param_1 + 0x678);
  fVar6 = *(float *)(param_1 + 0x670);
  fVar7 = *(float *)(param_1 + 0x674) - *(float *)(param_1 + 0x680);
  bVar3 = param_2 == 0;
  fVar5 = fVar6 - *(float *)(param_1 + 0x67c);
  if (bVar3) {
    param_2 = param_1 + 0x400;
  }
  fVar1 = fVar7 * fVar7;
  if (bVar3) {
    fVar7 = *(float *)(param_2 + 0x284);
  }
  fVar5 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar1);
  fVar8 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  if (!bVar3) {
    fVar7 = fVar5;
  }
  fVar5 = (fVar8 * fVar7) / fVar5;
  if (1.0 < fVar5) {
    fVar5 = 1.0;
  }
  local_1c = (fVar4 + fVar5 * (*(float *)(param_1 + 0x678) - fVar4)) - *(float *)(param_1 + 0x66c);
  local_18 = (fVar6 + fVar5 * (*(float *)(param_1 + 0x67c) - fVar6)) - *(float *)(param_1 + 0x670);
  fStack_14 = (*(float *)(param_1 + 0x674) +
              fVar5 * (*(float *)(param_1 + 0x680) - *(float *)(param_1 + 0x674))) -
              *(float *)(param_1 + 0x674);
  local_28 = *(float *)(param_1 + 0x160) + local_1c;
  local_24 = *(float *)(param_1 + 0x164) + local_18;
  fStack_20 = *(float *)(param_1 + 0x168) + fStack_14;
  local_1c = *(float *)(param_1 + 0x16c) + local_1c;
  local_18 = *(float *)(param_1 + 0x170) + local_18;
  fStack_14 = *(float *)(param_1 + 0x174) + fStack_14;
  fn_0054ca94(*(undefined4 *)(param_1 + 0x60),&local_28);
  if (*(int *)(param_1 + 0x68) != 0) {
    fn_0054ca94(*(int *)(param_1 + 0x68),&local_1c);
  }
  return (int)fVar5 < 0x3f800000;
}



void fn_0021bae4(int param_1)

{
  *(byte *)(*(int *)(param_1 + 0x84) + 0x44) = *(byte *)(*(int *)(param_1 + 0x84) + 0x44) & 0xfe;
  fn_0021d848(param_1,0);
  if (*(int *)(param_1 + 0x28) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  return;
}



void fn_0021bad0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x84) * 4);
  *(byte *)(*(int *)(iVar1 + 0x84) + 0x44) = *(byte *)(*(int *)(iVar1 + 0x84) + 0x44) & 0xfe;
  fn_0021d848(iVar1,0);
  if (*(int *)(iVar1 + 0x28) != -1) {
    fn_00159f34(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
  }
  return;
}


